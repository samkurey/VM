/* $Header:   F:/GSCBProjectDb/archives/CIS/GSCB/LegacySimulation/common/li_download_summons.h-arc   1.1   Dec 25 2000 17:42:46   SangruAL  $ */
/********************************************************************/
/* File Name   : li_download_summons_summons.h                              */
/* Author      : Amol Thorat					                    */
/* Description : This file contains io structures requried for		*/
/*				 li_download_summons_p and _g functions						*/
/********************************************************************/

#ifndef _LI_DOWNLOAD_SUMMONS
#define _LI_DOWNLOAD_SUMMONS


typedef struct li_download_summons_req
{
	char category_of_owner;
	char kpt_number[KPT_SIZE];

} LI_DOWNLOAD_SUMMONS_REQ_T;


typedef struct li_summons_info
{
	char summons_number[SUMMON_NO_LEN];
	char issuing_branch_code[BRANCH_CODE_SIZE];
	char issued_date[DATE_SIZE];
	char summons_type;
	char summons_issue_code[SUMMONS_ISSUE_CODE_LEN];
	char offence_category1[OFFENCE_CATEGORY_LEN];
	char offence_code1[OFFENCE_CODE_SIZE];
	char offence_status1[OFFENCE_STATUS_LEN];
	long offence_amount1;
	char offence_category2[OFFENCE_CATEGORY_LEN];
	char offence_code2[OFFENCE_CODE_SIZE];
	char offence_status2[OFFENCE_STATUS_LEN];
	long offence_amount2;
	char offence_category3[OFFENCE_CATEGORY_LEN];
	char offence_code3[OFFENCE_CODE_SIZE];
	char offence_status3[OFFENCE_STATUS_LEN];
	long offence_amount3;
	char offence_category4[OFFENCE_CATEGORY_LEN];
	char offence_code4[OFFENCE_CODE_SIZE];
	char offence_status4[OFFENCE_STATUS_LEN];
	long offence_amount4;
//	int  total_number_of_unpaid_fines;
	char summons_settled_date[DATE_SIZE];
	char last_payable_date[DATE_SIZE];
	char court_code[JPJ_COURT_CODE_SIZE];
//	char court_description[JPJ_COURT_CODE_DESC];
	char trial_date[DATE_SIZE];
	char trial_time[TIME_SIZE];
	char issued_place_code[ISSUED_PLACE_CODE_LEN];
	char place_issued[ISSUED_PLACE_LEN];
	char officer_id[OFFICER_ID_LEN];
	char officer_name[OFFICER_NAME_LEN];
	char e1_vehicle_type[VEHICLE_TYPE_CODE_SIZE];
	char e1_vehicle_regn_no[REG_NO_SIZE];
	char trailer_number[TRAILER_NUMBER_LEN];
	char path_from[PATH_SIZE];
	char path_to[PATH_SIZE];

	/* pointer to next summons record */
	struct li_summons_info *next;


}LI_SUMMONS_INFO_T;

typedef struct li_download_summons_resp
{
	LI_SUMMONS_INFO_T *start; /* head of linked list */

} LI_DOWNLOAD_SUMMONS_RESP_T;


int li_download_summons_p(LI_P_HEADER_T header, LI_DOWNLOAD_SUMMONS_REQ_T req,
					  unsigned char *msg_id, int *error_code,
					  unsigned char *pReplyMsg,
						   int *iReplyMsgLen,
						   char *sErrMessage);

int li_download_summons_g(LI_G_HEADER_T *header, 
						   LI_DOWNLOAD_SUMMONS_RESP_T *resp,
						   int *error_code, char *error_msg,
						   unsigned char *msg_buff);


#endif /* _LI_DOWNLOAD_SUMMONS */
