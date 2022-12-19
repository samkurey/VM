/* $Header:   F:/GSCBProjectDb/archives/source/LegacyInterface/li_update_lic_new.h-arc   1.4   Jun 11 2000 19:18:04   ThoratAD  $ */
/********************************************************************/
/* File Name   : li_update_lic_new.h                                */
/* Author      : Vageesh Patwardhan				                    */
/* Description : This file contains io structures required for		*/
/*				 li_update_lic_new_p								*/
/********************************************************************/

#ifndef _LI_REV_UPDATE_LIC_NEW_
#define _LI_REV_UPDATE_LIC_NEW_

typedef struct li_class
{
	char license_class[LIC_CLS_SIZE];
	char license_class_usage[CLASS_USAGE_SIZE];
	struct li_class *next_class;

} LI_LIC_CLASS_T;

/* Structs for li_rev_update_lic_new_p */
typedef struct li_rev_update_lic_new_req
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
	char prb_status; /* for PRB & CDL only */
	char rev_desc[JPJ_REVERSAL_DESC_SIZE];
	/* New requirement - added on 09/07/2001 */
	char verified_status;
	char no_blacklist_ctr[BLACKLIST_CENTRE_SIZE];
	char o_blacklist_ctr[BLACKLIST_CENTRE_SIZE];
	char susp_ctr;
	char class_susp_ctr;
	char serial_no[SERIAL_NO_SIZE];
	char exemption_code;
	char first_issue_date[DATE_SIZE];
	char endorse_ind;
	char badge_no[SERIAL_NO_SIZE];
	char offence_point[OFFENCE_POINT_SIZE];
	int generation;
	char prb_stat_date[DATE_SIZE];
	char prb_prev_stat;
	char pdl_part1_eff_date[DATE_SIZE];
	char pdl_part1_exp_date[DATE_SIZE];
	char cdl_ind;
	char old_effective_date[DATE_SIZE];
	char expiry_date[DATE_SIZE];
	char prb_reversal_stat;
	char rev_physical_restrict_cd;
	char rev_handicapped_reg_no[HANDICAPPED_REG_NO_SIZE];
	LI_LIC_CLASS_T *first_class;
	LI_LIC_CLASS_T *prev_class;

} LI_REV_UPDATE_LIC_NEW_REQ_T;

/* Function Prototypes */
int li_rev_update_lic_new_p(LI_P_HEADER_T header, LI_REFER_TIMESTAMP_T refer_timestamp,
					  LI_PUT_FIN_DATA_T put_fin_data, LI_REV_UPDATE_LIC_NEW_REQ_T req,
					  unsigned char *msg_id,
					  int *error_code,
					  unsigned char *pReplyMsg,
					  int *iReplyMsgLen,
					  char *sErrMessage
					  );

#endif /* _LI_REV_UPDATE_LIC_NEW_ */



