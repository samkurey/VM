/********************************************************************/
/* File Name   : li_get_jpn_data.h                                  */
/* Author      : Vageesh Patwardhan			                        */
/* Description : This file contains io structures and function		*/
/*				 prototypes for li_get_jpn_data_p and _g			*/
/********************************************************************/

#ifndef _LI_GET_JPN_DATA_
#define _LI_GET_JPN_DATA_

/* Structs for li_get_jpn_data_p */

typedef struct li_jpn_legacy_data_request
{
	char applicant_id[ID_SIZE];
	int applicant_id_type;
	char sponsor_id[ID_SIZE];       
	int sponsor_id_type;
	char father_id[ID_SIZE];
	int father_id_type;
	char mother_id[ID_SIZE];
	int mother_id_type;
	/* New requirement added on 27/11/2001 - Amit S. */
	char third_party_kpt[KPT_SIZE];

} LI_GET_JPN_DATA_REQ_T;




/* Structs for li_get_jpn_data_g */


typedef struct sponsor
{
	char kpt_number[KPT_SIZE];
	char current_long_name[LONG_NAME_SIZE];
	char person_status;
	char dob[DATE_SIZE];
	char ic_colour;
} SPONSOR_T;

/* new structure for 12 YO - 20 1005*/
typedef struct new_parent
{
	char id_number[ID_SIZE];
	int id_type;
	//char id_type[ID_TYPE_SIZE];
	char doc_number[DOC_NO_SIZE];
	char doc_type[DOC_TYPE_SIZE];
	char name[LONG_NAME_SIZE];
	char hk_ind;
	char race[RACE_CODE_SIZE];
	char residential_status;
	char religion;
} NEW_PARENT_T;

typedef struct parent
{
	char current_long_name[LONG_NAME_SIZE];
	char residential_status;
	char kpt_number[KPT_SIZE];
	char race[RACE_CODE_SIZE];
	char religion;
	char hk_ind;
} PARENT_T;

typedef struct li_get_jpn_data_misc
{
	char afis_ind;
	char article_color_code[ARTICLE_COLOR_CODE_SIZE];
	//char article_color_code;
	char ic_colour;
	long card_version_no;
	int  card_version_no_ind;
	long gmpc_version_no;
	char citizenship_status;
	char date_last_addr_changed[DATE_SIZE];
	char date_last_kpt_changed[DATE_SIZE];
	char dob[DATE_SIZE];
	char birth_district_code[DIST_CODE_SIZE];
	char gender;
	char hk_ind;
	char kpp_number[KPP_SIZE];
	char kpt_number[KPT_SIZE];
	char kpt_appl_date[DATE_SIZE];
	char kpt_appl_status_code;
	char kpt_collection_date[DATE_SIZE];
	char kpt_collection_place_code[KPT_COLLECTION_PLACE_SIZE];
	char kt_indicator[KT_CODE_SIZE];
	char military_id[ID_SIZE];
	int  no_of_times_kpt_lost;
	int  no_of_times_kpt_lost_ind;
	char person_status;
	char police_id[ID_SIZE];
	char pr_approval_date[DATE_SIZE];
	char race[RACE_CODE_SIZE];
	char religion;
	char remarks1[REMARK_SIZE];
	char remarks2[REMARK_SIZE];
	char resi_status;
	char unknown_birth_ind;
	char original_name_ind;				/* New requirement, added on 22062001 */
	char surrender_date[DATE_SIZE];		/* New requirement, added on 22062001 */
	char pol_army_join_date[DATE_SIZE];	/* New requirement, added on 22062001 */
	char imm_approval_date[DATE_SIZE];	/* New requirement, added on 22062001 */
	char retirement_date[DATE_SIZE];	/* New requirement, added on 22062001 */
	char duplicate_ind;					/* New requirement, added on 22062001 */
	char citizen_nation_code[COUNTRY_CODE_SIZE];	/* New requirement, added on 12092001 */
	char appl_approval_date[DATE_SIZE];				/* New requirement, added on 21092001 */
	char green_card_exp_date[DATE_SIZE];			/* New requirement, added on 21092001 */
	/* new requirement added on 25/09/2002 */
	char imm_ref_no[IMM_REFER_NO_SIZE];
	char imm_expiry_date[DATE_SIZE];
	char passport_no[PASSPORT_NO_SIZE];
	char passport_issue_date[DATE_SIZE];
	char passport_issue_country[COUNTRY_CODE_SIZE];
	char old_kpt_no[KPT_SIZE];
	char destroy_reason_code; /* Added on 08/04/2003 by shiva.p */

//Added by Amarjith on 2nd Sept. '04. JRS 147
	char szPermitNumber[PERMIT_NO_SIZE + 1];
	char szPermitIssueDate[DATE_SIZE];
	int  nPermitType; 
	int  nPRDocType;
//JRS 147.
} LI_GET_JPN_DATA_MISC_T;

typedef struct new_parent_sponsor
{
	NEW_PARENT_T father;
	NEW_PARENT_T mother;
	SPONSOR_T sponsor;
} NEW_PARENT_SPONSOR_T;

typedef struct parent_sponsor
{
	PARENT_T father;
	PARENT_T mother;
	SPONSOR_T sponsor;
} PARENT_SPONSOR_T;

typedef struct demographic
{
	NAME_T name;
	ADDRESS_T addr;
	LI_GET_JPN_DATA_MISC_T misc;
} DEMOGRAPHIC_T;

/* New requirement, added on 28112001 */	
typedef struct third_party_info_s
{
	char kpt_number[KPT_SIZE];	
	char curr_long_name[LONG_NAME_SIZE];
	char person_status;
	char ic_color_code;
				
}THIRD_PARTY_INFO_T;

typedef struct li_get_jpn_data_image
{
	PORTRAIT_T portrait;
	FINGER_T left_finger_prints;
//	int left_quality_score_ind;		/* Commented on 22062001 as fields excluded from response */
//	int right_quality_score_ind;
	FINGER_T right_finger_prints;
	char quality_status;	/* New requirement, added on 22062001 */

} LI_GET_JPN_DATA_IMAGE_T;


typedef struct jpn_data
{
	DEMOGRAPHIC_T demo;
	NEW_PARENT_SPONSOR_T parent_sponsor;
	THIRD_PARTY_INFO_T third_party;	/* New requirement, added on 28112001 */	
	LI_GET_JPN_DATA_IMAGE_T image;
	char birth_cert_no[DOC_NO_SIZE];

} LI_GET_JPN_DATA_RESP_T;





/* Function prototypes */

int li_get_jpn_data_p(LI_P_HEADER_T header, LI_GET_JPN_DATA_REQ_T req,
					  unsigned char *msg_id, int *error_code);

int li_get_jpn_data_g(LI_G_HEADER_T *header, LI_GET_JPN_DATA_RESP_T *resp,
					  int *error_code, char *error_msg);

int process_img(int field_id, char *field, long len, int img_ind, LI_GET_JPN_DATA_IMAGE_T *image);


#endif /* _LI_GET_JPN_DATA_ */
