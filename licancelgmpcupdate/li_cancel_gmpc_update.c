/*$Header:   F:/GSCBProjectDb/archives/source/LegacyInterface/li_update_gmpc_stat.c-arc   1.2   Jun 24 2000 10:15:40   ThoratAD  $*/
/********************************************************************/
/* File Name	:li_update_gmpc_stat.c							    */
/* Author		:Vageesh Patwardhan									*/
/* Description	:Contains the li_update_gmpc_p						*/
/*               Legacy Interface  API								*/
/********************************************************************/

#include <windows.h>

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include <userlog.h>

#include "gscbdef.h"
#include "gscbio.h"

#define LOG_DEFINED
#include "gscblog.h"
#undef LOG_DEFINED
#include "gscblookupdef.h"

#include "KPPdef.h"
#include "KPPstruct.h"
#include "KPPproto.h"
#include "field_id.h"

#include "li_cancel_gmpc_update.h"
#include "li_call_dll.h"

//extern APPL_EXCEP_LOG_T excep_log;
//extern PROG_ACCESS_LOG_T prog_log;

//extern LI_PUT_DLL_FN_TYP li_put_dll;
//extern LI_GET_DLL_FN_TYP li_get_dll;

/********************************************************************/
/* Function Name : li_update_gmpc_stat_p			                */
/* Input         : header containing user id, wskstn id etc			*/
/*				   req containing the applicant's id number and type*/
/* Outputs		 : msg_id containing the message id of the message  */
/*				   error_code containing err code at failure		*/
/* Description   : This function is to be used to queue a			*/
/*				   LI_GMPC_STATUS_UPDATE request with the legacy	*/
/* Return Values : int GMPC_GOOD - success                          */
/*					   GMPC_BAD - failure							*/
/* Limitations   : None                                             */
/********************************************************************/

