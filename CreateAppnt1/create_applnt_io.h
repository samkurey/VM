/* $Header:   F:/PVCS_GMPC/archives/GSCB_SERVICES/create_applnt/create_applnt_io.h-arc   1.2   Aug 09 2004 17:07:14   Administrator  $ */
/********************************************************************************/
/* Filename    : create_applnt_io.h											*/
/* Author      : Amit Sangrulkar												*/
/* Description : This file contains the structures for I/O buffers for the		*/
/*				 service CREATE_APPLNT.										*/
/********************************************************************************/

#ifndef _CREATE_APPLNT_IO_
#define _CREATE_APPLNT_IO_

#define PROG_LOG_SIZE		sizeof(PROG_ACCESS_LOG_T)
#define APPL_EXCEP_LOG_SIZE sizeof(APPL_EXCEP_LOG_T)
#define TXN_LOG_SIZE		sizeof(TXN_LOG_T)

/* Request structures for CREATE_APPLNT service */  

typedef struct appl_proc_s
{
	int proc_sr_no;
	char proc_ind[PROCESS_IND_SIZE];
	char id_type[ID_TYPE_SIZE];
	char id_no[ID_SIZE];
	char user_id[USER_ID_SIZE];
	char ws_id[WS_ID_SIZE];
	char timestamp[DATE_TIME_SIZE];

} APPL_PROC_T;

typedef struct appl_history_s
{
	int proc_sr_no;
	char appl_date[DATE_SIZE];
	char appl_stat;
	char branch_code[BRANCH_CODE_SIZE];
	char user_id[USER_ID_SIZE];
	char ws_id[WS_ID_SIZE];
	char timestamp[DATE_TIME_SIZE];

} APPL_HISTORY_T;

typedef struct appl_txn_s
{
	int  txn_sr_no;
	char txn_code[TRANSACTION_CODE_SIZE];
	char txn_cancel_code[CANCEL_CODE_SIZE];
	char txn_date[DATE_SIZE];
	char lic_type[LIC_TYPE_SIZE];
	char lic_class[LIC_CLS_SIZE];
	char lic_usage[LIC_USAGE_SIZE];
	int lic_validity;
	int pay_sr_no;
	char qc_flag;
	
} APPL_TXN_T;

typedef struct appl_old_txn_pay_s
{
	int txn_sr_no;
	int pay_sr_no;
	char txn_cancel_code[CANCEL_CODE_SIZE];

} APPL_OLD_TXN_PAY_T;

typedef struct appl_txn_fee_s
{
	int txn_sr_no;
	char fee_type[FEE_TYPE_SIZE];
	float fee_amt;
	long agency_rev_code;
	
} APPL_TXN_FEE_T;

typedef struct appl_outstand_txn_fee_s
{
	int txn_sr_no;
	char fee_type[FEE_TYPE_SIZE];
	float fee_amt;
	long agency_rev_code;
	
} APPL_OUTSTAND_TXN_FEE_T;

typedef struct appl_fee_reduction_s
{
	int txn_sr_no;
	char fee_type[FEE_TYPE_SIZE];
	float orig_fee_amt;
	float fee_amt;
	long agency_rev_code;
	char reduction_type;
	
} APPL_FEE_REDUCTION_T;

typedef struct appl_doc_srno_s
{
	char doc_type[DOC_NO_SIZE];
	char doc_srno[DOC_NO_SIZE];
	char gscb_upd_flag;
	char user_id[USER_ID_SIZE];
	char branch_code[BRANCH_CODE_SIZE];
	char timestamp[DATE_TIME_SIZE];
		
} APPL_DOC_SRNO_T;


typedef struct sup_remarks_s
{
	int txn_sr_no;
	char prob_reason_code[REASON_CODE_SIZE];
	int prob_sr_no;
	char form_name[FORM_NAME_SIZE];
	char remarks[PROB_REMARK_SIZE];
	char user_id[USER_ID_SIZE];
	char ws_id[WS_ID_SIZE];
	char timestamp[DATE_TIME_SIZE];
	
} SUP_REMARKS_T;

typedef struct sponsor_details_s
{
	char id_type[ID_TYPE_SIZE];
	char id_number[ID_SIZE];
	char nationality;
	char issue_country[COUNTRY_CODE_SIZE];
	char birth_date[DATE_SIZE];
	char name1[GMPC_SNAME1_SIZE];
	char name2[GMPC_SNAME2_SIZE];
	char name3[GMPC_SNAME3_SIZE];

} SPONSOR_DETAILS_T;

