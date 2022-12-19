/********************************************************************/
/* File Name   : li_get_appnt_kpt.h                                 */
/* Author      : Vageesh Patwardhan				                    */
/* Description : This file contains io structures requried for		*/
/*				 li_get_applicant_kpt_p and _g						*/
/********************************************************************/



/* Structs for LI_GET_APPLICANT_KPT_P */

typedef struct get_applicant_kpt_p
{
	char applicant_id[ID_SIZE];       
	int applicant_id_type;
	char applicant_gender;
	char  district_code[DIST_CODE_SIZE];
}LI_GET_APPLICANT_KPT_REQ_T;

/* Structs for LI_GET_APPLICANT_KPT_G */
//#define __LINK_LIST_REPLY__
#ifdef __LINK_LIST_REPLY__

typedef struct kpt_matches
{
	char person_kpt[KPT_SIZE];
	char person_dob[DOB_SIZE];
	char person_org_name[ORIG_NAME_SIZE];
	struct kpt_matches *next_match;
} KPT_MATCHES_T;

typedef struct get_applicant_kpt_g
{
	int rec_count;
	KPT_MATCHES_T *kpt_matches; /* Pointer to the first match*/
}LI_GET_APPLICANT_KPT_RESP_T;

#else // __LINK_LIST_REPLY__

typedef struct kpt_matches
{
	char person_kpt[KPT_SIZE];
	char person_dob[DOB_SIZE];
	char person_org_name[ORIG_NAME_SIZE];
	//struct kpt_matches *next_match;
} KPT_MATCHES_T;

typedef struct get_applicant_kpt_g
{
	int rec_count;
	//KPT_MATCHES_T *kpt_matches[];
	//KPT_MATCHES_T *kpt_matches; /* Pointer to the first match*/
}LI_GET_APPLICANT_KPT_RESP_T;

#endif // __LINK_LIST_REPLY__



int li_get_applicant_kpt_p(LI_P_HEADER_T header, 
						   LI_GET_APPLICANT_KPT_REQ_T req,
						   unsigned char *msg_id,/* Pointer to MSG_ID_SIZE bytes*/
						   int *error_code
							);

#ifdef __LINK_LIST_REPLY__
int li_get_applicant_kpt_g(LI_G_HEADER_T *header, 
						   LI_GET_APPLICANT_KPT_RESP_T *resp,
						   int *error_code);
#else
int li_get_applicant_kpt_g(LI_G_HEADER_T *header, 
						   LI_GET_APPLICANT_KPT_RESP_T **resp,
						   int *error_code, char *error_msg);
#endif // __LINK_LIST_REPLY__
