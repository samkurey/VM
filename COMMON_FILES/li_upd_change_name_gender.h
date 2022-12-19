/*$Header$*/
/********************************************************************/
/* File Name   : li_upd_change_name_gender.h									*/
/* Author      : Srinivasa Reddy							                    */
/* Description : This file contains io structures requried for		*/
/*				 									             */
/********************************************************************/

#ifndef _LI_UPD_CHANGE_NAME_GENDER_
#define _LI_UPD_CHANGE_NAME_GENDER_


/* input structure */
typedef struct li_upd_change_name_req_s
{
	char kptno[KPT_SIZE];
	char currlongname[LONG_NAME_SIZE];	
	char gender;
	char namechgcode[NAME_CHG_CODE];
	char nameregdate[DATE_SIZE];
	//char jenispindaan;
	char jpnremarks1[JPNREMARKS1_SIZE];
	char jpnremarks2[JPNREMARKS2_SIZE];
	char userid_supervisor[USER_ID_SIZE];
	char transaction_type;

}LI_UPD_CHANGE_NAME_REQ_T;

#if defined(__cplusplus)
extern "C" {
#endif

int li_upd_change_name_gender_p(LI_P_HEADER_T header, 
						  LI_UPD_CHANGE_NAME_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
							int *iReplyMsgLen,
							char *sErrMessage
						    );

#if defined(__cplusplus)
}
#endif

#endif 