typedef struct appl_txn_summons_s
{
	int txn_sr_no;
	char agency;
	char summons_number[SUMMON_NO_SIZE];
	char summons_date[DATE_SIZE];
	float summons_amt;
	long agency_rev_code;
	char issue_branch_code[ISSUE_BRANCH_CODE_SIZE];
	char summons_type;
	char summons_issue_code[SUMMON_ISSUE_CODE_SIZE];
	char summ_district[SUMM_DIST_SIZE];
	char device[DEVICE_SIZE];

} APPL_TXN_SUMMONS_T;

typedef struct appnt_jpj_summons_s
{
	char summons_number[SUMMON_NO_SIZE];
	char issuing_branch_code[JPJ_BRANCH_CODE_SIZE];
	char issued_date[DATE_SIZE];
	char summons_type;
	char summons_issue_code[SUMMON_ISSUE_CODE_SIZE];
	char offence_category1[OFFENCE_CATEGORY_LEN];
	char offence_code1[OFFENCE_CODE_SIZE];
	char offence_status1[OFFENCE_STATUS_LEN];
	long offence_amount1;
	char offence_category2[OFFENCE_CATEGORY_LEN];
	char offence_code2[OFFENCE_CODE_SIZE];
	char offence_status2[OFFENCE_STATUS_LEN];
	long offence_amount2;
	char offence_category3[OFFENCE_CATEGORY_LEN];
	char offence_code3[OFFENCE_CODE_SIZE];
	char offence_status3[OFFENCE_STATUS_LEN];
	long offence_amount3;
	char offence_category4[OFFENCE_CATEGORY_LEN];
	char offence_code4[OFFENCE_CODE_SIZE];
	char offence_status4[OFFENCE_STATUS_LEN];
	long offence_amount4;
	int  total_number_of_unpaid_fines;
	long total_offence_amt;
	char last_payable_date[DATE_SIZE];
	char court_code[JPJ_COURT_CODE_SIZE];
	char trial_date[DATE_TIME_SIZE];
	char location_code[ISSUED_PLACE_CODE_LEN];
	char officer_id[OFFICER_ID_LEN];
	char officer_name[OFFICER_NAME_LEN];
	char e1_vehicle_type[VEHICLE_TYPE_CODE_SIZE];
	char e1_vehicle_regn_no[REG_NO_SIZE];
	char trailer_number[TRAILER_NUMBER_LEN];
	char path_from[PATH_SIZE];
	char path_to[PATH_SIZE];
	char summons_leg_flag;

}
APPNT_JPJ_SUMMONS_T;

typedef struct appnt_pdrm_summons_s
{
	char summ_district[SUMM_DIST_SIZE];
	char device[DEVICE_SIZE];
	char summ_type;
	char summons_number[SUMMON_NO_SIZE];
	char summons_date[DATE_TIME_SIZE];
	char vehicle_number[VEHICLE_NO_SIZE];
	char offender_name[OFFENDER_NAME_SIZE];
	char offence1[PDRM_OFFENCE_CODE_SIZE];
	int compound1;
	char offence2[PDRM_OFFENCE_CODE_SIZE];
	int compound2;
	char offence3[PDRM_OFFENCE_CODE_SIZE];
	int compound3;
	char vehicle_type[VEHICLE_TYPE_SIZE];
	char offence_date[DATE_TIME_SIZE];
	char offence_place[PDRM_OFFENCE_PLACE_SIZE];
	long total_compound;
	char compound_date[DATE_SIZE];
	char court_date[DATE_SIZE];
	char cad_id[CAD_ID_SIZE];
	char summons_leg_flag;

} APPNT_PDRM_SUMMONS_T;

typedef struct appnt_lic_susp_s
{
	char lic_type[LIC_TYPE_SIZE];
	char lic_class[LIC_CLS_SIZE];
	char lic_class_usage[LIC_USAGE_SIZE];
	char susp_start_date[DATE_SIZE];
	char susp_end_date[DATE_SIZE];
	char load_on_chip_ind;
	char susp_code[LIC_CODE_SIZE];

} APPNT_LIC_SUSP_T;

