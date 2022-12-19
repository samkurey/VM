
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
    ".\\TerminateAppl_DB.pc"
};


static unsigned int sqlctx = 137848011;


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
            void  *sqhstv[44];
   unsigned int   sqhstl[44];
            int   sqhsts[44];
            void  *sqindv[44];
            int   sqinds[44];
   unsigned int   sqharm[44];
   unsigned int   *sqharc[44];
   unsigned short  sqadto[44];
   unsigned short  sqtdso[44];
} sqlstm = {12,44};

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
5,0,0,1,70,0,4,949,0,0,2,1,0,1,0,2,1,0,0,1,9,0,0,
28,0,0,2,74,0,5,1036,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,
55,0,0,3,85,0,3,1047,0,0,4,4,0,1,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,
86,0,0,4,200,0,3,1073,0,0,7,7,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,
0,1,9,0,0,1,9,0,0,
129,0,0,5,273,0,3,1252,0,0,13,13,0,1,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,
0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,1,0,0,1,97,0,0,1,1,0,0,
196,0,0,6,189,0,3,1321,0,0,9,9,0,1,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,9,0,
0,1,9,0,0,1,9,0,0,1,97,0,0,1,1,0,0,
247,0,0,7,175,0,5,1443,0,0,4,4,0,1,0,1,1,0,0,1,97,0,0,1,97,0,0,1,97,0,0,
278,0,0,8,188,0,3,1467,0,0,5,5,0,1,0,1,97,0,0,1,1,0,0,1,97,0,0,1,97,0,0,1,97,0,
0,
313,0,0,9,126,0,5,1661,0,0,4,4,0,1,0,1,1,0,0,1,97,0,0,1,97,0,0,1,97,0,0,
344,0,0,10,188,0,3,1684,0,0,5,5,0,1,0,1,97,0,0,1,1,0,0,1,97,0,0,1,97,0,0,1,97,
0,0,
379,0,0,11,77,0,4,1715,0,0,2,1,0,1,0,2,1,0,0,1,97,0,0,
402,0,0,12,53,0,5,1738,0,0,2,2,0,1,0,1,1,0,0,1,97,0,0,
425,0,0,13,58,0,5,1754,0,0,2,2,0,1,0,1,1,0,0,1,97,0,0,
448,0,0,14,120,0,5,1800,0,0,4,4,0,1,0,1,1,0,0,1,97,0,0,1,97,0,0,1,97,0,0,
479,0,0,15,77,0,4,1820,0,0,2,1,0,1,0,2,1,0,0,1,97,0,0,
502,0,0,16,53,0,5,1844,0,0,2,2,0,1,0,1,1,0,0,1,97,0,0,
525,0,0,17,58,0,5,1859,0,0,2,2,0,1,0,1,1,0,0,1,97,0,0,
548,0,0,18,59,0,4,1902,0,0,2,1,0,1,0,2,1,0,0,1,97,0,0,
571,0,0,19,120,0,5,1932,0,0,4,4,0,1,0,1,1,0,0,1,97,0,0,1,97,0,0,1,97,0,0,
602,0,0,20,77,0,4,1949,0,0,2,1,0,1,0,2,1,0,0,1,97,0,0,
625,0,0,21,53,0,5,1972,0,0,2,2,0,1,0,1,1,0,0,1,97,0,0,
648,0,0,22,58,0,5,1986,0,0,2,2,0,1,0,1,1,0,0,1,97,0,0,
671,0,0,23,148,0,5,2028,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,
698,0,0,24,238,0,3,2154,0,0,10,10,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,97,
0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,97,0,0,
753,0,0,25,1061,0,3,2561,0,0,44,44,0,1,0,1,9,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,
97,0,0,1,3,0,0,1,9,0,0,1,97,0,0,1,1,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,
97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,1,0,0,1,9,0,0,1,97,0,0,1,97,0,0,1,
9,0,0,1,97,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,3,0,0,1,1,0,0,
1,3,0,0,1,97,0,0,1,9,0,0,1,97,0,0,1,97,0,0,1,1,0,0,1,1,0,0,1,9,0,0,1,9,0,0,1,
97,0,0,1,9,0,0,1,9,0,0,
944,0,0,26,175,0,5,2623,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,
971,0,0,27,317,0,3,2751,0,0,12,12,0,1,0,1,97,0,0,1,3,0,0,1,97,0,0,1,1,0,0,1,97,
0,0,1,9,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,97,0,0,
1034,0,0,28,189,0,3,2856,0,0,9,9,0,1,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,9,
0,0,1,9,0,0,1,9,0,0,1,97,0,0,1,1,0,0,
1085,0,0,29,137,0,5,2936,0,0,4,4,0,1,0,1,9,0,0,1,97,0,0,1,97,0,0,1,3,0,0,
1116,0,0,30,59,0,5,2980,0,0,2,2,0,1,0,1,9,0,0,1,97,0,0,
1139,0,0,31,113,0,3,3041,0,0,5,5,0,1,0,1,97,0,0,1,3,0,0,1,97,0,0,1,4,0,0,1,3,0,
0,
1174,0,0,32,333,0,3,3172,0,0,14,14,0,1,0,1,97,0,0,1,3,0,0,1,9,0,0,1,97,0,0,1,4,
0,0,1,97,0,0,1,3,0,0,1,1,0,0,1,1,0,0,1,9,0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,97,0,0,
1245,0,0,33,73,0,5,3231,0,0,3,3,0,1,0,1,3,0,0,1,97,0,0,1,3,0,0,
1272,0,0,34,158,0,3,3274,0,0,5,5,0,1,0,1,1,0,0,1,3,0,0,1,97,0,0,1,9,0,0,1,97,0,
0,
1307,0,0,35,132,0,5,3314,0,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
1330,0,0,36,75,0,5,3332,0,0,1,1,0,1,0,1,97,0,0,
1349,0,0,37,171,0,4,3376,0,0,3,2,0,1,0,2,9,0,0,1,3,0,0,1,97,0,0,
1376,0,0,38,193,0,3,3411,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,9,0,0,
1403,0,0,39,0,0,29,3426,0,0,0,0,0,1,0,
1418,0,0,40,193,0,3,3438,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,9,0,0,
1445,0,0,41,0,0,29,3453,0,0,0,0,0,1,0,
1460,0,0,42,66,0,2,3496,0,0,1,1,0,1,0,1,97,0,0,
1479,0,0,43,130,0,4,3516,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
1502,0,0,44,59,0,4,3535,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
1525,0,0,45,200,0,4,3548,0,0,3,1,0,1,0,2,3,0,0,2,3,0,0,1,97,0,0,
1552,0,0,46,75,0,5,3574,0,0,2,2,0,1,0,1,97,0,0,1,3,0,0,
1575,0,0,47,68,0,2,3590,0,0,2,2,0,1,0,1,97,0,0,1,3,0,0,
1598,0,0,48,83,0,4,3604,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
1621,0,0,49,94,0,2,3612,0,0,2,2,0,1,0,1,97,0,0,1,3,0,0,
1644,0,0,50,195,0,3,3615,0,0,4,4,0,1,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,
1675,0,0,51,400,0,3,3660,0,0,4,4,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,
1706,0,0,52,194,0,4,3689,0,0,4,2,0,1,0,2,97,0,0,2,3,0,0,1,97,0,0,1,97,0,0,
1737,0,0,53,221,0,5,3701,0,0,4,4,0,1,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,
1768,0,0,54,157,0,5,3722,0,0,1,1,0,1,0,1,97,0,0,
1787,0,0,55,93,0,2,3741,0,0,3,3,0,1,0,1,97,0,0,1,3,0,0,1,3,0,0,
1814,0,0,56,200,0,3,3743,0,0,5,5,0,1,0,1,97,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,97,
0,0,
};


/* $Header$ */
/********************************************************************************/
/* Filename    : terminate_appl.pc												*/
/* Author      : Vaibhav														*/
/* Description : This file contains database routines for TERMINATE_APPLservice	*/
/********************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "gscbdef.h"
#include "gscblookupdef.h"
#include "gscbio.h"
#include "gscblog.h"
#include "terminate_appl_io.h"
#include "rev_gmpc_appl_io.h"
#include "jpn_update_io.h"
#include "jpj_update_io.h"
#include "terminate_appl.h"
//#include "userlog_r.h"

#define SQLCA_STORAGE_CLASS extern

#include <sqlca.h>

#import  "JpnUpdate.tlb" no_namespace
#import  "RevGmpcAppl.tlb" no_namespace
//#import  "JpjUpdate.tlb" no_namespace

extern  "C" void userlog(char* szFormatString, ...);

HEADER_T header;

extern "C" PROG_ACCESS_LOG_T prog_log;
extern "C" APPL_EXCEP_LOG_T excep_log;
extern "C" TXN_LOG_T tran_log;

//EXEC SQL INCLUDE SQLCA;

int Terminate_Appl(TERMINATE_APPL_REQ_T *pReq, 
					TERMINATE_APPL_RESP_T **pResp, long *pRespSize,void * ctx)
{
	struct sqlca sqlca = {0};

	TERMINATE_APPL_REQ_T *req;
	TERMINATE_APPL_RESP_T *resp;
	TXN_CANCEL_CODES_T *txn_cancel_codes;
	SUPVR_REMARKS_T	*supvr_remarks;
	int ret_val;
	APPL_TXN_T *appl_txn;
	APPL_PROC_T *appl_proc;
	APPL_HISTORY_T *appl_history;
	TERMINATE_APPL_T *application;
	PAYMENT_T *payment_info;
	char supvr_notes[SUPERVISOR_NOTE_SIZE]={0};
	APPL_TXN_FEE_T *txn_fee;
	APPL_TXN_SUMMONS_T *txn_summ;
	OLD_TXN_T *old_txn;
	REV_GMPC_APPL_REQ_T *rev_appl_req;
	long rev_appl_req_len = 0;
	char kptno[KPT_SIZE];
	req = (TERMINATE_APPL_REQ_T *)pReq;

	 //samsuri unremark this on 21 july 2022
	long ReqLen = 0;
	long RespLen = 0;
	long ret_code = 0;
	int callFlag = 0;
	ReqLen = sizeof(REV_GMPC_APPL_REQ_T);
	int ret;
	SAFEARRAY *psa;
	SAFEARRAY *psaRsp;
	unsigned char *pData = NULL; //samsuri unremark this on 21 july 2022


#ifdef DEBUG
	userlog("TERMINATE_APPL : Entered Service");
	userlog("TERMINATE_APPL : Request Data");
	userlog("TERMINATE_APPL : Applid %s", req->header.application_id);
	userlog("TERMINATE_APPL : cancel_code %s", req->cancel_code);
	userlog("TERMINATE_APPL : termination_flag %c", req->termination_flag);
	userlog("TERMINATE_APPL : issuance_flag %c", req->issuance_flag);
	userlog("TERMINATE_APPL : appl_flag %c", req->appl_flag);
	userlog("TERMINATE_APPL : txn_count %d", req->txn_count);
	userlog("TERMINATE_APPL : proc_count %d", req->proc_count);
	userlog("TERMINATE_APPL : supvr_remarks_count %d", req->supvr_remarks_count);
	userlog("TERMINATE_APPL : hist_count %d txn_fee_count %d txn_summ_count %d old_txn_count %d", req->hist_count, req->txn_fee_count, req->txn_summ_count, req->old_txn_count);

#endif //DEBUG

	/* Get current date-time for logging */
	strcpy(excep_log.error_date, get_date_time());
	strcpy(excep_log.application_id, req->header.application_id);
	strcpy(excep_log.branch_code, req->header.branch_code);
	strcpy(excep_log.error_msg, "");
	sprintf(excep_log.program_id, "%d", TERMINATE_APP_ID);
	excep_log.severity = 'F';
	excep_log.termination_flag = 'Y';
	strcpy(excep_log.user_id, req->header.user_id);
	strcpy(excep_log.workstation_id, req->header.workstation_id);

	strcpy(prog_log.access_end_time, "");
	strcpy(prog_log.application_id, req->header.application_id);
	strcpy(prog_log.branch_code, req->header.branch_code);
	sprintf(prog_log.program_id, "%d", TERMINATE_APP_ID);
	strcpy(prog_log.remarks, "");
	strcpy(prog_log.user_id, req->header.user_id);
	strcpy(prog_log.workstation_id, req->header.workstation_id);


	if((resp = (TERMINATE_APPL_RESP_T *)malloc(sizeof(TERMINATE_APPL_RESP_T))) == NULL)
	{

#ifdef DEBUG
		userlog("TERMINATE_APPL : malloc failed for response buffer ");
#endif //DEBUG

		sprintf(excep_log.error_msg, "TERMIANTE_APPL : Unable to tpalloc resp buffer ");
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';
		strcpy(prog_log.remarks, "TERMIANTE_APPL : Failed due to RESP_BUF_ERR");
		log_error(ctx);
		//tpreturn(TPFAIL, RESP_BUF_ERR, NULL, 0, 0);
		return RESP_BUF_ERR;
	}

	memset(resp, 0, sizeof(TERMINATE_APPL_RESP_T));

	/* Copy the Request Header into Response Header */
	resp->header = header = req->header;

	if((ret_val = check_header(req->header,ctx)) != SUCCESS)
	{
	
#ifdef DEBUG
		userlog("TERMINATE_APPL : check header failed");
#endif //DEBUG
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';
		strcpy(prog_log.remarks, "TERMINATE_APPL : Failed due to invalid header");
		log_error(ctx);
		//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
		*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
		//memcpy(*pResp, resp, resp_len);
		*pResp = resp;
		return ret_val;
	}

	if((req->termination_flag != 'T') && (req->termination_flag != 'P') &&
		(req->termination_flag != 'C'))
	{
		strcpy(excep_log.error_msg, "TERMIANTE_APPL : Invalid termination flag in request buffer");
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';
		strcpy(prog_log.remarks, "TERMIANTE_APPL : Failed due to DATA_ERROR");
		log_error(ctx);
		//tpreturn(TPSUCCESS, INVALID_TERM_FLAG_ERR, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
		*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
		//memcpy(*pResp, resp, resp_len);
		*pResp = resp;
		return INVALID_TERM_FLAG_ERR;
	}

	//P = partial terminate, T = total terminate, C = cancel application
	if((req->termination_flag == 'P') && req->txn_count == 0)
	{
		strcpy(excep_log.error_msg, "TERMIANTE_APPL : transaction count cannot be 0 in partial termination");
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';
		strcpy(prog_log.remarks, "TERMIANTE_APPL : Failed due to DATA_ERROR");
		log_error(ctx);
		//tpreturn(TPSUCCESS, TXN_COUNT_ERR, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
		*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
		//memcpy(*pResp, resp, resp_len);
		*pResp = resp;
		return TXN_COUNT_ERR;
	}

	if(gscbbegin_trans(ctx) == FAILURE)
	{
		userlog("TERMINATE_APPL : could not begin transaction");
		userlog("TERMINATE_APPL : Failed due to BEGIN_TRAN_ERROR");
		//tpreturn(TPSUCCESS, BEGIN_TRAN_ERROR, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
		*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
		//memcpy(*pResp, resp, resp_len);
		*pResp = resp;
		return BEGIN_TRAN_ERROR;
	}

	/* Added on 22062001 */
	supvr_notes[0] = '\0';
	strcpy(supvr_notes, req->supvr_notes);

	userlog("req->supvr_notes (appl_remarks) : %s",req->supvr_notes);
	userlog("supvr_notes (appl_remarks) : %s",supvr_notes);


	if(req->termination_flag == 'P')
	{
		txn_cancel_codes = (TXN_CANCEL_CODES_T *)(req + 1);
		if((ret_val = check_cancel_codes(req->txn_count, txn_cancel_codes,ctx)) != GMPC_GOOD)
		{
			log_error(ctx);
			//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
			*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
		//memcpy(*pResp, resp, resp_len);
		*pResp = resp;
		return ret_val;
		}

		if((ret_val = update_txn_table(req->header.application_id, txn_cancel_codes, req->txn_count,ctx)) != GMPC_GOOD)
		{
			log_error(ctx);
			//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
				*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
		//memcpy(*pResp, resp, resp_len);
		*pResp = resp;
		return ret_val;
		}

		supvr_remarks = (SUPVR_REMARKS_T *)(txn_cancel_codes + req->txn_count);

		if((ret_val = insert_supvr_remarks(req->header.application_id, req->supvr_remarks_count, supvr_remarks,ctx)) != GMPC_GOOD)
		{
			log_error(ctx);
			//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
				*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
			//memcpy(*pResp, resp, resp_len);
			*pResp = resp;
			return ret_val;
		}

		appl_proc = (APPL_PROC_T *)(supvr_remarks + req->supvr_remarks_count);
		if ((req->issuance_flag == 'Y') && (req->proc_count > 0))
		{
			#ifdef DEBUG
					userlog("TERMINATE_APPL : calling insert_appl_proc()");
			#endif //DEBUG
			if((ret_val = insert_appl_proc (req, appl_proc,ctx)) != GMPC_GOOD)
			{
				log_error(ctx);
				//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
					*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
					//memcpy(*pResp, resp, resp_len);
					*pResp = resp;
					return ret_val;
			}

		}

		payment_info = (PAYMENT_T *)(appl_proc + req->proc_count);
		if((ret_val = reverse_pay(req->application_id, payment_info, req->rvrs_count,ctx)) != GMPC_GOOD)
		{
			log_error(ctx);
			//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
				*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
				//memcpy(*pResp, resp, resp_len);
				*pResp = resp;
				return ret_val;
		}
	}


	/* Check if the request is for Total Termination */
	if(req->termination_flag == 'T')
	{
		if(req->issuance_flag == 'N')
		{

			if(req->appl_flag == 'Y')
			{
				application = (TERMINATE_APPL_T *)(req + 1);
				appl_txn = (APPL_TXN_T *)(application + 1);
			}
			else if (req->appl_flag == 'R')
			{
				payment_info = (PAYMENT_T *)(req + 1);
				appl_txn = (APPL_TXN_T *)(payment_info + 1);

			#ifdef DEBUG
				userlog("TERMINATE_APPL : Payment Reversal case, calling reverse_payment()");
			#endif
				if((ret_val = reverse_payment(req->header.application_id, (PAYMENT_T *)payment_info,ctx)) != GMPC_GOOD)
				{
					log_error(ctx);
					//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
					*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
					//memcpy(*pResp, resp, resp_len);
					*pResp = resp;
					return ret_val;
				}
			}
			else
				appl_txn = (APPL_TXN_T *)(req + 1);


			appl_proc = (APPL_PROC_T *)(appl_txn + req->txn_count);

			if((appl_proc->id_type[0] == '9') && (appl_proc->id_type[1] == '0'))
			{
				strncpy(kptno, appl_proc->id_no, 12);
				kptno[12] = '\0';
			}
			else
			{
				kptno[0] = '\0';
			}

//			if(req->appl_flag == 'N')
//			{
//				if((ret_val = update_application(req->header.application_id, req->cancel_code, req->cancel_dt_time, req->supvr_notes, req->termination_flag)) != GMPC_GOOD)
				if((ret_val = update_application(req, kptno,ctx)) != GMPC_GOOD)
				{
					log_error(ctx);
					//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
					*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
					//memcpy(*pResp, resp, resp_len);
					*pResp = resp;
					return ret_val;
				}
//			}
/*			else
			{
				if((ret_val = insert_application((TERMINATE_APPL_T *)(req + 1), req->application_id)) != GMPC_GOOD)
				{
					log_error();
					tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
				}
			}
*/

			if((ret_val = insert_txns(req, appl_txn,ctx)) != GMPC_GOOD)
			{
				log_error(ctx);
				//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
				*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
				//memcpy(*pResp, resp, resp_len);
				*pResp = resp;
				return ret_val;
			}



			supvr_remarks = (SUPVR_REMARKS_T *)(appl_proc + req->proc_count);

#ifdef DEBUG			
			userlog("TERMINATE_APPL : before insert_supvr_remarks %X, req->supvr_remarks_count %d", supvr_remarks, req->supvr_remarks_count);
#endif

			if((ret_val = insert_supvr_remarks(req->header.application_id, req->supvr_remarks_count, supvr_remarks,ctx)) != GMPC_GOOD)
			{
				log_error(ctx);
				//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
				*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
				//memcpy(*pResp, resp, resp_len);
				*pResp = resp;
				return ret_val;
			}

			appl_history = (APPL_HISTORY_T *)(supvr_remarks + req->supvr_remarks_count);
#ifdef DEBUG	
			userlog("TERMINATE_APPL : before application history %X, req->hist_count %d", appl_history, req->hist_count);
#endif


			if((ret_val = insert_appl_history(req->header.application_id, req->hist_count, appl_history,ctx)) != GMPC_GOOD)
			{
				log_error(ctx);
				//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
				*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
				//memcpy(*pResp, resp, resp_len);
				*pResp = resp;
				return ret_val;
			}

#ifdef DEBUG	
			userlog("TERMINATE_APPL : before application history %X, req->hist_count %d", appl_history, req->hist_count);
#endif

			txn_fee = (APPL_TXN_FEE_T *)(appl_history + req->hist_count);

			userlog("TERMINATE_APPL : before txn_fee %X req->txn_fee_count %d", txn_fee, req->txn_fee_count);

			if((ret_val = insert_txn_fee(req->header.application_id, req->txn_fee_count, txn_fee,ctx)) != GMPC_GOOD)
			{
				log_error(ctx);
				//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
				*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
				//memcpy(*pResp, resp, resp_len);
				*pResp = resp;
				return ret_val;
			}

#ifdef DEBUG	
			userlog("TERMINATE_APPL : before txn summ txnfee %X", txn_fee);
#endif
			txn_summ = (APPL_TXN_SUMMONS_T *)(txn_fee + req->txn_fee_count);
			if((ret_val = insert_txn_summ(req->header.application_id, req->txn_summ_count, txn_summ,ctx)) != GMPC_GOOD)
			{
				log_error(ctx);
				//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
				*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
				//memcpy(*pResp, resp, resp_len);
				*pResp = resp;
				return ret_val;
			}

			old_txn = (OLD_TXN_T *)(txn_summ + req->txn_summ_count);
			if((ret_val = update_paysrno(req->header.application_id, req->old_txn_count, old_txn,ctx)) != GMPC_GOOD)
			{
				log_error(ctx);
				//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
				*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
				//memcpy(*pResp, resp, resp_len);
				*pResp = resp;
				return ret_val;
			}

			if((ret_val = close_problems(req->header.application_id, req->header.user_id, req->termination_flag,ctx)) != GMPC_GOOD)
			{
				log_error(ctx);
				//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
				*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
				//memcpy(*pResp, resp, resp_len);
				*pResp = resp;
				return ret_val;
			}
		}
		else if(req->issuance_flag == 'Y')
		{

/*			if((ret_val = delete_appl_txn(req->header.application_id)) != GMPC_GOOD)
			{
				log_error();
				tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
			}
*/		
//			if((ret_val = update_application(req->header.application_id, req->cancel_code, 
//					req->cancel_dt_time, supvr_notes, req->termination_flag)) != GMPC_GOOD)
			if((ret_val = update_application1(req, kptno,ctx)) != GMPC_GOOD)
			{
				log_error(ctx);
				//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
				*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
				//memcpy(*pResp, resp, resp_len);
				*pResp = resp;
				return ret_val;
			}

			if((ret_val = update_card_stat(req->header,ctx)) != GMPC_GOOD)
			{
				log_error(ctx);
				//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
					*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
				//memcpy(*pResp, resp, resp_len);
				*pResp = resp;
				return ret_val;
			}
		}
		else
		{
			strcpy(excep_log.error_msg, "TERMIANTE_APPL : Invalid Issuance Flag in request");
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			strcpy(prog_log.remarks, "TERMIANTE_APPL : Failed due to DATA_ERROR");
			log_error(ctx);
			//tpreturn(TPSUCCESS, INVALID_ISSUANCE_FLAG_ERR, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
				*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
				//memcpy(*pResp, resp, resp_len);
				*pResp = resp;
				return ret_val;
		}
	}

	if(req->termination_flag == 'C')
	{
		if((ret_val = cancel_application(req->header.application_id, req->cancel_code, req->cancel_dt_time,ctx)) != GMPC_GOOD)
		{
			log_error(ctx);
		//	tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
			*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
			//memcpy(*pResp, resp, resp_len);
			*pResp = resp;
			return ret_val;
		}

		if((ret_val = reverse_pay(req->application_id, (PAYMENT_T *)(req + 1), req->rvrs_count,ctx)) != GMPC_GOOD)
		{
			log_error(ctx);
			//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
				*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
			//memcpy(*pResp, resp, resp_len);
			*pResp = resp;
			return ret_val;
		}

		userlog("After the reverse_pay : %d",ret_val);

		if(req->supvr_remarks_count > 0)
		{
			supvr_remarks = (SUPVR_REMARKS_T *)(req + 1);
			supvr_remarks = (SUPVR_REMARKS_T *)((PAYMENT_T *)supvr_remarks + req->rvrs_count);

			//supvr_remarks = (SUPVR_REMARKS_T *)((char *)req + req->rvrs_count*sizeof(PAYMENT_T));

			if((ret_val = insert_supvr_remarks(req->header.application_id, req->supvr_remarks_count, supvr_remarks,ctx)) != GMPC_GOOD)
			{
				log_error(ctx);
				//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
					*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
					//memcpy(*pResp, resp, resp_len);
					*pResp = resp;
					return ret_val;
			}
		}

		if((ret_val = close_problems(req->header.application_id, req->header.user_id, req->termination_flag,ctx)) != GMPC_GOOD)
		{
			log_error(ctx);
			//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
				*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
				//memcpy(*pResp, resp, resp_len);
				*pResp = resp;
				return ret_val;
		}

		userlog("After the close_problems : %d",ret_val);

		//if((ret_val = delete_card_stat(req->header.application_id,ctx)) != GMPC_GOOD)
		if((ret_val = delete_card_stat(req->header,ctx)) != GMPC_GOOD)
		{
			log_error(ctx);
			//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
				*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
		//memcpy(*pResp, resp, resp_len);
		*pResp = resp;
		return ret_val;


		}
		userlog("After the delete_card_stat : %d",ret_val);
	}

	userlog("Before sending the appl_remarks : %s",supvr_notes);
	/* Added on 22062001 */
	update_appl_remarks(supvr_notes, excep_log.application_id,ctx);

	userlog("After the update_appl_remarks");

	/* Commit the Transaction */
	if(gscbcommit_trans(ctx) != SUCCESS)
	{
		userlog("TERMINATE_APPL : could not commit the transaction");
		userlog("TERMINATE_APPL : Failed due to END_TRAN_ERROR");
		//tpreturn(TPSUCCESS, END_TRAN_ERROR, (char *)resp, sizeof(TERMINATE_APPL_RESP_T) ,0);
			*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
		//memcpy(*pResp, resp, resp_len);
		*pResp = resp;
		return END_TRAN_ERROR;
	}

	userlog("After the gscbcommit_trans");

	if(req->termination_flag == 'C') 
	{

		userlog("Inside the termination_flag == C, before calling reversal ");
        /* Reverse GMPC Call */

// /* // // samsuri un remark this on 21 july 2022
		if(gscbbegin_trans(ctx) == FAILURE)
		{
			userlog("TERMINATE_APPL : could not begin new transaction before  RevGmpcall");
		}

		userlog("After the gscbbegin_trans");

		rev_appl_req = (REV_GMPC_APPL_REQ_T *)malloc( sizeof(REV_GMPC_APPL_REQ_T));

		if(rev_appl_req == NULL)
		{
			userlog("Insdie the malloc failed");

			userlog("TERMINATE_APPL : could not allocate request buffer for rev_gmpc_appl service ");
			sprintf(excep_log.error_msg, "TERMINATE_APPL : could not allocate request buffer for rev_gmpc_appl service ");
			log_error(ctx);
			put_request(&(req->header),ctx);
		}
		else
		{
			userlog("Insdie the malloc success");
			rev_appl_req->header = req->header;
			rev_appl_req_len = sizeof(REV_GMPC_APPL_REQ_T);

			userlog("after the rev_appl_req_len : %d",rev_appl_req_len);
			try
			{
				userlog("Before calling the RevGmpcAppl");
				
				IRevGmpcApplServicePtr pI("RevGmpcAppl.RevGmpcApplService.1");

					userlog("Before calling the RevGmpcAppl");
			
				// create a safe array to store the stream data
				psa = SafeArrayCreateVector( VT_UI1, 0, sizeof(REV_GMPC_APPL_REQ_T));
					if(!psa)
					{
						userlog("Insdie the create a safe array failed");
						userlog("TERMINATE_APPL :  rev_gmpc_appl service failed ");
						sprintf(excep_log.error_msg, "TERMINATE_APPL :  rev_gmpc_appl service failed ");
						log_error(ctx);
						put_request(&(req->header),ctx);
					}
					else
					{
						userlog("Insdie the create a safe array Success");
						if(FAILED(	SafeArrayAccessData( psa, (void**)&pData )))
						{

							userlog("TERMINATE_APPL :  rev_gmpc_appl service failed ");
							sprintf(excep_log.error_msg, "TERMINATE_APPL : rev_gmpc_appl service failed ");
							log_error(ctx);
							put_request(&(req->header),ctx);
						}
						else
						{	
							userlog("Insdie the create a safe array access data success");
							// copy the memory into the safearray
							memcpy( pData, rev_appl_req, sizeof(REV_GMPC_APPL_REQ_T));		
							SafeArrayUnaccessData(psa);
							if(FAILED(ret = pI->Execute(psa, &psaRsp)))
							{
								userlog("TERMINATE_APPL : rev_gmpc_appl service failed ");
								sprintf(excep_log.error_msg, "TERMINATE_APPL : rev_gmpc_appl service failed ");
								log_error(ctx);
								put_request(&(req->header),ctx);
							
							}
						}
				  }
			}
	
		// Handle any COM exceptions from smart pointers
			catch (_com_error e)
			{
				userlog("TERMINATE_APPL : RevGmpcCall to rev_gmpc_appl service failed ");
				sprintf(excep_log.error_msg, "TERMINATE_APPL : rev_gmpc_appl service failed ");
				log_error(ctx);
				put_request(&(req->header),ctx);
				  

			}
			free(rev_appl_req);

		}
		if(gscbcommit_trans(ctx) != SUCCESS)
		{
			userlog("TERMINATE_APPL : could not commit the transaction after REVGMPC CALL");
		}
	
	// */  // samsuri un remark this on 21 july 2022
	}
			

	if((req->termination_flag == 'T') && (req->issuance_flag == 'Y'))
	{
		userlog("TERMINATE_APPL : before call_services");
		ret_val = call_services(req->header, req->application_id,ctx);
	}

	userlog("TERMINATE_APPL : Service completed Successfully");

	strcpy(prog_log.remarks, "TERMINATE_APPL : Completed the service successfully");

	log_exit(ctx);
	//tpreturn(TPSUCCESS, GMPC_GOOD, (char *)resp, sizeof(TERMINATE_APPL_RESP_T), 0);
	*pRespSize = sizeof(TERMINATE_APPL_RESP_T);
	//memcpy(*pResp, resp, resp_len);
	*pResp = resp;


	return GMPC_GOOD;
}



