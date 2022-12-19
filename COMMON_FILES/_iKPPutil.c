

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "gscbdef.h"
#include "gscbio.h"
#include "gscblookupdef.h"

#define LOG_DEFINED
#include "gscblog.h"
#undef LOG_DEFINED

#include "gscblookupdef.h"

#include "KPPdef.h"
#include "KPPstruct.h"
#include "KPPproto.h"
#include "field_id.h"






/************************************************************************/
/* Function Name	: check_put_header								    */
/* Description		: Function to check the LI_P_HEADER structure		*/
/* Input			: LI_P_HEADER_T header: header to be checked		*/
/* Return Values	: int return code GMPC_GOOD = success				*/
/*					  GMPC_BAD = incorrect header						*/
/* Limitations		: none												*/
/************************************************************************/

int check_put_header(LI_P_HEADER_T header)
{
	if(0 == (strlen(header.user_id) ) || (0 == strlen(header.workstation_id))) 
	{

		return GMPC_BAD;
	}

	return GMPC_GOOD;
}


/************************************************************************/
/* Function Name	: get_one_field									    */
/* Description		: Returns one field from the std message buffer		*/
/* Input			: reply_buff - begining of the variable portion of  */
/*					  message.  Should be NULL for all calls other than */
/*					  the first call to this function					*/
/* Output			: field - pointer to the data field					*/
/* Return Values	: int field id of the field in field parm			*/
/* Limitations		: none												*/
/************************************************************************/

int get_one_field(char *reply_buff, char **field, long *len, int *img_ind)
{
	static char *next_field;
	char *temp_ptr;
	int field_id;

	/* The reply_buff field should have an acutal value only if this is the
	   first time the function is being called*/
	if(NULL != reply_buff)
	{
		next_field = reply_buff;
	}
	

	temp_ptr = next_field;

	/* End of message is inidicated by 0xff 0xff  The check really works.  Believe me!!*/
	if ((0xffffffff == *temp_ptr) && (0xffffffff == *(temp_ptr + 1)))
	{
		/* Set field to the end of the message */
		*field = (temp_ptr - 1);
		return 0;
	}
	
	if (0xfffffffc == *temp_ptr)
	{
		/* Alphanumeric field found */

		/* Skip the field indicator */
		temp_ptr++;

		/* We have now hit the data field so set field to it*/
		*field = temp_ptr;

		/*skip the current field to its indicator*/
		temp_ptr += strlen(temp_ptr) + 1;
		
		field_id = atoi(temp_ptr);
		
		/* set next_field to the next field by skipping the field indicator*/
		next_field = temp_ptr + strlen(temp_ptr) + 1;

		*len = strlen(*field);
		*img_ind = 0;
	}
	else if ((0xfffffffd == *temp_ptr) || (0xfffffffe == *temp_ptr))
	{
		/* Portrait/Image or fingerprint */
		/* Skip the field indicator */
		temp_ptr++;

		/* Get the length of image buffer */
		*len = atoi(temp_ptr);

		/* skip the length field to the image indicator */
		temp_ptr +=  strlen(temp_ptr) + 1;

		*img_ind = *temp_ptr;

		/*skip the image indicator,  to the acutal image buffer */

		temp_ptr ++;


		/* We now have temp_ptr at the beginning of the image buffer 
		   so set field to it */

		*field = temp_ptr;

		/* skip the entire image buffer to reach the field id for the image */

		temp_ptr += *len;

		field_id = atol(temp_ptr);

		/* skip the field id to reach the next field in the message */

		temp_ptr += strlen(temp_ptr) + 1;

		next_field = temp_ptr;

		/* Thats the job done here */
	}
		
	return field_id;
}

/************************************************************************/
/* Function Name	: dump_msg										    */
/* Description		: Function to dump a MQSeries message to a flat file*/
/* Input			: buff - buffer containing MQSeries message			*/
/*					  len  - size of buffer								*/
/* Output			: None												*/
/* Return Values	: None												*/
/* Limitations		: None												*/
/************************************************************************/

void dump_msg(char *buff, long len)
{
	
	FILE *dump_file = NULL;
	static char prev_file_name[125] = {'\0'};
	char file_name[125] = {'\0'};
	

	MSG_HEADER_T *msg_header;


	
	/* Get the request id to form the file name */
	msg_header = (MSG_HEADER_T *) buff;

	strcpy(file_name, DUMP_PATH);
	strncat(file_name, msg_header->request_id, 24);
	

	/* Check if the same message has been dumped */
	if(0 == strcmp(prev_file_name, file_name))
		return;
	strcpy(prev_file_name, file_name);


	dump_file = fopen(file_name, "wb");

	if(NULL == dump_file)
	{
		/* Cant do much here*/
		return;
	}
	fwrite(buff, len, 1, dump_file);

	fclose(dump_file);


}