typedef struct appnt_lic_revok_s
{
	char lic_type[LIC_TYPE_SIZE];
	char revok_start_date[DATE_SIZE];
	char revok_end_date[DATE_SIZE];
	char load_on_chip_ind;
	char revok_code[LIC_CODE_SIZE];

} APPNT_LIC_REVOKE_T;


typedef struct appnt_jpn_info_s
{
	char hsc_color_code;
	char hk_ind;
	/* New requirement - Added on 04/07/2001 */
	char join_date[DATE_SIZE];
	char retirement_date[DATE_SIZE];
	/* New requirement - Added on 03/10/2001 */
	char approval_date[DATE_SIZE];
	char green_card_expiry_date[DATE_SIZE];
	/*Added on 21/03/2002 by brijesh*/
	char id_type[ID_TYPE_SIZE];
	char id_no[ID_SIZE];
	char citizen_nation_code[CITIZEN_CODE_SIZE];

	/*Added on 24/09/2002 by brijesh*/
	char immrefno[IMM_REFER_NO_SIZE];
	char immrefdate[DATE_SIZE];
	char immexpdate[DATE_SIZE];
	char passportno[PASSPORT_NO_SIZE];
	char passportissuedate[DATE_SIZE];
	char passportissuecountry[COUNTRY_CODE_SIZE];
//Added by Amarjith on 25th Aug 2004. JRS 147
	char szPermitNo[PERMIT_NO_SIZE + 1];
	char szPermitIssueDate[DATE_SIZE];
	int  nPermitType;
	int  nPRDocType;
//JRS 147

	NAME_T name;
	ADDRESS_T address;

	/* added on 16 FEB 2005 for IJPN */
	char rjstartdate[DATE_SIZE];
	char rjenddate[DATE_SIZE];
	char ktstartdate[DATE_SIZE];
	char ktenddate[DATE_SIZE];
	//char blklstind;
	char jkind;  // new change
	char blklstcode[BLKLIST_ACTIVITY_CODE_SIZE];

	/* added on 9th July 2005 for IJPN */
	char afisbypass;
	char birthdate[DATE_SIZE];

	// added on 19 Feb 2014 for CR 284 and Release 3.27
	int lostcntcrime;
	int lostcntdis;
	int lostcntneg;
	// added on 28/05/2014 for CR 282 and Release 3.28	
	char ktareacode[6+1];
	char apjareacode[8+1];
	char ktind[2+1];
	char rjind[2+1];


} APPNT_JPN_INFO_T;


typedef struct finger_static_s
{
	char finger_ind[FINGER_IND_SIZE];
	long quality_score;
	int bandage_ind;
	unsigned char finger_pattern;
	unsigned char thumb_status;
	long fp_img_size;
	long original_minutiae_size;
	long normalized_minutiae_size;
	long matrix_buffer_size;
	

} FINGER_STATIC_T;

typedef struct photo_static_s
{
	long lr_photo_size;
	long hr_photo_size;

}PHOTO_STATIC_T;

typedef struct appnt_jpn_img_s
{
	char upd_print_ind;
	FINGER_STATIC_T lf;
	FINGER_STATIC_T rf;
	FINGER_STATIC_T sponsor_lf;
	FINGER_STATIC_T sponsor_rf;
	PHOTO_STATIC_T photo;
	int quality_stat;
	char remarks[IMG_REMARK_SIZE];
	char sponsor_remarks[IMG_REMARK_SIZE];

} APPNT_JPN_IMG_T;

typedef struct appnt_pp_info_s
{
	int passport_doc_type;
	char load_on_chip_flag;

} APPNT_PP_INFO_T;

