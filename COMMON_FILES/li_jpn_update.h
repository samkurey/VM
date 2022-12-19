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
	int  gmpc_version; // old is card_version are both equal??
	// New requirement
	char original_name_indicator;
	char origin_indicator;
	char art_color_code[ARTICLE_COLOR_CODE_SIZE];
	char retire_date[DATE_SIZE];
	char pol_army_join_date[DATE_SIZE];
	//char appl_approval_date[DATE_SIZE]; old field, Removed for IJPN
	char green_card_exp_date[DATE_SIZE];
	char person_status;
	char citizen_nation_code[COUNTRY_CODE_SIZE];	/* New requirement, added on 05122001 */
	/* new requirement added by shiva.p on 24/09/2002 given by vasanth */
	char name_appr_ref_num[APPROV_DOC_NO_SIZE]; //changed from [APPROVAL_DOC_NO_SIZE] for IJPN by vasanth
	char name_chg_reason_code[NAME_CHG_CODE];
	char name_reg_date[DATE_SIZE];
	char imm_ref_number[IMM_REFER_NO_SIZE];
	char imm_ref_date[DATE_SIZE];
	char imm_expire_date[DATE_SIZE];
	char passport_no[PASSPORT_NO_SIZE];
	char passport_issue_date[DATE_SIZE];
	char passport_issue_country[COUNTRY_CODE_SIZE];
//Commented for GSCB Upgrade- 10th March 2005
//Added by Amarjith on 7th Sept '04. JRS 147.
	char szPermitNo[PERMIT_NO_SIZE + 1];
	char szPermitDate[DATE_SIZE];
	int	 nEntryPermitType;
	int  nDocTypeCode;
//JRS 147.
//10th March 2005

// Added on 11/07/2008 for JRS 160
	char myprind[3];

// JRS 160
} LI_JPN_UPDATE_MISC_T;
 

typedef struct li_afis_1n_misc
{
	char kpp_no[KPP_SIZE];
	char police_army_id;
	char police_army_no[ID_SIZE]; //added this on 4/7/2006
	//char police_no[ID_SIZE];    //commented this on 4/7/2006
	//char army_no[ID_SIZE];      //commented this on 4/7/2006
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
	//int lost_card_count_ind old filed, Removed for IJPN 
	
} LI_AFIS_1N_MISC_T;


