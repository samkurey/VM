/*$Header:   F:/GSCBProjectDb/archives/CIS/GSCB/LegacySimulation/common/li_get_jpj_data.h-arc   1.0   Dec 13 2000 19:56:36   AbhyanSC  $*/
/********************************************************************/
/* File Name   : li_get_jpj_data.h                                  */
/* Author      : Vageesh Patwardhan				                    */
/* Description : This file contains io structures and function		*/
/*				 prototypes required for li_get_jpj_data_p and _g	*/
/********************************************************************/

#ifndef _LI_GET_JPN_DATA_
#define _LI_GET_JPN_DATA_

/* Structs for LI_GET_JPJ_DATA_P */

typedef struct li_get_jpj_data_request
{
	char license_id[LIC_ID_SIZE];
	char category_of_owner;
} LI_GET_JPJ_DATA_REQ_T;


/* Structs for LI_GET_JPJ_DATA_G */

/* Linked list for storing class and class usage info related to a licence type */
typedef struct li_class_usage
{
	int struct_tag; /* This is used to identify class 1, 2 and 3 for correlation	*/
					/* Receievers to ignore this value								*/
	char license_type[LIC_TYPE_SIZE];
	char license_class[LIC_CLS_SIZE];
	char license_class_usage[CLASS_USAGE_SIZE];
	struct li_class_usage *next_class_usage;
} LI_CLASS_USAGE_T;

/* Linked list for storing the info related to the licence type */
typedef struct li_license
{
	char license_type[LIC_TYPE_SIZE];
	char validity_start_date[DATE_SIZE];
	char validity_end_date[DATE_SIZE];
	int kejara_point;
	int kejara_point_ind;
	char last_kejara_upd_date[DATE_SIZE];	/*Assumed, not yet confirmed */
	char handicapped_reg_no[HANDICAPPED_REG_NO_SIZE];
	int suspension_gen_no;
	int suspension_gen_no_ind;
	char verified_stat;
	char physical_restrict_code;
	struct li_license *next_license;
	LI_CLASS_USAGE_T *first_class_usage;
} LI_LICENSE_T;


/* Linked list for storing test results */
typedef struct li_test_details
{
	char license_type[LIC_TYPE_SIZE];
	char license_class[LIC_CLS_SIZE];
	char part1_pass_date[DATE_SIZE];
	char part2_pass_date[DATE_SIZE];
	char part3_pass_date[DATE_SIZE];
	char update_user[UPDATE_USER_SIZE];
	struct li_test_details *next_test_details;
} LI_TEST_DETAILS_T;
 
/* Linked list for storing suspension information */
typedef struct li_license_suspension
{
	char license_type[LIC_TYPE_SIZE];
	char license_class[LIC_CLS_SIZE];
	char suspension_status_code;
	char suspension_start_date[DATE_SIZE];
	char suspension_end_date[DATE_SIZE];
	struct li_license_suspension *next_license_suspension;
} LI_LICENSE_SUSPEND_T;

/* Linked list for storing revocation details */
typedef struct li_license_revocation
{
	char license_type[LIC_TYPE_SIZE];
	char revocation_code;
	char revocation_start_date[DATE_SIZE];
	char revocation_end_date[DATE_SIZE];
	struct li_license_revocation *next_license_revocation;
} LI_LICENSE_REVOKE_T;


/* Linked list for storing endorsment information */
typedef struct li_license_endorsement
{
	char license_type[LIC_TYPE_SIZE];
	char endorsement_code;
	char endorsement_date[DATE_SIZE];
	char endorsement_remark[ENDORSEMENT_REMARK_SIZE];
	char reporter_code[REPORTER_CODE_SIZE];
	char court_no[COURT_NUMBER_SIZE];
	char case_no[CASE_NUMBER_SIZE];
	char section[ENDORSEMENT_SECTION_SIZE];
	struct li_license_endorsement *next_license_endorsement;
} LI_LICENSE_ENDORSE_T;


/* structure for storing to be suspended info */
typedef struct li_tobe_suspended_info
{
	char generation_no[JPJ_GENERATION_NUMBER_SIZE];
	int kejara_point;
	char suspension_status;
	char reporter_ref_no[JPJ_REPORTER_REFNO_SIZE];
	char start_date[DATE_SIZE];
	int duration;
	char duration_ind;
	char expiry_date[DATE_SIZE];
	char last_surrender_date[DATE_SIZE];
	char last_appeal_date[DATE_SIZE];
	char actual_surrender_date[DATE_SIZE];
	char surrender_branch_code[JPJ_BRANCH_CODE_SIZE];
	char kp_appeal_date[DATE_SIZE];
	char kp_decision_status;
	char kp_decision_date[DATE_SIZE];
	char minister_appeal_date[DATE_SIZE];
	char minister_decision_status;
	char minister_decision_date[DATE_SIZE];

} LI_TOBE_SUSPENDED_INFO_T;

