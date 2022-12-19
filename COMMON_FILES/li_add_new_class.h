/* $Header:   F:/GSCBProjectDb/archives/CIS/GSCB/LegacySimulation/common/li_add_new_class.h-arc   1.1   Dec 26 2000 20:00:12   AbhyanSC  $ */
/********************************************************************/
/* File Name   : li_add_new_class.h									*/
/* Author      : Vageesh Patwardhan				                    */
/* Description : This file contains io structures requried for		*/
/*				 li_add_new_class_p									*/
/********************************************************************/

#ifndef _LI_ADD_NEW_CLASS_
#define _LI_ADD_NEW_CLASS_

typedef struct li_new_class
{
	int class_index;
	char license_class[LIC_CLS_SIZE];
	char license_class_usage[CLASS_USAGE_SIZE];
	struct li_new_class *next_class;

} LI_NEW_CLASS_T;


typedef struct li_add_new_class_req
{
	char license_id[LIC_ID_SIZE];
	char category_of_owner;
	char kpt_number[KPT_SIZE];
	char license_type[LIC_TYPE_SIZE];
	char handicapped_reg_no[HANDICAPPED_REG_NO_SIZE];
	char physical_restrict_cd;
	
	LI_NEW_CLASS_T *new_license_class;
	LI_NEW_CLASS_T *existing_license_class;

} LI_ADD_NEW_CLASS_REQ_T;


/* Function Prototypes */
int li_add_new_class_p(LI_P_HEADER_T header, LI_PUT_FIN_DATA_T put_fin_data,
					  LI_ADD_NEW_CLASS_REQ_T req,
					  unsigned char *msg_id,
					  int *error_code
						   );

#endif /* _LI_ADD_NEW_CLASS_ */