int call_jpn_update(HEADER_T header,void * ctx)
{
	// /* //samsuri unremark this	
	int ret;
	JPN_UPDATE_REQ_T *pstSendBuf;
	
	long ReqLen = 0;
	long RespLen = 0;
	long ret_code = 0;
	int callFlag = 0;
	ReqLen = sizeof(JPN_UPDATE_REQ_T);
	
	SAFEARRAY *psa;
	SAFEARRAY *psaRsp;
	char flag = UNKNOWN;
	unsigned char *pData = NULL;
	
	

	if((pstSendBuf = (JPN_UPDATE_REQ_T *)malloc(ReqLen)) == NULL)
	{
		#ifdef DEBUG
			userlog("Memory allocation failed to Send Bufffer");
		#endif
		callFlag = 1;
		
	}
	else
	{
		memset(pstSendBuf, '\0', ReqLen);
		#ifdef DEBUG
			userlog("Memory allocated to Send Buf");
		#endif
		// Copy input data into request buffer 
		strcpy(pstSendBuf->header.user_id, header.user_id);
		strcpy(pstSendBuf->header.workstation_id, header.workstation_id);
		strcpy(pstSendBuf->header.branch_code, header.branch_code);
		strcpy(pstSendBuf->header.application_id, header.application_id);
		pstSendBuf->invoke_mode = SERVICE_CALL;
		

	#ifdef DEBUG
		userlog("call_jpn_update : REQUEST DATA FOR JPN_UPDATE :");
		userlog("call_jpn_update : User Id - %s", pstSendBuf->header.user_id );
		userlog("call_jpn_update : Workstation Id - %s", pstSendBuf->header.workstation_id );
		userlog("call_jpn_update : Gsc No - %s", pstSendBuf->header.branch_code );
		userlog("call_jpn_update : Application Id - %s", pstSendBuf->header.application_id);
		userlog("call_jpn_update : Invoke mode - %c", pstSendBuf->invoke_mode);
	#endif 
	try
	{
				
		IJpnUpdateServicePtr pI("JpnUpdate.JpnUpdateService.1");
	
		// create a safe array to store the stream data
		psa = SafeArrayCreateVector( VT_UI1, 0, sizeof(JPN_UPDATE_REQ_T));
		if(!psa)
		{
			#ifdef DEBUG
				userlog("call_jpn_update: Calling insert_into_legacy_request");
			#endif
			callFlag = 1;
	    }
		else
		{
			if(FAILED(	SafeArrayAccessData( psa, (void**)&pData )))
			{
				#ifdef DEBUG
					userlog("REQ SafeArrayAccessData() Failed.");
				#endif
				callFlag = 1;
			}
			else
			{	
				// copy the memory into the safearray
				memcpy( pData, pstSendBuf, sizeof(JPN_UPDATE_REQ_T));		
				SafeArrayUnaccessData(psa);
				if(FAILED(ret = pI->Execute(psa, &psaRsp)))
				{
					#ifdef DEBUG
						userlog("Error while executing JpnUpdateService. Call to Method Execute() Failed. %d", ret);
					#endif
					callFlag =1;
				
				}
			  }
          }
	}
	
	// Handle any COM exceptions from smart pointers
	catch (_com_error e)
	{
		  #ifdef DEBUG
				userlog("Error while executing JpnUpdateService. Call to Method Execute() Failed. %s", e.ErrorMessage());
		 #endif
		  callFlag = 1;		
	
		}
	}
	
	userlog("Before freeing : pstSendBuf call_jpn_update");
	free((char*)pstSendBuf);
	userlog("After freeing : pstSendBuf call_jpn_update");
	

     if(callFlag == 1)
	 {
		return GMPC_BAD;
		
     }
	//*/ //samsuri unremark this
	return  SUCCESS;
}

int call_jpj_update(HEADER_T header,void * ctx)
{
   /*
    int ret;
	JPJ_UPDATE_REQ_T *pstSendBuf;
	
	long ReqLen = 0;
	long RespLen = 0;
	long ret_code = 0;
	int callFlag = 0;
	ReqLen = sizeof(JPN_UPDATE_REQ_T);
	
	SAFEARRAY *psa;
	SAFEARRAY *psaRsp;
	char flag = UNKNOWN;
	unsigned char *pData = NULL;
	//long lSize;
	//int ret;
	  
	
	
	#ifdef DEBUG
			userlog("call_jpj_update: In call_jpj_update(HEADER header,char flag)");
	#endif

	if((pstSendBuf = (JPJ_UPDATE_REQ_T *)malloc(ReqLen)) == NULL)
	{
		#ifdef DEBUG
			userlog("Memory allocation failed to Send Bufffer");
		#endif
		callFlag = 1;
		
	}
		else
		{ 
			memset(pstSendBuf, '\0', ReqLen);
			#ifdef DEBUG
				userlog("Memory allocated to Send Buf");
			#endif
			// Copy input data into request buffer 
			strcpy(pstSendBuf->header.user_id, header.user_id);
			strcpy(pstSendBuf->header.workstation_id, header.workstation_id);
			strcpy(pstSendBuf->header.branch_code, header.branch_code);
			strcpy(pstSendBuf->header.application_id, header.application_id);
			pstSendBuf->invoke_mode = SERVICE_CALL;
			
		#ifdef DEBUG
			userlog("call_jpj_update : REQUEST DATA FOR JPJ_UPDATE :");
			userlog("call_jpj_update : User Id - %s", pstSendBuf->header.user_id );
			userlog("call_jpj_update : Workstation Id - %s", pstSendBuf->header.workstation_id );
			userlog("call_jpj_update : Gsc No - %s", pstSendBuf->header.branch_code );
			userlog("call_jpj_update : Application Id - %s", pstSendBuf->header.application_id);
			userlog("call_jpj_update : Invoke mode - %c", pstSendBuf->invoke_mode);
		#endif 
			try
			{
						
				IJpjUpdateServicePtr pI("JpjUpdate.JpjUpdateService.1");
			
				// create a safe array to store the stream data
				psa = SafeArrayCreateVector( VT_UI1, 0, sizeof(JPJ_UPDATE_REQ_T));
					if(!psa)
					{
						#ifdef DEBUG
							userlog("SafeArrayCreateVector() Failed.");
							userlog("call_jpj_update: Calling insert_into_legacy_request");
						#endif
						callFlag = 1;
					}
					else
					{
						if(FAILED(	SafeArrayAccessData( psa, (void**)&pData )))
						{
							#ifdef DEBUG
								userlog("REQ SafeArrayAccessData() Failed.");
								userlog("call_jpj_update: Calling insert_into_legacy_request");
							#endif
							callFlag = 1;
						}
						else
						{	
							// copy the memory into the safearray
							memcpy( pData, pstSendBuf, sizeof(JPN_UPDATE_REQ_T));		
							SafeArrayUnaccessData(psa);
							if(FAILED(ret = pI->Execute(psa, &psaRsp)))
							{
								#ifdef DEBUG
									userlog("Error while executing JpjUpdateService. Call to Method Execute() Failed. %d", ret);
								#endif
								callFlag =1;
							
							}
						}
				  }
			}
		// Handle any COM exceptions from smart pointers
		catch (_com_error e)
		{
			  #ifdef DEBUG
					userlog("Error while executing JpjUpdateService. Call to Method Execute() Failed. %s", e.ErrorMessage());
			 #endif
			  callFlag = 1;		

		}
	}

	
	
	userlog("Before freeing : pstSendBuf call_jpj_update");
	free((char*)pstSendBuf);
	userlog("After freeing : pstSendBuf call_jpj_update");
	

     if(callFlag == 1)
	 {
		return GMPC_BAD;
	  }
	*/	return SUCCESS;
}




