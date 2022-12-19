/*$Header:   F:/GSCBProjectDb/archives/source/LegacyInterface/li_jpn_update.h-arc   1.5   Oct 13 2000 18:49:06   ThoratAD  $*/
/********************************************************************/
/* File Name   : li_jpn_update.h									*/
/* Author      : Vageesh Patwardhan			                        */
/* Description : This file contains io structures and function		*/
/*				 prototypes for li_jpn_update_p						*/
/********************************************************************/

#ifndef _LI_JPN_UPDATE_
#define _LI_JPN_UPDATE_

typedef struct li_jpn_update_misc
{
	char applicant_kpt[KPT_SIZE];
	char gmpc_remarks1[REMARK_SIZE];
	char gmpc_remarks2[REMARK_SIZE];
	char update_prints_ind;
	char juvenile_flag;
	char quality_status;
	char ic_colour;
	char finger_acquision_source;
	int  card_version;
	// New requirement
	char original_name_indicator;
	char art_color_code[ARTICLE_COLOR_CODE_SIZE];
	char retire_date[DATE_SIZE];
	char pol_army_join_date[DATE_SIZE];
	char citizen_nation_code[COUNTRY_CODE_SIZE];	/* New requirement, added on 05122001 */

} LI_JPN_UPDATE_MISC_T;
 

typedef struct li_afis_1n_misc
{
	char kpp_no[KPP_SIZE];
	char police_no[ID_SIZE];
	char army_no[ID_SIZE];
	char dob[DATE_SIZE];
	char unknown_birth_ind;
	char first_time_ind;
	char birth_dist_code[DIST_CODE_SIZE];
	char gender;
	char religion;
	char race[RACE_CODE_SIZE];
	char hk_ind;
	char kt_ind[KT_CODE_SIZE];
	char resi_status;
	int lost_card_count;
	int lost_card_count_ind;
} LI_AFIS_1N_MISC_T;


typedef struct li_jpn_update_req_t
{
	int trans_type; 
	/* Valid values are : TXN_TYPE_JPN_UPDATE - Update Demographics		*/
	/*					  TXN_TYPE_AFIS_1N	  - 1:N check				*/
	LI_JPN_UPDATE_MISC_T misc;
	NAME_T appnt_names;
	ADDRESS_T *new_address;
	ADDRESS_T *old_address;
	PORTRAIT_T hi_res_portrait;
	PORTRAIT_T low_res_portrait;
	FINGER_T left_finger_prints;
	FINGER_T right_finger_prints;
	LI_AFIS_1N_MISC_T afis_1n_misc;
} LI_JPN_UPDATE_REQ_T;

/* Utility functions (for internal use only) */
long judge_buffer_size(LI_JPN_UPDATE_REQ_T *req);
int copy_names(LI_JPN_UPDATE_REQ_T *req, char **temp_ptr, int *error_code);
int copy_addresses(LI_JPN_UPDATE_REQ_T *req, char **temp_ptr, int *error_code);
int copy_misc(LI_JPN_UPDATE_REQ_T *req, char **in_temp_ptr, int *error_code);
int copy_images(LI_JPN_UPDATE_REQ_T *req, char **in_temp_ptr, int *error_code);

int li_jpn_phonein_update_p(LI_P_HEADER_T header,	LI_PUT_FIN_DATA_T put_fin_data,
					LI_JPN_UPDATE_REQ_T req,
				    unsigned char *msg_id,
					int *error_code,
					unsigned char *pReplyMsg,
					int *iReplyMsgLen,
					char *sErrMessage);


#endif

