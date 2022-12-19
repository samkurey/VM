/*$Header$*/
/********************************************************************/
/* File Name   : li_update_jpj_addr.h								*/
/* Author      : Vageesh Patwardhan				                    */
/* Description : This file contains io structures required for		*/
/*				 li_update_jpj_addr_p								*/
/********************************************************************/


#ifndef _LI_UPDATE_JPJ_ADDR_
#define _LI_UPDATE_JPJ_ADDR_
/* Structs for li_update_addr_p */

typedef struct li_update_addr_req
{
	char appnt_kpt[KPT_SIZE];
	char license_id[LIC_ID_SIZE];
	char category_of_owner; 
	ADDRESS_T new_address;
	ADDRESS_T old_address;
} LI_UPDATE_JPJ_ADDR_REQ_T;



/* Function prototype */
int li_update_jpj_addr_p(LI_P_HEADER_T header, 
						   LI_UPDATE_JPJ_ADDR_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
						   int *iReplyMsgLen,
						   char *sErrMessage
						   );

#endif /* _LI_UPDATE_JPJ_ADDR_ */