int check_cancel_codes(int txn_count, TXN_CANCEL_CODES_T* txn_cancel_codes,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar cancel_code[CANCEL_CODE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[3]; } cancel_code;

	short int cancel_code_ind = 0;
	char exists;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int i = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	
	
	for(i = 0; i < txn_count; i++, txn_cancel_codes++)
	{
		strcpy((char *)cancel_code.arr, txn_cancel_codes->cancel_code);
		setlen(cancel_code);

		userlog("cancel code %s", cancel_code.arr);

		/* EXEC SQL SELECT 'X'
			INTO :exists
			FROM APPL_CANCEL_CODE
			WHERE APPLCANCELCODE = :cancel_code:cancel_code_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 2;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select 'X' into :b0  from APPL_CANCEL_CODE where APPLCANCEL\
CODE=:b1:b2";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )5;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&exists;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&cancel_code;
  sqlstm.sqhstl[1] = (unsigned int  )5;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&cancel_code_ind;
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



		if(NO_DATA_FOUND)
		{
			sprintf(excep_log.error_msg, "check_cancel_codes : cancel code not found in APPL_CANCEL_CODE %s", SQLMSG);
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			strcpy(prog_log.remarks, "TERMIANTE_APPL : Failed due to INVALID_CANCEL_CODE_ERROR");
			return INVALID_CANCEL_CODE_ERROR;
		}

		if((SQLCODE != 0) && !(NO_DATA_FOUND))
		{
			sprintf(excep_log.error_msg, "check_cancel_codes : error while selecting from APPL_CANCEL_CODE %s", SQLMSG);
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			strcpy(prog_log.remarks, "TERMIANTE_APPL : Failed due to SELECT_ERROR");
			return SELECT_ERROR;
		}
	}

	return GMPC_GOOD;
}

int update_txn_table(char *applid, TXN_CANCEL_CODES_T *txn_cancel_codes, int txn_count,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE];
	char hv_cancel_code[CANCEL_CODE_SIZE];
	int hv_txnserno;

//	char hv_kptno[KPT_SIZE];
	char hv_txncode[TRANSACTION_CODE_SIZE];
	char hv_txndate[DATE_SIZE];

	/* varchar hv_user_id[USER_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_user_id;

	char hv_branch_code[BRANCH_CODE_SIZE];
	/* varchar hv_ws_id[WS_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_ws_id;

	short int hv_txndate_ind;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int i = 0;
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	
	
	strcpy(hv_applid, applid);
	strcpy((char *)hv_user_id.arr, header.user_id);
	setlen(hv_user_id);
	strcpy((char *)hv_ws_id.arr, header.workstation_id);
	setlen(hv_ws_id);
	strcpy(hv_branch_code, header.branch_code);

	userlog("update_txn_table : txn_count %d", txn_count);

	for(i = 0; i < txn_count; i++, txn_cancel_codes++)
	{
		strcpy(hv_cancel_code, txn_cancel_codes->cancel_code);
		hv_txnserno = txn_cancel_codes->txnserno;
		strcpy(hv_txncode, txn_cancel_codes->txn_code);

		userlog("update_txn_table : hv_cancel_code %s", hv_cancel_code);
		userlog("update_txn_table : hv_txnserno %d", hv_txnserno);
		userlog("update_txn_table : hv_txncode %s", hv_txncode);

/*		EXEC SQL 
			SELECT TXNCODE, TO_CHAR(TXNDATE, 'DDMMYYYY')
			INTO :hv_txncode, :hv_txndate:hv_txndate_ind
			FROM APPL_TXN
			WHERE APPLID = :hv_applid
			AND TXNSERNO = :hv_txnserno;

		if((SQLCODE != 0) && (SQLCODE != NO_DATA_FOUND))
		{
			sprintf(excep_log.error_msg, "update_txn_table : error while selecting from APPL_TXN table %s", SQLMSG);
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			strcpy(prog_log.remarks, "update_txn_table : Failed due to SELECT_ERROR");
			return SELECT_ERROR;
		}
*/
		/* EXEC SQL 
			UPDATE APPL_TXN
			SET TXNCANCELCODE = :hv_cancel_code
			WHERE APPLID = :hv_applid
			AND TXNSERNO = :hv_txnserno; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 3;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPL_TXN  set TXNCANCELCODE=:b0 where (APPLID=:b1 an\
d TXNSERNO=:b2)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )28;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)hv_cancel_code;
  sqlstm.sqhstl[0] = (unsigned int  )3;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_applid;
  sqlstm.sqhstl[1] = (unsigned int  )20;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&hv_txnserno;
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
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



		if(NO_DATA_FOUND)
		{
			userlog("update_txn_table : txn code not found inserting");
			userlog("update_txn_table : %d %s", SQLCODE, SQLMSG);

			/* EXEC SQL 
				INSERT INTO APPL_TXN (APPLID, TXNSERNO, TXNCODE, TXNCANCELCODE)
				VALUES ( :hv_applid, :hv_txnserno, :hv_txncode, :hv_cancel_code ); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPL_TXN (APPLID,TXNSERNO,TXNCODE,TXNCANCELCOD\
E) values (:b0,:b1,:b2,:b3)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )55;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)hv_applid;
   sqlstm.sqhstl[0] = (unsigned int  )20;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&hv_txnserno;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)hv_txncode;
   sqlstm.sqhstl[2] = (unsigned int  )4;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)hv_cancel_code;
   sqlstm.sqhstl[3] = (unsigned int  )3;
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



			if((SQLCODE != 0) && (SQLCODE != -1))
			{
				sprintf(excep_log.error_msg, "update_txn_table : error while inserting into APPL_TXN table %s", SQLMSG);				
				strcpy(prog_log.remarks, "update_txn_table : Failed due to INSERT_ERROR");
				excep_log.severity = FATAL;
				excep_log.termination_flag = 'Y';
				log_error(ctx);

				return INSERT_ERROR;
			}
		}

		if((SQLCODE != 0) && (SQLCODE != 1403))
		{
			userlog("update_txn_table : %d %s", SQLCODE, SQLMSG);
			sprintf(excep_log.error_msg, "update_txn_table : error while updating APPL_TXN table %s", SQLMSG);
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			strcpy(prog_log.remarks, "update_txn_table : Failed due to UPDATE_ERROR");
			return UPDATE_ERROR;
		}

		/* EXEC SQL 
			INSERT INTO APPL_TXN_LOG ( APPLID, TXNCODE, TXNDATE, TXNCANCELCODE, TXNCANCELDATE, 
				BRANCHCODE, USERID, WSID, TIMESTAMP, TXNSTAT )
			VALUES ( :hv_applid, :hv_txncode, TO_DATE(:hv_txndate:hv_txndate_ind, 'DDMMYYYY'), 
			:hv_cancel_code, SYSDATE, :hv_branch_code, :hv_user_id, :hv_ws_id, SYSDATE, 'T'); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 7;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPL_TXN_LOG (APPLID,TXNCODE,TXNDATE,TXNCANCELC\
ODE,TXNCANCELDATE,BRANCHCODE,USERID,WSID, timestamp ,TXNSTAT) values (:b0,:b1,\
TO_DATE(:b2:b3,'DDMMYYYY'),:b4,SYSDATE,:b5,:b6,:b7,SYSDATE,'T')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )86;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)hv_applid;
  sqlstm.sqhstl[0] = (unsigned int  )20;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_txncode;
  sqlstm.sqhstl[1] = (unsigned int  )4;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)hv_txndate;
  sqlstm.sqhstl[2] = (unsigned int  )9;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&hv_txndate_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)hv_cancel_code;
  sqlstm.sqhstl[3] = (unsigned int  )3;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)hv_branch_code;
  sqlstm.sqhstl[4] = (unsigned int  )7;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&hv_user_id;
  sqlstm.sqhstl[5] = (unsigned int  )11;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&hv_ws_id;
  sqlstm.sqhstl[6] = (unsigned int  )18;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
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



		if((SQLCODE != 0) && (SQLCODE != -1))
		{
			sprintf(excep_log.error_msg, "update_txn_table : error while inserting into APPL_TXN_LOG table %s", SQLMSG);			
			strcpy(prog_log.remarks, "update_txn_table : Failed due to INSERT_ERROR");
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			log_error(ctx);

			return INSERT_ERROR;
		}
	}

	return GMPC_GOOD;
}

int insert_txns(TERMINATE_APPL_REQ_T *req, APPL_TXN_T *appl_txn,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* Appl txn related variables */
	char hv_applid[APP_ID_SIZE];
	int hv_txnserno=0;
	char hv_txncode[TRANSACTION_CODE_SIZE];
	char hv_txncancelcode[CANCEL_CODE_SIZE];
	char hv_lictype[LIC_TYPE_SIZE];
	char hv_licclass[LIC_CLS_SIZE];
	char hv_licusage[LIC_USAGE_SIZE];
	int hv_licvalidperiod=0;
	int hv_paymserno=0;
	int hv_qcserno=0;
	char hv_qcflag='\0';
	char hv_txndate[DATE_SIZE];
	char hv_legupdflag='\0';

	/* Appl Proc related variables */
	int hv_procserno=0;
	char hv_procind[PROCESS_IND_SIZE];
	char hv_idtype[ID_TYPE_SIZE];
	/* varchar hv_idno[ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_idno;

	/* varchar hv_wsid[WS_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_wsid;

	/* varchar hv_userid[USER_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_userid;

	char hv_timestamp[DATE_TIME_SIZE];
	char hv_gscbupdflag='\0';

	short int hv_txncancelcode_ind = 0;
	short int hv_lictype_ind = 0;
	short int hv_licclass_ind = 0;
	short int hv_licusage_ind = 0;
	short int hv_licvalidperiod_ind = 0;
	short int hv_paymserno_ind = 0;
	short int hv_qcserno_ind = 0;
	short int hv_qcflag_ind = 0;
	short int hv_txndate_ind = 0;
	short int hv_legupdflag_ind = 0;

	short int hv_procserno_ind = 0;
	short int hv_procind_ind = 0;
	short int hv_idtype_ind = 0;
	short int hv_idno_ind = 0;
	short int hv_wsid_ind = 0;
	short int hv_userid_ind = 0;
	short int hv_timestamp_ind = 0;
	short int hv_gscbupdflag_ind = 0;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	//	TERMINATE_APPL_T *application;
	APPL_PROC_T *appl_proc;
//	APPL_TXN_T *appl_txn;
	int i = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	strcpy(hv_applid, req->header.application_id);
	strcpy((char *)hv_wsid.arr, req->header.workstation_id);
	setlen(hv_wsid);
	strcpy((char *)hv_userid.arr, req->header.user_id);
	setlen(hv_userid);

/*
	if(req->appl_flag == 'N')
	{
		appl_txn = (APPL_TXN_T *)(req + 1);
	}
	else
	{
		application = (TERMINATE_APPL_T *)(req + 1);
		appl_txn = (APPL_TXN_T *)(application + 1);
	}
*/

#ifdef DEBUG	
			userlog("TERMINATE_APPL : insert_txns before appl txn %X, txn count %d", appl_txn, req->txn_count);
#endif

	for(i = 0; i < req->txn_count; i++, appl_txn++)
	{
		strcpy(hv_txncode, appl_txn->txncode);
		hv_txnserno = appl_txn->txnsrno;
		strcpy(hv_txncancelcode, appl_txn->txn_cancel_code);
		if(hv_txncancelcode[0] == '\0')
		{
			hv_txncancelcode_ind = -1;
		}

		strcpy(hv_lictype, appl_txn->lic_type);
		if(hv_lictype[0] == '\0')
		{
			hv_lictype_ind = -1;
		}
		else
		{
			hv_lictype_ind = 0;
		}

		strcpy(hv_licclass, appl_txn->lic_class);
		if(hv_licclass[0] == '\0')
		{
			hv_licclass_ind = -1;
		}
		else
		{
			hv_licclass_ind = 0;
		}

		strcpy(hv_licusage, appl_txn->lic_class_usage);
		if(hv_licusage[0] == '\0')
		{
			hv_licusage_ind = -1;
		}
		else
		{
			hv_licusage_ind = 0;
		}

		hv_licvalidperiod = appl_txn->validity_period;

		if(hv_licvalidperiod <= 0)
			hv_licvalidperiod_ind = -1;

		hv_paymserno = appl_txn->pay_sr_no;

		if(hv_paymserno <= 0)
			hv_paymserno_ind = -1;

		hv_qcserno = appl_txn->qcsrno;

		if(hv_qcserno <= 0)
			hv_qcserno_ind = -1;


		hv_qcflag = appl_txn->qcflag;

		if(hv_qcflag == '\0')
		{
			hv_qcflag_ind = -1;    //hv_qcflag = -1; rectified on 22/05/2006
		}

		strcpy(hv_txndate, appl_txn->txn_date);
		if(hv_txndate[0] == '\0')
		{
			hv_txndate_ind = -1;
		}
		else
		{
			hv_txndate_ind = 0;
		}

		hv_legupdflag = 'N';

		/* EXEC SQL
			INSERT INTO APPL_TXN ( APPLID, TXNSERNO, TXNCODE, TXNCANCELCODE, LICTYPE, LICCLASS, 
				LICUSAGECODE, LICVALIDPERIOD, PAYMSERNO, QCSERNO, QCFLAG, TXNDATE, LEGUPDFLAG )
			VALUES ( :hv_applid, :hv_txnserno, :hv_txncode, :hv_txncancelcode:hv_txncancelcode_ind, 
				:hv_lictype:hv_lictype_ind, :hv_licclass:hv_licclass_ind, :hv_licusage:hv_licusage_ind, 
				:hv_licvalidperiod:hv_licvalidperiod_ind, :hv_paymserno:hv_paymserno_ind, 
				:hv_qcserno:hv_qcserno_ind, :hv_qcflag:hv_qcflag_ind, TO_DATE(:hv_txndate:hv_txndate_ind, 'DDMMYYYY'),
				:hv_legupdflag:hv_legupdflag_ind ); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 13;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPL_TXN (APPLID,TXNSERNO,TXNCODE,TXNCANCELCODE\
,LICTYPE,LICCLASS,LICUSAGECODE,LICVALIDPERIOD,PAYMSERNO,QCSERNO,QCFLAG,TXNDATE\
,LEGUPDFLAG) values (:b0,:b1,:b2,:b3:b4,:b5:b6,:b7:b8,:b9:b10,:b11:b12,:b13:b1\
4,:b15:b16,:b17:b18,TO_DATE(:b19:b20,'DDMMYYYY'),:b21:b22)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )129;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)hv_applid;
  sqlstm.sqhstl[0] = (unsigned int  )20;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&hv_txnserno;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)hv_txncode;
  sqlstm.sqhstl[2] = (unsigned int  )4;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)hv_txncancelcode;
  sqlstm.sqhstl[3] = (unsigned int  )3;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&hv_txncancelcode_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)hv_lictype;
  sqlstm.sqhstl[4] = (unsigned int  )4;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&hv_lictype_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)hv_licclass;
  sqlstm.sqhstl[5] = (unsigned int  )3;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&hv_licclass_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)hv_licusage;
  sqlstm.sqhstl[6] = (unsigned int  )3;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&hv_licusage_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&hv_licvalidperiod;
  sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&hv_licvalidperiod_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&hv_paymserno;
  sqlstm.sqhstl[8] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&hv_paymserno_ind;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&hv_qcserno;
  sqlstm.sqhstl[9] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)&hv_qcserno_ind;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&hv_qcflag;
  sqlstm.sqhstl[10] = (unsigned int  )1;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)&hv_qcflag_ind;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)hv_txndate;
  sqlstm.sqhstl[11] = (unsigned int  )9;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)&hv_txndate_ind;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqhstv[12] = (         void  *)&hv_legupdflag;
  sqlstm.sqhstl[12] = (unsigned int  )1;
  sqlstm.sqhsts[12] = (         int  )0;
  sqlstm.sqindv[12] = (         void  *)&hv_legupdflag_ind;
  sqlstm.sqinds[12] = (         int  )0;
  sqlstm.sqharm[12] = (unsigned int  )0;
  sqlstm.sqadto[12] = (unsigned short )0;
  sqlstm.sqtdso[12] = (unsigned short )0;
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



		if((SQLCODE != 0) && (SQLCODE != -1))
		{
			userlog("insert_txns : error while inserting into APPL_TXN table %s", SQLMSG);
			sprintf(excep_log.error_msg, "insert_txns : error while inserting into APPL_TXN table %s", SQLMSG);			
			strcpy(prog_log.remarks, "insert_txns : Failed due to INSERT_ERROR");
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			log_error(ctx);

			return INSERT_ERROR;
		}
	}

	appl_proc = (APPL_PROC_T *)(appl_txn);

#ifdef DEBUG	
		userlog("TERMINATE_APPL : insert_txns before appl proc %X, req->proc_count %d", appl_proc, req->proc_count);
#endif

	for(i = 0; i < req->proc_count; i++, appl_proc++)
	{
		hv_procserno = appl_proc->process_srno;
		strcpy(hv_procind, appl_proc->proc_ind);
		strcpy(hv_idtype, appl_proc->id_type);
		if(hv_idtype[0] == '\0')
		{
			hv_idtype_ind = -1;
		}

		strcpy((char *)hv_idno.arr, appl_proc->id_no);
		setlen(hv_idno);
		if(hv_idno.arr[0] == '\0')
		{
			hv_idno_ind = -1;
		}

		strcpy((char *)hv_wsid.arr, appl_proc->workstation_id);
		setlen(hv_wsid);
		if(hv_wsid.arr[0] == '\0')
		{
			hv_wsid_ind = -1;
		}

		strcpy((char *)hv_userid.arr, appl_proc->user_id);
		setlen(hv_userid);
		if(hv_userid.arr[0] == '\0')
		{
			hv_userid_ind = -1;
		}

		strcpy(hv_timestamp, appl_proc->timestamp);
		if(hv_timestamp[0] == '\0')
		{
			hv_timestamp_ind = -1;
		}
		
		hv_gscbupdflag = 'N';
#ifdef DEBUG
		userlog("TERMINATE_APPL : insert_txns timestamp %s", hv_timestamp);
#endif //DEBUG
		/* EXEC SQL
			INSERT INTO APPL_PROC ( APPLID, PROCSERNO, PROCIND, IDTYPE, IDNO, WSID, USERID, 
				TIMESTAMP, GSCBUPDFLAG )
				VALUES ( :hv_applid, :hv_procserno, :hv_procind, :hv_idtype:hv_idtype_ind, :hv_idno:hv_idno_ind, 
				:hv_wsid:hv_wsid_ind, :hv_userid:hv_userid_ind, TO_DATE(:hv_timestamp:hv_timestamp_ind, 'DDMMYYYY HH24MISS'), :hv_gscbupdflag ); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 13;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPL_PROC (APPLID,PROCSERNO,PROCIND,IDTYPE,IDNO\
,WSID,USERID, timestamp ,GSCBUPDFLAG) values (:b0,:b1,:b2,:b3:b4,:b5:b6,:b7:b8\
,:b9:b10,TO_DATE(:b11:b12,'DDMMYYYY HH24MISS'),:b13)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )196;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)hv_applid;
  sqlstm.sqhstl[0] = (unsigned int  )20;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&hv_procserno;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)hv_procind;
  sqlstm.sqhstl[2] = (unsigned int  )3;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)hv_idtype;
  sqlstm.sqhstl[3] = (unsigned int  )3;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&hv_idtype_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&hv_idno;
  sqlstm.sqhstl[4] = (unsigned int  )18;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&hv_idno_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&hv_wsid;
  sqlstm.sqhstl[5] = (unsigned int  )18;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&hv_wsid_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&hv_userid;
  sqlstm.sqhstl[6] = (unsigned int  )11;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&hv_userid_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)hv_timestamp;
  sqlstm.sqhstl[7] = (unsigned int  )16;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&hv_timestamp_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&hv_gscbupdflag;
  sqlstm.sqhstl[8] = (unsigned int  )1;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
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



		if((SQLCODE != 0) && (SQLCODE != -1))
		{
			sprintf(excep_log.error_msg, "insert_txns : error while inserting into APPL_PROC table %s", SQLMSG);			
			strcpy(prog_log.remarks, "insert_txns : Failed due to INSERT_ERROR");
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			log_error(ctx);

			return INSERT_ERROR;
		}
	}

	return GMPC_GOOD;
}

//int update_application(char *applid, char *cancel_code, char *cancel_date, char *supvr_notes, char termination_flag)
int update_application(TERMINATE_APPL_REQ_T *req, char *kptno,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE];
	char hv_applstat = '\0';
	char hv_cancelcode[CANCEL_CODE_SIZE] = {'\0'};
	char hv_canceldate[DATE_TIME_SIZE] = {'\0'};
	/* varchar hv_supvrnotes[SUPERVISOR_NOTE_SIZE] = {'\0'}; */ 
struct { unsigned short len; unsigned char arr[501]; } hv_supvrnotes
 = {'\0'};

	int hv_procsrno = 0;
	short int hv_procsrno_ind = 0;
	char hv_appldate[DATE_SIZE] = {'\0'};
	short int hv_appldate_ind = 0;
	short int hv_applstat_ind = 0;
	char hv_branch_code[BRANCH_CODE_SIZE] = {'\0'};
	short int hv_branch_code_ind = 0;
	char hv_userid[USER_ID_SIZE] = {'\0'};
	short int hv_userid_ind = 0;
	char hv_ws_id[WS_ID_SIZE] = {'\0'};
	short int hv_ws_id_ind = 0;
	char hv_timestamp[DATE_TIME_SIZE] = {'\0'};
	short int hv_timestamp_ind = 0;
	short int hv_cancelcode_ind = 0;
	short int hv_canceldate_ind = 0;
	short int hv_supvrnotes_ind = 0;

	char kpt_no[KPT_SIZE] = {'\0'};
	short int kpt_no_ind = 0;
	char  enq_flag;
	short enq_flag_ind = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN



	strcpy(hv_applid, req->header.application_id);
	strcpy(hv_cancelcode, req->cancel_code);
	if(hv_cancelcode[0] == '\0')
	{
		hv_cancelcode_ind = -1;
	}

	strcpy(hv_canceldate, req->cancel_dt_time);
	if(hv_canceldate[0] == '\0')
	{
		hv_canceldate_ind = -1;
	}

	strcpy((char *)hv_supvrnotes.arr, req->supvr_notes);
	setlen(hv_supvrnotes);
	if(hv_supvrnotes.arr[0] == '\0')
	{
		hv_supvrnotes_ind = -1;
	}

#ifdef DEBUG
		userlog("update_application :kptno:%s:", kptno);
#endif //DEBUG

	if(kptno[0] == '\0')
	{
		kpt_no_ind = -1;
	}
	else
	{
		strcpy(kpt_no, kptno);
	}
/* Code to insert into history tables has been commented out 12/4/2001	*/
/* as history records coming from GSC already have this record			*/
/*	
	EXEC SQL 
		SELECT PROCSERNO, TO_CHAR(APPLDATE, 'DDMMYYYY'), APPLSTAT, 
			BRANCHCODE, USERID, WSID, TO_CHAR(TIMESTAMP, 'DDMMYYYY HH24MISS')
		INTO :hv_procsrno:hv_procsrno_ind, :hv_appldate:hv_appldate_ind, :hv_applstat:hv_applstat_ind, 
			  :hv_branch_code:hv_branch_code_ind, :hv_userid:hv_userid_ind,
			  :hv_ws_id:hv_ws_id_ind, :hv_timestamp:hv_timestamp_ind
		FROM APPLICATION
		WHERE APPLID = :hv_applid;

	if(!SQLCODE)
	{
		EXEC SQL 
			INSERT INTO APPL_HISTORY ( APPLID, PROCSERNO, APPLDATE, APPLSTAT, 
				BRANCHCODE, USERID, WSID, TIMESTAMP )
			VALUES ( :hv_applid, :hv_procsrno:hv_procsrno_ind, TO_DATE(:hv_appldate:hv_appldate_ind, 'DDMMYYYY'), 
				:hv_applstat:hv_applstat_ind, :hv_branch_code:hv_branch_code_ind, :hv_userid:hv_userid_ind,
				:hv_ws_id:hv_ws_id_ind, TO_DATE(:hv_timestamp:hv_timestamp_ind, 'DDMMYYYY HH24MISS') );
	}
*/

	if (req->termination_flag == 'T')
		hv_applstat = TERMINATED_GSC;
	else if (req->termination_flag == 'C')
		hv_applstat = CANCELLED;

	/* EXEC SQL
		UPDATE APPLICATION
		SET APPLSTAT = :hv_applstat, APPLCANCELCODE = :hv_cancelcode:hv_cancelcode_ind, 
			APPLCANCELDATE = TO_DATE(:hv_canceldate:hv_canceldate_ind, 'DDMMYYYY HH24MISS')
		WHERE APPLID = :hv_applid
		AND APPLSTAT NOT IN ('D','A','S','P','R','F'); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update APPLICATION  set APPLSTAT=:b0,APPLCANCELCODE=:b1:b2,A\
PPLCANCELDATE=TO_DATE(:b3:b4,'DDMMYYYY HH24MISS') where (APPLID=:b5 and APPLST\
AT not  in ('D','A','S','P','R','F'))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )247;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_applstat;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hv_cancelcode;
 sqlstm.sqhstl[1] = (unsigned int  )3;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&hv_cancelcode_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)hv_canceldate;
 sqlstm.sqhstl[2] = (unsigned int  )16;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&hv_canceldate_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)hv_applid;
 sqlstm.sqhstl[3] = (unsigned int  )20;
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

 // added this line on 21/09/06

	#ifdef DEBUG
		userlog("sqlca.sqlcode :%d:", sqlca.sqlcode);
	#endif

//		if(SQLCODE != 0)
		if((SQLCODE != 0) && !(NO_DATA_FOUND))
		{
			sprintf(excep_log.error_msg, "update_application : error while updating APPLICATION table %s", SQLMSG);			
			strcpy(prog_log.remarks, "update_application : Failed due to UPDATE_ERROR");
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			log_error(ctx);

			return UPDATE_ERROR;
		}
		else if(NO_DATA_FOUND)
		{
			/* EXEC SQL
				INSERT INTO APPLICATION(APPLID, APPLDATE, APPLSTAT, 
				APPLPRIORITY, PROCSERNO, APPLCANCELCODE, APPLCANCELDATE, KPTNO)
				VALUES(:hv_applid, SYSDATE, :hv_applstat, 0, 1, 
				:hv_cancelcode:hv_cancelcode_ind, 
				TO_DATE(:hv_canceldate:hv_canceldate_ind, 'DDMMYYYY HH24MISS'), 
				:kpt_no:kpt_no_ind); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 13;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPLICATION (APPLID,APPLDATE,APPLSTAT,APPLPRIO\
RITY,PROCSERNO,APPLCANCELCODE,APPLCANCELDATE,KPTNO) values (:b0,SYSDATE,:b1,0,\
1,:b2:b3,TO_DATE(:b4:b5,'DDMMYYYY HH24MISS'),:b6:b7)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )278;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)hv_applid;
   sqlstm.sqhstl[0] = (unsigned int  )20;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&hv_applstat;
   sqlstm.sqhstl[1] = (unsigned int  )1;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)hv_cancelcode;
   sqlstm.sqhstl[2] = (unsigned int  )3;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&hv_cancelcode_ind;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)hv_canceldate;
   sqlstm.sqhstl[3] = (unsigned int  )16;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)&hv_canceldate_ind;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)kpt_no;
   sqlstm.sqhstl[4] = (unsigned int  )13;
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)&kpt_no_ind;
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



			#ifdef DEBUG
				userlog("sqlca.sqlcode :%d:", sqlca.sqlcode);
			#endif

				if((SQLCODE != 0) && !(NO_DATA_FOUND))
				{
					sprintf(excep_log.error_msg, "update_application : error while inserting into APPLICATION table %s", SQLMSG);
					strcpy(prog_log.remarks, "update_application : Failed due to UPDATE_ERROR");
					excep_log.severity = FATAL;
					excep_log.termination_flag = 'Y';
					log_error(ctx);

					return INSERT_ERROR;
				}
				

				return GMPC_GOOD; //if update fails then returns good

		}


			/* Added on 25 FEB 2005 for IJPN */

/* commented on 21/09/06 for normal terimination no probl record will exist

	EXEC SQL SELECT ENQFLAG INTO :enq_flag:enq_flag_ind FROM PROBL_RECORD 
	WHERE APPLID = :hv_applid AND ROWNUM =1;

	if((SQLCODE != 0) && (SQLCODE != 1403))
	{
		sprintf(excep_log.error_msg, "cancel_application : error while selecting PROBL_RECORD table for ENQFLAG %s", SQLMSG);		
		strcpy(prog_log.remarks, "cancel_application : Failed due to error while selecting PROBL_RECORD table for ENQFLAG");
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';
		log_error(ctx);

		return SELECT_ERROR;
	}


	if(enq_flag_ind != -1)
	{
		if(enq_flag == 'Y')
			enq_flag = 'N';
		else 
			enq_flag = 'Y';
	}

		EXEC SQL UPDATE PROBL_RECORD 
			SET ENQFLAG = :enq_flag WHERE APPLID = :hv_applid;

		

		if((SQLCODE != 0) && (SQLCODE != 1403))
		{
			sprintf(excep_log.error_msg, "cancel_application : error while updating PROBL_RECORD table for ENQFLAG %s", SQLMSG);			
			strcpy(prog_log.remarks, "cancel_application : Failed due to error while updating PROBL_RECORD table for ENQFLAG");
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			log_error(ctx);

			return UPDATE_ERROR;
		}

		EXEC SQL UPDATE APPNT_PROBL_DATA 
					SET SENDFLAG = :enq_flag
					WHERE APPLID = :hv_applid;

		if((SQLCODE != 0) && (SQLCODE != 1403))
		{
			sprintf(excep_log.error_msg, "cancel_application : error while updating APPNT_PROBL_DATA table for ENQFLAG %s", SQLMSG);			
			strcpy(prog_log.remarks, "cancel_application : Failed due to error while updating APPNT_PROBL_DATA table for ENQFLAG");
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			log_error(ctx);

			return UPDATE_ERROR;
		}

 commented on 21/09/06  */
	/* IJPN END */


	return GMPC_GOOD;
}

int update_application1(TERMINATE_APPL_REQ_T *req, char *kptno,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE];
	char hv_applstat = '\0';
	char hv_cancelcode[CANCEL_CODE_SIZE] = {'\0'};
	char hv_canceldate[DATE_TIME_SIZE] = {'\0'};
	/* varchar hv_supvrnotes[SUPERVISOR_NOTE_SIZE] = {'\0'}; */ 
struct { unsigned short len; unsigned char arr[501]; } hv_supvrnotes
 = {'\0'};

	int hv_procsrno = 0;
	short int hv_procsrno_ind = 0;
	char hv_appldate[DATE_SIZE] = {'\0'};
	short int hv_appldate_ind = 0;
	short int hv_applstat_ind = 0;
	char hv_branch_code[BRANCH_CODE_SIZE] = {'\0'};
	short int hv_branch_code_ind = 0;
	char hv_userid[USER_ID_SIZE] = {'\0'};
	short int hv_userid_ind = 0;
	char hv_ws_id[WS_ID_SIZE] = {'\0'};
	short int hv_ws_id_ind = 0;
	char hv_timestamp[DATE_TIME_SIZE] = {'\0'};
	short int hv_timestamp_ind = 0;
	short int hv_cancelcode_ind = 0;
	short int hv_canceldate_ind = 0;
	short int hv_supvrnotes_ind = 0;

	char kpt_no[KPT_SIZE] = {'\0'};
	short int kpt_no_ind = 0;
	char  enq_flag;
	short enq_flag_ind = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN



	strcpy(hv_applid, req->header.application_id);
	strcpy(hv_cancelcode, req->cancel_code);
	if(hv_cancelcode[0] == '\0')
	{
		hv_cancelcode_ind = -1;
	}

	strcpy(hv_canceldate, req->cancel_dt_time);
	if(hv_canceldate[0] == '\0')
	{
		hv_canceldate_ind = -1;
	}

	strcpy((char *)hv_supvrnotes.arr, req->supvr_notes);
	setlen(hv_supvrnotes);
	if(hv_supvrnotes.arr[0] == '\0')
	{
		hv_supvrnotes_ind = -1;
	}

#ifdef DEBUG
		userlog("update_application :kptno:%s:", kptno);
#endif //DEBUG

	if(kptno[0] == '\0')
	{
		kpt_no_ind = -1;
	}
	else
	{
		strcpy(kpt_no, kptno);
	}
/* Code to insert into history tables has been commented out 12/4/2001	*/
/* as history records coming from GSC already have this record			*/
/*	
	EXEC SQL 
		SELECT PROCSERNO, TO_CHAR(APPLDATE, 'DDMMYYYY'), APPLSTAT, 
			BRANCHCODE, USERID, WSID, TO_CHAR(TIMESTAMP, 'DDMMYYYY HH24MISS')
		INTO :hv_procsrno:hv_procsrno_ind, :hv_appldate:hv_appldate_ind, :hv_applstat:hv_applstat_ind, 
			  :hv_branch_code:hv_branch_code_ind, :hv_userid:hv_userid_ind,
			  :hv_ws_id:hv_ws_id_ind, :hv_timestamp:hv_timestamp_ind
		FROM APPLICATION
		WHERE APPLID = :hv_applid;

	if(!SQLCODE)
	{
		EXEC SQL 
			INSERT INTO APPL_HISTORY ( APPLID, PROCSERNO, APPLDATE, APPLSTAT, 
				BRANCHCODE, USERID, WSID, TIMESTAMP )
			VALUES ( :hv_applid, :hv_procsrno:hv_procsrno_ind, TO_DATE(:hv_appldate:hv_appldate_ind, 'DDMMYYYY'), 
				:hv_applstat:hv_applstat_ind, :hv_branch_code:hv_branch_code_ind, :hv_userid:hv_userid_ind,
				:hv_ws_id:hv_ws_id_ind, TO_DATE(:hv_timestamp:hv_timestamp_ind, 'DDMMYYYY HH24MISS') );
	}
*/

	if (req->termination_flag == 'T')
		hv_applstat = TERMINATED_GSC;
	else if (req->termination_flag == 'C')
		hv_applstat = CANCELLED;

	/* EXEC SQL
		UPDATE APPLICATION
		SET APPLSTAT = :hv_applstat, APPLCANCELCODE = :hv_cancelcode:hv_cancelcode_ind, 
			APPLCANCELDATE = TO_DATE(:hv_canceldate:hv_canceldate_ind, 'DDMMYYYY HH24MISS')
		WHERE APPLID = :hv_applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update APPLICATION  set APPLSTAT=:b0,APPLCANCELCODE=:b1:b2,A\
PPLCANCELDATE=TO_DATE(:b3:b4,'DDMMYYYY HH24MISS') where APPLID=:b5";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )313;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_applstat;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hv_cancelcode;
 sqlstm.sqhstl[1] = (unsigned int  )3;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&hv_cancelcode_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)hv_canceldate;
 sqlstm.sqhstl[2] = (unsigned int  )16;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&hv_canceldate_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)hv_applid;
 sqlstm.sqhstl[3] = (unsigned int  )20;
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



	#ifdef DEBUG
		userlog("sqlca.sqlcode :%d:", sqlca.sqlcode);
	#endif

//		if(SQLCODE != 0)
		if((SQLCODE != 0) && !(NO_DATA_FOUND))
		{
			sprintf(excep_log.error_msg, "update_application : error while updating APPLICATION table %s", SQLMSG);			
			strcpy(prog_log.remarks, "update_application : Failed due to UPDATE_ERROR");
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			log_error(ctx);

			return UPDATE_ERROR;
		}
		else if(NO_DATA_FOUND)
		{
			/* EXEC SQL
				INSERT INTO APPLICATION(APPLID, APPLDATE, APPLSTAT, 
				APPLPRIORITY, PROCSERNO, APPLCANCELCODE, APPLCANCELDATE, KPTNO)
				VALUES(:hv_applid, SYSDATE, :hv_applstat, 0, 1, 
				:hv_cancelcode:hv_cancelcode_ind, 
				TO_DATE(:hv_canceldate:hv_canceldate_ind, 'DDMMYYYY HH24MISS'), 
				:kpt_no:kpt_no_ind); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 13;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPLICATION (APPLID,APPLDATE,APPLSTAT,APPLPRIO\
RITY,PROCSERNO,APPLCANCELCODE,APPLCANCELDATE,KPTNO) values (:b0,SYSDATE,:b1,0,\
1,:b2:b3,TO_DATE(:b4:b5,'DDMMYYYY HH24MISS'),:b6:b7)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )344;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)hv_applid;
   sqlstm.sqhstl[0] = (unsigned int  )20;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&hv_applstat;
   sqlstm.sqhstl[1] = (unsigned int  )1;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)hv_cancelcode;
   sqlstm.sqhstl[2] = (unsigned int  )3;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&hv_cancelcode_ind;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)hv_canceldate;
   sqlstm.sqhstl[3] = (unsigned int  )16;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)&hv_canceldate_ind;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)kpt_no;
   sqlstm.sqhstl[4] = (unsigned int  )13;
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)&kpt_no_ind;
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



			#ifdef DEBUG
				userlog("sqlca.sqlcode :%d:", sqlca.sqlcode);
			#endif

				if((SQLCODE != 0) && !(NO_DATA_FOUND))
				{
					sprintf(excep_log.error_msg, "update_application : error while inserting into APPLICATION table %s", SQLMSG);
					strcpy(prog_log.remarks, "update_application : Failed due to UPDATE_ERROR");
					excep_log.severity = FATAL;
					excep_log.termination_flag = 'Y';
					log_error(ctx);

					return INSERT_ERROR;
				}
				

				return GMPC_GOOD; //if update fails then returns good

		}


			/* Added on 25 FEB 2005 for IJPN */

	/* EXEC SQL SELECT ENQFLAG INTO :enq_flag:enq_flag_ind FROM PROBL_RECORD 
	WHERE APPLID = :hv_applid AND ROWNUM =1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select ENQFLAG into :b0:b1  from PROBL_RECORD where (APPLID=\
:b2 and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )379;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&enq_flag;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&enq_flag_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hv_applid;
 sqlstm.sqhstl[1] = (unsigned int  )20;
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



	if((SQLCODE != 0) && (SQLCODE != 1403))
	{
		sprintf(excep_log.error_msg, "cancel_application : error while selecting PROBL_RECORD table for ENQFLAG %s", SQLMSG);		
		strcpy(prog_log.remarks, "cancel_application : Failed due to error while selecting PROBL_RECORD table for ENQFLAG");
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';
		log_error(ctx);

		return SELECT_ERROR;
	}


	if(enq_flag_ind != -1)
	{
		if(enq_flag == 'Y')
			enq_flag = 'N';
		else 
			enq_flag = 'Y';
	}

		/* EXEC SQL UPDATE PROBL_RECORD 
			SET ENQFLAG = :enq_flag WHERE APPLID = :hv_applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 13;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update PROBL_RECORD  set ENQFLAG=:b0 where APPLID=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )402;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&enq_flag;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_applid;
  sqlstm.sqhstl[1] = (unsigned int  )20;
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



		

		if((SQLCODE != 0) && (SQLCODE != 1403))
		{
			sprintf(excep_log.error_msg, "cancel_application : error while updating PROBL_RECORD table for ENQFLAG %s", SQLMSG);			
			strcpy(prog_log.remarks, "cancel_application : Failed due to error while updating PROBL_RECORD table for ENQFLAG");
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			log_error(ctx);

			return UPDATE_ERROR;
		}

		/* EXEC SQL UPDATE APPNT_PROBL_DATA 
					SET SENDFLAG = :enq_flag
					WHERE APPLID = :hv_applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 13;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPNT_PROBL_DATA  set SENDFLAG=:b0 where APPLID=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )425;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&enq_flag;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_applid;
  sqlstm.sqhstl[1] = (unsigned int  )20;
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



		if((SQLCODE != 0) && (SQLCODE != 1403))
		{
			sprintf(excep_log.error_msg, "cancel_application : error while updating APPNT_PROBL_DATA table for ENQFLAG %s", SQLMSG);			
			strcpy(prog_log.remarks, "cancel_application : Failed due to error while updating APPNT_PROBL_DATA table for ENQFLAG");
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			log_error(ctx);

			return UPDATE_ERROR;
		}

	/* IJPN END */


	return GMPC_GOOD;
}



int terminate_application(char *applid, char *cancel_code, char *cancel_dt_time,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE];
	char hv_applstat;
	char hv_cancelcode[CANCEL_CODE_SIZE];
	char hv_canceldttime[DATE_TIME_SIZE];
	char  enq_flag;
	short enq_flag_ind = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	
	strcpy(hv_applid, applid);
	strcpy(hv_cancelcode, cancel_code);
	strcpy(hv_canceldttime, cancel_dt_time);
	hv_applstat = TERMINATED_GSC;

	/* EXEC SQL 
		UPDATE APPLICATION
		SET APPLSTAT = :hv_applstat, APPLCANCELCODE = :hv_cancelcode, 
		APPLCANCELDATE = TO_DATE(:hv_canceldttime, 'DDMMYYYY HH24MISS')
		WHERE APPLID = :hv_applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update APPLICATION  set APPLSTAT=:b0,APPLCANCELCODE=:b1,APPL\
CANCELDATE=TO_DATE(:b2,'DDMMYYYY HH24MISS') where APPLID=:b3";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )448;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_applstat;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hv_cancelcode;
 sqlstm.sqhstl[1] = (unsigned int  )3;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)hv_canceldttime;
 sqlstm.sqhstl[2] = (unsigned int  )16;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)hv_applid;
 sqlstm.sqhstl[3] = (unsigned int  )20;
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



	if(SQLCODE != 0)
	{
		sprintf(excep_log.error_msg, "terminate_application : error while updating APPLICATION table %s", SQLMSG);		
		strcpy(prog_log.remarks, "terminate_application : Failed due to UPDATE_ERROR");
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';
		log_error(ctx);

		return UPDATE_ERROR;
	}


	/* Added on 25 FEB 2005 for IJPN */

	/* EXEC SQL SELECT ENQFLAG INTO :enq_flag:enq_flag_ind FROM PROBL_RECORD 
	WHERE APPLID = :hv_applid AND ROWNUM =1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select ENQFLAG into :b0:b1  from PROBL_RECORD where (APPLID=\
:b2 and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )479;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&enq_flag;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&enq_flag_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hv_applid;
 sqlstm.sqhstl[1] = (unsigned int  )20;
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



	if((SQLCODE != 0) && (SQLCODE != 1403))
	{
		sprintf(excep_log.error_msg, "cancel_application : error while selecting PROBL_RECORD table for ENQFLAG %s", SQLMSG);		
		strcpy(prog_log.remarks, "cancel_application : Failed due to error while selecting PROBL_RECORD table for ENQFLAG");
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';
		log_error(ctx);

		//return SELECT_ERROR;
		return GMPC_GOOD; //There is data then update probl record other go for the rest of the process
	}


	if(enq_flag_ind != -1)
	{
		if(enq_flag == 'Y')
			enq_flag = 'N';
		else 
			enq_flag = 'Y';
	}

		/* EXEC SQL UPDATE PROBL_RECORD 
			SET ENQFLAG = :enq_flag WHERE APPLID = :hv_applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 13;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update PROBL_RECORD  set ENQFLAG=:b0 where APPLID=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )502;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&enq_flag;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_applid;
  sqlstm.sqhstl[1] = (unsigned int  )20;
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


		

		if((SQLCODE != 0) && (SQLCODE != 1403))
		{
			sprintf(excep_log.error_msg, "cancel_application : error while updating PROBL_RECORD table for ENQFLAG %s", SQLMSG);			
			strcpy(prog_log.remarks, "cancel_application : Failed due to error while updating PROBL_RECORD table for ENQFLAG");
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			log_error(ctx);
			return UPDATE_ERROR;
		}


		/* EXEC SQL UPDATE APPNT_PROBL_DATA 
				SET SENDFLAG = :enq_flag
					WHERE APPLID = :hv_applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 13;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPNT_PROBL_DATA  set SENDFLAG=:b0 where APPLID=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )525;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&enq_flag;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_applid;
  sqlstm.sqhstl[1] = (unsigned int  )20;
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



		if((SQLCODE != 0) && (SQLCODE != 1403))
		{
			sprintf(excep_log.error_msg, "cancel_application : error while updating APPNT_PROBL_DATA table for ENQFLAG %s", SQLMSG);			
			strcpy(prog_log.remarks, "cancel_application : Failed due to error while updating APPNT_PROBL_DATA table for ENQFLAG");
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			log_error(ctx);

			return UPDATE_ERROR;
		}
	/* IJPN END */


	return GMPC_GOOD;
}

