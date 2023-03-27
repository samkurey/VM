
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
           char  filnam[22];
};
static const struct sqlcxp sqlfpn =
{
    21,
    ".\\Jpnhg3PymtEnq_DB.pc"
};


static unsigned int sqlctx = 136075275;


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
            void  *sqhstv[26];
   unsigned int   sqhstl[26];
            int   sqhsts[26];
            void  *sqindv[26];
            int   sqinds[26];
   unsigned int   sqharm[26];
   unsigned int   *sqharc[26];
   unsigned short  sqadto[26];
   unsigned short  sqtdso[26];
} sqlstm = {12,26};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(char *, int *);

 static const char *sq0011 = 
"select APPLID ,OLDAPPLID ,TXNSERNO ,IDTYPE ,IDNO ,GMPCNAME ,CARDLOSTCNT ,LOS\
TRSNCODE ,CF ,TO_CHAR(APPEALDATE,'DDMMYYYY HH24MISS') ,APPEALBRANCH ,APPEALUSE\
RID ,APPEALREMARK ,APPEALPERCENT ,AMTTOPAY ,APPEALSTATUS ,SSCBRANCH ,SSCUSERID\
 ,SSCWSID ,TO_CHAR(SSCDATETIME,'DDMMYYYY HH24MISS') ,SSCREMARK ,PAYRECEIPT ,PA\
YBRANCH ,PAYUSERID ,TO_CHAR(PAYDATETIME,'DDMMYYYY HH24MISS')  from USK_COMPOUN\
D_FEE where OLDAPPLID=:b0           ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4274,178,0,0,
5,0,0,1,101,0,4,164,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
28,0,0,2,72,0,4,173,0,0,2,1,0,1,0,2,3,0,0,1,9,0,0,
51,0,0,3,88,0,4,180,0,0,2,1,0,1,0,2,1,0,0,1,9,0,0,
74,0,0,4,101,0,4,369,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
97,0,0,5,613,0,4,413,0,0,26,1,0,1,0,2,3,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
3,0,0,2,1,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,9,0,0,2,9,0,0,2,1,0,0,2,1,0,0,2,1,0,0,2,1,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,
0,1,9,0,0,
216,0,0,6,200,0,4,521,0,0,5,2,0,1,0,2,3,0,0,2,4,0,0,2,3,0,0,1,9,0,0,1,9,0,0,
251,0,0,7,61,0,4,567,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
274,0,0,8,203,0,4,595,0,0,8,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,2,3,0,0,1,9,0,0,
321,0,0,9,101,0,4,776,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
344,0,0,10,72,0,4,819,0,0,2,1,0,1,0,2,3,0,0,1,9,0,0,
367,0,0,11,424,0,9,865,0,0,1,1,0,1,0,1,9,0,0,
386,0,0,11,0,0,13,891,0,0,25,0,0,1,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,2,3,0,0,2,9,0,0,2,4,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,4,0,0,2,4,0,0,
2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,
0,
501,0,0,11,0,0,15,909,0,0,0,0,0,1,0,
516,0,0,11,0,0,15,976,0,0,0,0,0,1,0,
};