/************************************************************************/
/* Function Name	: check_reply_ind								    */
/* Description		: Function to check the reply indicator in MQSeries	*/
/*					  reply messages from KPP*Gate						*/
/* Inputs			: msg_buff - The entire message buffer				*/
/*					  reply_buff_size - Size of the message buffer		*/
/* Output			: error_code-specifc error code when an error occurs*/
/* Return Values	: GMPC_GOOD - reply indicator is acceptable			*/
/*					  GMPC_BAD  - Bad reply indicator					*/
/* Limitations		: None												*/
/************************************************************************/

int check_reply_ind(char *msg_buff, long reply_buff_size, int *error_code)
{

	MSG_HEADER_T *msg_header;
	
	msg_header = (MSG_HEADER_T *)msg_buff;

	switch(msg_header->reply_header.reply_indicator)
	{
	case LI_HIT:
	case LI_OK:
	case LI_WARNING:
	case LI_RESERVE:
		{
			/* All these are acceptable so break */
			return GMPC_GOOD;
		}
	case LI_REC_NOT_FOUND:
		{
			/* No data has been found for the given IDs.  Log the WARNING  */

			dump_msg(msg_buff, reply_buff_size);

			*error_code = LI_REC_NOT_FOUND;

			return GMPC_BAD;
		}
	case LI_NOT_OK:
		{
			/* Some other error at the Legacy */

			dump_msg(msg_buff, reply_buff_size);

			*error_code = LI_NOT_OK;

			return GMPC_BAD;
		}
	case LI_COMM_ERROR :
		{
			/* Comm error means that the calling function has to retry the put */

			dump_msg(msg_buff, reply_buff_size);

			*error_code = LI_COMM_ERROR;

			return GMPC_BAD;
		}
	case LI_INVALID_AGENCY_ID:
	case LI_INCON_MSG_TYPE:
		{
			/* These are our errors which should not happen */

			dump_msg(msg_buff, reply_buff_size);

			*error_code = APPL_ERROR;

			return GMPC_BAD;

		}
	default:
		{
			/* What's this??? */


			dump_msg(msg_buff, reply_buff_size);

			*error_code = LEGACY_DATA_ERROR;

			return GMPC_WARN;
		}
	}


}


/************************************************************************/
/* Function Name	: add_one_fc_field								    */
/* Description		: Function to add one alphanumeric field to the		*/
/*					  request message buffer							*/
/* Inputs			: field_id = field id of the field to add			*/
/*					  in_temp_ptr - pointer to pointer to current		*/
/*					  location in request buffer						*/
/*					  req_data - data to put in the field				*/
/*					  req_data_type - data type of the input data		*/
/* Output			: error_code-specifc error code when an error occurs*/
/* Return Values	: GMPC_GOOD - successfully put the data & field id	*/
/* Limitations		: None												*/
/************************************************************************/

int add_one_fc_field(int field_id, char **in_temp_ptr, char *req_data, 
					    int req_data_type, int *error_code)
{
	char *temp_ptr = *in_temp_ptr;
	int data_ind = 0xfc;

	/* Check if the input data is null */
	if('\0' == *req_data || field_id == 0)
	{
		return GMPC_GOOD;
	}
	/* Set the data indicator */
	*temp_ptr = data_ind;
	temp_ptr++;

	/* Copy the actual data */
	switch(req_data_type)
	{
		case TYPE_CHAR_ARR:
		{
			strcpy(temp_ptr, req_data);
			temp_ptr += strlen(temp_ptr) + 1;
			break;
		}
		case TYPE_CHAR:
		{
			*temp_ptr = *req_data;
			temp_ptr++;
			*temp_ptr = '\0';
			temp_ptr++;
		}
	}
	

	/* Set the field id */

	ltoa(field_id, temp_ptr, 10);
	temp_ptr += strlen(temp_ptr) + 1;
	*in_temp_ptr = temp_ptr;

	return GMPC_GOOD;
}


/************************************************************************/
/* Function Name	: add_one_minutiae_field							*/
/* Description		: Function to add one finger minutiae field to the	*/
/*					  request message buffer							*/
/* Inputs			: field_id = field id of the field to add			*/
/*					  in_temp_ptr - pointer to pointer to current		*/
/*					  location in request buffer						*/
/*					  req - Pointer to a FINGER_T structure containg the*/
/*					  image to put into the buffer						*/
/*					  len - length of the image buffer					*/
/*					  image_ind - image indicator for image				*/
/* Output			: error_code-specifc error code when an error occurs*/
/* Return Values	: GMPC_GOOD - successfully put the data & field id	*/
/* Limitations		: None												*/
/************************************************************************/