int cancel_application(char *applid, char *cancel_code, char *cancel_dt_time,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applstat;
	char hv_applid[APP_ID_SIZE];
	char hv_cancelcode[CANCEL_CODE_SIZE];
	char hv_canceldttime[DATE_TIME_SIZE];
	char  enq_flag;
	short enq_flag_ind = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	
	strcpy(hv_applid, applid);
	strcpy(hv_cancelcode, cancel_code);
	strcpy(hv_canceldttime, cancel_dt_time);


	/* EXEC SQL
		SELECT APPLSTAT INTO :hv_applstat
		FROM APPLICATION
		WHERE APPLID = :hv_applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select APPLSTAT into :b0  from APPLICATION where APPLID=:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )548;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_applstat;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hv_applid;
 sqlstm.sqhstl[1] = (unsigned int  )20;
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


#ifdef DEBUG
	userlog("hv_applstat=%c" , hv_applstat);
	userlog("sqlca.sqlcode=%d" , sqlca.sqlcode);
#endif
	if(SQLCODE != 0)
	{
		sprintf(excep_log.error_msg, "cancel_application : error while selecting APPLICATION table %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';
		strcpy(prog_log.remarks, "cancel_application : Failed due to SELECT_ERROR");
		return SELECT_ERROR;
	}

	if(hv_applstat != PENDING_CANCEL && hv_applstat != PENDING_1N
		&& hv_applstat != READY_PROD && hv_applstat != REFFERED_SSC
		&& hv_applstat != REFFERED_GQD && hv_applstat != FAST_LANE_COMPLETE)
	{
		sprintf(excep_log.error_msg, "cancel_application : Invalid Application status for the application %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';
		strcpy(prog_log.remarks, "cancel_application : Failed due to INVALID_APPLSTAT_ERROR");
		return INVALID_APPL_STAT;
	}

	hv_applstat = CANCELLED;

	/* EXEC SQL
		UPDATE APPLICATION
			SET APPLSTAT = :hv_applstat, APPLCANCELCODE = :hv_cancelcode, 
			APPLCANCELDATE = TO_DATE(:hv_canceldttime, 'DDMMYYYY HH24MISS')
		WHERE APPLID = :hv_applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update APPLICATION  set APPLSTAT=:b0,APPLCANCELCODE=:b1,APPL\
CANCELDATE=TO_DATE(:b2,'DDMMYYYY HH24MISS') where APPLID=:b3";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )571;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_applstat;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hv_cancelcode;
 sqlstm.sqhstl[1] = (unsigned int  )3;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)hv_canceldttime;
 sqlstm.sqhstl[2] = (unsigned int  )16;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)hv_applid;
 sqlstm.sqhstl[3] = (unsigned int  )20;
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



	if(SQLCODE != 0)
	{
		sprintf(excep_log.error_msg, "cancel_application : error while updating APPLICATION table %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';
		strcpy(prog_log.remarks, "cancel_application : Failed due to UPDATE_ERROR");
		return UPDATE_ERROR;
	}

	/* Added on 25 FEB 2005 for IJPN */

	/* EXEC SQL SELECT ENQFLAG INTO :enq_flag:enq_flag_ind FROM PROBL_RECORD 
	WHERE APPLID = :hv_applid AND ROWNUM =1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select ENQFLAG into :b0:b1  from PROBL_RECORD where (APPLID=\
:b2 and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )602;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&enq_flag;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&enq_flag_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hv_applid;
 sqlstm.sqhstl[1] = (unsigned int  )20;
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



	if((SQLCODE != 0) && (SQLCODE != 1403))
	{
		sprintf(excep_log.error_msg, "cancel_application : error while selecting PROBL_RECORD table for ENQFLAG %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';
		strcpy(prog_log.remarks, "cancel_application : Failed due to error while selecting PROBL_RECORD table for ENQFLAG");
		//return SELECT_ERROR;
		log_error(ctx);
		return GMPC_GOOD; //There is data then update probl record other go for the rest of the process
	}


	if(enq_flag_ind != -1)
	{
		if(enq_flag == 'Y')
			enq_flag = 'N';
		else 
			enq_flag = 'Y';
	}

		/* EXEC SQL UPDATE PROBL_RECORD 
			SET ENQFLAG = :enq_flag WHERE APPLID = :hv_applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 13;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update PROBL_RECORD  set ENQFLAG=:b0 where APPLID=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )625;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&enq_flag;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_applid;
  sqlstm.sqhstl[1] = (unsigned int  )20;
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



	
	if((SQLCODE != 0) && (SQLCODE != 1403))
	{
		sprintf(excep_log.error_msg, "cancel_application : error while updating PROBL_RECORD table for ENQFLAG %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';
		strcpy(prog_log.remarks, "cancel_application : Failed due to error while updating PROBL_RECORD table for ENQFLAG");
		return UPDATE_ERROR;
	}


	/* EXEC SQL UPDATE APPNT_PROBL_DATA 
				SET SENDFLAG = :enq_flag
					WHERE APPLID = :hv_applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update APPNT_PROBL_DATA  set SENDFLAG=:b0 where APPLID=:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )648;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&enq_flag;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hv_applid;
 sqlstm.sqhstl[1] = (unsigned int  )20;
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



		if((SQLCODE != 0) && (SQLCODE != 1403))
		{
			sprintf(excep_log.error_msg, "cancel_application : error while updating APPNT_PROBL_DATA table for ENQFLAG %s", SQLMSG);
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			strcpy(prog_log.remarks, "cancel_application : Failed due to error while updating APPNT_PROBL_DATA table for ENQFLAG");
			return UPDATE_ERROR;
		}

	/* IJPN END */

	return GMPC_GOOD;
}

int reverse_payment(char *applid, PAYMENT_T *payment_info,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE];
	char hv_authuserid[USER_ID_SIZE];
	char hv_rvrsdttime[DATE_TIME_SIZE];
	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
#ifdef DEBUG
	userlog("TERMINATE_APPL : reverse_payment payment_info %X", payment_info);
	userlog("TERMINATE_APPL : reverse_payment payment_info->authbyuserid %s", payment_info->authbyuserid);
	userlog("TERMINATE_APPL : reverse_payment payment_info->rvrsdatetime %s", payment_info->rvrsdatetime);
#endif

	strcpy(hv_applid, applid);
	strcpy(hv_authuserid, payment_info->authbyuserid);
	strcpy(hv_rvrsdttime, payment_info->rvrsdatetime);

	/* EXEC SQL
		UPDATE PAYMENT_INFO
		SET AUTHBYUSERID = :hv_authuserid, RVRSFLAG = DECODE(PAYMMODE, 'MC', RVRSFLAG, 'R'),
		RVRSDATETIME = TO_DATE(:hv_rvrsdttime, 'DDMMYYYY HH24MISS')
		WHERE APPLID = :hv_applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update PAYMENT_INFO  set AUTHBYUSERID=:b0,RVRSFLAG=DECODE(PA\
YMMODE,'MC',RVRSFLAG,'R'),RVRSDATETIME=TO_DATE(:b1,'DDMMYYYY HH24MISS') where \
APPLID=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )671;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)hv_authuserid;
 sqlstm.sqhstl[0] = (unsigned int  )9;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hv_rvrsdttime;
 sqlstm.sqhstl[1] = (unsigned int  )16;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)hv_applid;
 sqlstm.sqhstl[2] = (unsigned int  )20;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
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



	if((SQLCODE != 0) && (SQLCODE != 1403))
	{
		sprintf(excep_log.error_msg, "reverse_payment : error while updating PAYMENT_INFO table %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';
		strcpy(prog_log.remarks, "reverse_payment : Failed due to UPDATE_ERROR");
		return UPDATE_ERROR;
	}

	return GMPC_GOOD;
}

int insert_supvr_remarks(char *applid, int supvr_count, SUPVR_REMARKS_T *supvr_remarks,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE];
	char hv_procind[PROCESS_IND_SIZE];
	int hv_txnserno;
	int hv_problserno;
	char hv_problreasoncode[REASON_CODE_SIZE];
	/* varchar hv_formname[FORM_NAME_SIZE]; */ 
struct { unsigned short len; unsigned char arr[51]; } hv_formname;

	/* varchar hv_remarks[SUPVR_REMARKS_SIZE]; */ 
struct { unsigned short len; unsigned char arr[151]; } hv_remarks;

	/* varchar hv_userid[USER_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_userid;

	/* varchar hv_wsid[WS_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_wsid;

	char hv_timestamp[DATE_TIME_SIZE];

	
	short int hv_procind_ind = 0;
	short int hv_txnserno_ind = 0;
	short int hv_problserno_ind = 0;
	short int hv_problreasoncode_ind = 0;
	short int hv_formname_ind = 0;
	short int hv_remarks_ind = 0;
	short int hv_userid_ind = 0;
	short int hv_wsid_ind = 0;
	short int hv_timestamp_ind = 0;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int i = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	
	strcpy(hv_applid, applid);

	for(i = 0; i < supvr_count; i++, supvr_remarks++)
	{
		strcpy(hv_procind, supvr_remarks->procind);
		if(hv_procind[0] == '\0')
		{
			hv_procind_ind = -1;
		}

		hv_txnserno = supvr_remarks->txnserno;
		if(hv_txnserno < 0)
		{
			hv_txnserno_ind = -1;
		}

		hv_problserno = supvr_remarks->problserno;
		if(hv_problserno < 0)
		{
			hv_problserno_ind = -1;
		}

		strcpy(hv_problreasoncode, supvr_remarks->problreasoncode);
		if(hv_problreasoncode[0] == '\0')
		{
			hv_problreasoncode_ind = -1;
		}

		strcpy((char *)hv_formname.arr, supvr_remarks->formname);
		setlen(hv_formname);
		if(hv_formname.arr[0] == '\0')
		{
			hv_formname_ind = -1;
		}

		//#ifdef DEBUG			
		//	userlog("TERMINATE_APPL : supvr_remarks->remarks  %s", supvr_remarks->remarks);
		//#endif

		hv_remarks_ind = 0;
		hv_remarks.arr[0] = '\0';
		strcpy((char *)hv_remarks.arr, supvr_remarks->remarks);
		setlen(hv_remarks);
		//hv_remarks.arr[hv_remarks.len] = '\0';
		if(hv_remarks.arr[0] == '\0')		
		{
			hv_remarks_ind = -1;
		}

		strcpy((char *)hv_userid.arr, supvr_remarks->userid);
		setlen(hv_userid);
		if(hv_userid.arr[0] == '\0')
		{
			hv_userid_ind = -1;
		}
		
		strcpy((char *)hv_wsid.arr, supvr_remarks->wsid);
		setlen(hv_wsid);
		if(hv_wsid.arr[0] == '\0')
		{
			hv_wsid_ind = -1;
		}

		strcpy(hv_timestamp, supvr_remarks->timestamp);
		if(hv_timestamp[0] == '\0')
		{
			hv_timestamp_ind = -1;
		}

		//#ifdef DEBUG			
			//userlog("TERMINATE_APPL : hv_remarks  %s", hv_remarks.arr);
			//userlog("TERMINATE_APPL : hv_remarks_ind  %d", hv_remarks_ind);
		//#endif

		/* EXEC SQL 
			INSERT INTO SUPERVISOR_REMARKS ( APPLID, PROCIND, 
				TXNSERNO, PROBLSERNO, PROBLREASONCODE, FORMNAME, 
				REMARKS, USERID, WSID, TIMESTAMP )
				VALUES ( :hv_applid, :hv_procind:hv_procind_ind, 
				:hv_txnserno:hv_txnserno_ind, :hv_problserno:hv_problserno_ind, 
				:hv_problreasoncode:hv_problreasoncode_ind, :hv_formname:hv_formname_ind,
				:hv_remarks:hv_remarks_ind, :hv_userid:hv_userid_ind, :hv_wsid:hv_wsid_ind, 
				TO_DATE(:hv_timestamp:hv_timestamp_ind, 'DDMMYYYY HH24MISS') ); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 13;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into SUPERVISOR_REMARKS (APPLID,PROCIND,TXNSERNO,PRO\
BLSERNO,PROBLREASONCODE,FORMNAME,REMARKS,USERID,WSID, timestamp ) values (:b0,\
:b1:b2,:b3:b4,:b5:b6,:b7:b8,:b9:b10,:b11:b12,:b13:b14,:b15:b16,TO_DATE(:b17:b1\
8,'DDMMYYYY HH24MISS'))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )698;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)hv_applid;
  sqlstm.sqhstl[0] = (unsigned int  )20;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_procind;
  sqlstm.sqhstl[1] = (unsigned int  )3;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&hv_procind_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&hv_txnserno;
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&hv_txnserno_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&hv_problserno;
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&hv_problserno_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)hv_problreasoncode;
  sqlstm.sqhstl[4] = (unsigned int  )6;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&hv_problreasoncode_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&hv_formname;
  sqlstm.sqhstl[5] = (unsigned int  )53;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&hv_formname_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&hv_remarks;
  sqlstm.sqhstl[6] = (unsigned int  )153;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&hv_remarks_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&hv_userid;
  sqlstm.sqhstl[7] = (unsigned int  )11;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&hv_userid_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&hv_wsid;
  sqlstm.sqhstl[8] = (unsigned int  )18;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&hv_wsid_ind;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)hv_timestamp;
  sqlstm.sqhstl[9] = (unsigned int  )16;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)&hv_timestamp_ind;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
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




		#ifdef DEBUG			
			userlog("TERMINATE_APPL : sqlca.sqlcode  %d", sqlca.sqlcode);
		#endif

		if(SQLCODE != 0)
		{
			sprintf(excep_log.error_msg, "insert_supvr_remarks : error while inserting in SUPERVISOR_REMARKS table %s", SQLMSG);
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			strcpy(prog_log.remarks, "TERMINATE_APPL : Failed due to INSERT_ERROR");
			return INSERT_ERROR;
		}
	}

	return GMPC_GOOD;
}

int insert_application(TERMINATE_APPL_T *application, char *applid,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar hv_agencyonchip[9] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_agencyonchip
 = {0};

	short int hv_agencyonchip_ind = 0;
	char hv_applcancelcode[3];
	short int hv_applcancelcode_ind = 0;
	char hv_applcanceldate[DATE_TIME_SIZE];
	short int hv_applcanceldate_ind = 0;
	char hv_appldate[9];
	short int hv_appldate_ind = 0;
	char hv_applid[20];
	short int hv_applid_ind = 0;
	int hv_applpriority;
	short int hv_applpriority_ind = 0;
	/* varchar hv_applremarks[61] = {0}; */ 
