
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[13];
};
static const struct sqlcxp sqlfpn =
{
    12,
    ".\\gscblog.pc"
};


static unsigned int sqlctx = 263491;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
            void  *sqhstv[9];
   unsigned int   sqhstl[9];
            int   sqhsts[9];
            void  *sqindv[9];
            int   sqinds[9];
   unsigned int   sqharm[9];
   unsigned int   *sqharc[9];
   unsigned short  sqadto[9];
   unsigned short  sqtdso[9];
} sqlstm = {12,9};

// Prototypes
extern "C" {
  void sqlcxt (void **, unsigned int *,
               struct sqlexd *, const struct sqlcxp *);
  void sqlcx2t(void **, unsigned int *,
               struct sqlexd *, const struct sqlcxp *);
  void sqlbuft(void **, char *);
  void sqlgs2t(void **, char *);
  void sqlorat(void **, unsigned int *, void *);
}

// Forms Interface
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern "C" { void sqliem(char *, int *); }

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4274,178,0,0,
5,0,0,1,238,0,3,233,0,0,9,9,0,1,0,1,97,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,1,9,0,0,1,1,0,0,1,1,0,0,
56,0,0,2,247,0,3,390,0,0,8,8,0,1,0,1,97,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,
103,0,0,3,218,0,3,530,0,0,8,8,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,
};


/* $Header$ */

/****************************************************************************/
/* File Name   : gscblog.pc										            */
/* Author      : Sangeeta Natu, Amit Sangrulkar, Bakul Waghmare				*/
/* Description : This file contains common functions required for			*/
/*               logging by all services.									*/
/****************************************************************************/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <sqlca.h>



#define LOG_DEFINED    /* To define global variables used for logging */
#include "gscbdef.h"
#include "gscblog.h"
#include "gscbio.h"

extern "C" void userlog(char* szFormatString, ...);

//extern  PROG_ACCESS_LOG_T prog_log;
//extern  APPL_EXCEP_LOG_T excep_log;
//extern  TXN_LOG_T tran_log;

PROG_ACCESS_LOG_T prog_log;
APPL_EXCEP_LOG_T excep_log;
TXN_LOG_T tran_log;

/************************************************************************/
/* Function Name  : log_error()											*/
/* Input		  :	A structure containing details to be logged into	*/
/*					PROGRAM_ACCESS_LOG table.				  			*/
/*	                A structure containing details to be logged into	*/
/*					APPL_EXCEPTION_LOG table.					        */
/*																     	*/
/* Description   : This function is used to call the standard logging   */
/*                 functions in case of errors				            */
/*																		*/				   
/* Return Values : No Return Value										*/
/* Limitations   : None													*/
/************************************************************************/
void log_error(void * ctx)
{
	int ret_code;
	char curr_date_time[DATE_TIME_SIZE] = "";


	/* Rollback the current transaction	*/
	if(FAILURE == gscbrollback_trans(ctx))
	{
		userlog("log_error: %s", excep_log.error_msg);
		return;
	}

	/* Begin a new transaction	*/
	if(FAILURE == gscbbegin_trans(ctx))
	{
		userlog("log_error: %s", excep_log.error_msg);
		return;
	}

	/* Log in Application exception log table */
	if(FAILURE == (ret_code = appl_excep_log(ctx)))
	{
		/* Whether the rollback fails or not the logging	*/
		/* is to be done into the userlog					*/
		gscbrollback_trans(ctx);

#ifdef DEBUG
		userlog("log_error : Return code from appl_excep_log : %d\n", ret_code);	 
#endif
		userlog("log_error: %s", excep_log.error_msg);
		return;
	}

	if(YES == excep_log.termination_flag)
	{
		/* Get current date-time for logging */
		strcpy(curr_date_time, get_date_time());
		strcpy(prog_log.access_end_time, curr_date_time);

		/* Log in Program access log table */
		if(FAILURE == (ret_code = prog_access_log(ctx)))
		{
			gscbrollback_trans(ctx);

#ifdef DEBUG
			userlog("log_error : Return code from prog_access_log : %d\n", ret_code);
#endif
			userlog("log_error: %s", excep_log.error_msg);
			userlog("log_error: %s\n", prog_log.remarks);
			return;
		}
	}

	if(FAILURE == (ret_code = gscbcommit_trans(ctx)))
	{
#ifdef DEBUG
			userlog("log_error : Return code from prog_access_log : %d\n", ret_code);
#endif
			userlog("log_error: %s", excep_log.error_msg);
			userlog("log_error: %s\n", prog_log.remarks);
			return;
	}
}