/* $Header$ */
/***************************************************************/
/* Filename		:jpnhg3PymtEnq_DB.pc		                   */
/* Author		:Srinivasa Reddy   					           */
/* Description	:This file has all database functions          */
/*				 required for the service JPNHG3_PYMT_ENQ      */
/***************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sqlca.h>

#define LOG_DEFINED
//#include "field_id.h"
#include "gscbdef.h"
#include "gscbio.h"
#include "gscblog.h"
#include "gscblookupdef.h"

#include "kPPdef.h"
#include "KPPStruct.h"
#include "kPPproto.h"
#include "userlog.h"

#include "jpnhg3_pymt_enq_io.h"
#include "jpnhg3_pymt_enq.h"


APPL_EXCEP_LOG_T excep_log = { {""},{""},{""},{""},{""},{""}, 0,{""}} ;
PROG_ACCESS_LOG_T prog_log = { {""},{""},{""},{""},{""},{""},{""},{""} };
TXN_LOG_T tran_log;
READ_REG_GENERIC_T gen_reg;

//extern userlog(const char *, ...);


char sqlmsg[SQL_MSG_SIZE] = {"\0"};



int Jpnhg3_Pymt_Enq(JPNHG3_PYMT_ENQ_REQ_T *pReq, 
					JPNHG3_PYMT_ENQ_RESP_T **pResp, long *pRespSize,void * ctx)
{
	
	JPNHG3_PYMT_ENQ_REQ_T *req;
	JPNHG3_PYMT_ENQ_RESP_T *resp;//,*new_resp,*orig_resp;
	JPNHG3_USK_ENQ_RESP_T *usk_resp; //added by samsuri on 20 feb 2023
		
	char curr_date_time[DATE_TIME_SIZE];
	int ret_val = 0;
	char program_id[PROG_ID_SIZE];
	long resp_len,resp_len_usk = 0;

	
	//added by samsuri on 21 mar 2023
	struct sqlca sqlca = {0}; 
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	/* varchar kptno[KPT_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[13]; } kptno
 = {0};

	int usk_count = 0;
	/* varchar applid[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } applid
 = {0};

	char genkpt = 0;

	sql_context pcCtx; 
	/* EXEC SQL END DECLARE SECTION; */ 
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN



	memset(&prog_log, 0, PROG_LOG_SIZE);
	memset(&excep_log, 0, APPL_EXCEP_LOG_SIZE);
		
	/* Initialize the variables used for logging	*/
	/* Get current date-time for logging			*/
	strcpy(curr_date_time, get_date_time());

	/* Assign request buffer	*/
	req = (JPNHG3_PYMT_ENQ_REQ_T *) pReq;


	userlog("JPNHG3_PYMT_ENQ L1: Initiated");
	
	/* Program access log variable */
	itoa(JPNHG3_PYMT_ENQ_ID, program_id, 10);
	strcpy(prog_log.program_id, program_id);
	strcpy(prog_log.user_id, req->header.user_id);
	strcpy(prog_log.workstation_id, req->header.workstation_id);
	strcpy(prog_log.branch_code, req->header.branch_code);
	strcpy(prog_log.access_start_time, curr_date_time);
	strcpy(prog_log.remarks, "");
	strcpy(prog_log.application_id, req->header.application_id);
	
	/* Application exception log variable */
	strcpy(excep_log.program_id, program_id);
	strcpy(excep_log.user_id, req->header.user_id); 	
	strcpy(excep_log.workstation_id, req->header.workstation_id);
	strcpy(excep_log.branch_code, req->header.branch_code);
	strcpy(excep_log.error_date, curr_date_time);
	strcpy(excep_log.error_msg, "");
	strcpy(excep_log.application_id, req->header.application_id); 	
	excep_log.severity = '\0';	
	excep_log.termination_flag = 'Y';	

	strcpy(prog_log.remarks,"JPNHG3_PYMT_ENQ: Initiated");
	
	userlog("JPNHG3_PYMT_ENQ L1: debug 2");

	resp_len = sizeof(JPNHG3_PYMT_ENQ_RESP_T);	
	resp_len_usk= sizeof(JPNHG3_USK_ENQ_RESP_T);	

	/* Allocate response buffer	*/
	if(NULL == (resp = (JPNHG3_PYMT_ENQ_RESP_T *) malloc(resp_len)))
	{
		strcpy(prog_log.remarks,"JPNHG3_PYMT_ENQ_RESP : Memory allocation for response buffer failed");
		sprintf(excep_log.error_msg,"JPNHG3_PYMT_ENQ_RESP : ");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);
		return RESP_BUF_ERR;
	}
	
	memset(resp, '\0', resp_len);

	userlog("JPNHG3_PYMT_ENQ L1: debug 3");

	#ifdef DEBUG
			userlog("JPNHG3_PYMT_ENQ L1 : req->header.application_id:%s:",req->header.application_id);
			userlog("JPNHG3_PYMT_ENQ L1 : req->header.branch_code:%s:", req->header.branch_code);
			userlog("JPNHG3_PYMT_ENQ L1 : req->header.service_id:%d:", req->header.service_id);
			userlog("JPNHG3_PYMT_ENQ L1 : req->header.user_id:%s:", req->header.user_id);
			userlog("JPNHG3_PYMT_ENQ L1 : req->header.workstation_id:%s:", req->header.workstation_id);
			//userlog("JPNHG3_PYMT_ENQ L1 : req->kptno_req_cnt:%d:",req->kptno_req_cnt);			
	#endif

	resp->header = req->header;
			
	if((ret_val = check_header(req->header,ctx)) != SUCCESS)
	{
	#ifdef DEBUG
			userlog("JPNHG3_PYMT_ENQ L1 : check header failed");
	#endif
		strcpy(prog_log.remarks,"JPNHG3_PYMT_ENQ : check header failed");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		//tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
			*pRespSize = resp_len;
				//memcpy(*pResp, resp, resp_len);
			*pResp = resp;
				return ret_val;
	}
	
	userlog("JPNHG3_PYMT_ENQ L1 :check header Successful");
	
	strcpy((char*)kptno.arr,req->kptno);
	setlen(kptno);

		applid.arr[0] = '\0';
		/* EXEC SQL SELECT MAX(APPLID) INTO :applid FROM APPLICATION 
			WHERE KPTNO = :kptno 
				AND APPLSTAT IN ('X','Q','A','9','D'); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 2;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select max(APPLID) into :b0  from APPLICATION where (KPTNO=\
:b1 and APPLSTAT in ('X','Q','A','9','D'))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )5;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&applid;
  sqlstm.sqhstl[0] = (unsigned int  )22;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&kptno;
  sqlstm.sqhstl[1] = (unsigned int  )15;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
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

 //samsuri added 'A','9','D'

		userlog("JPNHG3_PYMT_ENQ L1  : SELECT MAX(APPLID) INTO :applid FROM APPLICATION SQLCODE: %d",SQLCODE);

		applid.arr[applid.len] = '\0';	

		//added by samsuri on 20 feb 2023
		/* EXEC SQL 
			SELECT COUNT(APPLID) INTO :usk_count 
			FROM USK_COMPOUND_FEE 
			WHERE OLDAPPLID = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 2;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(APPLID) into :b0  from USK_COMPOUND_FEE where \
OLDAPPLID=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )28;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&usk_count;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&applid;
  sqlstm.sqhstl[1] = (unsigned int  )22;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
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



		userlog("JPNHG3_PYMT_ENQ L1  : SELECT COUNT(APPLID) INTO :usk_count SQLCODE: %d",SQLCODE);
		
		/* EXEC SQL SELECT GENKPT INTO :genkpt FROM PROBL_RECORD 
		WHERE APPLID = :applid
		AND PROBLREASONCODE='E0001'; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 2;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select GENKPT into :b0  from PROBL_RECORD where (APPLID=:b1\
 and PROBLREASONCODE='E0001')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )51;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&genkpt;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&applid;
  sqlstm.sqhstl[1] = (unsigned int  )22;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
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

 

		userlog("JPNHG3_PYMT_ENQ L1  : SELECT GENKPT SQLCODE: %d",SQLCODE);

		//added by samsuri on 21 feb 2023
		if(usk_count > 0)// && genkpt == 'U')
		{
			userlog("JPNHG3_PYMT_ENQ L1 :  usk_count : %d",usk_count);
			resp_len = resp_len + (resp_len_usk*usk_count);

			resp = (JPNHG3_PYMT_ENQ_RESP_T *) malloc( resp_len);
			if (resp == NULL)
			{
				strcpy(prog_log.remarks,"JPNHG3_PYMT_ENQ_RESP : Memory allocation for response buffer failed");
				sprintf(excep_log.error_msg,"JPNHG3_PYMT_ENQ_RESP : ");
				excep_log.termination_flag = 'Y';
				excep_log.severity = FATAL;
				log_error(ctx);

				//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);
				return RESP_BUF_ERR;
			}		

			memset(resp, '\0', resp_len);	

			resp->header = req->header;
		}	
		
		// usk_resp = (JPNHG3_USK_ENQ_RESP_T *)(resp + 1);	

		/* enquiry processing function */		
		ret_val = enq_processing(req,resp,ctx);
		if(ret_val != SUCCESS)
		{
		#ifdef DEBUG
			userlog("JPNHG3_PYMT_ENQ L1 :enq_processing function failed");
		#endif
		strcpy(prog_log.remarks,"JPNHG3_PYMT_ENQ : enq_processing function failed");
		strcpy(excep_log.error_msg,"JPNHG3_PYMT_ENQ : enq_processing function failed");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		//tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
		*pRespSize = resp_len;
		//memcpy(*pResp, resp, resp_len);
			*pResp = resp;
		return ret_val;
		}
			
		resp->usk_count = usk_count;

		if(usk_count > 0)//  && genkpt == 'U')
		{
			usk_resp = (JPNHG3_USK_ENQ_RESP_T *)(resp + 1);	

			ret_val = usk_processing(req,usk_resp,ctx);
			if(ret_val != SUCCESS)
			{
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_ENQ L1 :usk_processing function failed");
			#endif
			strcpy(prog_log.remarks,"JPNHG3_PYMT_ENQ : usk_processing function failed");
			strcpy(excep_log.error_msg,"JPNHG3_PYMT_ENQ : usk_processing function failed");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			//tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
			*pRespSize = resp_len;
			//memcpy(*pResp, resp, resp_len);
				*pResp = resp;
			return ret_val;
			}

			userlog(" ");
			userlog("USK Response buffer values ");
			userlog("JPNHG3_PYMT_ENQ L1 :  usk_resp->uskApplid : %s",usk_resp->uskApplid);
			userlog("JPNHG3_PYMT_ENQ L1 :  usk_resp->uskOldApplid : %s",usk_resp->uskOldApplid);
			userlog("JPNHG3_PYMT_ENQ L1 :  usk_resp->txnSerNo : %d",usk_resp->txnSerNo);

		}
		
		userlog(" ");
		userlog("Response buffer values ");
		userlog("JPNHG3_PYMT_ENQ L1 :  resp->applid : %s",resp->applid);
		userlog("JPNHG3_PYMT_ENQ L1 :  resp->oldapplid : %s",resp->oldapplid);
		userlog("JPNHG3_PYMT_ENQ L1 :  resp->collcenter : %s",resp->collcenter);
		userlog("JPNHG3_PYMT_ENQ L1 :  resp->origamt : %.2f",resp->origamt);
		userlog("JPNHG3_PYMT_ENQ L1 :  resp->agencyrevncode : %d",resp->agencyrevncode);
		userlog("JPNHG3_PYMT_ENQ L1 :  resp->name : %s",resp->name);
		userlog("JPNHG3_PYMT_ENQ L1 :  resp->address1 : %s",resp->address1);
		userlog("JPNHG3_PYMT_ENQ L1 :  resp->address2 : %s",resp->address2);
		userlog("JPNHG3_PYMT_ENQ L1 :  resp->address3 : %s",resp->address3);
		userlog("JPNHG3_PYMT_ENQ L1 :  resp->postcode : %s",resp->postcode);
		userlog("JPNHG3_PYMT_ENQ L1 :  resp->statecode : %s",resp->statecode);
		userlog("JPNHG3_PYMT_ENQ L1 :  resp->citycode : %d",resp->citycode);

		userlog(" ");
		userlog("JPNHG3_PYMT_ENQ L1 :Service Completed");
		userlog(" ");


		userlog("JPNHG3_PYMT_ENQ L1 :  resp_len : %d",resp_len);

		*pRespSize = resp_len;	
		*pResp = resp;
		 return GMPC_GOOD;
}



