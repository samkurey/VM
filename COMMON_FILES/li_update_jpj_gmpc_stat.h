/* $Header:   F:/GSCBProjectDb/archives/source/LegacyInterface/li_update_jpj_gmpc_stat.h-arc   1.2   Oct 23 2000 12:21:42   PatilBB  $ */
/********************************************************************/
/* File Name   : li_update_jpj_gmpc_stat.h                          */
/* Author      : Vageesh Patwardhan				                    */
/* Description : This file contains io structures required for		*/
/*				 li_update_jpj_gmpc_stat_p							*/
/********************************************************************/

#ifndef _LI_UPDATE_JPJ_GMPC_STAT_
#define _LI_UPDATE_JPJ_GMPC_STAT_

/* Structs for li_update_jpj_gmpc_stat_p */

typedef struct li_update_jpj_gmpc_stat_req
{
	char license_id[LIC_ID_SIZE];
	char category_of_owner;
	char kpt_number[KPT_SIZE];
	char card_sr_no[CARDSRNO_SIZE];
	char issuance_date[DATE_SIZE];
	char issuance_staff_id[USER_ID_SIZE];
	char issuing_gsc_id[LEGACY_BRANCH_CODE_SIZE];
} LI_UPDATE_JPJ_GMPC_STAT_REQ_T;

/* Function Prototypes */
int li_update_jpj_gmpc_stat_p(LI_P_HEADER_T header, 
					  LI_UPDATE_JPJ_GMPC_STAT_REQ_T req,
					  unsigned char *msg_id,
					  int *error_code
						   );


#endif /* _LI_UPDATE_JPJ_GMPC_STAT_ */

