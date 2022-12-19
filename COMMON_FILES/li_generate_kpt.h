/********************************************************************/
/* File Name   : li_generate_kpt.h                                  */
/* Author      : Amit Sangrulkar			                        */
/* Description : This file contains io structures and function		*/
/*				 prototypes for li_generate_kpt_p and _g			*/
/********************************************************************/

#ifndef _li_generate_kpt_
#define _li_generate_kpt_

/* Structs for li_generate_kpt_p */

typedef struct li_generate_kpt_req_s
{
	char date_of_birth[DATE_SIZE];
	char state_of_birth[STATE_CODE_SIZE];
	char gender;
	char application_id[APP_ID_SIZE];
	
} LI_GENERATE_KPT_REQ_T;


/* Structs for li_generate_kpt_g */

/* Main response buffer */
typedef struct li_generate_kpt_resp_s
{
	char kptno[KPT_SIZE];
	char application_id[APP_ID_SIZE];

} LI_GENERATE_KPT_RESP_T;



/* Function prototypes */

int li_generate_kpt_p(LI_P_HEADER_T header, LI_GENERATE_KPT_REQ_T req,
					  unsigned char *msg_id, int *error_code,
					  unsigned char *pReplyMsg,
					  int *iReplyMsgLen,
					  char *sErrMessage);

int li_generate_kpt_g(LI_G_HEADER_T *header, LI_GENERATE_KPT_RESP_T *resp,
					  int *error_code, char *error_msg,
					  char *msg_buf);



#endif /* _li_generate_kpt_ */