typedef struct li_jpn_update_req_t
{
	int trans_type; // this has to be removed as this is not in the new list given
	/* Valid values are : TXN_TYPE_JPN_UPDATE - Update Demographics		*/
	/*					  TXN_TYPE_AFIS_1N	  - 1:N check				*/
	LI_JPN_UPDATE_MISC_T misc;
	NAME_T appnt_names;
	ADDRESS_T *new_address;
	ADDRESS_T *old_address;	
	PORTRAIT_T low_res_portrait; 
	MINUTIAE_T lfinger;
	MINUTIAE_T rfinger;
	/*PORTRAIT_T hi_res_portrait;
	FINGER_T left_finger_prints;
	FINGER_T right_finger_prints; */ // Commented as per the IJPN requirement as this has been moved to AFIS system
	LI_AFIS_1N_MISC_T afis_1n_misc;

	char bypass_afis_ind; //appnt_jpn_info.afisbypass
/*	
	float processing_fee; // PF
	float calculcated_compound_fee;
	float special_fee; // AF
	float paid_fee; // payment_info.paybleamt
	float additional_fee;
	float renewal_compound;
	float renewal_18_compound;
	float lost_compound;
	float card_expired_compound;
	float damaged_compound;
*/
	char processing_fee[FEE_SIZE]; // PF
	char calculcated_compound_fee[FEE_SIZE];
	char special_fee[FEE_SIZE]; // AF
	char paid_fee[FEE_SIZE]; // payment_info.paybleamt
	char additional_fee[FEE_SIZE];
	char renewal_compound[FEE_SIZE];
	char renewal_18_compound[FEE_SIZE];
	char lost_compound[FEE_SIZE];
	char card_expired_compound[FEE_SIZE];
	char damaged_compound[FEE_SIZE];

	char  transaction_code[LEGTXNCODE_SIZE]; // appl_txn.legtxncode
	char  application_type[11]; // appl_txn.legtxncode's last two characters
	//char  coll_location[APPL_COLLCENTER_SIZE]; // APPLICATION.collcenter
	char  coll_location[COLLJPNBRANCHCODE_SIZE]; // APPLICATION.collcenter
	char  coll_date[DATE_SIZE];
	char  indicator2; // APPLICATION.applpriority
	char  indicator1[AGENCY_SIZE]; // card_status.agency on chip
	char  change_reference_no[APPROV_DOC_NO_SIZE]; // APPLICATION.APPRVLDOC size to check with vasanth??
	char  appl_no[LEGAPPLID_SIZE]; // APPLICATION.LEGAPPLID size
	char  sponsor_kpt[ID_SIZE]; //APPLICATION.sponsoridno size
	char  sponsor_id_type[ID_TYPE_SIZE];  // sponsoridtype
	char  appnt_spon_rel_code[RELATION_CODE_SIZE]; //APPLICATION.relationcode size
	char  ktstartdate[DATE_SIZE];
	char  ktenddate[DATE_SIZE];
	char  rjind[RJ_SIZE]; //APPNT_JPN_INFO
	char  rjstartdate[DATE_SIZE];
	char  rjenddate[DATE_SIZE];
	char  jpn_doc_no[DOC_NO_SIZE]; // APPL_DOC_SERNO.docserno size
	char  imm_country_code[COUNTRY_CODE_SIZE]; //APPNT_JPN_INFO.citizennationcode

	char  appl_status;  // added on 18th July 2005 for IJPN, request from Vasanth
	char  appl_status2; // added on 18th July 2005 for IJPN, request from Vasanth

	char appldate[DATE_SIZE]; // added on 16/08/05 as per Vasanth instr.

	char  jkind;          // added on 14/10/05 for IJPN
	char  ijpn_gmpc_ind;  // added on 14/10/05 for IJPN

	char  appl_branch_code[BRANCH_CODE_SIZE+2]; // added on 10/11/05 for IJPN request from vasanth
	char  telephone_no[CONTACTNO_SIZE];   // added on 18/04/06 for IJPN
	char  imm_country_code_3digit[COUNTRY_CODE_SIZE]; // added on 28/06/06 , //IMM_COUNTRY_CODE.citizennationcode
	
	char mypr_extrafee[FEE_SIZE];  // Added this filed on 12/09/2008 for MYPR
	
	char  approve_date[DATE_SIZE];  // added this filed on 17/04/2009 for jpnupdate.
	char  apprv_user_id[USER_ID_SIZE];  // added this filed on 17/04/2009 for jpnupdate.

	char  appt_date[DATE_SIZE];  // added this filed on 19/09/2013 for CR 278 for jpnupdate.

	char  actual_kptno[ID_SIZE];  // added this filed on 13/02/2014 for CR 283 for jpnupdate.
	
	int  lostcntneg;    // added this filed on 19/02/2014 for CR 284.
	int  lostcntcrime;  // added this filed on 19/02/2014 for CR 284.
	int  lostcntdis;    // added this filed on 19/02/2014 for CR 284.
	
	char ktareacode[6+1];  // added this filed on 28/05/2014 for CR 282.
	char apjareacode[8+1]; // added this filed on 28/05/2014 for CR 282.

	char kptno[KPT_SIZE];   //Added by Salmi, 11th Aug 2020, DLKP (CRAPPL-  SKP002/CR/2020)
	char remark[201];   //Added by Salmi, 11th Aug 2020, DLKP (CRAPPL-  SKP002/CR/2020)

	char  email[101];   // added by samsuri on 20 oct 2022

} LI_JPN_UPDATE_REQ_T;

/* Utility functions (for internal use only) */
long judge_buffer_size(LI_JPN_UPDATE_REQ_T req);
int copy_names(LI_JPN_UPDATE_REQ_T *req, char **temp_ptr, int *error_code);
int copy_addresses(LI_JPN_UPDATE_REQ_T *req, char **temp_ptr, int *error_code);
int copy_misc(LI_JPN_UPDATE_REQ_T *req, char **in_temp_ptr, int *error_code);
int copy_images(LI_JPN_UPDATE_REQ_T *req, char **in_temp_ptr, int *error_code);

int li_jpn_update_p(LI_P_HEADER_T header,	LI_PUT_FIN_DATA_T put_fin_data,
					LI_JPN_UPDATE_REQ_T req,
				    unsigned char *msg_id, int *error_code,
					unsigned char *pReplyMsg,
					int *iReplyMsgLen,
					char *sErrMessage);


#endif

