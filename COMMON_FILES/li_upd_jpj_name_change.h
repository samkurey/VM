/* $Header$ */
/********************************************************************/
/* File Name   : li_upd_jpj_endorsement.h                                */
/* Author      : Amol Thorat    				                    */
/* Description : This file contains io structures required for		*/
/*				 li_upd_jpj_name_change_p								*/
/********************************************************************/

#ifndef _LI_UPDATE_JPJ_NAME_CHANGE_
#define _LI_UPDATE_JPJ_NAME_CHANGE_

/* Structs for li_upd_jpj_name_change_p */
typedef struct li_upd_jpj_name_change_req
{
	char id_number[KPT_SIZE];
	char category_of_owner;
	char current_kpt_no[KPT_SIZE];
	char current_category_of_owner;
	char gmpc_short_name1[GMPC_SNAME1_SIZE];
	char gmpc_short_name2[GMPC_SNAME2_SIZE];
	char gmpc_short_name3[GMPC_SNAME3_SIZE];

	char old_gmpc_short_name1[GMPC_SNAME1_SIZE];
	char old_gmpc_short_name2[GMPC_SNAME2_SIZE];
	char old_gmpc_short_name3[GMPC_SNAME3_SIZE];

} LI_UPD_JPJ_NAME_CHANGE_REQ_T;

/* Function Prototypes */
int li_upd_jpj_name_change_p(LI_P_HEADER_T header, 
					  LI_UPD_JPJ_NAME_CHANGE_REQ_T req,
					  unsigned char *msg_id,
					  int *error_code
						   );

#endif /* _LI_UPDATE_JPJ_NAME_CHANGE_ */


