/********************************************************************/
/* File Name   : li_get_imm_pr_info.h								*/
/* Author      : 				                */
/* Description : This file contains io structures required for		*/
/*				 li_get_imm_pr_info_p and _g 						*/
/********************************************************************/

#include "gscbdef.h"

#ifndef _LI_GET_IMM_PR_INFO_
#define _LI_GET_IMM_PR_INFO_

/* Structs for li_get_imm_pr_info_p */

typedef struct li_get_imm_pr_info_req
{
	char entry_permit_no[PERMIT_NO_SIZE + 1];
	char fin_no[FIN_NO_SIZE];
	char szName[JIM_NAME_SIZE];
	char szEntryPermitDate[DATE_SIZE];
	int permit_type;	
}LI_GET_IMM_PR_INFO_REQ_T;


/* Structs for li_get_imm_pr_info_g */
typedef struct li_get_imm_pr_info_resp
{
	int rec_count;
	long nPhotoSize;
	unsigned char *pPhoto;
}LI_GET_IMM_PR_INFO_RESP_T;


typedef struct entry_permit_matches
{
	char name[JIM_NAME_SIZE];
	char dob[DATE_SIZE];
	char gender;
	char fin_no[FIN_NO_SIZE];
	char entry_permit_date[DATE_SIZE];
	char passport_no[PASSPORT_NO_SIZE];
	char imm_reference_date[DATE_SIZE];
	char imm_reference_no[IMM_REF_NO_SIZE + 1];
	char country_issued_code[COUNTRY_CODE_SIZE];
	char citizenship[CITIZEN_CODE_SIZE + 1];	
	int religion_code;
	int passport_type;
	char UnknownBirthInd;
}ENTRY_PERMIT_MATCHES_T;

int li_get_imm_pr_info_p(LI_P_HEADER_T header, 
						   LI_GET_IMM_PR_INFO_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
						   int *iReplyMsgLen,
						   char *sErrMessage
						   );

//int li_get_imm_pr_info_g(LI_G_HEADER_T *header,
//					  ENTRY_PERMIT_MATCHES_T *resp,
//					  int *error_code, char *error_msg);

int li_get_imm_pr_info_g(LI_G_HEADER_T *header, 
						   LI_GET_IMM_PR_INFO_RESP_T **resp,
						   int *error_code, char *error_msg,
						   unsigned char *msg_buff);

#endif /* _LI_GET_IMM_PR_INFO_ */
