/* $Header:   F:/GSCBProjectDb/archives/CIS/GSCB/LegacySimulation/common/li_upd_jpj_payment.h-arc   1.1   Jan 11 2001 18:35:26   AbhyanSC  $ */
/********************************************************************/
/* File Name   : li_update_payment.h								*/
/* Author      : Amol Thorat						                */
/* Description : This file contains io structures required for		*/
/*				 li_update_payment_p								*/
/********************************************************************/


#ifndef _LI_UPDATE_JPJ_PAYMENT_
#define _LI_UPDATE_JPJ_PAYMENT_

typedef struct li_update_jpj_cash_summary_req
{
	char license_id[LIC_ID_SIZE];
	char category_of_owner;
	char kpt_number[KPT_SIZE];


}LI_UPDATE_JPJ_PAYMENT_REQ_T;


int li_jpj_update_payment_p(LI_P_HEADER_T header, LI_PUT_FIN_DATA_T put_fin_data, 
							LI_UPDATE_JPJ_PAYMENT_REQ_T req,
					  unsigned char *msg_id, int *error_code);

#endif /* _LI_UPDATE_JPJ_CASH_SUMMARY_ */


