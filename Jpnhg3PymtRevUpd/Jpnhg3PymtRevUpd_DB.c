
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
           char  filnam[25];
};
static const struct sqlcxp sqlfpn =
{
    24,
    ".\\Jpnhg3PymtRevUpd_DB.pc"
};


static unsigned int sqlctx = 1088623051;


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
            void  *sqhstv[25];
   unsigned int   sqhstl[25];
            int   sqhsts[25];
            void  *sqindv[25];
            int   sqinds[25];
   unsigned int   sqharm[25];
   unsigned int   *sqharc[25];
   unsigned short  sqadto[25];
   unsigned short  sqtdso[25];
} sqlstm = {12,25};

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
5,0,0,1,145,0,5,461,0,0,4,4,0,1,0,1,1,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
36,0,0,2,168,0,5,482,0,0,4,4,0,1,0,1,1,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
67,0,0,3,47,0,2,496,0,0,1,1,0,1,0,1,9,0,0,
86,0,0,4,118,0,3,504,0,0,6,6,0,1,0,1,9,0,0,1,3,0,0,1,9,0,0,1,4,0,0,1,3,0,0,1,9,
0,0,
125,0,0,5,66,0,2,545,0,0,2,2,0,1,0,1,9,0,0,1,3,0,0,
148,0,0,6,494,0,3,558,0,0,25,25,0,1,0,1,9,0,0,1,9,0,0,1,3,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,3,0,0,1,9,0,0,1,4,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,1,4,0,
0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,
263,0,0,7,70,0,5,632,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
286,0,0,8,82,0,5,646,0,0,1,1,0,1,0,1,9,0,0,
305,0,0,9,66,0,2,671,0,0,1,1,0,1,0,1,9,0,0,
324,0,0,10,94,0,2,698,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
347,0,0,11,115,0,3,705,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
370,0,0,12,99,0,2,716,0,0,1,1,0,1,0,1,9,0,0,
389,0,0,13,115,0,3,723,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
412,0,0,14,67,0,4,804,0,0,2,1,0,1,0,2,3,0,0,1,9,0,0,
435,0,0,15,203,0,4,831,0,0,8,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,2,3,0,0,1,9,0,0,
482,0,0,16,278,0,3,874,0,0,16,16,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,1,4,0,0,
1,3,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,3,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,
561,0,0,17,98,0,3,902,0,0,4,4,0,1,0,1,9,0,0,1,1,0,0,1,9,0,0,1,9,0,0,
592,0,0,18,102,0,3,926,0,0,4,4,0,1,0,1,9,0,0,1,1,0,0,1,4,0,0,1,3,0,0,
623,0,0,19,141,0,3,954,0,0,5,5,0,1,0,1,9,0,0,1,1,0,0,1,4,0,0,1,4,0,0,1,3,0,0,
658,0,0,20,141,0,3,982,0,0,5,5,0,1,0,1,9,0,0,1,1,0,0,1,4,0,0,1,4,0,0,1,3,0,0,
693,0,0,21,175,0,3,1012,0,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,
736,0,0,22,78,0,4,1095,0,0,3,1,0,1,0,2,1,0,0,2,9,0,0,1,9,0,0,
763,0,0,23,64,0,4,1124,0,0,2,1,0,1,0,2,1,0,0,1,9,0,0,
786,0,0,24,113,0,3,1151,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
809,0,0,25,47,0,2,1179,0,0,1,1,0,1,0,1,9,0,0,
828,0,0,26,113,0,3,1201,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
851,0,0,27,67,0,4,1248,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
874,0,0,28,88,0,4,1285,0,0,2,1,0,1,0,2,3,0,0,1,9,0,0,
897,0,0,29,76,0,4,1320,0,0,2,1,0,1,0,2,1,0,0,1,9,0,0,
920,0,0,30,85,0,4,1343,0,0,3,1,0,1,0,2,4,0,0,2,3,0,0,1,9,0,0,
947,0,0,31,106,0,3,1370,0,0,4,4,0,1,0,1,9,0,0,1,1,0,0,1,4,0,0,1,3,0,0,
978,0,0,32,98,0,3,1394,0,0,4,4,0,1,0,1,9,0,0,1,1,0,0,1,9,0,0,1,9,0,0,
1009,0,0,33,117,0,5,1419,0,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
1036,0,0,34,175,0,3,1445,0,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,
1079,0,0,35,82,0,5,1472,0,0,1,1,0,1,0,1,9,0,0,
1098,0,0,36,78,0,4,1498,0,0,3,1,0,1,0,2,1,0,0,2,9,0,0,1,9,0,0,
1125,0,0,37,77,0,4,1527,0,0,3,1,0,1,0,2,1,0,0,2,1,0,0,1,9,0,0,
1152,0,0,38,113,0,3,1551,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
1175,0,0,39,76,0,5,1582,0,0,1,1,0,1,0,1,9,0,0,
1194,0,0,40,76,0,5,1610,0,0,1,1,0,1,0,1,9,0,0,
};


/* $Header$ */
/***************************************************************/
/* Filename		:jpnhg3PymtRevUpd_DB.pc		                   */
/* Author		:Srinivasa Reddy   					           */
/* Description	:This file has all database functions          */
/*				 required for the service JPNHG3_PYMT_REV_UPD  */
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

#include "jpnhg3_pymt_rev_upd_io.h"
#include "jpnhg3_pymt_rev_upd.h"

APPL_EXCEP_LOG_T excep_log = { {""},{""},{""},{""},{""},{""}, 0,{""}} ;
PROG_ACCESS_LOG_T prog_log = { {""},{""},{""},{""},{""},{""},{""},{""} };
TXN_LOG_T tran_log;
READ_REG_GENERIC_T gen_reg;


char sqlmsg[SQL_MSG_SIZE] = {"\0"};


int Jpnhg3_Pymt_Rev_Upd(JPNHG3_PYMT_REV_UPD_REQ_T *pReq, 
					JPNHG3_PYMT_REV_UPD_RESP_T **pResp, long *pRespSize,void * ctx)
{
	
	JPNHG3_PYMT_REV_UPD_REQ_T *req;
	JPNHG3_PYMT_REV_UPD_RESP_T *resp;//,*new_resp,*orig_resp;
	
	
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
	req = (JPNHG3_PYMT_REV_UPD_REQ_T *) pReq;


	/* Program access log variable */
	itoa(JPNHG3_PYMT_REV_UPD_ID, program_id, 10);
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

	strcpy(prog_log.remarks,"JPNHG3_PYMT_REV_UPD: Initiated");
	
	resp_len = sizeof(JPNHG3_PYMT_REV_UPD_RESP_T);

	/* Allocate response buffer	*/
	if(NULL == (resp = (JPNHG3_PYMT_REV_UPD_RESP_T *) malloc(resp_len)))
	{
		strcpy(prog_log.remarks,"JPNHG3_PYMT_REV_UPD_RESP : Memory allocation for response buffer failed");
		sprintf(excep_log.error_msg,"JPNHG3_PYMT_REV_UPD_RESP : ");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);
		return RESP_BUF_ERR;
	}

	memset(resp, '\0', resp_len);

	
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->header.application_id:%s:",req->header.application_id);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->header.branch_code:%s:", req->header.branch_code);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->header.service_id:%d:", req->header.service_id);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->header.user_id:%s:", req->header.user_id);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->header.workstation_id:%s:", req->header.workstation_id);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->applid:%s:",req->applid);			
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->oldapplid:%s:",req->oldapplid);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->kptno:%s:",req->kptno);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->origamt:%.2f:",req->origamt);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->paidamt:%.2f:",req->paidamt);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->txncode:%s:",req->txncode);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->legtxncode:%s:",req->legtxncode);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->txnserno:%c:",req->txnserno);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->agencyrevncode:%d:",req->agencyrevncode);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->supvuid:%s:",req->supvuid);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->supvremarks:%s:",req->supvremarks);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->problreasoncode:%s:",req->problreasoncode);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->formname:%s:",req->formname);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->userid:%s:",req->userid);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->wsid:%s:",req->wsid);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->timestamp:%s:",req->timestamp);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->indicator1:%s:",req->indicator1);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->indicator2:%s:",req->indicator2);

	//added by samsuri on 20 sept 2022 - USK COMPUND FEE
	userlog("\n-------------------USK RECEIVED DATA----------------");
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->uskApplid:%s:",req->uskApplid);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->uskOldApplid:%s:",req->uskOldApplid);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->txnSerNo: %d", req->txnSerNo);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->idType:%s:",req->idType);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->idNo: %s", req->idNo);	
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->gmpcName: %s", req->gmpcName);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->cardLostCount: %d", req->cardLostCount);	
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->lostReasonCode: %s", req->lostReasonCode);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->CF: %.2f", req->CF);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->appealDate: %s", req->appealDate);	
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->appealBranch: %s", req->appealBranch);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->appealUserID: %s", req->appealUserID);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->appealRemark: %s", req->appealRemark);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->appealPercent: %.2f", req->appealPercent);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->amtToPay: %.2f", req->amtToPay);	
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->appealStatus: %s", req->appealStatus);	
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->sscBranch: %s", req->sscBranch);	
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->sscUserID: %s", req->sscUserID);	
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->sscWsID: %s", req->sscWsID);	
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->sscDateTime: %s", req->sscDateTime);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->sscRemark: %s", req->sscRemark);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->payReceipt: %s", req->payReceipt);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->payBranch: %s", req->payBranch);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->payUserID: %s", req->payUserID);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->payDateTime: %s", req->payDateTime);

	userlog("\n-------------------OUTSTAND TXN FEE RECEIVED DATA----------------");
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->OutStandTxnSerNo: %d", req->OutStandTxnSerNo);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->OutStandFeeType: %s", req->OutStandFeeType);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->OutStandFeeAmt: %.2f", req->OutStandFeeAmt);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->OutStandAgencyRevnCode: %d", req->OutStandAgencyRevnCode);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->OutStandSendGSC: %s", req->OutStandSendGSC);

	userlog("\n-------------------PROBL RECORD RECEIVED DATA----------------");
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->prob_stat: %c", req->prob_stat);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->gUser1: %s", req->gUser1);		
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->gUser1TimeStamp: %s", req->gUser1TimeStamp);
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->gUser2: %s", req->gUser2);		
	userlog("JPNHG3_PYMT_REV_UPD L1 : req->gUser2TimeStamp: %s", req->gUser2TimeStamp);

	resp->header = req->header;
			
	if((ret_val = check_header(req->header,ctx)) != SUCCESS)
	{
	#ifdef DEBUG
			userlog("JPNHG3_PYMT_REV_UPD L1 : check header failed");
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
			userlog("JPNHG3_PYMT_REV_UPD L1 :check header Successful");
	#endif

	

	#ifdef DEBUG
		userlog("JPNHG3_PYMT_REV_UPD L1 :");		
	#endif
	
	
	#ifdef DEBUG
		userlog("JPNHG3_PYMT_REV_UPD L1 :Before the enq_processing function");
	#endif

		
		if(SUCCESS != gscbbegin_trans(ctx))
		{
			userlog("JPNHG3_PYMT_REV_UPD L1 : Begin transaction failed!!");
		
			*pRespSize = resp_len;			
			*pResp = resp;
			return END_TRAN_ERROR;
		}
		
		/* transaction processing function */		
		ret_val = transaction_processing(req,resp,ctx);
		if(ret_val != SUCCESS)
		{
		#ifdef DEBUG
			userlog("JPNHG3_PYMT_REV_UPD L1 :enq_processing function failed");
		#endif
		strcpy(prog_log.remarks,"JPNHG3_PYMT_REV_UPD : enq_processing function failed");
		strcpy(excep_log.error_msg,"JPNHG3_PYMT_REV_UPD : enq_processing function failed");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		
		*pRespSize = resp_len;		
			*pResp = resp;
		return ret_val;
		}
		
		if(ret_val == SUCCESS)
		{
			if(SUCCESS != gscbcommit_trans(ctx))
			{
				userlog("JPNHG3_PYMT_REV_UPD L1 : Commit transaction failed!!");
			
				*pRespSize = resp_len;			
				*pResp = resp;
				return END_TRAN_ERROR;
			}
		}

	#ifdef DEBUG
		userlog(" ");
		userlog("JPNHG3_PYMT_REV_UPD L1 :Service Completed");
		userlog(" ");
	#endif
	
		*pRespSize = resp_len;	
		*pResp = resp;
		 return GMPC_GOOD;
}




