/* $Header:   F:/GSCBProjectDb/archives/source/LegacyInterface/li_update_jpj_cash_summary.h-arc   1.0   Jun 25 2000 17:34:02   DeshpaA  $ */
/********************************************************************/
/* File Name   : li_update_jpj_cash_summary.h						*/
/* Author      : Amol Thorat						                */
/* Description : This file contains io structures required for		*/
/*				 li_update_jpj_cash_summary_p						*/
/********************************************************************/


#ifndef _LI_UPDATE_JPJ_CASH_SUMMARY_
#define _LI_UPDATE_JPJ_CASH_SUMMARY_

/* Structs for li_update_jpj_cash_summary_p */
typedef struct li_jpj_revenue_code_amt
{
	char revenue_code[AGENCY_REV_CODE_SIZE];
	double revenue_amount;
	int trans_count;
	struct li_jpj_revenue_code_amt *next_revenue_code_amt;
} LI_JPJ_REVENUE_CODE_AMOUNT_T;

typedef struct li_update_jpj_cash_summary_req
{
	char gsc_closure_date[DATE_SIZE];
	LI_JPJ_REVENUE_CODE_AMOUNT_T *revenue_code_amt;
}LI_UPDATE_JPJ_CASH_SUMMARY_REQ_T;


int li_update_jpj_cash_summary_p(LI_P_HEADER_T header, LI_UPDATE_JPJ_CASH_SUMMARY_REQ_T req,
					  unsigned char *msg_id, int *error_code,
					  unsigned char *pReplyMsg,
					  int *iReplyMsgLen,
					  char *sErrMessage
					  );

#endif /* _LI_UPDATE_JPJ_CASH_SUMMARY_ */