int add_one_minutiae_field(int field_id, char **in_temp_ptr, FINGER_T *req,  
						long len, int image_ind, int *error_code)
{
	char *temp_ptr = *in_temp_ptr;
	char *temp_minu_ptr = NULL;
	long temp_minu_size = 0;
	int data_ind = 0xfe; 
	unsigned char *req_data = NULL;

	if(0 == len)
	{
		return GMPC_GOOD;
	}

	
	if((FID_LFP_ORIGINAL_MINU == field_id) || (FID_RFP_ORIGINAL_MINU == field_id))
	{
		/* Need to manipulate the buffer to be put into the message to make it		*/
		/* compliant with the structre for original minutiae given by HTP			*/
		
		/* Size of the struct is size of buffer + 1 byte for finger pattern, one	*/
		/* byte for	thumb status													*/
		temp_minu_size = req->orginal_minutiae_size + 2;
		
		/* Allocate memory to hold maipulated data */

		temp_minu_ptr = (char *) malloc(temp_minu_size);

		if(NULL == temp_minu_ptr)
		{
			
			*error_code = MALLOC_ERROR;
			return GMPC_BAD;
		}
		req_data = (unsigned char*)temp_minu_ptr;

		/* Copy the miniutiae */
		memcpy(temp_minu_ptr, req->org_minutiae_buff, 
			req->orginal_minutiae_size);
		temp_minu_ptr +=  req->orginal_minutiae_size;
		
		
		*temp_minu_ptr = req->finger_pattern;
		temp_minu_ptr ++;

		*temp_minu_ptr = req->thumb_status;
		temp_minu_ptr ++;
	
		
		len = temp_minu_size;
	}
	else if((FID_LFP_NORM_MINU == field_id) || (FID_RFP_NORM_MINU == field_id))
	{
		/* Need to manipulate the buffer to be put into the message to make it		*/
		/* compliant with the structre for original minutiae given by HTP			*/
		
		/* Size of the struct is size of buffer + 6 bytes for quality, one			*/
		/* byte for	finger Index													*/
		temp_minu_size = 6 + 1;
		temp_minu_size += req->normalized_minutiae_size;
		
		/* Allocate memory to hold maipulated data */
		temp_minu_ptr = (char *) malloc(temp_minu_size);

		if(NULL == temp_minu_ptr)
		{
			
			*error_code = MALLOC_ERROR;
			return GMPC_BAD;
		}
		req_data = (unsigned char*)temp_minu_ptr;

		/* Copy the miniutiae  */
		memcpy(temp_minu_ptr, req->norm_minutiae_buff, 
			req->normalized_minutiae_size);
		temp_minu_ptr += req->normalized_minutiae_size;
		
		/* Copy the quality score */
		ltoa(req->quality_score, temp_minu_ptr, 10);

		temp_minu_ptr += 6;

		/* Copy the finger indicator */
		*temp_minu_ptr = atoi(req->finger_ind);

		temp_minu_ptr ++;
	

		len = temp_minu_size;
	}
	else if((FID_LFP_MATRIX_BUFF == field_id) || (FID_RFP_MATRIX_BUFF == field_id))
	{
		req_data = req->matrix_buffer;
	}


	/* Set the data indicator */
	*temp_ptr = data_ind;
	temp_ptr ++;

	/* Set the length of the image */
	ltoa(len, temp_ptr, 10);
	temp_ptr += strlen(temp_ptr) + 1;

	/* Image Indicator */
	*temp_ptr = image_ind;
	temp_ptr++;

	/* copy the acutal image */
	memcpy(temp_ptr, req_data, len);
	temp_ptr += len;

	/* Set the field id */
	ltoa(field_id, temp_ptr, 10);
	temp_ptr += strlen(temp_ptr) + 1;
	*in_temp_ptr = temp_ptr;

	return GMPC_GOOD;
}
	
/************************************************************************/
/* Function Name	: add_one_image_field								*/
/* Description		: Function to add one image field to the			*/
/*					  request message buffer							*/
/* Inputs			: field_id = field id of the field to add			*/
/*					  in_temp_ptr - pointer to pointer to current		*/
/*					  location in request buffer						*/
/*					  req_data - data to put in the field				*/
/*					  len - length of the image buffer					*/
/*					  image_ind - image indicator for image				*/
/*					  req_data_type - data type of the input data		*/
/* Output			: error_code-specifc error code when an error occurs*/
/* Return Values	: GMPC_GOOD - successfully put the data & field id	*/
/* Limitations		: None												*/
/************************************************************************/