typedef struct create_applnt_req_s
{
	HEADER_T header;
	int curr_proc_sr_no;
	char kpt_no[KPT_SIZE];
	char license_id[LIC_ID_SIZE];
	char owner_cat;
	char appl_status;
	int appl_nature;
	char appl_stage[APPL_STAGE_SIZE];
	char appl_remarks[REMARK_SIZE];
	char collection_centre[BRANCH_CODE_SIZE];
	char collector_kpt[KPT_SIZE];
	char collection_date[DATE_TIME_SIZE];
	char temp_id[ID_SIZE];
	char lost_receipt_flag;
	char qc_flag;
	char missed_opex_flag;
	char summons_ind;
	char ssc_code[BRANCH_CODE_SIZE];
	char summons_pay_ind;
	char photo_capture_flag;
	char card_lost_ind;
	char create_user_id[USER_ID_SIZE];
	char create_ws_id[WS_ID_SIZE];
	char create_timestamp[DATE_TIME_SIZE];
	char contact_no[PHONE_SIZE];	//Added by Amarjith on 9th Aug 2004. JRS 144.
	char prb_status;
	char imm_expiry_date[DATE_SIZE];
	char load_dl_flag;	/* New requirement end - Added on 11/09/2001 */ 
	char pdl_renew_type;	/* New requirement end - Added on 14/12/2001 */ 
	int appl_proc_cnt;	/* No of structures of type APPL_PROC_T followed by */
	int appl_history_cnt;	/* No of structures of type APPL_HISTORY_T followed by */
	int new_txn_cnt;	/* No of structures of type APPL_TXN_T followed by */
	int old_pay_cnt;	/* No of structures of type APPL_OLD_TXN_PAY_T followed by */
	int txn_fee_cnt;	/* No of structures of type APPL_TXN_FEE_T followed by */
	/* New requirement start - Added on 04/07/2001 */ 
	int outstand_txn_fee_cnt;	/* No of structures of type APPL_OUTSTAND_TXN_FEE_T followed by */
	int appl_fee_reduce_cnt;	/* No of structures of type APPL_FEE_REDUCTION_T followed by */
	int appl_doc_srno_cnt;	/* No of structures of type APPL_DOC_SRNO_T followed by */
	/* New requirement end - Added on 04/07/2001 */ 
	int super_remarks_cnt;	/* No of structures of type SUP_REMARKS_T followed by */
	/* New requirement start - Added on 19/11/2001 */ 
	int sponsor_details_cnt;	/* No of structures of type SPONSOR_DETAILS_T followed by */
	/* New requirement end - Added on 19/11/2001 */ 
	int summons_cnt;	/* No of structures of type APPL_TXN_SUMMONS_T followed by */
	int unsettled_jpj_summons_cnt; /* No of structures of type APPNT_JPJ_SUMMONS_T followed by */
	int unsettled_pdrm_summons_cnt; /* No of structures of type APPNT_PDRM_SUMMONS_T followed by */
	int susp_info_cnt; /* No of structures of type APPNT_LIC_SUSP_T followed by */
	int revoke_info_cnt; /* No of structures of type APPNT_LIC_REVOKE_T followed by */
	int passport_cnt;	/* No of structures of type APPNT_PP_INFO_T followed by */
	int jpn_demo_cnt;	/* No of structures of type APPNT_JPN_INFO_T followed by */
	int jpn_img_cnt;	/* No of structures of type APPNT_JPN_IMG_T followed by */

	/* Added on feb 23rd 2005 for IJPN */
	char appl_missed_opex_ind;
	char jpn_info_ind;
	char jpn_sb_info_ind;

	//added by samsuri on 28 sept 2022
	char email[101];

} CREATE_APPLNT_REQ_T;

/* Response structure for CREATE_APPLNT service */  

typedef struct create_applicant_response
{
	HEADER_T header;

} CREATE_APPLNT_RESP_T;

/* Miscellaneous structures */

typedef struct txn_details_s
{
	int txn_sr_no;
	int txn_type;
	char txn_code[TRANSACTION_CODE_SIZE];
	char txn_date[DATE_SIZE];
	char lic_type[LIC_TYPE_SIZE];
	char lic_class[LIC_CLS_SIZE];
	char lic_usage[LIC_USAGE_SIZE];
	int lic_validity;
	int pay_sr_no;
	int qc_sr_no;
	char qc_flag;
	
} TXN_DETAILS_T;

typedef struct license_date_info_s
{
	char validity_start_date[DATE_SIZE];
	char validity_end_date[DATE_SIZE];
	char susp_start_date[DATE_SIZE];
	char susp_end_date[DATE_SIZE];
	char revok_start_date[DATE_SIZE];
	char revok_end_date[DATE_SIZE];
	
} LICENSE_DATE_INFO_T;

