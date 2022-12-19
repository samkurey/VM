/* $Header$ */
/********************************************************************/
/* File Name   : li_jpj_update_payment.h                                */
/* Author      : Amol Thorat    				                    */
/* Description : This file contains io structures required for		*/
/*				 li_jpj_update_payment_p								*/
/********************************************************************/

#ifndef _LI_JPJ_UPDATE_PAYMENT_
#define _LI_JPJ_UPDATE_PAYMENT_

/* Structs for li_jpj_update_payment_p */
typedef struct li_jpj_update_payment_req
{
	char license_id[LIC_ID_SIZE];
	char category_of_owner;
	char kpt_number[KPT_SIZE];
	char appl_id[APP_ID_SIZE];

} LI_JPJ_UPDATE_PAYMENT_REQ_T;

/* Function Prototypes */
int li_jpj_update_payment_p(LI_P_HEADER_T header,
										LI_PUT_FIN_DATA_T put_fin_data,
										LI_JPJ_UPDATE_PAYMENT_REQ_T req,
										unsigned char *msg_id, int *error_code );

#endif /* _LI_JPJ_UPDATE_PAYMENT_ */