int add_one_image_field(int field_id, char **in_temp_ptr, unsigned char *req_data,  
						int data_ind, long len, int image_ind, int *error_code)
{
	char *temp_ptr = *in_temp_ptr;


	if(0 == len)
	{
		return GMPC_GOOD;
	}

	/* Set the data indicator */
	*temp_ptr = data_ind;
	temp_ptr ++;

	/* Set the length of the image */
	ltoa(len, temp_ptr, 10);
	temp_ptr += strlen(temp_ptr) + 1;

	/* Image Indicator */
	*temp_ptr = image_ind;
	temp_ptr++;

	/* copy the acutal image */
	memcpy(temp_ptr, req_data, len);
	temp_ptr += len;

	/* Set the field id */
	ltoa(field_id, temp_ptr, 10);
	temp_ptr += strlen(temp_ptr) + 1;
	*in_temp_ptr = temp_ptr;


	return GMPC_GOOD;
}
	




/************************************************************************/
/* Function Name	: li_yyyymmdd_to_ddmmyyyy						    */
/* Description		: Function to copy date variable in YYYYMMDD format	*/
/*					  to a destation in DDMMYYYY format					*/
/* Input			: src  - Date in YYYYMMDD format					*/
/* Output			: dest - Date in DDMMYYYY format					*/
/* Return Values	: None												*/
/* Limitations		: None												*/
/************************************************************************/

void li_yyyymmdd_to_ddmmyyyy(char *dest, char *src)
{
	char *temp_src_ptr;
	char *temp_dest_ptr;

	if(0 == strlen(src))		
	{
		dest[0] = '\0';
		return;
	}

	temp_dest_ptr = dest;

	/* Get the date */
	temp_src_ptr = src + 6;
	strncpy(temp_dest_ptr, temp_src_ptr, 2);
	temp_dest_ptr += 2;

	/* Get month */
	temp_src_ptr = src + 4;
	strncpy(temp_dest_ptr, temp_src_ptr, 2);
	temp_dest_ptr += 2;


	/* Get year */
	temp_src_ptr = src;
	strncpy(temp_dest_ptr, temp_src_ptr, 4);
	temp_dest_ptr += 4;

	/* Null termiate the destination */
	*temp_dest_ptr = '\0';

	/* Check if date is all zeroes */

	if (strcmp(dest, "00000000") == 0)
	{
		strcpy(dest, "\0");
		return;
	}

}



/************************************************************************/
/* Function Name	: li_ddmmyyy_to_yyyymmdd						    */
/* Description		: Function to copy date variable in DDMMYYYY format	*/
/*					  to a destation in YYYYMMDD format					*/
/* Input			: src  - Date in DDMMYYYY format					*/
/* Output			: dest - Date in YYYYMMDD format					*/
/* Return Values	: None												*/
/* Limitations		: None												*/
/************************************************************************/

void li_ddmmyyyy_to_yyyymmdd(char *dest, char *src)
{
	char *temp_src_ptr;
	char *temp_dest_ptr;

	if(0 == strlen(src))		
	{
		dest[0] = '\0';
		return;
	}

	temp_dest_ptr = dest;

	/* Get the year */
	temp_src_ptr = src + 4;
	strncpy(temp_dest_ptr, temp_src_ptr, 4);
	temp_dest_ptr += 4;

	/* Get month */
	temp_src_ptr = src + 2;
	strncpy(temp_dest_ptr, temp_src_ptr, 2);
	temp_dest_ptr += 2;


	/* Get date */
	temp_src_ptr = src;
	strncpy(temp_dest_ptr, temp_src_ptr, 4);
	temp_dest_ptr += 2;

	/* Null termiate the destination */
	*temp_dest_ptr = '\0';
}