struct { unsigned short len; unsigned char arr[61]; } hv_applremarks
 = {0};

	short int hv_applremarks_ind = 0;
	char hv_applstage[4];
	short int hv_applstage_ind = 0;
	char hv_applstat;
	short int hv_applstat_ind = 0;
	int hv_appntcardverno;
	short int hv_appntcardverno_ind = 0;
	char hv_birthdate[9];
	short int hv_birthdate_ind = 0;
	char hv_branchcode[7];
	short int hv_branchcode_ind = 0;
	char hv_cardcolldate[9];
	short int hv_cardcolldate_ind = 0;
	char hv_collcenter[7];
	short int hv_collcenter_ind = 0;
	char hv_collkptno[13];
	short int hv_collkptno_ind = 0;
	/* varchar hv_contactno[31] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } hv_contactno
 = {0};

	short int hv_contactno_ind = 0;
	char hv_dateofapproval[9];
	short int hv_dateofapproval_ind = 0;
	char hv_dateofarrival[9];
	short int hv_dateofarrival_ind = 0;
	char hv_districtcode[5];
	short int hv_districtcode_ind = 0;
	char hv_gender;
	short int hv_gender_ind = 0;
	/* varchar hv_idno[16] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_idno
 = {0};

	short int hv_idno_ind = 0;
	char hv_idtype[3];
	short int hv_idtype_ind = 0;
	char hv_kptno[13];
	short int hv_kptno_ind = 0;
	/* varchar hv_licidno[16] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_licidno
 = {0};

	short int hv_licidno_ind = 0;
	char hv_licidtype[3];
	short int hv_licidtype_ind = 0;
	char hv_losscardind;
	short int hv_losscardind_ind = 0;
	char hv_lostreceiptflag;
	short int hv_lostreceiptflag_ind = 0;
	long hv_mepscash = 0;
	short int hv_mepscash_ind = 0;
	char hv_missedopexflag;
	short int hv_missedopexflag_ind = 0;
	char hv_newownercat;
	short int hv_newownercat_ind = 0;
	char hv_ownercat;
	short int hv_ownercat_ind = 0;
	char hv_photocapture;
	short int hv_photocapture_ind = 0;
	int hv_procserno;
	short int hv_procserno_ind = 0;
	char hv_qcflag;
	short int hv_qcflag_ind = 0;
	long hv_qticketno;
	short int hv_qticketno_ind = 0;
	char hv_relationcode[3];
	short int hv_relationcode_ind = 0;
	/* varchar hv_sponsoridno[16] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_sponsoridno
 = {0};

	short int hv_sponsoridno_ind = 0;
	char hv_sponsoridtype[3];
	short int hv_sponsoridtype_ind = 0;
	char hv_sscbranchcode[7];
	short int hv_sscbranchcode_ind = 0;
	char hv_summind;
	short int hv_summind_ind = 0;
	char hv_summpaymind;
	short int hv_summpaymind_ind = 0;
	/* varchar hv_supvsrnotes[501] = {0}; */ 
struct { unsigned short len; unsigned char arr[501]; } hv_supvsrnotes
 = {0};

	short int hv_supvsrnotes_ind = 0;
	/* varchar hv_temporaryid[16] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_temporaryid
 = {0};

	short int hv_temporaryid_ind = 0;
	char hv_timestamp[DATE_TIME_SIZE];
	short int hv_timestamp_ind = 0;
	/* varchar hv_userid[9] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_userid
 = {0};

	short int hv_userid_ind = 0;
	/* varchar hv_wsid[16] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_wsid
 = {0};

	short int hv_wsid_ind = 0;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	hv_applpriority = application->appl_priority;
	hv_appntcardverno = application->card_version;
	if(hv_appntcardverno <= 0)
	{
		hv_appntcardverno_ind = -1;
	}

	hv_procserno = application->proc_srno;
	hv_qticketno = application->qticket;

	strcpy((char *)hv_agencyonchip.arr, application->agency_chip);
	if (hv_agencyonchip.arr[0] == '\0')
	{
		hv_agencyonchip_ind = -1;
	}
	else
		setlen(hv_agencyonchip);

	strcpy(hv_applcancelcode, application->cancel_code);
	if (hv_applcancelcode[0] == '\0')
	{
	 hv_applcancelcode_ind = -1;
	}

	strcpy(hv_applcanceldate, application->appl_cancel_date);
	if (hv_applcanceldate[0] == '\0')
	{
	 hv_applcanceldate_ind = -1;
	}

	strcpy(hv_appldate, application->appldate);
	if (hv_appldate[0] == '\0')
	{
	 hv_appldate_ind = -1;
	}

	strcpy(hv_applid, applid);
	if (hv_applid[0] == '\0')
	{
	 hv_applid_ind = -1;
	}

	strcpy((char *)hv_applremarks.arr, application->appl_remarks);
	if (hv_applremarks.arr[0] == '\0')
	{
		hv_applremarks_ind = -1;
	}
	else
		setlen(hv_applremarks);

	strcpy(hv_applstage, application->appl_stage);
	if (hv_applstage[0] == '\0')
	{
		hv_applstage_ind = -1;
	}

	hv_applstat = application->applstat;
	if (hv_applstat == '\0')
	{
	 hv_applstat_ind = -1;
	}

	strcpy(hv_birthdate, application->birth_date);
	if (hv_birthdate[0] == '\0')
	{
	 hv_birthdate_ind = -1;
	}

	strcpy(hv_branchcode, application->branch_code);
	if (hv_branchcode[0] == '\0')
	{
	 hv_branchcode_ind = -1;
	}

	strcpy(hv_cardcolldate, application->card_coll_date);
	if (hv_cardcolldate[0] == '\0')
	{
	 hv_cardcolldate_ind = -1;
	}

	strcpy(hv_collcenter, application->coll_center);
	if (hv_collcenter[0] == '\0')
	{
	 hv_collcenter_ind = -1;
	}

	strcpy(hv_collkptno, application->coll_kptno);
	if (hv_collkptno[0] == '\0')
	{
	 hv_collkptno_ind = -1;
	}

/*	strcpy(hv_contactno.arr, 
	if (hv_contactno.arr[0] == '\0')
	{
	 hv_contactno_ind = -1;
	}
*/
	strcpy(hv_dateofapproval, application->date_approval);
	if (hv_dateofapproval[0] == '\0')
	{
	 hv_dateofapproval_ind = -1;
	}

	strcpy(hv_dateofarrival, application->date_arrival);
	if (hv_dateofarrival[0] == '\0')
	{
	 hv_dateofarrival_ind = -1;
	}

	strcpy(hv_districtcode, application->district_code);
	if (hv_districtcode[0] == '\0')
	{
	 hv_districtcode_ind = -1;
	}

	hv_gender = application->gender;
	if (hv_gender == '\0')
	{
	 hv_gender_ind = -1;
	}

	strcpy((char *)hv_idno.arr, application->id_no);
	if (hv_idno.arr[0] == '\0')
	{
	 hv_idno_ind = -1;
	}
	else
		setlen(hv_idno);

	strcpy(hv_idtype, application->id_type);
	if (hv_idtype[0] == '\0')
	{
	 hv_idtype_ind = -1;
	}

	strcpy(hv_kptno, application->kpt_no);
	if (hv_kptno[0] == '\0')
	{
	 hv_kptno_ind = -1;
	}

	strcpy((char *)hv_licidno.arr, application->lic_id_no);
	if (hv_licidno.arr[0] == '\0')
	{
	 hv_licidno_ind = -1;
	}
	else
		setlen(hv_licidno);

	strcpy(hv_licidtype, application->lic_id_type);
	if (hv_licidtype[0] == '\0')
	{
	 hv_licidtype_ind = -1;
	}

	hv_losscardind = application->loss_card_ind;
	if (hv_losscardind == '\0')
	{
	 hv_losscardind_ind = -1;
	}

	hv_lostreceiptflag = application->lost_receipt_flag;
	if (hv_lostreceiptflag == '\0')
	{
	 hv_lostreceiptflag_ind = -1;
	}

	hv_missedopexflag = application->missed_opex_flag;
	if (hv_missedopexflag == '\0')
	{
	 hv_missedopexflag_ind = -1;
	}

	hv_newownercat = application->new_owner_cat;
	if (hv_newownercat == '\0')
	{
	 hv_newownercat_ind = -1;
	}

	hv_ownercat = application->owner_cat;
	if (hv_ownercat == '\0')
	{
	 hv_ownercat_ind = -1;
	}

	hv_photocapture = application->photo_capture;
	if (hv_photocapture == '\0')
	{
	 hv_photocapture_ind = -1;
	}

	hv_qcflag = application->qc_flag;
	if (hv_qcflag == '\0')
	{
	 hv_qcflag_ind = -1;
	}

	strcpy(hv_relationcode, application->relation_code);
	if (hv_relationcode[0] == '\0')
	{
	 hv_relationcode_ind = -1;
	}

	strcpy((char *)hv_sponsoridno.arr, application->sponsor_id);
	if (hv_sponsoridno.arr[0] == '\0')
	{
	 hv_sponsoridno_ind = -1;
	}
	else
		setlen(hv_sponsoridno);

	strcpy(hv_sponsoridtype, application->sponsor_id_type);
	if (hv_sponsoridtype[0] == '\0')
	{
	 hv_sponsoridtype_ind = -1;
	}

	strcpy(hv_sscbranchcode, application->ssc_branch_code);
	if (hv_sscbranchcode[0] == '\0')
	{
	 hv_sscbranchcode_ind = -1;
	}

	hv_summind = application->summ_ind;
	if (hv_summind == '\0')
	{
	 hv_summind_ind = -1;
	}

	hv_summpaymind = application->summ_pay_ind;
	if (hv_summpaymind == '\0')
	{
	 hv_summpaymind_ind = -1;
	}

	strcpy((char *)hv_supvsrnotes.arr, application->supvr_notes);
	if (hv_supvsrnotes.arr[0] == '\0')
	{
	 hv_supvsrnotes_ind = -1;
	}
	else
		setlen(hv_supvsrnotes);
	
	strcpy((char *)hv_temporaryid.arr, application->temp_id);
	if (hv_temporaryid.arr[0] == '\0')
	{
	 hv_temporaryid_ind = -1;
	}
	else
		setlen(hv_temporaryid);

	strcpy(hv_timestamp, application->timestamp);
	if (hv_timestamp[0] == '\0')
	{
	 hv_timestamp_ind = -1;
	}

	strcpy((char *)hv_userid.arr, application->user_id);
	if (hv_userid.arr[0] == '\0')
	{
	 hv_userid_ind = -1;
	}
	else
		setlen(hv_userid);
	
	strcpy((char *)hv_wsid.arr, application->wsid);
	if (hv_wsid.arr[0] == '\0')
	{
	 hv_wsid_ind = -1;
	}
	else
		setlen(hv_wsid);


	/* EXEC SQL 
		INSERT INTO APPLICATION(AGENCYONCHIP, APPLCANCELCODE, APPLCANCELDATE, 
			 APPLDATE, APPLID, APPLPRIORITY, APPLREMARKS, 
			 APPLSTAGE, APPLSTAT, APPNTCARDVERNO, BIRTHDATE, 
			 BRANCHCODE, CARDCOLLDATE, COLLCENTER, COLLKPTNO, 
			 DATEOFAPPROVAL, DATEOFARRIVAL, DISTRICTCODE, 
			 GENDER, IDNO, IDTYPE, KPTNO, LICIDNO, LICIDTYPE, 
			 LOSSCARDIND, LOSTRECEIPTFLAG, MISSEDOPEXFLAG, 
			 NEWOWNERCAT, OWNERCAT, PHOTOCAPTURE, PROCSERNO, QCFLAG, 
			 QTICKETNO, RELATIONCODE, SPONSORIDNO, SPONSORIDTYPE, 
			 SSCBRANCHCODE, SUMMIND, SUMMPAYMIND, SUPVSRNOTES, 
			 TEMPORARYID, TIMESTAMP, USERID, WSID ) 
		VALUES(:hv_agencyonchip:hv_agencyonchip_ind, :hv_applcancelcode:hv_applcancelcode_ind, 
			TO_DATE(:hv_applcanceldate:hv_applcanceldate_ind, 'DDMMYYYY HH24MISS'), 
			TO_DATE(:hv_appldate:hv_appldate_ind, 'DDMMYYYY'), :hv_applid:hv_applid_ind, 
			:hv_applpriority:hv_applpriority_ind, :hv_applremarks:hv_applremarks_ind, 
			:hv_applstage:hv_applstage_ind, :hv_applstat:hv_applstat_ind, 
			:hv_appntcardverno:hv_appntcardverno_ind, TO_DATE(:hv_birthdate:hv_birthdate_ind, 'DDMMYYYY'), 
			:hv_branchcode:hv_branchcode_ind, TO_DATE(:hv_cardcolldate:hv_cardcolldate_ind, 'DDMMYYYY'), 
			:hv_collcenter:hv_collcenter_ind, :hv_collkptno:hv_collkptno_ind, 
			TO_DATE(:hv_dateofapproval:hv_dateofapproval_ind, 'DDMMYYYY'), 
			TO_DATE(:hv_dateofarrival:hv_dateofarrival_ind, 'DDMMYYYY'), :hv_districtcode:hv_districtcode_ind, 
			:hv_gender:hv_gender_ind, :hv_idno:hv_idno_ind, :hv_idtype:hv_idtype_ind, :hv_kptno:hv_kptno_ind, 
			:hv_licidno:hv_licidno_ind, :hv_licidtype:hv_licidtype_ind, :hv_losscardind:hv_losscardind_ind, 
			:hv_lostreceiptflag:hv_lostreceiptflag_ind, :hv_missedopexflag:hv_missedopexflag_ind, 
			:hv_newownercat:hv_newownercat_ind, :hv_ownercat:hv_ownercat_ind, :hv_photocapture:hv_photocapture_ind, 
			:hv_procserno:hv_procserno_ind, :hv_qcflag:hv_qcflag_ind, :hv_qticketno:hv_qticketno_ind, 
			:hv_relationcode:hv_relationcode_ind, :hv_sponsoridno:hv_sponsoridno_ind, :hv_sponsoridtype:hv_sponsoridtype_ind, 
			:hv_sscbranchcode:hv_sscbranchcode_ind, :hv_summind:hv_summind_ind, :hv_summpaymind:hv_summpaymind_ind, 
			:hv_supvsrnotes:hv_supvsrnotes_ind, :hv_temporaryid:hv_temporaryid_ind, TO_DATE(:hv_timestamp:hv_timestamp_ind, 'DDMMYYYY HH24MISS'), 
			:hv_userid:hv_userid_ind, :hv_wsid:hv_wsid_ind ); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 44;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft(&pcCtx,
   "insert into APPLICATION (AGENCYONCHIP,APPLCANCELCODE,APPLCANCELDATE,APPL\
DATE,APPLID,APPLPRIORITY,APPLREMARKS,APPLSTAGE,APPLSTAT,APPNTCARDVERNO,BIRTH\
DATE,BRANCHCODE,CARDCOLLDATE,COLLCENTER,COLLKPTNO,DATEOFAPPROVAL,DATEOFARRIV\
AL,DISTRICTCODE,GENDER,IDNO,IDTYPE,KPTNO,LICIDNO,LICIDTYPE,LOSSCARDIND,LOSTR\
ECEIPTFLAG,MISSEDOPEXFLAG,NEWOWNERCAT,OWNERCAT,PHOTOCAPTURE,PROCSERNO,QCFLAG\
,QTICKETNO,RELATIONCODE,SPONSORIDNO,SPONSORIDTYPE,SSCBRANCHCODE,SUMMIND,SUMM\
PAYMIND,SUPVSRNOTES,TEMPORARYID, timestamp ,USERID,WSID) values (:b0:b1,:b2:\
b3,TO_DATE(:b4:b5,'DDMMYYYY HH24MISS'),TO_DATE(:b6:b7,'DDMMYYYY'),:b8:b9,:b1\
0:b11,:b12:b13,:b14:b15,:b16:b17,:b18:b19,TO_DATE(:b20:b21,'DDMMYYYY'),:b22:\
b23,TO_DATE(:b24:b25,'DDMMYYYY'),:b26:b27,:b28:b29,TO_DATE(:b30:b31,'DDMMYYY\
Y'),TO_DATE(:b32:b33,'DDMMYYYY'),:b34:b35,:b36:b37,:b38:b39,:b40:b41,:b42:b4\
3,:b44:b45,:b46:b47,:b48:b49,:b50:b51,:b52:b53,:b54:b55,:b56:b57,:b58:b59,:b\
60:b61,:b62:b63,:b64:b65,:b66:b67,:b68:b69,:b70:b71,:b72:b73,:b74:b75,:b76:b\
77,:b78:b79,:b80:b81,TO_DATE(:b82:b83,'D");
 sqlstm.stmt = "DMMYYYY HH24MISS'),:b84:b85,:b86:b87)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )753;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_agencyonchip;
 sqlstm.sqhstl[0] = (unsigned int  )11;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&hv_agencyonchip_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hv_applcancelcode;
 sqlstm.sqhstl[1] = (unsigned int  )3;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&hv_applcancelcode_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)hv_applcanceldate;
 sqlstm.sqhstl[2] = (unsigned int  )16;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&hv_applcanceldate_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)hv_appldate;
 sqlstm.sqhstl[3] = (unsigned int  )9;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&hv_appldate_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)hv_applid;
 sqlstm.sqhstl[4] = (unsigned int  )20;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&hv_applid_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&hv_applpriority;
 sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&hv_applpriority_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&hv_applremarks;
 sqlstm.sqhstl[6] = (unsigned int  )63;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&hv_applremarks_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)hv_applstage;
 sqlstm.sqhstl[7] = (unsigned int  )4;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&hv_applstage_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&hv_applstat;
 sqlstm.sqhstl[8] = (unsigned int  )1;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&hv_applstat_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&hv_appntcardverno;
 sqlstm.sqhstl[9] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&hv_appntcardverno_ind;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)hv_birthdate;
 sqlstm.sqhstl[10] = (unsigned int  )9;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)&hv_birthdate_ind;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)hv_branchcode;
 sqlstm.sqhstl[11] = (unsigned int  )7;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)&hv_branchcode_ind;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)hv_cardcolldate;
 sqlstm.sqhstl[12] = (unsigned int  )9;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)&hv_cardcolldate_ind;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)hv_collcenter;
 sqlstm.sqhstl[13] = (unsigned int  )7;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)&hv_collcenter_ind;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
 sqlstm.sqhstv[14] = (         void  *)hv_collkptno;
 sqlstm.sqhstl[14] = (unsigned int  )13;
 sqlstm.sqhsts[14] = (         int  )0;
 sqlstm.sqindv[14] = (         void  *)&hv_collkptno_ind;
 sqlstm.sqinds[14] = (         int  )0;
 sqlstm.sqharm[14] = (unsigned int  )0;
 sqlstm.sqadto[14] = (unsigned short )0;
 sqlstm.sqtdso[14] = (unsigned short )0;
 sqlstm.sqhstv[15] = (         void  *)hv_dateofapproval;
 sqlstm.sqhstl[15] = (unsigned int  )9;
 sqlstm.sqhsts[15] = (         int  )0;
 sqlstm.sqindv[15] = (         void  *)&hv_dateofapproval_ind;
 sqlstm.sqinds[15] = (         int  )0;
 sqlstm.sqharm[15] = (unsigned int  )0;
 sqlstm.sqadto[15] = (unsigned short )0;
 sqlstm.sqtdso[15] = (unsigned short )0;
 sqlstm.sqhstv[16] = (         void  *)hv_dateofarrival;
 sqlstm.sqhstl[16] = (unsigned int  )9;
 sqlstm.sqhsts[16] = (         int  )0;
 sqlstm.sqindv[16] = (         void  *)&hv_dateofarrival_ind;
 sqlstm.sqinds[16] = (         int  )0;
 sqlstm.sqharm[16] = (unsigned int  )0;
 sqlstm.sqadto[16] = (unsigned short )0;
 sqlstm.sqtdso[16] = (unsigned short )0;
 sqlstm.sqhstv[17] = (         void  *)hv_districtcode;
 sqlstm.sqhstl[17] = (unsigned int  )5;
 sqlstm.sqhsts[17] = (         int  )0;
 sqlstm.sqindv[17] = (         void  *)&hv_districtcode_ind;
 sqlstm.sqinds[17] = (         int  )0;
 sqlstm.sqharm[17] = (unsigned int  )0;
 sqlstm.sqadto[17] = (unsigned short )0;
 sqlstm.sqtdso[17] = (unsigned short )0;
 sqlstm.sqhstv[18] = (         void  *)&hv_gender;
 sqlstm.sqhstl[18] = (unsigned int  )1;
 sqlstm.sqhsts[18] = (         int  )0;
 sqlstm.sqindv[18] = (         void  *)&hv_gender_ind;
 sqlstm.sqinds[18] = (         int  )0;
 sqlstm.sqharm[18] = (unsigned int  )0;
 sqlstm.sqadto[18] = (unsigned short )0;
 sqlstm.sqtdso[18] = (unsigned short )0;
 sqlstm.sqhstv[19] = (         void  *)&hv_idno;
 sqlstm.sqhstl[19] = (unsigned int  )18;
 sqlstm.sqhsts[19] = (         int  )0;
 sqlstm.sqindv[19] = (         void  *)&hv_idno_ind;
 sqlstm.sqinds[19] = (         int  )0;
 sqlstm.sqharm[19] = (unsigned int  )0;
 sqlstm.sqadto[19] = (unsigned short )0;
 sqlstm.sqtdso[19] = (unsigned short )0;
 sqlstm.sqhstv[20] = (         void  *)hv_idtype;
 sqlstm.sqhstl[20] = (unsigned int  )3;
 sqlstm.sqhsts[20] = (         int  )0;
 sqlstm.sqindv[20] = (         void  *)&hv_idtype_ind;
 sqlstm.sqinds[20] = (         int  )0;
 sqlstm.sqharm[20] = (unsigned int  )0;
 sqlstm.sqadto[20] = (unsigned short )0;
 sqlstm.sqtdso[20] = (unsigned short )0;
 sqlstm.sqhstv[21] = (         void  *)hv_kptno;
 sqlstm.sqhstl[21] = (unsigned int  )13;
 sqlstm.sqhsts[21] = (         int  )0;
 sqlstm.sqindv[21] = (         void  *)&hv_kptno_ind;
 sqlstm.sqinds[21] = (         int  )0;
 sqlstm.sqharm[21] = (unsigned int  )0;
 sqlstm.sqadto[21] = (unsigned short )0;
 sqlstm.sqtdso[21] = (unsigned short )0;
 sqlstm.sqhstv[22] = (         void  *)&hv_licidno;
 sqlstm.sqhstl[22] = (unsigned int  )18;
 sqlstm.sqhsts[22] = (         int  )0;
 sqlstm.sqindv[22] = (         void  *)&hv_licidno_ind;
 sqlstm.sqinds[22] = (         int  )0;
 sqlstm.sqharm[22] = (unsigned int  )0;
 sqlstm.sqadto[22] = (unsigned short )0;
 sqlstm.sqtdso[22] = (unsigned short )0;
 sqlstm.sqhstv[23] = (         void  *)hv_licidtype;
 sqlstm.sqhstl[23] = (unsigned int  )3;
 sqlstm.sqhsts[23] = (         int  )0;
 sqlstm.sqindv[23] = (         void  *)&hv_licidtype_ind;
 sqlstm.sqinds[23] = (         int  )0;
 sqlstm.sqharm[23] = (unsigned int  )0;
 sqlstm.sqadto[23] = (unsigned short )0;
 sqlstm.sqtdso[23] = (unsigned short )0;
 sqlstm.sqhstv[24] = (         void  *)&hv_losscardind;
 sqlstm.sqhstl[24] = (unsigned int  )1;
 sqlstm.sqhsts[24] = (         int  )0;
 sqlstm.sqindv[24] = (         void  *)&hv_losscardind_ind;
 sqlstm.sqinds[24] = (         int  )0;
 sqlstm.sqharm[24] = (unsigned int  )0;
 sqlstm.sqadto[24] = (unsigned short )0;
 sqlstm.sqtdso[24] = (unsigned short )0;
 sqlstm.sqhstv[25] = (         void  *)&hv_lostreceiptflag;
 sqlstm.sqhstl[25] = (unsigned int  )1;
 sqlstm.sqhsts[25] = (         int  )0;
 sqlstm.sqindv[25] = (         void  *)&hv_lostreceiptflag_ind;
 sqlstm.sqinds[25] = (         int  )0;
 sqlstm.sqharm[25] = (unsigned int  )0;
 sqlstm.sqadto[25] = (unsigned short )0;
 sqlstm.sqtdso[25] = (unsigned short )0;
 sqlstm.sqhstv[26] = (         void  *)&hv_missedopexflag;
 sqlstm.sqhstl[26] = (unsigned int  )1;
 sqlstm.sqhsts[26] = (         int  )0;
 sqlstm.sqindv[26] = (         void  *)&hv_missedopexflag_ind;
 sqlstm.sqinds[26] = (         int  )0;
 sqlstm.sqharm[26] = (unsigned int  )0;
 sqlstm.sqadto[26] = (unsigned short )0;
 sqlstm.sqtdso[26] = (unsigned short )0;
 sqlstm.sqhstv[27] = (         void  *)&hv_newownercat;
 sqlstm.sqhstl[27] = (unsigned int  )1;
 sqlstm.sqhsts[27] = (         int  )0;
 sqlstm.sqindv[27] = (         void  *)&hv_newownercat_ind;
 sqlstm.sqinds[27] = (         int  )0;
 sqlstm.sqharm[27] = (unsigned int  )0;
 sqlstm.sqadto[27] = (unsigned short )0;
 sqlstm.sqtdso[27] = (unsigned short )0;
 sqlstm.sqhstv[28] = (         void  *)&hv_ownercat;
 sqlstm.sqhstl[28] = (unsigned int  )1;
 sqlstm.sqhsts[28] = (         int  )0;
 sqlstm.sqindv[28] = (         void  *)&hv_ownercat_ind;
 sqlstm.sqinds[28] = (         int  )0;
 sqlstm.sqharm[28] = (unsigned int  )0;
 sqlstm.sqadto[28] = (unsigned short )0;
 sqlstm.sqtdso[28] = (unsigned short )0;
 sqlstm.sqhstv[29] = (         void  *)&hv_photocapture;
 sqlstm.sqhstl[29] = (unsigned int  )1;
 sqlstm.sqhsts[29] = (         int  )0;
 sqlstm.sqindv[29] = (         void  *)&hv_photocapture_ind;
 sqlstm.sqinds[29] = (         int  )0;
 sqlstm.sqharm[29] = (unsigned int  )0;
 sqlstm.sqadto[29] = (unsigned short )0;
 sqlstm.sqtdso[29] = (unsigned short )0;
 sqlstm.sqhstv[30] = (         void  *)&hv_procserno;
 sqlstm.sqhstl[30] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[30] = (         int  )0;
 sqlstm.sqindv[30] = (         void  *)&hv_procserno_ind;
 sqlstm.sqinds[30] = (         int  )0;
 sqlstm.sqharm[30] = (unsigned int  )0;
 sqlstm.sqadto[30] = (unsigned short )0;
 sqlstm.sqtdso[30] = (unsigned short )0;
 sqlstm.sqhstv[31] = (         void  *)&hv_qcflag;
 sqlstm.sqhstl[31] = (unsigned int  )1;
 sqlstm.sqhsts[31] = (         int  )0;
 sqlstm.sqindv[31] = (         void  *)&hv_qcflag_ind;
 sqlstm.sqinds[31] = (         int  )0;
 sqlstm.sqharm[31] = (unsigned int  )0;
 sqlstm.sqadto[31] = (unsigned short )0;
 sqlstm.sqtdso[31] = (unsigned short )0;
 sqlstm.sqhstv[32] = (         void  *)&hv_qticketno;
 sqlstm.sqhstl[32] = (unsigned int  )sizeof(long);
 sqlstm.sqhsts[32] = (         int  )0;
 sqlstm.sqindv[32] = (         void  *)&hv_qticketno_ind;
 sqlstm.sqinds[32] = (         int  )0;
 sqlstm.sqharm[32] = (unsigned int  )0;
 sqlstm.sqadto[32] = (unsigned short )0;
 sqlstm.sqtdso[32] = (unsigned short )0;
 sqlstm.sqhstv[33] = (         void  *)hv_relationcode;
 sqlstm.sqhstl[33] = (unsigned int  )3;
 sqlstm.sqhsts[33] = (         int  )0;
 sqlstm.sqindv[33] = (         void  *)&hv_relationcode_ind;
 sqlstm.sqinds[33] = (         int  )0;
 sqlstm.sqharm[33] = (unsigned int  )0;
 sqlstm.sqadto[33] = (unsigned short )0;
 sqlstm.sqtdso[33] = (unsigned short )0;
 sqlstm.sqhstv[34] = (         void  *)&hv_sponsoridno;
 sqlstm.sqhstl[34] = (unsigned int  )18;
 sqlstm.sqhsts[34] = (         int  )0;
 sqlstm.sqindv[34] = (         void  *)&hv_sponsoridno_ind;
 sqlstm.sqinds[34] = (         int  )0;
 sqlstm.sqharm[34] = (unsigned int  )0;
 sqlstm.sqadto[34] = (unsigned short )0;
 sqlstm.sqtdso[34] = (unsigned short )0;
 sqlstm.sqhstv[35] = (         void  *)hv_sponsoridtype;
 sqlstm.sqhstl[35] = (unsigned int  )3;
 sqlstm.sqhsts[35] = (         int  )0;
 sqlstm.sqindv[35] = (         void  *)&hv_sponsoridtype_ind;
 sqlstm.sqinds[35] = (         int  )0;
 sqlstm.sqharm[35] = (unsigned int  )0;
 sqlstm.sqadto[35] = (unsigned short )0;
 sqlstm.sqtdso[35] = (unsigned short )0;
 sqlstm.sqhstv[36] = (         void  *)hv_sscbranchcode;
 sqlstm.sqhstl[36] = (unsigned int  )7;
 sqlstm.sqhsts[36] = (         int  )0;
 sqlstm.sqindv[36] = (         void  *)&hv_sscbranchcode_ind;
 sqlstm.sqinds[36] = (         int  )0;
 sqlstm.sqharm[36] = (unsigned int  )0;
 sqlstm.sqadto[36] = (unsigned short )0;
 sqlstm.sqtdso[36] = (unsigned short )0;
 sqlstm.sqhstv[37] = (         void  *)&hv_summind;
 sqlstm.sqhstl[37] = (unsigned int  )1;
 sqlstm.sqhsts[37] = (         int  )0;
 sqlstm.sqindv[37] = (         void  *)&hv_summind_ind;
 sqlstm.sqinds[37] = (         int  )0;
 sqlstm.sqharm[37] = (unsigned int  )0;
 sqlstm.sqadto[37] = (unsigned short )0;
 sqlstm.sqtdso[37] = (unsigned short )0;
 sqlstm.sqhstv[38] = (         void  *)&hv_summpaymind;
 sqlstm.sqhstl[38] = (unsigned int  )1;
 sqlstm.sqhsts[38] = (         int  )0;
 sqlstm.sqindv[38] = (         void  *)&hv_summpaymind_ind;
 sqlstm.sqinds[38] = (         int  )0;
 sqlstm.sqharm[38] = (unsigned int  )0;
 sqlstm.sqadto[38] = (unsigned short )0;
 sqlstm.sqtdso[38] = (unsigned short )0;
 sqlstm.sqhstv[39] = (         void  *)&hv_supvsrnotes;
 sqlstm.sqhstl[39] = (unsigned int  )503;
 sqlstm.sqhsts[39] = (         int  )0;
 sqlstm.sqindv[39] = (         void  *)&hv_supvsrnotes_ind;
 sqlstm.sqinds[39] = (         int  )0;
 sqlstm.sqharm[39] = (unsigned int  )0;
 sqlstm.sqadto[39] = (unsigned short )0;
 sqlstm.sqtdso[39] = (unsigned short )0;
 sqlstm.sqhstv[40] = (         void  *)&hv_temporaryid;
 sqlstm.sqhstl[40] = (unsigned int  )18;
 sqlstm.sqhsts[40] = (         int  )0;
 sqlstm.sqindv[40] = (         void  *)&hv_temporaryid_ind;
 sqlstm.sqinds[40] = (         int  )0;
 sqlstm.sqharm[40] = (unsigned int  )0;
 sqlstm.sqadto[40] = (unsigned short )0;
 sqlstm.sqtdso[40] = (unsigned short )0;
 sqlstm.sqhstv[41] = (         void  *)hv_timestamp;
 sqlstm.sqhstl[41] = (unsigned int  )16;
 sqlstm.sqhsts[41] = (         int  )0;
 sqlstm.sqindv[41] = (         void  *)&hv_timestamp_ind;
 sqlstm.sqinds[41] = (         int  )0;
 sqlstm.sqharm[41] = (unsigned int  )0;
 sqlstm.sqadto[41] = (unsigned short )0;
 sqlstm.sqtdso[41] = (unsigned short )0;
 sqlstm.sqhstv[42] = (         void  *)&hv_userid;
 sqlstm.sqhstl[42] = (unsigned int  )11;
 sqlstm.sqhsts[42] = (         int  )0;
 sqlstm.sqindv[42] = (         void  *)&hv_userid_ind;
 sqlstm.sqinds[42] = (         int  )0;
 sqlstm.sqharm[42] = (unsigned int  )0;
 sqlstm.sqadto[42] = (unsigned short )0;
 sqlstm.sqtdso[42] = (unsigned short )0;
 sqlstm.sqhstv[43] = (         void  *)&hv_wsid;
 sqlstm.sqhstl[43] = (unsigned int  )18;
 sqlstm.sqhsts[43] = (         int  )0;
 sqlstm.sqindv[43] = (         void  *)&hv_wsid_ind;
 sqlstm.sqinds[43] = (         int  )0;
 sqlstm.sqharm[43] = (unsigned int  )0;
 sqlstm.sqadto[43] = (unsigned short )0;
 sqlstm.sqtdso[43] = (unsigned short )0;
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
		sprintf(excep_log.error_msg, "insert_application : error while inserting in APPLICATION table %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';
		strcpy(prog_log.remarks, "TERMINATE_APPL : Failed due to INSERT_ERROR");
		return INSERT_ERROR;
	}

	return GMPC_GOOD;
}

int delete_appl_txn(char *applid,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hvapplid[APP_ID_SIZE];
	char hvtxncode[TRANSACTION_CODE_SIZE];
	char hvtxncancelcode[CANCEL_CODE_SIZE];
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(hvapplid, applid);
	_itoa(TXN_ISSUANCE, hvtxncode, 10);
	strcpy(hvtxncancelcode, "51");

	/* EXEC SQL 
		UPDATE APPL_TXN SET TXNCANCELCODE = :hvtxncancelcode
		WHERE APPLID = :hvapplid AND 
		TXNSERNO >= (SELECT MIN(TXNSERNO) FROM APPL_TXN 
	  		   			   WHERE TXNCODE = '701' 
						   AND TXNCANCELCODE IS NULL
						   AND APPLID = :hvapplid); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 44;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update APPL_TXN  set TXNCANCELCODE=:b0 where (APPLID=:b1 and\
 TXNSERNO>=(select min(TXNSERNO)  from APPL_TXN where ((TXNCODE='701' and TXNC\
ANCELCODE is null ) and APPLID=:b1)))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )944;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)hvtxncancelcode;
 sqlstm.sqhstl[0] = (unsigned int  )3;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hvapplid;
 sqlstm.sqhstl[1] = (unsigned int  )20;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)hvapplid;
 sqlstm.sqhstl[2] = (unsigned int  )20;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
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



	if(NO_DATA_FOUND)
	{
		return GMPC_GOOD;
	}

	if(SQLCODE != 0)
	{
		sprintf(excep_log.error_msg, "delete_appl_txn : error while deleting from APPL_TXN %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';
		strcpy(prog_log.remarks, "TERMINATE_APPL : Failed due to DELETE_ERROR");
		return DELETE_ERROR;
	}

	return GMPC_GOOD;
}

int insert_appl_history(char *applid, int histcnt, APPL_HISTORY_T *appl_history,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE] = {"\0"};
	int hv_proc_sr = 0;
	char hv_appl_date[DATE_SIZE] = {"\0"};
	char hv_appl_stat = '\0';
	char hv_kpt_no[KPT_SIZE] = {"\0"};
	/* varchar hv_curr_long_name[LONG_NAME_SIZE] = {'\0'}; */ 
