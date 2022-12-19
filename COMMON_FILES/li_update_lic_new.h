/* $Header:   F:/GSCBProjectDb/archives/CIS/GSCB/LegacySimulation/common/li_update_lic_new.h-arc   1.1   Dec 26 2000 20:00:14   AbhyanSC  $ */
/********************************************************************/
/* File Name   : li_update_lic_new.h                                */
/* Author      : Vageesh Patwardhan				                    */
/* Description : This file contains io structures required for		*/
/*				 li_update_lic_new_p								*/
/********************************************************************/

#ifndef _LI_UPDATE_LIC_NEW_
#define _LI_UPDATE_LIC_NEW_

typedef struct li_class_usage
{
	int txn_ser_no;
	char license_class[LIC_CLS_SIZE];
	char license_class_usage[CLASS_USAGE_SIZE];
	struct li_class_usage *next_class_usage;
} LI_CLASS_USAGE_T;

/* Structs for li_update_lic_new_p */
typedef struct li_update_lic_new_req
{
	char license_id[LIC_ID_SIZE];
	char category_of_owner;
	char kpt_number[KPT_SIZE];
	char new_category_of_owner;
	char gmpc_short_name1[GMPC_SNAME1_SIZE];
	char gmpc_short_name2[GMPC_SNAME2_SIZE];
	char gmpc_short_name3[GMPC_SNAME3_SIZE];
	ADDRESS_T address;
	char dob[DATE_SIZE];
	char gender;

	char license_type[LIC_TYPE_SIZE];
	char validity_start_date[DATE_SIZE];
	char validity_end_date[DATE_SIZE];
	char handicapped_reg_no[HANDICAPPED_REG_NO_SIZE];
	char physical_restrict_cd;
	char prb_status;
	LI_CLASS_USAGE_T *first_class_usage;
	char validity_period[LIC_VALIDITY_PERIOD_SIZE]; /* Added on 04/07/2003 */

} LI_UPDATE_LIC_NEW_REQ_T;

/* Function Prototypes */
int li_update_lic_new_p(LI_P_HEADER_T header, LI_PUT_FIN_DATA_T put_fin_data,
					  LI_UPDATE_LIC_NEW_REQ_T req,
					  unsigned char *msg_id,
					  int *error_code
						   );

#endif /* _LI_UPDATE_LIC_NEW_ */


