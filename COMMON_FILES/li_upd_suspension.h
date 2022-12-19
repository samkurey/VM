/* $Header:   F:/GSCBProjectDb/archives/CIS/GSCB/LegacySimulation/common/li_upd_suspension.h-arc   1.1   Dec 26 2000 20:00:12   AbhyanSC  $ */
/********************************************************************/
/* File Name   : li_upd_suspension.h                                */
/* Author      : Amol Thorat    				                    */
/* Description : This file contains io structures required for		*/
/*				 li_upd_suspension_p								*/
/********************************************************************/

#ifndef _LI_UPDATE_SUSPENSION_
#define _LI_UPDATE_SUSPENSION_

/* Structs for li_upd_suspension_p */
typedef struct li_upd_suspension_req
{
	char license_id[LIC_ID_SIZE];
	char category_of_owner;
	char new_category_of_owner; /* not in doc, added from mail */
	char kpt_number[KPT_SIZE];
	char license_type[LIC_TYPE_SIZE];
	char license_class[LIC_CLS_SIZE];
	char license_class_usage[CLASS_USAGE_SIZE];
	char start_date[DATE_SIZE];
	char end_date[DATE_SIZE];

} LI_UPD_SUSPENSION_REQ_T;

/* Function Prototypes */
int li_upd_suspension_p(LI_P_HEADER_T header, 
					  LI_UPD_SUSPENSION_REQ_T req,
					  unsigned char *msg_id,
					  int *error_code
						   );

#endif /* _LI_UPDATE_SUSPENSION_ */