struct { unsigned short len; unsigned char arr[151]; } hv_curr_long_name
 = {'\0'};

	char hv_cancel_code[CANCEL_CODE_SIZE] = {'\0'};
	char hv_cancel_date[DATE_SIZE] = {'\0'};
	char hv_branch_code[BRANCH_CODE_SIZE] = {"\0"};
	/* varchar hv_user_id[USER_ID_SIZE] = {'\0'}; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_user_id
 = {'\0'};

	/* varchar hv_ws_id[WS_ID_SIZE] = {'\0'}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_ws_id
 = {'\0'};

	char hv_timestamp[DATE_TIME_SIZE] = {"\0"};

	short int hv_proc_sr_ind = -1;
	short int hv_appl_date_ind = -1;
	short int hv_appl_stat_ind = -1;
	short int hv_kpt_no_ind = -1;
	short int hv_curr_long_name_ind = -1;
	short int hv_cancel_code_ind = -1;
	short int hv_cancel_date_ind = -1;
	short int hv_branch_code_ind = -1;
	short int hv_user_id_ind = -1;
	short int hv_ws_id_ind = -1;
	short int hv_timestamp_ind = -1;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int i = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	
	strcpy(hv_applid, applid);

	for(i = 0; i < histcnt; i++, appl_history++)
	{

#ifdef DEBUG
	userlog("procserno %d", appl_history->procserno);
	userlog("appldate %s", appl_history->appldate);
#endif //DEBUG

		hv_proc_sr = appl_history->procserno;
		if(hv_proc_sr > 0)
			hv_proc_sr_ind = 0;

		strcpy(hv_appl_date, appl_history->appldate);
		if(hv_appl_date[0] != '\0')
			hv_appl_date_ind = 0;
		
		hv_appl_stat = appl_history->applstat;
		if(hv_appl_stat != '\0')
			hv_appl_stat_ind = 0;

		strcpy(hv_kpt_no, appl_history->kptno);
		if(hv_kpt_no[0] != '\0')
			hv_kpt_no_ind = 0;

		strcpy((char *)hv_curr_long_name.arr, appl_history->currlongname);
		if(hv_curr_long_name.arr[0] != '\0')
		{
			setlen(hv_curr_long_name);
			hv_curr_long_name_ind = 0;
		}


		strcpy(hv_cancel_code, appl_history->cancelcode);
		if(hv_cancel_code[0] != '\0')
			hv_cancel_code_ind = 0;

		strcpy(hv_cancel_date, appl_history->canceldate);
		if(hv_cancel_date[0] != '\0')
			hv_cancel_date_ind = 0;

		strcpy(hv_branch_code, appl_history->branchcode);
		if(hv_branch_code[0] != '\0')
			hv_branch_code_ind = 0;


		strcpy((char *)hv_user_id.arr, appl_history->userid);
		if(hv_user_id.arr[0] != '\0')
		{
			setlen(hv_user_id);
			hv_user_id_ind = 0;
		}

		strcpy((char *)hv_ws_id.arr, appl_history->wsid);
		if(hv_ws_id.arr[0] != '\0')
		{
			setlen(hv_ws_id);
			hv_ws_id_ind = 0;
		}

		strcpy(hv_timestamp, appl_history->timestamp);
		if(hv_timestamp[0] != '\0')
			hv_timestamp_ind = 0;


		/* EXEC SQL
			INSERT INTO APPL_HISTORY ( APPLID, PROCSERNO, APPLDATE, APPLSTAT, KPTNO, CURRLONGNAME, 
				APPLCANCELCODE, APPLCANCELDATE, BRANCHCODE, USERID, WSID, TIMESTAMP )
			VALUES ( :hv_applid, :hv_proc_sr:hv_proc_sr_ind, TO_DATE(:hv_appl_date:hv_appl_date_ind, 'DDMMYYYY'), 
				:hv_appl_stat:hv_appl_stat_ind, :hv_kpt_no:hv_kpt_no_ind, :hv_curr_long_name:hv_curr_long_name_ind, 
				:hv_cancel_code:hv_cancel_code_ind, TO_DATE(:hv_cancel_date:hv_cancel_date_ind, 'DDMMYYYY'), 
				:hv_branch_code:hv_branch_code_ind, :hv_user_id:hv_user_id_ind, :hv_ws_id:hv_ws_id_ind, 
				TO_DATE(:hv_timestamp:hv_timestamp_ind, 'DDMMYYYY HH24MISS')); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 44;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPL_HISTORY (APPLID,PROCSERNO,APPLDATE,APPLSTA\
T,KPTNO,CURRLONGNAME,APPLCANCELCODE,APPLCANCELDATE,BRANCHCODE,USERID,WSID, tim\
estamp ) values (:b0,:b1:b2,TO_DATE(:b3:b4,'DDMMYYYY'),:b5:b6,:b7:b8,:b9:b10,:\
b11:b12,TO_DATE(:b13:b14,'DDMMYYYY'),:b15:b16,:b17:b18,:b19:b20,TO_DATE(:b21:b\
22,'DDMMYYYY HH24MISS'))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )971;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)hv_applid;
  sqlstm.sqhstl[0] = (unsigned int  )20;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&hv_proc_sr;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&hv_proc_sr_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)hv_appl_date;
  sqlstm.sqhstl[2] = (unsigned int  )9;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&hv_appl_date_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&hv_appl_stat;
  sqlstm.sqhstl[3] = (unsigned int  )1;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&hv_appl_stat_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)hv_kpt_no;
  sqlstm.sqhstl[4] = (unsigned int  )13;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&hv_kpt_no_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&hv_curr_long_name;
  sqlstm.sqhstl[5] = (unsigned int  )153;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&hv_curr_long_name_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)hv_cancel_code;
  sqlstm.sqhstl[6] = (unsigned int  )3;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&hv_cancel_code_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)hv_cancel_date;
  sqlstm.sqhstl[7] = (unsigned int  )9;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&hv_cancel_date_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)hv_branch_code;
  sqlstm.sqhstl[8] = (unsigned int  )7;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&hv_branch_code_ind;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&hv_user_id;
  sqlstm.sqhstl[9] = (unsigned int  )11;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)&hv_user_id_ind;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&hv_ws_id;
  sqlstm.sqhstl[10] = (unsigned int  )18;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)&hv_ws_id_ind;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)hv_timestamp;
  sqlstm.sqhstl[11] = (unsigned int  )16;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)&hv_timestamp_ind;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
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



		if((SQLCODE != 0) && (SQLCODE != (RECORD_EXISTS)))
		{
			sprintf(excep_log.error_msg, "insert_appl_history : error while inserting into APPL_HISTORY %s", SQLMSG);
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			strcpy(prog_log.remarks, "TERMINATE_APPL : Failed due to INSERT_ERROR");
			return INSERT_ERROR;
		}
	}

	return GMPC_GOOD;
}

/* New Function added to insert only APPL_PROC records */
int insert_appl_proc(TERMINATE_APPL_REQ_T *req, APPL_PROC_T *appl_proc,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	
	char hv_applid[APP_ID_SIZE] = {0};
	int hv_procserno;
	char hv_procind[PROCESS_IND_SIZE] = {0};
	char hv_idtype[ID_TYPE_SIZE] = {0};
	/* varchar hv_idno[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_idno
 = {0};

	/* varchar hv_wsid[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_wsid
 = {0};

	/* varchar hv_userid[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_userid
 = {0};

	char hv_timestamp[DATE_TIME_SIZE] = {0};
	char hv_gscbupdflag;

	short int hv_procserno_ind = 0;
	short int hv_procind_ind = 0;
	short int hv_idtype_ind = 0;
	short int hv_idno_ind = 0;
	short int hv_wsid_ind = 0;
	short int hv_userid_ind = 0;
	short int hv_timestamp_ind = 0;
	short int hv_gscbupdflag_ind = 0;

	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int i = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	

#ifdef DEBUG
	userlog("TERMINATE_APPL : insert_appl_proc proc count %d", req->proc_count);
#endif

	strcpy(hv_applid, req->header.application_id);

	for(i = 0; i < req->proc_count; i++, appl_proc++)
	{
		hv_procserno = appl_proc->process_srno;
		strcpy(hv_procind, appl_proc->proc_ind);
		strcpy(hv_idtype, appl_proc->id_type);
		if(hv_idtype[0] == '\0')
		{
			hv_idtype_ind = -1;
		}

		strcpy((char *)hv_idno.arr, appl_proc->id_no);
		setlen(hv_idno);
		if(hv_idno.arr[0] == '\0')
		{
			hv_idno_ind = -1;
		}

		strcpy((char *)hv_wsid.arr, appl_proc->workstation_id);
		setlen(hv_wsid);
		if(hv_wsid.arr[0] == '\0')
		{
			hv_wsid_ind = -1;
		}

		strcpy((char *)hv_userid.arr, appl_proc->user_id);
		setlen(hv_userid);
		if(hv_userid.arr[0] == '\0')
		{
			hv_userid_ind = -1;
		}

		strcpy(hv_timestamp, appl_proc->timestamp);
		if(hv_timestamp[0] == '\0')
		{
			hv_timestamp_ind = -1;
		}
		
		hv_gscbupdflag = 'N';
#ifdef DEBUG
		userlog("TERMINATE_APPL : insert_appl_proc timestamp %s", hv_timestamp);
#endif //DEBUG
		/* EXEC SQL
			INSERT INTO APPL_PROC ( APPLID, PROCSERNO, PROCIND, IDTYPE, IDNO, WSID, USERID, 
				TIMESTAMP, GSCBUPDFLAG )
				VALUES ( :hv_applid, :hv_procserno, :hv_procind, :hv_idtype:hv_idtype_ind, :hv_idno:hv_idno_ind, 
				:hv_wsid:hv_wsid_ind, :hv_userid:hv_userid_ind, TO_DATE(:hv_timestamp:hv_timestamp_ind, 'DDMMYYYY HH24MISS'), :hv_gscbupdflag ); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 44;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPL_PROC (APPLID,PROCSERNO,PROCIND,IDTYPE,IDNO\
,WSID,USERID, timestamp ,GSCBUPDFLAG) values (:b0,:b1,:b2,:b3:b4,:b5:b6,:b7:b8\
,:b9:b10,TO_DATE(:b11:b12,'DDMMYYYY HH24MISS'),:b13)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1034;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)hv_applid;
  sqlstm.sqhstl[0] = (unsigned int  )20;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&hv_procserno;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)hv_procind;
  sqlstm.sqhstl[2] = (unsigned int  )3;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)hv_idtype;
  sqlstm.sqhstl[3] = (unsigned int  )3;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&hv_idtype_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&hv_idno;
  sqlstm.sqhstl[4] = (unsigned int  )18;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&hv_idno_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&hv_wsid;
  sqlstm.sqhstl[5] = (unsigned int  )18;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&hv_wsid_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&hv_userid;
  sqlstm.sqhstl[6] = (unsigned int  )11;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&hv_userid_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)hv_timestamp;
  sqlstm.sqhstl[7] = (unsigned int  )16;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&hv_timestamp_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&hv_gscbupdflag;
  sqlstm.sqhstl[8] = (unsigned int  )1;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
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



		if((SQLCODE != 0) && (SQLCODE != -1))
		{
			sprintf(excep_log.error_msg, "insert_appl_proc : error while inserting into APPL_PROC table %s", SQLMSG);
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			strcpy(prog_log.remarks, "insert_appl_proc : Failed due to INSERT_ERROR");
			return INSERT_ERROR;
		}
	}

	#ifdef DEBUG
			userlog("insert_appl_proc : inserted records in APPL_PROC");
	#endif //DEBUG

/*	
		// Commented on 08/08/06  
		This stmt no longer required. and 
		 bcoz of this stmt deadlock happen 


	EXEC SQL 
		UPDATE APPLICATION 
		SET PROCSERNO = (SELECT NVL(MAX(B.PROCSERNO),1) FROM APPL_PROC B
						WHERE B.APPLID = :hv_applid)
		WHERE APPLID = :hv_applid;

	if(SQLCODE != 0)
	{
		sprintf(excep_log.error_msg, "insert_appl_proc : error while updating APPLICATION table %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';
		strcpy(prog_log.remarks, "insert_appl_proc : Failed due to UPDATE_ERROR");
		return UPDATE_ERROR;
	}

	#ifdef DEBUG
			userlog("insert_appl_proc : Updated the PROCSERNO in APPLICATION");
	#endif //DEBUG */

	return GMPC_GOOD;
}

