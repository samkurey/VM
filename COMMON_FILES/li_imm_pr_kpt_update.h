/* $Header:   $ */
/********************************************************************/
/* File Name   : li_imm_pr_kpt_update.h                             */
/* Author      : Srinivasa Reddy				                    */
/* Description : This file contains io structures required for		*/
/*				 li_imm_pr_kpt_update_p						    	*/
/********************************************************************/

#ifndef _LI_IMM_PR_KPT_UPDATE_
#define _LI_IMM_PR_KPT_UPDATE_

/* Structs for li_imm_pr_kpt_update_p */

typedef struct li_imm_pr_kpt_update_req
{
	char entry_permit_no[PERMITNO1_SIZE];
	int  permit_type;
	char currlongname[CURRENT_LONG_NAME_SIZE];
	char kptno[KPT_SIZE];
	char entry_date[DATE_SIZE];

} LI_IMM_PR_KPT_UPDATE_REQ_T;


/* Function Prototypes */
int li_imm_pr_kpt_update_p(LI_P_HEADER_T header, 
						   LI_IMM_PR_KPT_UPDATE_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
						   int *iReplyMsgLen,
						   char *sErrMessage
						   );

#endif

