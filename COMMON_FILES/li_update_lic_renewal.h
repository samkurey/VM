/* $Header:   F:/GSCBProjectDb/archives/LegacyInterface/jpjmsg/updlicrenewal/li_update_lic_renewal.h-arc   1.3   Apr 11 2002 18:31:58   ShivamP  $ */
/********************************************************************/
/* File Name   : li_update_lic_renewal.h                            */
/* Author      : Vageesh Patwardhan				                    */
/* Description : This file contains io structures required for		*/
/*				 li_update_lic_renewal_p							*/
/********************************************************************/

#ifndef _LI_UPDATE_LIC_RENEWAL_
#define _LI_UPDATE_LIC_RENEWAL_

/* Structs for li_update_lic_renewal */
typedef struct li_old_class_usage
{
	int struct_tag; /* This is used to identify class 1, 2 and 3 for correlation	*/
					/* Receievers to ignore this value								*/
	char license_class[LIC_CLS_SIZE];
	char license_class_usage[CLASS_USAGE_SIZE];
	struct li_old_class_usage *next_class_usage;

} LI_OLD_CLASS_USAGE_T;


typedef struct li_update_lic_renewal
{
	char license_id[LIC_ID_SIZE];
	char category_of_owner;
	char kpt_number[KPT_SIZE];
	char license_type[LIC_TYPE_SIZE];
	char validity_start_date[DATE_SIZE];
	char validity_end_date[DATE_SIZE];
	char old_start_date[DATE_SIZE];
	char old_end_date[DATE_SIZE];
	char prb_status;
	char handicapped_reg_no[HANDICAPPED_REG_NO_SIZE];
	char physical_restrict_cd;
	/* New requirement added on 19/11/2001 - Amit */
	char lic_class1[LIC_CLS_SIZE];
	char lic_class2[LIC_CLS_SIZE];
	/* New requirement added on 25/03/2002 - Shiva.P */
	char license_srno[SERIAL_NO_SIZE];
	LI_OLD_CLASS_USAGE_T *first_class_usage;
	char validity_period[LIC_VALIDITY_PERIOD_SIZE]; /* Added on 04/07/2003 */
	
} LI_UPDATE_LIC_RENEWAL_REQ_T;


/* Function Prototypes */
int li_update_lic_renewal_p(LI_P_HEADER_T header, 
							LI_PUT_FIN_DATA_T put_fin_data,
						    LI_UPDATE_LIC_RENEWAL_REQ_T req,
							
						    unsigned char *msg_id,
						    int *error_code
						   );



#endif /* _LI_UPDATE_LIC_RENEWAL_ */

