/* $Header$ */
/********************************************************************/
/* File Name   : li_upd_new_owner_cat.h                           */
/* Author      : Amit Sangrulkar    				                */
/* Description : This file contains io structures required for		*/
/*				 li_upd_jpj_name_change_p							*/
/********************************************************************/

#ifndef _LI_UPD_NEW_OWNER_CAT_
#define _LI_UPD_NEW_OWNER_CAT_

/* Structs for li_upd_new_owner_cat_p */
typedef struct li_upd_new_owner_cat_req
{
	char id_number[KPT_SIZE];
	char kpt_no[KPT_SIZE];
	char current_cat_of_owner;
	char new_cat_of_owner;
	char reason;
	
} LI_UPD_NEW_OWNER_CAT_REQ_T;

/* Function Prototypes */
int li_upd_new_owner_cat_p(LI_P_HEADER_T header, 
					  LI_UPD_NEW_OWNER_CAT_REQ_T req,
					  unsigned char *msg_id,
					  int *error_code,
					  unsigned char *pReplyMsg,
					  int *iReplyMsgLen,
					  char *sErrMessage
					  );

#endif /* _LI_UPD_NEW_OWNER_CAT_ */