/********************************************************************/
/* Function Name : appl_excep_log()                                 */
/* Input         : Structure containing error details to be logged  */                                                 
/* Description   : This function is used to log the details of      */
/*                 errors into the APPL_EXECPT_LOG table            */
/* Return Values : SUCCESS / FAILURE                                */
/* Limitations   : None                                             */
/********************************************************************/
int appl_excep_log(void * ctx)
{

	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char application_id[APP_ID_SIZE];
	/* varchar branch_code[BRANCH_CODE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[7]; } branch_code;

	/* varchar user_id[USER_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id;

	/* varchar workstation_id[WS_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } workstation_id;

	/* varchar program_id[PROG_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } program_id;
	
	/* varchar error_date[DATE_TIME_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } error_date;
 /* Format should be DDMMYYYY HHMISS */

	char severity;						/* F-Fatal, N-Non Fatal, W-Warning	*/

	/* varchar error_msg[ERROR_MSG_SIZE]; */ 
struct { unsigned short len; unsigned char arr[201]; } error_msg;
	/* Additional comments indicating	*/
										/* details of the error				*/

	char termination_flag;				/* Y -Yes, N -No */

	short int application_id_ind = -1;
	short int branch_code_ind = -1;
	short int user_id_ind = -1;	
	short int workstation_id_ind = -1;
	short int program_id_ind = -1;
	short int error_date_ind = -1;
	short int severity_ind = -1;
	short int error_msg_ind = -1;
	short int termination_flag_ind = -1;
	sql_context pcCtx;
	/* EXEC SQL END DECLARE SECTION; */ 
  

	FILE * logfp = NULL;		/* File pointer for logging into a log file */
	char filename[FILENAME_SIZE];
	char log_flag = 'A';
	
	/* Make sure message doesnt exceed ERROR_MSG_SIZE */	
	excep_log.error_msg[ERROR_MSG_SIZE - 1] = '\0';

	pcCtx = ctx; 
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
 	

	

#ifdef DEBUG
	userlog("Input data\n");
	userlog("appl_excep_log : Application id -  %s\n", excep_log.application_id);
	userlog("appl_excep_log : Branch code - %s\n", excep_log.branch_code);
	userlog("appl_excep_log : User Id - %s\n", excep_log.user_id);	
	userlog("appl_excep_log : Workstation id - %s\n", excep_log.workstation_id);
	userlog("appl_excep_log : Program id - %s\n", excep_log.program_id);	
	userlog("appl_excep_log : Error date - %s\n", excep_log.error_date);	
	userlog("appl_excep_log : Severity - %c\n", excep_log.severity);
	userlog("appl_excep_log : error_msg - %s\n", excep_log.error_msg);
	userlog("appl_excep_log : Termination Flag - %c\n", excep_log.termination_flag);
#endif
	
	/* Copy data into host variables */
	if (excep_log.application_id[0] != '\0')
	{		
		strcpy(application_id, excep_log.application_id);
		application_id_ind = 0;
	}

	if (excep_log.branch_code[0] != '\0')
	{
		strcpy((char *)branch_code.arr, excep_log.branch_code);
		branch_code_ind = 0;
		setlen(branch_code);
	}

	if (excep_log.user_id[0] != '\0')
	{
		strcpy((char *)user_id.arr, excep_log.user_id); 
		user_id_ind = 0;
		setlen(user_id);
	}

	if (excep_log.workstation_id[0] != '\0')
	{
		strcpy((char *)workstation_id.arr, excep_log.workstation_id);
		workstation_id_ind =0;
		setlen(workstation_id);
	}

	if (excep_log.program_id[0] != '\0')
	{
		strcpy((char *)program_id.arr, excep_log.program_id);
		program_id_ind =0;
		setlen(program_id);
	}

	if (excep_log.error_date[0] != '\0')
	{
		strcpy((char *)error_date.arr, excep_log.error_date);
		error_date_ind =0;
		setlen(error_date);
	}

	if (excep_log.severity != '\0')
	{
		severity =  excep_log.severity;
		severity_ind =0;
	}

	if (excep_log.error_msg[0] != '\0')
	{
		strcpy((char *)error_msg.arr, excep_log.error_msg);
		error_msg_ind =0;
		setlen(error_msg);
	}

	if (excep_log.termination_flag != '\0')
	{
		termination_flag = excep_log.termination_flag;
		termination_flag_ind =0;
	}

	
	/* EXEC SQL INSERT INTO APPL_EXCEPT_LOG (APPLID, PROGRAMID, BRANCHCODE, WSID, TIMESTAMP,
			 PROGRAMINITIATOR, ERRORMSG, SEVERITYCODE, PROGRAMTERMFLAG )
			 VALUES ( :application_id:application_id_ind, :program_id:program_id_ind,
			 :branch_code:branch_code_ind, :workstation_id:workstation_id_ind, 
			 TO_DATE(:error_date:error_date_ind, 'DDMMYYYY HH24MISS'), 
			 :user_id:user_id_ind, :error_msg:error_msg_ind, 
			 :severity:severity_ind, :termination_flag:termination_flag_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into APPL_EXCEPT_LOG (APPLID,PROGRAMID,BRANCHCODE,WSI\
D, timestamp ,PROGRAMINITIATOR,ERRORMSG,SEVERITYCODE,PROGRAMTERMFLAG) values (\
:b0:b1,:b2:b3,:b4:b5,:b6:b7,TO_DATE(:b8:b9,'DDMMYYYY HH24MISS'),:b10:b11,:b12:\
b13,:b14:b15,:b16:b17)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )5;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)application_id;
 sqlstm.sqhstl[0] = (unsigned int  )20;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&application_id_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&program_id;
 sqlstm.sqhstl[1] = (unsigned int  )11;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&program_id_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&branch_code;
 sqlstm.sqhstl[2] = (unsigned int  )9;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&branch_code_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&workstation_id;
 sqlstm.sqhstl[3] = (unsigned int  )18;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&workstation_id_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&error_date;
 sqlstm.sqhstl[4] = (unsigned int  )18;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&error_date_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&user_id;
 sqlstm.sqhstl[5] = (unsigned int  )11;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&user_id_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&error_msg;
 sqlstm.sqhstl[6] = (unsigned int  )203;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&error_msg_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&severity;
 sqlstm.sqhstl[7] = (unsigned int  )1;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&severity_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&termination_flag;
 sqlstm.sqhstl[8] = (unsigned int  )1;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&termination_flag_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


			 

	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("appl_excep_log: Failed to insert record into APPL_EXCEPT_LOG: %s\n", SQLMSG);
#endif

		/* Log the error in the appl_exception_log file */
		get_file_name(filename, log_flag);
		logfp = fopen(filename, "a");

		if (logfp == NULL)
			return FAILURE;			
		else
		{
			/* Log the error in the following format :
			< Application id>:<Program Id>:< Error date>:<error_msg>:<Branch code>:<Program Initiator>:<Workstation Id>:<Severity>:<Termination flag> */

			if((fprintf(logfp, "%s:%s:%s:%s:%s:%s:%s:%c:%c\n", 
				excep_log.application_id, excep_log.program_id, 
				excep_log.error_date, excep_log.error_msg, 
				excep_log.branch_code, excep_log.workstation_id, 
				excep_log.user_id, excep_log.severity, 
				excep_log.termination_flag)) != 0)
			{
				fclose(logfp); 
				return FAILURE;
			}
			else
			{
				fclose(logfp); 
				return SUCCESS;
			}
		}
	}

	return SUCCESS;
}


