/* $Header$ */
/********************************************************************/
/* File Name   : li_upload_audit.h				                    */
/* Author      : Amol Thorat					                    */
/* Description : This file contains io structures required for		*/
/*				 li_upload_audit_pfunction							*/
/********************************************************************/

#ifndef _LI_JPN_UPLOAD_AUDIT_
#define _LI_JPN_UPLOAD_AUDIT_

typedef struct li_jpn_upload_audit_req
{
	char kpt_number[KPT_SIZE];
	char unknown_birth_ind;
	char cad_serial_no[CAD_SERIAL_SIZE];
	int city_code;
	
} LI_JPN_UPLOAD_AUDIT_REQ_T;


int li_jpn_upload_audit_p(LI_P_HEADER_T header, LI_JPN_UPLOAD_AUDIT_REQ_T req,
					  unsigned char *msg_id, int *error_code,
					  unsigned char *pReplyMsg,
					  int *iReplyMsgLen,
					  char *sErrMessage);


#endif /* _LI_JPN_UPLOAD_AUDIT */