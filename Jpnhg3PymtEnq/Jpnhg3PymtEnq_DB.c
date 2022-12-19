
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
            void  *sqhstv[8];
   unsigned int   sqhstl[8];
            int   sqhsts[8];
            void  *sqindv[8];
            int   sqinds[8];
   unsigned int   sqharm[8];
   unsigned int   *sqharc[8];
   unsigned short  sqadto[8];
   unsigned short  sqtdso[8];
} sqlstm = {12,8};

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

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4274,178,0,0,
5,0,0,1,89,0,4,245,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
28,0,0,2,88,0,4,284,0,0,2,1,0,1,0,2,1,0,0,1,9,0,0,
51,0,0,3,186,0,4,337,0,0,4,2,0,1,0,2,4,0,0,2,3,0,0,1,9,0,0,1,9,0,0,
82,0,0,4,61,0,4,380,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
105,0,0,5,203,0,4,408,0,0,8,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,2,3,0,0,1,9,0,0,
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
	
	
	char curr_date_time[DATE_TIME_SIZE];
	int ret_val = 0;
	char program_id[PROG_ID_SIZE];
	long resp_len = 0;

	
	memset(&prog_log, 0, PROG_LOG_SIZE);
	memset(&excep_log, 0, APPL_EXCEP_LOG_SIZE);
		
	/* Initialize the variables used for logging	*/
	/* Get current date-time for logging			*/
	strcpy(curr_date_time, get_date_time());

	/* Assign request buffer	*/
	req = (JPNHG3_PYMT_ENQ_REQ_T *) pReq;


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
	
	resp_len = sizeof(JPNHG3_PYMT_ENQ_RESP_T);

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

	#ifdef DEBUG
			userlog("JPNHG3_PYMT_ENQ : req->header.application_id:%s:",req->header.application_id);
			userlog("JPNHG3_PYMT_ENQ : req->header.branch_code:%s:", req->header.branch_code);
			userlog("JPNHG3_PYMT_ENQ : req->header.service_id:%d:", req->header.service_id);
			userlog("JPNHG3_PYMT_ENQ : req->header.user_id:%s:", req->header.user_id);
			userlog("JPNHG3_PYMT_ENQ : req->header.workstation_id:%s:", req->header.workstation_id);
			//userlog("JPNHG3_PYMT_ENQ : req->kptno_req_cnt:%d:",req->kptno_req_cnt);			
	#endif

	resp->header = req->header;
			
	if((ret_val = check_header(req->header,ctx)) != SUCCESS)
	{
	#ifdef DEBUG
			userlog("JPNHG3_PYMT_ENQ : check header failed");
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
	#ifdef DEBUG
			userlog("JPNHG3_PYMT_ENQ :check header Successful");
	#endif

	

	#ifdef DEBUG
		userlog("JPNHG3_PYMT_ENQ :");		
	#endif
	
	
	#ifdef DEBUG
		userlog("JPNHG3_PYMT_ENQ :Before the enq_processing function");
	#endif
		
		/* enquiry processing function */		
		ret_val = enq_processing(req,resp,ctx);
		if(ret_val != SUCCESS)
		{
		#ifdef DEBUG
			userlog("JPNHG3_PYMT_ENQ :enq_processing function failed");
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
			
	#ifdef DEBUG
		userlog(" ");
		userlog("Response buffer values ");
		userlog("JPNHG3_PYMT_ENQ :  resp->applid : %s",resp->applid);
		userlog("JPNHG3_PYMT_ENQ :  resp->oldapplid : %s",resp->oldapplid);
		userlog("JPNHG3_PYMT_ENQ :  resp->collcenter : %s",resp->collcenter);
		userlog("JPNHG3_PYMT_ENQ :  resp->origamt : %.2f",resp->origamt);
		userlog("JPNHG3_PYMT_ENQ :  resp->agencyrevncode : %d",resp->agencyrevncode);
		userlog("JPNHG3_PYMT_ENQ :  resp->name : %s",resp->name);
		userlog("JPNHG3_PYMT_ENQ :  resp->address1 : %s",resp->address1);
		userlog("JPNHG3_PYMT_ENQ :  resp->address2 : %s",resp->address2);
		userlog("JPNHG3_PYMT_ENQ :  resp->address3 : %s",resp->address3);
		userlog("JPNHG3_PYMT_ENQ :  resp->postcode : %s",resp->postcode);
		userlog("JPNHG3_PYMT_ENQ :  resp->statecode : %s",resp->statecode);
		userlog("JPNHG3_PYMT_ENQ :  resp->citycode : %d",resp->citycode);
	#endif

	#ifdef DEBUG
		userlog(" ");
		userlog("JPNHG3_PYMT_ENQ :Service Completed");
		userlog(" ");
	#endif
	
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

	sql_context pcCtx; 
	/* EXEC SQL END DECLARE SECTION; */ 



	pcCtx = ctx; 
	/* EXEC SQL CONTEXT USE :pcCtx; */ 



	// copy the kptno from req buffer to local variable here
	strcpy((char*)kptno.arr,req->kptno);
	setlen(kptno);

	#ifdef DEBUG
		userlog("JPNHG3_PYMT_ENQ (enq_processing) : req->kptno: %s",req->kptno);
		userlog("JPNHG3_PYMT_ENQ (enq_processing) : kptno: %s",kptno.arr);
	#endif


	applid.arr[0] = '\0';
	/* EXEC SQL SELECT MAX(APPLID) INTO :applid FROM APPLICATION 
		WHERE KPTNO = :kptno 
			AND APPLSTAT IN ('X','Q'); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 2;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select max(APPLID) into :b0  from APPLICATION where (KPTNO=:\
b1 and APPLSTAT in ('X','Q'))";
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



	applid.arr[applid.len] = '\0';	

	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(sqlca.sqlcode != 0)
	{
		#ifdef DEBUG
			userlog("JPNHG3_PYMT_ENQ  : enq_processing() failed while select max(applid) from APPLICATION");
		#endif
		strcpy(prog_log.remarks,"enq_processing() failed while select max(applid) from APPLICATION");
		sprintf(excep_log.error_msg,"enq_processing() failed while select max(applid) from APPLICATION:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		return SELECT_ERROR;
	}

	#ifdef DEBUG
		userlog("JPNHG3_PYMT_ENQ (enq_processing) : max applid after select: %s",applid.arr);		
	#endif


	if(applid.arr[0] == '\0')
	{
		#ifdef DEBUG
			userlog("JPNHG3_PYMT_ENQ (enq_processing) : No record found for HG3 payment");		
		#endif

		ret_code = 70001;
		return ret_code;  // no record found for HG3 payment	

	}
	else
	{
		/* EXEC SQL SELECT GENKPT INTO :genkpt FROM PROBL_RECORD
			WHERE APPLID = :applid
				AND PROBLREASONCODE = 'Q0001'; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 2;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select GENKPT into :b0  from PROBL_RECORD where (APPLID=:b1\
 and PROBLREASONCODE='Q0001')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )28;
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



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(sqlca.sqlcode != 0)
		{
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_ENQ  : enq_processing() failed while select genkpt from PROBL_RECORD");
			#endif
			strcpy(prog_log.remarks,"enq_processing() failed while select genkpt from PROBL_RECORD");
			sprintf(excep_log.error_msg,"enq_processing() failed while select genkpt from PROBL_RECORD:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			return SELECT_ERROR;
		}

		#ifdef DEBUG
			userlog("JPNHG3_PYMT_ENQ (enq_processing) : after select from PROBL_RECORD genkpt: %c",genkpt);
		#endif


		if(genkpt == '0')
		{
			// no record found
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_ENQ (enq_processing) : No record found for genkpt == 0 condition");		
			#endif

			ret_code = 70001;
			return ret_code;  

		}
		else if(genkpt == 'P')
		{ 
			// applicant has paid already
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_ENQ (enq_processing) : applicant has paid already for genkpt == P condition");		
			#endif
			ret_code = 70001;
			return ret_code;

		}
		else if(genkpt == 'U')
		{
			// unpaid applicant
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_ENQ (enq_processing) : unpaid applicant for genkpt == U condition");		
			#endif
			arcode = 0; feeamt = 0;
			/* EXEC SQL SELECT FEEAMT,AGENCYREVNCODE INTO :feeamt,:arcode
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
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select FEEAMT ,AGENCYREVNCODE into :b0,:b1  from OUTSTAND_\
TXN_FEE where ((APPLID=:b2 and FEETYPE='CF') and TXNSERNO=(select TXNSERNO  fr\
om APPL_TXN where (APPLID=:b2 and TXNCODE='403')))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )51;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&feeamt;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&arcode;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&applid;
   sqlstm.sqhstl[2] = (unsigned int  )22;
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
					userlog("JPNHG3_PYMT_ENQ  : enq_processing() failed while select feeamt from OUTSTAND_TXN_FEE");
				#endif
				strcpy(prog_log.remarks,"enq_processing() failed while select feeamt from OUTSTAND_TXN_FEE");
				sprintf(excep_log.error_msg,"enq_processing() failed while select feeamt from OUTSTAND_TXN_FEE:%s ",sqlmsg);
				excep_log.termination_flag = 'Y';
				excep_log.severity = FATAL;
				log_error(ctx);

				return SELECT_ERROR;
			}

			#ifdef DEBUG
				userlog("JPNHG3_PYMT_ENQ (enq_processing) : after select from OUTSTAND_TXN_FEE feeamt: %.2f",feeamt);		
				userlog("JPNHG3_PYMT_ENQ (enq_processing) : after select from OUTSTAND_TXN_FEE agencyrevncode: %d",arcode);		
			#endif

			if(arcode > 0)
			{

				// copy these values into response buffer
				strcpy(resp->applid,req->applid);
				strcpy(resp->oldapplid,(char*)applid.arr);
				resp->origamt = feeamt;
				//strcpy(resp->agencyrevncode,(char*)arcode.arr);
				resp->agencyrevncode = arcode;

				ccenter.arr[0] = '\0';
				/* EXEC SQL SELECT COLLCENTER INTO :ccenter FROM APPLICATION
					WHERE APPLID = :applid; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select COLLCENTER into :b0  from APPLICATION where APPLID\
=:b1";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )82;
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
						userlog("JPNHG3_PYMT_ENQ  : enq_processing() failed while select ccenter from APPLICATION");
					#endif
					strcpy(prog_log.remarks,"enq_processing() failed while select ccenter from APPLICATION");
					sprintf(excep_log.error_msg,"enq_processing() failed while select ccenter from APPLICATION:%s ",sqlmsg);
					excep_log.termination_flag = 'Y';
					excep_log.severity = FATAL;
					log_error(ctx);

					return SELECT_ERROR;
				}

				#ifdef DEBUG				
					userlog("JPNHG3_PYMT_ENQ (enq_processing) : after select from APPLICATION collcenter: %s",ccenter.arr);		
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
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select ((((GMPCSHORTNAME1||' ')||GMPCSHORTNAME2)||' ')||G\
MPCSHORTNAME3) ,ADDRESS1 ,ADDRESS2 ,ADDRESS3 ,POSTCODE ,STATECODE ,CITYCODE in\
to :b0,:b1,:b2,:b3,:b4,:b5,:b6  from APPNT_JPN_INFO where APPLID=:b7";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )105;
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
						userlog("JPNHG3_PYMT_ENQ  : enq_processing() failed while select name from APPNT_JPN_INFO");
					#endif
					strcpy(prog_log.remarks,"enq_processing() failed while select name from APPNT_JPN_INFO");
					sprintf(excep_log.error_msg,"enq_processing() failed while select name from APPNT_JPN_INFO:%s ",sqlmsg);
					excep_log.termination_flag = 'Y';
					excep_log.severity = FATAL;
					log_error(ctx);

					return SELECT_ERROR;
				}
				
				#ifdef DEBUG				
					userlog("JPNHG3_PYMT_ENQ (enq_processing) : after select from APPNT_JPN_INFO name: %s",name.arr);
					userlog("JPNHG3_PYMT_ENQ (enq_processing) : after select from APPNT_JPN_INFO address1: %s",address1.arr);	
					userlog("JPNHG3_PYMT_ENQ (enq_processing) : after select from APPNT_JPN_INFO address2: %s",address2.arr);
					userlog("JPNHG3_PYMT_ENQ (enq_processing) : after select from APPNT_JPN_INFO address3: %s",address3.arr);
					userlog("JPNHG3_PYMT_ENQ (enq_processing) : after select from APPNT_JPN_INFO postcode: %s",postcode.arr);
					userlog("JPNHG3_PYMT_ENQ (enq_processing) : after select from APPNT_JPN_INFO statecode: %s",statecode.arr);
					userlog("JPNHG3_PYMT_ENQ (enq_processing) : after select from APPNT_JPN_INFO citycode: %d",citycode);
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
				userlog("JPNHG3_PYMT_ENQ (enq_processing) : In the else part for genkpt not P, not U  condition : %c",genkpt);		
			#endif
			ret_code = 70001;
			return ret_code;
		}

	}
	

	return SUCCESS;
}
