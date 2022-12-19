
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
            void  *sqhstv[16];
   unsigned int   sqhstl[16];
            int   sqhsts[16];
            void  *sqindv[16];
            int   sqinds[16];
   unsigned int   sqharm[16];
   unsigned int   *sqharc[16];
   unsigned short  sqadto[16];
   unsigned short  sqtdso[16];
} sqlstm = {12,16};

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
5,0,0,1,67,0,4,335,0,0,2,1,0,1,0,2,3,0,0,1,9,0,0,
28,0,0,2,203,0,4,362,0,0,8,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,2,3,0,0,1,9,0,0,
75,0,0,3,278,0,3,405,0,0,16,16,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,4,0,0,1,4,0,0,1,
3,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,3,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,
154,0,0,4,98,0,3,433,0,0,4,4,0,1,0,1,9,0,0,1,1,0,0,1,9,0,0,1,9,0,0,
185,0,0,5,102,0,3,457,0,0,4,4,0,1,0,1,9,0,0,1,1,0,0,1,4,0,0,1,3,0,0,
216,0,0,6,141,0,3,485,0,0,5,5,0,1,0,1,9,0,0,1,1,0,0,1,4,0,0,1,4,0,0,1,3,0,0,
251,0,0,7,141,0,3,513,0,0,5,5,0,1,0,1,9,0,0,1,1,0,0,1,4,0,0,1,4,0,0,1,3,0,0,
286,0,0,8,175,0,3,543,0,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,
329,0,0,9,82,0,5,570,0,0,1,1,0,1,0,1,9,0,0,
348,0,0,10,151,0,2,593,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
371,0,0,11,78,0,4,620,0,0,3,1,0,1,0,2,1,0,0,2,9,0,0,1,9,0,0,
398,0,0,12,64,0,4,649,0,0,2,1,0,1,0,2,1,0,0,1,9,0,0,
421,0,0,13,113,0,3,676,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
444,0,0,14,47,0,2,704,0,0,1,1,0,1,0,1,9,0,0,
463,0,0,15,113,0,3,726,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
486,0,0,16,67,0,4,773,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
509,0,0,17,88,0,4,810,0,0,2,1,0,1,0,2,3,0,0,1,9,0,0,
532,0,0,18,76,0,4,845,0,0,2,1,0,1,0,2,1,0,0,1,9,0,0,
555,0,0,19,85,0,4,868,0,0,3,1,0,1,0,2,4,0,0,2,3,0,0,1,9,0,0,
582,0,0,20,106,0,3,895,0,0,4,4,0,1,0,1,9,0,0,1,1,0,0,1,4,0,0,1,3,0,0,
613,0,0,21,98,0,3,919,0,0,4,4,0,1,0,1,9,0,0,1,1,0,0,1,9,0,0,1,9,0,0,
644,0,0,22,117,0,5,944,0,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
671,0,0,23,175,0,3,970,0,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,
714,0,0,24,82,0,5,997,0,0,1,1,0,1,0,1,9,0,0,
733,0,0,25,78,0,4,1023,0,0,3,1,0,1,0,2,1,0,0,2,9,0,0,1,9,0,0,
760,0,0,26,77,0,4,1052,0,0,3,1,0,1,0,2,1,0,0,2,1,0,0,1,9,0,0,
787,0,0,27,113,0,3,1076,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
810,0,0,28,76,0,5,1107,0,0,1,1,0,1,0,1,9,0,0,
829,0,0,29,76,0,5,1135,0,0,1,1,0,1,0,1,9,0,0,
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

	#ifdef DEBUG
			userlog("JPNHG3_PYMT_REV_UPD : req->header.application_id:%s:",req->header.application_id);
			userlog("JPNHG3_PYMT_REV_UPD : req->header.branch_code:%s:", req->header.branch_code);
			userlog("JPNHG3_PYMT_REV_UPD : req->header.service_id:%d:", req->header.service_id);
			userlog("JPNHG3_PYMT_REV_UPD : req->header.user_id:%s:", req->header.user_id);
			userlog("JPNHG3_PYMT_REV_UPD : req->header.workstation_id:%s:", req->header.workstation_id);
			userlog("JPNHG3_PYMT_REV_UPD : req->applid:%s:",req->applid);			
			userlog("JPNHG3_PYMT_REV_UPD : req->oldapplid:%s:",req->oldapplid);
			userlog("JPNHG3_PYMT_REV_UPD : req->kptno:%s:",req->kptno);
			userlog("JPNHG3_PYMT_REV_UPD : req->origamt:%.2f:",req->origamt);
			userlog("JPNHG3_PYMT_REV_UPD : req->paidamt:%.2f:",req->paidamt);
			userlog("JPNHG3_PYMT_REV_UPD : req->txncode:%s:",req->txncode);
			userlog("JPNHG3_PYMT_REV_UPD : req->legtxncode:%s:",req->legtxncode);
			userlog("JPNHG3_PYMT_REV_UPD : req->txnserno:%c:",req->txnserno);
			userlog("JPNHG3_PYMT_REV_UPD : req->agencyrevncode:%d:",req->agencyrevncode);
			userlog("JPNHG3_PYMT_REV_UPD : req->supvuid:%s:",req->supvuid);
			userlog("JPNHG3_PYMT_REV_UPD : req->supvremarks:%s:",req->supvremarks);
			userlog("JPNHG3_PYMT_REV_UPD : req->problreasoncode:%s:",req->problreasoncode);
			userlog("JPNHG3_PYMT_REV_UPD : req->formname:%s:",req->formname);
			userlog("JPNHG3_PYMT_REV_UPD : req->userid:%s:",req->userid);
			userlog("JPNHG3_PYMT_REV_UPD : req->wsid:%s:",req->wsid);
			userlog("JPNHG3_PYMT_REV_UPD : req->timestamp:%s:",req->timestamp);
			userlog("JPNHG3_PYMT_REV_UPD : req->indicator1:%s:",req->indicator1);
			userlog("JPNHG3_PYMT_REV_UPD : req->indicator2:%s:",req->indicator2);
	#endif


	resp->header = req->header;
			
	if((ret_val = check_header(req->header,ctx)) != SUCCESS)
	{
	#ifdef DEBUG
			userlog("JPNHG3_PYMT_REV_UPD : check header failed");
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
			userlog("JPNHG3_PYMT_REV_UPD :check header Successful");
	#endif

	

	#ifdef DEBUG
		userlog("JPNHG3_PYMT_REV_UPD :");		
	#endif
	
	
	#ifdef DEBUG
		userlog("JPNHG3_PYMT_REV_UPD :Before the enq_processing function");
	#endif

		
		if(SUCCESS != gscbbegin_trans(ctx))
		{
			userlog("JPNHG3_PYMT_REV_UPD : Begin transaction failed!!");
		
			*pRespSize = resp_len;			
			*pResp = resp;
			return END_TRAN_ERROR;
		}
		
		/* transaction processing function */		
		ret_val = transaction_processing(req,resp,ctx);
		if(ret_val != SUCCESS)
		{
		#ifdef DEBUG
			userlog("JPNHG3_PYMT_REV_UPD :enq_processing function failed");
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
				userlog("JPNHG3_PYMT_REV_UPD : Commit transaction failed!!");
			
				*pRespSize = resp_len;			
				*pResp = resp;
				return END_TRAN_ERROR;
			}
		}

	#ifdef DEBUG
		userlog(" ");
		userlog("JPNHG3_PYMT_REV_UPD :Service Completed");
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
	

	#ifdef DEBUG
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : req->applid: %s",req->applid);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : applid: %s",applid.arr);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : req->oldapplid: %s",req->oldapplid);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : oldapplid: %s",oldapplid.arr);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : req->kptno: %s",req->kptno);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : kptno: %s",kptno.arr);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : req->txncode: %s",req->txncode);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : txncode: %s",txncode.arr);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : origamt: %.2f",origamt);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : paidamt: %.2f",paidamt);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : legtxncode: %s",legtxncode.arr);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : txnserno: %c",txnserno);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : agencyrevncode: %d",arcode);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : supvuid: %s",supvuid.arr);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : supvremarks: %s",supvremarks.arr);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : problreasoncode: %s",problreasoncode.arr);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : formname: %s",fname.arr);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : userid: %s",userid.arr);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : wsid: %s",wsid.arr);
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : timestamp: %s",timestamp.arr);
	#endif

	if(strncmp(txncode.arr,"919",3) == 0)  // This is payment update
	{
		pcount= 0;
		/* EXEC SQL SELECT COUNT(*) INTO :pcount 
			FROM APPNT_HG3_FEE_INFO
				WHERE APPLID = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 2;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPNT_HG3_FEE_INFO where AP\
PLID=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )5;
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
				userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : failed while select count from APPNT_HG3_FEE_INFO");
			#endif
			strcpy(prog_log.remarks,"transaction_processing() failed while select count from APPNT_HG3_FEE_INFO");
			sprintf(excep_log.error_msg,"transaction_processing() failed while select count from APPNT_HG3_FEE_INFO:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			return SELECT_ERROR;
		}
		#ifdef DEBUG
			userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPNT_HG3_FEE_INFO, pcount : %d",pcount);
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
   sqlstm.arrsiz = 8;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select ((((GMPCSHORTNAME1||' ')||GMPCSHORTNAME2)||' ')||GM\
PCSHORTNAME3) ,ADDRESS1 ,ADDRESS2 ,ADDRESS3 ,POSTCODE ,STATECODE ,CITYCODE int\
o :b0,:b1,:b2,:b3,:b4,:b5,:b6  from APPNT_JPN_INFO where APPLID=:b7";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )28;
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
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : After SELECT FROM APPNT_JPN_INFO, sqlca.sqlcode : %d",sqlca.sqlcode);
				#endif
				sqlmsg[0] = '\0';
				strcpy(sqlmsg, SQLMSG);
				if(sqlca.sqlcode != 0)
				{
					#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD  : transaction_processing() failed while select gmpcshortname1,2,3 from APPNT_JPN_INFO");
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
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPNT_JPN_INFO, name :%s:",name.arr);
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPNT_JPN_INFO, address1 :%s:",address1.arr);
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPNT_JPN_INFO, address2 :%s:",address2.arr);
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPNT_JPN_INFO, address3 :%s:",address3.arr);
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPNT_JPN_INFO, postcode :%s:",postcode.arr);
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPNT_JPN_INFO, statecode :%s:",statecode.arr);
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPNT_JPN_INFO, citycode :%d:",citycode);
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPNT_JPN_INFO, userid :%s:",userid.arr);
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPNT_JPN_INFO, wsid :%s:",wsid.arr);
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPNT_JPN_INFO, timestamp :%s:",timestamp.arr);
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
   sqlstm.arrsiz = 16;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPNT_HG3_FEE_INFO (APPLID,OLDAPPLID,KPTNO,ORI\
GAMT,PAIDAMT,AGENCYREVNCODE,NAME,ADDRESS1,ADDRESS2,ADDRESS3,POSTCODE,STATECODE\
,CITYCODE,USERID,WSID, timestamp ) values (:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8\
,:b9,:b10,:b11,:b12,:b13,:b14,TO_DATE(:b15,'DDMMYYYY HH24MISS'))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )75;
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
						userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Insert into APPNT_HG3_FEE_INFO failed : %s", SQLMSG);
				#endif
						strcpy(prog_log.remarks,"transaction_processing() Insert into APPNT_HG3_FEE_INFO failed ");
						sprintf(excep_log.error_msg, "transaction_processing() Insert into APPNT_HG3_FEE_INFO failed : %s", SQLMSG);
						excep_log.termination_flag = YES;
						excep_log.severity = FATAL;

						log_error(ctx);
								
						return INSERT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record inserted into APPNT_HG3_FEE_INFO");
				#endif


			/* EXEC SQL INSERT INTO APPL_TXN(
				APPLID, TXNSERNO, TXNCODE, TXNDATE, LEGTXNCODE) 
					VALUES (
						:applid, :txnserno, :txncode, SYSDATE, :legtxncode); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 16;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPL_TXN (APPLID,TXNSERNO,TXNCODE,TXNDATE,LEGT\
XNCODE) values (:b0,:b1,:b2,SYSDATE,:b3)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )154;
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
						userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Insert into APPL_TXN failed : %s", SQLMSG);
				#endif
						strcpy(prog_log.remarks,"transaction_processing() Insert into APPL_TXN failed ");
						sprintf(excep_log.error_msg, "transaction_processing() Insert into APPL_TXN failed : %s", SQLMSG);
						excep_log.termination_flag = YES;
						excep_log.severity = FATAL;

						log_error(ctx);
								
						return INSERT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record inserted into APPL_TXN");
				#endif


			/* EXEC SQL INSERT INTO APPL_TXN_FEE(
				APPLID, TXNSERNO, FEETYPE, FEEAMT, AGENCYREVNCODE) 
					VALUES (
						:applid, :txnserno, 'CF', :paidamt, :arcode); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 16;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPL_TXN_FEE (APPLID,TXNSERNO,FEETYPE,FEEAMT,A\
GENCYREVNCODE) values (:b0,:b1,'CF',:b2,:b3)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )185;
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
						userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Insert into APPL_TXN_FEE failed : %s", SQLMSG);
				#endif
						strcpy(prog_log.remarks,"transaction_processing() Insert into APPL_TXN_FEE failed ");
						sprintf(excep_log.error_msg, "transaction_processing() Insert into APPL_TXN_FEE failed : %s", SQLMSG);
						excep_log.termination_flag = YES;
						excep_log.severity = FATAL;

						log_error(ctx);
								
						return INSERT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record inserted into APPL_TXN_FEE");
				#endif



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
    sqlstm.arrsiz = 16;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into APPL_FEE_REDUCTION (APPLID,TXNSERNO,FEETYPE,O\
RIGFEEAMT,FEEAMT,AGENCYREVNCODE,REDUCTIONTYPE) values (:b0,:b1,'CF',:b2,:b3,:b\
4,'W')";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )216;
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
						userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Insert into APPL_FEE_REDUCTION failed(W) : %s", SQLMSG);
				#endif
						strcpy(prog_log.remarks,"transaction_processing() Insert into APPL_FEE_REDUCTION failed ");
						sprintf(excep_log.error_msg, "transaction_processing() Insert into APPL_FEE_REDUCTION failed : %s", SQLMSG);
						excep_log.termination_flag = YES;
						excep_log.severity = FATAL;

						log_error(ctx);
								
						return INSERT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record inserted into APPL_FEE_REDUCTION(W)");
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
    sqlstm.arrsiz = 16;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into APPL_FEE_REDUCTION (APPLID,TXNSERNO,FEETYPE,O\
RIGFEEAMT,FEEAMT,AGENCYREVNCODE,REDUCTIONTYPE) values (:b0,:b1,'CF',:b2,:b3,:b\
4,'R')";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )251;
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
						userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Insert into APPL_FEE_REDUCTION failed(R) : %s", SQLMSG);
				#endif
						strcpy(prog_log.remarks,"transaction_processing() Insert into APPL_FEE_REDUCTION failed ");
						sprintf(excep_log.error_msg, "transaction_processing() Insert into APPL_FEE_REDUCTION failed : %s", SQLMSG);
						excep_log.termination_flag = YES;
						excep_log.severity = FATAL;

						log_error(ctx);
								
						return INSERT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record inserted into APPL_FEE_REDUCTION(R)");
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
    sqlstm.arrsiz = 16;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into SUPERVISOR_REMARKS (APPLID,PROBLSERNO,PROBLRE\
ASONCODE,FORMNAME,REMARKS,USERID,WSID, timestamp ) values (:b0,1,:b1,:b2,:b3,:\
b4,:b5,TO_DATE(:b6,'DDMMYYYY HH24MISS'))";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )286;
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
						userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Insert into SUPERVISOR_REMARKS failed : %s", SQLMSG);
				#endif
						strcpy(prog_log.remarks,"transaction_processing() Insert into SUPERVISOR_REMARKS failed ");
						sprintf(excep_log.error_msg, "transaction_processing() Insert into SUPERVISOR_REMARKS failed : %s", SQLMSG);
						excep_log.termination_flag = YES;
						excep_log.severity = FATAL;

						log_error(ctx);
								
						return INSERT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record inserted into SUPERVISOR_REMARKS");
				#endif

			}

			// to update payment indicator as 'paid'
			/* EXEC SQL UPDATE PROBL_RECORD SET GENKPT = 'P'
				WHERE APPLID = :oldapplid AND PROBLREASONCODE = 'Q0001'; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 16;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update PROBL_RECORD  set GENKPT='P' where (APPLID=:b0 and \
PROBLREASONCODE='Q0001')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )329;
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



			if (SQLCODE != 0 && SQLCODE != 1403)
			{
			#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : UPDATE on PROBL_RECORD failed : %s", SQLMSG);
			#endif
					strcpy(prog_log.remarks,"JPNHG3_PYMT_REV_UPD  : transaction_processing() UPDATE on PROBL_RECORD failed ");
					sprintf(excep_log.error_msg, "JPNHG3_PYMT_REV_UPD  : transaction_processing() UPDATE on PROBL_RECORD failed : %s", SQLMSG);
					excep_log.termination_flag = YES;
					excep_log.severity = FATAL;

					log_error(ctx);
							
					return DELETE_ERROR;
			}
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record UPDATED on PROBL_RECORD - %d", SQLCODE);
			#endif


			// to remove any outstanding fee
			/* EXEC SQL DELETE FROM OUTSTAND_TXN_FEE
				WHERE APPLID = :oldapplid
				AND FEETYPE = 'CF'
				AND TXNSERNO = (
				SELECT TXNSERNO FROM APPL_TXN WHERE APPLID = :oldapplid AND TXNCODE = '403'
				); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 16;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "delete  from OUTSTAND_TXN_FEE  where ((APPLID=:b0 and FEET\
YPE='CF') and TXNSERNO=(select TXNSERNO  from APPL_TXN where (APPLID=:b0 and T\
XNCODE='403')))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )348;
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



			if(SQLCODE != 0)
			{
			#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Deletion on OUTSTAND_TXN_FEE failed : %s", SQLMSG);
			#endif
					strcpy(prog_log.remarks,"JPNHG3_PYMT_REV_UPD  : transaction_processing() Deletion on OUTSTAND_TXN_FEE failed ");
					sprintf(excep_log.error_msg, "JPNHG3_PYMT_REV_UPD  : transaction_processing() Deletion on OUTSTAND_TXN_FEE failed : %s", SQLMSG);
					excep_log.termination_flag = YES;
					excep_log.severity = FATAL;

					log_error(ctx);
							
					return DELETE_ERROR;
			}
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record deleted from OUTSTAND_TXN_FEE - %d", SQLCODE);
			#endif


			// to send payment 'paid' indicator to GQD server
				/* EXEC SQL SELECT APPLSTAT,SSCBRANCHCODE INTO :astat,:sbcode FROM APPLICATION 
				WHERE APPLID = :oldapplid; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 16;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select APPLSTAT ,SSCBRANCHCODE into :b0,:b1  from APPLICA\
TION where APPLID=:b2";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )371;
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
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : failed while select sscbranchcode from APPLICATION :%s", sqlmsg);
				#endif
				strcpy(prog_log.remarks,"transaction_processing() failed while select sscbranchcode from APPLICATION");
				sprintf(excep_log.error_msg,"transaction_processing() failed while select sscbranchcode from APPLICATION:%s ",sqlmsg);
				excep_log.termination_flag = 'Y';
				excep_log.severity = FATAL;
				log_error(ctx);

				return SELECT_ERROR;
			}
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPLICATION");
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
    sqlstm.arrsiz = 16;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select SENDFLAG into :b0  from APPNT_PROBL_DATA where APP\
LID=:b1";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )398;
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
						userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : failed while select SENDFLAG from APPNT_PROBL_DATA :%s", sqlmsg);
					#endif
					strcpy(prog_log.remarks,"transaction_processing() failed while select SENDFLAG from APPNT_PROBL_DATA");
					sprintf(excep_log.error_msg,"transaction_processing() failed while select SENDFLAG from APPNT_PROBL_DATA:%s ",sqlmsg);
					//excep_log.termination_flag = 'Y';
					//excep_log.severity = FATAL;
					//log_error(ctx);

					//return SELECT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPNT_PROBL_DATA");
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
     sqlstm.arrsiz = 16;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "insert into APPNT_PROBL_DATA (APPLID,SSCBRANCHCODE,SENDF\
LAG, timestamp ,ENQTYPE) values (:b0,:b1,'N',SYSDATE,'P')";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )421;
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
							userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Insert into APPNT_PROBL_DATA failed(if) : %s", SQLMSG);
					#endif
							strcpy(prog_log.remarks,"transaction_processing() Insert into APPNT_PROBL_DATA failed ");
							sprintf(excep_log.error_msg, "transaction_processing() Insert into APPNT_PROBL_DATA failed : %s", SQLMSG);
							excep_log.termination_flag = YES;
							excep_log.severity = FATAL;

							log_error(ctx);
									
							return INSERT_ERROR;
					}
					#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record inserted into APPNT_PROBL_DATA");
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
      sqlstm.arrsiz = 16;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "delete  from APPNT_PROBL_DATA  where APPLID=:b0";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )444;
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
								userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Deletion on OUTSTAND_TXN_FEE failed : %s", SQLMSG);
						#endif
								strcpy(prog_log.remarks,"JPNHG3_PYMT_REV_UPD  : transaction_processing() Deletion on OUTSTAND_TXN_FEE failed ");
								sprintf(excep_log.error_msg, "JPNHG3_PYMT_REV_UPD  : transaction_processing() Deletion on OUTSTAND_TXN_FEE failed : %s", SQLMSG);
								excep_log.termination_flag = YES;
								excep_log.severity = FATAL;

								log_error(ctx);
										
								return DELETE_ERROR;
						}
						#ifdef DEBUG
							userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record deleted from OUTSTAND_TXN_FEE - %d", SQLCODE);
						#endif


						/* EXEC SQL INSERT INTO APPNT_PROBL_DATA(
						APPLID, SSCBRANCHCODE, SENDFLAG, TIMESTAMP, ENQTYPE)
						VALUES(
						:oldapplid, :sbcode, 'N', SYSDATE, 'P'); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 12;
      sqlstm.arrsiz = 16;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into APPNT_PROBL_DATA (APPLID,SSCBRANCHCODE,SEND\
FLAG, timestamp ,ENQTYPE) values (:b0,:b1,'N',SYSDATE,'P')";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )463;
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
								userlog("JPNHG3_PYMT_REV_UPD  : transaction_processing() Insert into APPNT_PROBL_DATA failed(else) : %s", SQLMSG);
						#endif
								strcpy(prog_log.remarks,"transaction_processing() Insert into APPNT_PROBL_DATA failed ");
								sprintf(excep_log.error_msg, "transaction_processing() Insert into APPNT_PROBL_DATA failed : %s", SQLMSG);
								excep_log.termination_flag = YES;
								excep_log.severity = FATAL;

								log_error(ctx);
										
								return INSERT_ERROR;
						}
						#ifdef DEBUG
							userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record inserted into APPNT_PROBL_DATA");
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
	else if(strncmp(txncode.arr,"920",3) == 0) // This is Payment Reversal
	{
		strcpy((char*)happlid.arr,req->header.application_id);		
		setlen(happlid);
			#ifdef DEBUG		
				userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : happlid: %s",happlid.arr);
			#endif

		oapplid.arr[0] = '\0';
		/* EXEC SQL SELECT OLDAPPLID INTO :oapplid
			FROM APPNT_HG3_FEE_INFO
			WHERE APPLID = :happlid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 16;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select OLDAPPLID into :b0  from APPNT_HG3_FEE_INFO where AP\
PLID=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )486;
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
				userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : failed while select OLDAPPLID from APPNT_HG3_FEE_INFO :%s", sqlmsg);
			#endif
			strcpy(prog_log.remarks,"transaction_processing() failed while select SENDFLAG from APPNT_HG3_FEE_INFO");
			sprintf(excep_log.error_msg,"transaction_processing() failed while select SENDFLAG from APPNT_HG3_FEE_INFO:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			return SELECT_ERROR;
		}
		#ifdef DEBUG
			userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPNT_HG3_FEE_INFO");
		#endif


		if(oapplid.arr[0] == '\0')
		{
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : No record found for HG3 payment");
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
   sqlstm.arrsiz = 16;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select count(*)  into :b0  from APPLICATION where (APPLID=\
:b1 and APPLSTAT in ('X','Q'))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )509;
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
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : failed while select count from APPLICATION :%s", sqlmsg);
				#endif
				strcpy(prog_log.remarks,"transaction_processing() failed while select count from APPLICATION");
				sprintf(excep_log.error_msg,"transaction_processing() failed while select count from APPLICATION:%s ",sqlmsg);
				excep_log.termination_flag = 'Y';
				excep_log.severity = FATAL;
				log_error(ctx);

				return SELECT_ERROR;
			}
			#ifdef DEBUG
				userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPLICATION count: %d",acount);
			#endif


			if(acount == 0)
			{
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Application already approved");
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
    sqlstm.arrsiz = 16;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select TXNSERNO into :b0  from APPL_TXN where (APPLID=:b1\
 and TXNCODE='403')";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )532;
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
						userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : failed while select TXNSERNO from APPL_TXN :%s", sqlmsg);
					#endif
					strcpy(prog_log.remarks,"transaction_processing() failed while select TXNSERNO from APPL_TXN");
					sprintf(excep_log.error_msg,"transaction_processing() failed while select TXNSERNO from APPL_TXN:%s ",sqlmsg);
					excep_log.termination_flag = 'Y';
					excep_log.severity = FATAL;
					log_error(ctx);

					return SELECT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPL_TXN");
				#endif

				/* EXEC SQL SELECT ORIGAMT,AGENCYREVNCODE INTO :oorigamt,:oarcode
					FROM APPNT_HG3_FEE_INFO
						WHERE APPLID = :happlid; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 16;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select ORIGAMT ,AGENCYREVNCODE into :b0,:b1  from APPNT_H\
G3_FEE_INFO where APPLID=:b2";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )555;
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
						userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : failed while select from APPNT_HG3_FEE_INFO :%s", sqlmsg);
					#endif
					strcpy(prog_log.remarks,"transaction_processing() failed while select from APPNT_HG3_FEE_INFO");
					sprintf(excep_log.error_msg,"transaction_processing() failed while select from APPNT_HG3_FEE_INFO:%s ",sqlmsg);
					excep_log.termination_flag = 'Y';
					excep_log.severity = FATAL;
					log_error(ctx);

					return SELECT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPNT_HG3_FEE_INFO");
				#endif


				// insert record into outstand_txn_fee
				/* EXEC SQL INSERT INTO OUTSTAND_TXN_FEE(
					APPLID, TXNSERNO, FEETYPE, FEEAMT, AGENCYREVNCODE)
					VALUES(:oapplid, :otxnserno, 'CF', :oorigamt, :oarcode); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 16;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into OUTSTAND_TXN_FEE (APPLID,TXNSERNO,FEETYPE,FEE\
AMT,AGENCYREVNCODE) values (:b0,:b1,'CF',:b2,:b3)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )582;
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
							userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Insert into OUTSTAND_TXN_FEE failed : %s", SQLMSG);
					#endif
							strcpy(prog_log.remarks,"transaction_processing() Insert into OUTSTAND_TXN_FEE failed ");
							sprintf(excep_log.error_msg, "transaction_processing() Insert into OUTSTAND_TXN_FEE failed : %s", SQLMSG);
							excep_log.termination_flag = YES;
							excep_log.severity = FATAL;

							log_error(ctx);
									
							return INSERT_ERROR;
					}
					#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record inserted into OUTSTAND_TXN_FEE");
					#endif


				// insert record into appl_txn
				/* EXEC SQL INSERT INTO APPL_TXN(
					APPLID, TXNSERNO, TXNCODE, TXNDATE, LEGTXNCODE)
					VALUES(
					:happlid,:txnserno, :txncode, SYSDATE, :legtxncode); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 16;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into APPL_TXN (APPLID,TXNSERNO,TXNCODE,TXNDATE,LEG\
TXNCODE) values (:b0,:b1,:b2,SYSDATE,:b3)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )613;
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
							userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Insert into APPL_TXN failed : %s", SQLMSG);
					#endif
							strcpy(prog_log.remarks,"transaction_processing() Insert into APPL_TXN failed ");
							sprintf(excep_log.error_msg, "transaction_processing() Insert into APPL_TXN failed : %s", SQLMSG);
							excep_log.termination_flag = YES;
							excep_log.severity = FATAL;

							log_error(ctx);
									
							return INSERT_ERROR;
					}
					#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record inserted into APPL_TXN");
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
    sqlstm.arrsiz = 16;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "update PAYMENT_INFO  set RVRSFLAG='R',RVRSDATETIME=TO_DAT\
E(:b0,'DDMMYYYY HH24MISS'),AUTHBYUSERID=:b1 where APPLID=:b2";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )644;
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
							userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : update PAYMENT_INFO failed : %s", SQLMSG);
					#endif
							strcpy(prog_log.remarks,"transaction_processing() update PAYMENT_INFO failed ");
							sprintf(excep_log.error_msg, "transaction_processing() update PAYMENT_INFO failed : %s", SQLMSG);
							excep_log.termination_flag = YES;
							excep_log.severity = FATAL;

							log_error(ctx);
									
							return INSERT_ERROR;
					}
					#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record updated into PAYMENT_INFO");
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
    sqlstm.arrsiz = 16;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into SUPERVISOR_REMARKS (APPLID,PROBLSERNO,PROBLRE\
ASONCODE,FORMNAME,REMARKS,USERID,WSID, timestamp ) values (:b0,1,:b1,:b2,:b3,:\
b4,:b5,TO_DATE(:b6,'DDMMYYYY HH24MISS'))";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )671;
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
							userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Insert into SUPERVISOR_REMARKS failed : %s", SQLMSG);
					#endif
							strcpy(prog_log.remarks,"transaction_processing() Insert into SUPERVISOR_REMARKS failed ");
							sprintf(excep_log.error_msg, "transaction_processing() Insert into SUPERVISOR_REMARKS failed : %s", SQLMSG);
							excep_log.termination_flag = YES;
							excep_log.severity = FATAL;

							log_error(ctx);
									
							return INSERT_ERROR;
					}
					#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record inserted into SUPERVISOR_REMARKS");
					#endif


				// update payment indicator back to unpaid
				/* EXEC SQL UPDATE PROBL_RECORD SET
					GENKPT = 'U'
					WHERE APPLID = :oapplid
					AND PROBLREASONCODE = 'Q0001'; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 16;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "update PROBL_RECORD  set GENKPT='U' where (APPLID=:b0 and\
 PROBLREASONCODE='Q0001')";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )714;
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
							userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : update PROBL_RECORD failed : %s", SQLMSG);
					#endif
							strcpy(prog_log.remarks,"transaction_processing() update PROBL_RECORD failed ");
							sprintf(excep_log.error_msg, "transaction_processing() update PROBL_RECORD failed : %s", SQLMSG);
							excep_log.termination_flag = YES;
							excep_log.severity = FATAL;

							log_error(ctx);
									
							return INSERT_ERROR;
					}
					#ifdef DEBUG
						userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record updated into PROBL_RECORD");
					#endif


				// send payment unpaid indicator to GQD server
				sbcode.arr[0] = '\0';astat = '\0';
				/* EXEC SQL SELECT APPLSTAT, SSCBRANCHCODE INTO :astat,:sbcode
					FROM APPLICATION 
					WHERE APPLID = :oapplid; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 16;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select APPLSTAT ,SSCBRANCHCODE into :b0,:b1  from APPLICA\
TION where APPLID=:b2";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )733;
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
						userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : failed while select from APPLICATION :%s", sqlmsg);
					#endif
					strcpy(prog_log.remarks,"transaction_processing() failed while select from APPLICATION");
					sprintf(excep_log.error_msg,"transaction_processing() failed while select from APPLICATION:%s ",sqlmsg);
					excep_log.termination_flag = 'Y';
					excep_log.severity = FATAL;
					log_error(ctx);

					return SELECT_ERROR;
				}
				#ifdef DEBUG
					userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPLICATION");
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
     sqlstm.arrsiz = 16;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select SENDFLAG ,ENQTYPE into :b0,:b1  from APPNT_PROBL_\
DATA where APPLID=:b2";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )760;
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
								userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : select SENDFLAG, ENQTYPE from APPNT_PROBL_DATA failed : %s", SQLMSG);
						#endif
								strcpy(prog_log.remarks,"transaction_processing() select SENDFLAG, ENQTYPE from APPNT_PROBL_DATA failed ");
								sprintf(excep_log.error_msg, "transaction_processing() select SENDFLAG, ENQTYPE from APPNT_PROBL_DATA failed : %s", SQLMSG);
								excep_log.termination_flag = YES;
								excep_log.severity = FATAL;

								log_error(ctx);
										
								return INSERT_ERROR;
						}
						#ifdef DEBUG
							userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record selected from APPNT_PROBL_DATA");
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
      sqlstm.arrsiz = 16;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into APPNT_PROBL_DATA (APPLID,SSCBRANCHCODE,SEND\
FLAG, timestamp ,ENQTYPE) values (:b0,:b1,'N',SYSDATE,'P')";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )787;
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
									userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Insert into APPNT_PROBL_DATA failed(R) : %s", SQLMSG);
							#endif
									strcpy(prog_log.remarks,"transaction_processing() Insert into APPNT_PROBL_DATA failed ");
									sprintf(excep_log.error_msg, "transaction_processing() Insert into APPNT_PROBL_DATA failed : %s", SQLMSG);
									excep_log.termination_flag = YES;
									excep_log.severity = FATAL;

									log_error(ctx);
											
									return INSERT_ERROR;
							}
							#ifdef DEBUG
								userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record inserted into APPNT_PROBL_DATA");
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
       sqlstm.arrsiz = 16;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.stmt = "update APPNT_PROBL_DATA  set SENDFLAG='Y' where (APPLI\
D=:b0 and ENQTYPE='P')";
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )810;
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
										userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : update APPNT_PROBL_DATA failed : %s", SQLMSG);
								#endif
										strcpy(prog_log.remarks,"transaction_processing() update APPNT_PROBL_DATA failed ");
										sprintf(excep_log.error_msg, "transaction_processing() update APPNT_PROBL_DATA failed : %s", SQLMSG);
										excep_log.termination_flag = YES;
										excep_log.severity = FATAL;

										log_error(ctx);
												
										return INSERT_ERROR;
								}
								#ifdef DEBUG
									userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record updated into APPNT_PROBL_DATA(Y)");
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
       sqlstm.arrsiz = 16;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.stmt = "update APPNT_PROBL_DATA  set SENDFLAG='N' where (APPLI\
D=:b0 and ENQTYPE='P')";
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )829;
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
										userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : update APPNT_PROBL_DATA failed : %s", SQLMSG);
								#endif
										strcpy(prog_log.remarks,"transaction_processing() update APPNT_PROBL_DATA failed ");
										sprintf(excep_log.error_msg, "transaction_processing() update APPNT_PROBL_DATA failed : %s", SQLMSG);
										excep_log.termination_flag = YES;
										excep_log.severity = FATAL;

										log_error(ctx);
												
										return INSERT_ERROR;
								}
								#ifdef DEBUG
									userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Record updated into APPNT_PROBL_DATA(N)");
								#endif							
							
						}
					}
				}
			}

			#ifdef DEBUG
				userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : Reversal successful");
			#endif
		ret_code = 0;
		return ret_code;  // reversal success
		}

	} // end of txncode loop	
	

	#ifdef DEBUG
		userlog("JPNHG3_PYMT_REV_UPD (transaction_processing) : max applid after select: %s",applid.arr);		
	#endif


	return SUCCESS;
}