typedef struct abt_list_s
{
	char applid[APP_ID_SIZE];
	int txnserno;
//	char appldate[DATE_TIME_SIZE];
	float feeamt;
	float feecollectedamt;
	float outstandingamt;
	char outstandingfeetype;
	char feestat;
	char feecreationdate[DATE_TIME_SIZE];
	char userid[USER_ID_SIZE];
	char branchcode[BRANCH_CODE_SIZE];
} ABT_LIST_T;

 /* The following 3 structures Added on 16 FEB 2005 for IJPN */

typedef struct appl_missed_opex_s
{
	
	char idtype[ID_TYPE_SIZE]; 
	char idnumber[ID_SIZE];
	char origname[ORIG_NAME_SIZE];
	char currlongname[CUR_LONG_NAME_SIZE];
	char currshortname1[CUR_SHORT_NAME_SIZE];
	char currshortname2[CUR_SHORT_NAME_SIZE];
	char gmpcshortname1[GMPC_SNAME1_SIZE];
	char gmpcshortname2[GMPC_SNAME1_SIZE];
	char address1[ADDRESS1_SIZE];
	char address2[ADDRESS1_SIZE];
	char address3[ADDRESS1_SIZE];
	char postcode[POST_CODE_SIZE];
	int  citycode;
	char statecode[STATE_CODE_SIZE];
	char birthdate[DATE_SIZE];
	char unknownbirthind;
	int  birthdistrictcode;
	char relegioncode;
	char racecode[RACE_CODE_SIZE];
	char gender;
	char hkind;
	char iccolorcode;
	char ktindcode[KT_CODE_SIZE];
	char residentstat;
	int  cardlostcnt;
	char lostcardissuedate[DATE_SIZE];
	char colourarticlecode[ARTICLE_COLOR_CODE_SIZE];
	char fatheridtype[ID_TYPE_SIZE];
	char fatheridno[ID_SIZE];
	char motheridtype[ID_TYPE_SIZE];
	char motheridno[ID_SIZE];
	char permitno[PERMITNO1_SIZE];
	char permitissuedate[DATE_SIZE];
	char immrefno[IMM_REFNO_SIZE];
	char immrefdate[DATE_SIZE];
	char immexpirydate[DATE_SIZE];
	char passportno[PASSPORT_NO_SIZE];
	char passportissuedate[DATE_SIZE];
	char passportisuuecountry[COUNTRY_CODE_SIZE];
	char policeretiredate[DATE_SIZE];
	char orignameind;
	char kptno[KPT_SIZE];
	char militaryid[MILITARY_ID_SIZE];
	char policeid[POLICE_ID_SIZE];
	char kppno[KPP_SIZE];
	char polmilitarycode;
	char polmilitaryjoindate[DATE_SIZE];
	char gmpcshortname3[GMPC_SNAME3_SIZE];
	char citizenshipacqdate[DATE_SIZE];
	char relationcode[RELATION_CODE_SIZE];
	char sponsoridtype[ID_TYPE_SIZE];
	char sponsoridno[ID_SIZE];
	char sponsorcurrlongname[SPONSER_CUR_LONG_NAME];
	char birthstatecode[STATE_CODE_SIZE];
	char birthplacecode[BIRTH_PLACE_CODE_SIZE];
	char citizennationcode[COUNTRY_CODE_SIZE];
	char ktstartdate[DATE_SIZE];
	char ktenddate[DATE_SIZE];
	char ptissuedate[DATE_SIZE];
	char ptwno[PTWNO_SIZE];
	char birthregndate[DATE_SIZE];	
} APPL_MISSED_OPEX_T;


