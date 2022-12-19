/* $Header:   F:/GSCBProjectDb/archives/source/LegacyInterface/li_get_passport_info.h-arc   1.2   Jun 06 2000 12:21:42   ThoratAD  $ */
/********************************************************************/
/* File Name   : li_get_passport_info.h								*/
/* Author      : Vageesh Patwardhan				                    */
/* Description : This file contains io structures required for		*/
/*				 li_get_passport_info_p and _g 						*/
/********************************************************************/


#ifndef _LI_GET_PASSPORT_INFO_
#define _LI_GET_PASSPORT_INFO_

/* Structs for li_get_passport_info_p */

typedef struct li_get_passport_info_req
{
	char passport_no[PASSPORT_NO_SIZE];
	char document_type[JIM_DOC_TYPE_SIZE];
}LI_GET_PASSPORT_INFO_REQ_T;


/* Structs for li_get_passport_info_g */
typedef struct li_get_passport_info_resp
{
	char id_number[LEGACY_KPT_SIZE];
	char id_type;
	char expiration_date[DATE_SIZE];
	char name[JIM_NAME_SIZE];
	char dob[DATE_SIZE];
	char gender;
}LI_GET_PASSPORT_INFO_RESP_T;

#if defined(__cplusplus)
extern "C" {
#endif

int li_get_passport_info_p(LI_P_HEADER_T header, 
						   LI_GET_PASSPORT_INFO_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
							int *iReplyMsgLen,
							char *sErrMessage
						   );

int li_get_passport_info_g(LI_G_HEADER_T *header,
					  LI_GET_PASSPORT_INFO_RESP_T *resp,
					  int *error_code, char *error_msg,
					  char* msg_buff);

#if defined(__cplusplus)
}
#endif

#endif /* _LI_GET_PASSPORT_INFO_ */