/************************************************************************/
/* Function Name  : get_return_code()									*/
/* Input		  :	Reply indicator returned by legacy					*/
/*					Service_id of the invoking service					*/
/* Description    : This function is used to interpret the reply		*/
/*                  indicator returned by legacy						*/
/* Return Values  : Return code 										*/
/* Limitations    : None												*/
/************************************************************************/
/*
int get_return_code(int reply_ind, int service_id)
{
	int return_code = 0;

	switch(service_id)
	{
		case GET_JPN_DATA_ID	  :
		case GET_APPNT_KPT_ID	  :
		{
			switch(reply_ind)
			{
			case LI_REC_NOT_FOUND :
				return_code = JPN_REC_NOT_FOUND;
				break;
			case LI_NOT_OK		  :
				return_code = JPN_NOT_OK;
				break;
			case LI_COMM_ERROR	  :
				return_code = JPN_COMM_ERROR;
				break;	
			case NO_MSG_ERROR	  :
				return_code = JPN_NO_MSG_ERROR;
				break;	
			case PUT_ERROR	  :
				return_code = PUT_ERROR;
				break;
			case GET_ERROR	  :
				return_code = GET_ERROR;
				break;
			case CONN_ERROR	  :
				return_code = CONN_ERROR;
				break;
			case APPL_ERROR	  :
				return_code = APPL_ERROR;
				break;
			case LEGACY_DATA_ERROR	  :
				return_code = LEGACY_DATA_ERROR;
				break;
			default			      :
				break;
			}
			break;
		}
		case GET_JPJ_DATA_ID	  :
		{
			switch(reply_ind)
			{
			case LI_REC_NOT_FOUND :
				return_code = JPJ_REC_NOT_FOUND;
				break;
			case LI_NOT_OK		  :
				return_code = JPJ_NOT_OK;
				break;
			case LI_COMM_ERROR	  :
				return_code = JPJ_COMM_ERROR;
				break;
			case NO_MSG_ERROR	  :
				return_code = JPJ_NO_MSG_ERROR;
				break;
			case PUT_ERROR	  :
				return_code = PUT_ERROR;
				break;
			case GET_ERROR	  :
				return_code = GET_ERROR;
				break;
			case CONN_ERROR	  :
				return_code = CONN_ERROR;
				break;
			case APPL_ERROR	  :
				return_code = APPL_ERROR;
				break;
			case LEGACY_DATA_ERROR	  :
				return_code = LEGACY_DATA_ERROR;
				break;
			default			      :
				break;
			}
			break;
		}
#ifdef IMM
		case GET_IMM_DATA_ID	  :
		case IMM_UPDATE_ID		  :
		{
			switch(reply_ind)
			{
			case LI_REC_NOT_FOUND :
				return_code = IMM_REC_NOT_FOUND;
				break;
			case LI_NOT_OK		  :
				return_code = IMM_NOT_OK;
				break;
			case LI_COMM_ERROR	  :
				return_code = IMM_COMM_ERROR;
				break;
			case NO_MSG_ERROR	  :
				return_code = IMM_NO_MSG_ERROR;
				break;
			case PUT_ERROR	  :
				return_code = PUT_ERROR;
				break;
			case GET_ERROR	  :
				return_code = GET_ERROR;
				break;
			case CONN_ERROR	  :
				return_code = CONN_ERROR;
				break;
			case APPL_ERROR	  :
				return_code = APPL_ERROR;
				break;
			case LEGACY_DATA_ERROR	  :
				return_code = LEGACY_DATA_ERROR;
				break;
			default			      :
				break;
			}
			break;
		}
#endif	// IMM
		default	:
			break;
	}

	return return_code;
}
*/

/************************************************************************/
/* Function Name	: get_legacy_address						        */
/* Description		: Function to convert addressed to legacy format    */
/* Input			: Three parts of address							*/
/* Output			: Modified address									*/
/* Return Values	: None												*/
/* Limitations		:													*/
/************************************************************************/

void get_legacy_address(char *addr1, char *addr2, char *addr3)
{
	/* truncate all addresses */
	addr1[LEGACY_ADDRESS_SIZE - 1] = 0;
	addr2[LEGACY_ADDRESS_SIZE - 1] = 0;
	addr3[LEGACY_ADDRESS_SIZE - 1] = 0;
}

/************************************************************************/
/* Function Name	: get_license_type						        */
/* Description		: Function to get the license type into char value */
/* Input				: String containing the license type e.g "CDL"		*/
/* Output			: Corresponding char value . e.g 'C'					*/
/* Return Values	: Corresponding char value . e.g 'C'					*/
/* Limitations		:													*/
/************************************************************************/
// Utility function
int get_license_type(char *str_license)
{
	if(_stricmp(str_license, CDL_LIC) == 0)
		return CDL_LIC_T;
	else if(_stricmp(str_license, GDL_LIC) == 0)
		return GDL_LIC_T;
	else if(_stricmp(str_license, PSV_LIC) == 0)
		return PSV_LIC_T;
	else if(_stricmp(str_license, PDL_LIC) == 0)
		return PDL_LIC_T;
	else if(_stricmp(str_license, PRB_LIC) == 0)
		return PRB_LIC_T;

	return 0;
}










