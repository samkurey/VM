/*$Header:   F:/GSCBProjectDb/archives/LegacyInterface/jpnmsg/liupdategmpcstat/li_update_gmpc_stat.c-arc   1.3   Sep 05 2002 12:03:24   ShivamP  $*/
/********************************************************************/
/* File Name	:li_mykad_issuance.c							    */
/* Author		:Srinivasa Reddy									*/
/* Description	:Contains the li_mykad_issuance_p					*/
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

#include "li_mykad_issuance.h"
#include "li_call_dll.h"

//extern APPL_EXCEP_LOG_T excep_log;
//extern PROG_ACCESS_LOG_T prog_log;

//extern LI_PUT_DLL_FN_TYP li_put_dll;
//extern LI_GET_DLL_FN_TYP li_get_dll;

/********************************************************************/
/* Function Name : li_mykad_issuance_p		     	                */
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

int li_mykad_issuance_p(LI_P_HEADER_T header, 
						   LI_MYKAD_ISSUANCE_REQ_T req,
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
	LI_PUT_FIN_DATA_T put_fin_data;
	
	/* Structure for registry values */
	READ_REG_T read_reg = {0,0};
	

	/* misc variables */
	char *temp_ptr = NULL;
	int  len = 0;
	int  ret = 0;
	char temp_char_arr[10];
	char temp_stat[3]={0};
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
	ltoa(LI_MYKAD_ISSUANCE, put_header.trans_code, 10);
	strcpy(put_header.user_id, header.user_id);
	strcpy(put_header.workstation_id, header.workstation_id);

	strcpy(put_header.trans_date, header.trans_date);
	strcpy(put_header.trans_time, header.trans_time);

	strcpy(put_header.refer_date, "\0");
	strcpy(put_header.refer_time, "\0");

	/****************************************************************************/
	/* Format the data															*/
	/****************************************************************************/
	
	
	/* Since no Financial data is coming from the service, set the appropriate values in 
	   the financial data potion of request */
	put_fin_data.counter = 0;
	put_fin_data.fin_data = NULL;
	put_fin_data.len = 0;

	/* Generate the variable data */
	
	/* Size the variable data */
	
	put_var_data.len = KPT_SIZE + CHAR_SIZE + DATE_SIZE + BRANCH_CODE_SIZE
		 + USER_ID_SIZE + DATE_SIZE   
		 + INT_SIZE + REMARK_SIZE + REMARK_SIZE + CARD_LOST_COUNT_SIZE
		 + AGENCY_SIZE + LEGAPPLID_SIZE 
		 + ID_SIZE + ID_TYPE_SIZE + CURRLONGNAME_SIZE + RELATIONCODE_SIZE
		 + CHAR_SIZE + 9;
	

	/* Every field to be passed to the legacy must have some bytes of additional	*/
	/* info put into it so make arrangement for the same							*/
	/* 1 byte data indicator FIELD_ID_SIZE bytes of field id						*/
	put_var_data.len = put_var_data.len + (20 * (FIELD_ID_SIZE + 1));

	/* Allocate memory for the variable portion of data */
	put_var_data.data = malloc(put_var_data.len);
	if (put_var_data.data== NULL)
	{
		userlog("li_mykad_issuance_p  : MALLOC_ERROR - malloc call failed");

		//strcpy(prog_log.remarks,"li_update_gmpc_stat_p  : MALLOC_ERROR - malloc call failed");
		//strcpy(excep_log.error_msg, "li_update_gmpc_stat_p  : MALLOC_ERROR - malloc call failed");
		//excep_log.severity = FATAL;
		//log_error();
		
		*error_code = MALLOC_ERROR;
		return GMPC_BAD;
	}

	memset(put_var_data.data,' ',put_var_data.len);

	/* Start putting the data */
	temp_ptr = put_var_data.data;
	

	/* Add KPT number */

	if((req.appnt_kpt[0] != '\0') && (req.appnt_kpt[0] != ' '))
	{
		ret = add_one_fc_field(FID_KPT_NO, &temp_ptr, req.appnt_kpt, 
		TYPE_CHAR_ARR, error_code);
	}

	/* Add application Status */
	if(req.appln_stat != '\0')
	{
	ret = add_one_fc_field(FID_KPT_APPLN_STAT_CD, &temp_ptr, 
		(char *)&req.appln_stat, TYPE_CHAR, error_code);
	}
		
	/* Application Date */
		
	if((req.appln_date[0] != '\0') && (req.appln_date[0] != ' '))
	{
		temp_char_arr[0] = '\0';	
	 li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.appln_date);
	 ret = add_one_fc_field(FID_KPT_COLLECTION_DT, &temp_ptr, temp_char_arr, 
			TYPE_CHAR_ARR, error_code);	
	}	

	/* Application Branch code */
	if((req.appln_gsc_no[0] != '\0') && (req.appln_gsc_no[0] != ' '))
	{
	//ret = add_one_fc_field(FID_GMPC_APPLN_BRANCH_CD, &temp_ptr, req.appln_gsc_no, 
	//	TYPE_CHAR_ARR, error_code);

		ret = add_one_fc_field(FID_KPT_COLLECTION_PLACE_CD, &temp_ptr, req.appln_gsc_no, 
		TYPE_CHAR_ARR, error_code);
	}
	
	/* Applicatin Staff id */
	if(req.appln_staff_id[0] != '\0')
	{	
	/* The staff ID size in legacy is A8 */
	req.appln_staff_id[8] = '\0';
	add_one_fc_field(FID_GMPC_APPLN_STAFF_ID, &temp_ptr, req.appln_staff_id,
					TYPE_CHAR_ARR, error_code);
	}


	/* GMPC Issue date */ //FID_LAST_KPT_GMPC_ISSUE_DT
	if((req.gmpc_pc_date[0] != '\0') && (req.gmpc_pc_date[0] != ' '))
	{
		temp_char_arr[0] = '\0';
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.gmpc_pc_date);
	ret = add_one_fc_field(FID_LAST_KPT_GMPC_ISSUE_DT, &temp_ptr, temp_char_arr, 
		TYPE_CHAR_ARR, error_code);
	}

	/* GMPC Version */
	if(req.gmpc_version_no > 0) 
	{
		temp_char_arr[0] = '\0';
	ltoa(req.gmpc_version_no, temp_char_arr, 10);
	add_one_fc_field(FID_GMPC_VERSION_NO, &temp_ptr, temp_char_arr,
					TYPE_CHAR_ARR, error_code);
	}
	/* jpnremarks 1 */
	if(req.jpnremarks1[0] != '\0')
	{
	add_one_fc_field(FID_JPN_REMARK1, &temp_ptr, req.jpnremarks1,
		TYPE_CHAR_ARR, error_code);

	}
	/* jpnremarks2 */
	if(req.jpnremarks2[0] != '\0')
	{
	add_one_fc_field(FID_JPN_REMARK2, &temp_ptr, req.jpnremarks2,
		TYPE_CHAR_ARR, error_code);
	}

	/* Commented this field on 27/10/2015 for CR 296 to block sending card_lost_count to host
	/* card lost count 
	if((req.card_lost_count[0] != '\0') && ((req.card_lost_count[0] != '0') && (req.card_lost_count[0] != ' ')));
	{
	add_one_fc_field(FID_CARD_LOST_COUNT, &temp_ptr, req.card_lost_count,
		TYPE_CHAR_ARR, error_code);
	}

	*/

	/* Indicator1 */
	if((req.indicator1[0] != '\0') && (req.indicator1[0] != ' '))
	{
	add_one_fc_field(FID_INDICATOR1, &temp_ptr, req.indicator1,
		TYPE_CHAR_ARR, error_code);
	}
	

	/* legapplid */
	if((req.appl_no[0] != '\0') && (req.appl_no[0] != ' '))
	{
	add_one_fc_field(FID_APPL_ID, &temp_ptr, req.appl_no,
		TYPE_CHAR_ARR, error_code);
	}

	/* Third party idno */
	if((req.tidno[0] != '\0')  && (req.tidno[0] != ' '))
	{
	add_one_fc_field(FID_THIRD_PARTY_ID_NO, &temp_ptr, req.tidno,
		TYPE_CHAR_ARR, error_code);
	}

	/* Third party id type */
	if((req.tidtype[0] != '\0') && (req.tidtype[0] != ' '))
	{
	add_one_fc_field(FID_THIRD_PARTY_ID_TYPE, &temp_ptr, req.tidtype,
		TYPE_CHAR_ARR, error_code);
	}

	/* Third party name */
	if((req.tname[0] != '\0')  && (req.tname[0] != ' '))
	{
	add_one_fc_field(FID_THIRD_PARTY_LNAME, &temp_ptr, req.tname,
		TYPE_CHAR_ARR, error_code);
	}

	/* Third party relationship indicator */
	if((req.trelationcode[0] != '\0')  && (req.trelationcode[0] != ' '))
	{
	add_one_fc_field(FID_THIRD_PARTY_RELATIONSHIP_IND, &temp_ptr, req.trelationcode,
		TYPE_CHAR_ARR, error_code);
	}

	/* IJPN_GMPC_IND */
	if((req.ijpn_gmpc_ind != '\0') && (req.ijpn_gmpc_ind != ' '))
	{
	add_one_fc_field(FID_IJPN_GMPC_IND, &temp_ptr, &req.ijpn_gmpc_ind,
		TYPE_CHAR, error_code);
	}

	// Added this code on 13/04/2010 for sending paid fee in issuance message
	/* paid fee */	
	if ((req.paid_fee[0] != '\0') && (req.paid_fee[0] != ' '))
	{
	//	gcvt(req.paid_fee, 10, temp_char_arr);
		userlog("lireq.paid_fee : %s",req.paid_fee);
		add_one_fc_field(FID_PAID_FEE, &temp_ptr, req.paid_fee,
					TYPE_CHAR_ARR, error_code);
	}


	// copy the lostcntneg, added this new field 9109 on 19/02/2014

	if(req.lostcntneg > 0)
	{	for(i=0;i<10;i++)
			temp_char_arr[i] = '\0';
		ltoa(req.lostcntneg, temp_char_arr, 10);
		add_one_fc_field(FID_LOSTCNTNEG, &temp_ptr, temp_char_arr, TYPE_CHAR_ARR, error_code);
	}

	// copy the lostcntcrime, added this new field 9105 on 19/02/2014

	if(req.lostcntcrime >0 )
	{	for(i=0;i<10;i++)
			temp_char_arr[i] = '\0';
		ltoa(req.lostcntcrime, temp_char_arr, 10);
		add_one_fc_field(FID_LOSTCNTCRIME, &temp_ptr, temp_char_arr, TYPE_CHAR_ARR, error_code);
	}

	// copy the lostcntdis, added this new field 9107 on 19/02/2014

	if(req.lostcntdis > 0)
	{	for(i=0;i<10;i++)
			temp_char_arr[i] = '\0';
		ltoa(req.lostcntdis, temp_char_arr, 10);
		add_one_fc_field(FID_LOSTCNTDIS, &temp_ptr, temp_char_arr, TYPE_CHAR_ARR, error_code);
	}


	// Added this new field on 15/11/2014 for sending lostcompoundfee in issuance message
	/* lostcompoundfee */	
	if ((req.lostcompoundfee[0] != '\0') && (req.lostcompoundfee[0] != ' '))
	{
	
		userlog("lireq.lostcompoundfee : %s",req.lostcompoundfee);
		add_one_fc_field(FID_AMTHG, &temp_ptr, req.lostcompoundfee,
					TYPE_CHAR_ARR, error_code);
	}

	// Added this new field on 15/11/2014 for sending lostcompoundfee in issuance message
	/* collcenter */	
	if ((req.collcenter[0] != '\0') && (req.collcenter[0] != ' '))
	{
	
		userlog("lireq.collcenter : %s",req.collcenter);
		add_one_fc_field(FID_KPT_COLLECTION_PLACE_CD, &temp_ptr, req.collcenter,
					TYPE_CHAR_ARR, error_code);
	}

	// Added this new field on 16/08/2016 CR for sending paidfeeindicator in issuance message
	/* paidfeeindicator */
	


		/* Calculate the acutal size of the request buffer */
	put_var_data.len = temp_ptr - put_var_data.data;

	///****************************************************************************/
	///* Call li_put																*/
	///****************************************************************************/
	//	
	///* Check if the function pointer is vaild */
	//if(NULL == li_put_dll )
	//{
	//	strcpy(prog_log.remarks,"li_update_gmpc_stat_p : li_put_dll call fail");
	//	strcpy(excep_log.error_msg, "li_update_gmpc_stat_p : li_put_dll function pointer not initalized (li_init may not have been called)");
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

	ret = li_call_dll(put_header, put_var_data, put_fin_data, msg_id, error_code,
		pReplyMsg,iReplyMsgLen,sErrMessage);

	userlog("Inside the Li msg_id : %s",msg_id);
	
	/* Check return code */
	if(GMPC_GOOD != ret)
	{
/* IJPN
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
			strcpy(prog_log.remarks,"li_update_gmpc_stat_p : li_put_dll call fail due to LEGACY_ERROR");
			strcpy(excep_log.error_msg, "li_update_gmpc_stat_p : li_put_dll failed.  Retrying");
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
		
	*/
		return GMPC_BAD;
	}
	

	free(put_var_data.data);
	return GMPC_GOOD;
}
