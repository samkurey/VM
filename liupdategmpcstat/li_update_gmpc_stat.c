/*$Header:   F:/GSCBProjectDb/archives/LegacyInterface/jpnmsg/liupdategmpcstat/li_update_gmpc_stat.c-arc   1.3   Sep 05 2002 12:03:24   ShivamP  $*/
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

#include "li_update_gmpc_stat.h"
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

int li_update_gmpc_stat_p(LI_P_HEADER_T header, 
						   LI_UPDATE_GMPC_STAT_REQ_T req,
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
	ltoa(LI_GMPC_STATUS_UPDATE, put_header.trans_code, 10);
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
	/*put_var_data.len = KPT_SIZE + CHAR_SIZE + APPLN_TYPE_SIZE +  DATE_SIZE +
		GSC_SIZE + USER_ID_SIZE + GSC_SIZE + DATE_SIZE + DATE_SIZE +  
		USER_ID_SIZE + DATE_SIZE + INT_SIZE + REMARK_SIZE + REMARK_SIZE + CARD_LOST_COUNT_SIZE;*/
	put_var_data.len = KPT_SIZE + CHAR_SIZE + DATE_SIZE + BRANCH_CODE_SIZE
		 + USER_ID_SIZE + DATE_SIZE   
		 + INT_SIZE + REMARK_SIZE + REMARK_SIZE + CARD_LOST_COUNT_SIZE
		 + CHAR_SIZE + AGENCY_SIZE + LEGAPPLID_SIZE + REASON_CODE_SIZE
		 + CHAR_SIZE + LEGTXNCODE_SIZE + BATCHNO_SIZE + CHAR_SIZE
		 + CONTACTNO_SIZE + DATE_SIZE 
		 + INT_SIZE + CHAR_SIZE + USER_ID_SIZE + KPT_SIZE + DELWAT_REMARKS_SIZE + CHAR_SIZE; //Added by Salmi on 3 May 2021, SKP007/PM/2021

	/* Kpt number + Application status + + application date + branch code size				
	   application staff id + pc date + 
	/* user id size + gmpc ver no + gmpc remarks 1 and 2 + lost card count
	   + appl stat 2 + indicator1 + leg appl id size + reason code size
	   + indicator2 + transaction_code + batchno_size*/


	/* Every field to be passed to the legacy must have some bytes of additional	*/
	/* info put into it so make arrangement for the same							*/
	/* 1 byte data indicator FIELD_ID_SIZE bytes of field id						*/
	put_var_data.len = put_var_data.len + (20 * (FIELD_ID_SIZE + 1));

	/* Allocate memory for the variable portion of data */
	put_var_data.data = malloc(put_var_data.len);
	if (put_var_data.data== NULL)
	{
		userlog("li_update_gmpc_stat_p  : MALLOC_ERROR - malloc call failed");

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

	if(req.appnt_kpt[0] != '\0')
	{
		if((req.appnt_kpt[0] == 'D') && (req.appln_stat == 'C')) //Added by Salmi on 27 Sep 2021 for Removing 1621 starts with D on Batal trx
			;
		else
		{
		ret = add_one_fc_field(FID_KPT_NO, &temp_ptr, req.appnt_kpt, 
		TYPE_CHAR_ARR, error_code);
		}

		userlog("req.appnt_kpt : %s",req.appnt_kpt);
	}

	// To copy the appln_date into different field id's based on the temp_stat
	temp_stat[0] = '\0';
	if(req.appln_stat2 != '\0')
	{
		temp_stat[0] = req.appln_stat;
		temp_stat[1] = req.appln_stat2;
		temp_stat[2] = '\0';
	}
	else
	{
		temp_stat[0] = req.appln_stat;
		temp_stat[1] = '\0';
	}
	userlog("temp_stat inside the li : %s",temp_stat);


	//added by samsuri on 8 aug 2022------------------------------------
	if(strcmp(temp_stat,"C") == 0)
	{
		userlog("lostcntneg: %d",req.lostcntneg);
		userlog("lostcntcrime: %d",req.lostcntcrime);
		userlog("lostcntdis: %d",req.lostcntdis);

		if(req.lostcntneg > 0)
		{
			req.lostcntneg--;
			if(req.lostcntneg < 1) req.lostcntneg = 99;
			userlog("in lostcntneg");
			temp_char_arr[0] = '\0';
			ltoa(req.lostcntneg, temp_char_arr, 10);
			add_one_fc_field(FID_LOSTCNTNEG, &temp_ptr, temp_char_arr,
							TYPE_CHAR_ARR, error_code);
		}
		if(req.lostcntcrime > 0)
		{
			req.lostcntcrime--;
			if(req.lostcntcrime < 1) req.lostcntcrime = 99;
			userlog("in lostcntcrime");
			temp_char_arr[0] = '\0';
			ltoa(req.lostcntcrime, temp_char_arr, 10);
			add_one_fc_field(FID_LOSTCNTCRIME, &temp_ptr, temp_char_arr,
							TYPE_CHAR_ARR, error_code);
		}
		if(req.lostcntdis > 0)
		{
			req.lostcntdis--;
			if(req.lostcntdis < 1) req.lostcntdis = 99;
			userlog("in lostcntcrime");
			temp_char_arr[0] = '\0';
			ltoa(req.lostcntdis, temp_char_arr, 10);
			add_one_fc_field(FID_LOSTCNTDIS, &temp_ptr, temp_char_arr,
							TYPE_CHAR_ARR, error_code);
		}
	}
	//finish added by samsuri on 8 aug 2022------------------------------------



	/* Add application Status */
	if(req.appln_stat != '\0')
	{
	ret = add_one_fc_field(FID_KPT_APPLN_STAT_CD, &temp_ptr, 
		(char *)&req.appln_stat, TYPE_CHAR, error_code);
	}
	/* Application type 
	ret = add_one_fc_field(FID_GMPC_APPLN_TYPE, &temp_ptr, req.appln_type, 
		TYPE_CHAR_ARR, error_code);
	*/
	/* Doc type */
/*	ret = add_one_fc_field(FID_GMPC_DOC_TYPE, &temp_ptr, req.doc_type, 
		TYPE_CHAR_ARR, error_code);
*/
		
	/* Application Date */
	/* Adjust the format */
	//if temp_stat = T, then copy the appln_date to 1339 & 1653 filed id's
	// for this appln_date comes from appl_date from APPLICATION table,
	// the rest are timestamp from application table
	temp_char_arr[0] = '\0';
	if(strcmp(temp_stat, "T") == 0)
	{
		if(req.appln_date[0] != '\0')
		{
			
		 li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.appln_date);

		 ret = add_one_fc_field(FID_KPT_APPLN_DT, &temp_ptr, temp_char_arr, 
			TYPE_CHAR_ARR, error_code);

		 ret = add_one_fc_field(FID_KPT_REG_DATE, &temp_ptr, temp_char_arr, 
			TYPE_CHAR_ARR, error_code);
		}
	}	
	else if(strcmp(temp_stat, "P") == 0)
	{
	//if temp_stat = P, then copy the appln_date to 8157 filed id

		if(req.appln_date[0] != '\0')
		{
			temp_char_arr[0] = '\0';
		 li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.appln_date);

		 ret = add_one_fc_field(FID_APPL_DOWNLOAD_DATE, &temp_ptr, temp_char_arr, 
			TYPE_CHAR_ARR, error_code);
		}
	}
	else if(strcmp(temp_stat, "C") == 0)
	{
	//if temp_stat = C, then copy the appln_date to 8155 filed id

		if(req.appln_date[0] != '\0')
		{
			temp_char_arr[0] = '\0';
		 li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.appln_date);

		 ret = add_one_fc_field(FID_APPL_APPROVAL_DATE, &temp_ptr, temp_char_arr, 
			TYPE_CHAR_ARR, error_code);		
		}
	}
	else if(strcmp(temp_stat, "K") == 0)
	{
	//if temp_stat = K, then copy the appln_date to 8159 filed id
		if(req.appln_date[0] != '\0')
		{
		 li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.appln_date);

		 ret = add_one_fc_field(FID_APPL_DLV_DATE, &temp_ptr, temp_char_arr, 
			TYPE_CHAR_ARR, error_code);

		 ret = add_one_fc_field(FID_KPT_COMPLETE_DT, &temp_ptr, temp_char_arr, 
			TYPE_CHAR_ARR, error_code);  // included this on 02/02/07  copying the appln_date to 3243 filed id
		}

	}
	else if(strcmp(temp_stat, "PK") == 0)
	{
	//if temp_stat = PK, then copy the appln_date to 3243 & 3153 filed id's

		if(req.appln_date[0] != '\0')
		{
		 li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.appln_date);

		 ret = add_one_fc_field(FID_APPL_DOWNLOAD_DATE, &temp_ptr, temp_char_arr, 
			TYPE_CHAR_ARR, error_code);

		// ret = add_one_fc_field(FID_KPT_COMPLETE_DT, &temp_ptr, temp_char_arr, 
		//	TYPE_CHAR_ARR, error_code);

		 //ret = add_one_fc_field(FID_KPT_COLLECTION_DT, &temp_ptr, temp_char_arr, 
		//	TYPE_CHAR_ARR, error_code);
		}
	}
	else if(strcmp(temp_stat, "K1") == 0)
	{
	//if temp_stat = K1, then copy the appln_date to 1485 filed id

		if(req.appln_date[0] != '\0')
		{
		 li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.appln_date);

		 ret = add_one_fc_field(FID_APPL_ARRIVAL_DATE, &temp_ptr, temp_char_arr, 
			TYPE_CHAR_ARR, error_code);
		}
	}
	/*
	else if(temp_stat[0] == '#')
	{
	//if temp_stat = #, then copy the appln_date to 1485 filed id
		if(req.appln_date[0] != '\0')
		{
		 li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.appln_date);

		 ret = add_one_fc_field(FID_APPL_ARRIVAL_DATE, &temp_ptr, temp_char_arr, 
			TYPE_CHAR_ARR, error_code);
		}		
	}
	*/
	else if(strcmp(temp_stat, "A") == 0)
	{
	//if temp_stat = A, then copy the appln_date to 3153 filed id

		if(req.appln_date[0] != '\0')
		{
		 li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.appln_date);

		 ret = add_one_fc_field(FID_KPT_COLLECTION_DT, &temp_ptr, temp_char_arr, 
			TYPE_CHAR_ARR, error_code);
		}
	}

	userlog("applpriority : %d",req.applpriority);
	userlog("temp_stat : %s",temp_stat);
	userlog("req.appln_stat2 : %c",req.appln_stat2);
	userlog("req.appln_stat : %c",req.appln_stat);


	if((req.applpriority == 4) && (strcmp(temp_stat, "K1") == 0))
	{
userlog("Inside the loop");
		//then copy the appln_date to 8157, 3243, 8159 filed ids

		if(req.appln_date[0] != '\0')
		{
		 temp_char_arr[0] = '\0';
		 li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.appln_date);

		 ret = add_one_fc_field(FID_APPL_DOWNLOAD_DATE, &temp_ptr, temp_char_arr, 
			TYPE_CHAR_ARR, error_code);

		 ret = add_one_fc_field(FID_KPT_COMPLETE_DT, &temp_ptr, temp_char_arr, 
			TYPE_CHAR_ARR, error_code);

		 ret = add_one_fc_field(FID_APPL_DLV_DATE, &temp_ptr, temp_char_arr, 
			TYPE_CHAR_ARR, error_code);		 

		}

	}

	/* Application Branch code */
	if((req.appln_gsc_no[0] != '\0') && (req.appln_gsc_no[0] != ' '))
	{
	ret = add_one_fc_field(FID_GMPC_APPLN_BRANCH_CD, &temp_ptr, req.appln_gsc_no, 
		TYPE_CHAR_ARR, error_code);
	}
	
	if(req.appln_staff_id[0] != '\0')
	{
	/* Applicatin Staff id */
	/* The staff ID size in legacy is A8 */
	req.appln_staff_id[8] = 0;
	add_one_fc_field(FID_GMPC_APPLN_STAFF_ID, &temp_ptr, req.appln_staff_id,
					TYPE_CHAR_ARR, error_code);
	}

	/* Collection location -->to be deleted as the new requirement doesn't include these two foelds
	ret = add_one_fc_field(FID_GMPC_COLLECTION_LOCATION, &temp_ptr, 
		req.collection_gsc_no, TYPE_CHAR_ARR, error_code);

	/* Collection Date */
	/* Adjust the format 
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.collection_date);
	ret = add_one_fc_field(FID_GMPC_COLLECTION_DT, &temp_ptr, temp_char_arr, 
		TYPE_CHAR_ARR, error_code);
	*/


	/* Issuance date  -->to be deleted as the new requirement doesn't include these two foelds
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.issuance_date);
	ret = add_one_fc_field(FID_GMPC_ISSUANCE_DT, &temp_ptr, temp_char_arr, 
		TYPE_CHAR_ARR, error_code);

	
	/* Issuance staff id */
	/* The staff ID size in legacy is A8 
	req.issuance_staff_id[8] = '\0';
	add_one_fc_field(FID_GMPC_ISSUANCE_STAFF_ID, &temp_ptr, req.issuance_staff_id,
					TYPE_CHAR_ARR, error_code);
	*/

	/* PC date */ //FID_LAST_KPT_GMPC_ISSUE_DT
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

	/* application status2 */
	if((req.appln_stat2 != '\0') && (req.appln_stat2 != '\0'))
	{
	ret = add_one_fc_field(FID_APPL_STATUS2, &temp_ptr, 
		(char *)&req.appln_stat2, TYPE_CHAR, error_code);
	}	
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
	/* probl reason code */
	if((req.probl_reason_code[0] != '\0')  && (req.probl_reason_code[0] != ' '))
	{
	add_one_fc_field(FID_PROBL_REASON_CODE, &temp_ptr, req.probl_reason_code,
		TYPE_CHAR_ARR, error_code);
	}

	/* Indicator2 */
	if((req.indicator2 != '\0') && (req.indicator2 != ' '))
	{
	add_one_fc_field(FID_INDICATOR2, &temp_ptr, &req.indicator2,
		TYPE_CHAR, error_code);
	}

	/* transaction code */
	if((req.transaction_code[0] != '\0')  && (req.transaction_code[0] != ' '))
	{
	add_one_fc_field(FID_LEG_TXN_CODE, &temp_ptr, req.transaction_code,
		TYPE_CHAR_ARR, error_code);
	}

	/* Bundled Id or Batch no */
	if((req.bundleid[0] != '\0')  && (req.bundleid[0] != ' '))
	{
	add_one_fc_field(FID_BATCH_NO, &temp_ptr, req.bundleid,
		TYPE_CHAR_ARR, error_code);
	}

	/* IJPN_GMPC_IND */
	if((req.ijpn_gmpc_ind != '\0') && (req.ijpn_gmpc_ind != ' '))
	{
	add_one_fc_field(FID_IJPN_GMPC_IND, &temp_ptr, &req.ijpn_gmpc_ind,
		TYPE_CHAR, error_code);
	}

	/* Stopped sending this field FID_TELEPHONE_NO to host from 06/03/2009 onwards

	 --**-- telephone number --**--  // added on 18/04/06
	if((req.telephone_no[0] != '\0') && (req.telephone_no[0] != ' '))
	{
	ret = add_one_fc_field(FID_TELEPHONE_NO, &temp_ptr,  req.telephone_no,	
					TYPE_CHAR_ARR, error_code);
	}
	*/

	userlog(" req.telephone_no: %s",req.telephone_no);

	/* card personalised date */ // added on 10/05/06
	if((req.personlised_date[0] != '\0') && (req.personlised_date[0] != ' '))
	{
		temp_char_arr[0] = '\0';
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.personlised_date);
	ret = add_one_fc_field(FID_CARDPERSONALDATE, &temp_ptr,  temp_char_arr,	
					TYPE_CHAR_ARR, error_code);
	}

	userlog(" req.personlised_date: %s",req.personlised_date);

	
	//Added by Salmi Date: 23th Mar,2020  Added new field id, CRAPPL-  SKP002/CR/2020	
	/* Approval Status */
	if((req.approval_status != '\0') && (req.approval_status != ' '))
	{
		add_one_fc_field(FID_APPROVAL_STATUS, &temp_ptr, &req.approval_status,
		TYPE_CHAR, error_code);

		userlog(" req.user1: %s",req.user1);
		userlog(" req.user1_kptno: %s",req.user1_kptno);
		userlog(" ...req.remark: %s",req.remark);

		if((req.user1[0] != '\0')  && (req.user1[0] != ' '))
		{
			add_one_fc_field(FID_REQUSERID, &temp_ptr, req.user1,
			TYPE_CHAR_ARR, error_code);
			if((req.user1_kptno[0] != '\0')  && (req.user1_kptno[0] != ' '))
			{
				add_one_fc_field(FID_REQKPTNO, &temp_ptr, req.user1_kptno,
				TYPE_CHAR_ARR, error_code);
			}
		}
		else
		{
			if((req.user1_kptno[0] != '\0')  && (req.user1_kptno[0] != ' '))
			{
				add_one_fc_field(FID_APPRVKPTNO, &temp_ptr, req.user1_kptno,
				TYPE_CHAR_ARR, error_code);
			}
		}

		if((req.remark[0] != '\0')  && (req.remark[0] != ' '))
		{
			add_one_fc_field(FID_REMARK, &temp_ptr, req.remark,
			TYPE_CHAR_ARR, error_code);
		}

	}
	//Added by Salmi Date: 23th Mar,2020  Added new field id, CRAPPL-  SKP002/CR/2020-End	
	//Added by Salmi Date 12 Apr, 2021 MyKas Tamat Tempoh
	if((req.jkind != '\0') && (req.jkind != ' '))
	{
		add_one_fc_field(FID_JKIND, &temp_ptr, &req.jkind,
		TYPE_CHAR, error_code);

		userlog(" req.jkind: %c",req.jkind);

	}

	//Added by Salmi Date 12 Apr, 2021 MyKas Tamat Tempoh-End

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

	ret = li_call_dll_st(put_header, put_var_data, put_fin_data, msg_id, error_code,
		pReplyMsg,iReplyMsgLen,sErrMessage);

	userlog("...Inside the Li msg_id : %s ret[%d]",msg_id, ret);
	
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
