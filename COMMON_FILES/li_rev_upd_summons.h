/* $Header$ */
/********************************************************************/
/* File Name   : li_upd_suspension.h                                */
/* Author      : Amol Thorat    				                    */
/* Description : This file contains io structures required for		*/
/*				 li_upd_suspension_p								*/
/********************************************************************/

#ifndef _LI_REV_UPDATE_SUMMONS_
#define _LI_REV_UPDATE_SUMMONS_

/* Structs for li_upd_summons_p */
typedef struct li_rev_upd_summons_req
{
	char kpt_number[KPT_SIZE];
	char license_id[LIC_ID_SIZE];
	char category_of_owner;
	//char new_category_of_owner; // not in doc, added from mail 
	char summons_no[SUMMON_NO_SIZE];
	char issue_branch_code[ISSUE_BRANCH_CODE_SIZE]; // define in newdef.h
	char issue_date[SUMMON_ISSUE_YEAR_SIZE];		// only the year required
	char summon_type;
	char summon_issue_code[SUMMONS_ISSUE_CODE_LEN];
	char rev_desc[JPJ_REVERSAL_DESC_SIZE];

} LI_REV_UPD_SUMMONS_REQ_T;



/* Function Prototypes */
int li_rev_upd_summons_p(LI_P_HEADER_T header, LI_REFER_TIMESTAMP_T refer_timestamp,
					  LI_PUT_FIN_DATA_T put_fin_data, LI_REV_UPD_SUMMONS_REQ_T req,
					  unsigned char *msg_id,
					  int *error_code,
					  unsigned char *pReplyMsg,
					  int *iReplyMsgLen,
					  char *sErrMessage
					  );

#endif /* _LI_REV_UPDATE_SUMMONS_ */