/********************************************************************/
/* Function Name : prog_access_log()                                */
/* Input         :                                                  */
/*                 Structure containing information required to log */
/*                 details of the program / service being executed  */
/* Description   : This function is used to log the details of      */
/*                 program / service being executed into the        */
/*                 PROGRAM_ACCESS_LOG table                         */
/* Return Values : SUCCESS / FAILURE                                */
/* Limitations   : None                                             */
/********************************************************************/
int prog_access_log(void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char application_id[APP_ID_SIZE];
	/* varchar branch_code[BRANCH_CODE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[7]; } branch_code;

	/* varchar user_id[USER_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id;

	/* varchar workstation_id[WS_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } workstation_id;

	/* varchar program_id[PROG_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } program_id;
			/* The service id in which the error occurred	*/

	/* varchar access_start_time[DATE_TIME_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } access_start_time;
  /* Format should be DDMMYYYY HHMISS				*/

	/* varchar access_end_time[DATE_TIME_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } access_end_time;
	/* Format should be DDMMYYYY HHMISS				*/

	/* varchar remarks[LOG_REMARK_SIZE]; */ 
struct { unsigned short len; unsigned char arr[81]; } remarks;
			/* Comments indicating service  initiation or	*/
												/* Successful/Unsuccessful completion of the	*/
												/* service										*/
	short int application_id_ind = -1;
	short int branch_code_ind = -1;
	short int user_id_ind = -1;	
	short int workstation_id_ind = -1;
	short int program_id_ind = -1;
	short int access_start_time_ind = -1;
	short int access_end_time_ind = -1;
	short int remarks_ind = -1;
	sql_context pcCtx; 
	/* EXEC SQL END DECLARE SECTION; */ 
  

	FILE * logfp = NULL;		/* File pointer for logging into a log file */
	char filename[FILENAME_SIZE];
	char log_flag = 'P';

	/* Make sure message doesnt exceed LOG_REMARK_SIZE */	
	prog_log.remarks[LOG_REMARK_SIZE - 1] = '\0';	

	pcCtx = ctx; 
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
 	



	/* Copy data into host variables */
	if (prog_log.application_id[0] != '\0')
	{		
		strcpy(application_id, prog_log.application_id);
		application_id_ind = 0;
		
	}

	if (prog_log.branch_code[0] != '\0')
	{
		strcpy((char *)branch_code.arr, prog_log.branch_code);
		branch_code_ind = 0;
		setlen(branch_code);
	}

	if (prog_log.user_id[0] != '\0')
	{
		strcpy((char *)user_id.arr, prog_log.user_id); 
		user_id_ind = 0;
		setlen(user_id);
	}

	if (prog_log.workstation_id[0] != '\0')
	{
		strcpy((char *)workstation_id.arr, prog_log.workstation_id);
		workstation_id_ind =0;
		setlen(workstation_id);
	}

	if (prog_log.program_id[0] != '\0')
	{
		strcpy((char *)program_id.arr, prog_log.program_id);
		program_id_ind =0;
		setlen(program_id);
	}

	if (prog_log.access_start_time[0] != '\0')
	{
		strcpy((char *)access_start_time.arr, prog_log.access_start_time);
		access_start_time_ind =0;
		setlen(access_start_time);
	}

	if (prog_log.access_end_time[0] != '\0')
	{
		strcpy((char *)access_end_time.arr, prog_log.access_end_time);
		access_end_time_ind =0;
		setlen(access_end_time);
	}

	if (prog_log.remarks[0] != '\0')
	{
		strcpy((char *)remarks.arr, prog_log.remarks);
		remarks_ind =0;
		setlen(remarks);
	}

		
	/* EXEC SQL INSERT INTO PROGRAM_ACCESS_LOG (APPLID, ACCESSSTARTDATETIME, 
			 ACCESSENDDATETIME, PROGRAMID, REMARKS, BRANCHCODE, USERID, WSID)
			 VALUES ( :application_id:application_id_ind, 
			 TO_DATE(:access_start_time:access_start_time_ind, 'DDMMYYYY HH24MISS'),
			 TO_DATE(:access_end_time:access_end_time_ind, 'DDMMYYYY HH24MISS'),
			 :program_id:program_id_ind, :remarks:remarks_ind, 
			 :branch_code:branch_code_ind, :user_id:user_id_ind, 
			 :workstation_id:workstation_id_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into PROGRAM_ACCESS_LOG (APPLID,ACCESSSTARTDATETIME,A\
CCESSENDDATETIME,PROGRAMID,REMARKS,BRANCHCODE,USERID,WSID) values (:b0:b1,TO_D\
ATE(:b2:b3,'DDMMYYYY HH24MISS'),TO_DATE(:b4:b5,'DDMMYYYY HH24MISS'),:b6:b7,:b8\
:b9,:b10:b11,:b12:b13,:b14:b15)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )56;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)application_id;
 sqlstm.sqhstl[0] = (unsigned int  )20;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&application_id_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&access_start_time;
 sqlstm.sqhstl[1] = (unsigned int  )18;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&access_start_time_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&access_end_time;
 sqlstm.sqhstl[2] = (unsigned int  )18;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&access_end_time_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&program_id;
 sqlstm.sqhstl[3] = (unsigned int  )11;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&program_id_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&remarks;
 sqlstm.sqhstl[4] = (unsigned int  )83;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&remarks_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&branch_code;
 sqlstm.sqhstl[5] = (unsigned int  )9;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&branch_code_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&user_id;
 sqlstm.sqhstl[6] = (unsigned int  )11;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&user_id_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&workstation_id;
 sqlstm.sqhstl[7] = (unsigned int  )18;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&workstation_id_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


	
	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("prog_access_log: Failed to insert record into PROGRAM_ACCESS_LOG: %s\n", SQLMSG);
#endif

		/* Log the error in the program_access_log file */
		get_file_name(filename, log_flag);

		logfp = fopen(filename, "a");
		if (logfp == NULL)
			return FAILURE;
		else
		{
			/* Log the error in the following format :
			< Application id>:< Access start date>:<Access end date>:<Program Id>:<Remarks>:<Branch code>:<Program Initiator>:<Workstation Id>*/


			if((fprintf(logfp, "%s:%s:%s:%s:%s:%s:%s:%s\n", prog_log.application_id, prog_log.access_start_time,access_end_time.arr, prog_log.program_id,
				prog_log.remarks, prog_log.branch_code, prog_log.user_id, workstation_id.arr)) != 0)				
			{
				fclose(logfp);  
				return FAILURE;
			}
			else
			{
				fclose(logfp);  
				return SUCCESS;
			}
		}
	}

	return SUCCESS;
}