int reverse_pay(char *applid, PAYMENT_T *payment_info, int rvrs_count,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE] = {'\0'};
	/* varchar hv_auth_userid[USER_ID_SIZE] = {'\0'}; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_auth_userid
 = {'\0'};

	int hv_pay_srno;
	char hv_rvrs_date[DATE_TIME_SIZE] = {'\0'};
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int i = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	
	strcpy(hv_applid, applid);
	
	userlog("reverse_pay : rvrs_count %d", rvrs_count);

	for(i = 0; i < rvrs_count; i++, payment_info++)
	{
		userlog("reverse_pay : authuserid %s", payment_info->authbyuserid);
		userlog("reverse_pay : rvrsdatetime %s", payment_info->rvrsdatetime);
		userlog("reverse_pay : paymserno %d", payment_info->paymserno);

		hv_pay_srno = payment_info->paymserno;
		strcpy((char *)hv_auth_userid.arr, payment_info->authbyuserid);
		setlen(hv_auth_userid);
		strcpy(hv_rvrs_date, payment_info->rvrsdatetime);

		/* EXEC SQL
			UPDATE PAYMENT_INFO
			SET RVRSFLAG = 'R', AUTHBYUSERID = :hv_auth_userid,
			RVRSDATETIME = TO_DATE(:hv_rvrs_date, 'DDMMYYYY HH24MISS')
			WHERE APPLID = :hv_applid 
			AND PAYMSERNO = :hv_pay_srno; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 44;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update PAYMENT_INFO  set RVRSFLAG='R',AUTHBYUSERID=:b0,RVRS\
DATETIME=TO_DATE(:b1,'DDMMYYYY HH24MISS') where (APPLID=:b2 and PAYMSERNO=:b3)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1085;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&hv_auth_userid;
  sqlstm.sqhstl[0] = (unsigned int  )11;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_rvrs_date;
  sqlstm.sqhstl[1] = (unsigned int  )16;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)hv_applid;
  sqlstm.sqhstl[2] = (unsigned int  )20;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&hv_pay_srno;
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
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



		if(SQLCODE != 0)
		{
			userlog("reverse_pay : updation of PAYMENT_INFO failed %ld %s", SQLCODE, SQLMSG);
			sprintf(excep_log.error_msg, "reverse_pay : updation of PAYMENT_INFO failed %s", SQLMSG);
			//return UPDATE_ERROR;
			//return GMPC_GOOD; // If no data found then it will go next 
		}
	}

	return GMPC_GOOD;
}

int update_appl_remarks(char *appl_remarks, char *applid,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar hv_appl_remarks[REMARK_SIZE] = {'\0'}; */ 
struct { unsigned short len; unsigned char arr[61]; } hv_appl_remarks
 = {'\0'};

	short int hv_appl_remarks_ind = -1;

	char hv_applid[APP_ID_SIZE] = {'\0'};
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	hv_appl_remarks.arr[0] = '\0';
	strncpy((char *)hv_appl_remarks.arr, appl_remarks, (REMARK_SIZE - 1));
	setlen(hv_appl_remarks);
	if(hv_appl_remarks.arr[0] != '\0')
		hv_appl_remarks_ind = 0;

	strcpy(hv_applid, applid);

	userlog("hv_appl_remarks.arr : %s",hv_appl_remarks.arr);

	/* EXEC SQL 
		UPDATE APPLICATION 
		SET APPLREMARKS = :hv_appl_remarks:hv_appl_remarks_ind
		WHERE APPLID = :hv_applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 44;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update APPLICATION  set APPLREMARKS=:b0:b1 where APPLID=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1116;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_appl_remarks;
 sqlstm.sqhstl[0] = (unsigned int  )63;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&hv_appl_remarks_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hv_applid;
 sqlstm.sqhstl[1] = (unsigned int  )20;
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



	if(SQLCODE != 0)
	{
		userlog("update_appl_remarks : update failed %d %s", SQLCODE, SQLMSG);
	}

	return GMPC_GOOD;
}

int insert_txn_fee(char *appl_id, int txn_fee_count, APPL_TXN_FEE_T *txn_fee,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE] = {'\0'};
	int hv_txnserno = 0;
	char hv_fee_type[FEE_TYPE_SIZE] = "\0";
	float hv_fee_amt = 0;
	long hv_agency_rev_code = 0;

	short int hv_txnserno_ind = 0;
	short int hv_fee_type_ind = 0;
	short int hv_fee_amt_ind = 0;
	short int hv_agency_rev_code_ind = 0;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int i = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN




	strcpy(hv_applid, appl_id);
	for(i = 0; i < txn_fee_count; i++, txn_fee++)
	{
		userlog("txn_fee : txnserno %d feetype %s feeamount %f revcode %d", txn_fee->txnserno, 
			txn_fee->fee_type, txn_fee->fee_amount, txn_fee->agency_rev_code);

		hv_txnserno = txn_fee->txnserno;
		strcpy(hv_fee_type, txn_fee->fee_type);
		hv_fee_amt = txn_fee->fee_amount;
		hv_agency_rev_code = txn_fee->agency_rev_code;

		if(hv_txnserno < 0)
			hv_txnserno_ind = -1;

		if(hv_fee_type[0] == '\0')
			hv_fee_type_ind = -1;

		if(hv_fee_amt < 0)
			hv_fee_amt_ind = -1;

		if(hv_agency_rev_code < 0)
			hv_agency_rev_code_ind = -1;

		/* EXEC SQL 
			INSERT INTO APPL_TXN_FEE(APPLID, TXNSERNO, FEETYPE, FEEAMT, AGENCYREVNCODE)
			VALUES(:hv_applid, :hv_txnserno:hv_txnserno_ind, :hv_fee_type:hv_fee_type_ind, 
			:hv_fee_amt:hv_fee_amt_ind, :hv_agency_rev_code:hv_agency_rev_code_ind); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 44;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPL_TXN_FEE (APPLID,TXNSERNO,FEETYPE,FEEAMT,AG\
ENCYREVNCODE) values (:b0,:b1:b2,:b3:b4,:b5:b6,:b7:b8)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1139;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)hv_applid;
  sqlstm.sqhstl[0] = (unsigned int  )20;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&hv_txnserno;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&hv_txnserno_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)hv_fee_type;
  sqlstm.sqhstl[2] = (unsigned int  )4;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&hv_fee_type_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&hv_fee_amt;
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&hv_fee_amt_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&hv_agency_rev_code;
  sqlstm.sqhstl[4] = (unsigned int  )sizeof(long);
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&hv_agency_rev_code_ind;
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



		if((SQLCODE != 0) && (SQLCODE != -1))
		{
			userlog("insert_txn_fee : insert in APPL_TXN_FEE failed %ld %s", SQLCODE, SQLMSG);
			sprintf(excep_log.error_msg, "insert_txn_fee : insert in APPL_TXN_FEE failed %s", SQLMSG);
			return INSERT_ERROR;
		}
	}

	return GMPC_GOOD;
}

int insert_txn_summ(char *appl_id, int txn_summ_count, APPL_TXN_SUMMONS_T *txn_summ,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE] = {'\0'};
	int hv_txnserno;
	/* varchar hv_summons_no[SUMMON_NO_SIZE]; */ 
struct { unsigned short len; unsigned char arr[11]; } hv_summons_no;

	char hv_summons_date[DATE_TIME_SIZE];
	float hv_summons_amt;
	char hv_offence_cat[OFFENCE_CAT_SIZE];
	long hv_agency_rev_code;
	char hv_summon_by_agent;
	char hv_summon_type;
	/* varchar hv_summon_issued_code[SUMMON_ISSUE_CODE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_summon_issued_code;

	char hv_issued_branch_code[BRANCH_CODE_SIZE];
	/* varchar hv_summon_district[DISTRICT_SIZE]; */ 
