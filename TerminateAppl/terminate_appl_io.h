#ifndef __TERMINATE_APPL_IO_H__
#define __TERMINATE_APPL_IO_H__

#define		SUPVR_REMARKS_SIZE				151
#define		DISTRICT_SIZE					17
#define		PDRM_RECEIPT_NO_SIZE			11

/* Request Structure */
typedef struct
{
	HEADER_T header;
	char application_id[APP_ID_SIZE];
	char termination_flag;
	char cancel_code[CANCEL_CODE_SIZE];
	char cancel_dt_time[DATE_TIME_SIZE];
	char supvr_notes[SUPERVISOR_NOTE_SIZE];
	int txn_count;
	int proc_count;
	int supvr_remarks_count;
	int hist_count;
	int rvrs_count;
	char issuance_flag;
	char appl_flag;
	int txn_fee_count;
	int txn_summ_count;
	int old_txn_count;
} TERMINATE_APPL_REQ_T;

typedef struct 
{
	int txnserno;
	char txn_code[TRANSACTION_CODE_SIZE];
	char cancel_code[CANCEL_CODE_SIZE];
} TXN_CANCEL_CODES_T;

typedef struct
{
	char txncode[TRANSACTION_CODE_SIZE];
	int txnsrno;
	char txn_cancel_code[CANCEL_CODE_SIZE];
	char lic_type[LIC_TYPE_SIZE];
	char lic_class[LIC_CLS_SIZE];
	char lic_class_usage[LIC_USAGE_SIZE];
	int validity_period;
	int pay_sr_no;
	int qcsrno;
	char qcflag;
	char txn_date[DATE_SIZE];
} APPL_TXN_T;


typedef struct 
{
	int process_srno;
	char proc_ind[PROCESS_IND_SIZE];
	char id_type[ID_TYPE_SIZE];
	char id_no[ID_SIZE];
	char workstation_id[WS_ID_SIZE];
	char user_id[USER_ID_SIZE];
	char timestamp[DATE_TIME_SIZE];
} APPL_PROC_T;

typedef struct 
{
	char authbyuserid[USER_ID_SIZE];
	char rvrsdatetime[DATE_TIME_SIZE];
	int paymserno;
} PAYMENT_T;

typedef struct 
{
	char procind[PROCESS_IND_SIZE];
	int txnserno;
	int problserno;
	char problreasoncode[REASON_CODE_SIZE];
	char formname[FORM_NAME_SIZE];
	char gscbupdflag;
	char remarks[SUPVR_REMARKS_SIZE];
	char userid[USER_ID_SIZE];
	char wsid[WS_ID_SIZE];
	char timestamp[DATE_TIME_SIZE];
}SUPVR_REMARKS_T;

typedef struct
{
	int procserno;
	char appldate[DATE_SIZE];
	char applstat;
	char kptno[KPT_SIZE];
	char currlongname[LONG_NAME_SIZE];
	char cancelcode[CANCEL_CODE_SIZE];
	char canceldate[DATE_SIZE];
	char branchcode[BRANCH_CODE_SIZE];
	char userid[USER_ID_SIZE];
	char wsid[WS_ID_SIZE];
	char timestamp[DATE_TIME_SIZE];
}APPL_HISTORY_T;

typedef struct application_s
{
	char appldate[DATE_SIZE];
	char applstat;
	int appl_priority;
	int proc_srno;
	char date_arrival[DATE_SIZE];
	char date_approval[DATE_SIZE];
	char relation_code[RELATION_CODE_SIZE];
	char temp_id[ID_SIZE];
	char owner_cat;
	char kpt_no[KPT_SIZE];
	char coll_center[BRANCH_CODE_SIZE];
	char coll_kptno[KPT_SIZE];
	char id_type[ID_TYPE_SIZE];
	char id_no[ID_SIZE];
	char lic_id_type[ID_TYPE_SIZE];
	char lic_id_no[LIC_ID_SIZE];
	char appl_remarks[REMARK_SIZE];
	char supvr_notes[SUPERVISOR_NOTE_SIZE];
	char district_code[DIST_CODE_SIZE];
	char appl_cancel_date[DATE_TIME_SIZE];
	char cancel_code[CANCEL_CODE_SIZE];
	char branch_code[BRANCH_CODE_SIZE];
	char user_id[USER_ID_SIZE];
	char wsid[WS_ID_SIZE];
	char timestamp[DATE_TIME_SIZE];
	long qticket;
	char appl_stage[APPL_STAGE_SIZE];
	char lost_receipt_flag;
	char qc_flag;
	char missed_opex_flag;
	char summ_ind;
	int card_version;
	char sponsor_id_type[ID_TYPE_SIZE];
	char sponsor_id[ID_SIZE];
	char ssc_branch_code[BRANCH_CODE_SIZE];
	char gender;
	char photo_capture;
	char summ_pay_ind;
	char loss_card_ind;
	char card_coll_date[DATE_SIZE];
	char birth_date[DATE_SIZE];
	char agency_chip[AGENCY_ON_CHIP_SIZE];
	char new_owner_cat;
}TERMINATE_APPL_T;

typedef struct
{
	int txnserno;
	char fee_type[FEE_TYPE_SIZE];
	float fee_amount;
	long agency_rev_code;
}APPL_TXN_FEE_T;

typedef struct
{
	int txnserno;
	char summons_no[SUMMON_NO_SIZE];
	char summons_date[DATE_TIME_SIZE];
	float summons_amt;
	char offence_cat[OFFENCE_CAT_SIZE];
	long agency_rev_code;
	char summon_by_agent;
	char summon_type;
	char summon_issued_code[SUMMON_ISSUE_CODE_SIZE];
	char issued_branch_code[BRANCH_CODE_SIZE];
	char summon_district[DISTRICT_SIZE];
	char device[DEVICE_SIZE];
	char pdrm_receipt_no[PDRM_RECEIPT_NO_SIZE];
}APPL_TXN_SUMMONS_T;

typedef struct
{
	int txnserno;
	int payserno;
}OLD_TXN_T;

typedef struct
{
	HEADER_T header;
} TERMINATE_APPL_RESP_T;


#endif //__TERMINATE_APPL_IO_H__
