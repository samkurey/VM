/* $Header:   F:/GSCBProjectDb/archives/CIS/GSCB/GET_PROB_REC/get_prob_rec_io.h-arc   1.0   Jul 18 2001 17:24:16   DeshpaA  $ */
/****************************************************************************/
/* Filename    : get_prob_rec_io.h											*/
/* Author      : Abhijeet Deshpande											*/
/* Description : This file contains the structures for I/O buffers for the	*/
/*				 service GET_PROB_REC.										*/
/****************************************************************************/

#ifndef _GET_PROB_REC_IO_
#define _GET_PROB_REC_IO_

#define AGENCY_TYPE_SIZE	4
#define TEMP_ID_SERNO_SIZE	13
#define TEMP_ID_SERNO_SIZE	13
#define OLDAPPLID_SIZE		20
/* Fields Used in APPL_MISSED_OPEX */

#define SPON_CURR_LONG_NAME_SIZE 	181
#define ORIG_NAME_SIZE				151
#define ADD_SIZE					31
#define PT_WNO_SIZE					16

typedef struct appl_missed_opex_s
{
	char birthdate[DATE_SIZE];
	char birthplacecode[BIRTH_PLACE_CODE_SIZE];
	char birthstatecode[BIRTH_COUNTRY_CODE_SIZE];
	char citizennationcode[CITIZEN_CODE_SIZE];
	char colourarticlecode[ARTICLE_COLOR_CODE_SIZE];
	char fatheridtype[ID_TYPE_SIZE];
	char gender;
	char hkind;
	char iccolorcode;
	char idtype[ID_TYPE_SIZE];
	char immexpirydate[DATE_SIZE];
	char immrefdate[DATE_SIZE];
	char kppno[KPP_SIZE];
	char kptno[KPT_SIZE];
	char ktindcode[KT_CODE_SIZE];
	char lastcardissuedate[DATE_SIZE];
	char militaryid[MILITARY_ID_SIZE];
	char motheridtype[ID_TYPE_SIZE];
	char orignameind;
	char passportissuecountry[COUNTRY_CODE_SIZE];
	char passportissuedate[DATE_SIZE];
	char permitissuedate[DATE_SIZE];
	char policeid[POLICE_ID_SIZE];
	char policeretiredate[DATE_SIZE];
	char polmilitarycode;
	char polmilitaryjoindate[DATE_SIZE];
	char racecode[RACE_CODE_SIZE];
	char relationcode[RELATION_CODE_SIZE];
	char religioncode;
	char residentstat;
	char sponsoridtype[ID_TYPE_SIZE];
	char statecode[STATE_CODE_SIZE];
	char unknownbirthind;
	int  birthdistrictcode;
	int  cardlostcnt;
	int  citycode;
	char address1[ADD_SIZE];
	char address2[ADD_SIZE];
	char address3[ADD_SIZE];
	char currlongname[LONG_NAME_SIZE];
	char currshortname1[SIREN_SHORT_NAME];
	char currshortname2[SIREN_SHORT_NAME];
	char fatheridno[ID_SIZE];
	char gmpcshortname1[GMPC_SNAME1_SIZE];
	char gmpcshortname2[GMPC_SNAME1_SIZE];
	char gmpcshortname3[GMPC_SNAME3_SIZE];
	char idnumber[ID_SIZE];
	char immrefno[IMM_REF_NO_SIZE];
	char motheridno[ID_SIZE];
	char origname[ORIG_NAME_SIZE];
	char passportno[PASSPORT_NO_SIZE];
	char permitno[PERMITNO1_SIZE];
	char postcode[POST_CODE_SIZE];
	char sponsorcurrlongname[SPON_CURR_LONG_NAME_SIZE];
	char sponsoridno[ID_SIZE];
	char citizenshipacqdate[DATE_SIZE]; 
	/* Added on 25 FEB 2005 for IJPN */
	char ktstartdate[DATE_SIZE];
	char ktenddate[DATE_SIZE];
	char ptissuedate[DATE_SIZE];
	char ptwno[PT_WNO_SIZE];
	char birthregndate[DATE_SIZE];
	/* end IJPN */
} APPL_MISSED_OPEX_T;

	/* Added on 25 FEB 2005 for IJPN */

