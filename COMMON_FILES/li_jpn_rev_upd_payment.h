/* $Header$ */
/********************************************************************/
/* File Name   : li_jpn_update_payment.h                                */
/* Author      : Amol Thorat    				                    */
/* Description : This file contains io structures required for		*/
/*				 li_jpn_update_payment_p								*/
/********************************************************************/

#ifndef _LI_JPN_REV_UPDATE_PAYMENT_
#define _LI_JPN_REV_UPDATE_PAYMENT_

//#include "newdef.h"

/* Structs for li_jpn_update_payment_p */
typedef struct li_jpn_rev_update_payment_req
{
	char kpt_number[KPT_SIZE];
  //char rev_desc[JPN_REVERSAL_DESC_SIZE];
	
	char cheque_no[CHEQUE_NO_SIZE];
	char pay_collection_date[DATE_SIZE];
	
	char appl_id[LEGAPPLID_SIZE];

} LI_JPN_REV_UPDATE_PAYMENT_REQ_T;

/* Function Prototypes */
int li_jpn_rev_update_payment_p(LI_P_HEADER_T header, LI_REFER_TIMESTAMP_T refer_timestamp,
										LI_PUT_FIN_DATA_T put_fin_data,
										LI_JPN_REV_UPDATE_PAYMENT_REQ_T req,
										unsigned char *msg_id, int *error_code,
										unsigned char *pReplyMsg,
										int *iReplyMsgLen,
										char *sErrMessage);

#endif /* _LI_JPN_REV_UPDATE_PAYMENT_ */


