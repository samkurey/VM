/* $Header:   F:/GSCBProjectDb/archives/CIS/GSCB/SET_APPL_STAT_L3/set_appl_stat_L3.h-arc   1.24   Jul 29 2003 14:52:24   Administrator  $ */
/********************************************************************************/
/* Filename    : set_appl_stat_L3.h												*/
/* Author      : Bakul Waghmare, Brijesh Patil									*/
/* Description : This file contains the #defines and structures for service		*/
/*				 SET_APPL_STAT_L3.													*/
/********************************************************************************/

#ifndef _SET_APPL_STAT_L3_
#define _SET_APPL_STAT_L3_

//#include "jpn_update_io.h"
//#include "jpj_update_io.h"
//#include "imm_update_io.h"

/* # defines	*/
#define PROG_LOG_SIZE		sizeof(PROG_ACCESS_LOG_T)
#define APPL_EXCEP_LOG_SIZE sizeof(APPL_EXCEP_LOG_T)
#define TXN_LOG_SIZE		sizeof(TXN_LOG_T)

#define SET_APPL_STAT_L3_REQ_SIZE	sizeof(SET_APPL_STAT_L3_REQ_T)
#define SET_APPL_STAT_L3_RESP_SIZE	sizeof(SET_APPL_STAT_L3_RESP_T)

#define GET_JPN_DATA_REQ_SIZE	sizeof(GET_JPN_DATA_REQ_T)
#define GET_JPN_DATA_RESP_SIZE	sizeof(GET_JPN_DATA_RESP_T)

#define PROBLEM_STATUS_CLOSED	'C'
#define KPT_EXISTS			20130
/* AFIS flag values	*/
#define AFIS_NO_REC			'0'	/* no record in AFIS, must do a 1:n check	*/
#define AFIS_REC_NO_SEARCH	'1'	/* record in AFIS and has not done a 1:n, must do a 1:n check	*/
#define AFIS_VV_DONE		'2'	/* record in AFIS and 1:n was done with visual verification, don't need a 1:n check	*/
#define AFIS_VV_NOT_DONE	'8'	/* record in AFIS and 1:n was done but need visual verification, don't need a 1:n check	*/
#define	AFIS_SEARCH_DONE	'9'	/* record in AFIS and 1:n was done, don't need a 1:n check	*/

/* Action flag values	*/
#define TERMINATE	'T'
#define REFER_GQD	'R'
#define TO_BE_CANCELLED		'Y'
#define RESTORE_PREV_STAT	'Z'
#define BSK_INV	'I'  // Added this on 04/10/2016 for 3.32 Rel 293

#define INVALID_KPTNO KPT_NO_NULL

#define NO_DATA1		20133

/* Flags to indicate which messages to be sent to legacy */
#define NO_UPDATE			1
#define ALL_UPDATES			0
#define SELECTIVE_UPDATES	2

#define INITIAL_CHK			0
#define TO_BE_CAN_CHK		1
#define VALID_APPLSTAT		2

/* Structures	*/
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

/* Function Prototypes	*/
int close_problems(char *, PROB_RESULT_T *, int, char *,void * ctx);
int set_collection_date(char *, char *, char *,void * ctx);
int all_probs_resolved(char *,void * ctx);
//int put_approved_data(SET_APPL_STAT_L3_REQ_T *pReq, NAME_ADDRESS_T *name_add, char *kptno);	//Commented by Amarjith on 27th Aug '04. JRS 147.
int put_approved_data(SET_APPL_STAT_L3_REQ_T *pReq, NAME_ADDRESS_T *name_add, char *pTxnCode,void * ctx);	//Added by Amarjith on 27th Aug '04. JRS 147.

int set_appl_in_progress(HEADER_T header, char reprint_flag,char trans_code[TRANSACTION_CODE_SIZE],void * ctx);
int change_appl_status(HEADER_T, char, char *,void * ctx);
int update_bsk_inv(HEADER_T, char *, void * ctx);
int change_appl_status_gqdssc(HEADER_T, char , char *,PROB_RESULT_T *,int,void * ctx ); // Added for IJPN on 25th Mar 2005
int check_set_appl_stat_L3_input(SET_APPL_STAT_L3_REQ_T *,void * ctx);
int get_fresh_jpn_data(HEADER_T);
int send_legacy_updates(HEADER_T t_header, char termination_flag, NAME_ADDRESS_T *name_add, long lr_photo_size, long hr_photo_size, char name_address_flag, void * ctx);
//int fill_get_jpn_data_request_buffer(GET_JPN_DATA_REQ_T *rq);

//int call_jpj_update(HEADER_T *header,void * ctx);
int	call_jpn_update(HEADER_T *header, char, void * ctx);
int call_imm_update(HEADER_T *header,void * ctx);
int call_pdrm_update(HEADER_T *header,void * ctx);


