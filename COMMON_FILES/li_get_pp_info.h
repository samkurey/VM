/* $Header$ */
/********************************************************************/
/* File Name   : li_get_pp_info.h									*/
/* Author      : Vageesh Patwardhan				                    */
/* Description : This file contains io structures required for		*/
/*				 li_get_pp_info_p and _g 							*/
/********************************************************************/


#ifndef _LI_GET_PP_INFO_
#define _LI_GET_PP_INFO_

/* Structs for li_get_pp_info_p */

typedef struct li_get_pp_info_req_s
{
	char id_type[ID_TYPE_SIZE];
	char id_number[ID_SIZE];

}LI_GET_PP_INFO_REQ_T;


/* Structs for li_get_pp_info_g */

typedef struct pp_details_s
{
	char pp_number[JIM_PP_NO_SIZE];
	char doc_type[JIM_DOC_TYPE_SIZE];
	char expiration_date[DATE_SIZE];
	struct pp_details_s *next_pp;

} PP_DETAILS_T;

typedef struct li_get_pp_info_resp_s
{
	char id_number[ID_SIZE];
	char id_type;
	char name[JIM_NAME_SIZE];
	char dob[DATE_SIZE];
	char gender;
	PP_DETAILS_T *first_pp;

} LI_GET_PP_INFO_RESP_T;

#if defined(__cplusplus)
extern "C" {
#endif

int li_get_pp_info_p(LI_P_HEADER_T header, 
						   LI_GET_PP_INFO_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
						   int *iReplyMsgLen,
						   char *sErrMessage
						   );

int li_get_pp_info_g(LI_G_HEADER_T *header,
					  LI_GET_PP_INFO_RESP_T *resp,
					  int *error_code, char *error_msg,
					  char* msg_buff);

#if defined(__cplusplus)
}
#endif

#endif /* _LI_GET_PP_INFO_ */