/*************************************************************************/
/* Function Name:enq_processing								             */
/* Description  :Updates few tables related to fee based on applid       */	
/* Input        :JPNHG3_PYMT_REV_UPD_REQ_T structure		             */   
/* Return Values:SUCCESS, SELECT_ERROR or UPDATE_ERROR       	         */
/*************************************************************************/
int transaction_processing(JPNHG3_PYMT_REV_UPD_REQ_T *req, JPNHG3_PYMT_REV_UPD_RESP_T *resp, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	/* varchar applid[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } applid
 = {0};

	/* varchar oldapplid[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } oldapplid
 = {0};

	/* varchar oapplid[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } oapplid
 = {0};

	/* varchar kptno[KPT_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[13]; } kptno
 = {0};

	/* varchar txncode[3+1] = {0}; */ 
struct { unsigned short len; unsigned char arr[4]; } txncode
 = {0};

	float   origamt=0;
	float   paidamt=0;
	/* varchar legtxncode[4+1] = {0}; */ 
struct { unsigned short len; unsigned char arr[5]; } legtxncode
 = {0};

	char    txnserno = {0};
	char    otxnserno = {0};
	//varchar arcode[AG_REV_CODE_SIZE] = {0};
	int     arcode = 0;
	/* varchar supvuid[8+1] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } supvuid
 = {0};

	/* varchar supvremarks[150+1] = {0}; */ 
struct { unsigned short len; unsigned char arr[151]; } supvremarks
 = {0};

	/* varchar problreasoncode[5+1] = {0}; */ 
struct { unsigned short len; unsigned char arr[6]; } problreasoncode
 = {0};

	/* varchar ccenter[BRANCH_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[7]; } ccenter
 = {0};

	/* varchar sbcode[BRANCH_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[7]; } sbcode
 = {0};

	/* varchar fname[60+1] = {0}; */ 
struct { unsigned short len; unsigned char arr[61]; } fname
 = {0};

	/* varchar name[90+1] = {0}; */ 
struct { unsigned short len; unsigned char arr[91]; } name
 = {0};

	/* varchar userid[8+1] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } userid
 = {0};

	/* varchar wsid[15+1] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } wsid
 = {0};

	/* varchar timestamp[17+1] = {0}; */ 
struct { unsigned short len; unsigned char arr[18]; } timestamp
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
	char    sflag = {0};
	char    etype = {0};
		
	int   ret_code=0;
	int   pcount = 0;
	int   acount = 0;
	float   oorigamt=0;
	//varchar oarcode[AG_REV_CODE_SIZE] = {0};
	int   oarcode = 0;
	char  astat = '\0';
	/* varchar happlid[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } happlid
 = {0};
 // header applid

	//samsuri todo: add data for new table USK_COMPOUND_FEE -updated 16 feb 2023
	/* varchar hv_uskApplid[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } hv_uskApplid
 = {0};

	/* varchar hv_uskOldApplid[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } hv_uskOldApplid
 = {0};

	int     hv_txnSerNo=0;
	/* varchar hv_idType[ID_TYPE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } hv_idType
 = {0};
 //3
	/* varchar hv_idNo[ID_NUMBER2_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[13]; } hv_idNo
 = {0};
 //13
	/* varchar hv_gmpcName [151] = {0}; */ 
struct { unsigned short len; unsigned char arr[151]; } hv_gmpcName
 = {0};

	int     hv_cardLostCount=0;	
	/* varchar hv_lostReasonCode[3] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } hv_lostReasonCode
 = {0};

	float   hv_CF=0;
	/* varchar hv_appealDate[DATE_TIME_SIZE + 4] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } hv_appealDate
 = {0};

	/* varchar hv_appealBranch[BRANCH_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[7]; } hv_appealBranch
 = {0};
 //7
	/* varchar hv_appealUserID[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_appealUserID
 = {0};
 //9
	/* varchar hv_appealRemark[251] = {0}; */ 
struct { unsigned short len; unsigned char arr[251]; } hv_appealRemark
 = {0};

	float   hv_appealPercent=0;
	float   hv_amtToPay=0;
	/* varchar hv_appealStatus[26] = {0}; */ 
struct { unsigned short len; unsigned char arr[26]; } hv_appealStatus
 = {0};

	/* varchar hv_sscBranch[BRANCH_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[7]; } hv_sscBranch
 = {0};
 
	/* varchar hv_sscUserID[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_sscUserID
 = {0};
 
	/* varchar hv_sscWsID[4] = {0}; */ 
struct { unsigned short len; unsigned char arr[4]; } hv_sscWsID
 = {0};
 
	/* varchar hv_sscDateTime[DATE_TIME_SIZE + 4] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } hv_sscDateTime
 = {0};

	/* varchar hv_sscRemark[251] = {0}; */ 
struct { unsigned short len; unsigned char arr[251]; } hv_sscRemark
 = {0};

	/* varchar hv_payReceipt[RECEIPT_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[11]; } hv_payReceipt
 = {0};

	/* varchar hv_payBranch[BRANCH_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[7]; } hv_payBranch
 = {0};
 
	/* varchar hv_payUserID[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_payUserID
 = {0};
 
	/* varchar hv_payDateTime[DATE_TIME_SIZE + 4] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } hv_payDateTime
 = {0};

	/* varchar hv_GQDBranch[BRANCH_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[7]; } hv_GQDBranch
 = {0};


	//int Ori_txnSerNo = 0;

	//samsuri added - outstand_txn_fee
	int hvOutStandTxnSerNo;
	/* varchar hvOutStandFeeType[FEE_TYPE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[4]; } hvOutStandFeeType
 = {0};
 
	float hvOutStandFeeAmt;
	int hvOutStandAgencyRevnCode;
	/* varchar hvOutStandSendGSC[2] = {0}; */ 
struct { unsigned short len; unsigned char arr[2]; } hvOutStandSendGSC
 = {0};
 

	char hv_prob_stat = {0}; 
	/* varchar hv_gUser1[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_gUser1
 = {0};
 
	/* varchar hv_gUser1TimeStamp[DATE_TIME_SIZE + 4] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } hv_gUser1TimeStamp
 = {0};
 
	/* varchar hv_gUser2[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_gUser2
 = {0};
 
	/* varchar hv_gUser2TimeStamp[DATE_TIME_SIZE + 4] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } hv_gUser2TimeStamp
 = {0};
 

	//samsuri todo: add data for new table USK_COMPOUND_FEE 20 sept 2022 - finish

	sql_context pcCtx; 
	/* EXEC SQL END DECLARE SECTION; */ 


	pcCtx = ctx; 
	/* EXEC SQL CONTEXT USE :pcCtx; */ 


	// copy the values from req buffer to local variable here
	strcpy((char*)applid.arr,req->applid);
	setlen(applid);
	strcpy((char*)oldapplid.arr,req->oldapplid);
	setlen(oldapplid);
	strcpy((char*)kptno.arr,req->kptno);
	setlen(kptno);
	strcpy((char*)txncode.arr,req->txncode);
	setlen(txncode);
	origamt = req->origamt;
	paidamt = req->paidamt;
	strcpy((char*)legtxncode.arr,req->legtxncode);
	setlen(legtxncode);
	txnserno = req->txnserno;
	//strcpy((char*)arcode.arr,req->agencyrevncode);
	//setlen(arcode);
	arcode = req->agencyrevncode;
	strcpy((char*)supvuid.arr,req->supvuid);
	setlen(supvuid);
	strcpy((char*)supvremarks.arr,req->supvremarks);
	setlen(supvremarks);
	strcpy((char*)problreasoncode.arr,req->problreasoncode);
	setlen(problreasoncode);
	strcpy((char*)fname.arr,req->formname);
	setlen(fname);
	strcpy((char*)userid.arr,req->userid);
	setlen(userid);
	strcpy((char*)wsid.arr,req->wsid);
	setlen(wsid);
	strcpy((char*)timestamp.arr,req->timestamp);
	setlen(timestamp);	
	
	//added by samsuri on 20 sept 2022 - start
	//========================================
	strcpy((char*)hv_uskApplid.arr,req->uskApplid);
	setlen(hv_uskApplid);
	strcpy((char*)hv_uskOldApplid.arr,req->uskOldApplid);
	setlen(hv_uskOldApplid);
	hv_txnSerNo = req->txnSerNo;
	strcpy((char*)hv_idType.arr,req->idType);
	setlen(hv_idType);
	strcpy((char*)hv_idNo.arr,req->idNo);
	setlen(hv_idNo);	
	strcpy((char*)hv_gmpcName.arr,req->gmpcName);
	setlen(hv_gmpcName);
	hv_cardLostCount = req->cardLostCount;
	strcpy((char*)hv_lostReasonCode.arr,req->lostReasonCode);
	setlen(hv_lostReasonCode);
	if(req->CF > -1) hv_CF = req->CF;
	strcpy((char*)hv_appealDate.arr,req->appealDate);
	setlen(hv_appealDate);
	strcpy((char*)hv_appealBranch.arr,req->appealBranch);
	setlen(hv_appealBranch);
	strcpy((char*)hv_appealUserID.arr,req->appealUserID);
	setlen(hv_appealUserID);
	strcpy((char*)hv_appealRemark.arr,req->appealRemark);
	setlen(hv_appealRemark);
	if(req->appealPercent > -1) hv_appealPercent = req->appealPercent;
	if(req->amtToPay > -1) hv_amtToPay = req->amtToPay;
	strcpy((char*)hv_appealStatus.arr,req->appealStatus);
	setlen(hv_appealStatus);
	strcpy((char*)hv_sscBranch.arr,req->sscBranch);
	setlen(hv_sscBranch);
	strcpy((char*)hv_sscUserID.arr,req->sscUserID);
	setlen(hv_sscUserID);
	strcpy((char*)hv_sscWsID.arr,req->sscWsID);
	setlen(hv_sscWsID);
	strcpy((char*)hv_sscDateTime.arr,req->sscDateTime);
	setlen(hv_sscDateTime);
	strcpy((char*)hv_sscRemark.arr,req->sscRemark);
	setlen(hv_sscRemark);
	strcpy((char*)hv_payReceipt.arr,req->payReceipt);
	setlen(hv_payReceipt);
	strcpy((char*)hv_payBranch.arr,req->payBranch);
	setlen(hv_payBranch);
	strcpy((char*)hv_payUserID.arr,req->payUserID);
	setlen(hv_payUserID);
	strcpy((char*)hv_payDateTime.arr,req->payDateTime);
	setlen(hv_payDateTime);
	strcpy((char*)hv_GQDBranch.arr,"101999");
	setlen(hv_GQDBranch);


	//outstand txn fee
	hvOutStandTxnSerNo = req->OutStandTxnSerNo;
	strcpy((char*)hvOutStandFeeType.arr,req->OutStandFeeType);
	setlen(hvOutStandFeeType);
	hvOutStandFeeAmt = req->OutStandFeeAmt;
	hvOutStandAgencyRevnCode = req->OutStandAgencyRevnCode;
	strcpy((char*)hvOutStandSendGSC.arr,req->OutStandSendGSC);
	setlen(hvOutStandSendGSC);

	//problem record - first usk
	if(hv_txnSerNo == 1 && req->gUser1[0] != '\0')
	{
		userlog("JPNHG3_PYMT_REV_UPD L1: inside guser1 update");
		hv_prob_stat = req->prob_stat;
		strcpy((char*)hv_gUser1.arr,req->gUser1);
		setlen(hv_gUser1);
		strcpy((char*)hv_gUser1TimeStamp.arr,req->gUser1TimeStamp);
		setlen(hv_gUser1TimeStamp);

		/* EXEC SQL UPDATE PROBL_RECORD SET PROBLSTAT = :hv_prob_stat, GUSER1 = :hv_gUser1,
		GUSER1TIMESTAMP = TO_DATE(:hv_gUser1TimeStamp,'DDMMYYYY HH24MISS')
			WHERE APPLID = :hv_uskOldApplid AND PROBLREASONCODE = 'E0001'; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update PROBL_RECORD  set PROBLSTAT=:b0,GUSER1=:b1,GUSER1TIM\
ESTAMP=TO_DATE(:b2,'DDMMYYYY HH24MISS') where (APPLID=:b3 and PROBLREASONCODE=\
'E0001')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )5;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&hv_prob_stat;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&hv_gUser1;
  sqlstm.sqhstl[1] = (unsigned int  )11;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&hv_gUser1TimeStamp;
  sqlstm.sqhstl[2] = (unsigned int  )22;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&hv_uskOldApplid;
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

 

		if (SQLCODE != 0 && SQLCODE != 1403)
			userlog("JPNHG3_PYMT_REV_UPD L1 : UPDATE on PROBL_RECORD failed : %s", SQLMSG);		
		else
			userlog("JPNHG3_PYMT_REV_UPD L1 : Record UPDATED on PROBL_RECORD - %d", SQLCODE);

	}

	if(hv_txnSerNo > 0 && req->gUser2[0] != '\0')
	{
		userlog("JPNHG3_PYMT_REV_UPD L1: inside guser2 update hv_uskOldApplid: %s ",hv_uskOldApplid.arr);	
		hv_prob_stat = req->prob_stat;
		strcpy((char*)hv_gUser2.arr,req->gUser2);
		setlen(hv_gUser2);
		strcpy((char*)hv_gUser2TimeStamp.arr,req->gUser2TimeStamp);
		setlen(hv_gUser2TimeStamp);
		
		userlog("Before exec hv_gUser2: %s", hv_gUser2.arr);
		/* EXEC SQL UPDATE PROBL_RECORD SET PROBLSTAT = :hv_prob_stat, PROBLSOLVEDATE=SYSDATE, GUSER2 = :hv_gUser2,
		GUSER2TIMESTAMP = TO_DATE(:hv_gUser2TimeStamp,'DDMMYYYY HH24MISS')
			WHERE APPLID = :hv_uskOldApplid AND PROBLREASONCODE = 'E0001'; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update PROBL_RECORD  set PROBLSTAT=:b0,PROBLSOLVEDATE=SYSDA\
TE,GUSER2=:b1,GUSER2TIMESTAMP=TO_DATE(:b2,'DDMMYYYY HH24MISS') where (APPLID=:\
b3 and PROBLREASONCODE='E0001')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )36;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&hv_prob_stat;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&hv_gUser2;
  sqlstm.sqhstl[1] = (unsigned int  )11;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&hv_gUser2TimeStamp;
  sqlstm.sqhstl[2] = (unsigned int  )22;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&hv_uskOldApplid;
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

 

		if (SQLCODE != 0 && SQLCODE != 1403)
			userlog("JPNHG3_PYMT_REV_UPD L1 : UPDATE on PROBL_RECORD failed : %s", SQLMSG);		
		else
			userlog("JPNHG3_PYMT_REV_UPD L1 : Record UPDATED on PROBL_RECORD - %d", SQLCODE);

	}

	//------------------------------------OUTSTAND_TXN_FEE--------------------------------
	if(hv_uskOldApplid.arr[0] != '\0' && hvOutStandFeeType.arr[0] != '\0')
	{
		/* EXEC SQL DELETE FROM OUTSTAND_TXN_FEE
			WHERE APPLID = :hv_uskOldApplid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "delete  from OUTSTAND_TXN_FEE  where APPLID=:b0";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )67;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&hv_uskOldApplid;
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



		if(SQLCODE != 0)
		{
			userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) :No record for Deletion on OUTSTAND_TXN_FEE : %s", SQLMSG);
		}

		/* EXEC SQL INSERT INTO OUTSTAND_TXN_FEE(
			APPLID, TXNSERNO, FEETYPE, FEEAMT, AGENCYREVNCODE, SEND_GSC)
			VALUES( 
			:hv_uskOldApplid, :hvOutStandTxnSerNo, :hvOutStandFeeType, :hvOutStandFeeAmt, :hvOutStandAgencyRevnCode, :hvOutStandSendGSC); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into OUTSTAND_TXN_FEE (APPLID,TXNSERNO,FEETYPE,FEEAM\
T,AGENCYREVNCODE,SEND_GSC) values (:b0,:b1,:b2,:b3,:b4,:b5)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )86;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&hv_uskOldApplid;
  sqlstm.sqhstl[0] = (unsigned int  )22;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&hvOutStandTxnSerNo;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&hvOutStandFeeType;
  sqlstm.sqhstl[2] = (unsigned int  )6;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&hvOutStandFeeAmt;
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&hvOutStandAgencyRevnCode;
  sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&hvOutStandSendGSC;
  sqlstm.sqhstl[5] = (unsigned int  )4;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
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
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Insert into OUTSTAND_TXN_FEE failed : %s", sqlmsg);
			#endif
					strcpy(prog_log.remarks,"transaction_processing() Insert into OUTSTAND_TXN_FEE failed ");
					sprintf(excep_log.error_msg, "transaction_processing() Insert into OUTSTAND_TXN_FEE failed : %s", SQLMSG);
					excep_log.termination_flag = YES;
					excep_log.severity = FATAL;

					log_error(ctx);
							
					return INSERT_ERROR;
			}
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record inserted into OUTSTAND_TXN_FEE");
			#endif

	}

	//------------------------------------USK_COMPOUND_FEE--------------------------------
	//added on 2 get original value
	// EXEC SQL SELECT MAX(TXNSERNO) INTO :Ori_txnSerNo 
	// 	FROM USK_COMPOUND_FEE
	// 	WHERE OLDAPPLID = :hv_uskOldApplid;

	// if(SQLCODE != 0 && SQLCODE != 1403)
	// {
	// 	userlog("JPNHG3_PYMT_REV_UPD L1 : SELECT on USK_COMPOUND_FEE failed : %s", SQLMSG);
	// }
	
	//if(hv_txnSerNo == Ori_txnSerNo)
	{
		//delete first
		/* EXEC SQL DELETE FROM USK_COMPOUND_FEE
			WHERE APPLID = :hv_uskApplid
			AND TXNSERNO = :hv_txnSerNo; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "delete  from USK_COMPOUND_FEE  where (APPLID=:b0 and TXNSER\
NO=:b1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )125;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&hv_uskApplid;
  sqlstm.sqhstl[0] = (unsigned int  )22;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&hv_txnSerNo;
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



		if (SQLCODE != 0 && SQLCODE != 1403)
			userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) :No record for Deletion on USK_COMPOUND_FEE : %s", SQLMSG);
		else
			userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : After try delete from USK_COMPOUND_FEE - %s", SQLMSG);
	}

	if(hv_uskApplid.arr[0] != '\0')
	{
	//insert new
	/* EXEC SQL INSERT INTO USK_COMPOUND_FEE(
		APPLID       ,
		OLDAPPLID    ,
		TXNSERNO     ,
		IDTYPE       ,
		IDNO         ,
		GMPCNAME     ,
		CARDLOSTCNT  ,
		LOSTRSNCODE  ,
		CF           ,
		APPEALDATE   ,
		APPEALBRANCH ,
		APPEALUSERID ,
		APPEALREMARK ,
		APPEALPERCENT,
		AMTTOPAY     ,
		APPEALSTATUS ,
		SSCBRANCH    ,
		SSCUSERID    ,
		SSCWSID      ,
		SSCDATETIME  ,
		SSCREMARK    ,
		PAYRECEIPT   ,
		PAYBRANCH    ,
		PAYUSERID    ,
		PAYDATETIME  )
		VALUES( 
		:hv_uskApplid,
		:hv_uskOldApplid,
		:hv_txnSerNo,
		:hv_idType,
		:hv_idNo,
		:hv_gmpcName,
		:hv_cardLostCount,
		:hv_lostReasonCode,
		:hv_CF,
		TO_DATE(:hv_appealDate,'DDMMYYYY HH24MISS'),
		:hv_appealBranch,
		:hv_appealUserID,
		:hv_appealRemark,
		:hv_appealPercent,
		:hv_amtToPay,
		:hv_appealStatus,
		:hv_sscBranch,
		:hv_sscUserID,
		:hv_sscWsID,
		TO_DATE(:hv_sscDateTime,'DDMMYYYY HH24MISS'),
		:hv_sscRemark,
		:hv_payReceipt,
		:hv_payBranch,
		:hv_payUserID,
		TO_DATE(:hv_payDateTime,'DDMMYYYY HH24MISS')); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 25;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into USK_COMPOUND_FEE (APPLID,OLDAPPLID,TXNSERNO,IDTY\
PE,IDNO,GMPCNAME,CARDLOSTCNT,LOSTRSNCODE,CF,APPEALDATE,APPEALBRANCH,APPEALUSER\
ID,APPEALREMARK,APPEALPERCENT,AMTTOPAY,APPEALSTATUS,SSCBRANCH,SSCUSERID,SSCWSI\
D,SSCDATETIME,SSCREMARK,PAYRECEIPT,PAYBRANCH,PAYUSERID,PAYDATETIME) values (:b\
0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,TO_DATE(:b9,'DDMMYYYY HH24MISS'),:b10,:b11,:\
b12,:b13,:b14,:b15,:b16,:b17,:b18,TO_DATE(:b19,'DDMMYYYY HH24MISS'),:b20,:b21,\
:b22,:b23,TO_DATE(:b24,'DDMMYYYY HH24MISS'))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )148;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_uskApplid;
 sqlstm.sqhstl[0] = (unsigned int  )22;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&hv_uskOldApplid;
 sqlstm.sqhstl[1] = (unsigned int  )22;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&hv_txnSerNo;
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&hv_idType;
 sqlstm.sqhstl[3] = (unsigned int  )5;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&hv_idNo;
 sqlstm.sqhstl[4] = (unsigned int  )15;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&hv_gmpcName;
 sqlstm.sqhstl[5] = (unsigned int  )153;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&hv_cardLostCount;
 sqlstm.sqhstl[6] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&hv_lostReasonCode;
 sqlstm.sqhstl[7] = (unsigned int  )5;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&hv_CF;
 sqlstm.sqhstl[8] = (unsigned int  )sizeof(float);
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)0;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&hv_appealDate;
 sqlstm.sqhstl[9] = (unsigned int  )22;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)0;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&hv_appealBranch;
 sqlstm.sqhstl[10] = (unsigned int  )9;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)0;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&hv_appealUserID;
 sqlstm.sqhstl[11] = (unsigned int  )11;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)0;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&hv_appealRemark;
 sqlstm.sqhstl[12] = (unsigned int  )253;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)0;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)&hv_appealPercent;
 sqlstm.sqhstl[13] = (unsigned int  )sizeof(float);
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)0;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
 sqlstm.sqhstv[14] = (         void  *)&hv_amtToPay;
 sqlstm.sqhstl[14] = (unsigned int  )sizeof(float);
 sqlstm.sqhsts[14] = (         int  )0;
 sqlstm.sqindv[14] = (         void  *)0;
 sqlstm.sqinds[14] = (         int  )0;
 sqlstm.sqharm[14] = (unsigned int  )0;
 sqlstm.sqadto[14] = (unsigned short )0;
 sqlstm.sqtdso[14] = (unsigned short )0;
 sqlstm.sqhstv[15] = (         void  *)&hv_appealStatus;
 sqlstm.sqhstl[15] = (unsigned int  )28;
 sqlstm.sqhsts[15] = (         int  )0;
 sqlstm.sqindv[15] = (         void  *)0;
 sqlstm.sqinds[15] = (         int  )0;
 sqlstm.sqharm[15] = (unsigned int  )0;
 sqlstm.sqadto[15] = (unsigned short )0;
 sqlstm.sqtdso[15] = (unsigned short )0;
 sqlstm.sqhstv[16] = (         void  *)&hv_sscBranch;
 sqlstm.sqhstl[16] = (unsigned int  )9;
 sqlstm.sqhsts[16] = (         int  )0;
 sqlstm.sqindv[16] = (         void  *)0;
 sqlstm.sqinds[16] = (         int  )0;
 sqlstm.sqharm[16] = (unsigned int  )0;
 sqlstm.sqadto[16] = (unsigned short )0;
 sqlstm.sqtdso[16] = (unsigned short )0;
 sqlstm.sqhstv[17] = (         void  *)&hv_sscUserID;
 sqlstm.sqhstl[17] = (unsigned int  )11;
 sqlstm.sqhsts[17] = (         int  )0;
 sqlstm.sqindv[17] = (         void  *)0;
 sqlstm.sqinds[17] = (         int  )0;
 sqlstm.sqharm[17] = (unsigned int  )0;
 sqlstm.sqadto[17] = (unsigned short )0;
 sqlstm.sqtdso[17] = (unsigned short )0;
 sqlstm.sqhstv[18] = (         void  *)&hv_sscWsID;
 sqlstm.sqhstl[18] = (unsigned int  )6;
 sqlstm.sqhsts[18] = (         int  )0;
 sqlstm.sqindv[18] = (         void  *)0;
 sqlstm.sqinds[18] = (         int  )0;
 sqlstm.sqharm[18] = (unsigned int  )0;
 sqlstm.sqadto[18] = (unsigned short )0;
 sqlstm.sqtdso[18] = (unsigned short )0;
 sqlstm.sqhstv[19] = (         void  *)&hv_sscDateTime;
 sqlstm.sqhstl[19] = (unsigned int  )22;
 sqlstm.sqhsts[19] = (         int  )0;
 sqlstm.sqindv[19] = (         void  *)0;
 sqlstm.sqinds[19] = (         int  )0;
 sqlstm.sqharm[19] = (unsigned int  )0;
 sqlstm.sqadto[19] = (unsigned short )0;
 sqlstm.sqtdso[19] = (unsigned short )0;
 sqlstm.sqhstv[20] = (         void  *)&hv_sscRemark;
 sqlstm.sqhstl[20] = (unsigned int  )253;
 sqlstm.sqhsts[20] = (         int  )0;
 sqlstm.sqindv[20] = (         void  *)0;
 sqlstm.sqinds[20] = (         int  )0;
 sqlstm.sqharm[20] = (unsigned int  )0;
 sqlstm.sqadto[20] = (unsigned short )0;
 sqlstm.sqtdso[20] = (unsigned short )0;
 sqlstm.sqhstv[21] = (         void  *)&hv_payReceipt;
 sqlstm.sqhstl[21] = (unsigned int  )13;
 sqlstm.sqhsts[21] = (         int  )0;
 sqlstm.sqindv[21] = (         void  *)0;
 sqlstm.sqinds[21] = (         int  )0;
 sqlstm.sqharm[21] = (unsigned int  )0;
 sqlstm.sqadto[21] = (unsigned short )0;
 sqlstm.sqtdso[21] = (unsigned short )0;
 sqlstm.sqhstv[22] = (         void  *)&hv_payBranch;
 sqlstm.sqhstl[22] = (unsigned int  )9;
 sqlstm.sqhsts[22] = (         int  )0;
 sqlstm.sqindv[22] = (         void  *)0;
 sqlstm.sqinds[22] = (         int  )0;
 sqlstm.sqharm[22] = (unsigned int  )0;
 sqlstm.sqadto[22] = (unsigned short )0;
 sqlstm.sqtdso[22] = (unsigned short )0;
 sqlstm.sqhstv[23] = (         void  *)&hv_payUserID;
 sqlstm.sqhstl[23] = (unsigned int  )11;
 sqlstm.sqhsts[23] = (         int  )0;
 sqlstm.sqindv[23] = (         void  *)0;
 sqlstm.sqinds[23] = (         int  )0;
 sqlstm.sqharm[23] = (unsigned int  )0;
 sqlstm.sqadto[23] = (unsigned short )0;
 sqlstm.sqtdso[23] = (unsigned short )0;
 sqlstm.sqhstv[24] = (         void  *)&hv_payDateTime;
 sqlstm.sqhstl[24] = (unsigned int  )22;
 sqlstm.sqhsts[24] = (         int  )0;
 sqlstm.sqindv[24] = (         void  *)0;
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



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(sqlca.sqlcode != 0)
		{	
			userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Insert into USK_COMPOUND_FEE failed : %s", sqlmsg);
	
			strcpy(prog_log.remarks,"transaction_processing() Insert into USK_COMPOUND_FEE failed ");
			sprintf(excep_log.error_msg, "transaction_processing() Insert into USK_COMPOUND_FEE failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
					
			return INSERT_ERROR;
		}		
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record inserted into USK_COMPOUND_FEE");		
	}

	//------------------------------------APPL_TXN--------------------------------
	if(hv_lostReasonCode.arr[0] != '\0')
	{
		/* EXEC SQL UPDATE APPL_TXN SET LICCLASS = :hv_lostReasonCode
				WHERE APPLID = :hv_uskOldApplid AND TXNCODE = '403'; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 25;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPL_TXN  set LICCLASS=:b0 where (APPLID=:b1 and TXN\
CODE='403')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )263;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&hv_lostReasonCode;
  sqlstm.sqhstl[0] = (unsigned int  )5;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&hv_uskOldApplid;
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

 

		if (SQLCODE != 0 && SQLCODE != 1403)
			userlog("JPNHG3_PYMT_REV_UPD L1 : UPDATE LICCLASS on APPL_TXN failed : %s", SQLMSG);		
		else
			userlog("JPNHG3_PYMT_REV_UPD L1 : LICCLASS UPDATED to %s on APPL_TXN - %d",hv_lostReasonCode.arr, SQLCODE);

	}

	//------------------------------------PROBL_RECORD--------------------------------
	if((hv_amtToPay < 1 && hv_uskApplid.arr[0] != '\0') || hv_gUser2.arr[0] != '\0' )
	{
		userlog("JPNHG3_PYMT_REV_UPD L1  : SET GENKPT = 'P' because hv_amtToPay: %f hv_gUser2.arr: %s",hv_amtToPay,hv_gUser2.arr);
		/* EXEC SQL UPDATE PROBL_RECORD SET GENKPT = 'P'
			WHERE APPLID = :hv_uskOldApplid AND PROBLREASONCODE = 'E0001'; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 25;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update PROBL_RECORD  set GENKPT='P' where (APPLID=:b0 and P\
ROBLREASONCODE='E0001')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )286;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&hv_uskOldApplid;
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

 

		if (SQLCODE != 0 && SQLCODE != 1403)
		{
		
				userlog("JPNHG3_PYMT_REV_UPD L1 : UPDATE on PROBL_RECORD failed : %s", SQLMSG);
		
				// strcpy(prog_log.remarks,"JPNHG3_PYMT_REV_UPD  : transaction_processing() UPDATE on PROBL_RECORD failed ");
				// sprintf(excep_log.error_msg, "JPNHG3_PYMT_REV_UPD  : transaction_processing() UPDATE on PROBL_RECORD failed : %s", SQLMSG);
				// excep_log.termination_flag = YES;
				// excep_log.severity = FATAL;

				// log_error(ctx);
						
				// return UPDATE_ERROR;
		}
		else
			userlog("JPNHG3_PYMT_REV_UPD L1 : Record UPDATED GENKPT = 'P' on PROBL_RECORD - %d", SQLCODE);

		//------------------------------------OUTSTAND_TXN_FEE--------------------------------
		// EXEC SQL UPDATE OUTSTAND_TXN_FEE SET FEEAMT=0
		// 	WHERE APPLID = :hv_uskOldApplid
		// 	AND FEETYPE = 'CF';

		/* EXEC SQL DELETE OUTSTAND_TXN_FEE
			WHERE APPLID = :hv_uskOldApplid
			AND FEETYPE = 'CF'; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 25;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "delete  from OUTSTAND_TXN_FEE  where (APPLID=:b0 and FEETYP\
E='CF')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )305;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&hv_uskOldApplid;
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



		if(SQLCODE != 0 && SQLCODE != 1403)
		{
			userlog("JPNHG3_PYMT_REV_UPD L1 : DELETE on OUTSTAND_TXN_FEE failed : %s", SQLMSG);
		}
		else
			userlog("JPNHG3_PYMT_REV_UPD L1 : Record DELETED from OUTSTAND_TXN_FEE - %d", SQLCODE);

	}


	//------------------------------------APPNT_PROBL_DATA--------------------------------
	//added by samsuri on 26 jan 2023 (to auto download updated data)
	//if(strcmp(uskpanelReduction,"919")==0)
	userlog("hv_uskOldApplid: : %d hv_txnSerNo : %d hv_GQDBranch: %s hv_sscBranch: %s",hv_uskOldApplid.arr,hv_txnSerNo,
				hv_GQDBranch.arr,hv_sscBranch.arr);
	
	//if((Ori_txnSerNo != hv_txnSerNo) && hv_txnSerNo > 0)
	if(hv_uskOldApplid.arr[0] != '\0' && hv_uskApplid.arr[0] != '\0')
	{
		//if(strcmp((char *)hv_sscBranch.arr,"101999")!=0 && strcmp((char *)hv_sscBranch.arr,"161003")!=0)
		if(strcmp((char *)hv_sscBranch.arr,(char *)hv_GQDBranch.arr) != 0)
		{
			//resend back data to SSC/GQD Branch
			/* EXEC SQL DELETE FROM APPNT_PROBL_DATA
				WHERE APPLID = :hv_uskOldApplid  
				AND ENQTYPE IS NULL
				AND SSCBRANCHCODE=:hv_sscBranch; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 25;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "delete  from APPNT_PROBL_DATA  where ((APPLID=:b0 and ENQT\
YPE is null ) and SSCBRANCHCODE=:b1)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )324;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&hv_uskOldApplid;
   sqlstm.sqhstl[0] = (unsigned int  )22;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&hv_sscBranch;
   sqlstm.sqhstl[1] = (unsigned int  )9;
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



			userlog("JPNHG3_PYMT_REV_UPD L1 : DELETE APPNT_PROBL_DATA hv_uskOldApplid: %s result : %d",hv_uskOldApplid.arr, SQLCODE);

			/* EXEC SQL INSERT INTO APPNT_PROBL_DATA(
			APPLID, SSCBRANCHCODE, SENDFLAG, TIMESTAMP, ENQTYPE)
			VALUES( 
			:hv_uskOldApplid, :hv_sscBranch, 'N', SYSDATE, NULL); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 25;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPNT_PROBL_DATA (APPLID,SSCBRANCHCODE,SENDFLA\
G, timestamp ,ENQTYPE) values (:b0,:b1,'N',SYSDATE,null )";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )347;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&hv_uskOldApplid;
   sqlstm.sqhstl[0] = (unsigned int  )22;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&hv_sscBranch;
   sqlstm.sqhstl[1] = (unsigned int  )9;
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



			userlog("JPNHG3_PYMT_REV_UPD L1 : INSERT APPNT_PROBL_DATA hv_uskOldApplid: %s result : %d",hv_uskOldApplid.arr, SQLCODE);
		}

		// if(strcmp(hv_sscBranch.arr,"101999")!=0 && strcmp(hv_sscBranch.arr,"161003")!=0)
		{
			//resend back data to SSC Branch
			/* EXEC SQL DELETE FROM APPNT_PROBL_DATA
				WHERE APPLID = :hv_uskApplid //AND SENDFLAG='Y' 
				AND ENQTYPE IS NULL
				AND SSCBRANCHCODE='101999'; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 25;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "delete  from APPNT_PROBL_DATA  where ((APPLID=:b0 and ENQT\
YPE is null ) and SSCBRANCHCODE='101999')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )370;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&hv_uskApplid;
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



			userlog("JPNHG3_PYMT_REV_UPD L1 : DELETE APPNT_PROBL_DATA applid: %s result : %d",hv_uskApplid.arr, SQLCODE);

			/* EXEC SQL INSERT INTO APPNT_PROBL_DATA(
			APPLID, SSCBRANCHCODE, SENDFLAG, TIMESTAMP, ENQTYPE)
			VALUES( 
			:hv_uskApplid, :hv_GQDBranch, 'N', SYSDATE, NULL); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 25;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPNT_PROBL_DATA (APPLID,SSCBRANCHCODE,SENDFLA\
G, timestamp ,ENQTYPE) values (:b0,:b1,'N',SYSDATE,null )";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )389;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&hv_uskApplid;
   sqlstm.sqhstl[0] = (unsigned int  )22;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&hv_GQDBranch;
   sqlstm.sqhstl[1] = (unsigned int  )9;
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

 //samsuri: please change to 161003 for production

			userlog("JPNHG3_PYMT_REV_UPD L1 : INSERT APPNT_PROBL_DATA applid: %s result : %d",hv_uskApplid.arr, SQLCODE);
		}

		// //resend back data to SSC Branch only
		// if(strcmp(hv_sscBranch.arr,"101999")!=0 && strcmp(hv_sscBranch.arr,"161003")!=0)
		// {
		// 	EXEC SQL UPDATE APPNT_PROBL_DATA SET SENDFLAG='N' 
		// 		WHERE APPLID = :oldapplid 
		// 		AND ENQTYPE IS NULL;

		// 	if(SQLCODE != 0)
		// 	{
		// 		if(SQLCODE == 1403)
		// 		{
		// 			userlog("JPNHG3_PYMT_REV_UPD L1  : no record in APPNT_PROBL_DATA  : %s", SQLMSG);

		// 			EXEC SQL INSERT INTO APPNT_PROBL_DATA(
		// 			APPLID, SSCBRANCHCODE, SENDFLAG, TIMESTAMP, ENQTYPE)
		// 			VALUES( 
		// 			:oldapplid, :hv_sscBranch, 'N', SYSDATE, NULL);

		// 			if(SQLCODE != 0)
		// 			{
		// 				userlog("JPNHG3_PYMT_REV_UPD L1 : INSERT INTO APPNT_PROBL_DATA failed : %s", SQLMSG);
		// 			}
		// 			else
		// 			{
		// 				userlog("JPNHG3_PYMT_REV_UPD L1 : INSERT INTO APPNT_PROBL_DATA Success : %s", SQLMSG);
		// 			}					
		// 		}
					
		// 		else
		// 		{
		// 			userlog("JPNHG3_PYMT_REV_UPD L1 : UPDATE on APPNT_PROBL_DATA failed : %s", SQLMSG);
		// 		}				
		// 	}
		// 	else
		// 	{
		// 		userlog("JPNHG3_PYMT_REV_UPD L1  : Record UPDATED from APPNT_PROBL_DATA - %s", SQLMSG);
		// 	}					
		// }
	}

	



	//added by samsuri on 20 sept 2022 - finish---------------------------------------------------------------


	#ifdef DEBUG
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : req->applid: %s",req->applid);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : applid: %s",applid.arr);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : req->oldapplid: %s",req->oldapplid);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : oldapplid: %s",oldapplid.arr);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : req->kptno: %s",req->kptno);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : kptno: %s",kptno.arr);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : req->txncode: %s",req->txncode);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : txncode: %s",txncode.arr);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : origamt: %.2f",origamt);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : paidamt: %.2f",paidamt);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : legtxncode: %s",legtxncode.arr);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : txnserno: %c",txnserno);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : agencyrevncode: %d",arcode);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : supvuid: %s",supvuid.arr);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : supvremarks: %s",supvremarks.arr);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : problreasoncode: %s",problreasoncode.arr);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : formname: %s",fname.arr);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : userid: %s",userid.arr);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : wsid: %s",wsid.arr);
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : timestamp: %s",timestamp.arr);
	#endif

	if(strncmp((char *)txncode.arr,"919",3) == 0)  // This is payment update
	{
		pcount= 0;
		/* EXEC SQL SELECT COUNT(*) INTO :pcount 
			FROM APPNT_HG3_FEE_INFO
				WHERE APPLID = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 25;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPNT_HG3_FEE_INFO where AP\
PLID=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )412;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&pcount;
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



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(sqlca.sqlcode != 0)
		{
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : failed while select count from APPNT_HG3_FEE_INFO");
			#endif
			strcpy(prog_log.remarks,"transaction_processing() failed while select count from APPNT_HG3_FEE_INFO");
			sprintf(excep_log.error_msg,"transaction_processing() failed while select count from APPNT_HG3_FEE_INFO:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			return SELECT_ERROR;
		}
		#ifdef DEBUG
			userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPNT_HG3_FEE_INFO, pcount : %d",pcount);
		#endif


		if(pcount == 0)
		{

			/* EXEC SQL SELECT GMPCSHORTNAME1||' '||GMPCSHORTNAME2||' '||GMPCSHORTNAME3,
				ADDRESS1, ADDRESS2, ADDRESS3, POSTCODE, STATECODE, CITYCODE
				INTO :name,:address1, :address2, :address3,:postcode, :statecode, :citycode
					FROM APPNT_JPN_INFO
						WHERE APPLID = :oldapplid; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 25;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select ((((GMPCSHORTNAME1||' ')||GMPCSHORTNAME2)||' ')||GM\
PCSHORTNAME3) ,ADDRESS1 ,ADDRESS2 ,ADDRESS3 ,POSTCODE ,STATECODE ,CITYCODE int\
o :b0,:b1,:b2,:b3,:b4,:b5,:b6  from APPNT_JPN_INFO where APPLID=:b7";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )435;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&name;
   sqlstm.sqhstl[0] = (unsigned int  )93;
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
   sqlstm.sqhstv[7] = (         void  *)&oldapplid;
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



		
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : After SELECT FROM APPNT_JPN_INFO, sqlca.sqlcode : %d",sqlca.sqlcode);
				#endif
				sqlmsg[0] = '\0';
				strcpy(sqlmsg, SQLMSG);
				if(sqlca.sqlcode != 0)
				{
					#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD L1  : transaction_processing() failed while select gmpcshortname1,2,3 from APPNT_JPN_INFO");
					#endif
					strcpy(prog_log.remarks,"transaction_processing() failed while select gmpcshortname1,2,3 from APPNT_JPN_INFO");
					sprintf(excep_log.error_msg,"transaction_processing() failed while select gmpcshortname1,2,3 from APPNT_JPN_INFO:%s ",sqlmsg);
					excep_log.termination_flag = 'Y';
					excep_log.severity = FATAL;
					log_error(ctx);

					return SELECT_ERROR;
				}
				name.arr[name.len] = '\0'; address1.arr[address1.len] = '\0';
				address2.arr[address2.len] = '\0'; address3.arr[address3.len] = '\0';
				postcode.arr[postcode.len] = '\0'; statecode.arr[statecode.len] = '\0';
				wsid.arr[wsid.len] = '\0'; userid.arr[userid.len] = '\0';
				timestamp.arr[timestamp.len] = '\0';
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPNT_JPN_INFO, name :%s:",name.arr);
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPNT_JPN_INFO, address1 :%s:",address1.arr);
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPNT_JPN_INFO, address2 :%s:",address2.arr);
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPNT_JPN_INFO, address3 :%s:",address3.arr);
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPNT_JPN_INFO, postcode :%s:",postcode.arr);
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPNT_JPN_INFO, statecode :%s:",statecode.arr);
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPNT_JPN_INFO, citycode :%d:",citycode);
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPNT_JPN_INFO, userid :%s:",userid.arr);
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPNT_JPN_INFO, wsid :%s:",wsid.arr);
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPNT_JPN_INFO, timestamp :%s:",timestamp.arr);
				#endif

			/* EXEC SQL INSERT INTO APPNT_HG3_FEE_INFO(
				APPLID, OLDAPPLID, KPTNO, ORIGAMT, PAIDAMT, AGENCYREVNCODE, NAME, 
				ADDRESS1, ADDRESS2, ADDRESS3, POSTCODE, STATECODE, CITYCODE, USERID,
				WSID, TIMESTAMP)
				VALUES( 
				:applid, :oldapplid, :kptno, :origamt, :paidamt, :arcode,
				:name, :address1, :address2, :address3, :postcode, :statecode,
				:citycode, :userid, :wsid, TO_DATE(:timestamp,'DDMMYYYY HH24MISS')); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 25;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPNT_HG3_FEE_INFO (APPLID,OLDAPPLID,KPTNO,ORI\
GAMT,PAIDAMT,AGENCYREVNCODE,NAME,ADDRESS1,ADDRESS2,ADDRESS3,POSTCODE,STATECODE\
,CITYCODE,USERID,WSID, timestamp ) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8\
,:b9,:b10,:b11,:b12,:b13,:b14,TO_DATE(:b15,'DDMMYYYY HH24MISS'))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )482;
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
   sqlstm.sqhstv[1] = (         void  *)&oldapplid;
   sqlstm.sqhstl[1] = (unsigned int  )22;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&kptno;
   sqlstm.sqhstl[2] = (unsigned int  )15;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&origamt;
   sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)0;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)&paidamt;
   sqlstm.sqhstl[4] = (unsigned int  )sizeof(float);
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)0;
   sqlstm.sqinds[4] = (         int  )0;
   sqlstm.sqharm[4] = (unsigned int  )0;
   sqlstm.sqadto[4] = (unsigned short )0;
   sqlstm.sqtdso[4] = (unsigned short )0;
   sqlstm.sqhstv[5] = (         void  *)&arcode;
   sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[5] = (         int  )0;
   sqlstm.sqindv[5] = (         void  *)0;
   sqlstm.sqinds[5] = (         int  )0;
   sqlstm.sqharm[5] = (unsigned int  )0;
   sqlstm.sqadto[5] = (unsigned short )0;
   sqlstm.sqtdso[5] = (unsigned short )0;
   sqlstm.sqhstv[6] = (         void  *)&name;
   sqlstm.sqhstl[6] = (unsigned int  )93;
   sqlstm.sqhsts[6] = (         int  )0;
   sqlstm.sqindv[6] = (         void  *)0;
   sqlstm.sqinds[6] = (         int  )0;
   sqlstm.sqharm[6] = (unsigned int  )0;
   sqlstm.sqadto[6] = (unsigned short )0;
   sqlstm.sqtdso[6] = (unsigned short )0;
   sqlstm.sqhstv[7] = (         void  *)&address1;
   sqlstm.sqhstl[7] = (unsigned int  )33;
   sqlstm.sqhsts[7] = (         int  )0;
   sqlstm.sqindv[7] = (         void  *)0;
   sqlstm.sqinds[7] = (         int  )0;
   sqlstm.sqharm[7] = (unsigned int  )0;
   sqlstm.sqadto[7] = (unsigned short )0;
   sqlstm.sqtdso[7] = (unsigned short )0;
   sqlstm.sqhstv[8] = (         void  *)&address2;
   sqlstm.sqhstl[8] = (unsigned int  )33;
   sqlstm.sqhsts[8] = (         int  )0;
   sqlstm.sqindv[8] = (         void  *)0;
   sqlstm.sqinds[8] = (         int  )0;
   sqlstm.sqharm[8] = (unsigned int  )0;
   sqlstm.sqadto[8] = (unsigned short )0;
   sqlstm.sqtdso[8] = (unsigned short )0;
   sqlstm.sqhstv[9] = (         void  *)&address3;
   sqlstm.sqhstl[9] = (unsigned int  )33;
   sqlstm.sqhsts[9] = (         int  )0;
   sqlstm.sqindv[9] = (         void  *)0;
   sqlstm.sqinds[9] = (         int  )0;
   sqlstm.sqharm[9] = (unsigned int  )0;
   sqlstm.sqadto[9] = (unsigned short )0;
   sqlstm.sqtdso[9] = (unsigned short )0;
   sqlstm.sqhstv[10] = (         void  *)&postcode;
   sqlstm.sqhstl[10] = (unsigned int  )8;
   sqlstm.sqhsts[10] = (         int  )0;
   sqlstm.sqindv[10] = (         void  *)0;
   sqlstm.sqinds[10] = (         int  )0;
   sqlstm.sqharm[10] = (unsigned int  )0;
   sqlstm.sqadto[10] = (unsigned short )0;
   sqlstm.sqtdso[10] = (unsigned short )0;
   sqlstm.sqhstv[11] = (         void  *)&statecode;
   sqlstm.sqhstl[11] = (unsigned int  )5;
   sqlstm.sqhsts[11] = (         int  )0;
   sqlstm.sqindv[11] = (         void  *)0;
   sqlstm.sqinds[11] = (         int  )0;
   sqlstm.sqharm[11] = (unsigned int  )0;
   sqlstm.sqadto[11] = (unsigned short )0;
   sqlstm.sqtdso[11] = (unsigned short )0;
   sqlstm.sqhstv[12] = (         void  *)&citycode;
   sqlstm.sqhstl[12] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[12] = (         int  )0;
   sqlstm.sqindv[12] = (         void  *)0;
   sqlstm.sqinds[12] = (         int  )0;
   sqlstm.sqharm[12] = (unsigned int  )0;
   sqlstm.sqadto[12] = (unsigned short )0;
   sqlstm.sqtdso[12] = (unsigned short )0;
   sqlstm.sqhstv[13] = (         void  *)&userid;
   sqlstm.sqhstl[13] = (unsigned int  )11;
   sqlstm.sqhsts[13] = (         int  )0;
   sqlstm.sqindv[13] = (         void  *)0;
   sqlstm.sqinds[13] = (         int  )0;
   sqlstm.sqharm[13] = (unsigned int  )0;
   sqlstm.sqadto[13] = (unsigned short )0;
   sqlstm.sqtdso[13] = (unsigned short )0;
   sqlstm.sqhstv[14] = (         void  *)&wsid;
   sqlstm.sqhstl[14] = (unsigned int  )18;
   sqlstm.sqhsts[14] = (         int  )0;
   sqlstm.sqindv[14] = (         void  *)0;
   sqlstm.sqinds[14] = (         int  )0;
   sqlstm.sqharm[14] = (unsigned int  )0;
   sqlstm.sqadto[14] = (unsigned short )0;
   sqlstm.sqtdso[14] = (unsigned short )0;
   sqlstm.sqhstv[15] = (         void  *)&timestamp;
   sqlstm.sqhstl[15] = (unsigned int  )20;
   sqlstm.sqhsts[15] = (         int  )0;
   sqlstm.sqindv[15] = (         void  *)0;
   sqlstm.sqinds[15] = (         int  )0;
   sqlstm.sqharm[15] = (unsigned int  )0;
   sqlstm.sqadto[15] = (unsigned short )0;
   sqlstm.sqtdso[15] = (unsigned short )0;
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



				if(sqlca.sqlcode != 0)
				{
				#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Insert into APPNT_HG3_FEE_INFO failed : %s", SQLMSG);
				#endif
						strcpy(prog_log.remarks,"transaction_processing() Insert into APPNT_HG3_FEE_INFO failed ");
						sprintf(excep_log.error_msg, "transaction_processing() Insert into APPNT_HG3_FEE_INFO failed : %s", SQLMSG);
						excep_log.termination_flag = YES;
						excep_log.severity = FATAL;

						log_error(ctx);
								
						return INSERT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record inserted into APPNT_HG3_FEE_INFO");
				#endif


			/* EXEC SQL INSERT INTO APPL_TXN(
				APPLID, TXNSERNO, TXNCODE, TXNDATE, LEGTXNCODE) 
					VALUES (
						:applid, :txnserno, :txncode, SYSDATE, :legtxncode); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 25;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPL_TXN (APPLID,TXNSERNO,TXNCODE,TXNDATE,LEGT\
XNCODE) values (:b0,:b1,:b2,SYSDATE,:b3)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )561;
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
   sqlstm.sqhstv[1] = (         void  *)&txnserno;
   sqlstm.sqhstl[1] = (unsigned int  )1;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&txncode;
   sqlstm.sqhstl[2] = (unsigned int  )6;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&legtxncode;
   sqlstm.sqhstl[3] = (unsigned int  )7;
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



				if(sqlca.sqlcode != 0)
				{
				#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Insert into APPL_TXN failed : %s", SQLMSG);
				#endif
						strcpy(prog_log.remarks,"transaction_processing() Insert into APPL_TXN failed ");
						sprintf(excep_log.error_msg, "transaction_processing() Insert into APPL_TXN failed : %s", SQLMSG);
						excep_log.termination_flag = YES;
						excep_log.severity = FATAL;

						log_error(ctx);
								
						return INSERT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record inserted into APPL_TXN");
				#endif


			/* EXEC SQL INSERT INTO APPL_TXN_FEE(
				APPLID, TXNSERNO, FEETYPE, FEEAMT, AGENCYREVNCODE) 
					VALUES (
						:applid, :txnserno, 'CF', :paidamt, :arcode); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 25;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPL_TXN_FEE (APPLID,TXNSERNO,FEETYPE,FEEAMT,A\
GENCYREVNCODE) values (:b0,:b1,'CF',:b2,:b3)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )592;
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
   sqlstm.sqhstv[1] = (         void  *)&txnserno;
   sqlstm.sqhstl[1] = (unsigned int  )1;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&paidamt;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&arcode;
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




				if(sqlca.sqlcode != 0)
				{
				#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Insert into APPL_TXN_FEE failed : %s", SQLMSG);
				#endif
						strcpy(prog_log.remarks,"transaction_processing() Insert into APPL_TXN_FEE failed ");
						sprintf(excep_log.error_msg, "transaction_processing() Insert into APPL_TXN_FEE failed : %s", SQLMSG);
						excep_log.termination_flag = YES;
						excep_log.severity = FATAL;

						log_error(ctx);
								
						return INSERT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record inserted into APPL_TXN_FEE");
				#endif


			userlog("hg3 paidamt: %.2f origamt: %.2f",paidamt,origamt);
			if(paidamt == 0) // this is for fee waiver
			{
				/* EXEC SQL INSERT INTO APPL_FEE_REDUCTION(
					APPLID, TXNSERNO, FEETYPE, ORIGFEEAMT, FEEAMT, AGENCYREVNCODE, 
					REDUCTIONTYPE)
					VALUES(
					:applid, :txnserno, 'CF', :origamt, :paidamt, :arcode, 'W'); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 25;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into APPL_FEE_REDUCTION (APPLID,TXNSERNO,FEETYPE,O\
RIGFEEAMT,FEEAMT,AGENCYREVNCODE,REDUCTIONTYPE) values (:b0,:b1,'CF',:b2,:b3,:b\
4,'W')";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )623;
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
    sqlstm.sqhstv[1] = (         void  *)&txnserno;
    sqlstm.sqhstl[1] = (unsigned int  )1;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&origamt;
    sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&paidamt;
    sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&arcode;
    sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
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




				if(sqlca.sqlcode != 0)
				{
				#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Insert into APPL_FEE_REDUCTION failed(W) : %s", SQLMSG);
				#endif
						strcpy(prog_log.remarks,"transaction_processing() Insert into APPL_FEE_REDUCTION failed ");
						sprintf(excep_log.error_msg, "transaction_processing() Insert into APPL_FEE_REDUCTION failed : %s", SQLMSG);
						excep_log.termination_flag = YES;
						excep_log.severity = FATAL;

						log_error(ctx);
								
						return INSERT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record inserted into APPL_FEE_REDUCTION(W)");
				#endif

			}			
			else if(paidamt != origamt)  // this is for fee reduction
			{
				/* EXEC SQL INSERT INTO APPL_FEE_REDUCTION(
					APPLID, TXNSERNO, FEETYPE, ORIGFEEAMT, FEEAMT, AGENCYREVNCODE, 
					REDUCTIONTYPE)
					VALUES(
					:applid, :txnserno, 'CF', :origamt, :paidamt, :arcode, 'R'); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 25;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into APPL_FEE_REDUCTION (APPLID,TXNSERNO,FEETYPE,O\
RIGFEEAMT,FEEAMT,AGENCYREVNCODE,REDUCTIONTYPE) values (:b0,:b1,'CF',:b2,:b3,:b\
4,'R')";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )658;
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
    sqlstm.sqhstv[1] = (         void  *)&txnserno;
    sqlstm.sqhstl[1] = (unsigned int  )1;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&origamt;
    sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&paidamt;
    sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&arcode;
    sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
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




				if(sqlca.sqlcode != 0)
				{
				#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Insert into APPL_FEE_REDUCTION failed(R) : %s", SQLMSG);
				#endif
						strcpy(prog_log.remarks,"transaction_processing() Insert into APPL_FEE_REDUCTION failed ");
						sprintf(excep_log.error_msg, "transaction_processing() Insert into APPL_FEE_REDUCTION failed : %s", SQLMSG);
						excep_log.termination_flag = YES;
						excep_log.severity = FATAL;

						log_error(ctx);
								
						return INSERT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record inserted into APPL_FEE_REDUCTION(R)");
				#endif
			}


			// insert record in SUPERVISOR_REMARKS
			if(problreasoncode.arr[0] != '\0')  // problreasoncode for supervisor approval
			{
				/* EXEC SQL INSERT INTO SUPERVISOR_REMARKS(
					APPLID, PROBLSERNO, PROBLREASONCODE, FORMNAME, REMARKS,
					USERID, WSID, TIMESTAMP)
					VALUES(
					:applid, 1, :problreasoncode, :fname, :supvremarks, :userid, :wsid, TO_DATE(:timestamp,'DDMMYYYY HH24MISS')); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 25;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into SUPERVISOR_REMARKS (APPLID,PROBLSERNO,PROBLRE\
ASONCODE,FORMNAME,REMARKS,USERID,WSID, timestamp ) values (:b0,1,:b1,:b2,:b3,:\
b4,:b5,TO_DATE(:b6,'DDMMYYYY HH24MISS'))";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )693;
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
    sqlstm.sqhstv[1] = (         void  *)&problreasoncode;
    sqlstm.sqhstl[1] = (unsigned int  )8;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&fname;
    sqlstm.sqhstl[2] = (unsigned int  )63;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&supvremarks;
    sqlstm.sqhstl[3] = (unsigned int  )153;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&userid;
    sqlstm.sqhstl[4] = (unsigned int  )11;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&wsid;
    sqlstm.sqhstl[5] = (unsigned int  )18;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&timestamp;
    sqlstm.sqhstl[6] = (unsigned int  )20;
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



				if(sqlca.sqlcode != 0)
				{
				#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Insert into SUPERVISOR_REMARKS failed : %s", SQLMSG);
				#endif
						strcpy(prog_log.remarks,"transaction_processing() Insert into SUPERVISOR_REMARKS failed ");
						sprintf(excep_log.error_msg, "transaction_processing() Insert into SUPERVISOR_REMARKS failed : %s", SQLMSG);
						excep_log.termination_flag = YES;
						excep_log.severity = FATAL;

						log_error(ctx);
								
						return INSERT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record inserted into SUPERVISOR_REMARKS");
				#endif

			}

			//samsuri remark this as already done above			
			//// to update payment indicator as 'paid'
			// if(hv_payUserID.arr[0] != '\0')
			// {
			// 	EXEC SQL UPDATE PROBL_RECORD SET GENKPT = 'P'
			// 		//WHERE APPLID = :oldapplid AND PROBLREASONCODE = 'Q0001'; //samsuri remark this
			// 		WHERE APPLID = :oldapplid AND PROBLREASONCODE = 'E0001'; //samsuri added this

			// 	if (SQLCODE != 0 && SQLCODE != 1403)
			// 	{
			// 	#ifdef DEBUG
			// 			userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : UPDATE on PROBL_RECORD failed : %s", SQLMSG);
			// 	#endif
			// 			strcpy(prog_log.remarks,"JPNHG3_PYMT_REV_UPD  : transaction_processing() UPDATE on PROBL_RECORD failed ");
			// 			sprintf(excep_log.error_msg, "JPNHG3_PYMT_REV_UPD  : transaction_processing() UPDATE on PROBL_RECORD failed : %s", SQLMSG);
			// 			excep_log.termination_flag = YES;
			// 			excep_log.severity = FATAL;

			// 			log_error(ctx);
								
			// 			return DELETE_ERROR;
			// 	}
			// 	#ifdef DEBUG
			// 		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record UPDATED on PROBL_RECORD - %d", SQLCODE);
			// 	#endif


			// 	// to remove any outstanding fee
			// 	EXEC SQL DELETE FROM OUTSTAND_TXN_FEE
			// 		WHERE APPLID = :oldapplid
			// 		AND FEETYPE = 'CF'
			// 		AND TXNSERNO = (
			// 		SELECT TXNSERNO FROM APPL_TXN WHERE APPLID = :oldapplid AND TXNCODE = '403'
			// 		);

			// 	if(SQLCODE != 0)
			// 	{
			// 	#ifdef DEBUG
			// 			userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Deletion on OUTSTAND_TXN_FEE failed : %s", SQLMSG);
			// 	#endif
			// 			strcpy(prog_log.remarks,"JPNHG3_PYMT_REV_UPD  : transaction_processing() Deletion on OUTSTAND_TXN_FEE failed ");
			// 			sprintf(excep_log.error_msg, "JPNHG3_PYMT_REV_UPD  : transaction_processing() Deletion on OUTSTAND_TXN_FEE failed : %s", SQLMSG);
			// 			excep_log.termination_flag = YES;
			// 			excep_log.severity = FATAL;

			// 			log_error(ctx);
								
			// 			return DELETE_ERROR;
			// 	}
			// 	#ifdef DEBUG
			// 		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record deleted from OUTSTAND_TXN_FEE - %d", SQLCODE);
			// 	#endif

			// }


			// to send payment 'paid' indicator to GQD server
				/* EXEC SQL SELECT APPLSTAT,SSCBRANCHCODE INTO :astat,:sbcode FROM APPLICATION 
				WHERE APPLID = :oldapplid; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 25;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select APPLSTAT ,SSCBRANCHCODE into :b0,:b1  from APPLICA\
TION where APPLID=:b2";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )736;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&astat;
    sqlstm.sqhstl[0] = (unsigned int  )1;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&sbcode;
    sqlstm.sqhstl[1] = (unsigned int  )9;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&oldapplid;
    sqlstm.sqhstl[2] = (unsigned int  )22;
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



				sbcode.arr[sbcode.len] = '\0';

			sqlmsg[0] = '\0';
			strcpy(sqlmsg, SQLMSG);
			if(sqlca.sqlcode != 0)
			{
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : failed while select sscbranchcode from APPLICATION :%s", sqlmsg);
				#endif
				strcpy(prog_log.remarks,"transaction_processing() failed while select sscbranchcode from APPLICATION");
				sprintf(excep_log.error_msg,"transaction_processing() failed while select sscbranchcode from APPLICATION:%s ",sqlmsg);
				excep_log.termination_flag = 'Y';
				excep_log.severity = FATAL;
				log_error(ctx);

				return SELECT_ERROR;
			}
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPLICATION");
			#endif



			if(astat == 'Q')
			{
				sflag = '\0';
				/* EXEC SQL SELECT SENDFLAG INTO :sflag 
					FROM APPNT_PROBL_DATA
					WHERE APPLID = :oldapplid; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 25;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select SENDFLAG into :b0  from APPNT_PROBL_DATA where APP\
LID=:b1";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )763;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&sflag;
    sqlstm.sqhstl[0] = (unsigned int  )1;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&oldapplid;
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
						userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : failed while select SENDFLAG from APPNT_PROBL_DATA :%s", sqlmsg);
					#endif
					strcpy(prog_log.remarks,"transaction_processing() failed while select SENDFLAG from APPNT_PROBL_DATA");
					sprintf(excep_log.error_msg,"transaction_processing() failed while select SENDFLAG from APPNT_PROBL_DATA:%s ",sqlmsg);
					//excep_log.termination_flag = 'Y';
					//excep_log.severity = FATAL;
					//log_error(ctx);

					//return SELECT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPNT_PROBL_DATA");
				#endif



				if(sflag == '\0')  // no record in appnt_probl_data, no other GQD problem
				{
					/* EXEC SQL INSERT INTO APPNT_PROBL_DATA(
						APPLID, SSCBRANCHCODE, SENDFLAG, TIMESTAMP, ENQTYPE)
						VALUES(
						:oldapplid, :sbcode, 'N', SYSDATE, 'P'); */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 25;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "insert into APPNT_PROBL_DATA (APPLID,SSCBRANCHCODE,SENDF\
LAG, timestamp ,ENQTYPE) values (:b0,:b1,'N',SYSDATE,'P')";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )786;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&oldapplid;
     sqlstm.sqhstl[0] = (unsigned int  )22;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&sbcode;
     sqlstm.sqhstl[1] = (unsigned int  )9;
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



					if(sqlca.sqlcode != 0)
					{
					#ifdef DEBUG
							userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Insert into APPNT_PROBL_DATA failed(if) : %s", SQLMSG);
					#endif
							strcpy(prog_log.remarks,"transaction_processing() Insert into APPNT_PROBL_DATA failed ");
							sprintf(excep_log.error_msg, "transaction_processing() Insert into APPNT_PROBL_DATA failed : %s", SQLMSG);
							excep_log.termination_flag = YES;
							excep_log.severity = FATAL;

							log_error(ctx);
									
							return INSERT_ERROR;
					}
					#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record inserted into APPNT_PROBL_DATA");
					#endif

				}
				else if(sflag == 'Y')    // RECORD EXISTS IN APPNT_PROBL_DATA
				{
					if(sflag == 'Y')
					{
						/* EXEC SQL DELETE FROM APPNT_PROBL_DATA 
							WHERE APPLID = :oldapplid; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 12;
      sqlstm.arrsiz = 25;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "delete  from APPNT_PROBL_DATA  where APPLID=:b0";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )809;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&oldapplid;
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



						if(SQLCODE != 0)
						{
						#ifdef DEBUG
								userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Deletion on OUTSTAND_TXN_FEE failed : %s", SQLMSG);
						#endif
								strcpy(prog_log.remarks,"JPNHG3_PYMT_REV_UPD  : transaction_processing() Deletion on OUTSTAND_TXN_FEE failed ");
								sprintf(excep_log.error_msg, "JPNHG3_PYMT_REV_UPD  : transaction_processing() Deletion on OUTSTAND_TXN_FEE failed : %s", SQLMSG);
								excep_log.termination_flag = YES;
								excep_log.severity = FATAL;

								log_error(ctx);
										
								return DELETE_ERROR;
						}
						#ifdef DEBUG
							userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record deleted from OUTSTAND_TXN_FEE - %d", SQLCODE);
						#endif


						/* EXEC SQL INSERT INTO APPNT_PROBL_DATA(
						APPLID, SSCBRANCHCODE, SENDFLAG, TIMESTAMP, ENQTYPE)
						VALUES(
						:oldapplid, :sbcode, 'N', SYSDATE, 'P'); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 12;
      sqlstm.arrsiz = 25;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into APPNT_PROBL_DATA (APPLID,SSCBRANCHCODE,SEND\
FLAG, timestamp ,ENQTYPE) values (:b0,:b1,'N',SYSDATE,'P')";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )828;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&oldapplid;
      sqlstm.sqhstl[0] = (unsigned int  )22;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&sbcode;
      sqlstm.sqhstl[1] = (unsigned int  )9;
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



						if(sqlca.sqlcode != 0)
						{
						#ifdef DEBUG
								userlog("JPNHG3_PYMT_REV_UPD L1  : transaction_processing() Insert into APPNT_PROBL_DATA failed(else) : %s", SQLMSG);
						#endif
								strcpy(prog_log.remarks,"transaction_processing() Insert into APPNT_PROBL_DATA failed ");
								sprintf(excep_log.error_msg, "transaction_processing() Insert into APPNT_PROBL_DATA failed : %s", SQLMSG);
								excep_log.termination_flag = YES;
								excep_log.severity = FATAL;

								log_error(ctx);
										
								return INSERT_ERROR;
						}
						#ifdef DEBUG
							userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record inserted into APPNT_PROBL_DATA");
						#endif

					}

				}

			}  // end of if for sbcode

			ret_code = 0;  
			return ret_code;   // success

		}  // end of pcount if loop

		ret_code = 0;  
		return ret_code;   // success

	} 
	else if((char *)strncmp(txncode.arr,"920",3) == 0) // This is Payment Reversal
	{
		strcpy((char*)happlid.arr,req->header.application_id);		
		setlen(happlid);
			#ifdef DEBUG		
				userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : happlid: %s",happlid.arr);
			#endif

		oapplid.arr[0] = '\0';
		/* EXEC SQL SELECT OLDAPPLID INTO :oapplid
			FROM APPNT_HG3_FEE_INFO
			WHERE APPLID = :happlid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 25;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select OLDAPPLID into :b0  from APPNT_HG3_FEE_INFO where AP\
PLID=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )851;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&oapplid;
  sqlstm.sqhstl[0] = (unsigned int  )22;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&happlid;
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


	
		oapplid.arr[oapplid.len] = '\0';
		
		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(sqlca.sqlcode != 0)
		{
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : failed while select OLDAPPLID from APPNT_HG3_FEE_INFO :%s", sqlmsg);
			#endif
			strcpy(prog_log.remarks,"transaction_processing() failed while select SENDFLAG from APPNT_HG3_FEE_INFO");
			sprintf(excep_log.error_msg,"transaction_processing() failed while select SENDFLAG from APPNT_HG3_FEE_INFO:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			return SELECT_ERROR;
		}
		#ifdef DEBUG
			userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPNT_HG3_FEE_INFO");
		#endif


		if(oapplid.arr[0] == '\0')
		{
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : No record found for HG3 payment");
			#endif
			ret_code = 70002; 
			return ret_code;  // no record found for HG3 payment

		}
		else
		{
			/* EXEC SQL SELECT COUNT(*) INTO :acount
				FROM APPLICATION 
					WHERE APPLID = :oapplid
					AND APPLSTAT IN ('X','Q'); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 25;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select count(*)  into :b0  from APPLICATION where (APPLID=\
:b1 and APPLSTAT in ('X','Q'))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )874;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&acount;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&oapplid;
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
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : failed while select count from APPLICATION :%s", sqlmsg);
				#endif
				strcpy(prog_log.remarks,"transaction_processing() failed while select count from APPLICATION");
				sprintf(excep_log.error_msg,"transaction_processing() failed while select count from APPLICATION:%s ",sqlmsg);
				excep_log.termination_flag = 'Y';
				excep_log.severity = FATAL;
				log_error(ctx);

				return SELECT_ERROR;
			}
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPLICATION count: %d",acount);
			#endif


			if(acount == 0)
			{
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Application already approved");
				#endif
				ret_code = 70003; 
				return ret_code;  // application already approved
			}
			else
			{
				/* EXEC SQL SELECT TXNSERNO INTO :otxnserno FROM APPL_TXN
					WHERE APPLID = :oapplid 
						AND TXNCODE = '403'; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 25;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select TXNSERNO into :b0  from APPL_TXN where (APPLID=:b1\
 and TXNCODE='403')";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )897;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&otxnserno;
    sqlstm.sqhstl[0] = (unsigned int  )1;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&oapplid;
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
						userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : failed while select TXNSERNO from APPL_TXN :%s", sqlmsg);
					#endif
					strcpy(prog_log.remarks,"transaction_processing() failed while select TXNSERNO from APPL_TXN");
					sprintf(excep_log.error_msg,"transaction_processing() failed while select TXNSERNO from APPL_TXN:%s ",sqlmsg);
					excep_log.termination_flag = 'Y';
					excep_log.severity = FATAL;
					log_error(ctx);

					return SELECT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPL_TXN");
				#endif

				/* EXEC SQL SELECT ORIGAMT,AGENCYREVNCODE INTO :oorigamt,:oarcode
					FROM APPNT_HG3_FEE_INFO
						WHERE APPLID = :happlid; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 25;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select ORIGAMT ,AGENCYREVNCODE into :b0,:b1  from APPNT_H\
G3_FEE_INFO where APPLID=:b2";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )920;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&oorigamt;
    sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&oarcode;
    sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&happlid;
    sqlstm.sqhstl[2] = (unsigned int  )22;
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

				

				//oarcode.arr[oarcode.len] = '\0';

				sqlmsg[0] = '\0';
				strcpy(sqlmsg, SQLMSG);
				if(sqlca.sqlcode != 0)
				{
					#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : failed while select from APPNT_HG3_FEE_INFO :%s", sqlmsg);
					#endif
					strcpy(prog_log.remarks,"transaction_processing() failed while select from APPNT_HG3_FEE_INFO");
					sprintf(excep_log.error_msg,"transaction_processing() failed while select from APPNT_HG3_FEE_INFO:%s ",sqlmsg);
					excep_log.termination_flag = 'Y';
					excep_log.severity = FATAL;
					log_error(ctx);

					return SELECT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPNT_HG3_FEE_INFO");
				#endif


				// insert record into outstand_txn_fee
				/* EXEC SQL INSERT INTO OUTSTAND_TXN_FEE(
					APPLID, TXNSERNO, FEETYPE, FEEAMT, AGENCYREVNCODE)
					VALUES(:oapplid, :otxnserno, 'CF', :oorigamt, :oarcode); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 25;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into OUTSTAND_TXN_FEE (APPLID,TXNSERNO,FEETYPE,FEE\
AMT,AGENCYREVNCODE) values (:b0,:b1,'CF',:b2,:b3)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )947;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&oapplid;
    sqlstm.sqhstl[0] = (unsigned int  )22;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&otxnserno;
    sqlstm.sqhstl[1] = (unsigned int  )1;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&oorigamt;
    sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&oarcode;
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



					if(sqlca.sqlcode != 0)
					{
					#ifdef DEBUG
							userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Insert into OUTSTAND_TXN_FEE failed : %s", SQLMSG);
					#endif
							strcpy(prog_log.remarks,"transaction_processing() Insert into OUTSTAND_TXN_FEE failed ");
							sprintf(excep_log.error_msg, "transaction_processing() Insert into OUTSTAND_TXN_FEE failed : %s", SQLMSG);
							excep_log.termination_flag = YES;
							excep_log.severity = FATAL;

							log_error(ctx);
									
							return INSERT_ERROR;
					}
					#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record inserted into OUTSTAND_TXN_FEE");
					#endif


				// insert record into appl_txn
				/* EXEC SQL INSERT INTO APPL_TXN(
					APPLID, TXNSERNO, TXNCODE, TXNDATE, LEGTXNCODE)
					VALUES(
					:happlid,:txnserno, :txncode, SYSDATE, :legtxncode); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 25;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into APPL_TXN (APPLID,TXNSERNO,TXNCODE,TXNDATE,LEG\
TXNCODE) values (:b0,:b1,:b2,SYSDATE,:b3)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )978;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&happlid;
    sqlstm.sqhstl[0] = (unsigned int  )22;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&txnserno;
    sqlstm.sqhstl[1] = (unsigned int  )1;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&txncode;
    sqlstm.sqhstl[2] = (unsigned int  )6;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&legtxncode;
    sqlstm.sqhstl[3] = (unsigned int  )7;
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



					if(sqlca.sqlcode != 0)
					{
					#ifdef DEBUG
							userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Insert into APPL_TXN failed : %s", SQLMSG);
					#endif
							strcpy(prog_log.remarks,"transaction_processing() Insert into APPL_TXN failed ");
							sprintf(excep_log.error_msg, "transaction_processing() Insert into APPL_TXN failed : %s", SQLMSG);
							excep_log.termination_flag = YES;
							excep_log.severity = FATAL;

							log_error(ctx);
									
							return INSERT_ERROR;
					}
					#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record inserted into APPL_TXN");
					#endif


				// update payment_info table as reverse
				/* EXEC SQL UPDATE PAYMENT_INFO 
					SET RVRSFLAG = 'R',
					RVRSDATETIME = TO_DATE(:timestamp,'DDMMYYYY HH24MISS'),
					AUTHBYUSERID = :supvuid
					WHERE APPLID = :happlid; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 25;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "update PAYMENT_INFO  set RVRSFLAG='R',RVRSDATETIME=TO_DAT\
E(:b0,'DDMMYYYY HH24MISS'),AUTHBYUSERID=:b1 where APPLID=:b2";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1009;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&timestamp;
    sqlstm.sqhstl[0] = (unsigned int  )20;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&supvuid;
    sqlstm.sqhstl[1] = (unsigned int  )11;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&happlid;
    sqlstm.sqhstl[2] = (unsigned int  )22;
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



					if(sqlca.sqlcode != 0)
					{
					#ifdef DEBUG
							userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : update PAYMENT_INFO failed : %s", SQLMSG);
					#endif
							strcpy(prog_log.remarks,"transaction_processing() update PAYMENT_INFO failed ");
							sprintf(excep_log.error_msg, "transaction_processing() update PAYMENT_INFO failed : %s", SQLMSG);
							excep_log.termination_flag = YES;
							excep_log.severity = FATAL;

							log_error(ctx);
									
							return INSERT_ERROR;
					}
					#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record updated into PAYMENT_INFO");
					#endif


				// update supervisor_remarks table for reversal supervisor override
				/* EXEC SQL INSERT INTO SUPERVISOR_REMARKS(
					APPLID, PROBLSERNO, PROBLREASONCODE, FORMNAME, REMARKS, 
					USERID, WSID, TIMESTAMP)
					VALUES(
					:happlid, 1, :problreasoncode, :fname, :supvremarks, :userid,
					:wsid, TO_DATE(:timestamp,'DDMMYYYY HH24MISS')); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 25;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into SUPERVISOR_REMARKS (APPLID,PROBLSERNO,PROBLRE\
ASONCODE,FORMNAME,REMARKS,USERID,WSID, timestamp ) values (:b0,1,:b1,:b2,:b3,:\
b4,:b5,TO_DATE(:b6,'DDMMYYYY HH24MISS'))";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1036;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&happlid;
    sqlstm.sqhstl[0] = (unsigned int  )22;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&problreasoncode;
    sqlstm.sqhstl[1] = (unsigned int  )8;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&fname;
    sqlstm.sqhstl[2] = (unsigned int  )63;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&supvremarks;
    sqlstm.sqhstl[3] = (unsigned int  )153;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&userid;
    sqlstm.sqhstl[4] = (unsigned int  )11;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&wsid;
    sqlstm.sqhstl[5] = (unsigned int  )18;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&timestamp;
    sqlstm.sqhstl[6] = (unsigned int  )20;
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



					if(sqlca.sqlcode != 0)
					{
					#ifdef DEBUG
							userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Insert into SUPERVISOR_REMARKS failed : %s", SQLMSG);
					#endif
							strcpy(prog_log.remarks,"transaction_processing() Insert into SUPERVISOR_REMARKS failed ");
							sprintf(excep_log.error_msg, "transaction_processing() Insert into SUPERVISOR_REMARKS failed : %s", SQLMSG);
							excep_log.termination_flag = YES;
							excep_log.severity = FATAL;

							log_error(ctx);
									
							return INSERT_ERROR;
					}
					#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record inserted into SUPERVISOR_REMARKS");
					#endif


				// update payment indicator back to unpaid
				/* EXEC SQL UPDATE PROBL_RECORD SET
					GENKPT = 'U'
					WHERE APPLID = :oapplid
					AND PROBLREASONCODE = 'E0001'; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 25;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "update PROBL_RECORD  set GENKPT='U' where (APPLID=:b0 and\
 PROBLREASONCODE='E0001')";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1079;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&oapplid;
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

 //samsuri change from Q0001 to E0001

					if(sqlca.sqlcode != 0)
					{
					#ifdef DEBUG
							userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : update PROBL_RECORD failed : %s", SQLMSG);
					#endif
							strcpy(prog_log.remarks,"transaction_processing() update PROBL_RECORD failed ");
							sprintf(excep_log.error_msg, "transaction_processing() update PROBL_RECORD failed : %s", SQLMSG);
							excep_log.termination_flag = YES;
							excep_log.severity = FATAL;

							log_error(ctx);
									
							return INSERT_ERROR;
					}
					#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record updated into PROBL_RECORD");
					#endif


				// send payment unpaid indicator to GQD server
				sbcode.arr[0] = '\0';astat = '\0';
				/* EXEC SQL SELECT APPLSTAT, SSCBRANCHCODE INTO :astat,:sbcode
					FROM APPLICATION 
					WHERE APPLID = :oapplid; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 25;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select APPLSTAT ,SSCBRANCHCODE into :b0,:b1  from APPLICA\
TION where APPLID=:b2";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1098;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&astat;
    sqlstm.sqhstl[0] = (unsigned int  )1;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&sbcode;
    sqlstm.sqhstl[1] = (unsigned int  )9;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&oapplid;
    sqlstm.sqhstl[2] = (unsigned int  )22;
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



				sbcode.arr[sbcode.len] = '\0';

				sqlmsg[0] = '\0';
				strcpy(sqlmsg, SQLMSG);
				if(sqlca.sqlcode != 0)
				{
					#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : failed while select from APPLICATION :%s", sqlmsg);
					#endif
					strcpy(prog_log.remarks,"transaction_processing() failed while select from APPLICATION");
					sprintf(excep_log.error_msg,"transaction_processing() failed while select from APPLICATION:%s ",sqlmsg);
					excep_log.termination_flag = 'Y';
					excep_log.severity = FATAL;
					log_error(ctx);

					return SELECT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPLICATION");
				#endif


				if(astat == 'Q')
				{
					sflag = '\0';etype = '\0';
					/* EXEC SQL SELECT SENDFLAG, ENQTYPE INTO :sflag, :etype
						FROM APPNT_PROBL_DATA
						WHERE APPLID = :oapplid; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 25;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select SENDFLAG ,ENQTYPE into :b0,:b1  from APPNT_PROBL_\
DATA where APPLID=:b2";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )1125;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&sflag;
     sqlstm.sqhstl[0] = (unsigned int  )1;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&etype;
     sqlstm.sqhstl[1] = (unsigned int  )1;
     sqlstm.sqhsts[1] = (         int  )0;
     sqlstm.sqindv[1] = (         void  *)0;
     sqlstm.sqinds[1] = (         int  )0;
     sqlstm.sqharm[1] = (unsigned int  )0;
     sqlstm.sqadto[1] = (unsigned short )0;
     sqlstm.sqtdso[1] = (unsigned short )0;
     sqlstm.sqhstv[2] = (         void  *)&oapplid;
     sqlstm.sqhstl[2] = (unsigned int  )22;
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



						if(sqlca.sqlcode != 0)
						{
						#ifdef DEBUG
								userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : select SENDFLAG, ENQTYPE from APPNT_PROBL_DATA failed : %s", SQLMSG);
						#endif
								strcpy(prog_log.remarks,"transaction_processing() select SENDFLAG, ENQTYPE from APPNT_PROBL_DATA failed ");
								sprintf(excep_log.error_msg, "transaction_processing() select SENDFLAG, ENQTYPE from APPNT_PROBL_DATA failed : %s", SQLMSG);
								excep_log.termination_flag = YES;
								excep_log.severity = FATAL;

								log_error(ctx);
										
								return INSERT_ERROR;
						}
						#ifdef DEBUG
							userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record selected from APPNT_PROBL_DATA");
						#endif

					if((sflag == '\0') && (etype == '\0'))  // no record found
					{
						/* EXEC SQL INSERT INTO APPNT_PROBL_DATA(
							APPLID, SSCBRANCHCODE, SENDFLAG, TIMESTAMP, ENQTYPE)
							VALUES(
							:oapplid, :sbcode, 'N', SYSDATE, 'P'); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 12;
      sqlstm.arrsiz = 25;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into APPNT_PROBL_DATA (APPLID,SSCBRANCHCODE,SEND\
FLAG, timestamp ,ENQTYPE) values (:b0,:b1,'N',SYSDATE,'P')";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1152;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&oapplid;
      sqlstm.sqhstl[0] = (unsigned int  )22;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&sbcode;
      sqlstm.sqhstl[1] = (unsigned int  )9;
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



							if(sqlca.sqlcode != 0)
							{
							#ifdef DEBUG
									userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Insert into APPNT_PROBL_DATA failed(R) : %s", SQLMSG);
							#endif
									strcpy(prog_log.remarks,"transaction_processing() Insert into APPNT_PROBL_DATA failed ");
									sprintf(excep_log.error_msg, "transaction_processing() Insert into APPNT_PROBL_DATA failed : %s", SQLMSG);
									excep_log.termination_flag = YES;
									excep_log.severity = FATAL;

									log_error(ctx);
											
									return INSERT_ERROR;
							}
							#ifdef DEBUG
								userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record inserted into APPNT_PROBL_DATA");
							#endif
					}
					else
					{
						// record exists in appnt_probl_data
						// payment update to GQD  not success yet so no need to 
						// to send the reversal flag to GQD

						if(((sflag == 'N') || (sflag == 'F')) && (etype == 'P'))
						{
							/* EXEC SQL UPDATE APPNT_PROBL_DATA SET
								SENDFLAG = 'Y'
								WHERE APPLID = :oapplid
								AND ENQTYPE = 'P'; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 12;
       sqlstm.arrsiz = 25;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.stmt = "update APPNT_PROBL_DATA  set SENDFLAG='Y' where (APPLI\
D=:b0 and ENQTYPE='P')";
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )1175;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)&oapplid;
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



								if(sqlca.sqlcode != 0)
								{
								#ifdef DEBUG
										userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : update APPNT_PROBL_DATA failed : %s", SQLMSG);
								#endif
										strcpy(prog_log.remarks,"transaction_processing() update APPNT_PROBL_DATA failed ");
										sprintf(excep_log.error_msg, "transaction_processing() update APPNT_PROBL_DATA failed : %s", SQLMSG);
										excep_log.termination_flag = YES;
										excep_log.severity = FATAL;

										log_error(ctx);
												
										return INSERT_ERROR;
								}
								#ifdef DEBUG
									userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record updated into APPNT_PROBL_DATA(Y)");
								#endif

						}

						if(sflag == 'Y')
						{					
							
							/* EXEC SQL UPDATE APPNT_PROBL_DATA SET
								SENDFLAG = 'N'
								WHERE APPLID = :oapplid
								AND ENQTYPE = 'P'; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 12;
       sqlstm.arrsiz = 25;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.stmt = "update APPNT_PROBL_DATA  set SENDFLAG='N' where (APPLI\
D=:b0 and ENQTYPE='P')";
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )1194;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)256;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)&oapplid;
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



								if(sqlca.sqlcode != 0)
								{
								#ifdef DEBUG
										userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : update APPNT_PROBL_DATA failed : %s", SQLMSG);
								#endif
										strcpy(prog_log.remarks,"transaction_processing() update APPNT_PROBL_DATA failed ");
										sprintf(excep_log.error_msg, "transaction_processing() update APPNT_PROBL_DATA failed : %s", SQLMSG);
										excep_log.termination_flag = YES;
										excep_log.severity = FATAL;

										log_error(ctx);
												
										return INSERT_ERROR;
								}
								#ifdef DEBUG
									userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Record updated into APPNT_PROBL_DATA(N)");
								#endif							
							
						}
					}
				}
			}

			#ifdef DEBUG
				userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : Reversal successful");
			#endif
		ret_code = 0;
		return ret_code;  // reversal success
		}

	} // end of txncode loop	
	

	#ifdef DEBUG
		userlog("JPNHG3_PYMT_REV_UPD L1 (transaction_processing) : max applid after select: %s",applid.arr);		
	#endif

	if(hv_gUser2.arr[0] != '\0')
	{

	}

	return SUCCESS;
}

