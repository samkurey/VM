/* $Header$ */
/********************************************************************/
/* File Name   : li_upd_gmpc_surrender.h                            */
/* Author      : Amit sangrulkar    				                */
/* Description : This file contains io structures required for		*/
/*				 li_upd_gmpc_surrender_p							*/
/********************************************************************/

#ifndef _LI_JPJ_GMPC_SURRENDER_
#define _LI_JPJ_GMPC_SURRENDER_

/* Structs for li_upd_gmpc_surrender_p */

typedef struct li_upd_gmpc_surrender_req
{
	char kpt_number[KPT_SIZE];
	char police_army_no[ID_SIZE];
	char current_cat_of_owner;
	char cat_of_police_army;
	char surrender_reason_code;
	
} LI_JPJ_GMPC_SURRENDER_REQ_T;

/* Function Prototypes */
int li_jpj_gmpc_surrender_p(LI_P_HEADER_T header, 
					  LI_JPJ_GMPC_SURRENDER_REQ_T req,
					  unsigned char *msg_id,
					  int *error_code,
					  unsigned char *pReplyMsg,
					  int *iReplyMsgLen,
					  char *sErrMessage
					  );

#endif /* _LI_JPJ_GMPC_SURRENDER_ */