/********************************************************************/
/* Function Name : txn_log()                                        */
/* Input         :                                                  */
/*                 Structure containing information required to log */
/*                 details of a transaction                         */
/* Description   : This function is used to log the details of the  */
/*                 transaction in progress into the APPL_TXN_LOG    */
/*                 table                                            */
/* Return Values : SUCCESS / FAILURE                                */
/* Limitations   : None                                             */
/********************************************************************/
//int txn_log(TXN_LOG_T tran_log,void * ctx)
int txn_log(void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar application_id[APP_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[20]; } application_id;
			
	/* varchar branch_code[BRANCH_CODE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[7]; } branch_code;

	/* varchar user_id[USER_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id;

	/* varchar workstation_id[WS_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } workstation_id;

	/* varchar kpt_no[KPT_SIZE]; */ 
struct { unsigned short len; unsigned char arr[13]; } kpt_no;

	/* varchar txn_code[TRANSACTION_CODE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[4]; } txn_code;

	/* varchar txn_date[DATE_TIME_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } txn_date;
		/* Format should be DDMMYYYY HHMISS	*/


	short int application_id_ind;
	short int branch_code_ind;
	short int user_id_ind;	
	short int workstation_id_ind;
	short int kpt_no_ind;
	short int txn_code_ind;
	short int txn_date_ind;
	sql_context pcCtx; 
	/* EXEC SQL END DECLARE SECTION; */ 
  

	FILE * logfp = NULL;		/* File pointer for logging into a log file	*/
	char filename[FILENAME_SIZE];
	char log_flag = 'T';

	pcCtx = ctx; 
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
 	



	/* Copy data into host variables */
	if (tran_log.application_id[0] != '\0')
	{		
		strcpy((char *)application_id.arr, tran_log.application_id);
		application_id_ind = 0;
		setlen(application_id);
	}

	if (tran_log.branch_code[0] != '\0')
	{
		strcpy((char *)branch_code.arr, tran_log.branch_code);
		branch_code_ind = 0;
		setlen(branch_code);
	}

	if (tran_log.user_id[0] != '\0')
	{
		strcpy((char *)user_id.arr, tran_log.user_id); 
		user_id_ind = 0;
		setlen(user_id);
	}

	if (tran_log.workstation_id[0] != '\0')
	{
		strcpy((char *)workstation_id.arr, tran_log.workstation_id);
		workstation_id_ind =0;
		setlen(workstation_id);
	}

	if (tran_log.kpt_no[0] != '\0')
	{
		strcpy((char *)kpt_no.arr, tran_log.kpt_no);
		kpt_no_ind =0;
		setlen(kpt_no);
	}

	if (tran_log.txn_code[0] != '\0')
	{
		strcpy((char *)txn_code.arr, tran_log.txn_code);
		txn_code_ind =0;
		setlen(txn_code);
	}

	if (tran_log.txn_date[0] != '\0')
	{
		strcpy((char *)txn_date.arr, tran_log.txn_date);
		txn_date_ind =0;
		setlen(txn_date);
	}
	
	
	/* EXEC SQL INSERT INTO APPL_TXN_LOG (APPLID, KPTNO, TXNCODE, TXNDATE, 
			 BRANCHCODE, USERID, WSID, TIMESTAMP) VALUES 
			 ( :application_id:application_id_ind, :kpt_no:kpt_no_ind, 
			 :txn_code:txn_code_ind, 
			 TO_DATE(:txn_date:txn_date_ind, 'DDMMYYYY HH24MISS'), 
			 :branch_code:branch_code_ind, :user_id:user_id_ind, 
			 :workstation_id:workstation_id_ind, 
			 TO_DATE(:txn_date:txn_date_ind, 'DDMMYYYY HH24MISS')); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into APPL_TXN_LOG (APPLID,KPTNO,TXNCODE,TXNDATE,BRANC\
HCODE,USERID,WSID, timestamp ) values (:b0:b1,:b2:b3,:b4:b5,TO_DATE(:b6:b7,'DD\
MMYYYY HH24MISS'),:b8:b9,:b10:b11,:b12:b13,TO_DATE(:b6:b15,'DDMMYYYY HH24MISS'\
))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )103;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&application_id;
 sqlstm.sqhstl[0] = (unsigned int  )22;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&application_id_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&kpt_no;
 sqlstm.sqhstl[1] = (unsigned int  )15;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&kpt_no_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&txn_code;
 sqlstm.sqhstl[2] = (unsigned int  )6;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&txn_code_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&txn_date;
 sqlstm.sqhstl[3] = (unsigned int  )18;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&txn_date_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&branch_code;
 sqlstm.sqhstl[4] = (unsigned int  )9;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&branch_code_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&user_id;
 sqlstm.sqhstl[5] = (unsigned int  )11;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&user_id_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&workstation_id;
 sqlstm.sqhstl[6] = (unsigned int  )18;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&workstation_id_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&txn_date;
 sqlstm.sqhstl[7] = (unsigned int  )18;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&txn_date_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog ("txn_log: Failed to insert record into APPL_TXN_LOG: %s\n", SQLMSG);
#endif

		/* Log the error in the txn_log file */
		get_file_name(filename, log_flag);

		logfp = fopen(filename, "a");
		if (logfp == NULL)
			return FAILURE;
		else
		{
			/* Log the error in the following format :
			<AppID>:<KptNo>:<TxnCode>:<TxnDate>:<Branch code>:<UserID>:<WorkstationId>:<Timestamp> */

			if((fprintf(logfp, "%s:%s:%s:%s:%s:%s:%s:%s\n", tran_log.application_id, tran_log.kpt_no, tran_log.txn_code, tran_log.txn_date, tran_log.branch_code, tran_log.user_id, 
					tran_log.workstation_id, tran_log.txn_date)) != 0)
			{
				fclose(logfp);  
				return FAILURE;
			}
			else
			{
				fclose(logfp);
				return SUCCESS;
			}
		}
	}

	return SUCCESS;
}