struct { unsigned short len; unsigned char arr[17]; } hv_summon_district;

	/* varchar hv_device[DEVICE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[7]; } hv_device;

	char hv_pdrm_receipt_no[PDRM_RECEIPT_NO_SIZE];

	short int hv_txnserno_ind = 0;
	short int hv_summons_no_ind = 0;
	short int hv_summons_date_ind = 0;
	short int hv_summons_amt_ind = 0;
	short int hv_offence_cat_ind = 0;
	short int hv_agency_rev_code_ind = 0;
	short int hv_summon_by_agent_ind = 0;
	short int hv_summon_type_ind = 0;
	short int hv_summon_issued_code_ind = 0;
	short int hv_issued_branch_code_ind = 0;
	short int hv_summon_district_ind = 0;
	short int hv_device_ind = 0;
	short int hv_pdrm_receipt_no_ind = 0;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int i = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	

	strcpy(hv_applid, appl_id);
	for(i = 0; i < txn_summ_count; i++, txn_summ++)
	{

#ifdef DEBUG
		userlog("insert_txn_summ : txnserno %d, summon no %s", txn_summ->txnserno, txn_summ->summons_no);
		userlog("insert_txn_summ : summons date %s, summons amount %f", txn_summ->summons_date, txn_summ->summons_amt);
		userlog("insert_txn_summ : offence cat %s, agency rev code %ld", txn_summ->offence_cat, txn_summ->agency_rev_code);
		userlog("insert_txn_summ : summon by agent %c", txn_summ->summon_by_agent);
		userlog("insert_txn_summ : summon type %c", txn_summ->summon_type);
		userlog("insert_txn_summ : summon issue code %s", txn_summ->summon_issued_code);
		userlog("insert_txn_summ : issued branch code %s", txn_summ->issued_branch_code);
		userlog("insert_txn_summ : summon district %s", txn_summ->summon_district);
		userlog("insert_txn_summ : device %s", txn_summ->device);
		userlog("insert_txn_summ : pdrm receipt no %s", txn_summ->pdrm_receipt_no);
#endif //DEBUG

		hv_txnserno = txn_summ->txnserno;
		strcpy((char *)hv_summons_no.arr, txn_summ->summons_no);
		setlen(hv_summons_no);
		strcpy(hv_summons_date, txn_summ->summons_date);
		hv_summons_amt = txn_summ->summons_amt;
		strcpy(hv_offence_cat, txn_summ->offence_cat);
		hv_agency_rev_code = txn_summ->agency_rev_code;
		hv_summon_by_agent = txn_summ->summon_by_agent;
		hv_summon_type = txn_summ->summon_type;
		strcpy((char *)hv_summon_issued_code.arr, txn_summ->summon_issued_code);
		setlen(hv_summon_issued_code);
		strcpy(hv_issued_branch_code, txn_summ->issued_branch_code);
		strcpy((char *)hv_summon_district.arr, txn_summ->summon_district);
		setlen(hv_summon_district);
		strcpy((char *)hv_device.arr, txn_summ->device);
		setlen(hv_device);
		strcpy(hv_pdrm_receipt_no, txn_summ->pdrm_receipt_no);

		if(hv_txnserno < 0)
			hv_txnserno_ind = -1;

		if(hv_summons_no.arr[0] == '\0')
			hv_summons_no_ind = -1;

		if(hv_summons_date[0] == '\0')
			hv_summons_date_ind = -1;

		if(hv_summons_amt < 0)
			hv_summons_amt_ind = -1;

		if(hv_offence_cat[0] == '\0')
			hv_offence_cat_ind = -1;

		if(hv_agency_rev_code < 0)
			hv_agency_rev_code_ind = -1;

		if(hv_summon_by_agent == '\0')
			hv_summon_by_agent_ind = -1;

		if(hv_summon_type == '\0')
			hv_summon_type_ind = -1;

		if(hv_summon_issued_code.arr[0] == '\0')
			hv_summon_issued_code_ind = -1;

		if(hv_issued_branch_code[0] == '\0')
			hv_issued_branch_code_ind = -1;

		if(hv_summon_district.arr[0] == '\0')
			hv_summon_district_ind = -1;

		if(hv_device.arr[0] == '\0')
			hv_device_ind = -1;

		if(hv_pdrm_receipt_no[0] == '\0')
			hv_pdrm_receipt_no_ind = -1;

		/* EXEC SQL 
			INSERT INTO APPL_TXN_SUMMONS(APPLID, TXNSERNO, SUMMNO, 
				SUMMDATE, SUMMAMT, OFFENCECAT, AGENCYREVNCODE, SUMMBYAGENT,
				SUMMTYPE, SUMMISSUEDCODE, ISSUEDBRANCHCODE, SUMMDISTRICT,
				DEVICE, PDRMRECEIPTNO)
			VALUES(:hv_applid, :hv_txnserno:hv_txnserno_ind, :hv_summons_no:hv_summons_no_ind,
				TO_DATE(:hv_summons_date:hv_summons_date_ind, 'DDMMYYYY HH24MISS'), :hv_summons_amt:hv_summons_amt_ind,
				:hv_offence_cat:hv_offence_cat_ind, :hv_agency_rev_code:hv_agency_rev_code_ind,
				:hv_summon_by_agent:hv_summon_by_agent_ind, :hv_summon_type:hv_summon_type_ind,
				:hv_summon_issued_code:hv_summon_issued_code_ind, :hv_issued_branch_code:hv_issued_branch_code_ind,
				:hv_summon_district:hv_summon_district_ind, :hv_device:hv_device_ind, 
				:hv_pdrm_receipt_no:hv_pdrm_receipt_no_ind); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 44;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPL_TXN_SUMMONS (APPLID,TXNSERNO,SUMMNO,SUMMDA\
TE,SUMMAMT,OFFENCECAT,AGENCYREVNCODE,SUMMBYAGENT,SUMMTYPE,SUMMISSUEDCODE,ISSUE\
DBRANCHCODE,SUMMDISTRICT,DEVICE,PDRMRECEIPTNO) values (:b0,:b1:b2,:b3:b4,TO_DA\
TE(:b5:b6,'DDMMYYYY HH24MISS'),:b7:b8,:b9:b10,:b11:b12,:b13:b14,:b15:b16,:b17:\
b18,:b19:b20,:b21:b22,:b23:b24,:b25:b26)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1174;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)hv_applid;
  sqlstm.sqhstl[0] = (unsigned int  )20;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&hv_txnserno;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&hv_txnserno_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&hv_summons_no;
  sqlstm.sqhstl[2] = (unsigned int  )13;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&hv_summons_no_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)hv_summons_date;
  sqlstm.sqhstl[3] = (unsigned int  )16;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&hv_summons_date_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&hv_summons_amt;
  sqlstm.sqhstl[4] = (unsigned int  )sizeof(float);
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&hv_summons_amt_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)hv_offence_cat;
  sqlstm.sqhstl[5] = (unsigned int  )6;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&hv_offence_cat_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&hv_agency_rev_code;
  sqlstm.sqhstl[6] = (unsigned int  )sizeof(long);
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&hv_agency_rev_code_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&hv_summon_by_agent;
  sqlstm.sqhstl[7] = (unsigned int  )1;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&hv_summon_by_agent_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&hv_summon_type;
  sqlstm.sqhstl[8] = (unsigned int  )1;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&hv_summon_type_ind;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&hv_summon_issued_code;
  sqlstm.sqhstl[9] = (unsigned int  )11;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)&hv_summon_issued_code_ind;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)hv_issued_branch_code;
  sqlstm.sqhstl[10] = (unsigned int  )7;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)&hv_issued_branch_code_ind;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)&hv_summon_district;
  sqlstm.sqhstl[11] = (unsigned int  )19;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)&hv_summon_district_ind;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqhstv[12] = (         void  *)&hv_device;
  sqlstm.sqhstl[12] = (unsigned int  )9;
  sqlstm.sqhsts[12] = (         int  )0;
  sqlstm.sqindv[12] = (         void  *)&hv_device_ind;
  sqlstm.sqinds[12] = (         int  )0;
  sqlstm.sqharm[12] = (unsigned int  )0;
  sqlstm.sqadto[12] = (unsigned short )0;
  sqlstm.sqtdso[12] = (unsigned short )0;
  sqlstm.sqhstv[13] = (         void  *)hv_pdrm_receipt_no;
  sqlstm.sqhstl[13] = (unsigned int  )11;
  sqlstm.sqhsts[13] = (         int  )0;
  sqlstm.sqindv[13] = (         void  *)&hv_pdrm_receipt_no_ind;
  sqlstm.sqinds[13] = (         int  )0;
  sqlstm.sqharm[13] = (unsigned int  )0;
  sqlstm.sqadto[13] = (unsigned short )0;
  sqlstm.sqtdso[13] = (unsigned short )0;
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



		if((SQLCODE != 0) && (SQLCODE != -1))
		{
			userlog("insert_txn_summ : insert in APPL_TXN_SUMMONS failed %ld %s", SQLCODE, SQLMSG);
			sprintf(excep_log.error_msg, "insert_txn_fee : insert in APPL_TXN_SUMMONS failed %s", SQLMSG);
			return INSERT_ERROR;
		}
	}

	return GMPC_GOOD;
}

int update_paysrno(char *applid, int old_txn_count, OLD_TXN_T *old_txn,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE] = {'\0'};
	int hv_paysrno = 0;
	int hv_txnserno = 0;

	short int hv_paysrno_ind = 0;
	short int hv_txnserno_ind = 0;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 

	
	int i = 0;
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	
	strcpy(hv_applid, applid);
	userlog("update_paysrno : old_txn_count :%d:", old_txn_count);
	
	for(i = 0; i < old_txn_count; i++, old_txn++)
	{
		userlog("update_paysrno : applid %s txnserno %d payserno %d", hv_applid, old_txn->txnserno, old_txn->payserno);

		hv_txnserno = old_txn->txnserno;
		hv_paysrno = old_txn->payserno;

		if(hv_paysrno <= 0)
			hv_paysrno_ind = -1;
		else
			hv_paysrno_ind = 0;

		/* EXEC SQL 
			UPDATE APPL_TXN
			SET PAYMSERNO = :hv_paysrno:hv_paysrno_ind
			WHERE APPLID = :hv_applid
			AND TXNSERNO = :hv_txnserno; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 44;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPL_TXN  set PAYMSERNO=:b0:b1 where (APPLID=:b2 and\
 TXNSERNO=:b3)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1245;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&hv_paysrno;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&hv_paysrno_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_applid;
  sqlstm.sqhstl[1] = (unsigned int  )20;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&hv_txnserno;
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
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



		if(SQLCODE != 0)
		{
#ifdef DEBUG
			userlog("update_paysrno : error while updating paysrno %ld %s", SQLCODE, SQLMSG);
#endif //DEBUG
			sprintf(excep_log.error_msg, "update_paysrno : error while updating paysrno %s", SQLMSG);
			
			return UPDATE_ERROR;
		}
	}

	return GMPC_GOOD;
}

int put_request(HEADER_T *header,void * ctx)
{
	FILE *fp;
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE] = {'\0'};
	/* varchar hv_userid[USER_ID_SIZE] = {'\0'}; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_userid
 = {'\0'};

	char hv_branchcode[BRANCH_CODE_SIZE] = {'\0'};
	char hv_reqflag = UNKNOWN;
	int hv_serviceid = REV_GMPC_APPL_ID;
sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	strcpy(hv_applid, header->application_id);
	strcpy((char *)hv_userid.arr, header->user_id);
	setlen(hv_userid);
	strcpy(hv_branchcode, header->branch_code);

	/* EXEC SQL 
		INSERT INTO LEGACY_REVERSAL(LEGREQMSGID, LEGREQDATETIME, LEGREQFLAG, SERVICEID, 
			APPLID, USERID, BRANCHCODE)
		VALUES(MESSAGEID.NEXTVAL, SYSDATE, :hv_reqflag, :hv_serviceid, :hv_applid, 
			:hv_userid, :hv_branchcode); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 44;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into LEGACY_REVERSAL (LEGREQMSGID,LEGREQDATETIME,LEGR\
EQFLAG,SERVICEID,APPLID,USERID,BRANCHCODE) values (MESSAGEID.nextval ,SYSDATE,\
:b0,:b1,:b2,:b3,:b4)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1272;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_reqflag;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&hv_serviceid;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)hv_applid;
 sqlstm.sqhstl[2] = (unsigned int  )20;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&hv_userid;
 sqlstm.sqhstl[3] = (unsigned int  )11;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)hv_branchcode;
 sqlstm.sqhstl[4] = (unsigned int  )7;
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



	if(SQLCODE != 0)
	{
		userlog("put_request : error while inserting in LEGACY_REVERSAL %d %s", SQLCODE, SQLMSG);
		sprintf(excep_log.error_msg, "put_request : error while inserting in LEGACY_REVERSAL %s", SQLMSG);
		fp = fopen("rev_appl.txt", "a");
		if(fp)
		{
			fprintf(fp, "%s\n", hv_applid);
			fclose(fp);
		}
	}

	return GMPC_GOOD;
}

int close_problems(char *applid, char *userid, char termination_flag,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE] = {0};
	char hv_userid[USER_ID_SIZE] = {0};
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	strcpy(hv_applid, applid);
	strcpy(hv_userid, userid);

	if(termination_flag == 'T')
	{
		/* EXEC SQL
			UPDATE PROBL_RECORD
			SET PROBLSTAT = 'C', ACTDATETIME = SYSDATE, 
			ACTUSERID = :hv_userid, PROBLSOLVEDATE = SYSDATE
			WHERE APPLID = :hv_applid
			AND PROBLSTAT = 'O'; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 44;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update PROBL_RECORD  set PROBLSTAT='C',ACTDATETIME=SYSDATE,\
ACTUSERID=:b0,PROBLSOLVEDATE=SYSDATE where (APPLID=:b1 and PROBLSTAT='O')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1307;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)hv_userid;
  sqlstm.sqhstl[0] = (unsigned int  )9;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_applid;
  sqlstm.sqhstl[1] = (unsigned int  )20;
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



		if((SQLCODE != 0) && !(NO_DATA_FOUND))
		{
			userlog("close_problems : error while updating PROBL_RECORDS %ld %s", SQLCODE, SQLMSG);
			sprintf(excep_log.error_msg, "close_problems : error while updating PROBL_RECORDS %s", SQLMSG);

			return UPDATE_ERROR;
		}
	}

	if(termination_flag == 'C')
	{
		/* EXEC SQL
			UPDATE PROBL_RECORD
			SET PROBLSTAT = 'C'
			WHERE APPLID = :hv_applid
			AND PROBLSTAT = 'O'; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 44;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update PROBL_RECORD  set PROBLSTAT='C' where (APPLID=:b0 an\
d PROBLSTAT='O')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1330;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)hv_applid;
  sqlstm.sqhstl[0] = (unsigned int  )20;
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



		if((SQLCODE != 0) && !(NO_DATA_FOUND))
		{
			userlog("close_problems : error while updating PROBL_RECORDS %ld %s", SQLCODE, SQLMSG);
			sprintf(excep_log.error_msg, "close_problems : error while updating PROBL_RECORDS %s", SQLMSG);

			return UPDATE_ERROR;
		}
	}

	return GMPC_GOOD;
}

int call_services(HEADER_T header, char *applid,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE] = {0};
	char hv_gscno[BRANCH_CODE_SIZE] = {0};
	/* varchar hv_userid[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_userid
 = {0};

	int hv_serviceid = 0;
	int hv_card_stat_terminated = TERMINATED_AT_GSC;
	/* varchar hv_agency_chip[AGENCY_ON_CHIP_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_agency_chip
 = {0};


	short int hv_agency_chip_ind = 0;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int index = 0;
	int ret = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	
	

	strcpy(hv_applid, applid);

	/* EXEC SQL
		SELECT B.AGENCYONCHIP INTO :hv_agency_chip:hv_agency_chip_ind
		FROM APPLICATION A, CARD_STATUS B
		WHERE A.APPLID = B.APPLID
		AND A.KPTNO = B.KPTNO
		AND APPLSTAT = 'T'
		AND CARDSTAT = :hv_card_stat_terminated
		AND A.APPLID = :hv_applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 44;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select B.AGENCYONCHIP into :b0:b1  from APPLICATION A ,CARD_\
STATUS B where ((((A.APPLID=B.APPLID and A.KPTNO=B.KPTNO) and APPLSTAT='T') an\
d CARDSTAT=:b2) and A.APPLID=:b3)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1349;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_agency_chip;
 sqlstm.sqhstl[0] = (unsigned int  )11;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&hv_agency_chip_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&hv_card_stat_terminated;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)hv_applid;
 sqlstm.sqhstl[2] = (unsigned int  )20;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
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



	if(SQLCODE != 0)
	{
		userlog("call_services : error while selecting AGENCYONCHIP from CARD_STATUS %ld %s", SQLCODE, SQLMSG);
		sprintf(excep_log.error_msg, "call_services : error while selecting AGENCYONCHIP from CARD_STATUS %s", SQLMSG);

		return SELECT_ERROR;
	}

	if(hv_agency_chip_ind == -1)
		memset(hv_agency_chip.arr, 0, AGENCY_ON_CHIP_SIZE);

	strcpy((char *)hv_userid.arr, header.user_id);
	setlen(hv_userid);
	strcpy(hv_gscno, header.branch_code);

	userlog("before hv_agency_chip"); //samsuri add

	index = JPN_ID - '0';
	if(hv_agency_chip.arr[JPN_ID - '0'] == '1')
	{
		userlog("before call_jpn_update"); //samsuri add
		ret = call_jpn_update(header,ctx);
		if(ret != 0)
		{
			userlog("before INSERT INTO IJPN_LEGACY_REQUEST"); //samsuri add
		/* insert in LEGACY_REQUEST  */
			/* EXEC SQL 
				INSERT INTO IJPN_LEGACY_REQUEST( LEGREQMSGID, APPLID, BRANCHCODE, USERID, 
					SERVICEID, LEGREQSTAT, LEGREQDATETIME, CHECKAGENCY, LEGREQFLAG )
				VALUES ( MESSAGEID.NEXTVAL, :hv_applid, :hv_gscno, :hv_userid,
					29, -1, SYSDATE, '1', 'X' ); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 44;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into IJPN_LEGACY_REQUEST (LEGREQMSGID,APPLID,BRANCH\
CODE,USERID,SERVICEID,LEGREQSTAT,LEGREQDATETIME,CHECKAGENCY,LEGREQFLAG) values\
 (MESSAGEID.nextval ,:b0,:b1,:b2,29,(-1),SYSDATE,'1','X')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1376;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)hv_applid;
   sqlstm.sqhstl[0] = (unsigned int  )20;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)hv_gscno;
   sqlstm.sqhstl[1] = (unsigned int  )7;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&hv_userid;
   sqlstm.sqhstl[2] = (unsigned int  )11;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
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



			if(SQLCODE != 0)
			{
				userlog("call_services : error while inserting in IJPN_LEGACY_REQUEST %ld %s", SQLCODE, SQLMSG);
				sprintf(excep_log.error_msg, "call_services : error while inserting in LEGACY_REQUEST %s", SQLMSG);

				return INSERT_ERROR;
			}
			else
			{
				/* EXEC SQL COMMIT; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 44;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1403;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


			}
		}
	}

	index = JPJ_ID - '0';
	if(hv_agency_chip.arr[JPJ_ID - '0'] == '1')
	{
		ret = call_jpj_update(header,ctx);
		if(ret != 0)
		{
			// insert in LEGACY_REQUEST 
			/* EXEC SQL 
				INSERT INTO IJPN_LEGACY_REQUEST( LEGREQMSGID, APPLID, BRANCHCODE, USERID, 
					SERVICEID, LEGREQSTAT, LEGREQDATETIME, CHECKAGENCY, LEGREQFLAG )
				VALUES ( MESSAGEID.NEXTVAL, :hv_applid, :hv_gscno, :hv_userid,
					30, -1, SYSDATE, '1', 'X' ); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 44;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into IJPN_LEGACY_REQUEST (LEGREQMSGID,APPLID,BRANCH\
CODE,USERID,SERVICEID,LEGREQSTAT,LEGREQDATETIME,CHECKAGENCY,LEGREQFLAG) values\
 (MESSAGEID.nextval ,:b0,:b1,:b2,30,(-1),SYSDATE,'1','X')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1418;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)hv_applid;
   sqlstm.sqhstl[0] = (unsigned int  )20;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)hv_gscno;
   sqlstm.sqhstl[1] = (unsigned int  )7;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&hv_userid;
   sqlstm.sqhstl[2] = (unsigned int  )11;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
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



			if(SQLCODE != 0)
			{
				userlog("call_services : error while inserting in IJPN_LEGACY_REQUEST %ld %s", SQLCODE, SQLMSG);
				sprintf(excep_log.error_msg, "call_services : error while inserting in LEGACY_REQUEST %s", SQLMSG);

				return INSERT_ERROR;
			}
			else
			{
				/* EXEC SQL COMMIT; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 44;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1445;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


			}
		}
	}
	
	userlog("return GMPC_GOOD"); //samsuri add
	return GMPC_GOOD;
}

//int delete_card_stat(char *applid,void * ctx)
int delete_card_stat(HEADER_T hdr,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE] = {0};
	int hv_exist = 0;
	char hv_txncode[TRANSACTION_CODE_SIZE] = {0};
	int hv_cardstat = 0;
	short int hv_cardstat_ind = 0;
	int hv_cardversion = 0;
	short int hv_cardversion_ind = 0;
	char hv_kptno[KPT_SIZE] = {0};
	short int hv_kptno_ind = 0;

	char user_id[USER_ID_SIZE]={0};
	char ws_id[WS_ID_SIZE]={0};

	int   hist_stat_cnt=0;
	short hist_stat_cnt_ind = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(hv_applid, hdr.application_id);
	strcpy(user_id,hdr.user_id);
	strcpy(ws_id,hdr.workstation_id);

	userlog("delete_card_stat : Delete CARD_STATUS record for:%s",hv_applid); // Added by samsuri on 23 mar 2022 SKP005/PM/2021

	/* EXEC SQL
		DELETE FROM CARD_STATUS 
		WHERE APPLID = :hv_applid
			  AND CARDSTAT IS NULL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 44;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "delete  from CARD_STATUS  where (APPLID=:b0 and CARDSTAT is \
null )";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1460;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)hv_applid;
 sqlstm.sqhstl[0] = (unsigned int  )20;
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



	//WHERE KPTNO = KPTNO

	if((SQLCODE != 0) && !(NO_DATA_FOUND))
	{
		userlog("delete_card_stat : error while deleting from CARD_STATUS %ld %s", SQLCODE, SQLMSG);
		sprintf(excep_log.error_msg, "delete_card_stat : error while deleting from CARD_STATUS %s", SQLMSG);

		return DELETE_ERROR;
	}

	/* Following thing has to be done only if the transaction was Replacement due to loss */
	itoa(TXN_REPL_LOSS, hv_txncode, 10);

	userlog("delete_card_stat : Check allowed Txncode for reverse"); // Added by samsuri on 23 mar 2022 SKP005/PM/2021

	/* EXEC SQL
		SELECT COUNT(*) INTO :hv_exist
		FROM APPL_TXN
		WHERE APPLID = :hv_applid
		AND TXNCODE IN (SELECT TXNCODE FROM TXN_CODE WHERE LEGTXNCODE='4050'); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 44;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN where (APPLID=:b1 a\
nd TXNCODE in (select TXNCODE  from TXN_CODE where LEGTXNCODE='4050'))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1479;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_exist;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hv_applid;
 sqlstm.sqhstl[1] = (unsigned int  )20;
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

 // Added by samsuri on 01 mar 2022 SKP005/PM/2021
		//AND TXNCODE IN ('403','404','420','701','705','868','999'); // Added by samsuri on 01 mar 2022 SKP005/PM/2021
		//AND TXNCODE IN ('403','420'); // Added this code on 08/05/2008 - remarked by samsuri on 01 mar 2022
		//AND TXNCODE = :hv_txncode;

	if(SQLCODE != 0)
	{
		userlog("delete_card_stat : error while selecting from APPL_TXN %ld %s", SQLCODE, SQLMSG);
		sprintf(excep_log.error_msg, "delete_card_stat : error while selecting from APPL_TXN %s", SQLMSG);

		return SELECT_ERROR;
	}

	if(hv_exist > 0)
	{
		/* EXEC SQL
			SELECT KPTNO INTO :hv_kptno:hv_kptno_ind 
			FROM APPLICATION
			WHERE APPLID = :hv_applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 44;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select KPTNO into :b0:b1  from APPLICATION where APPLID=:b2";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1502;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)hv_kptno;
  sqlstm.sqhstl[0] = (unsigned int  )13;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&hv_kptno_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_applid;
  sqlstm.sqhstl[1] = (unsigned int  )20;
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



		if(SQLCODE != 0)
		{
			userlog("delete_card_stat : error while selecting kptno from APPLICATION %ld %s", SQLCODE, SQLMSG);
			sprintf(excep_log.error_msg, "delete_card_stat : error while selecting kptno from APPLICATION %s", SQLMSG);

			return SELECT_ERROR;
		}

		/* EXEC SQL
			SELECT CARDSTAT, CARDVERSIONNO
			INTO :hv_cardstat:hv_cardstat_ind, :hv_cardversion:hv_cardversion_ind
			FROM CARD_STATUS A
			WHERE KPTNO = :hv_kptno
				AND CARDVERSIONNO = ( SELECT MAX(CARDVERSIONNO) 
										FROM CARD_STATUS 
										WHERE KPTNO = A.KPTNO
										AND CARDSTAT IN (17, 20, 14 )); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 44;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select CARDSTAT ,CARDVERSIONNO into :b0:b1,:b2:b3  from CAR\
D_STATUS A where (KPTNO=:b4 and CARDVERSIONNO=(select max(CARDVERSIONNO)  from\
 CARD_STATUS where (KPTNO=A.KPTNO and CARDSTAT in (17,20,14))))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1525;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&hv_cardstat;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&hv_cardstat_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&hv_cardversion;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&hv_cardversion_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)hv_kptno;
  sqlstm.sqhstl[2] = (unsigned int  )13;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
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

 // Added this code on 08/05/2008
											//AND CARDSTAT = 17 );
			//	FOR UPDATE;

		if(NO_DATA_FOUND)
		{
			userlog("delete_card_stat : no record found in CARD_STATUS with cardstatus as 17,20,14");
			return GMPC_GOOD;
		}

		if((SQLCODE != 0) && !(NO_DATA_FOUND))
		{
			userlog("delete_card_stat : error while selecting maximum cardversion from CARD_STATUS %ld %s", SQLCODE, SQLMSG);
			sprintf(excep_log.error_msg, "delete_card_stat : error while selecting maximum cardversion from CARD_STATUS %s", SQLMSG);

			return SELECT_ERROR;
		}

		/* EXEC SQL
			UPDATE CARD_STATUS 
			SET CARDSTAT = 16
			WHERE KPTNO = :hv_kptno
			AND CARDVERSIONNO = :hv_cardversion; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 44;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update CARD_STATUS  set CARDSTAT=16 where (KPTNO=:b0 and CA\
RDVERSIONNO=:b1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1552;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)hv_kptno;
  sqlstm.sqhstl[0] = (unsigned int  )13;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&hv_cardversion;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
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



		if((SQLCODE != 0) && !(NO_DATA_FOUND))
		{
			userlog("delete_card_stat : error while updating CARD_STATUS %ld %s", SQLCODE, SQLMSG);
			sprintf(excep_log.error_msg, "delete_card_stat : error while updating CARD_STATUS %s", SQLMSG);

			return UPDATE_ERROR;
		}

		userlog("delete_card_stat : Reverse cardstat finish"); // Added by samsuri on 23 mar 2022 SKP005/PM/2021

		/* EXEC SQL
			DELETE FROM CARD_BLACKLIST 
			WHERE KPTNO = :hv_kptno
			AND CARDVERSIONNO = :hv_cardversion; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 44;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "delete  from CARD_BLACKLIST  where (KPTNO=:b0 and CARDVERSI\
ONNO=:b1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1575;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)hv_kptno;
  sqlstm.sqhstl[0] = (unsigned int  )13;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&hv_cardversion;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
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



		if((SQLCODE != 0) && !(NO_DATA_FOUND))
		{
			userlog("delete_card_stat : error while deleting from CARD_BLACKLIST %ld %s", SQLCODE, SQLMSG);
			sprintf(excep_log.error_msg, "delete_card_stat : error while deleting from CARD_BLACKLIST %s", SQLMSG);

			return DELETE_ERROR;
		}


		/* EXEC SQL SELECT COUNT(*) INTO :hist_stat_cnt:hist_stat_cnt_ind
		FROM APPL_HISTORY
		WHERE APPLID = :hv_applid //KPTNO = :hv_kptno
		AND APPLSTAT = 'D'; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 44;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0:b1  from APPL_HISTORY where (APPL\
ID=:b2 and APPLSTAT='D')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1598;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&hist_stat_cnt;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&hist_stat_cnt_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_applid;
  sqlstm.sqhstl[1] = (unsigned int  )20;
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



		if(hist_stat_cnt > 0)
		{

		/* EXEC SQL DELETE FROM CLMS_CARD_STAT_UPD WHERE (KPTNO  = :hv_kptno AND  
			CARDVERSIONNO = :hv_cardversion AND CARDSTATUS = '29'); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 44;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "delete  from CLMS_CARD_STAT_UPD  where ((KPTNO=:b0 and CARD\
VERSIONNO=:b1) and CARDSTATUS='29')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1621;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)hv_kptno;
  sqlstm.sqhstl[0] = (unsigned int  )13;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&hv_cardversion;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
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



		/* EXEC SQL INSERT INTO CLMS_CARD_STAT_UPD (
			KPTNO, CARDVERSIONNO, CARDSTATUS,UPDFLAG,
			TIMESTAMP,USERID,WSID)
			VALUES (:hv_kptno,:hv_cardversion,'29','N',
			to_date(to_char(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS'),
			:user_id,:ws_id); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 44;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into CLMS_CARD_STAT_UPD (KPTNO,CARDVERSIONNO,CARDSTA\
TUS,UPDFLAG, timestamp ,USERID,WSID) values (:b0,:b1,'29','N',to_date(to_char(\
SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS'),:b2,:b3)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1644;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)hv_kptno;
  sqlstm.sqhstl[0] = (unsigned int  )13;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&hv_cardversion;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)user_id;
  sqlstm.sqhstl[2] = (unsigned int  )9;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)ws_id;
  sqlstm.sqhstl[3] = (unsigned int  )16;
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


		}


	}


	return GMPC_GOOD;
}

int update_card_stat(HEADER_T header,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE] = {0};
	char hv_userid[USER_ID_SIZE] = {0};
	char hv_workstationid[WS_ID_SIZE] = {0};
	int hv_card_stat = TERMINATED_AT_GSC;

	char kpt_no[KPT_SIZE]  = {0};
	int version_no = 0;

	short int hv_userid_ind = 0;
	short int hv_workstationid_ind = 0;
	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(hv_applid, header.application_id);
	strcpy(hv_userid, header.user_id);
	strcpy(hv_workstationid, header.workstation_id);

#ifdef DEBUG
	userlog("update_card_stat : before inserting in CARD_HISTORY");
#endif //DEBUG

	/* EXEC SQL
		INSERT INTO CARD_HISTORY ( KPTNO, CARDVERSIONNO, CARDSTAT, 
			CARDPERSONALDATE, USERID, WSID, 
			TIMESTAMP, BRANCHCODE, AGENCYONCHIP )
		SELECT KPTNO, CARDVERSIONNO, CARDSTAT, CARDPERSONALDATE, 
				NVL(USERID, :hv_userid), NVL(WSID, :hv_workstationid), 
				TIMESTAMP, BRANCHCODE, AGENCYONCHIP 
		FROM CARD_STATUS 
		WHERE APPLID = :hv_applid
				AND KPTNO = KPTNO 
				AND CARDVERSIONNO = ( SELECT MAX(CARDVERSIONNO)
										FROM CARD_STATUS
										WHERE APPLID = :hv_applid
										AND KPTNO = KPTNO
									); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 44;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into CARD_HISTORY (KPTNO,CARDVERSIONNO,CARDSTAT,CARDP\
ERSONALDATE,USERID,WSID, timestamp ,BRANCHCODE,AGENCYONCHIP)select KPTNO ,CARD\
VERSIONNO ,CARDSTAT ,CARDPERSONALDATE ,NVL(USERID,:b0) ,NVL(WSID,:b1) , timest\
amp  ,BRANCHCODE ,AGENCYONCHIP  from CARD_STATUS where ((APPLID=:b2 and KPTNO=\
KPTNO) and CARDVERSIONNO=(select max(CARDVERSIONNO)  from CARD_STATUS where (A\
PPLID=:b2 and KPTNO=KPTNO)))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1675;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)hv_userid;
 sqlstm.sqhstl[0] = (unsigned int  )9;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hv_workstationid;
 sqlstm.sqhstl[1] = (unsigned int  )16;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)hv_applid;
 sqlstm.sqhstl[2] = (unsigned int  )20;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)hv_applid;
 sqlstm.sqhstl[3] = (unsigned int  )20;
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



	if((SQLCODE != 0) && !(NO_DATA_FOUND))
	{
		userlog("update_card_stat : error while inserting into CARD_HISTORY %ld %s", SQLCODE, SQLMSG);
		sprintf(excep_log.error_msg, "update_card_stat : error while inserting into CARD_HISTORY %s", SQLMSG);

		return INSERT_ERROR;
	}

#ifdef DEBUG
	userlog("update_card_stat : before updating CARD_STATUS");
#endif //DEBUG

   /* Code added for IJPN */
	/* EXEC SQL SELECT KPTNO, CARDVERSIONNO into :kpt_no,:version_no 
			FROM CARD_STATUS 
		WHERE APPLID = :hv_applid
				AND KPTNO = KPTNO 
				AND CARDVERSIONNO = ( SELECT MAX(CARDVERSIONNO)
										FROM CARD_STATUS
										WHERE APPLID = :hv_applid
										AND KPTNO = KPTNO
									); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 44;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select KPTNO ,CARDVERSIONNO into :b0,:b1  from CARD_STATUS w\
here ((APPLID=:b2 and KPTNO=KPTNO) and CARDVERSIONNO=(select max(CARDVERSIONNO\
)  from CARD_STATUS where (APPLID=:b2 and KPTNO=KPTNO)))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1706;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)kpt_no;
 sqlstm.sqhstl[0] = (unsigned int  )13;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&version_no;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)hv_applid;
 sqlstm.sqhstl[2] = (unsigned int  )20;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)hv_applid;
 sqlstm.sqhstl[3] = (unsigned int  )20;
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


		/* End IJPN */


	/* EXEC SQL
		UPDATE CARD_STATUS A
		SET CARDSTAT = :hv_card_stat,
		TIMESTAMP = SYSDATE, USERID = :hv_userid, 
		WSID = :hv_workstationid
		WHERE KPTNO = KPTNO
		AND APPLID = :hv_applid
		AND CARDVERSIONNO = ( SELECT MAX(CARDVERSIONNO)
							FROM CARD_STATUS
							WHERE APPLID = A.APPLID
							AND KPTNO = A.KPTNO ); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 44;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update CARD_STATUS A  set CARDSTAT=:b0, timestamp =SYSDATE,U\
SERID=:b1,WSID=:b2 where ((KPTNO=KPTNO and APPLID=:b3) and CARDVERSIONNO=(sele\
ct max(CARDVERSIONNO)  from CARD_STATUS where (APPLID=A.APPLID and KPTNO=A.KPT\
NO)))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1737;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_card_stat;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hv_userid;
 sqlstm.sqhstl[1] = (unsigned int  )9;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)hv_workstationid;
 sqlstm.sqhstl[2] = (unsigned int  )16;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)hv_applid;
 sqlstm.sqhstl[3] = (unsigned int  )20;
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



	if((SQLCODE != 0) && !(NO_DATA_FOUND))
	{
		userlog("update_card_stat : error while updating CARD_STATUS %ld %s", SQLCODE, SQLMSG);
		sprintf(excep_log.error_msg, "update_card_stat : error while updating CARD_STATUS %s", SQLMSG);

		return UPDATE_ERROR;
	}

	// Added by samsuri on 23 mar 2022 SKP005/PM/2021 - start
	/* EXEC SQL
		UPDATE CARD_STATUS A
		SET CARDSTAT = 16
		WHERE KPTNO = :kpt_no
		AND CARDVERSIONNO = ( SELECT MAX(CARDVERSIONNO)
							FROM CARD_STATUS
							WHERE CARDSTAT = 20
							AND KPTNO = A.KPTNO ); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 44;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update CARD_STATUS A  set CARDSTAT=16 where (KPTNO=:b0 and C\
ARDVERSIONNO=(select max(CARDVERSIONNO)  from CARD_STATUS where (CARDSTAT=20 a\
nd KPTNO=A.KPTNO)))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1768;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)kpt_no;
 sqlstm.sqhstl[0] = (unsigned int  )13;
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



	if((SQLCODE != 0) && !(NO_DATA_FOUND))
	{
		userlog("delete_card_stat : error while updating CARD_STATUS %ld %s", SQLCODE, SQLMSG);
		sprintf(excep_log.error_msg, "delete_card_stat : error while updating CARD_STATUS %s", SQLMSG);

		return UPDATE_ERROR;
	}
	userlog("update_card_stat : Reverse cardstat finish for kptno: %s",kpt_no); 
	// Added by samsuri on 23 mar 2022 SKP005/PM/2021 - finish

	/* EXEC SQL DELETE FROM CLMS_CARD_STAT_UPD WHERE (KPTNO  = :kpt_no AND  CARDVERSIONNO = :version_no AND CARDSTATUS = :hv_card_stat); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 44;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "delete  from CLMS_CARD_STAT_UPD  where ((KPTNO=:b0 and CARDV\
ERSIONNO=:b1) and CARDSTATUS=:b2)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1787;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)kpt_no;
 sqlstm.sqhstl[0] = (unsigned int  )13;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&version_no;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&hv_card_stat;
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
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



	/* EXEC SQL INSERT INTO CLMS_CARD_STAT_UPD (KPTNO, CARDVERSIONNO, CARDSTATUS,UPDFLAG,
							TIMESTAMP,USERID,WSID )
							VALUES (:kpt_no,:version_no,:hv_card_stat,'N',to_date(to_char(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS'),
							:hv_userid:hv_userid_ind,:hv_workstationid:hv_workstationid_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 44;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into CLMS_CARD_STAT_UPD (KPTNO,CARDVERSIONNO,CARDSTAT\
US,UPDFLAG, timestamp ,USERID,WSID) values (:b0,:b1,:b2,'N',to_date(to_char(SY\
SDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS'),:b3:b4,:b5:b6)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1814;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)kpt_no;
 sqlstm.sqhstl[0] = (unsigned int  )13;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&version_no;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&hv_card_stat;
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)hv_userid;
 sqlstm.sqhstl[3] = (unsigned int  )9;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&hv_userid_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)hv_workstationid;
 sqlstm.sqhstl[4] = (unsigned int  )16;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&hv_workstationid_ind;
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




#ifdef DEBUG
	userlog("update_card_stat : after updation of CARD_STATUS");
#endif //DEBUG

	return GMPC_GOOD;
}
