/* $Header:   F:/GSCBProjectDb/archives/source/LegacyInterface/li_update_cash_summary.h-arc   1.1   Jun 06 2000 11:45:08   ThoratAD  $ */
/********************************************************************/
/* File Name   : li_update_cash_summary.h							*/
/* Author      : Vageesh Patwardhan				                    */
/* Description : This file contains io structures requried for		*/
/*				 li_update_cash_summary_p							*/
/********************************************************************/


#ifndef _LI_UPDATE_CASH_SUMMARY_
#define _LI_UPDATE_CASH_SUMMARY_

/* Structs for li_update_cash_summary_p */
typedef struct li_revenue_code_amt
{
	char revenue_code[AGENCY_REV_CODE_SIZE];
	double revenue_amount;
	int trans_count;
	struct li_revenue_code_amt *next_revenue_code_amt;
} LI_REVENUE_CODE_AMOUNT_T;

typedef struct li_update_cash_summary_req
{
	char gsc_closure_date[DATE_SIZE];
	LI_REVENUE_CODE_AMOUNT_T *revenue_code_amt;
}LI_UPDATE_CASH_SUMMARY_REQ_T;


int li_update_cash_summary_p(LI_P_HEADER_T header, LI_UPDATE_CASH_SUMMARY_REQ_T req,
					  unsigned char *msg_id, int *error_code,
					  unsigned char *pReplyMsg,
					  int *iReplyMsgLen,
					  char *sErrMessage);

#endif /* _LI_UPDATE_CASH_SUMMARY_ */