int li_cancel_gmpc_update_p(LI_P_HEADER_T header, LI_PUT_FIN_DATA_T put_fin_data,
						   LI_REFER_TIMESTAMP_T refer_timestamp,
						   LI_CANCEL_GMPC_UPDATE_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
						   int *iReplyMsgLen,
						   char *sErrMessage
						   )
{

	/*************************************************************************/
	/* local variables														 */
	/*************************************************************************/

	/* variables for li_put_dll */
	LI_PUT_HEADER_T put_header;
	LI_PUT_VAR_DATA_T put_var_data;
	
	/* Structure for registry values */
	READ_REG_T read_reg = {0,0};
	

	/* misc variables */
	char *temp_ptr = NULL;
	int len = 0;
	int ret = 0;
	char temp_char_arr[10];
	int i=0;



	/****************************************************************************/
	/* Check if input data is OK												*/
	/****************************************************************************/
	
	/* Check if the header is OK */
	ret = check_put_header(header);
	if (GMPC_BAD == ret )
	{
		/* Nothing to be done here since check_put_header has already logged the err*/
		return ret;
	}

	/* Fill the put header */
	memset(&put_header, ' ', sizeof(LI_PUT_HEADER_T));

	put_header.agency_id = JPN;
	strcpy(put_header.gsc_no,  header.gsc_no);
	put_header.msg_type = UPD_REQ;
	put_header.send_to_AFIS = '0';
	ltoa(LI_JPN_CANCEL_GMPC_UPD, put_header.trans_code, 10);
	strcpy(put_header.user_id, header.user_id);
	strcpy(put_header.workstation_id, header.workstation_id);

	strcpy(put_header.trans_date, header.trans_date);
	strcpy(put_header.trans_time, header.trans_time);
	strcpy(put_header.refer_date, refer_timestamp.refer_date);
	strcpy(put_header.refer_time, refer_timestamp.refer_time);


	/****************************************************************************/
	/* Format the data															*/
	/****************************************************************************/
	
	
	/* Generate the variable data */

	/* Size the variable data */
	//remarked by samsuri on 23 aug 2022
	//put_var_data.len = KPT_SIZE + 4*INT_SIZE + CARD_LOST_COUNT_SIZE +
	//					(3 * ADDRESS_SIZE) + POST_CODE_SIZE + CITY_CODE_SIZE 
	//					+ STATE_CODE_SIZE +	TXNCODE_SIZE + LEGAPPLID_SIZE; //(2*DATE_SIZE) Cancel trx date

	//added by samsuri to replace above as compile error
	put_var_data.len = KPT_SIZE + 4*INT_SIZE + CARD_LOST_COUNT_SIZE;
	put_var_data.len = put_var_data.len + (3 * ADDRESS_SIZE) + POST_CODE_SIZE + CITY_CODE_SIZE ;
	put_var_data.len = put_var_data.len + STATE_CODE_SIZE +	4 + LEGAPPLID_SIZE;

	/* Kpt number + Application status + Application type, + application date +				*/
	/* appln gsc no + application staff id + Collection size + collection date  + pc date + */
	/* issuance staff id + issuance date + gmpc ver no + gmpc remarks 1 and 2				*/


	/* Every field to be passed to the legacy must have some bytes of additional	*/
	/* info put into it so make arrangement for the same							*/
	/* 1 byte data indicator FIELD_ID_SIZE bytes of field id						*/
	put_var_data.len = put_var_data.len + (15 * (FIELD_ID_SIZE + 1));

	/* Allocate memory for the variable portion of data */
	put_var_data.data = malloc(put_var_data.len);
	if (put_var_data.data== NULL)
	{
		userlog("li_cancel_gmpc_update_p  : MALLOC_ERROR - malloc call failed");

		//strcpy(prog_log.remarks,"li_cancel_gmpc_update_p  : MALLOC_ERROR - malloc call failed");
		//strcpy(excep_log.error_msg, "li_cancel_gmpc_update_p  : MALLOC_ERROR - malloc call failed");
		//excep_log.severity = FATAL;
		//log_error();
		
		*error_code = MALLOC_ERROR;
		return GMPC_BAD;
	}

	memset(put_var_data.data,' ',put_var_data.len);

	/* Start putting the data */
	temp_ptr = put_var_data.data;

	/* Add KPT number */
	ret = add_one_fc_field(FID_KPT_NO, &temp_ptr, req.appnt_kpt, 
		TYPE_CHAR_ARR, error_code);

	userlog("Inside the li req.appnt_kpt :%s",req.appnt_kpt); 

	/* GMPC Version */
	ltoa(req.gmpc_version_no, temp_char_arr, 10);
	add_one_fc_field(FID_GMPC_VER_NO, &temp_ptr, temp_char_arr,
					TYPE_CHAR_ARR, error_code);

	userlog("Inside the li req.gmpc_version_no :%d",req.gmpc_version_no);

	/* Commented this field on 27/10/2015 for CR 296 to block sending lost_card_count to host
	/* card lost count 
	add_one_fc_field(FID_CARD_LOST_COUNT, &temp_ptr, req.card_lost_count,
		TYPE_CHAR_ARR, error_code);

	userlog("Inside the li req.card_lost_count :%s",req.card_lost_count);

	*/

	/* New address1 */
	if(req.address.address1[0] != '\0')
	{
	ret = add_one_fc_field(FID_ADDRESS1, &temp_ptr, req.address.address1, 
		TYPE_CHAR_ARR, error_code);
	}

	// for address2 & 3, if they are null then try to send the the same null to host
	// when address1 is not null only

	userlog("Inside the li req.address.address1 :%s",req.address.address1);

	/* New address2 */
	if(req.address.address2[0] != '\0')
	{
	ret = add_one_fc_field(FID_ADDRESS2, &temp_ptr, req.address.address2, 
		TYPE_CHAR_ARR, error_code);
	}
	else if((req.address.address2[0] == '\0') && (req.address.address1[0] != '\0'))
	{
			temp_char_arr[0] = '\0';
	 ret = add_one_fc_field_n(FID_ADDRESS2, &temp_ptr, temp_char_arr, 
		TYPE_CHAR_ARR, error_code);
	}
	userlog("Inside the li req.address.address2 :%s",req.address.address2);

	/* New address3 */
	if(req.address.address3[0] != '\0')
	{
	ret = add_one_fc_field(FID_ADDRESS3, &temp_ptr, req.address.address3, 
		TYPE_CHAR_ARR, error_code);
	}
	else if((req.address.address3[0] == '\0') && (req.address.address1[0] != '\0'))
	{
			temp_char_arr[0] = '\0';
	 ret = add_one_fc_field_n(FID_ADDRESS3, &temp_ptr, temp_char_arr, 
		TYPE_CHAR_ARR, error_code);
	}

	userlog("Inside the li req.address.address3 :%s",req.address.address3);

	/* Post Code */
	ret = add_one_fc_field(FID_POSTCODE, &temp_ptr, req.address.post_code, 
		TYPE_CHAR_ARR, error_code);

	userlog("Inside the li req.address.post_code :%s",req.address.post_code);

	/* City Code */
	if (req.address.city_code > 0)
	{
		itoa(req.address.city_code, temp_char_arr, 10);
		add_one_fc_field(FID_CITY_CD, &temp_ptr, temp_char_arr,
					TYPE_CHAR_ARR, error_code);

	userlog("Inside the li req.address.city_code :%d",req.address.city_code);

	}
	
	/* New State Code */
	add_one_fc_field(FID_STATE_CD, &temp_ptr, req.address.state_code,
					TYPE_CHAR_ARR, error_code);

	userlog("Inside the li req.address.state_code :%s",req.address.state_code);
	
	/* Last address changed date */
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.last_changed_date);
	ret = add_one_fc_field(FID_LAST_ADDRESS_CHANGE_DT, &temp_ptr, temp_char_arr, 
		TYPE_CHAR_ARR, error_code);

	userlog("Inside the li req.last_changed_date :%s",req.last_changed_date);

	/* Cancel trx date */ // commented for IJPN
	//li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.cancel_trx_date);
	//ret = add_one_fc_field(FID_CANCEL_TRX_DATE, &temp_ptr, temp_char_arr, 
	//	TYPE_CHAR_ARR, error_code);

	/* Cancel txn code */ // to open this comment after clearing with vasanth
	//ret = add_one_fc_field(, &temp_ptr, temp_char_arr, 
	//	TYPE_CHAR_ARR, error_code);
	
	/* Application Number */
	ret = add_one_fc_field(FID_APPL_ID, &temp_ptr, req.appl_no,
					TYPE_CHAR_ARR, error_code);

	userlog("Inside the li req.appl_no :%s",req.appl_no);


	// copy the lostcntneg, added this new field 9109 on 19/02/2014

	if(req.lostcntneg != -1)
	{
		userlog("Inside lostcntneg chk 99");
		if(req.lostcntneg < 1) req.lostcntneg = 99; //added by samsuri on 23 aug 2022

		for(i=0;i<10;i++)
			temp_char_arr[i] = '\0';
		ltoa(req.lostcntneg, temp_char_arr, 10);
		add_one_fc_field(FID_LOSTCNTNEG, &temp_ptr, temp_char_arr, TYPE_CHAR_ARR, error_code);
	}
	

	userlog("Inside the li req.lostcntneg :%d",req.lostcntneg);

	// copy the lostcntcrime, added this new field 9105 on 19/02/2014

	if(req.lostcntcrime != -1)
	{
		userlog("Inside lostcntcrime chk 99");
		if(req.lostcntcrime < 1) req.lostcntcrime = 99; //added by samsuri on 23 aug 2022

		for(i=0;i<10;i++)
			temp_char_arr[i] = '\0';
		ltoa(req.lostcntcrime, temp_char_arr, 10);
		add_one_fc_field(FID_LOSTCNTCRIME, &temp_ptr, temp_char_arr, TYPE_CHAR_ARR, error_code);
	}
	

	userlog("Inside the li req.lostcntcrime :%d",req.lostcntcrime);

	// copy the lostcntdis, added this new field 9107 on 19/02/2014

	if(req.lostcntdis != -1)
	{
		userlog("Inside lostcntdis chk 99");
		if(req.lostcntdis < 1) req.lostcntdis = 99; //added by samsuri on 23 aug 2022

		for(i=0;i<10;i++)
			temp_char_arr[i] = '\0';
		ltoa(req.lostcntdis, temp_char_arr, 10);
		add_one_fc_field(FID_LOSTCNTDIS, &temp_ptr, temp_char_arr, TYPE_CHAR_ARR, error_code);
	}
	

	//userlog("Inside the li req.lostcntdis :%d",req.lostcntdis);

	//Added by Salmi Date: 23th Mar,2020  Added new field id, CRAPPL-  SKP002/CR/2020	
	if(req.approval_status != -1)
	{
		userlog("Inside the li req.approval_status :%d",req.approval_status);
		for(i=0;i<10;i++)
			temp_char_arr[i] = '\0';
		ltoa(req.approval_status, temp_char_arr, 10); //samsuri modified this on 25 aug 2022
		add_one_fc_field(FID_APPROVAL_STATUS, &temp_ptr, temp_char_arr, TYPE_CHAR_ARR, error_code);
	}
		

		/* Calculate the acutal size of the request buffer */
	put_var_data.len = temp_ptr - put_var_data.data;

	///****************************************************************************/
	///* Call li_put																*/
	///****************************************************************************/
	//
	///* Check if the function pointer is vaild */
	//if(NULL == li_put_dll )
	//{
	//	strcpy(prog_log.remarks,"li_cancel_gmpc_update_p : li_put_dll call fail");
	//	strcpy(excep_log.error_msg, "li_cancel_gmpc_update_p : li_put_dll function pointer not initalized (li_init may not have been called)");
	//	excep_log.severity = FATAL;
	//	log_error();
	//	
	//	*error_code = PUT_ERROR;
	//	free(put_var_data.data);
	//	return GMPC_BAD;
	//}
	//
	//ret = (li_put_dll) (put_header, put_var_data, put_fin_data, msg_id, error_code);

	/****************************************************************************/
	/* Call the update dll function																*/
	/****************************************************************************/

	userlog(" Before calling the li_call_dll");

	ret = li_call_dll_gmpc(put_header, put_var_data, put_fin_data, msg_id, error_code,
		pReplyMsg,iReplyMsgLen,sErrMessage);

	userlog(" After calling the li_call_dll, msg_id : %s",msg_id);
	
	/* Check return code */
	if(GMPC_GOOD != ret)
	{
/* Commented for IJPN
		/* Read the registry to find the sleep time and retry counts 
		read_registry(KPP_GATE_INTERFACE_ID, &read_reg, NULL);
		if(read_reg.retry_count  <= 0)
		{
			free(put_var_data.data);
			return ret;
		}
		for (;read_reg.retry_count > 0; read_reg.retry_count--)
		{

			/* Log a warning 
			strcpy(prog_log.remarks,"li_cancel_gmpc_update_p : li_put_dll call fail due to LEGACY_ERROR");
			strcpy(excep_log.error_msg, "li_cancel_gmpc_update_p : li_put_dll failed.  Retrying");
			excep_log.severity = WARNING;
			log_error();			

			Sleep(read_reg.sleep_time);
			msg_id[0] = '\0';
		
			//ret = (li_put_dll) (put_header, put_var_data, put_fin_data, msg_id, error_code);

			ret = li_call_dll(put_header, put_var_data, put_fin_data, msg_id, error_code,
					pReplyMsg,iReplyMsgLen,sErrMessage);

			if(GMPC_GOOD == ret)
			{
				*error_code = 0;
				free(put_var_data.data);
				return GMPC_GOOD;
			}
		}

		free(put_var_data.data);
		return GMPC_BAD;
*/
		return GMPC_BAD;
	}

	free(put_var_data.data);
	return GMPC_GOOD;

}