/*************************************************************************/
/* Function Name:enq_processing								             */
/* Description  :Updates the address info to the tables based on applid  */	
/* Input        :ADDRESS_INFO_T structure					             */   
/* Return Values:SUCCESS, SELECT_ERROR or UPDATE_ERROR       	         */
/*************************************************************************/
int enq_processing(JPNHG3_PYMT_ENQ_REQ_T *req, JPNHG3_PYMT_ENQ_RESP_T *resp, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	/* varchar applid[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } applid
 = {0};

	/* varchar kptno[KPT_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[13]; } kptno
 = {0};

	int OutStandtxnSerNo = 0; //added by samsuri on 21 mar 2023
	float   feeamt=0;
	//varchar arcode[AG_REV_CODE_SIZE] = {0};
	int     arcode=0;
	/* varchar ccenter[BRANCH_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[7]; } ccenter
 = {0};

	/* varchar name[80+1] = {0}; */ 
struct { unsigned short len; unsigned char arr[81]; } name
 = {0};

	/* varchar address1[ADDRESS1_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } address1
 = {0};

	/* varchar address2[ADDRESS1_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } address2
 = {0};

	/* varchar address3[ADDRESS1_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } address3
 = {0};

	/* varchar postcode[POSTCODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[6]; } postcode
 = {0};

	/* varchar statecode[STATECODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } statecode
 = {0};

	int  citycode;	
	char genkpt = 0;
	
	int   ret_code=0;

	//added by samsuri - problem records
	int  prob_no= 0;
	/* varchar id_type[ID_TYPE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } id_type
 = {0};
 
	/* varchar id_no[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } id_no
 = {0};
 
	/* varchar prob_date[DATE_TIME_SIZE + 4] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } prob_date
 = {0};
 
	/* varchar reason_code[REASON_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[6]; } reason_code
 = {0};
 
	int  reason_srno = 0;
	char prob_stat = 0;
	/* varchar prob_remarks[PROB_REMARK_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[151]; } prob_remarks
 = {0};
 
	/* varchar prob_solve_date[DATE_TIME_SIZE + 4] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } prob_solve_date
 = {0};
 
	/* varchar user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id
 = {0};
 
	/* varchar workstation_id[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } workstation_id
 = {0};
 
	/* varchar action_date[DATE_TIME_SIZE + 4] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } action_date
 = {0};
 
	/* varchar action_remarks[PROB_REMARK_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[151]; } action_remarks
 = {0};
 
	/* varchar action_user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } action_user_id
 = {0};
 
	/* varchar branch_code[BRANCH_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[7]; } branch_code
 = {0};
 
	/* varchar txn_code[TRANSACTION_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[4]; } txn_code
 = {0};
 
	/* varchar legacy_type[4] = {0}; */ 
struct { unsigned short len; unsigned char arr[4]; } legacy_type
 = {0};
 	
	char gscbupdflag = 0;	
	char enqFlag = 0;
	//char genkpt;
	char bskrecd = 0;	
	/* varchar gUser1[9] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } gUser1
 = {0};
 
	/* varchar gUser1TimeStamp[DATE_TIME_SIZE + 4] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } gUser1TimeStamp
 = {0};
 
	/* varchar gUser2[9] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } gUser2
 = {0};
 	
	/* varchar gUser2TimeStamp[DATE_TIME_SIZE + 4] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } gUser2TimeStamp
 = {0};
 

	sql_context pcCtx; 
	/* EXEC SQL END DECLARE SECTION; */ 



	pcCtx = ctx; 
	/* EXEC SQL CONTEXT USE :pcCtx; */ 



	// copy the kptno from req buffer to local variable here
	strcpy((char*)kptno.arr,req->kptno);
	setlen(kptno);

	#ifdef DEBUG
		userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : req->kptno: %s",req->kptno);
		userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : kptno: %s",kptno.arr);
	#endif


	applid.arr[0] = '\0';
	/* EXEC SQL SELECT MAX(APPLID) INTO :applid FROM APPLICATION 
		WHERE KPTNO = :kptno 
			AND APPLSTAT IN ('X','Q','A','9','D'); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 2;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select max(APPLID) into :b0  from APPLICATION where (KPTNO=:\
b1 and APPLSTAT in ('X','Q','A','9','D'))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )74;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&applid;
 sqlstm.sqhstl[0] = (unsigned int  )22;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&kptno;
 sqlstm.sqhstl[1] = (unsigned int  )15;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
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

 //samsuri added 'A','9','D'

	applid.arr[applid.len] = '\0';	

	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(sqlca.sqlcode != 0)
	{
		#ifdef DEBUG
			userlog("JPNHG3_PYMT_ENQ L1  : enq_processing() failed while select max(applid) from APPLICATION");
		#endif
		strcpy(prog_log.remarks,"enq_processing() failed while select max(applid) from APPLICATION");
		sprintf(excep_log.error_msg,"enq_processing() failed while select max(applid) from APPLICATION:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		return SELECT_ERROR;
	}

	#ifdef DEBUG
		userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : max applid after select: %s",applid.arr);		
	#endif


	if(applid.arr[0] == '\0')
	{
		#ifdef DEBUG
			userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : No record found for HG3 payment");		
		#endif

		ret_code = 70001;
		return ret_code;  // no record found for HG3 payment	

	}
	else
	{
		// EXEC SQL SELECT GENKPT INTO :genkpt FROM PROBL_RECORD
		// 	WHERE APPLID = :applid
		// 		//AND PROBLREASONCODE = 'Q0001'; //samsuri remark this
		// 		AND PROBLREASONCODE = 'E0001'; //samsuri todo: change to E0001

		/* EXEC SQL SELECT PROBLNO,IDTYPE,IDNO,TO_CHAR(PROBLDATE,'DDMMYYYY HH24MISS'),PROBLREASONCODE,PROBLSERNO,
		PROBLSTAT,PROBLREMARKS,
		TO_CHAR(PROBLSOLVEDATE,'DDMMYYYY HH24MISS'),USERID,WSID,TO_CHAR(ACTDATETIME,'DDMMYYYY HH24MISS'),ACTREMARKS,
		ACTUSERID,BRANCHCODE,TXNCODE,LEGACYTYPE,
		GSCBUPDFLAG,ENQFLAG,GENKPT,BSKRECD,GUSER1,TO_CHAR(GUSER1TIMESTAMP,'DDMMYYYY HH24MISS'),GUSER2,
		TO_CHAR(GUSER2TIMESTAMP,'DDMMYYYY HH24MISS') 
		INTO :prob_no,:id_type,:id_no,:prob_date,:reason_code,:reason_srno,:prob_stat,
		:prob_remarks,:prob_solve_date,:user_id,:workstation_id,:action_date,
		:action_remarks,:action_user_id,:branch_code,:txn_code,:legacy_type,
		:gscbupdflag,:enqFlag,:genkpt,:bskrecd,:gUser1,:gUser1TimeStamp,:gUser2,:gUser2TimeStamp
		FROM PROBL_RECORD
			WHERE APPLID = :applid
				AND PROBLREASONCODE = 'E0001'; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 26;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select PROBLNO ,IDTYPE ,IDNO ,TO_CHAR(PROBLDATE,'DDMMYYYY H\
H24MISS') ,PROBLREASONCODE ,PROBLSERNO ,PROBLSTAT ,PROBLREMARKS ,TO_CHAR(PROBL\
SOLVEDATE,'DDMMYYYY HH24MISS') ,USERID ,WSID ,TO_CHAR(ACTDATETIME,'DDMMYYYY HH\
24MISS') ,ACTREMARKS ,ACTUSERID ,BRANCHCODE ,TXNCODE ,LEGACYTYPE ,GSCBUPDFLAG \
,ENQFLAG ,GENKPT ,BSKRECD ,GUSER1 ,TO_CHAR(GUSER1TIMESTAMP,'DDMMYYYY HH24MISS'\
) ,GUSER2 ,TO_CHAR(GUSER2TIMESTAMP,'DDMMYYYY HH24MISS') into :b0,:b1,:b2,:b3,:\
b4,:b5,:b6,:b7,:b8,:b9,:b10,:b11,:b12,:b13,:b14,:b15,:b16,:b17,:b18,:b19,:b20,\
:b21,:b22,:b23,:b24  from PROBL_RECORD where (APPLID=:b25 and PROBLREASONCODE=\
'E0001')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )97;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&prob_no;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&id_type;
  sqlstm.sqhstl[1] = (unsigned int  )5;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&id_no;
  sqlstm.sqhstl[2] = (unsigned int  )18;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&prob_date;
  sqlstm.sqhstl[3] = (unsigned int  )22;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&reason_code;
  sqlstm.sqhstl[4] = (unsigned int  )8;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&reason_srno;
  sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&prob_stat;
  sqlstm.sqhstl[6] = (unsigned int  )1;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&prob_remarks;
  sqlstm.sqhstl[7] = (unsigned int  )153;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&prob_solve_date;
  sqlstm.sqhstl[8] = (unsigned int  )22;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&user_id;
  sqlstm.sqhstl[9] = (unsigned int  )11;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)0;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&workstation_id;
  sqlstm.sqhstl[10] = (unsigned int  )18;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)0;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)&action_date;
  sqlstm.sqhstl[11] = (unsigned int  )22;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)0;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqhstv[12] = (         void  *)&action_remarks;
  sqlstm.sqhstl[12] = (unsigned int  )153;
  sqlstm.sqhsts[12] = (         int  )0;
  sqlstm.sqindv[12] = (         void  *)0;
  sqlstm.sqinds[12] = (         int  )0;
  sqlstm.sqharm[12] = (unsigned int  )0;
  sqlstm.sqadto[12] = (unsigned short )0;
  sqlstm.sqtdso[12] = (unsigned short )0;
  sqlstm.sqhstv[13] = (         void  *)&action_user_id;
  sqlstm.sqhstl[13] = (unsigned int  )11;
  sqlstm.sqhsts[13] = (         int  )0;
  sqlstm.sqindv[13] = (         void  *)0;
  sqlstm.sqinds[13] = (         int  )0;
  sqlstm.sqharm[13] = (unsigned int  )0;
  sqlstm.sqadto[13] = (unsigned short )0;
  sqlstm.sqtdso[13] = (unsigned short )0;
  sqlstm.sqhstv[14] = (         void  *)&branch_code;
  sqlstm.sqhstl[14] = (unsigned int  )9;
  sqlstm.sqhsts[14] = (         int  )0;
  sqlstm.sqindv[14] = (         void  *)0;
  sqlstm.sqinds[14] = (         int  )0;
  sqlstm.sqharm[14] = (unsigned int  )0;
  sqlstm.sqadto[14] = (unsigned short )0;
  sqlstm.sqtdso[14] = (unsigned short )0;
  sqlstm.sqhstv[15] = (         void  *)&txn_code;
  sqlstm.sqhstl[15] = (unsigned int  )6;
  sqlstm.sqhsts[15] = (         int  )0;
  sqlstm.sqindv[15] = (         void  *)0;
  sqlstm.sqinds[15] = (         int  )0;
  sqlstm.sqharm[15] = (unsigned int  )0;
  sqlstm.sqadto[15] = (unsigned short )0;
  sqlstm.sqtdso[15] = (unsigned short )0;
  sqlstm.sqhstv[16] = (         void  *)&legacy_type;
  sqlstm.sqhstl[16] = (unsigned int  )6;
  sqlstm.sqhsts[16] = (         int  )0;
  sqlstm.sqindv[16] = (         void  *)0;
  sqlstm.sqinds[16] = (         int  )0;
  sqlstm.sqharm[16] = (unsigned int  )0;
  sqlstm.sqadto[16] = (unsigned short )0;
  sqlstm.sqtdso[16] = (unsigned short )0;
  sqlstm.sqhstv[17] = (         void  *)&gscbupdflag;
  sqlstm.sqhstl[17] = (unsigned int  )1;
  sqlstm.sqhsts[17] = (         int  )0;
  sqlstm.sqindv[17] = (         void  *)0;
  sqlstm.sqinds[17] = (         int  )0;
  sqlstm.sqharm[17] = (unsigned int  )0;
  sqlstm.sqadto[17] = (unsigned short )0;
  sqlstm.sqtdso[17] = (unsigned short )0;
  sqlstm.sqhstv[18] = (         void  *)&enqFlag;
  sqlstm.sqhstl[18] = (unsigned int  )1;
  sqlstm.sqhsts[18] = (         int  )0;
  sqlstm.sqindv[18] = (         void  *)0;
  sqlstm.sqinds[18] = (         int  )0;
  sqlstm.sqharm[18] = (unsigned int  )0;
  sqlstm.sqadto[18] = (unsigned short )0;
  sqlstm.sqtdso[18] = (unsigned short )0;
  sqlstm.sqhstv[19] = (         void  *)&genkpt;
  sqlstm.sqhstl[19] = (unsigned int  )1;
  sqlstm.sqhsts[19] = (         int  )0;
  sqlstm.sqindv[19] = (         void  *)0;
  sqlstm.sqinds[19] = (         int  )0;
  sqlstm.sqharm[19] = (unsigned int  )0;
  sqlstm.sqadto[19] = (unsigned short )0;
  sqlstm.sqtdso[19] = (unsigned short )0;
  sqlstm.sqhstv[20] = (         void  *)&bskrecd;
  sqlstm.sqhstl[20] = (unsigned int  )1;
  sqlstm.sqhsts[20] = (         int  )0;
  sqlstm.sqindv[20] = (         void  *)0;
  sqlstm.sqinds[20] = (         int  )0;
  sqlstm.sqharm[20] = (unsigned int  )0;
  sqlstm.sqadto[20] = (unsigned short )0;
  sqlstm.sqtdso[20] = (unsigned short )0;
  sqlstm.sqhstv[21] = (         void  *)&gUser1;
  sqlstm.sqhstl[21] = (unsigned int  )11;
  sqlstm.sqhsts[21] = (         int  )0;
  sqlstm.sqindv[21] = (         void  *)0;
  sqlstm.sqinds[21] = (         int  )0;
  sqlstm.sqharm[21] = (unsigned int  )0;
  sqlstm.sqadto[21] = (unsigned short )0;
  sqlstm.sqtdso[21] = (unsigned short )0;
  sqlstm.sqhstv[22] = (         void  *)&gUser1TimeStamp;
  sqlstm.sqhstl[22] = (unsigned int  )22;
  sqlstm.sqhsts[22] = (         int  )0;
  sqlstm.sqindv[22] = (         void  *)0;
  sqlstm.sqinds[22] = (         int  )0;
  sqlstm.sqharm[22] = (unsigned int  )0;
  sqlstm.sqadto[22] = (unsigned short )0;
  sqlstm.sqtdso[22] = (unsigned short )0;
  sqlstm.sqhstv[23] = (         void  *)&gUser2;
  sqlstm.sqhstl[23] = (unsigned int  )11;
  sqlstm.sqhsts[23] = (         int  )0;
  sqlstm.sqindv[23] = (         void  *)0;
  sqlstm.sqinds[23] = (         int  )0;
  sqlstm.sqharm[23] = (unsigned int  )0;
  sqlstm.sqadto[23] = (unsigned short )0;
  sqlstm.sqtdso[23] = (unsigned short )0;
  sqlstm.sqhstv[24] = (         void  *)&gUser2TimeStamp;
  sqlstm.sqhstl[24] = (unsigned int  )22;
  sqlstm.sqhsts[24] = (         int  )0;
  sqlstm.sqindv[24] = (         void  *)0;
  sqlstm.sqinds[24] = (         int  )0;
  sqlstm.sqharm[24] = (unsigned int  )0;
  sqlstm.sqadto[24] = (unsigned short )0;
  sqlstm.sqtdso[24] = (unsigned short )0;
  sqlstm.sqhstv[25] = (         void  *)&applid;
  sqlstm.sqhstl[25] = (unsigned int  )22;
  sqlstm.sqhsts[25] = (         int  )0;
  sqlstm.sqindv[25] = (         void  *)0;
  sqlstm.sqinds[25] = (         int  )0;
  sqlstm.sqharm[25] = (unsigned int  )0;
  sqlstm.sqadto[25] = (unsigned short )0;
  sqlstm.sqtdso[25] = (unsigned short )0;
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



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(sqlca.sqlcode != 0)
		{
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_ENQ L1  : enq_processing() failed while select genkpt from PROBL_RECORD");
			#endif
			strcpy(prog_log.remarks,"enq_processing() failed while select genkpt from PROBL_RECORD");
			sprintf(excep_log.error_msg,"enq_processing() failed while select genkpt from PROBL_RECORD:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			return SELECT_ERROR;
		}

		#ifdef DEBUG
			userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : after select from PROBL_RECORD genkpt: %c",genkpt);
		#endif

		//ADDED by samsuri on 27 oct 2022		
		userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : prob_remarks: %s",prob_remarks.arr);
		userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : user_id: %s",user_id.arr);

		resp->prob_no = prob_no;
		strcpy(resp->id_type,(char*)id_type.arr);
		strcpy(resp->id_no,(char*)id_no.arr);
		strcpy(resp->prob_date,(char*)prob_date.arr);
		strcpy(resp->reason_code,(char*)reason_code.arr);
		resp->reason_srno = reason_srno;
		resp->prob_stat =prob_stat;
		strcpy(resp->prob_remarks,(char*)prob_remarks.arr);
		strcpy(resp->prob_solve_date,(char*)prob_solve_date.arr);
		strcpy(resp->user_id,(char*)user_id.arr);
		strcpy(resp->workstation_id,(char*)workstation_id.arr);
		strcpy(resp->action_date,(char*)action_date.arr);
		strcpy(resp->action_remarks,(char*)action_remarks.arr);
		strcpy(resp->action_user_id,(char*)action_user_id.arr);
		strcpy(resp->branch_code,(char*)branch_code.arr);
		strcpy(resp->txn_code,(char*)txn_code.arr);
		strcpy(resp->legacy_type,(char*)legacy_type.arr);
		resp->gscbupdflag = gscbupdflag;
		resp->enqFlag = enqFlag;
		resp->genkpt = genkpt;
		resp->bskrecd = bskrecd;
		strcpy(resp->gUser1,(char*)gUser1.arr);
		strcpy(resp->gUser1TimeStamp,(char*)gUser1TimeStamp.arr);
		strcpy(resp->gUser2,(char*)gUser2.arr);
		strcpy(resp->gUser2TimeStamp,(char*)gUser2TimeStamp.arr);

		//samsuri move here
		strcpy(resp->applid,req->applid);
		strcpy(resp->oldapplid,(char*)applid.arr);

		userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : resp->id_type: %s",resp->id_type);
		userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : resp->enqFlag: %c",resp->enqFlag);
		userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : resp->genkpt: %c",resp->genkpt);
		userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : resp->gscbupdflag: %c",resp->gscbupdflag);
		userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : resp->bskrecd: %c",resp->bskrecd);
		userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : resp->gUser1: %s",resp->gUser1);
		userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : resp->gUser1TimeStamp: %s",resp->gUser1TimeStamp);
		userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : resp->gUser2: %s",resp->gUser2);
		userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : resp->gUser2TimeStamp: %s",resp->gUser2TimeStamp);


		if(genkpt == '0')
		{
			// no record found
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : No record found for genkpt == 0 condition");		
			#endif

			ret_code = 70001;
			return ret_code;  

		}
		//SAMSURI REMARKS THIS TO ALLOW BRANCH TO GET PAYMENT DETAILS
		// else if(genkpt == 'P')
		// { 
		// 	// applicant has paid already
		// 	#ifdef DEBUG
		// 		userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : applicant has paid already for genkpt == P condition");		
		// 	#endif
		// 	ret_code = 70001;
		// 	return ret_code;

		// }
		else if(genkpt == 'U') 
		{
			// unpaid applicant
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : unpaid applicant for genkpt == U condition");		
			#endif
			arcode = 0; feeamt = 0; OutStandtxnSerNo = 0;
			/* EXEC SQL SELECT TXNSERNO, FEEAMT,AGENCYREVNCODE INTO :OutStandtxnSerNo, :feeamt,:arcode
				FROM OUTSTAND_TXN_FEE
					WHERE APPLID = :applid
					AND FEETYPE = 'CF'
					AND TXNSERNO = (
						SELECT TXNSERNO FROM APPL_TXN 
						WHERE APPLID = :applid
						AND TXNCODE = '403'); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 26;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select TXNSERNO ,FEEAMT ,AGENCYREVNCODE into :b0,:b1,:b2  \
from OUTSTAND_TXN_FEE where ((APPLID=:b3 and FEETYPE='CF') and TXNSERNO=(selec\
t TXNSERNO  from APPL_TXN where (APPLID=:b3 and TXNCODE='403')))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )216;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&OutStandtxnSerNo;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&feeamt;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(float);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&arcode;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&applid;
   sqlstm.sqhstl[3] = (unsigned int  )22;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)0;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)&applid;
   sqlstm.sqhstl[4] = (unsigned int  )22;
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)0;
   sqlstm.sqinds[4] = (         int  )0;
   sqlstm.sqharm[4] = (unsigned int  )0;
   sqlstm.sqadto[4] = (unsigned short )0;
   sqlstm.sqtdso[4] = (unsigned short )0;
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



			//arcode.arr[arcode.len] = '\0';

			sqlmsg[0] = '\0';
			strcpy(sqlmsg, SQLMSG);
			if(sqlca.sqlcode != 0)
			{
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_ENQ L1  : enq_processing() failed while select feeamt from OUTSTAND_TXN_FEE. applid: %s",applid.arr);
				#endif
				strcpy(prog_log.remarks,"enq_processing() failed while select feeamt from OUTSTAND_TXN_FEE");
				sprintf(excep_log.error_msg,"enq_processing() failed while select feeamt from OUTSTAND_TXN_FEE:%s ",sqlmsg);
				excep_log.termination_flag = 'Y';
				excep_log.severity = FATAL;
				log_error(ctx);

				return SELECT_ERROR;
			}

			#ifdef DEBUG
				userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : after select from OUTSTAND_TXN_FEE OutStandTxnSerNo: %d",OutStandtxnSerNo);		
				userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : after select from OUTSTAND_TXN_FEE feeamt: %.2f",feeamt);		
				userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : after select from OUTSTAND_TXN_FEE agencyrevncode: %d",arcode);		
			#endif

			if(arcode > 0)
			{

				// copy these values into response buffer
				// strcpy(resp->applid,req->applid); //samsuri move above
				// strcpy(resp->oldapplid,(char*)applid.arr);

				resp->origamt = feeamt;
				//strcpy(resp->agencyrevncode,(char*)arcode.arr);
				resp->agencyrevncode = arcode;
				resp->OutStandTxnSerNo = OutStandtxnSerNo;

				ccenter.arr[0] = '\0';
				/* EXEC SQL SELECT COLLCENTER INTO :ccenter FROM APPLICATION
					WHERE APPLID = :applid; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 26;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select COLLCENTER into :b0  from APPLICATION where APPLID\
=:b1";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )251;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&ccenter;
    sqlstm.sqhstl[0] = (unsigned int  )9;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&applid;
    sqlstm.sqhstl[1] = (unsigned int  )22;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
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



				ccenter.arr[ccenter.len] = '\0';

				sqlmsg[0] = '\0';
				strcpy(sqlmsg, SQLMSG);
				if(sqlca.sqlcode != 0)
				{
					#ifdef DEBUG
						userlog("JPNHG3_PYMT_ENQ L1  : enq_processing() failed while select ccenter from APPLICATION");
					#endif
					strcpy(prog_log.remarks,"enq_processing() failed while select ccenter from APPLICATION");
					sprintf(excep_log.error_msg,"enq_processing() failed while select ccenter from APPLICATION:%s ",sqlmsg);
					excep_log.termination_flag = 'Y';
					excep_log.severity = FATAL;
					log_error(ctx);

					return SELECT_ERROR;
				}

				#ifdef DEBUG				
					userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : after select from APPLICATION collcenter: %s",ccenter.arr);		
				#endif

				strcpy(resp->collcenter,(char*)ccenter.arr);

				citycode = 0; name.arr[0] = '\0'; address1.arr[0] = '\0';
				/* EXEC SQL SELECT GMPCSHORTNAME1||' '||GMPCSHORTNAME2||' '||GMPCSHORTNAME3,
					ADDRESS1, ADDRESS2, ADDRESS3,POSTCODE,STATECODE,CITYCODE INTO
					:name, :address1, :address2, :address3, :postcode, :statecode, :citycode
						FROM APPNT_JPN_INFO
						WHERE APPLID = :applid; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 26;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select ((((GMPCSHORTNAME1||' ')||GMPCSHORTNAME2)||' ')||G\
MPCSHORTNAME3) ,ADDRESS1 ,ADDRESS2 ,ADDRESS3 ,POSTCODE ,STATECODE ,CITYCODE in\
to :b0,:b1,:b2,:b3,:b4,:b5,:b6  from APPNT_JPN_INFO where APPLID=:b7";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )274;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&name;
    sqlstm.sqhstl[0] = (unsigned int  )83;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&address1;
    sqlstm.sqhstl[1] = (unsigned int  )33;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&address2;
    sqlstm.sqhstl[2] = (unsigned int  )33;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&address3;
    sqlstm.sqhstl[3] = (unsigned int  )33;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&postcode;
    sqlstm.sqhstl[4] = (unsigned int  )8;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&statecode;
    sqlstm.sqhstl[5] = (unsigned int  )5;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&citycode;
    sqlstm.sqhstl[6] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         void  *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned int  )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (         void  *)&applid;
    sqlstm.sqhstl[7] = (unsigned int  )22;
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         void  *)0;
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



				name.arr[name.len] = '\0';
				address1.arr[address1.len] = '\0';
				address2.arr[address2.len] = '\0';
				address3.arr[address3.len] = '\0';
				postcode.arr[postcode.len] = '\0';
				statecode.arr[statecode.len] = '\0';

				sqlmsg[0] = '\0';
				strcpy(sqlmsg, SQLMSG);
				if(sqlca.sqlcode != 0)
				{
					#ifdef DEBUG
						userlog("JPNHG3_PYMT_ENQ L1  : enq_processing() failed while select name from APPNT_JPN_INFO");
					#endif
					strcpy(prog_log.remarks,"enq_processing() failed while select name from APPNT_JPN_INFO");
					sprintf(excep_log.error_msg,"enq_processing() failed while select name from APPNT_JPN_INFO:%s ",sqlmsg);
					excep_log.termination_flag = 'Y';
					excep_log.severity = FATAL;
					log_error(ctx);

					return SELECT_ERROR;
				}
				
				#ifdef DEBUG				
					userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : after select from APPNT_JPN_INFO name: %s",name.arr);
					userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : after select from APPNT_JPN_INFO address1: %s",address1.arr);	
					userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : after select from APPNT_JPN_INFO address2: %s",address2.arr);
					userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : after select from APPNT_JPN_INFO address3: %s",address3.arr);
					userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : after select from APPNT_JPN_INFO postcode: %s",postcode.arr);
					userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : after select from APPNT_JPN_INFO statecode: %s",statecode.arr);
					userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : after select from APPNT_JPN_INFO citycode: %d",citycode);
				#endif

				if(name.arr[0] != '\0')
				{

					// copy these values into response buffer
					strcpy(resp->name,(char*)name.arr);
					strcpy(resp->address1,(char*)address1.arr);
					strcpy(resp->address2,(char*)address2.arr);
					strcpy(resp->address3,(char*)address3.arr);
					strcpy(resp->postcode,(char*)postcode.arr);
					strcpy(resp->statecode,(char*)statecode.arr);
					resp->citycode = citycode;

					ret_code = 0;
					return ret_code;
				}
				else
				{
					ret_code = 70001;
					return ret_code;
				}

			}
			else
			{
				ret_code = 70001;
				return ret_code;
			}

			ret_code = 0;
			return ret_code;
		}
		else
		{
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : In the else part for genkpt not P, not U  condition : %c",genkpt);		
			#endif
			ret_code = 0;//samsuri change from 70001 to 0
			return ret_code;
		}

	}
	

	return SUCCESS;
}


/*************************************************************************/
/* Function Name:usk_processing								             */
/* Description  :Updates the address info to the tables based on applid  */	
/* Input        :ADDRESS_INFO_T structure					             */   
/* Return Values:SUCCESS, SELECT_ERROR or UPDATE_ERROR       	         */
/*************************************************************************/
int usk_processing(JPNHG3_PYMT_ENQ_REQ_T *req, JPNHG3_USK_ENQ_RESP_T *usk_resp, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	
	/* varchar applid[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } applid
 = {0};

	/* varchar kptno[KPT_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[13]; } kptno
 = {0};
	
	int usk_count = 0;
	//samsuri todo: add data for new table USK_COMPOUND_FEE -updated 16 feb 2023
	struct
	{
		/* varchar hv_uskApplid[APP_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[20]; } hv_uskApplid;

		/* varchar hv_uskOldApplid[APP_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[20]; } hv_uskOldApplid;

		int     hv_txnSerNo;
		/* varchar hv_idType[ID_TYPE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[3]; } hv_idType;
 //3
		/* varchar hv_idNo[ID_NUMBER2_SIZE]; */ 
struct { unsigned short len; unsigned char arr[13]; } hv_idNo;
 //13
		/* varchar hv_gmpcName [151]; */ 
struct { unsigned short len; unsigned char arr[151]; } hv_gmpcName;

		int     hv_cardLostCount;	
		/* varchar hv_lostReasonCode[3]; */ 
struct { unsigned short len; unsigned char arr[3]; } hv_lostReasonCode;

		float   hv_CF;
		/* varchar hv_appealDate[DATE_TIME_SIZE + 4]; */ 
struct { unsigned short len; unsigned char arr[20]; } hv_appealDate;

		/* varchar hv_appealBranch[BRANCH_CODE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[7]; } hv_appealBranch;
 //7
		/* varchar hv_appealUserID[USER_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_appealUserID;
 //9
		/* varchar hv_appealRemark[251]; */ 
struct { unsigned short len; unsigned char arr[251]; } hv_appealRemark;

		float   hv_appealPercent;
		float   hv_amtToPay;
		/* varchar hv_appealStatus[26]; */ 
struct { unsigned short len; unsigned char arr[26]; } hv_appealStatus;

		/* varchar hv_sscBranch[BRANCH_CODE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[7]; } hv_sscBranch;
 
		/* varchar hv_sscUserID[USER_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_sscUserID;
 
		/* varchar hv_sscWsID[4]; */ 
struct { unsigned short len; unsigned char arr[4]; } hv_sscWsID;
 
		/* varchar hv_sscDateTime[DATE_TIME_SIZE + 4]; */ 
struct { unsigned short len; unsigned char arr[20]; } hv_sscDateTime;

		/* varchar hv_sscRemark[251]; */ 
struct { unsigned short len; unsigned char arr[251]; } hv_sscRemark;

		/* varchar hv_payReceipt[RECEIPT_SIZE]; */ 
struct { unsigned short len; unsigned char arr[11]; } hv_payReceipt;

		/* varchar hv_payBranch[BRANCH_CODE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[7]; } hv_payBranch;
 
		/* varchar hv_payUserID[USER_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_payUserID;
 
		/* varchar hv_payDateTime[DATE_TIME_SIZE + 4]; */ 
struct { unsigned short len; unsigned char arr[20]; } hv_payDateTime;

	} usk_details_structure;

	struct
	{
		short hv_uskApplid_ind;
		short hv_uskOldApplid_ind;
		short hv_txnSerNo_ind;
		short hv_idType_ind;
		short hv_idNo_ind;
		short hv_gmpcName_ind;
		short hv_cardLostCount_ind;	
		short hv_lostReasonCode_ind;
		short hv_CF_ind;
		short hv_appealDate_ind;
		short hv_appealBranch_ind;
		short hv_appealUserID_ind;
		short hv_appealRemark_ind;
		short hv_appealPercent_ind;
		short hv_amtToPay_ind;
		short hv_appealStatus_ind;
		short hv_sscBranch_ind; 
		short hv_sscUserID_ind; 
		short hv_sscWsID_ind; 
		short hv_sscDateTime_ind;
		short hv_sscRemark_ind;
		short hv_payReceipt_ind;
		short hv_payBranch_ind; 
		short hv_payUserID_ind; 
		short hv_payDateTime_ind;
	} usk_details_structure_ind;
	

	int   ret_code=0;

	sql_context pcCtx; 
	/* EXEC SQL END DECLARE SECTION; */ 



	pcCtx = ctx; 
	/* EXEC SQL CONTEXT USE :pcCtx; */ 



	// copy the kptno from req buffer to local variable here
	strcpy((char*)kptno.arr,req->kptno);
	setlen(kptno);

	#ifdef DEBUG
		userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : req->kptno: %s",req->kptno);
		userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : kptno: %s",kptno.arr);
	#endif


	applid.arr[0] = '\0';
	/* EXEC SQL SELECT MAX(APPLID) INTO :applid FROM APPLICATION 
		WHERE KPTNO = :kptno 
			AND APPLSTAT IN ('X','Q','A','9','D'); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 26;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select max(APPLID) into :b0  from APPLICATION where (KPTNO=:\
b1 and APPLSTAT in ('X','Q','A','9','D'))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )321;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&applid;
 sqlstm.sqhstl[0] = (unsigned int  )22;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&kptno;
 sqlstm.sqhstl[1] = (unsigned int  )15;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
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

 //samsuri added ,'A','9','D'

	applid.arr[applid.len] = '\0';	

	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(sqlca.sqlcode != 0)
	{
		#ifdef DEBUG
			userlog("JPNHG3_PYMT_ENQ L1  : enq_processing() failed while select max(applid) from APPLICATION");
		#endif
		strcpy(prog_log.remarks,"enq_processing() failed while select max(applid) from APPLICATION");
		sprintf(excep_log.error_msg,"enq_processing() failed while select max(applid) from APPLICATION:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		return SELECT_ERROR;
	}

	#ifdef DEBUG
		userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : max applid after select: %s",applid.arr);		
	#endif


	if(applid.arr[0] == '\0')
	{
		#ifdef DEBUG
			userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : No record found for HG3 payment");		
		#endif

		ret_code = 70001;
		return ret_code;  // no record found for HG3 payment	

	}
	else
	{
		


			//added by samsuri on 20 feb 2023
		/* EXEC SQL 
			SELECT COUNT(APPLID) INTO :usk_count 
			FROM USK_COMPOUND_FEE 
			WHERE OLDAPPLID = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 26;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(APPLID) into :b0  from USK_COMPOUND_FEE where \
OLDAPPLID=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )344;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&usk_count;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&applid;
  sqlstm.sqhstl[1] = (unsigned int  )22;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
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




		userlog("JPNHG3_PYMT_ENQ L1 : get_usk_count (prob_count): %d",usk_count);

		


		if(usk_count > 0)
		{

			//samsuri todo: add sql query foe table USK. and then copy to resp->		
			/* EXEC SQL DECLARE usk_details_cur CURSOR FOR 			
			SELECT 
			APPLID       ,
			OLDAPPLID    ,
			TXNSERNO     ,
			IDTYPE       ,
			IDNO         ,
			GMPCNAME     ,
			CARDLOSTCNT  ,
			LOSTRSNCODE  ,
			CF           ,
			TO_CHAR(APPEALDATE,'DDMMYYYY HH24MISS')   ,
			APPEALBRANCH ,
			APPEALUSERID ,
			APPEALREMARK ,
			APPEALPERCENT,
			AMTTOPAY     ,
			APPEALSTATUS ,
			SSCBRANCH    ,
			SSCUSERID    ,
			SSCWSID      ,
			TO_CHAR(SSCDATETIME,'DDMMYYYY HH24MISS')  ,
			SSCREMARK    ,
			PAYRECEIPT   ,
			PAYBRANCH    ,
			PAYUSERID    ,
			TO_CHAR(PAYDATETIME  ,'DDMMYYYY HH24MISS')  
			
			FROM USK_COMPOUND_FEE
			WHERE OLDAPPLID = :applid; */ 


			/* EXEC SQL OPEN usk_details_cur; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 26;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = sq0011;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )367;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlstm.sqhstv[0] = (         void  *)&applid;
   sqlstm.sqhstl[0] = (unsigned int  )22;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
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



			userlog("JPNHG3_PYMT_ENQ L1  : enq_processing() USK_COMPOUND_FEE SQLMSG: %s SQLCODE: %d", SQLMSG,SQLCODE);

			sqlmsg[0] = '\0';
			strcpy(sqlmsg, SQLMSG);
			if(sqlca.sqlcode != 0)
			{
				userlog("JPNHG3_PYMT_ENQ L1  : enq_processing() failed while select from USK_COMPOUND_FEE");

				strcpy(prog_log.remarks,"get_prob_record_recs : Error in opening the cursor USK_COMPOUND_FEE");
				sprintf(excep_log.error_msg,"get_prob_record_recs : Error in opening the cursor USK_COMPOUND_FEE : %s", SQLMSG);
				excep_log.termination_flag = 'Y';
				excep_log.severity = FATAL;

				log_error(ctx);

				return CURSOR_OPEN_ERROR;						
			}


			while(1)
			{
				userlog("JPNHG3_PYMT_ENQ L1  : enq_processing() in USK while loop");
				memset(&usk_details_structure,'\0',sizeof(usk_details_structure));

				/* EXEC SQL FETCH usk_details_cur 
						INTO :usk_details_structure INDICATOR :usk_details_structure_ind; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 26;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )386;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqfoff = (           int )0;
    sqlstm.sqfmod = (unsigned int )2;
    sqlstm.sqhstv[0] = (         void  *)&usk_details_structure.hv_uskApplid;
    sqlstm.sqhstl[0] = (unsigned int  )22;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)&usk_details_structure_ind.hv_uskApplid_ind;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&usk_details_structure.hv_uskOldApplid;
    sqlstm.sqhstl[1] = (unsigned int  )22;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)&usk_details_structure_ind.hv_uskOldApplid_ind;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&usk_details_structure.hv_txnSerNo;
    sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)&usk_details_structure_ind.hv_txnSerNo_ind;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&usk_details_structure.hv_idType;
    sqlstm.sqhstl[3] = (unsigned int  )5;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)&usk_details_structure_ind.hv_idType_ind;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&usk_details_structure.hv_idNo;
    sqlstm.sqhstl[4] = (unsigned int  )15;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)&usk_details_structure_ind.hv_idNo_ind;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&usk_details_structure.hv_gmpcName;
    sqlstm.sqhstl[5] = (unsigned int  )153;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)&usk_details_structure_ind.hv_gmpcName_ind;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&usk_details_structure.hv_cardLostCount;
    sqlstm.sqhstl[6] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         void  *)&usk_details_structure_ind.hv_cardLostCount_ind;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned int  )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (         void  *)&usk_details_structure.hv_lostReasonCode;
    sqlstm.sqhstl[7] = (unsigned int  )5;
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         void  *)&usk_details_structure_ind.hv_lostReasonCode_ind;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned int  )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqhstv[8] = (         void  *)&usk_details_structure.hv_CF;
    sqlstm.sqhstl[8] = (unsigned int  )sizeof(float);
    sqlstm.sqhsts[8] = (         int  )0;
    sqlstm.sqindv[8] = (         void  *)&usk_details_structure_ind.hv_CF_ind;
    sqlstm.sqinds[8] = (         int  )0;
    sqlstm.sqharm[8] = (unsigned int  )0;
    sqlstm.sqadto[8] = (unsigned short )0;
    sqlstm.sqtdso[8] = (unsigned short )0;
    sqlstm.sqhstv[9] = (         void  *)&usk_details_structure.hv_appealDate;
    sqlstm.sqhstl[9] = (unsigned int  )22;
    sqlstm.sqhsts[9] = (         int  )0;
    sqlstm.sqindv[9] = (         void  *)&usk_details_structure_ind.hv_appealDate_ind;
    sqlstm.sqinds[9] = (         int  )0;
    sqlstm.sqharm[9] = (unsigned int  )0;
    sqlstm.sqadto[9] = (unsigned short )0;
    sqlstm.sqtdso[9] = (unsigned short )0;
    sqlstm.sqhstv[10] = (         void  *)&usk_details_structure.hv_appealBranch;
    sqlstm.sqhstl[10] = (unsigned int  )9;
    sqlstm.sqhsts[10] = (         int  )0;
    sqlstm.sqindv[10] = (         void  *)&usk_details_structure_ind.hv_appealBranch_ind;
    sqlstm.sqinds[10] = (         int  )0;
    sqlstm.sqharm[10] = (unsigned int  )0;
    sqlstm.sqadto[10] = (unsigned short )0;
    sqlstm.sqtdso[10] = (unsigned short )0;
    sqlstm.sqhstv[11] = (         void  *)&usk_details_structure.hv_appealUserID;
    sqlstm.sqhstl[11] = (unsigned int  )11;
    sqlstm.sqhsts[11] = (         int  )0;
    sqlstm.sqindv[11] = (         void  *)&usk_details_structure_ind.hv_appealUserID_ind;
    sqlstm.sqinds[11] = (         int  )0;
    sqlstm.sqharm[11] = (unsigned int  )0;
    sqlstm.sqadto[11] = (unsigned short )0;
    sqlstm.sqtdso[11] = (unsigned short )0;
    sqlstm.sqhstv[12] = (         void  *)&usk_details_structure.hv_appealRemark;
    sqlstm.sqhstl[12] = (unsigned int  )253;
    sqlstm.sqhsts[12] = (         int  )0;
    sqlstm.sqindv[12] = (         void  *)&usk_details_structure_ind.hv_appealRemark_ind;
    sqlstm.sqinds[12] = (         int  )0;
    sqlstm.sqharm[12] = (unsigned int  )0;
    sqlstm.sqadto[12] = (unsigned short )0;
    sqlstm.sqtdso[12] = (unsigned short )0;
    sqlstm.sqhstv[13] = (         void  *)&usk_details_structure.hv_appealPercent;
    sqlstm.sqhstl[13] = (unsigned int  )sizeof(float);
    sqlstm.sqhsts[13] = (         int  )0;
    sqlstm.sqindv[13] = (         void  *)&usk_details_structure_ind.hv_appealPercent_ind;
    sqlstm.sqinds[13] = (         int  )0;
    sqlstm.sqharm[13] = (unsigned int  )0;
    sqlstm.sqadto[13] = (unsigned short )0;
    sqlstm.sqtdso[13] = (unsigned short )0;
    sqlstm.sqhstv[14] = (         void  *)&usk_details_structure.hv_amtToPay;
    sqlstm.sqhstl[14] = (unsigned int  )sizeof(float);
    sqlstm.sqhsts[14] = (         int  )0;
    sqlstm.sqindv[14] = (         void  *)&usk_details_structure_ind.hv_amtToPay_ind;
    sqlstm.sqinds[14] = (         int  )0;
    sqlstm.sqharm[14] = (unsigned int  )0;
    sqlstm.sqadto[14] = (unsigned short )0;
    sqlstm.sqtdso[14] = (unsigned short )0;
    sqlstm.sqhstv[15] = (         void  *)&usk_details_structure.hv_appealStatus;
    sqlstm.sqhstl[15] = (unsigned int  )28;
    sqlstm.sqhsts[15] = (         int  )0;
    sqlstm.sqindv[15] = (         void  *)&usk_details_structure_ind.hv_appealStatus_ind;
    sqlstm.sqinds[15] = (         int  )0;
    sqlstm.sqharm[15] = (unsigned int  )0;
    sqlstm.sqadto[15] = (unsigned short )0;
    sqlstm.sqtdso[15] = (unsigned short )0;
    sqlstm.sqhstv[16] = (         void  *)&usk_details_structure.hv_sscBranch;
    sqlstm.sqhstl[16] = (unsigned int  )9;
    sqlstm.sqhsts[16] = (         int  )0;
    sqlstm.sqindv[16] = (         void  *)&usk_details_structure_ind.hv_sscBranch_ind;
    sqlstm.sqinds[16] = (         int  )0;
    sqlstm.sqharm[16] = (unsigned int  )0;
    sqlstm.sqadto[16] = (unsigned short )0;
    sqlstm.sqtdso[16] = (unsigned short )0;
    sqlstm.sqhstv[17] = (         void  *)&usk_details_structure.hv_sscUserID;
    sqlstm.sqhstl[17] = (unsigned int  )11;
    sqlstm.sqhsts[17] = (         int  )0;
    sqlstm.sqindv[17] = (         void  *)&usk_details_structure_ind.hv_sscUserID_ind;
    sqlstm.sqinds[17] = (         int  )0;
    sqlstm.sqharm[17] = (unsigned int  )0;
    sqlstm.sqadto[17] = (unsigned short )0;
    sqlstm.sqtdso[17] = (unsigned short )0;
    sqlstm.sqhstv[18] = (         void  *)&usk_details_structure.hv_sscWsID;
    sqlstm.sqhstl[18] = (unsigned int  )6;
    sqlstm.sqhsts[18] = (         int  )0;
    sqlstm.sqindv[18] = (         void  *)&usk_details_structure_ind.hv_sscWsID_ind;
    sqlstm.sqinds[18] = (         int  )0;
    sqlstm.sqharm[18] = (unsigned int  )0;
    sqlstm.sqadto[18] = (unsigned short )0;
    sqlstm.sqtdso[18] = (unsigned short )0;
    sqlstm.sqhstv[19] = (         void  *)&usk_details_structure.hv_sscDateTime;
    sqlstm.sqhstl[19] = (unsigned int  )22;
    sqlstm.sqhsts[19] = (         int  )0;
    sqlstm.sqindv[19] = (         void  *)&usk_details_structure_ind.hv_sscDateTime_ind;
    sqlstm.sqinds[19] = (         int  )0;
    sqlstm.sqharm[19] = (unsigned int  )0;
    sqlstm.sqadto[19] = (unsigned short )0;
    sqlstm.sqtdso[19] = (unsigned short )0;
    sqlstm.sqhstv[20] = (         void  *)&usk_details_structure.hv_sscRemark;
    sqlstm.sqhstl[20] = (unsigned int  )253;
    sqlstm.sqhsts[20] = (         int  )0;
    sqlstm.sqindv[20] = (         void  *)&usk_details_structure_ind.hv_sscRemark_ind;
    sqlstm.sqinds[20] = (         int  )0;
    sqlstm.sqharm[20] = (unsigned int  )0;
    sqlstm.sqadto[20] = (unsigned short )0;
    sqlstm.sqtdso[20] = (unsigned short )0;
    sqlstm.sqhstv[21] = (         void  *)&usk_details_structure.hv_payReceipt;
    sqlstm.sqhstl[21] = (unsigned int  )13;
    sqlstm.sqhsts[21] = (         int  )0;
    sqlstm.sqindv[21] = (         void  *)&usk_details_structure_ind.hv_payReceipt_ind;
    sqlstm.sqinds[21] = (         int  )0;
    sqlstm.sqharm[21] = (unsigned int  )0;
    sqlstm.sqadto[21] = (unsigned short )0;
    sqlstm.sqtdso[21] = (unsigned short )0;
    sqlstm.sqhstv[22] = (         void  *)&usk_details_structure.hv_payBranch;
    sqlstm.sqhstl[22] = (unsigned int  )9;
    sqlstm.sqhsts[22] = (         int  )0;
    sqlstm.sqindv[22] = (         void  *)&usk_details_structure_ind.hv_payBranch_ind;
    sqlstm.sqinds[22] = (         int  )0;
    sqlstm.sqharm[22] = (unsigned int  )0;
    sqlstm.sqadto[22] = (unsigned short )0;
    sqlstm.sqtdso[22] = (unsigned short )0;
    sqlstm.sqhstv[23] = (         void  *)&usk_details_structure.hv_payUserID;
    sqlstm.sqhstl[23] = (unsigned int  )11;
    sqlstm.sqhsts[23] = (         int  )0;
    sqlstm.sqindv[23] = (         void  *)&usk_details_structure_ind.hv_payUserID_ind;
    sqlstm.sqinds[23] = (         int  )0;
    sqlstm.sqharm[23] = (unsigned int  )0;
    sqlstm.sqadto[23] = (unsigned short )0;
    sqlstm.sqtdso[23] = (unsigned short )0;
    sqlstm.sqhstv[24] = (         void  *)&usk_details_structure.hv_payDateTime;
    sqlstm.sqhstl[24] = (unsigned int  )22;
    sqlstm.sqhsts[24] = (         int  )0;
    sqlstm.sqindv[24] = (         void  *)&usk_details_structure_ind.hv_payDateTime_ind;
    sqlstm.sqinds[24] = (         int  )0;
    sqlstm.sqharm[24] = (unsigned int  )0;
    sqlstm.sqadto[24] = (unsigned short )0;
    sqlstm.sqtdso[24] = (unsigned short )0;
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


				
				if(NO_DATA_FOUND) break;

				if (SQLCODE)
				{
				#ifdef DEBUG
					userlog(" get_prob_record_recs : Error in fetching the cursor prob_details : %s", SQLMSG);
				#endif
					/* Log the error */
					strcpy(prog_log.remarks,"get_prob_record_recs : Error in fetching the cursor USK_COMPOUND_FEE");
					sprintf(excep_log.error_msg,"get_prob_record_recs : Error in fetching the cursor USK_COMPOUND_FEE : %s", SQLMSG);
					excep_log.termination_flag = 'Y';
					excep_log.severity = FATAL;

					log_error(ctx);

					/* EXEC SQL CLOSE usk_details_cur; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 26;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )501;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



					return CURSOR_FETCH_ERROR;
				}

				setnull(usk_details_structure.hv_uskApplid);
				setnull(usk_details_structure.hv_uskOldApplid);
				setnull(usk_details_structure.hv_gmpcName);
				setnull(usk_details_structure.hv_lostReasonCode);
				setnull(usk_details_structure.hv_appealDate);
				setnull(usk_details_structure.hv_appealBranch);
				setnull(usk_details_structure.hv_appealUserID);
				setnull(usk_details_structure.hv_appealRemark);
				setnull(usk_details_structure.hv_appealStatus);
				setnull(usk_details_structure.hv_sscBranch);
				setnull(usk_details_structure.hv_sscUserID);
				setnull(usk_details_structure.hv_sscWsID);
				setnull(usk_details_structure.hv_sscDateTime);
				setnull(usk_details_structure.hv_sscRemark);
				setnull(usk_details_structure.hv_payReceipt);
				setnull(usk_details_structure.hv_payBranch);
				setnull(usk_details_structure.hv_payUserID);
				setnull(usk_details_structure.hv_payDateTime);

				userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : hv_uskApplid: %s",usk_details_structure.hv_uskApplid.arr);
				userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : hv_uskOldApplid: %s",usk_details_structure.hv_uskOldApplid.arr);
				userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : hv_txnSerNo: %d",usk_details_structure.hv_txnSerNo);
				userlog("JPNHG3_PYMT_ENQ L1 (enq_processing) : hv_gmpcName: %s",usk_details_structure.hv_gmpcName.arr);

				if(usk_details_structure.hv_uskApplid.arr[0] != '\0')
				{
					userlog("JPNHG3_PYMT_ENQ L1  : enq_processing() in usk_details_structure to usk_resp");
					// if(local_prob_details_ind.prob_no_ind != -1)
					// 	prob_details->prob_no = local_prob_details.prob_no;

					strcpy(usk_resp->uskApplid,(char*)usk_details_structure.hv_uskApplid.arr);
					strcpy(usk_resp->uskOldApplid,(char*)usk_details_structure.hv_uskOldApplid.arr);
					usk_resp->txnSerNo = usk_details_structure.hv_txnSerNo;

					strcpy(usk_resp->idType,(char*)usk_details_structure.hv_idType.arr);
					strcpy(usk_resp->idNo,(char*)usk_details_structure.hv_idNo.arr);
					strcpy(usk_resp->gmpcName,(char*)usk_details_structure.hv_gmpcName.arr);
					usk_resp->cardLostCount = usk_details_structure.hv_cardLostCount;
					strcpy(usk_resp->lostReasonCode,(char*)usk_details_structure.hv_lostReasonCode.arr);
					usk_resp->CF = usk_details_structure.hv_CF;
					strcpy(usk_resp->appealDate,(char*)usk_details_structure.hv_appealDate.arr);
					strcpy(usk_resp->appealBranch,(char*)usk_details_structure.hv_appealBranch.arr);
					strcpy(usk_resp->appealUserID,(char*)usk_details_structure.hv_appealUserID.arr);
					strcpy(usk_resp->appealRemark,(char*)usk_details_structure.hv_appealRemark.arr);
					usk_resp->appealPercent = usk_details_structure.hv_appealPercent;
					usk_resp->amtToPay = usk_details_structure.hv_amtToPay;
					strcpy(usk_resp->appealStatus,(char*)usk_details_structure.hv_appealStatus.arr);
					strcpy(usk_resp->sscBranch,(char*)usk_details_structure.hv_sscBranch.arr);
					strcpy(usk_resp->sscUserID,(char*)usk_details_structure.hv_sscUserID.arr);
					strcpy(usk_resp->sscWsID,(char*)usk_details_structure.hv_sscWsID.arr);
					strcpy(usk_resp->sscDateTime,(char*)usk_details_structure.hv_sscDateTime.arr);
					strcpy(usk_resp->sscRemark,(char*)usk_details_structure.hv_sscRemark.arr);
					strcpy(usk_resp->payReceipt,(char*)usk_details_structure.hv_payReceipt.arr);
					strcpy(usk_resp->payBranch,(char*)usk_details_structure.hv_payBranch.arr);
					strcpy(usk_resp->payUserID,(char*)usk_details_structure.hv_payUserID.arr);
					strcpy(usk_resp->payDateTime,(char*)usk_details_structure.hv_payDateTime.arr);
					
				}
				
				usk_resp++;
			}
			
			/* EXEC SQL CLOSE usk_details_cur; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 26;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )516;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



			userlog("JPNHG3_PYMT_ENQ L1  : enq_processing() usk_details_cur closed");					
		}


		ret_code = 0;
		return ret_code;

	}
	
	return SUCCESS;
}