/* structures for storing to be reversal transaction info */
typedef struct li_lic_type_reversal_txn_info
{
	char verified_status;
	char no_blacklist_ctr[BLACKLIST_CENTRE_SIZE];
	char o_blacklist_ctr[BLACKLIST_CENTRE_SIZE];
	char susp_ctr;
	char class_susp_ctr;
	char offence_point[OFFENCE_POINT_SIZE];
	char serial_no[SERIAL_NO_SIZE];
	char badge_no[SERIAL_NO_SIZE];
	int  generation;
	char status;
	char status_date[DATE_SIZE];
	char previous_status;
	char exemption_code;
	char first_issue_date[DATE_SIZE];
	char part1_eff_date[DATE_SIZE];
	char part1_exp_date[DATE_SIZE];
	char endorsment_ind;
	char cdl_ind;
} LI_LIC_TYPE_REVERSAL_TXN_INFO_T;

typedef struct li_reversal_txn_info
{
	char gmpc_status;
	char classD_applied_date[DATE_SIZE];
	LI_LIC_TYPE_REVERSAL_TXN_INFO_T pdl_info;
	LI_LIC_TYPE_REVERSAL_TXN_INFO_T prb_info;
	LI_LIC_TYPE_REVERSAL_TXN_INFO_T cdl_info;
	LI_LIC_TYPE_REVERSAL_TXN_INFO_T psv_info;
	LI_LIC_TYPE_REVERSAL_TXN_INFO_T gdl_info;
} LI_REVERSAL_TXN_INFO_T;



/* Acutal response structure for li_get_jpj_data_g function */
typedef struct li_jpj_data
{
	char gmpc_short_name1[GMPC_SNAME1_SIZE];
	char gmpc_short_name2[GMPC_SNAME2_SIZE];
	char gmpc_short_name3[GMPC_SNAME3_SIZE];
	char address1[ADDRESS_SIZE];
	char address2[ADDRESS_SIZE];
	char address3[ADDRESS_SIZE];
	char post_code[POST_CODE_SIZE];
	char city_code[CITY_CODE_SIZE];
	char state_code[STATE_CODE_SIZE];
	char birth_date[DATE_SIZE];
	char gender;
	char prb_status;

	LI_LICENSE_T *license;
	LI_LICENSE_SUSPEND_T *suspension;
	LI_LICENSE_REVOKE_T *revocation;
	LI_LICENSE_ENDORSE_T *endorsement;
	LI_TEST_DETAILS_T *test;
	LI_TOBE_SUSPENDED_INFO_T *tobe_suspended;
	LI_REVERSAL_TXN_INFO_T *jpj_reversal_txn_info; 
} LI_GET_JPJ_DATA_RESP_T;


/* Function Prototypes */
int li_get_jpj_data_p(LI_P_HEADER_T header, 
					  LI_GET_JPJ_DATA_REQ_T req,
					  unsigned char *msg_id,
					  int *error_code
						   );
int li_get_jpj_data_g(LI_G_HEADER_T *header,
					  LI_GET_JPJ_DATA_RESP_T *resp,
					  int *error_code, char *error_msg);

/* Prototypes for functions (for internal use only) */
int check_lic_pointer(int lic_type, int *error_code);
int populate_test_results(char *field, int *error_code);
int populate_suspension_data(char *field, int *error_code);
int populate_revocation_data(char *field, int *error_code);
int populate_endorsement_data(char *field, int *error_code);
int populate_class(int licence_type, int field_id, char *field, int *error_code);
int populate_class_usage(int licence_type, int field_id, char *field, int *error_code);
int tobe_suspended_info(int field_id, char *field, int *error_code);
int jpj_rev_pdl_txn_info(int field_id, char *field, int *error_code);
int jpj_rev_cdl_txn_info(int field_id, char *field, int *error_code);
int jpj_rev_gdl_txn_info(int field_id, char *field, int *error_code);
int jpj_rev_prb_txn_info(int field_id, char *field, int *error_code);
int jpj_rev_psv_txn_info(int field_id, char *field, int *error_code);
int jpj_rev_common_info(int field_id, char *field, int *error_code);


#endif /*_LI_GET_JPN_DATA_*/


