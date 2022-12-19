/*******************************************************************/
/* Filename :     gmpc_enquiry_io.h								   */
/* Author :       Brijesh B Patil  								   */
/* Description :  Contains IO structs for the service GMPC_ENQUIRY */
/*******************************************************************/
#ifndef _GMPC_ENQUIRY_IO_
#define _GMPC_ENQUIRY_IO_

#define SSCBRANCHCODE_SIZE		7
#define SPONSORIDTYPE_SIZE		3
#define SPONSORIDNO_SIZE		16
#define SPONSORNAME_SIZE		51
#define ADDRESS1_SIZE			31
#define POSTCODE_SIZE			6
#define CITYCODE_SIZE			5
#define STATECODE_SIZE			3
#define LICTYPE_SIZE			4
#define LICCLASS_SIZE			3
#define LICUSAGECODE_SIZE		3
#define PASSPORTNO_SIZE			16
#define PROBLREASONCODE_SIZE	6		



 typedef struct gmpc_enquiry_req_s
 {
	HEADER_T header;
	char kptno[KPT_SIZE];
	int version;
	char idtype[ID_TYPE_SIZE];
	char idno[ID_SIZE];
 }GMPC_ENQUIRY_REQ_T;

typedef struct gmpc_enquiry_resp_s
 {
	HEADER_T header;
	char kptno[KPT_SIZE];
	/* Changed by Sushil 06012004 to get old kpt*/
	char oldkptno[KPT_SIZE];
	int  version;
	char idno[ID_SIZE];
	char applid[APP_ID_SIZE];
	char applstat;
	int  cardstat;
	char appldate[DATE_TIME_SIZE];
	char userid[USER_ID_SIZE];
	char contact_number[PHONE_SIZE];
	char timestamp[DATE_TIME_SIZE];
	char name[GMPC_SNAME1_SIZE+GMPC_SNAME2_SIZE+GMPC_SNAME3_SIZE];
	char branchcode[BRANCH_CODE_SIZE];
	char collection_center[BRANCH_CODE_SIZE];
	char colldate[DATE_TIME_SIZE];
	char issuedate[DATE_TIME_SIZE];
	float outstandpay;
	char batch_no[BATCH_NO_SIZE];
	char agencyonchip[AGENCY_ON_CHIP_SIZE];
	char applremarks[NOTE_SIZE]; //char applremarks[REMARK_SIZE];
	int  applpriority;

	char pannumber[17];
	char touchandgono[19];

	char race_code[RACE_CODE_SIZE];
	char gender;
	char color_code;
	char birth_date[DATE_SIZE];
	char lic_id[LIC_ID_SIZE];
	char lic_idtype[ID_TYPE_SIZE];
	char owner_cat;
	char cardpersonaldate[DATE_TIME_SIZE];
	char chipsrno[CARDSRNO_SIZE];

	char blklst_stat;
	char blklst_date[DATE_TIME_SIZE];
	char blklst_userid[USER_ID_SIZE];

/*	char coll_idtype[ID_TYPE_SIZE];
	char coll_idno[ID_SIZE];
	char coll_date[DATE_TIME_SIZE];
	char coll_currlongname[LONG_NAME_SIZE];
*/
	/* Added on 1 MARCH 2005 for IJPN */
	char sscbranchcode[SSCBRANCHCODE_SIZE];
	char sponsoridtype[SPONSORIDTYPE_SIZE];
	char sponsoridno[SPONSORIDNO_SIZE];
	char sponsorname[SPONSORNAME_SIZE];	
	int appnt_lic_cnt;
	char appnt_jpn_ind;
	/* end IJPN */
	int txn_cnt;
	int applhistory_cnt;
	int cardhistory_cnt;
	int prev_appl_cnt;
	int applproc_cnt;
	int passport_cnt;
	int multi_rec_cnt;
	/* Added on 1 JAN 2006 for IJPN */
	int prob_rec_cnt;
	char idtype[ID_TYPE_SIZE]; //added by samsuri on 13 oct 2022
	char uskRemark[NOTE_SIZE]; //added by samsuri on 17 oct 2022
	char panelRemark[NOTE_SIZE]; //added by samsuri on 17 oct 2022
	
 }GMPC_ENQUIRY_RESP_T;

typedef struct gmpc_matches_s
{
	char kptno[KPT_SIZE];
	char gender;
	int  version;
	char name[GMPC_SNAME1_SIZE+GMPC_SNAME2_SIZE+GMPC_SNAME3_SIZE];
}GMPC_MATCHES_T;

typedef struct txn_details_s
{
	char txn_code[TRANSACTION_CODE_SIZE];
	char lic_type[LIC_TYPE_SIZE];
	char lic_typeclass[LIC_CLS_SIZE];
	char lic_usagecode[LIC_USAGE_SIZE];
}TXN_DETAILS_T;

typedef struct appl_history_records_s
{
	char appl_stat;
	char userid[USER_ID_SIZE];
	char timestamp[DATE_TIME_SIZE];
	char wsid[WS_ID_SIZE];
	char branchcode[BRANCH_CODE_SIZE];
}APPL_HISTORY_RECORDS_T;

typedef struct card_hist_records_s
 {
	int cardstat;
	char timestamp[DATE_TIME_SIZE];
	char userid[USER_ID_SIZE];
	char wsid[WS_ID_SIZE];
	char branchcode[BRANCH_CODE_SIZE];
 }CARD_HIST_RECORDS_T;

typedef struct prev_appl_det_s
{
	char applid[APP_ID_SIZE];
	int card_status;
	char appl_status;
	char appldate[DATE_TIME_SIZE];
	char txn_code[TRANSACTION_CODE_SIZE];
	int cardversion;
}PREV_APPL_DET_T;

typedef struct appl_proc_details_s
{
	char procind[PROCESS_IND_SIZE];
	char userid[USER_ID_SIZE];
	char timestamp[DATE_TIME_SIZE];
}APPL_PROC_DETAILS_T;

typedef struct passport_details_s
{
	char passport_doctype[JIM_DOC_TYPE_SIZE];
	char passport_number[PASSPORT_NO_SIZE];
	char expiry_date[DATE_SIZE];
}PASSPORT_DETAILS_T;

	/* Added on 2 MARCH 2005 for IJPN */

typedef struct appnt_lic_info_s
{
	char lictype[LICTYPE_SIZE];
	char licclass[LICCLASS_SIZE];
	char licusagecode[LICUSAGECODE_SIZE];
	char licvalidenddate[DATE_SIZE]; // Added this on 13/04/06
}APPNT_LIC_INFO_T;

typedef struct appnt_jpn_info_s
{
	char gmpcshortname1[GMPC_SNAME1_SIZE];
	char gmpcshortname2[GMPC_SNAME2_SIZE];
	char gmpcshortname3[GMPC_SNAME3_SIZE];
	char address1[ADDRESS1_SIZE];
	char address2[ADDRESS1_SIZE];
	char address3[ADDRESS1_SIZE];
	char postcode[POSTCODE_SIZE];
	int  citycode;
	char statecode[STATECODE_SIZE];
}APPNT_JPN_INFO_T;
/* end IJPN */

/* Added on 1 JAN 2006 for IJPN */
typedef struct probl_record_s
{
	char problreasoncode[PROBLREASONCODE_SIZE];
	int  problserno;
	// Added the following on 28/09/2016 for Rease 3.32 CR 293
	char problstat;
	char bskrecd;
}PROBL_RECORD_T;

	

#endif
