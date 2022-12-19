/*$Header:   F:/GSCBProjectDb/archives/LegacyInterface/jpnmsg/jpn_missed_opex_upd/li_jpn_missed_opex_upd.h-arc   1.7   Jul 17 2002 16:59:42   ShivamP  $*/
/********************************************************************/
/* File Name   : li_jpn_missed_opex_upd.h							*/
/* Author      : Amit Sangrulkar			                        */
/* Description : This file contains io structures and function		*/
/*				 prototypes for li_jpn_missed_opex_upd_p			*/
/********************************************************************/

#ifndef _LI_JPN_MISSED_OPEX_UPD_
#define _LI_JPN_MISSED_OPEX_UPD_

typedef struct li_jpn_missed_opex_upd_misc_s
{
	char kpt_no[KPT_SIZE];
	char kpp_no[KPP_SIZE];
	char police_army_no[ID_SIZE];
	//char army_no[ID_SIZE];
	char dob[DATE_SIZE];
	char unknown_birth_ind;
	char birth_place_code[BIRTH_PLACE_CODE_SIZE];
	char gender;
	char religion;
	char race[RACE_CODE_SIZE];
	char hk_ind;
	char kt_ind[KT_CODE_SIZE];
	char resi_status;
	char art_color_code[ARTICLE_COLOR_CODE_SIZE];
	int  gmpc_version;
	char original_name_ind;
	char gmpc_remarks1[REMARK_SIZE];
	char gmpc_remarks2[REMARK_SIZE];
	char retire_date[DATE_SIZE];
	char pol_army_join_date[DATE_SIZE];
	char ic_color_code;
	char pol_army_id;	
	char green_card_exp_date[DATE_SIZE];
	char citizen_nation_code[COUNTRY_CODE_SIZE];	/* New requirement, added on 05122001 */
	char birth_state_code[STATE_CODE_SIZE]; /* new requirement added by shiva.p */
	char birth_country_code[COUNTRY_CODE_SIZE]; /* new requirement added by shiva.p */
	char appl_no[LEGAPPLID_SIZE]; // APPLICATION.LEGAPPLID size
	char imm_country_code[COUNTRY_CODE_SIZE]; //APPNT_JPN_INFO.citizennationcode
	char citizenshipstat; // includednon 14/09/05 for IJPN
	char imm_country_code_3digit[COUNTRY_CODE_SIZE]; // added on 28/06/06 , //IMM_COUNTRY_CODE.citizenship	

	//char gmpc_short_name1[GMPC_SNAME1_SIZE];
	//char gmpc_short_name2[GMPC_SNAME2_SIZE];
	//char gmpc_short_name3[GMPC_SNAME3_SIZE];
	//char current_long_name[LONG_NAME_SIZE];
	//char original_name[ORIG_NAME_SIZE];
	char rj_ind[RJ_SIZE]; // Added this column for CR 211 Release 3.18 for My Tentera
	char kpkno[ID_SIZE]; // Added this field on 07/05/2012 for CR 253 for Release 3.24

} LI_MISSED_OPEX_MISC_T;

typedef struct li_afis_misc_s
{ 
	char update_prints_ind;
	char juvenile_flag;
	char quality_status;
	char finger_acquision_source;
	
} LI_AFIS_MISC_T;

typedef struct li_passport_info_s
{
	char imm_refer_date[DATE_SIZE];
	char passport_no[PASSPORT_NO_SIZE];
	char passort_expiry_date[DATE_SIZE]; // Is this JIM Date Expired
	char passort_issue_date[DATE_SIZE];
	char malaysia_arrival_date[DATE_SIZE];
    char permit_issue_date[DATE_SIZE];
	char imm_refer_no[IMM_REFER_NO_SIZE];
	char passort_issue_country[COUNTRY_CODE_SIZE];
	char entry_permit_no[PERMIT_NO_SIZE+1];
//Commented for GSCB Upgrade- 10th March '05
//Added by Amarjith on 7th Sept. '04. JRS 147
	int  nEntryPermitType;
	int  nDocTypeCode;
	char szOriginCountryCode[COUNTRY_CODE_SIZE];
//JRS 147
//10th March '05
} LI_PASSPORT_INFO_T;

typedef struct li_jpn_missed_opex_upd_req_s
{
	NAME_T appnt_name;
	ADDRESS_T new_address;
	LI_MISSED_OPEX_MISC_T misc;
	LI_AFIS_MISC_T afis_misc;
	LI_PASSPORT_INFO_T pp_info;
	//FINGER_T left_finger_prints; commented as per IJPN requirement
	//FINGER_T right_finger_prints; commented as per IJPN requirement
	//PORTRAIT_T hi_res_portrait; commented as per IJPN requirement
	PORTRAIT_T low_res_portrait;	
	MINUTIAE_T lfinger;
	MINUTIAE_T rfinger;

} LI_JPN_MISSED_OPEX_UPD_REQ_T;

/* Utility functions (for internal use only) */
long get_buffer_size(LI_JPN_MISSED_OPEX_UPD_REQ_T *req);
int copy_images(LI_JPN_MISSED_OPEX_UPD_REQ_T *req, char **in_temp_ptr, int *error_code);

int li_jpn_missed_opex_upd_p(LI_P_HEADER_T header,	LI_PUT_FIN_DATA_T put_fin_data,
					LI_JPN_MISSED_OPEX_UPD_REQ_T req,
				    unsigned char *msg_id, int *error_code,
					unsigned char *pReplyMsg,
					int *iReplyMsgLen,
					char *sErrMessage);


#endif

