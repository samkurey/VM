/* $Header$ */
/********************************************************************/
/* File Name   : li_enq_summons_details.h                           */
/* Author      : Amit Sangrulkar					                */
/* Description : This file contains io structures requried for		*/
/*				 li_enq_summons_details_p and _g functions			*/
/********************************************************************/

#include "li_download_summons.h"

#ifndef _LI_ENQ_SUMMONS_DETAILS
#define _LI_ENQ_SUMMONS_DETAILS


typedef struct li_enq_summons_details_req_s
{
	char summons_number[SUMMON_NO_SIZE];
	char summons_type;
	char summons_issue_branch[BRANCH_CODE_SIZE];
	char summons_issue_year[YEAR_SIZE];
	char summons_issue_code[SUMMONS_ISSUE_CODE_LEN];

} LI_ENQ_SUMMONS_DETAILS_REQ_T;

/*
typedef struct li_summons_info_s
{
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
	char summons_settled_date[DATE_SIZE];
	char last_payable_date[DATE_SIZE];
	char court_code[JPJ_COURT_CODE_SIZE];
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


} LI_ENQ_SUMMONS_DETAILS_RESP_T;
*/

#if defined(__cplusplus)
extern "C" {
#endif

int li_enq_summons_details_p(LI_P_HEADER_T header, LI_ENQ_SUMMONS_DETAILS_REQ_T req,
					  unsigned char *msg_id, int *error_code,
					  unsigned char *pReplyMsg,int *iReplyMsgLen,
					  char *sErrMessage);

int li_enq_summons_details_g(LI_G_HEADER_T *header, 
						   LI_SUMMONS_INFO_T *resp,
						   int *error_code, char *error_msg,
						   char* msg_buff);

#if defined(__cplusplus)
}
#endif

#endif /* _LI_ENQ_SUMMONS_DETAILS */