typedef struct jpn_info_s
{
	char kptno[KPT_SIZE];
	int  birthdistrictcode;
	char policeid[POLICE_ID_SIZE];
	char militaryid[MILITARY_ID_SIZE];
	char kppno[KPP_SIZE];
	char gender;
	char personstatcode;
	char birthdate[DATE_SIZE];
	char unknownbirthind;
	char religioncode;
	char racecode[RACE_CODE_SIZE];
	char residentstat;
	char citizenshipstatcode;
	char colourarticlecode[ARTICLE_COLOR_CODE_SIZE];
	char hkind;
	char iccolorcode;
	char origname[ORIG_NAME_SIZE];
	char currlongname[CUR_LONG_NAME_SIZE];
	char currshortname1[CUR_SHORT_NAME_SIZE];
	char currshortname2[CUR_SHORT_NAME_SIZE];
    char gmpcshortname1[GMPC_SNAME1_SIZE];
	char gmpcshortname2[GMPC_SNAME1_SIZE];
	char gmpcshortname3[GMPC_SNAME3_SIZE];
	char address1[ADDRESS1_SIZE];
    char address2[ADDRESS1_SIZE];
	char address3[ADDRESS1_SIZE];
	char postcode[POST_CODE_SIZE];
	int  citycode;
	char statecode[STATE_CODE_SIZE];
	char ktindcode[KT_CODE_SIZE];
	char jpnremarks1[JPN_REMARKS_SIZE];
	char jpnremarks2[JPN_REMARKS_SIZE];
	char afisflag;
	int  cardlostcnt;
	char kptapplstat;
	char kptappldate[DATE_SIZE];
	char kptcollectiondate[DATE_SIZE];
	char kptcollectionplaccode[KPT_COLLECTION_PLACE_SIZE];
	char lastaddresschangedate[DATE_SIZE];
	char lastcardissuedate[DATE_SIZE];
	char juvenileflag;
	int  cardversionno;
	char birthplace[BIRTH_PLACE_SIZE];
	char rjind[RJ_SIZE];
	char birthcertno[BIRTH_CERT_NO_SIZE];
	int  kptversionno;
	char polmilitaryjoindate[DATE_SIZE];
	char retirementdate[DATE_SIZE];
	char orignameind;
	char surrenderdate[DATE_SIZE];
	char citizennationcode[COUNTRY_CODE_SIZE];
	char applapprovaldate[DATE_SIZE];
	char greencardexpdate[DATE_SIZE];
	char immrefno[IMM_REF_NO_SIZE];
	char immrefdate[DATE_SIZE];
	char immexpirydate[DATE_SIZE];
	char passportno[PASSPORT_NO_SIZE];
	char passportissuedate[DATE_SIZE];
	char passportisuuecountry[COUNTRY_CODE_SIZE];
	char ucflag;
	char permitno[PERMITNO1_SIZE];
	char permitissuedate[DATE_SIZE];
	int  permittype;
	int  prdoctype;
	char rjstartdate[DATE_SIZE];
	char rjenddate[DATE_SIZE];
	char ktstartdate[DATE_SIZE];
	char ktenddate[DATE_SIZE];
	char blklstind;
	char blklstcode[BLKLIST_ACTIVITY_CODE_SIZE];
	char birthregndate[DATE_SIZE];
	// Added on 9th July
	char afisbypass;
	// added on 28/05/2014 for CR 282 and Release 3.28	
	char ktareacode[6+1];
	char apjareacode[8+1];

} JPN_INFO_T;


typedef struct jpn_sb_info_s
{
	char address1[ADDRESS1_SIZE]; 
	char address2[ADDRESS1_SIZE]; 
	char address3[ADDRESS1_SIZE]; 
	char birthdate[DATE_SIZE];
	char birthplace[BIRTH_PLACE_CODE_SIZE]; 
	int citycode;
	char currlongname[CUR_LONG_NAME_SIZE]; 
	char gender;
	char gmpcshortname1[GMPC_SNAME1_SIZE]; 
	char gmpcshortname2[GMPC_SNAME1_SIZE]; 
	char gmpcshortname3[GMPC_SNAME3_SIZE]; 
	char hkind;
	char iccolorcode;
	char kptno[KPT_SIZE]; 
	char militaryid[MILITARY_ID_SIZE]; 
	char origname[ORIG_NAME_SIZE]; 
	char policeid[POLICE_ID_SIZE]; 
	char postcode[POST_CODE_SIZE]; 
	char racecode[RACE_CODE_SIZE]; 
	char religioncode;
	char rjind[RJ_SIZE]; 
	char statecode[STATE_CODE_SIZE]; 
	char idtype[ID_TYPE_SIZE]; 
	char idno[ID_SIZE]; 
	char sbcardexpdate[DATE_SIZE];
} JPN_SB_INFO_T;

/* added code for IJPN */

typedef struct outstand_txn_fee_s
{	
	int   txnserno;
	char  feetype[FEE_TYPE_SIZE];
	float feeamt;
	int   agencyrevncode;		
	
}OUTSTAND_TXN_FEE_T;

#endif /* #ifndef _CREATE_APPLNT_ */