typedef struct probl_record_s
{
	int  prob_no;
	char id_type[ID_TYPE_SIZE];
	char id_no[ID_SIZE];
	char prob_date[DATE_TIME_SIZE];
	char reason_code[REASON_CODE_SIZE];
	int  reason_srno;
	char prob_stat;
	char prob_remarks[PROB_REMARK_SIZE];
	char prob_solve_date[DATE_TIME_SIZE];
	char user_id[USER_ID_SIZE];
	char workstation_id[WS_ID_SIZE];
	char action_date[DATE_TIME_SIZE];
	char action_remarks[PROB_REMARK_SIZE];
	char action_user_id[USER_ID_SIZE];
	char branch_code[BRANCH_CODE_SIZE];
	char txn_code[TRANSACTION_CODE_SIZE];
	char legacy_type[AGENCY_TYPE_SIZE];	
	char gscbupdflag;
	/* Added on FEB 25 2005 for IJPN */
	char genkpt;
	char bskrecd;
	/* end IJPN */
}PROBL_RECORD_T;

typedef struct other_gsc_problems_s
{
	char applstat;
	char kptno[KPT_SIZE];
	char collcenter[BRANCH_CODE_SIZE];
	char cardcolldate[DATE_SIZE];
	char idtype[ID_TYPE_SIZE];
	char idno[ID_SIZE];
	char userid[USER_ID_SIZE];
	char contactno[CONTACT_PERSON_NAME_SIZE];
	char sscbranchcode[BRANCH_CODE_SIZE];
	long qticketno;
	char licidno[ID_SIZE];
	char ownercat;
	char collkptno[KPT_SIZE];
	char applremarks[SUPERVISOR_NOTE_SIZE];
	int  applpriority;
	char timestamp[DATE_SIZE];
	char legapplid[LEGACY_APPLID_SIZE];  // added on 27/02/06
	char email[101]; //added by samsuri on 30 sept 2022
}OTHER_GSC_PROBLEMS_T;
	/* end IJPN */

typedef struct get_prob_rec_request
{
	HEADER_T header;
	char application_id[APP_ID_SIZE];
	char applicant_id[ID_SIZE];
	char q_tkt_no[Q_NO_SIZE];
	char applicant_id_type[ID_TYPE_SIZE];
	char start_date[DATE_SIZE];
	char end_date[DATE_SIZE];
	char branch_code[BRANCH_CODE_SIZE];
	char problem_status;
	char reason_code[REASON_CODE_SIZE];
	char updstatus;
} GET_PROB_REC_REQ_T; 


typedef struct get_prob_rec_response
{
	HEADER_T header;	
	char other_gsc_problem_ind;
	int  probl_record_cnt;
	char missed_opex_ind;
	char upd_flag;
	char addr_info_ind;
	int  appl_txn_cnt;
	int  outstand_txn_cnt;
	char enqtype_ind;
} GET_PROB_REC_RESP_T;


typedef struct prob_details
{
	int  prob_no;
	char id_type[ID_TYPE_SIZE];
	char id_no[ID_SIZE];
	char prob_date[DATE_TIME_SIZE];
	char reason_code[REASON_CODE_SIZE];
	int  reason_srno;
	char prob_stat;
	char prob_remarks[PROB_REMARK_SIZE];
	char prob_solve_date[DATE_TIME_SIZE];
	char user_id[USER_ID_SIZE];
	char workstation_id[WS_ID_SIZE];
	char action_date[DATE_TIME_SIZE];
	char action_remarks[PROB_REMARK_SIZE];
	char action_user_id[USER_ID_SIZE];
	char branch_code[BRANCH_CODE_SIZE];
	char txn_code[TRANSACTION_CODE_SIZE];
	char legacy_type[AGENCY_TYPE_SIZE];
} PROB_DETAILS_T;


