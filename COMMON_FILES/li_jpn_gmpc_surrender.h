/* $Header$ */
/********************************************************************/
/* File Name   : li_jpn_gmpc_surrender.h                            */
/* Author      : Amit sangrulkar    				                */
/* Description : This file contains io structures required for		*/
/*				 li_jpn_gmpc_surrender_p							*/
/********************************************************************/

#ifndef _LI_JPN_GMPC_SURRENDER_
#define _LI_JPN_GMPC_SURRENDER_

/* Structs for li_jpn_gmpc_surrender_p */

typedef struct li_jpn_gmpc_surrender_req
{
	char kpt_number[KPT_SIZE];
	int gmpc_version;
	char surrender_date[DATE_SIZE];
	char surrender_code;
	char pol_army_join_date[DATE_SIZE];
	char pol_army_code;
	char police_army_no[ID_SIZE];
	char passport_no[PASSPORT_NO_SIZE];
	char country_migrate_date[DATE_SIZE];
	char kp15_issue_date[DATE_SIZE];
	char new_migration_country[COUNTRY_CODE_SIZE];
		
} LI_JPN_GMPC_SURRENDER_REQ_T;

/* Function Prototypes */
int li_jpn_gmpc_surrender_p(LI_P_HEADER_T header, 
					  LI_JPN_GMPC_SURRENDER_REQ_T req,
					  unsigned char *msg_id,
					  int *error_code,
					  unsigned char *pReplyMsg,
					  int *iReplyMsgLen,
					  char *sErrMessage);

#endif /* _LI_JPN_GMPC_SURRENDER_ */


