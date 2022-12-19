/* $Header:   F:/PVCS_GMPC/archives/GSCB_SERVICES/COMMON_FILES/gscblog.h-arc   1.0   Aug 20 2003 09:52:32   ShivamP  $*/

/********************************************************************/
/* File Name   : gscblog.h                                          */
/* Author      : Amit Sangrulkar, Bakul Waghmare                    */
/* Description : This file contains structures and prototypes of    */
/*               functions required for logging by all services.    */
/********************************************************************/
#ifndef _GSCBLOG_
#define _GSCBLOG_

/* Structure for transaction log */

typedef struct txn_log
{
	char application_id[APP_ID_SIZE];			/* Application ID */
	char branch_code[BRANCH_CODE_SIZE];
	char user_id[USER_ID_SIZE];
	char workstation_id[WS_ID_SIZE];
	char kpt_no[KPT_SIZE];
	char txn_code[TRANSACTION_CODE_SIZE];
	char txn_date[DATE_TIME_SIZE];		/* Format should be DDMMYYYY HHMISS */
	char txn_status;
} TXN_LOG_T;


/* Structure for program access log */

typedef struct prog_access_log
{
	char application_id[APP_ID_SIZE];
	char branch_code[BRANCH_CODE_SIZE];
	char user_id[USER_ID_SIZE];
	char workstation_id[WS_ID_SIZE];
	char program_id[PROG_ID_SIZE];	/* The service id in which the error occurred */
	char access_start_time[DATE_TIME_SIZE];  /* Format should be DDMMYYYY HHMISS */
	char access_end_time[DATE_TIME_SIZE];  /* Format should be DDMMYYYY HHMISS */
	char remarks[LOG_REMARK_SIZE];	/* Comments indicating service initiation or
										  Successful/Unsuccessful completion of the service */
} PROG_ACCESS_LOG_T;


/* Structure for application exception log */

typedef struct appl_excep_log
{
	char application_id[APP_ID_SIZE];
	char branch_code[BRANCH_CODE_SIZE];
	char user_id[USER_ID_SIZE];
	char workstation_id[WS_ID_SIZE];
	char program_id[PROG_ID_SIZE];	/* The service in which the error occurred */
	char error_date[DATE_TIME_SIZE];   /* Format should be DDMMYYYY HHMISS */
	char severity;					/* F-Fatal, N-Non Fatal, W-Warning */
	char error_msg[ERROR_MSG_SIZE];	/* Additional comments indicating 
										  details of the error */
	char termination_flag;		/* Y -  Yes, N -No */
} APPL_EXCEP_LOG_T;

#if defined(__cplusplus)
extern "C" {
#endif

/* Global variables for logging */
#ifdef LOG_DEFINED
	extern APPL_EXCEP_LOG_T excep_log;
	extern PROG_ACCESS_LOG_T prog_log;
	extern TXN_LOG_T tran_log;
#endif

/* Function prototypes for logging */

int appl_excep_log();
int prog_access_log();
int txn_log();
void get_file_name(char *, char );
void log_exit();
void log_error();

#if defined(__cplusplus)
}
#endif

#endif

