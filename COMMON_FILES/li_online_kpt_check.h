/*$Header:   F:/GSCBProjectDb/archives/source/LegacyInterface/li_get_afis_img.h-arc   1.0   Jun 20 2000 12:29:30   NatuSM  $*/
/********************************************************************/
/* File Name   : li_get_afis_img.h									*/
/* Author      : 								                    */
/* Description : This file contains io structures requried for		*/
/*				 li_get_afis_img_p and li_get_afis_img_g			*/
/********************************************************************/


#ifndef _LI_ONLINE_KPT_CHECK_
#define _LI_ONLINE_KPT_CHECK_


/* Structs for li_online_kpt_check_p */

typedef struct li_get_afis_img_req
{
	char kpt_no[KPT_SIZE];

} LI_ONLINE_KPT_CHECK_REQ_T;


/* Structs for li_online_kpt_check_g */
/*
1) Card Version Number  	3341
2) Gender  	1029
3) Current Long Name   	1009
4) Address1 	1323
5) Address2	1325
6) Address3  	1327
7) Postcode   	1329
8) City Code  	1335
9) State Code 	1331
*/
typedef struct li_online_kpt_check_resp
{
	char card_version_no;
	char gender;
	char current_long_name[LONG_NAME_SIZE];

	ADDRESS_T addr;

} LI_ONLINE_KPT_CHECK_RESP_T;



/* Function prototype */
int li_online_kpt_check_p(LI_P_HEADER_T header,
						   LI_ONLINE_KPT_CHECK_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
						   int *iReplyMsgLen,
						   char *sErrMessage
						   );

int li_online_kpt_check_g(LI_G_HEADER_T *header, 
						   LI_ONLINE_KPT_CHECK_RESP_T *resp, 
						   int *error_code, char *error_msg, char* msg_buff);

 

#endif
