/*$Header:   F:/GSCBProjectDb/archives/LegacyInterface/jpnmsg/jpn_missed_opex_upd/li_jpn_missed_opex_upd.h-arc   1.7   Jul 17 2002 16:59:42   ShivamP  $*/
/********************************************************************/
/* File Name   : li_nrs_update.h							        */
/* Author      : Srinivasa Reddy			                        */
/* Description : This file contains io structures and function		*/
/*				 prototypes for li_nrs_update_p		            	*/
/********************************************************************/

#ifndef _LI_NRS_UPDATE_
#define _LI_NRS_UPDATE_

typedef struct li_nrs_missed_opex_upd_misc_s
{
//	char kpt_no[KPT_SIZE];

	char idno[ID_SIZE];         // new
	char idtype[ID_TYPE_SIZE];  // new
	char txncode[LEGTXNCODE_SIZE]; // new
	char kpp_no[KPP_SIZE]; 
	char current_long_name[LONG_NAME_SIZE];   // new
	char gmpc_short_name1[GMPC_SNAME1_SIZE];  // new
	char gmpc_short_name2[GMPC_SNAME2_SIZE];  // new
	char gmpc_short_name3[GMPC_SNAME3_SIZE];  // new
	char dob[DATE_SIZE];
	char unknown_birth_ind;
	char birth_place_code[BIRTH_PLACE_CODE_SIZE];
	char gender;
	char religion;
	char race[RACE_CODE_SIZE];
	char hk_ind;
	char gmpc_remarks1[REMARK_SIZE];
	char gmpc_remarks2[REMARK_SIZE];
	char kt_ind[KT_CODE_SIZE];
	char resi_status;
	char art_color_code[ARTICLE_COLOR_CODE_SIZE];
	char pol_army_id;	
	char police_army_no[ID_SIZE];
	char retire_date[DATE_SIZE];
	char citizen_nation_code[COUNTRY_CODE_SIZE];	/* New requirement, added on 05122001 */
	char birth_country_code[COUNTRY_CODE_SIZE]; /* new requirement added by shiva.p */
	char appl_no[LEGAPPLID_SIZE]; // APPLICATION.LEGAPPLID size

	char quality_status;
	char finger_acquision_source;

	char father_idtype[ID_TYPE_SIZE];        // new
	char father_idno[ID_SIZE];               // new
	char mother_idtype[ID_TYPE_SIZE];        // new
	char mother_idno[ID_SIZE];               // new
	char sponsor_idtype[ID_TYPE_SIZE];       // new
	char sponsor_idno[ID_SIZE];              // new
	char sponsor_name[CURRLONGNAME_SIZE];    // new
	char sponsor_relcode[RELATIONCODE_SIZE]; // new

	char apply_place_cd[9];
	char reg_date[DATE_SIZE];
	char telephone_no[CONTACTNO_SIZE];   // added on 18/04/06 for IJPN

	// added the following columns on 21/09/06 as per the new requirement
	char kptno[KPT_SIZE];
	char status_date[DATE_SIZE];
	char operator_id[USER_ID_SIZE];
	int  gmpc_version;
	char jpn_remarks1[REMARK_SIZE];
	char jpn_remarks2[REMARK_SIZE];
	char probl_reason_code[REASON_CODE_SIZE];
	char indicator2;
	int  trans_type;  //Added by Salmi, Date 18th June 2020, CRAPPL-  SKP002/CR/2020
	char email[101];   // added by samsuri on 20 oct 2022

//	int  gmpc_version;
//	char original_name_ind;	
//	char pol_army_join_date[DATE_SIZE];
//	char ic_color_code;	
//	char green_card_exp_date[DATE_SIZE];
//	char birth_state_code[STATE_CODE_SIZE]; /* new requirement added by shiva.p */		
//	char imm_country_code[COUNTRY_CODE_SIZE]; //APPNT_JPN_INFO.citizennationcode
//	char citizenshipstat; // includednon 14/09/05 for IJPN	
//  char gmpc_short_name3[GMPC_SNAME3_SIZE];	
//  char original_name[ORIG_NAME_SIZE];

} LI_NRS_MISSED_OPEX_MISC_T;

//typedef struct li_afis_misc_s
//{ 
//	char update_prints_ind;
//	char juvenile_flag;
//	char quality_status;
//	char finger_acquision_source;
//	
//} LI_AFIS_MISC_T;

typedef struct li_nrs_passport_info_s
{
	char imm_refer_no[IMM_REFER_NO_SIZE];
	char imm_refer_date[DATE_SIZE];
	char passport_no[PASSPORT_NO_SIZE];
	char passort_issue_date[DATE_SIZE];
	char passort_issue_country[COUNTRY_CODE_SIZE];		
	char malaysia_arrival_date[DATE_SIZE];
	char passort_expiry_date[DATE_SIZE]; // Is this JIM Date Expired
	char entry_permit_no[ENTRY_PERMIT_NO_SIZE];
	int  nDocTypeCode;

//  char permit_issue_date[DATE_SIZE];		
//	int  nEntryPermitType;	
//	char szOriginCountryCode[COUNTRY_CODE_SIZE];

} LI_NRS_PASSPORT_INFO_T;

typedef struct li_nrs_update_req_s
{
//	NAME_T appnt_name;
//	LI_AFIS_MISC_T afis_misc;
//	PORTRAIT_T low_res_portrait;

	ADDRESS_T new_address;
	LI_NRS_MISSED_OPEX_MISC_T misc;
	LI_NRS_PASSPORT_INFO_T pp_info;	
	MINUTIAE_T lfinger;
	MINUTIAE_T rfinger;

} LI_NRS_UPDATE_REQ_T;

/* Utility functions (for internal use only) */
//long get_buffer_size(LI_NRS_UPDATE_REQ_T *req);
//int copy_images(LI_NRS_UPDATE_REQ_T *req, char **in_temp_ptr, int *error_code);

int li_nrs_update_p(LI_P_HEADER_T header,LI_PUT_FIN_DATA_T put_fin_data,
					LI_NRS_UPDATE_REQ_T req,
				    unsigned char *msg_id, int *error_code,
					unsigned char *pReplyMsg,
					int *iReplyMsgLen,
					char *sErrMessage);


#endif

