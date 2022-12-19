/* $Header:   F:/GSCBProjectDb/archives/CIS/GSCB/VERIFY_APPNT/verify_appnt_io.h-arc   1.7   Feb 13 2001 17:17:14   Administrator  $ */
/********************************************************************************/
/* Filename    : verify_appnt_io.h												*/
/* Author      : Amit Sangrulkar												*/
/* Description : This file contains the structures for I/O buffers for the		*/
/*				 service VERIFY_APPNT.											*/
/********************************************************************************/

#ifndef _VERIFY_APPNT_IO_
#define _VERIFY_APPNT_IO_
#define APPLREMARKS_SIZE  151

typedef struct verify_appnt_request
{
	HEADER_T header;
	char applicant_id[ID_SIZE];
	int applicant_id_type;
	long card_ver_no;
	int transaction_type;
	char transaction_code[TRANSACTION_CODE_SIZE];
} VERIFY_APPNT_REQ_T; 


typedef struct verify_appnt_response
{
	HEADER_T header;
	/* This indicates the reason for failure of IQC check if != GMPC_GOOD	*/
	int reason_code;
	/* This indicates presence of the issuance structure in the		*/
	/* response buffer, 0 - indicates false and 1 - indicates true	*/				
	int issuance;
	int card_version_no;
	char agency_on_chip[AGENCY_ON_CHIP_SIZE];
	char application_id[APP_ID_SIZE];
	char application_status;
	int priority;
	int process_serial_no;
	char application_date[DATE_SIZE];
	int max_txn_serial_no;
	char applremarks[APPLREMARKS_SIZE]; /* Added on 18 FEB 2005 for IJPN */
} VERIFY_APPNT_RESP_T;

typedef struct appl_txn_s
{
	int txn_serial_no;
	char txn_code[TRANSACTION_CODE_SIZE];
	char txn_date[DATE_SIZE];
	int pay_serial_no;
}APPL_TXN;

typedef struct issuance_resp
{
	char collection_center[BRANCH_CODE_SIZE];
	char kpt_no[KPT_SIZE];
	int card_version_no;
	int card_status;
	char branch_code[BRANCH_CODE_SIZE];
	char user_id[USER_ID_SIZE];
	char workstation_id[WS_ID_SIZE];
	APPL_TXN appl_txn;
} ISSUANCE_RESP_T;

 
#endif /* #ifndef _VERIFY_APPNT_IO_ */