int insert_into_legacy_request(char flag, HEADER_T *header, char agency, int reqstat, int txnserno,void * ctx);
int get_kpt_no(char appl_id[APP_ID_SIZE], char *kptno,void * ctx);
int check_jpj_info(char *kpt_no, char *appl_id, int *jpj_info_flag,void * ctx);
int check_imm_info(char *kpt_no, char *appl_id,void * ctx);
int check_pdrm_info(char *kpt_no, char *appl_id,void * ctx);
int insert_into_appl_history(HEADER_T header,void * ctx);
int get_previous_appl_status(char *appl_id, char *status,void * ctx);
int update_appl_table(char *application_id, char *kptno,void * ctx);
int update_cancelcode(char *applid, char *cancel_code,void * ctx);
int check_appl_status(char *applid, int appl_stat_flag,void * ctx);
int check_disputed_data(char *applid, int * disputed_flag,void * ctx);
int delete_card_status(char *application_id,void * ctx);
int ins_card_status(HEADER_T header, char *gmpc_id, int card_stat,void * ctx);
int update_legacy_request(HEADER_T *header, char flag, char agency, int reqstat,void * ctx);
int check_appl_card_status(HEADER_T header, char *gmpc_id, int *applstat_flag, int *name_flag, int *add_flag, int *images_flag, NAME_ADDRESS_T *name_add, long lr_photo_size, long hr_photo_size,void * ctx);
int insert_into_card_history(HEADER_T header,char *kptnumber, char *appl_id, int old_cardstat,void * ctx);


int check_jpj_data(char *applid, int * jpj_flag,void * ctx);
int put_jpj_data(char *applid, char *kptno,void * ctx);
int delete_jpj_info(char applid[APP_ID_SIZE], char kptno[KPT_SIZE],void * ctx);
int insert_into_appnt_jpj_info(char applid[APP_ID_SIZE], char kptno[KPT_SIZE],void * ctx);
int insert_into_appnt_jpj_lic_info(char *application_id, char *kptno,void * ctx);
int insert_new_lic_info(char *application_id, TXN_DETAILS_T *txn_details, char *lic_delete_flag,void * ctx);
int perform_common_jpj_checks(char *application_id, char *kptno,void * ctx);
int get_license_date_info(char *application_id, char *licid, char ownercat, char *license_type,LICENSE_DATE_INFO_T *lic_date,void * ctx);
int fetch_txncode(char *application_id,void * ctx);
int delete_old_class(char *application_id, TXN_DETAILS_T *txn_details, int *record_srno,void * ctx);
int calculate_lic_validity_date(int validity_period, char *txndate, char *validity_end_date,void * ctx);
int update_appl_remarks(char *applid, char status, char *appl_remarks, char *cancel_code, char *cancel_date,void * ctx);
int set_card_expiry_date(char *kpt_number, char *application_id, int txn_type, char *immexpdate,void * ctx);
int put_appnt_images(SET_APPL_STAT_L3_REQ_T *req, char *appnt_img,void * ctx);
int update_appl_table_chg_kpt(char *application_id, char *kptno, char *oldkptno,void * ctx);
int check_kpt_change(char *application_id,void * ctx);
int call_afis_update(HEADER_T *header, char invoke_mode,void * ctx);
int insert_into_jpn_info(JPN_INFO_T *,void * ctx);

int insert_into_afis_refire(char[],void * ctx);

int update_application(char *applid, char *aprvldoc,void * ctx); // added on 30/11/05

// Added this on 22/09/2011 for updating applicant data before calling legacy updates for Release 3.22
int upd_legacy_appl_data(HEADER_T t_header, char *kptno1, void * ctx);

int  change_owner_idcat_flag(char *application_id, void * ctx);  // added this on 17/04/2015
int  change_owner_name_flag(char *application_id, void * ctx);  // added this on 17/04/2015
int  insert_into_ijpn_jpj_updreq(HEADER_T *header, int , void * ctx); // added this on 17/04/2015
int  call_jpj_update(HEADER_T *header,int,void * ctx);  // added this on 17/04/2015

// Added this on 02/06/2016
int change_bsk_applstatus(HEADER_T header, NAME_ADDRESS_T *name_add,char *refbcode, char napplstat, void * ctx);

//int insert_into_dlewat_apprv_history_table(char *applid, APPRV_HISTORY_T *apprv_htr, void * ctx);
int insert_into_dlewat_apprv_history_table(char *applid, SET_APPL_STAT_L3_REQ_T *req, void * ctx);
int update_regn_dlewat(char *applid, char *rejectdate,char *appealdate,void * ctx);  //Added by Subramaniam.P on 10th June,2020 Insert into regn_dlewat_table. CRAPPL-  SKP002/CR/2020
int check_dlkp_trans(char *applid, int * dlkp_flag,void * ctx);
#endif	/* ifndef _SET_APPL_STAT_L3_	*/