typedef struct application_s
{
	char applcancelcode[CANCEL_CODE_SIZE];
	char applcanceldate[DATE_TIME_SIZE];
	char appldate[DATE_TIME_SIZE];
	char applstage[APPL_STAGE_SIZE];
	char applstat;
	char birthdate[DATE_TIME_SIZE];
	char branchcode[BRANCH_CODE_SIZE];
	char cardcolldate[DATE_TIME_SIZE];
	char collcenter[BRANCH_CODE_SIZE];
	char collkptno[KPT_SIZE];
	char dateofapproval[DATE_TIME_SIZE];
	char dateofarrival[DATE_TIME_SIZE];
	char districtcode[DIST_CODE_SIZE];
	char gender;
	char idtype[ID_TYPE_SIZE];
	char immexpirydate[DATE_TIME_SIZE];
	char kptno[KPT_SIZE];
	char licidtype[ID_TYPE_SIZE];
	char loaddl;
	char losscardind;
	char lossofdl;
	char lostreceiptflag;
	char missedopexflag;
	char newownercat;
	char officcolorcode;
	char oldapplid[OLDAPPLID_SIZE];
	char ownercat;
	char pdlrenewtype;
	char photocapture;
	char prbstatus;
	char qcflag;
	char relationcode[RELATION_CODE_SIZE];
	char retirementdate[DATE_TIME_SIZE];
	char sponsoridtype[ID_TYPE_SIZE];
	char sscbranchcode[BRANCH_CODE_SIZE];
	char summind;
	char summpaymind;
	char tempidexpdate[DATE_TIME_SIZE];
	char timestamp[DATE_TIME_SIZE];
	int  applpriority;
	int  appntcardverno;
	int  cardlostcount;
	int  procserno;
	long mepscash;
	long qticketno;
	char agencyonchip[AGENCY_ON_CHIP_SIZE];
	char applremarks[SUPERVISOR_NOTE_SIZE];
	char aprvldocno[DOC_NO_SIZE];
	char contactno[CONTACT_PERSON_NAME_SIZE];
	char idno[ID_SIZE];
	char licidno[ID_SIZE];
	char sponsoridno[ID_SIZE];
	char supvsrnotes[SUPERVISOR_NOTE_SIZE];
	char tempidserno[TEMP_ID_SERNO_SIZE];
	char temporaryid[ID_SIZE];
	char userid[USER_ID_SIZE];
	char wsid[WS_ID_SIZE];
	char joindate[DATE_SIZE];	//Added by Amarjith on 16th Feb 05 to aviod compilation errors.
} APPLICATION_T;

/* following new buffers added for IJPN on 3/08/2005 */

typedef struct appl_txn_fee_s
{	
	int   txnserno;
	char  feetype[FEE_TYPE_SIZE];
	float feeamt;
	int   agencyrevncode;

} APPL_TXN_FEE_T;

typedef struct outstand_txn_fee_s
{
	int   txnserno;
	char  feetype[FEE_TYPE_SIZE];
	float feeamt;
	int   agencyrevncode;
	char  send_gsc;

} OUTSTAND_TXN_FEE_T;

typedef struct address_info_s
{
	/* in this buffer collcenter is from APPLICATION table, 
	rest are from APPNT_JPN_INFO table */
	
	char gmpcshortname1[GMPC_SNAME1_SIZE];
	char gmpcshortname2[GMPC_SNAME2_SIZE];
	char gmpcshortname3[GMPC_SNAME3_SIZE];
	char address1[ADDRESS1_SIZE];
	char address2[ADDRESS2_SIZE];
	char address3[ADDRESS3_SIZE];
	char postcode[POSTCODE_SIZE];
	char statecode[STATECODE_SIZE];
	int  citycode;
	char collcenter[APPL_COLLCENTER_SIZE];
	
}ADDRESS_INFO_T;

/* end IJPN */
/* Added by kasi for Express card on 26/01/2006  */
typedef struct time_version_s
{
	char timeStamp[DATE_TIME_SIZE];
	int cardVersion;
	char agencyonchip[AGENCY_ON_CHIP_SIZE];
	
} TIME_VERSION_T;


#endif /* #ifndef _GET_PROB_REC_IO_ */
