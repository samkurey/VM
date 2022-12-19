/* $Header$ */
/********************************************************************/
/* File Name   : li_jpj_update_payment.h                                */
/* Author      : Amol Thorat    				                    */
/* Description : This file contains io structures required for		*/
/*				 li_jpj_update_payment_p								*/
/********************************************************************/

#ifndef _LI_JPJ_REV_UPDATE_PAYMENT_
#define _LI_JPJ_REV_UPDATE_PAYMENT_

//#include "newdef.h"

/* Structs for li_jpj_rev_update_payment_p */
typedef struct li_jpj_rev_update_payment_req
{
	char license_id[LIC_ID_SIZE];
	char category_of_owner;
	char kpt_number[KPT_SIZE];
	char rev_desc[JPJ_REVERSAL_DESC_SIZE];

} LI_JPJ_REV_UPDATE_PAYMENT_REQ_T;

/* Function Prototypes */
int li_jpj_rev_update_payment_p(LI_P_HEADER_T header, LI_REFER_TIMESTAMP_T refer_timestamp,
							LI_PUT_FIN_DATA_T put_fin_data,
							LI_JPJ_REV_UPDATE_PAYMENT_REQ_T req,
							unsigned char *msg_id,
							int *error_code,
							unsigned char *pReplyMsg,
							int *iReplyMsgLen,
							char *sErrMessage);

#endif /* _LI_JPJ_REV_UPDATE_PAYMENT_ */


