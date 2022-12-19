/* $Header$ */
/********************************************************************/
/* File Name   : li_enq_summons_payment_summons.h                              */
/* Author      : Amol Thorat					                    */
/* Description : This file contains io structures requried for		*/
/*				 li_enq_summons_payment_p and _g functions						*/
/********************************************************************/

#ifndef _LI_ENQ_SUMMONS_PAYMENT_
#define _LI_ENQ_SUMMONS_PAYMENT_


typedef struct li_enq_summons_payment_req
{
	char issuing_branch_code[JPJ_BRANCH_CODE_SIZE];
	char summon_number[SUMMONS_NUMBER_LEN];
	char summon_year[YEAR_SIZE];
	char summon_type;
	/* New requirement - added on 07/07/2001 */
	char issue_code[SUMMON_ISSUE_CODE_SIZE];

} LI_ENQ_SUMMONS_PAYMENT_REQ_T;


typedef struct li_enq_summons_payment_resp
{
		char paid_date[DATE_SIZE];
} LI_ENQ_SUMMONS_PAYMENT_RESP_T;


int li_enq_summons_payment_p(LI_P_HEADER_T header, LI_ENQ_SUMMONS_PAYMENT_REQ_T req,
					  unsigned char *msg_id, int *error_code);

int li_enq_summons_payment_g(LI_G_HEADER_T *header, 
						   LI_ENQ_SUMMONS_PAYMENT_RESP_T *resp,
						   int *error_code, char *error_msg);

#endif /* _LI_ENQ_SUMMONS_PAYMENT */