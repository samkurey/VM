/* $Header:   F:/GSCBProjectDb/archives/source/LegacyInterface/li_upd_id_to_kpt.h-arc   1.2   Jun 17 2000 18:37:20   ThoratAD  $ */
/********************************************************************/
/* File Name   : li_upd_id_to_kpt.h                                 */
/* Author      : Vageesh Patwardhan				                    */
/* Description : This file contains io structures requried for		*/
/*				 li_upd_id_to_kpt_p									*/
/********************************************************************/

#ifndef _LI_UPD_ID_TO_KPT_
#define _LI_UPD_ID_TO_KPT_

/* Structs for li_upd_id_to_kpt_p */

typedef struct li_upd_id_to_kpt_req
{
	char license_id[LIC_ID_SIZE];
	char new_category_of_owner;
	char category_of_owner;
	char kpt_number[KPT_SIZE];
	char gmpc_short_name1[GMPC_SNAME1_SIZE];
	char gmpc_short_name2[GMPC_SNAME2_SIZE];
	char gmpc_short_name3[GMPC_SNAME3_SIZE];
	ADDRESS_T address;
	char dob[DATE_SIZE];
	char gender;
	char old_gmpc_short_name1[GMPC_SNAME1_SIZE];
	char old_gmpc_short_name2[GMPC_SNAME2_SIZE];
	char old_gmpc_short_name3[GMPC_SNAME3_SIZE];
	ADDRESS_T old_address;
	char old_dob[DATE_SIZE];
	char old_gender;
	 /* police/military id is Old KPTNO */
	char police_military_id[ID_SIZE];
	 /* Added on 01/10/2002 by shiva.p */
	char old_ownercat;

} LI_UPD_ID_TO_KPT_REQ_T;

/* Function Prototypes */
int li_upd_id_to_kpt_p(LI_P_HEADER_T header, LI_UPD_ID_TO_KPT_REQ_T req,unsigned char *msg_id,int *error_code);

#endif /* _LI_UPD_ID_TO_KPT_ */