/************************************************************************/
/* Function Name : get_file_name()										*/
/* Input		 : log flag indicating in which table logging is        */
/*                 occuring											    */
/*																     	*/
/* Description   : This function is used to construct the file name in  */
/*                 which logging is to be done if logging in database   */
/*                 fails                                                */
/*																		*/				   
/* Return Values : File name     										*/
/* Limitations   : None													*/
/************************************************************************/
void get_file_name(char *filename, char log_flag)
{
	struct sqlca sqlca = {0};
	char today[DATE_SIZE];

	/* Construct the file name using current date */
	strcpy(today, get_date());
	strcpy(filename, LOG_PATH);	/* Copy the path for logging */
	strcat(filename, today);

	if (log_flag == 'A')
	{
		strcat(filename, "_excep");
		strcat(filename,".log");
	}
	else if (log_flag == 'P')
	{
		strcat(filename, "_program");
		strcat(filename,".log");
	}

	return;
}

/************************************************************************/
/* Function Name : log_exit()											*/
/* Input		 : None												    */
/* Description   : This function is used to log successful exit of		*/
/*				   a service											*/
/* Return Values : None		     										*/
/* Limitations   : None													*/
/************************************************************************/
void log_exit(void * ctx)
{

	int ret_code;
	char curr_date_time[DATE_TIME_SIZE] = "";


	/* Begin a new transaction	*/
	if(FAILURE == gscbbegin_trans(ctx))
	{
		userlog("log_error: %s", prog_log.remarks);
		return;
	}

	/* Get current date-time for logging */
	strcpy(curr_date_time, get_date_time());
	strcpy(prog_log.access_end_time, curr_date_time);

	/* Log in Program access log table */
	if(FAILURE == (ret_code = prog_access_log(ctx)))
	{
		gscbrollback_trans(ctx);

#ifdef DEBUG
		userlog("log_error : Return code from prog_access_log : %d\n", ret_code);
#endif
		userlog("log_error: %s\n", prog_log.remarks);
		return;
	}

	if(FAILURE == (ret_code = gscbcommit_trans(ctx)))
	{
#ifdef DEBUG
			userlog("log_error : Return code from prog_access_log : %d\n", ret_code);
#endif
			userlog("log_error: %s\n", prog_log.remarks);
			return;
	}
}
