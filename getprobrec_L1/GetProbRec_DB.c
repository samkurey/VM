
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
           char  filnam[19];
};
static const struct sqlcxp sqlfpn =
{
    18,
    ".\\GetProbRec_DB.pc"
};


static unsigned int sqlctx = 16853259;


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
            void  *sqhstv[62];
   unsigned int   sqhstl[62];
            int   sqhsts[62];
            void  *sqindv[62];
            int   sqinds[62];
   unsigned int   sqharm[62];
   unsigned int   *sqharc[62];
   unsigned short  sqadto[62];
   unsigned short  sqtdso[62];
} sqlstm = {12,62};

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

 static const char *sq0013 = 
"select PROBLNO ,IDTYPE ,IDNO ,TO_CHAR(PROBLDATE,'DDMMYYYY HH24MISS') ,PROBLR\
EASONCODE ,PROBLSERNO ,PROBLSTAT ,PROBLREMARKS ,TO_CHAR(PROBLSOLVEDATE,'DDMMYY\
YY HH24MISS') ,USERID ,WSID ,TO_CHAR(ACTDATETIME,'DDMMYYYY HH24MISS') ,ACTREMA\
RKS ,ACTUSERID ,BRANCHCODE ,TXNCODE ,LEGACYTYPE ,GSCBUPDFLAG ,GENKPT ,BSKRECD \
 from PROBL_RECORD where APPLID=:b0           ";

 static const char *sq0018 = 
"select TXNSERNO ,FEETYPE ,FEEAMT ,AGENCYREVNCODE  from APPL_TXN_FEE where (A\
PPLID=:b0 and FEETYPE in ('CF','FF','UF'))           ";

 static const char *sq0019 = 
"select TXNSERNO ,FEETYPE ,FEEAMT ,AGENCYREVNCODE ,SEND_GSC  from OUTSTAND_TX\
N_FEE where (APPLID=:b0 and FEETYPE in ('CF','FF','UF'))           ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4274,178,0,0,
5,0,0,1,106,0,4,234,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
28,0,0,2,116,0,4,274,0,0,3,1,0,1,0,2,97,0,0,2,1,0,0,1,97,0,0,
55,0,0,3,62,0,4,415,0,0,2,1,0,1,0,1,97,0,0,2,3,0,0,
78,0,0,4,95,0,4,422,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
101,0,0,5,99,0,4,491,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
124,0,0,6,61,0,4,577,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
147,0,0,7,58,0,5,585,0,0,1,1,0,1,0,1,97,0,0,
166,0,0,8,103,0,4,1069,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
189,0,0,9,474,0,4,1099,0,0,19,1,0,1,0,2,97,0,0,2,1,0,0,2,97,0,0,2,97,0,0,2,97,
0,0,2,97,0,0,2,9,0,0,2,97,0,0,2,9,0,0,2,97,0,0,2,3,0,0,2,9,0,0,2,1,0,0,2,9,0,0,
2,3,0,0,2,97,0,0,2,97,0,0,2,97,0,0,1,97,0,0,
280,0,0,10,58,0,5,1134,0,0,1,1,0,1,0,1,97,0,0,
299,0,0,11,1698,0,4,1385,0,0,62,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,97,0,0,2,3,0,
0,2,97,0,0,2,97,0,0,2,3,0,0,2,97,0,0,2,3,0,0,2,97,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,9,0,0,2,97,0,0,2,1,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,1,0,0,2,1,0,0,2,9,0,0,2,97,
0,0,2,97,0,0,2,97,0,0,2,9,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,9,
0,0,2,97,0,0,2,9,0,0,2,1,0,0,2,97,0,0,2,97,0,0,2,9,0,0,2,97,0,0,2,9,0,0,2,97,0,
0,2,97,0,0,2,1,0,0,2,97,0,0,2,9,0,0,2,97,0,0,2,97,0,0,2,1,0,0,2,1,0,0,2,9,0,0,
2,9,0,0,2,97,0,0,2,97,0,0,2,1,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,
2,97,0,0,1,97,0,0,
562,0,0,12,66,0,4,1965,0,0,2,1,0,1,0,2,3,0,0,1,9,0,0,
585,0,0,13,356,0,9,2090,0,0,1,1,0,1,0,1,97,0,0,
604,0,0,13,0,0,13,2113,0,0,20,0,0,1,0,2,3,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,97,0,0,
2,3,0,0,2,1,0,0,2,9,0,0,2,97,0,0,2,9,0,0,2,9,0,0,2,97,0,0,2,9,0,0,2,9,0,0,2,97,
0,0,2,97,0,0,2,97,0,0,2,1,0,0,2,1,0,0,2,1,0,0,
699,0,0,13,0,0,15,2131,0,0,0,0,0,1,0,
714,0,0,13,0,0,15,2246,0,0,0,0,0,1,0,
729,0,0,14,53,0,5,2270,0,0,1,1,0,1,0,1,97,0,0,
748,0,0,15,58,0,5,2292,0,0,2,2,0,1,0,1,1,0,0,1,97,0,0,
771,0,0,16,229,0,4,2377,0,0,10,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,1,9,0,0,
826,0,0,17,64,0,4,2446,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
849,0,0,18,129,0,9,2539,0,0,1,1,0,1,0,1,9,0,0,
868,0,0,18,0,0,15,2554,0,0,0,0,0,1,0,
883,0,0,18,0,0,13,2562,0,0,4,0,0,1,0,2,3,0,0,2,97,0,0,2,4,0,0,2,3,0,0,
914,0,0,18,0,0,15,2576,0,0,0,0,0,1,0,
929,0,0,18,0,0,15,2607,0,0,0,0,0,1,0,
944,0,0,19,143,0,9,2655,0,0,1,1,0,1,0,1,9,0,0,
963,0,0,19,0,0,15,2670,0,0,0,0,0,1,0,
978,0,0,19,0,0,13,2678,0,0,5,0,0,1,0,2,3,0,0,2,97,0,0,2,4,0,0,2,3,0,0,2,1,0,0,
1013,0,0,19,0,0,15,2693,0,0,0,0,0,1,0,
1028,0,0,19,0,0,15,2726,0,0,0,0,0,1,0,
1043,0,0,20,93,0,4,2773,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
1066,0,0,21,85,0,4,2793,0,0,3,1,0,1,0,2,3,0,0,2,97,0,0,1,9,0,0,
};


/* $Header$ */
/************************************************************************/
/* Filename    : get_prob_rec.pc										*/
/* Author      : Abhijeet Deshpande										*/
/* Description : This file contains database routines for				*/
/*				GET_PROB_REC service									*/
/************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sqlca.h>

//EXEC SQL INCLUDE SQLCA;

#include "gscbdef.h"
#include "gscblookupdef.h"
#include "gscblog.h"
#include "gscbio.h"

#include "get_prob_rec.h"
#include "get_prob_rec_io.h"
#include "userlog.h"

#define SQL_STMT_SIZE	500

int Get_Prob_Rec(GET_PROB_REC_REQ_T *pReq, 
				GET_PROB_REC_RESP_T **pResp, long *pRespSize,void * ctx)
{
	/* Variable declarations */
	GET_PROB_REC_REQ_T *req; 
	GET_PROB_REC_RESP_T *resp,*orig_resp,*new_resp;
	GET_PROB_REC_RESP_T *temp_resp;

	OTHER_GSC_PROBLEMS_T *other_gsc,*orig_other_gsc;
	APPL_MISSED_OPEX_T *appl_missed_opex,*orig_missed_opex;
	PROBL_RECORD_T *prob_details,*orig_prob_details;
	
	ADDRESS_INFO_T *addr_info;
	
	TIME_VERSION_T *time_version;

	APPL_TXN_FEE_T *appl_txn;
	OUTSTAND_TXN_FEE_T *outstand_txn;

	char program_id[PROG_ID_SIZE] ={0};
	char curr_date_time[DATE_TIME_SIZE] = {0};
	char *lapplid = NULL,*local_appl_id = NULL;	
	int no_of_prob = 0;
	int no_of_recs = 0;
	int no_of_prob_appl = 0;
	int appl_missed_opex_flag = 0;
	int other_gsc_flag=0;
	long resp_length = 0;
	long temp_resp_length = 0;
	int ret_val = 0;
	int prob_count = 0,applcount = 0;
	int j = 0;
	char lappl_id[20] = {0};

	struct sqlca sqlca = {0}; // added on 07/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE]={0};
	char branchcode[BRANCH_CODE_SIZE]={0};
	char enqtype='\0';
	int  addr_info_flag=0;
	int  appchar = 0;
	int  fee_cnt=0;
	int  txn_rec_cnt=0;
	int  enqtypecnt=0;
	int  acnt=0;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	#ifdef DEBUG
		userlog("GET_PROB_REC : Service initiated");
	#endif

	/* Set pointer to data received by the service */
	req = (GET_PROB_REC_REQ_T *)pReq;

#ifdef DEBUG
	userlog("");
	userlog("GET_PROB_REC : REQUEST BUFFER");
	userlog("GET_PROB_REC : Branch/SSC Code - %s", req->header.branch_code);
	userlog("GET_PROB_REC : Workstation Id - %s", req->header.workstation_id);
	userlog("GET_PROB_REC : Application Id - %s", req->header.application_id);
	userlog("GET_PROB_REC : User Id - %s", req->header.user_id);	
#endif

	/* Get current date-time for logging */
	strcpy(curr_date_time, get_date_time());
	
#ifdef DEBUG
	userlog( "GET_PROB_REC : curr_date_time = %s\n", curr_date_time);	
#endif

	/* Set the program id */
	_itoa(GET_PROB_REC_ID, program_id, 10);

#ifdef DEBUG
	userlog( "GET_PROB_REC : Program Id = %s\n", program_id);	
#endif

	/* Initialize the variables used for logging */
	/* Program access log variable */
	strcpy(prog_log.program_id,program_id);
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
	excep_log.termination_flag = NO;	


	resp_length = sizeof(GET_PROB_REC_RESP_T);

	resp = (GET_PROB_REC_RESP_T *) malloc(resp_length);

	if (resp == NULL)
	{
	#ifdef DEBUG
		userlog("GET_PROB_REC : malloc failed ");
	#endif

		/* Log the error */
		strcpy(prog_log.remarks,"GET_PROB_REC :  memory allocation failed");
		sprintf(excep_log.error_msg,"GET_PROB_REC : Allocation of memory failed : ");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);
		return RESP_BUF_ERR;
	}

	memset(resp,'\0', resp_length);

#ifdef DEBUG
	userlog("GET_PROB_REC : The address of resp buffer allocated is 0x%X",resp);
#endif

	/* Copy header info from request to response */
	resp->header = req->header;

	/* Check the info in header for valid Branch code, WS id  */
	ret_val = check_header(req->header,ctx);

	if (ret_val != SUCCESS)
	{
	#ifdef DEBUG
		userlog("GET_PROB_REC : check header failed");
	#endif

		/* Log the error */
		sprintf(prog_log.remarks, "GET_PROB_REC : check_header failed with error code %d", ret_val);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		//tpreturn(TPSUCCESS, ret_val, (char *)resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
		return ret_val;
	}

	/*Check for valid Id type in request data*/
	if(req->applicant_id[0] != '\0')
	{
		if (check_id_type(req->applicant_id_type,ctx) == INVALID)
		{
			#ifdef DEBUG
				userlog("GET_PROB_REC : Invalid Id Type specified in request buffer");
			#endif

			/* Log the error */
			strcpy(prog_log.remarks,"GET_PROB_REC : Invalid Id Type specified in request buffer");
			sprintf(excep_log.error_msg,"GET_PROB_REC : Invalid Id Type specified in request buffer");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;

			log_error(ctx);

			//tpreturn(TPSUCCESS, INVALID_ID_TYPE, (char *)resp, resp_length, 0);
				*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
					*pResp = resp;
			return INVALID_ID_TYPE;
		}
	}


	/*** Added on 28th FEB 2005 for IJPN ***/

	/* From this point onwards the structures are filled with data and attached to the response buffer */

/* For the first call with branch code data, if part of the code is executed,
   then second call with application_id the else part of the code is executed  to update the ENQFLAG to 'Y' */

	resp->upd_flag = 'N'; // This means ENQFLAG updation failed, setting as default value

if(strcmp(req->header.application_id,"\0") == 0)
{
			
		strcpy(branchcode, req->header.branch_code);

		userlog("GET_PROB_REC : branchcode : %s",branchcode);

		/* Get the enqtype and check whether A or E or Blank
			and do the processing accordingly  */


		/* EXEC SQL SELECT COUNT(*) INTO :enqtypecnt
			FROM  APPNT_PROBL_DATA
			WHERE SSCBRANCHCODE = :branchcode
			AND   SENDFLAG = 'N'
			AND   ROWNUM = 1; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 2;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPNT_PROBL_DATA where ((SS\
CBRANCHCODE=:b1 and SENDFLAG='N') and ROWNUM=1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )5;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&enqtypecnt;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)branchcode;
  sqlstm.sqhstl[1] = (unsigned int  )7;
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
		 #ifdef DEBUG
			userlog(" GET_PROB_REC : Selecting count from APPNT_PROBL_DATA failed : %s", SQLMSG);
		 #endif
			strcpy(prog_log.remarks,"GET_PROB_REC : Selecting count from APPNT_PROBL_DATA failed");
			sprintf(excep_log.error_msg, "GET_PROB_REC : Selecting count from APPNT_PROBL_DATA failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;
			log_error(ctx);
				
			return SELECT_ERROR;
		}
		else if((SQLCODE == 1403) || (enqtypecnt==0))
		{
			/* if No data found here then we return a null enqtype, by this the NT service will go into
			   sleep mode as there are no records to process */

			#ifdef DEBUG
				userlog(" GET_PROB_REC : NO DATA FOUND in APPNT_PROBL_DATA table while selecting count: %s", SQLMSG);
				userlog(" GET_PROB_REC : Returning resp->enqtype_ind as NULL ");
			#endif
				
			resp->enqtype_ind = '\0';

			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;

			return GMPC_GOOD;
		}

		/* If data found for the above count selection then proceed further to process  */

		/* EXEC SQL SELECT APPLID,ENQTYPE INTO :appl_id,:enqtype
			FROM  APPNT_PROBL_DATA
			WHERE SSCBRANCHCODE = :branchcode
			AND   SENDFLAG = 'N'
			AND   ROWNUM = 1; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 3;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select APPLID ,ENQTYPE into :b0,:b1  from APPNT_PROBL_DATA \
where ((SSCBRANCHCODE=:b2 and SENDFLAG='N') and ROWNUM=1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )28;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)appl_id;
  sqlstm.sqhstl[0] = (unsigned int  )20;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&enqtype;
  sqlstm.sqhstl[1] = (unsigned int  )1;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)branchcode;
  sqlstm.sqhstl[2] = (unsigned int  )7;
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





	#ifdef DEBUG
		userlog("GET_PROB_REC : appl_id : %s",appl_id);
		userlog("GET_PROB_REC : enqtype : %c",enqtype);
	#endif
  // for enqtype=A send only address info
  // for enqtype=E send only either appl or outstand txn fee
  // for enqtype=blank do the old existing processing of sending APPLICATON,MISSEDOPEX AND PROBLRCEORD
		// for enqtype=X send only Express info

//   This code is added by kasi for Express card on 26/01/2007
  if(enqtype == 'X')
  {
	orig_resp = resp;
	resp_length = sizeof(GET_PROB_REC_RESP_T);
	resp_length = resp_length + (sizeof(TIME_VERSION_T) * 1);
	new_resp = (GET_PROB_REC_RESP_T *) malloc( resp_length);

	if (new_resp == NULL)
	{
	#ifdef DEBUG
		userlog("GET_PROB_REC : malloc failed for enqtype=X ");
	#endif

		/* Log the error */
		strcpy(prog_log.remarks,"GET_PROB_REC : Memory allocation failed for enqtype = X");
		sprintf(excep_log.error_msg,"GET_PROB_REC : Allocation of memory failed for enqtype = X :");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);

		return RESP_BUF_ERR;
	}

		memset(new_resp, '\0', resp_length);
		memcpy(new_resp, orig_resp, sizeof(GET_PROB_REC_RESP_T));

		resp = new_resp;

		orig_resp = resp;

		time_version = (TIME_VERSION_T *)(resp + 1);

		ret_val = 0;	
		ret_val = get_time_ver_rec(appl_id, time_version, ctx);

		if(ret_val != GMPC_GOOD)
		{
			#ifdef DEBUG
				userlog("GET_PROB_REC : Error in get_time_version_rec() function");
			#endif
			//tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
			return ret_val;
		}		

		strcpy(resp->header.application_id,appl_id);
		resp->enqtype_ind = 'X';

  }//if(enqtype == 'A')
  else if(enqtype == 'A')
  {
	orig_resp = resp;
	resp_length = sizeof(GET_PROB_REC_RESP_T);
	resp_length = resp_length + (sizeof(ADDRESS_INFO_T) * 1);
	new_resp = (GET_PROB_REC_RESP_T *) malloc( resp_length);

	if (new_resp == NULL)
	{
	#ifdef DEBUG
		userlog("GET_PROB_REC : malloc failed for enqtype=A ");
	#endif

		/* Log the error */
		strcpy(prog_log.remarks,"GET_PROB_REC : Memory allocation failed for enqtype = A");
		sprintf(excep_log.error_msg,"GET_PROB_REC : Allocation of memory failed for enqtype = A :");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);

		return RESP_BUF_ERR;
	}

		memset(new_resp, '\0', resp_length);
		memcpy(new_resp, orig_resp, sizeof(GET_PROB_REC_RESP_T));

		resp = new_resp;

		orig_resp = resp;

		addr_info = (ADDRESS_INFO_T *)(resp + 1);

		ret_val = 0;	
		ret_val = get_addr_info_rec(appl_id, addr_info, &addr_info_flag, ctx);

		if(ret_val != GMPC_GOOD)
		{
			#ifdef DEBUG
				userlog("GET_PROB_REC : Error in get_addr_info_rec() function");
			#endif
			//tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
			return ret_val;
		}		


		if(!(addr_info_flag))
			resp->addr_info_ind = 'Y';
		else
			resp->addr_info_ind = 'N';

		strcpy(resp->header.application_id,appl_id);

		#ifdef DEBUG			
			userlog("GET_PROB_REC : get_addr_info_rec (resp->header.application_id): %s",resp->header.application_id);
			userlog("GET_PROB_REC : get_addr_info_rec (resp->addr_info_ind): %c",resp->addr_info_ind);
		#endif

		resp->enqtype_ind = 'A';

  }
  else if(enqtype == 'E')
  {
	appchar = 0;
	/* EXEC SQL SELECT TO_NUMBER(SUBSTR(LTRIM(:appl_id),15,1)) INTO :appchar FROM DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 3;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_NUMBER(SUBSTR(LTRIM(:b0),15,1)) into :b1  from DUA\
L ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )55;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)appl_id;
 sqlstm.sqhstl[0] = (unsigned int  )20;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&appchar;
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

 

	/* checking whether application type phone-in or not? */
	if((appchar == 4) || (appchar == 5))
	{
			/* appl_txn_fee */

		/* EXEC SQL SELECT COUNT(*) INTO :fee_cnt 
			FROM APPL_TXN_FEE WHERE APPLID = :appl_id
				AND   FEETYPE IN ('CF','FF','UF'); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 3;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN_FEE where (APPLID=\
:b1 and FEETYPE in ('CF','FF','UF'))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )78;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&fee_cnt;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)appl_id;
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



	 if(fee_cnt > 0)
	 {
	  orig_resp = resp;
	  resp_length = sizeof(GET_PROB_REC_RESP_T);
	  resp_length = resp_length + (sizeof(APPL_TXN_FEE_T) * fee_cnt);
	  new_resp = (GET_PROB_REC_RESP_T *) malloc( resp_length);

	  if (new_resp == NULL)
	  {
	   #ifdef DEBUG
		 userlog("GET_PROB_REC : malloc failed for enqtype=E ");
	   #endif

		/* Log the error */
		strcpy(prog_log.remarks,"GET_PROB_REC : Memory allocation failed for enqtype = E");
		sprintf(excep_log.error_msg,"GET_PROB_REC : Allocation of memory failed for enqtype = E :");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);

	 	return RESP_BUF_ERR;
	  }

		memset(new_resp, '\0', resp_length);
		memcpy(new_resp, orig_resp, sizeof(GET_PROB_REC_RESP_T));

		resp = new_resp;

		orig_resp = resp;

		appl_txn = (APPL_TXN_FEE_T *)(resp + 1);

		ret_val = 0;	
		ret_val = get_appl_txn_rec(appl_id, appl_txn, fee_cnt, ctx);

		if(ret_val != GMPC_GOOD)
		{
			#ifdef DEBUG
				userlog("GET_PROB_REC : Error in get_appl_txn_rec() function");
			#endif
			//tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
			return ret_val;
		}		
	} /* end of fee_cnt */
		
		resp->appl_txn_cnt = fee_cnt;

		strcpy(resp->header.application_id,appl_id);

		#ifdef DEBUG			
			userlog("GET_PROB_REC : get_appl_txn_rec (resp->header.application_id): %s",resp->header.application_id);
			userlog("GET_PROB_REC : get_appl_txn_rec (resp->appl_txn_cnt): %d",resp->appl_txn_cnt);
		#endif

	}
	else
	{
			/* outstand_txn_fee */

	  /* EXEC SQL SELECT COUNT(*) INTO :fee_cnt 
			FROM OUTSTAND_TXN_FEE WHERE APPLID = :appl_id
				AND   FEETYPE IN ('CF','FF','UF'); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 3;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select count(*)  into :b0  from OUTSTAND_TXN_FEE where (AP\
PLID=:b1 and FEETYPE in ('CF','FF','UF'))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )101;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&fee_cnt;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)appl_id;
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



	 if(fee_cnt > 0)
	 {
	  orig_resp = resp;
	  resp_length = sizeof(GET_PROB_REC_RESP_T);
	  resp_length = resp_length + (sizeof(OUTSTAND_TXN_FEE_T) * fee_cnt);
	  new_resp = (GET_PROB_REC_RESP_T *) malloc( resp_length);

	  if (new_resp == NULL)
	  {
	   #ifdef DEBUG
		 userlog("GET_PROB_REC : malloc failed for enqtype=E and OUTSTAND_TXN_FEE");
	   #endif

		/* Log the error */
		strcpy(prog_log.remarks,"GET_PROB_REC : Memory allocation failed for enqtype = E and OUTSTAND_TXN_FEE");
		sprintf(excep_log.error_msg,"GET_PROB_REC : Allocation of memory failed for enqtype = E and OUTSTAND_TXN_FEE");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);

	 	return RESP_BUF_ERR;
	  }

		memset(new_resp, '\0', resp_length);
		memcpy(new_resp, orig_resp, sizeof(GET_PROB_REC_RESP_T));

		resp = new_resp;

		orig_resp = resp;

		outstand_txn = (OUTSTAND_TXN_FEE_T *)(resp + 1);

		ret_val = 0;	
		ret_val = get_outstand_txn_rec(appl_id, outstand_txn, fee_cnt, ctx);

		if(ret_val != GMPC_GOOD)
		{
		 #ifdef DEBUG
				userlog("GET_PROB_REC : Error in get_outstand_txn_rec() function");
		 #endif
			//tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
			return ret_val;
		}		

	 } /*end of fee_cnt */

		resp->outstand_txn_cnt = fee_cnt;

		strcpy(resp->header.application_id,appl_id);

		#ifdef DEBUG			
			userlog("GET_PROB_REC : get_outstand_txn_rec (resp->header.application_id): %s",resp->header.application_id);
			userlog("GET_PROB_REC : get_outstand_txn_rec (resp->outstand_txn_cnt): %d",resp->appl_txn_cnt);
		#endif

		resp->enqtype_ind = 'E';

	}

  }
  else
  {
	  /* endqtype NULL */

		if(enqtype == 'M') //Salmi temp add
		{


	#ifdef DEBUG
		userlog("GET_PROB_REC : enqtype == 'M'  ");
	#endif
			return GMPC_GOOD;
		}


		acnt=0;
	  	/* EXEC SQL SELECT COUNT(*) INTO :acnt
		FROM  PROBL_RECORD
		WHERE APPLID = :appl_id; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 3;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select count(*)  into :b0  from PROBL_RECORD where APPLID\
=:b1";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )124;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&acnt;
    sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)appl_id;
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



		// to take care if probl_record data not exists
		if(acnt == 0)
		{

		/* EXEC SQL UPDATE APPNT_PROBL_DATA 
			SET SENDFLAG = 'F'
				WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 3;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPNT_PROBL_DATA  set SENDFLAG='F' where APPLID=:b0";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )147;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)appl_id;
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




			resp->enqtype_ind = '\0';

			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;

			return GMPC_GOOD;

		}

	orig_resp = resp;
	resp_length = sizeof(GET_PROB_REC_RESP_T);
	resp_length = resp_length + (sizeof(OTHER_GSC_PROBLEMS_T) * 1);
	new_resp = (GET_PROB_REC_RESP_T *) malloc( resp_length);

	if (new_resp == NULL)
	{
	#ifdef DEBUG
		userlog("GET_PROB_REC : malloc failed  ");
	#endif

		/* Log the error */
		strcpy(prog_log.remarks,"GET_PROB_REC : Tuxedo memory allocation failed");
		sprintf(excep_log.error_msg,"GET_PROB_REC : Allocation of memory failed : ");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);

		return RESP_BUF_ERR;
	}

		memset(new_resp, '\0', resp_length);
		memcpy(new_resp, orig_resp, sizeof(GET_PROB_REC_RESP_T));

		resp = new_resp;

		orig_resp = resp;

		other_gsc = (OTHER_GSC_PROBLEMS_T *)(resp + 1);

		ret_val = 0;	
		ret_val = get_other_gsc_problem_recs(lappl_id,other_gsc,req->header.branch_code,&other_gsc_flag,ctx);

		if(ret_val != GMPC_GOOD)
		{
			#ifdef DEBUG
				userlog("GET_PROB_REC : Error in get_other_gsc_problem_recs() function");
			#endif
			//tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
			return ret_val;
		}		


		if(!(other_gsc_flag))
			resp->other_gsc_problem_ind = 'Y';
		else
			resp->other_gsc_problem_ind = 'N';

		strcpy(resp->header.application_id,lappl_id);

		#ifdef DEBUG			
			userlog("GET_PROB_REC : get_other_gsc_problem_recs (resp->header.application_id): %s",resp->header.application_id);
			userlog("GET_PROB_REC : get_other_gsc_problem_recs (resp->other_gsc_problem_ind): %c",resp->other_gsc_problem_ind);
		#endif

		ret_val = 0;
		ret_val = get_prob_count(lappl_id, &prob_count,ctx);
		if(ret_val != GMPC_GOOD)
		{
			#ifdef DEBUG
				userlog("GET_PROB_REC : Error in get_prob_appl_details() function");
			#endif
			//tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return ret_val;
		}

		#ifdef DEBUG
				userlog("GET_PROB_REC : get_prob_count (prob_count): %d",prob_count);
		#endif

	/* To attach the appl_missed_opex and probl_record structures to the response buffer */
	/* Reallocate the response buffer */


	#ifdef DEBUG
		userlog("GET_PROB_REC : ****Before attaching to resp buffer****");
	#endif

	orig_resp = resp;
	resp_length = (sizeof(GET_PROB_REC_RESP_T) + sizeof(OTHER_GSC_PROBLEMS_T));
	resp_length = resp_length + (sizeof(APPL_MISSED_OPEX_T) * 1);
	resp_length = resp_length + (sizeof(PROBL_RECORD_T)*prob_count);
	
	new_resp = (GET_PROB_REC_RESP_T *) malloc( resp_length);

	if (new_resp == NULL)
	{
	#ifdef DEBUG
	/* print input data to be used for debugging */
	userlog("GET_PROB_REC: Reallocation of response buffer Failed");
	#endif

	strcpy(prog_log.remarks,"GET_PROB_REC : Service failed due to RESP_BUF_ERR at Reallocation");
	sprintf(excep_log.error_msg,"GET_PROB_REC :Service failed due to RESP_BUF_ERR at Reallocation");
	excep_log.termination_flag = 'Y';
	excep_log.severity = FATAL;
	log_error(ctx);

	//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);

	return RESP_BUF_ERR;
	}

		memset(new_resp, '\0', resp_length);
		memcpy(new_resp, orig_resp, sizeof(GET_PROB_REC_RESP_T) + 
		sizeof(OTHER_GSC_PROBLEMS_T));

	resp = new_resp;

	orig_resp = resp;

	other_gsc = (OTHER_GSC_PROBLEMS_T *) (resp + 1);
	appl_missed_opex = (APPL_MISSED_OPEX_T *)(other_gsc + 1); 
	prob_details = (PROBL_RECORD_T *)(appl_missed_opex + 1);
	orig_prob_details = prob_details;

#ifdef DEBUG
	userlog("GET_PROB_REC : The address of resp buffer reallocated is 0x%X",resp);
#endif

	ret_val = 0;
	ret_val = get_appl_missed_opex_rec(lappl_id,appl_missed_opex,&appl_missed_opex_flag,ctx);	
	if(ret_val != GMPC_GOOD)
	{
		#ifdef DEBUG
			userlog("GET_PROB_REC : Error in get_appl_missed_opex_rec() function");
		#endif
		//tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
					*pResp = resp;
			return ret_val;

	}
		
	if(!(appl_missed_opex_flag))
		resp->missed_opex_ind = 'Y';
	else
		resp->missed_opex_ind = 'N';

	#ifdef DEBUG			
			userlog("GET_PROB_REC : get_appl_missed_opex_rec (resp->missed_opex_ind): %c",resp->missed_opex_ind);
	#endif
	
	ret_val = 0;
	ret_val = get_probl_record_recs(lappl_id, prob_details,ctx);
	if(ret_val != GMPC_GOOD)
		{
		#ifdef DEBUG
			userlog("GET_PROB_REC : Error in get_probl_record_recs() function");
		#endif
				//tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
					*pResp = resp;
			return ret_val;
		}

	resp->probl_record_cnt = prob_count;

	#ifdef DEBUG			
			userlog("GET_PROB_REC : get_probl_record_recs (resp->probl_record_cnt): %d",resp->probl_record_cnt);
	#endif
	

	/**** printing the response buffer ****/

	temp_resp = NULL; // making the temp_resp null

	/*Assigning global response pointer to temp pointer*/

	temp_resp = orig_resp;	
	orig_other_gsc = (OTHER_GSC_PROBLEMS_T *)(temp_resp + 1);
	

	#ifdef DEBUG
		userlog("start printing the response buffer ");
		userlog(" ");	
		userlog("GET_PROB_REC : response buffer (resp->header.application_id): %s",temp_resp->header.application_id);
		userlog("GET_PROB_REC : response buffer (resp->other_gsc_problem_ind): %c",temp_resp->other_gsc_problem_ind);
		userlog("GET_PROB_REC : response buffer (resp->header.application_id): %d",temp_resp->probl_record_cnt);
		userlog("GET_PROB_REC : response buffer (resp->other_gsc_problem_ind): %c",temp_resp->missed_opex_ind);

		userlog("GET_PROB_REC : response buffer : other_gsc->applstat - %c", orig_other_gsc->applstat);
		userlog("GET_PROB_REC : response buffer : other_gsc->kptno - %s", orig_other_gsc->kptno);
		userlog("GET_PROB_REC : response buffer : other_gsc->collcenter - %s", orig_other_gsc->collcenter);
		userlog("GET_PROB_REC : response buffer : other_gsc->cardcolldate - %s", orig_other_gsc->cardcolldate);
		userlog("GET_PROB_REC : response buffer : other_gsc->idtype - %s", orig_other_gsc->idtype);
		userlog("GET_PROB_REC : response buffer : other_gsc->idno - %s", orig_other_gsc->idno);
		userlog("GET_PROB_REC : response buffer : other_gsc->userid - %s", orig_other_gsc->userid);
		userlog("GET_PROB_REC : response buffer : other_gsc->contactno - %s", orig_other_gsc->contactno);
		userlog("GET_PROB_REC : response buffer : other_gsc->sscbranchcode - %s", orig_other_gsc->sscbranchcode);
		userlog("GET_PROB_REC : response buffer : other_gsc->qticketno - %ld", orig_other_gsc->qticketno);
		userlog("GET_PROB_REC : response buffer : other_gsc->licidno - %s", orig_other_gsc->licidno);
		userlog("GET_PROB_REC : response buffer : other_gsc->ownercat - %c", orig_other_gsc->ownercat);		
		userlog("GET_PROB_REC : response buffer : other_gsc->applremarks - %s", orig_other_gsc->applremarks);
		userlog("GET_PROB_REC : response buffer : other_gsc->applpriority - %d", orig_other_gsc->applpriority);
		userlog("GET_PROB_REC : response buffer : other_gsc->timestamp - %s", orig_other_gsc->timestamp);
		userlog(" ");
	#endif

	orig_missed_opex = (APPL_MISSED_OPEX_T *)(orig_other_gsc + 1);

		#ifdef DEBUG
		userlog(" ***** APPL_MISSED_OPEX Details *****");

		userlog("");
		userlog("GET_PROB_REC: response buffer :address1: %s",orig_missed_opex->address1);
		userlog("GET_PROB_REC: response buffer :address2: %s",orig_missed_opex->address2);
		userlog("GET_PROB_REC: response buffer :address3: %s",orig_missed_opex->address3);
		userlog("GET_PROB_REC: response buffer :birthdate: %s",orig_missed_opex->birthdate);
		userlog("GET_PROB_REC: response buffer :birthplacecode: %s",orig_missed_opex->birthplacecode);
		userlog("GET_PROB_REC: response buffer :birthstatecode: %s",orig_missed_opex->birthstatecode);
		userlog("GET_PROB_REC: response buffer :citizennationcode: %s",orig_missed_opex->citizennationcode);
		userlog("GET_PROB_REC: response buffer :colourarticlecode: %s",orig_missed_opex->colourarticlecode);
		userlog("GET_PROB_REC: response buffer :fatheridtype: %s",orig_missed_opex->fatheridtype);
		userlog("GET_PROB_REC: response buffer :gender: %c",orig_missed_opex->gender);
		userlog("GET_PROB_REC: response buffer :hkind: %c",orig_missed_opex->hkind);
		userlog("GET_PROB_REC: response buffer :iccolorcode: %c",orig_missed_opex->iccolorcode);
		userlog("GET_PROB_REC: response buffer :idtype: %s",orig_missed_opex->idtype);
		userlog("GET_PROB_REC: response buffer :immexpirydate: %s",orig_missed_opex->immexpirydate);
		userlog("GET_PROB_REC: response buffer :immrefdate: %s",orig_missed_opex->immrefdate);
		userlog("GET_PROB_REC: response buffer :kppno: %s",orig_missed_opex->kppno);
		userlog("GET_PROB_REC: response buffer :kptno: %s",orig_missed_opex->kptno);
		userlog("GET_PROB_REC: response buffer :ktindcode: %s",orig_missed_opex->ktindcode);
		userlog("GET_PROB_REC: response buffer :lastcardissuedate: %s",orig_missed_opex->lastcardissuedate);
		userlog("GET_PROB_REC: response buffer :militaryid: %s",orig_missed_opex->militaryid);
		userlog("GET_PROB_REC: response buffer :motheridtype: %s",orig_missed_opex->motheridtype);
		userlog("GET_PROB_REC: response buffer :orignameind: %c",orig_missed_opex->orignameind);
		userlog("GET_PROB_REC: response buffer :passportissuecountry: %s",orig_missed_opex->passportissuecountry);
		userlog("GET_PROB_REC: response buffer :passportissuedate: %s",orig_missed_opex->passportissuedate);
		userlog("GET_PROB_REC: response buffer :permitissuedate: %s",orig_missed_opex->permitissuedate);
		userlog("GET_PROB_REC: response buffer :policeid: %s",orig_missed_opex->policeid);
		userlog("GET_PROB_REC: response buffer :policeretiredate: %s",orig_missed_opex->policeretiredate);
		userlog("GET_PROB_REC: response buffer :polmilitarycode: %c",orig_missed_opex->polmilitarycode);
		userlog("GET_PROB_REC: response buffer :polmilitaryjoindate: %s",orig_missed_opex->polmilitaryjoindate);
		userlog("GET_PROB_REC: response buffer :racecode: %s",orig_missed_opex->racecode);
		userlog("GET_PROB_REC: response buffer :relationcode: %s",orig_missed_opex->relationcode);
		userlog("GET_PROB_REC: response buffer :religioncode: %c",orig_missed_opex->religioncode);
		userlog("GET_PROB_REC: response buffer :residentstat: %c",orig_missed_opex->residentstat);
		userlog("GET_PROB_REC: response buffer :sponsoridtype: %s",orig_missed_opex->sponsoridtype);
		userlog("GET_PROB_REC: response buffer :statecode: %s",orig_missed_opex->statecode);
		userlog("GET_PROB_REC: response buffer :unknownbirthind: %c",orig_missed_opex->unknownbirthind);
		userlog("GET_PROB_REC: response buffer :birthdistrictcode: %d",orig_missed_opex->birthdistrictcode);
		userlog("GET_PROB_REC: response buffer :cardlostcnt: %d",orig_missed_opex->cardlostcnt);
		userlog("GET_PROB_REC: response buffer :citycode: %d",orig_missed_opex->citycode);		
		userlog("GET_PROB_REC: response buffer :currlongname: %s",orig_missed_opex->currlongname);
		userlog("GET_PROB_REC: response buffer :currshortname1: %s",orig_missed_opex->currshortname1);
		userlog("GET_PROB_REC: response buffer :currshortname2: %s",orig_missed_opex->currshortname2);
		userlog("GET_PROB_REC: response buffer :fatheridno: %s",orig_missed_opex->fatheridno);
		userlog("GET_PROB_REC: response buffer :gmpcshortname1: %s",orig_missed_opex->gmpcshortname1);
		userlog("GET_PROB_REC: response buffer :gmpcshortname2: %s",orig_missed_opex->gmpcshortname2);
		userlog("GET_PROB_REC: response buffer :gmpcshortname3: %s",orig_missed_opex->gmpcshortname3);
		userlog("GET_PROB_REC: response buffer :idnumber: %s",orig_missed_opex->idnumber);
		userlog("GET_PROB_REC: response buffer :immrefno: %s",orig_missed_opex->immrefno);
		userlog("GET_PROB_REC: response buffer :motheridno: %s",orig_missed_opex->motheridno);
		userlog("GET_PROB_REC: response buffer :origname: %s",orig_missed_opex->origname);
		userlog("GET_PROB_REC: response buffer :passportno: %s",orig_missed_opex->passportno);
		userlog("GET_PROB_REC: response buffer :permitno: %s",orig_missed_opex->permitno);
		userlog("GET_PROB_REC: response buffer :postcode: %s",orig_missed_opex->postcode);
		userlog("GET_PROB_REC: response buffer :sponsorcurrlongname: %s",orig_missed_opex->sponsorcurrlongname);
		userlog("GET_PROB_REC: response buffer :sponsoridno: %s",orig_missed_opex->sponsoridno);
		userlog("GET_PROB_REC: response buffer (resp->missed_opex_ind): %c",resp->missed_opex_ind);
	#endif
	
	orig_prob_details = (PROBL_RECORD_T *)(orig_missed_opex + 1);


	for(j=0;j<prob_count;j++,orig_prob_details++)
	{
			#ifdef DEBUG
			userlog(" ***** PROBL_RECORD Details *****");
			userlog(" GET_PROB_REC: response buffer : prob_no : %d", orig_prob_details->prob_no);
			userlog(" GET_PROB_REC: response buffer : id_type : %s", orig_prob_details->id_type);
			userlog(" GET_PROB_REC: response buffer : id_no : %s", orig_prob_details->id_no);
			userlog(" GET_PROB_REC: response buffer : prob_date : %s", orig_prob_details->prob_date);
			userlog(" GET_PROB_REC: response buffer : reason_code : %s", orig_prob_details->reason_code);
			userlog(" GET_PROB_REC: response buffer : reason_srno : %d", orig_prob_details->reason_srno);
			userlog(" GET_PROB_REC: response buffer : prob_stat : %c", orig_prob_details->prob_stat);
			userlog(" GET_PROB_REC: response buffer : prob_remarks : %s", orig_prob_details->prob_remarks);
			userlog(" GET_PROB_REC: response buffer : prob_solve_date : %s", orig_prob_details->prob_solve_date);
			userlog(" GET_PROB_REC: response buffer : user_id : %s", orig_prob_details->user_id);
			userlog(" GET_PROB_REC: response buffer : workstation_id : %s", orig_prob_details->workstation_id);
			userlog(" GET_PROB_REC: response buffer : action_date : %s", orig_prob_details->action_date);
			userlog(" GET_PROB_REC: response buffer : action_remarks : %s", orig_prob_details->action_remarks);
			userlog(" GET_PROB_REC: response buffer : action_user_id : %s", orig_prob_details->action_user_id);
			userlog(" GET_PROB_REC: response buffer : branch_code : %s", orig_prob_details->branch_code);
			userlog(" GET_PROB_REC: response buffer : txn_code : %s", orig_prob_details->txn_code);
			userlog(" GET_PROB_REC: response buffer : legacy_type : %s", orig_prob_details->legacy_type);
			userlog(" GET_PROB_REC: response buffer : gscbupdflag : %c", orig_prob_details->gscbupdflag);
			userlog(" GET_PROB_REC: response buffer : genkpt : %c", orig_prob_details->genkpt);
			userlog(" GET_PROB_REC: response buffer : bskrecd : %c", orig_prob_details->bskrecd);
			userlog(" ");
			userlog("GET_PROB_REC : get_probl_record_recs (resp->probl_record_cnt): %d",resp->probl_record_cnt);
			userlog("end printing the response buffer ");
		#endif		
		
	}

	resp->enqtype_ind = 'B';

	} /* end of enqtype check */
} 
else if(strcmp(req->header.application_id,"\0") != 0)
{
	#ifdef DEBUG
		userlog("GET_PROB_REC : The application_id before updating the ENQFLAG in PROBL_RECORD table to Y : %s",req->header.application_id);
	#endif
		ret_val = 0;
		ret_val = update_probl_record(req->header.application_id,req->updstatus, ctx);
		if(ret_val != GMPC_GOOD)
		{
		#ifdef DEBUG
			userlog("GET_PROB_REC : Error in update_probl_record() function");
		#endif
		//tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
		 return ret_val;
		}
#ifdef DEBUG
	userlog("GET_PROB_REC : The ENQFLAG in PROBL_RECORD table is successfully updated to Y ");
#endif
		resp->upd_flag = 'Y';
}


	/*Logging at the exit of the service*/	
	strcpy(prog_log.remarks,"GET_PROB_REC : The serivce completed successfully");
	log_exit(ctx);

	#ifdef DEBUG		
		userlog("GET_PROB_REC : The serivce completed successfully");
	#endif		

	//tpreturn(TPSUCCESS, GMPC_GOOD, (char *) resp, resp_length, 0);
		userlog("GET_PROB_REC : Response buffer size %d ", resp_length);
		*pRespSize = resp_length;
		userlog("GET_PROB_REC : After swap buffer size %d ", resp_length);
		//memcpy(*pResp, resp, resp_length);
		*pResp  = resp;
		
		userlog("GET_PROB_REC : After swap Memory size %d ", resp_length);

	return GMPC_GOOD;

}

/********************************************************************************/
/* Function name: check_id_type													*/
/* Description	: This function checks whether the id type of the applicant     */
/*				  is valid or not												*/
/* Input		: Applicant's id type											*/	
/* Return values: VALID/INVALID													*/
/* Limitations	: None															*/
/********************************************************************************/
int check_id_type(char *id_type,void * ctx)
{
int ret_val;

#ifdef DEBUG
	userlog("GET_PROB_REC : in check_id_type() function");
	userlog("GET_PROB_REC : the input ID type is %d",atoi(id_type));
#endif
	
/*Check input data for valid ID type*/
switch(atoi(id_type))
{
	case ID_TYPE_BIRTH_CERT:
	case ID_TYPE_MILITARY:
	case ID_TYPE_POLICE:
	case ID_TYPE_PASSPORT:
	case ID_TYPE_BORANG_W:
	case ID_TYPE_SWN:
	case ID_TYPE_SAA:
	case ID_TYPE_PTW:
	case ID_TYPE_KPP:
	case ID_TYPE_KPT:
	case ID_TYPE_GMPC:
	case ID_TYPE_TEMP:
	{
		ret_val = VALID;
		break;
	}
	default:
	{
		ret_val = INVALID;
		break;
	}
}
return ret_val;
}




 /*** Added on 28 FEB 2005 for IJPN ***/

int get_other_gsc_problem_recs(char lappl_id[20], OTHER_GSC_PROBLEMS_T* other_gsc, char *sbranchcode,int *other_gsc_flag,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 07/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE];
	char branchcode[BRANCH_CODE_SIZE];

	char applstat;
	char kptno[KPT_SIZE];
	char collcenter[BRANCH_CODE_SIZE];
	char cardcolldate[DATE_SIZE];
	char idtype[ID_TYPE_SIZE];
	/* varchar idno[ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } idno;

	char userid[USER_ID_SIZE];
	/* varchar contactno[CONTACT_PERSON_NAME_SIZE]; */ 
struct { unsigned short len; unsigned char arr[31]; } contactno;

	char sscbranchcode[BRANCH_CODE_SIZE];
	long qticketno;
	/* varchar licidno[ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } licidno;

	char ownercat;
	/* varchar applremarks[SUPERVISOR_NOTE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[501]; } applremarks;

	int  applpriority;
	char timestamp[DATE_SIZE];
	char lapplid[LEGACY_APPLID_SIZE];

	short kptno_ind = -1;
	short collcenter_ind = -1;
	short cardcolldate_ind = -1;
	short idtype_ind = -1;
	short idno_ind = -1;
	short userid_ind = -1;
	short contactno_ind = -1;
	short sscbranchcode_ind = -1;
	short qticketno_ind = -1;
	short licidno_ind = -1;
	short ownercat_ind = -1;	
	short applremarks_ind = -1;
	short timestamp_ind = -1;
	short lapplid_ind = -1;

	char email[101]; //added by samsuri on 30 sept 2022
	short email_ind = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	#ifdef DEBUG
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : sbranchcode - %s", sbranchcode);
	#endif

	strcpy(branchcode, sbranchcode);

	#ifdef DEBUG
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : branchcode - %s", branchcode);
	#endif
	 /* the following select is included for IJPN on 12/04/05 */

	/* EXEC SQL SELECT APPLID INTO :appl_id
			FROM  APPNT_PROBL_DATA
			WHERE SSCBRANCHCODE = :branchcode
			AND   SENDFLAG = 'N'
			AND   ROWNUM = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 3;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select APPLID into :b0  from APPNT_PROBL_DATA where ((SSCBRA\
NCHCODE=:b1 and SENDFLAG='N') and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )166;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)appl_id;
 sqlstm.sqhstl[0] = (unsigned int  )20;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)branchcode;
 sqlstm.sqhstl[1] = (unsigned int  )7;
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




	  if((SQLCODE) && !(NO_DATA_FOUND))
		{
		 #ifdef DEBUG
			userlog(" GET_PROB_REC : get_other_gsc_problem_recs : Selecting appl_id from APPNT_PROBL_DATA failed : %s", SQLMSG);
		 #endif
			strcpy(prog_log.remarks,"GET_PROB_REC : get_other_gsc_problem_recs: Selecting appl_id from APPNT_PROBL_DATA failed");
			sprintf(excep_log.error_msg, "GET_PROB_REC : get_other_gsc_problem_recs: Selecting appl_id from APPNT_PROBL_DATA failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;
			log_error(ctx);
				
			return SELECT_ERROR;
		}
		else if(NO_DATA_FOUND)
		{
			#ifdef DEBUG
				userlog(" GET_PROB_REC : get_other_gsc_problem_recs : NO DATA FOUND in APPNT_PROBL_DATA table : %s", SQLMSG);
			#endif			
			*other_gsc_flag = 1;
			return GMPC_GOOD;
		}


	/* EXEC SQL SELECT APPLID,APPLSTAT,KPTNO,COLLCENTER,TO_CHAR(CARDCOLLDATE,'DDMMYYYY'),
			IDTYPE,IDNO,USERID,CONTACTNO,SSCBRANCHCODE,
			QTICKETNO,LICIDNO,OWNERCAT,SUBSTR(APPLREMARKS,1,150) APPLREMARKS,
			APPLPRIORITY,TO_CHAR(TIMESTAMP,'DDMMYYYY'),LEGAPPLID,EMAIL //samsuri added EMAIL on 28 sept 2022
		INTO
			:appl_id,:applstat,:kptno:kptno_ind,:collcenter:collcenter_ind,
			:cardcolldate:cardcolldate_ind,:idtype:idtype_ind,:idno:idno_ind,
			:userid:userid_ind,:contactno:contactno_ind,:sscbranchcode:sscbranchcode_ind,
			:qticketno:qticketno_ind,:licidno:licidno_ind,:ownercat:ownercat_ind,
			:applremarks:applremarks_ind,:applpriority,
			:timestamp:timestamp_ind,:lapplid:lapplid_ind,:email:email_ind //samsuri added email on 28 sept 2022
		FROM
			 APPLICATION 
		WHERE (APPLID = :appl_id)		
		AND	  APPLSTAT IN ('X','Q','T','H'); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 19;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select APPLID ,APPLSTAT ,KPTNO ,COLLCENTER ,TO_CHAR(CARDCOLL\
DATE,'DDMMYYYY') ,IDTYPE ,IDNO ,USERID ,CONTACTNO ,SSCBRANCHCODE ,QTICKETNO ,L\
ICIDNO ,OWNERCAT ,SUBSTR(APPLREMARKS,1,150) APPLREMARKS ,APPLPRIORITY ,TO_CHAR\
( timestamp ,'DDMMYYYY') ,LEGAPPLID ,EMAIL into :b0,:b1,:b2:b3,:b4:b5,:b6:b7,:\
b8:b9,:b10:b11,:b12:b13,:b14:b15,:b16:b17,:b18:b19,:b20:b21,:b22:b23,:b24:b25,\
:b26,:b27:b28,:b29:b30,:b31:b32  from APPLICATION where (APPLID=:b0 and APPLST\
AT in ('X','Q','T','H'))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )189;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)appl_id;
 sqlstm.sqhstl[0] = (unsigned int  )20;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&applstat;
 sqlstm.sqhstl[1] = (unsigned int  )1;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)kptno;
 sqlstm.sqhstl[2] = (unsigned int  )13;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&kptno_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)collcenter;
 sqlstm.sqhstl[3] = (unsigned int  )7;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&collcenter_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)cardcolldate;
 sqlstm.sqhstl[4] = (unsigned int  )9;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&cardcolldate_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)idtype;
 sqlstm.sqhstl[5] = (unsigned int  )3;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&idtype_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&idno;
 sqlstm.sqhstl[6] = (unsigned int  )18;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&idno_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)userid;
 sqlstm.sqhstl[7] = (unsigned int  )9;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&userid_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&contactno;
 sqlstm.sqhstl[8] = (unsigned int  )33;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&contactno_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)sscbranchcode;
 sqlstm.sqhstl[9] = (unsigned int  )7;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&sscbranchcode_ind;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&qticketno;
 sqlstm.sqhstl[10] = (unsigned int  )sizeof(long);
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)&qticketno_ind;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&licidno;
 sqlstm.sqhstl[11] = (unsigned int  )18;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)&licidno_ind;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&ownercat;
 sqlstm.sqhstl[12] = (unsigned int  )1;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)&ownercat_ind;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)&applremarks;
 sqlstm.sqhstl[13] = (unsigned int  )503;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)&applremarks_ind;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
 sqlstm.sqhstv[14] = (         void  *)&applpriority;
 sqlstm.sqhstl[14] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[14] = (         int  )0;
 sqlstm.sqindv[14] = (         void  *)0;
 sqlstm.sqinds[14] = (         int  )0;
 sqlstm.sqharm[14] = (unsigned int  )0;
 sqlstm.sqadto[14] = (unsigned short )0;
 sqlstm.sqtdso[14] = (unsigned short )0;
 sqlstm.sqhstv[15] = (         void  *)timestamp;
 sqlstm.sqhstl[15] = (unsigned int  )9;
 sqlstm.sqhsts[15] = (         int  )0;
 sqlstm.sqindv[15] = (         void  *)&timestamp_ind;
 sqlstm.sqinds[15] = (         int  )0;
 sqlstm.sqharm[15] = (unsigned int  )0;
 sqlstm.sqadto[15] = (unsigned short )0;
 sqlstm.sqtdso[15] = (unsigned short )0;
 sqlstm.sqhstv[16] = (         void  *)lapplid;
 sqlstm.sqhstl[16] = (unsigned int  )25;
 sqlstm.sqhsts[16] = (         int  )0;
 sqlstm.sqindv[16] = (         void  *)&lapplid_ind;
 sqlstm.sqinds[16] = (         int  )0;
 sqlstm.sqharm[16] = (unsigned int  )0;
 sqlstm.sqadto[16] = (unsigned short )0;
 sqlstm.sqtdso[16] = (unsigned short )0;
 sqlstm.sqhstv[17] = (         void  *)email;
 sqlstm.sqhstl[17] = (unsigned int  )101;
 sqlstm.sqhsts[17] = (         int  )0;
 sqlstm.sqindv[17] = (         void  *)&email_ind;
 sqlstm.sqinds[17] = (         int  )0;
 sqlstm.sqharm[17] = (unsigned int  )0;
 sqlstm.sqadto[17] = (unsigned short )0;
 sqlstm.sqtdso[17] = (unsigned short )0;
 sqlstm.sqhstv[18] = (         void  *)appl_id;
 sqlstm.sqhstl[18] = (unsigned int  )20;
 sqlstm.sqhsts[18] = (         int  )0;
 sqlstm.sqindv[18] = (         void  *)0;
 sqlstm.sqinds[18] = (         int  )0;
 sqlstm.sqharm[18] = (unsigned int  )0;
 sqlstm.sqadto[18] = (unsigned short )0;
 sqlstm.sqtdso[18] = (unsigned short )0;
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


		

		if((SQLCODE) && !(NO_DATA_FOUND))
		{
		 #ifdef DEBUG
			userlog(" GET_PROB_REC : get_other_gsc_problem_recs : Selecting other gsc problem records from APPLICATION & PROBL_RECORD failed : %s", SQLMSG);
		 #endif
			strcpy(prog_log.remarks,"GET_PROB_REC : get_other_gsc_problem_recs: Selecting other gsc problem records failed from APPLICATION & PROBL_RECORD");
			sprintf(excep_log.error_msg, "GET_PROB_REC : get_other_gsc_problem_recs: Selecting other gsc problem records failed from APPLICATION & PROBL_RECORD : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;
			log_error(ctx);
				
			return SELECT_ERROR;
		}
		else if(NO_DATA_FOUND)
		{
			#ifdef DEBUG
				userlog(" GET_PROB_REC : get_other_gsc_problem_recs : NO DATA FOUND in APPL_MISSED_OPEX table for given APPLID : %s", SQLMSG);
			#endif
			/* EXEC SQL UPDATE APPNT_PROBL_DATA 
					SET SENDFLAG = 'Y'
					WHERE APPLID = :appl_id; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 19;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update APPNT_PROBL_DATA  set SENDFLAG='Y' where APPLID=:b0";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )280;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)appl_id;
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



			if(SQLCODE) 
			{
			#ifdef DEBUG
			userlog(" GET_PROB_REC : get_other_gsc_problem_recs : Updating SENDFLAG in APPNT_PROBL_DATA failed : %s", SQLMSG);
			#endif
			strcpy(prog_log.remarks,"GET_PROB_REC : get_other_gsc_problem_recs: Updating SENDFLAG in APPNT_PROBL_DATA failed");
			sprintf(excep_log.error_msg, "GET_PROB_REC : get_other_gsc_problem_recs: Updating SENDFLAG in APPNT_PROBL_DATA failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;
			log_error(ctx);
				
			return UPDATE_ERROR;
			}
			*other_gsc_flag = 1;
			return GMPC_GOOD;
		}

		 setnull(applremarks);
		 setnull(idno);
		 setnull(licidno);
		 setnull(contactno);


	#ifdef DEBUG
		userlog(" ");
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : appl_id - %s", appl_id);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : applstat - %c", applstat);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : kptno - %s", kptno);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : collcenter - %s", collcenter);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : cardcolldate - %s", cardcolldate);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : idtype - %s", idtype);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : idno - %s", idno.arr);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : userid - %s", userid);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : contactno - %s", contactno.arr);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : sscbranchcode - %s", sscbranchcode);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : qticketno - %ld", qticketno);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : licidno - %s", licidno.arr);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : ownercat - %c", ownercat);		
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : applremarks - %s", applremarks.arr);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : applpriority - %d", applpriority);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : timestamp - %s", timestamp);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : lapplid - %s", lapplid);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : email - %s", email); //added by samsuri on 28 sept 2022
		userlog(" ");
	#endif
	
		strcpy(lappl_id,appl_id);
		

	#ifdef DEBUG			
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : lappl_id - %s", lappl_id);	
	#endif

		other_gsc->applstat = applstat;
		strcpy(other_gsc->kptno,kptno);
		strcpy(other_gsc->collcenter,collcenter);
		strcpy(other_gsc->cardcolldate,cardcolldate);
		strcpy(other_gsc->idtype,idtype);
		strcpy(other_gsc->idno,idno.arr);
		strcpy(other_gsc->userid,userid);
		strcpy(other_gsc->contactno,contactno.arr);
		strcpy(other_gsc->sscbranchcode,sscbranchcode);
		other_gsc->qticketno = qticketno;
		strcpy(other_gsc->licidno,licidno.arr);
		other_gsc->ownercat = ownercat;		
		strcpy(other_gsc->applremarks,applremarks.arr);
		other_gsc->applpriority = applpriority;
		strcpy(other_gsc->timestamp,timestamp);
		strcpy(other_gsc->legapplid,lapplid);
		strcpy(other_gsc->email,email); //added by samsuri on 28 sept 2022

	#ifdef DEBUG
		userlog(" ");		
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : other_gsc->applstat - %c", other_gsc->applstat);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : other_gsc->kptno - %s", other_gsc->kptno);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : other_gsc->collcenter - %s", other_gsc->collcenter);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : other_gsc->cardcolldate - %s", other_gsc->cardcolldate);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : other_gsc->idtype - %s", other_gsc->idtype);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : other_gsc->idno - %s", other_gsc->idno);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : other_gsc->userid - %s", other_gsc->userid);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : other_gsc->contactno - %s", other_gsc->contactno);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : other_gsc->sscbranchcode - %s", other_gsc->sscbranchcode);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : other_gsc->qticketno - %ld", other_gsc->qticketno);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : other_gsc->licidno - %s", other_gsc->licidno);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : other_gsc->ownercat - %c", other_gsc->ownercat);		
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : other_gsc->applremarks - %s", other_gsc->applremarks);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : other_gsc->applpriority - %d", other_gsc->applpriority);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : other_gsc->timestamp - %s", other_gsc->timestamp);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : other_gsc->legapplid - %s", other_gsc->legapplid);
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : other_gsc->email - %s", other_gsc->email); //added by samsuri on 28 sept 2022
		userlog(" ");
	#endif

		
	#ifdef DEBUG
		userlog("GET_PROB_REC : get_other_gsc_problem_recs : Record selected successfully");
	#endif


	return SUCCESS;
}


int get_appl_missed_opex_rec(char lappl_id[20], APPL_MISSED_OPEX_T *missed_opex_rec,int *missed_opex_flag,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 07/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		/* varchar hv_address1[31] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } hv_address1
 = {0};

		short int hv_address1_ind = 0;
		/* varchar hv_address2[31] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } hv_address2
 = {0};

		short int hv_address2_ind = 0;
		/* varchar hv_address3[31] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } hv_address3
 = {0};

		short int hv_address3_ind = 0;
		char hv_birthdate[9];
		short int hv_birthdate_ind = 0;
		int hv_birthdistrictcode;
		short int hv_birthdistrictcode_ind = 0;
		char hv_birthplacecode[9];
		short int hv_birthplacecode_ind = 0;
		char hv_birthstatecode[3];
		short int hv_birthstatecode_ind = 0;
		int hv_cardlostcnt;
		short int hv_cardlostcnt_ind = 0;
		char hv_citizennationcode[5];
		short int hv_citizennationcode_ind = 0;
		int hv_citycode;
		short int hv_citycode_ind = 0;
		char hv_colourarticlecode[3];
		short int hv_colourarticlecode_ind = 0;
		/* varchar hv_currlongname[151] = {0}; */ 
struct { unsigned short len; unsigned char arr[151]; } hv_currlongname
 = {0};

		short int hv_currlongname_ind = 0;
		/* varchar hv_currshortname1[21] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } hv_currshortname1
 = {0};

		short int hv_currshortname1_ind = 0;
		/* varchar hv_currshortname2[21] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } hv_currshortname2
 = {0};

		short int hv_currshortname2_ind = 0;
		/* varchar hv_fatheridno[16] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_fatheridno
 = {0};

		short int hv_fatheridno_ind = 0;
		char hv_fatheridtype[3];
		short int hv_fatheridtype_ind = 0;
		char hv_gender;
		short int hv_gender_ind = 0;
		/* varchar hv_gmpcshortname1[31] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } hv_gmpcshortname1
 = {0};

		short int hv_gmpcshortname1_ind = 0;
		/* varchar hv_gmpcshortname2[31] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } hv_gmpcshortname2
 = {0};

		short int hv_gmpcshortname2_ind = 0;
		/* varchar hv_gmpcshortname3[21] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } hv_gmpcshortname3
 = {0};

		short int hv_gmpcshortname3_ind = 0;
		char hv_hkind;
		short int hv_hkind_ind = 0;
		char hv_iccolorcode;
		short int hv_iccolorcode_ind = 0;
		/* varchar hv_idnumber[16] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_idnumber
 = {0};

		short int hv_idnumber_ind = 0;
		char hv_idtype[3];
		short int hv_idtype_ind = 0;
		char hv_immexpirydate[9];
		short int hv_immexpirydate_ind = 0;
		char hv_immrefdate[9];
		short int hv_immrefdate_ind = 0;
		/* varchar hv_immrefno[30] = {0}; */ 
struct { unsigned short len; unsigned char arr[30]; } hv_immrefno
 = {0};

		short int hv_immrefno_ind = 0;
		char hv_kppno[9];
		short int hv_kppno_ind = 0;
		char hv_kptno[13];
		short int hv_kptno_ind = 0;
		char hv_ktindcode[3];
		short int hv_ktindcode_ind = 0;
		char hv_lastcardissuedate[9];
		short int hv_lastcardissuedate_ind = 0;
		char hv_militaryid[12];
		short int hv_militaryid_ind = 0;
		/* varchar hv_motheridno[16] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_motheridno
 = {0};

		short int hv_motheridno_ind = 0;
		char hv_motheridtype[3];
		short int hv_motheridtype_ind = 0;
		/* varchar hv_origname[151] = {0}; */ 
struct { unsigned short len; unsigned char arr[151]; } hv_origname
 = {0};

		short int hv_origname_ind = 0;
		char hv_orignameind;
		short int hv_orignameind_ind = 0;
		char hv_passportissuecountry[5];
		short int hv_passportissuecountry_ind = 0;
		char hv_passportissuedate[9];
		short int hv_passportissuedate_ind = 0;
		/* varchar hv_passportno[16] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_passportno
 = {0};

		short int hv_passportno_ind = 0;
		char hv_permitissuedate[9];
		short int hv_permitissuedate_ind = 0;
		/* varchar hv_permitno[13] = {0}; */ 
struct { unsigned short len; unsigned char arr[13]; } hv_permitno
 = {0};

		short int hv_permitno_ind = 0;
		char hv_policeid[12];
		short int hv_policeid_ind = 0;
		char hv_policeretiredate[9];
		short int hv_policeretiredate_ind = 0;
		char hv_polmilitarycode;
		short int hv_polmilitarycode_ind = 0;
		char hv_polmilitaryjoindate[9];
		short int hv_polmilitaryjoindate_ind = 0;
		/* varchar hv_postcode[6] = {0}; */ 
struct { unsigned short len; unsigned char arr[6]; } hv_postcode
 = {0};

		short int hv_postcode_ind = 0;
		char hv_racecode[5];
		short int hv_racecode_ind = 0;
		char hv_relationcode[3];
		short int hv_relationcode_ind = 0;
		char hv_religioncode;
		short int hv_religioncode_ind = 0;
		char hv_residentstat;
		short int hv_residentstat_ind = 0;
		/* varchar hv_sponsorcurrlongname[181] = {0}; */ 
struct { unsigned short len; unsigned char arr[181]; } hv_sponsorcurrlongname
 = {0};

		short int hv_sponsorcurrlongname_ind = 0;
		/* varchar hv_sponsoridno[16] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_sponsoridno
 = {0};

		short int hv_sponsoridno_ind = 0;
		char hv_sponsoridtype[3];
		short int hv_sponsoridtype_ind = 0;
		char hv_statecode[3];
		short int hv_statecode_ind = 0;
		char hv_unknownbirthind;
		short int hv_unknownbirthind_ind = 0;		
		char hv_applid[APP_ID_SIZE];

		char hv_ktstartdate[DATE_SIZE];
		short hv_ktstartdate_ind = 0;
		char hv_ktenddate[DATE_SIZE];
		short hv_ktenddate_ind = 0;
		char hv_ptissuedate[DATE_SIZE];
		short hv_ptissuedate_ind = 0;
		char hv_ptwno[PT_WNO_SIZE];
		short hv_ptwno_ind = 0;
		char hv_birthregndate[DATE_SIZE];
		short hv_birthregndate_ind = 0;
		char hv_citizenshipacqdate[DATE_SIZE];
		short hv_citizenshipacqdate_ind = 0;


	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(hv_applid, lappl_id);

	#ifdef DEBUG			
			userlog("GET_PROB_REC : get_appl_missed_opex_rec :lappl_id): %s",lappl_id);
			userlog("GET_PROB_REC : get_appl_missed_opex_rec :hv_applid): %s",hv_applid);
	#endif

	/* EXEC SQL 
	SELECT ADDRESS1, ADDRESS2, ADDRESS3, TO_CHAR(BIRTHDATE, 'DDMMYYYY'), 
	BIRTHDISTRICTCODE, BIRTHPLACECODE, BIRTHSTATECODE, CARDLOSTCNT, 
	CITIZENNATIONCODE, CITYCODE, COLOURARTICLECODE, CURRLONGNAME, 
	CURRSHORTNAME1, CURRSHORTNAME2, FATHERIDNO, FATHERIDTYPE, GENDER, 
	GMPCSHORTNAME1, GMPCSHORTNAME2, GMPCSHORTNAME3, HKIND, ICCOLORCODE, 
	IDNUMBER, IDTYPE, TO_CHAR(IMMEXPIRYDATE, 'DDMMYYYY'), 
	TO_CHAR(IMMREFDATE, 'DDMMYYYY'), IMMREFNO, KPPNO, KPTNO, KTINDCODE, 
	TO_CHAR(LASTCARDISSUEDATE, 'DDMMYYYY'), MILITARYID, MOTHERIDNO, 
	MOTHERIDTYPE, ORIGNAME, ORIGNAMEIND, PASSPORTISSUECOUNTRY, 
	TO_CHAR(PASSPORTISSUEDATE, 'DDMMYYYY'), PASSPORTNO, 
	TO_CHAR(PERMITISSUEDATE, 'DDMMYYYY'), PERMITNO, POLICEID, 
	TO_CHAR(POLICERETIREDATE, 'DDMMYYYY'), POLMILITARYCODE, 
	TO_CHAR(POLMILITARYJOINDATE, 'DDMMYYYY'), POSTCODE, RACECODE, 
	RELATIONCODE, RELIGIONCODE, RESIDENTSTAT, SPONSORCURRLONGNAME, 
	SPONSORIDNO, SPONSORIDTYPE, STATECODE, UNKNOWNBIRTHIND,
	TO_CHAR(CITIZENSHIPACQDATE, 'DDMMYYYY'),TO_CHAR(KTSTARTDATE,'DDMMYYYY'),
	TO_CHAR(KTENDDATE,'DDMMYYYY'), TO_CHAR(PTISSUEDATE,'DDMMYYYY'), PTWNO,
	TO_CHAR(BIRTHREGNDATE,'DDMMYYYY')
	INTO :hv_address1:hv_address1_ind, :hv_address2:hv_address2_ind, 
	:hv_address3:hv_address3_ind, :hv_birthdate:hv_birthdate_ind, 
	:hv_birthdistrictcode:hv_birthdistrictcode_ind, :hv_birthplacecode:hv_birthplacecode_ind, 
	:hv_birthstatecode:hv_birthstatecode_ind, :hv_cardlostcnt:hv_cardlostcnt_ind, 
	:hv_citizennationcode:hv_citizennationcode_ind, :hv_citycode:hv_citycode_ind, 
	:hv_colourarticlecode:hv_colourarticlecode_ind, 
	:hv_currlongname:hv_currlongname_ind, :hv_currshortname1:hv_currshortname1_ind, 
	:hv_currshortname2:hv_currshortname2_ind, :hv_fatheridno:hv_fatheridno_ind, 
	:hv_fatheridtype:hv_fatheridtype_ind, :hv_gender:hv_gender_ind, 
	:hv_gmpcshortname1:hv_gmpcshortname1_ind, 
	:hv_gmpcshortname2:hv_gmpcshortname2_ind, 
	:hv_gmpcshortname3:hv_gmpcshortname3_ind, :hv_hkind:hv_hkind_ind, 
	:hv_iccolorcode:hv_iccolorcode_ind, :hv_idnumber:hv_idnumber_ind, 
	:hv_idtype:hv_idtype_ind, :hv_immexpirydate:hv_immexpirydate_ind, 
	:hv_immrefdate:hv_immrefdate_ind, :hv_immrefno:hv_immrefno_ind, 
	:hv_kppno:hv_kppno_ind, :hv_kptno:hv_kptno_ind, :hv_ktindcode:hv_ktindcode_ind, 
	:hv_lastcardissuedate:hv_lastcardissuedate_ind, 
	:hv_militaryid:hv_militaryid_ind, :hv_motheridno:hv_motheridno_ind, 
	:hv_motheridtype:hv_motheridtype_ind, :hv_origname:hv_origname_ind, 
	:hv_orignameind:hv_orignameind_ind, 
	:hv_passportissuecountry:hv_passportissuecountry_ind, 
	:hv_passportissuedate:hv_passportissuedate_ind, 
	:hv_passportno:hv_passportno_ind, :hv_permitissuedate:hv_permitissuedate_ind, 
	:hv_permitno:hv_permitno_ind, :hv_policeid:hv_policeid_ind, 
	:hv_policeretiredate:hv_policeretiredate_ind, 
	:hv_polmilitarycode:hv_polmilitarycode_ind, 
	:hv_polmilitaryjoindate:hv_polmilitaryjoindate_ind, 
	:hv_postcode:hv_postcode_ind, :hv_racecode:hv_racecode_ind, 
	:hv_relationcode:hv_relationcode_ind, :hv_religioncode:hv_religioncode_ind, 
	:hv_residentstat:hv_residentstat_ind, 
	:hv_sponsorcurrlongname:hv_sponsorcurrlongname_ind, 
	:hv_sponsoridno:hv_sponsoridno_ind, :hv_sponsoridtype:hv_sponsoridtype_ind, 
	:hv_statecode:hv_statecode_ind, :hv_unknownbirthind:hv_unknownbirthind_ind,
	:hv_citizenshipacqdate:hv_citizenshipacqdate_ind,
	:hv_ktstartdate:hv_ktstartdate_ind,:hv_ktenddate:hv_ktenddate_ind,
	:hv_ptissuedate:hv_ptissuedate_ind,:hv_ptwno:hv_ptwno_ind,
	:hv_birthregndate:hv_birthregndate_ind
	FROM APPL_MISSED_OPEX WHERE APPLID = :hv_applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 62;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft(&pcCtx,
   "select ADDRESS1 ,ADDRESS2 ,ADDRESS3 ,TO_CHAR(BIRTHDATE,'DDMMYYYY') ,BIRT\
HDISTRICTCODE ,BIRTHPLACECODE ,BIRTHSTATECODE ,CARDLOSTCNT ,CITIZENNATIONCOD\
E ,CITYCODE ,COLOURARTICLECODE ,CURRLONGNAME ,CURRSHORTNAME1 ,CURRSHORTNAME2\
 ,FATHERIDNO ,FATHERIDTYPE ,GENDER ,GMPCSHORTNAME1 ,GMPCSHORTNAME2 ,GMPCSHOR\
TNAME3 ,HKIND ,ICCOLORCODE ,IDNUMBER ,IDTYPE ,TO_CHAR(IMMEXPIRYDATE,'DDMMYYY\
Y') ,TO_CHAR(IMMREFDATE,'DDMMYYYY') ,IMMREFNO ,KPPNO ,KPTNO ,KTINDCODE ,TO_C\
HAR(LASTCARDISSUEDATE,'DDMMYYYY') ,MILITARYID ,MOTHERIDNO ,MOTHERIDTYPE ,ORI\
GNAME ,ORIGNAMEIND ,PASSPORTISSUECOUNTRY ,TO_CHAR(PASSPORTISSUEDATE,'DDMMYYY\
Y') ,PASSPORTNO ,TO_CHAR(PERMITISSUEDATE,'DDMMYYYY') ,PERMITNO ,POLICEID ,TO\
_CHAR(POLICERETIREDATE,'DDMMYYYY') ,POLMILITARYCODE ,TO_CHAR(POLMILITARYJOIN\
DATE,'DDMMYYYY') ,POSTCODE ,RACECODE ,RELATIONCODE ,RELIGIONCODE ,RESIDENTST\
AT ,SPONSORCURRLONGNAME ,SPONSORIDNO ,SPONSORIDTYPE ,STATECODE ,UNKNOWNBIRTH\
IND ,TO_CHAR(CITIZENSHIPACQDATE,'DDMMYYYY') ,TO_CHAR(KTSTARTDATE,'DDMMYYYY')\
 ,TO_CHAR(KTENDDATE,'DDMMYYYY') ,TO_CHAR");
 sqlstm.stmt = "(PTISSUEDATE,'DDMMYYYY') ,PTWNO ,TO_CHAR(BIRTHREGNDATE,'DDMM\
YYYY') into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11,:b12:b13,:b14:b15,:b16\
:b17,:b18:b19,:b20:b21,:b22:b23,:b24:b25,:b26:b27,:b28:b29,:b30:b31,:b32:b33,:\
b34:b35,:b36:b37,:b38:b39,:b40:b41,:b42:b43,:b44:b45,:b46:b47,:b48:b49,:b50:b5\
1,:b52:b53,:b54:b55,:b56:b57,:b58:b59,:b60:b61,:b62:b63,:b64:b65,:b66:b67,:b68\
:b69,:b70:b71,:b72:b73,:b74:b75,:b76:b77,:b78:b79,:b80:b81,:b82:b83,:b84:b85,:\
b86:b87,:b88:b89,:b90:b91,:b92:b93,:b94:b95,:b96:b97,:b98:b99,:b100:b101,:b102\
:b103,:b104:b105,:b106:b107,:b108:b109,:b110:b111,:b112:b113,:b114:b115,:b116:\
b117,:b118:b119,:b120:b121  from APPL_MISSED_OPEX where APPLID=:b122";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )299;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_address1;
 sqlstm.sqhstl[0] = (unsigned int  )33;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&hv_address1_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&hv_address2;
 sqlstm.sqhstl[1] = (unsigned int  )33;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&hv_address2_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&hv_address3;
 sqlstm.sqhstl[2] = (unsigned int  )33;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&hv_address3_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)hv_birthdate;
 sqlstm.sqhstl[3] = (unsigned int  )9;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&hv_birthdate_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&hv_birthdistrictcode;
 sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&hv_birthdistrictcode_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)hv_birthplacecode;
 sqlstm.sqhstl[5] = (unsigned int  )9;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&hv_birthplacecode_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)hv_birthstatecode;
 sqlstm.sqhstl[6] = (unsigned int  )3;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&hv_birthstatecode_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&hv_cardlostcnt;
 sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&hv_cardlostcnt_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)hv_citizennationcode;
 sqlstm.sqhstl[8] = (unsigned int  )5;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&hv_citizennationcode_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&hv_citycode;
 sqlstm.sqhstl[9] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&hv_citycode_ind;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)hv_colourarticlecode;
 sqlstm.sqhstl[10] = (unsigned int  )3;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)&hv_colourarticlecode_ind;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&hv_currlongname;
 sqlstm.sqhstl[11] = (unsigned int  )153;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)&hv_currlongname_ind;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&hv_currshortname1;
 sqlstm.sqhstl[12] = (unsigned int  )23;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)&hv_currshortname1_ind;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)&hv_currshortname2;
 sqlstm.sqhstl[13] = (unsigned int  )23;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)&hv_currshortname2_ind;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
 sqlstm.sqhstv[14] = (         void  *)&hv_fatheridno;
 sqlstm.sqhstl[14] = (unsigned int  )18;
 sqlstm.sqhsts[14] = (         int  )0;
 sqlstm.sqindv[14] = (         void  *)&hv_fatheridno_ind;
 sqlstm.sqinds[14] = (         int  )0;
 sqlstm.sqharm[14] = (unsigned int  )0;
 sqlstm.sqadto[14] = (unsigned short )0;
 sqlstm.sqtdso[14] = (unsigned short )0;
 sqlstm.sqhstv[15] = (         void  *)hv_fatheridtype;
 sqlstm.sqhstl[15] = (unsigned int  )3;
 sqlstm.sqhsts[15] = (         int  )0;
 sqlstm.sqindv[15] = (         void  *)&hv_fatheridtype_ind;
 sqlstm.sqinds[15] = (         int  )0;
 sqlstm.sqharm[15] = (unsigned int  )0;
 sqlstm.sqadto[15] = (unsigned short )0;
 sqlstm.sqtdso[15] = (unsigned short )0;
 sqlstm.sqhstv[16] = (         void  *)&hv_gender;
 sqlstm.sqhstl[16] = (unsigned int  )1;
 sqlstm.sqhsts[16] = (         int  )0;
 sqlstm.sqindv[16] = (         void  *)&hv_gender_ind;
 sqlstm.sqinds[16] = (         int  )0;
 sqlstm.sqharm[16] = (unsigned int  )0;
 sqlstm.sqadto[16] = (unsigned short )0;
 sqlstm.sqtdso[16] = (unsigned short )0;
 sqlstm.sqhstv[17] = (         void  *)&hv_gmpcshortname1;
 sqlstm.sqhstl[17] = (unsigned int  )33;
 sqlstm.sqhsts[17] = (         int  )0;
 sqlstm.sqindv[17] = (         void  *)&hv_gmpcshortname1_ind;
 sqlstm.sqinds[17] = (         int  )0;
 sqlstm.sqharm[17] = (unsigned int  )0;
 sqlstm.sqadto[17] = (unsigned short )0;
 sqlstm.sqtdso[17] = (unsigned short )0;
 sqlstm.sqhstv[18] = (         void  *)&hv_gmpcshortname2;
 sqlstm.sqhstl[18] = (unsigned int  )33;
 sqlstm.sqhsts[18] = (         int  )0;
 sqlstm.sqindv[18] = (         void  *)&hv_gmpcshortname2_ind;
 sqlstm.sqinds[18] = (         int  )0;
 sqlstm.sqharm[18] = (unsigned int  )0;
 sqlstm.sqadto[18] = (unsigned short )0;
 sqlstm.sqtdso[18] = (unsigned short )0;
 sqlstm.sqhstv[19] = (         void  *)&hv_gmpcshortname3;
 sqlstm.sqhstl[19] = (unsigned int  )23;
 sqlstm.sqhsts[19] = (         int  )0;
 sqlstm.sqindv[19] = (         void  *)&hv_gmpcshortname3_ind;
 sqlstm.sqinds[19] = (         int  )0;
 sqlstm.sqharm[19] = (unsigned int  )0;
 sqlstm.sqadto[19] = (unsigned short )0;
 sqlstm.sqtdso[19] = (unsigned short )0;
 sqlstm.sqhstv[20] = (         void  *)&hv_hkind;
 sqlstm.sqhstl[20] = (unsigned int  )1;
 sqlstm.sqhsts[20] = (         int  )0;
 sqlstm.sqindv[20] = (         void  *)&hv_hkind_ind;
 sqlstm.sqinds[20] = (         int  )0;
 sqlstm.sqharm[20] = (unsigned int  )0;
 sqlstm.sqadto[20] = (unsigned short )0;
 sqlstm.sqtdso[20] = (unsigned short )0;
 sqlstm.sqhstv[21] = (         void  *)&hv_iccolorcode;
 sqlstm.sqhstl[21] = (unsigned int  )1;
 sqlstm.sqhsts[21] = (         int  )0;
 sqlstm.sqindv[21] = (         void  *)&hv_iccolorcode_ind;
 sqlstm.sqinds[21] = (         int  )0;
 sqlstm.sqharm[21] = (unsigned int  )0;
 sqlstm.sqadto[21] = (unsigned short )0;
 sqlstm.sqtdso[21] = (unsigned short )0;
 sqlstm.sqhstv[22] = (         void  *)&hv_idnumber;
 sqlstm.sqhstl[22] = (unsigned int  )18;
 sqlstm.sqhsts[22] = (         int  )0;
 sqlstm.sqindv[22] = (         void  *)&hv_idnumber_ind;
 sqlstm.sqinds[22] = (         int  )0;
 sqlstm.sqharm[22] = (unsigned int  )0;
 sqlstm.sqadto[22] = (unsigned short )0;
 sqlstm.sqtdso[22] = (unsigned short )0;
 sqlstm.sqhstv[23] = (         void  *)hv_idtype;
 sqlstm.sqhstl[23] = (unsigned int  )3;
 sqlstm.sqhsts[23] = (         int  )0;
 sqlstm.sqindv[23] = (         void  *)&hv_idtype_ind;
 sqlstm.sqinds[23] = (         int  )0;
 sqlstm.sqharm[23] = (unsigned int  )0;
 sqlstm.sqadto[23] = (unsigned short )0;
 sqlstm.sqtdso[23] = (unsigned short )0;
 sqlstm.sqhstv[24] = (         void  *)hv_immexpirydate;
 sqlstm.sqhstl[24] = (unsigned int  )9;
 sqlstm.sqhsts[24] = (         int  )0;
 sqlstm.sqindv[24] = (         void  *)&hv_immexpirydate_ind;
 sqlstm.sqinds[24] = (         int  )0;
 sqlstm.sqharm[24] = (unsigned int  )0;
 sqlstm.sqadto[24] = (unsigned short )0;
 sqlstm.sqtdso[24] = (unsigned short )0;
 sqlstm.sqhstv[25] = (         void  *)hv_immrefdate;
 sqlstm.sqhstl[25] = (unsigned int  )9;
 sqlstm.sqhsts[25] = (         int  )0;
 sqlstm.sqindv[25] = (         void  *)&hv_immrefdate_ind;
 sqlstm.sqinds[25] = (         int  )0;
 sqlstm.sqharm[25] = (unsigned int  )0;
 sqlstm.sqadto[25] = (unsigned short )0;
 sqlstm.sqtdso[25] = (unsigned short )0;
 sqlstm.sqhstv[26] = (         void  *)&hv_immrefno;
 sqlstm.sqhstl[26] = (unsigned int  )32;
 sqlstm.sqhsts[26] = (         int  )0;
 sqlstm.sqindv[26] = (         void  *)&hv_immrefno_ind;
 sqlstm.sqinds[26] = (         int  )0;
 sqlstm.sqharm[26] = (unsigned int  )0;
 sqlstm.sqadto[26] = (unsigned short )0;
 sqlstm.sqtdso[26] = (unsigned short )0;
 sqlstm.sqhstv[27] = (         void  *)hv_kppno;
 sqlstm.sqhstl[27] = (unsigned int  )9;
 sqlstm.sqhsts[27] = (         int  )0;
 sqlstm.sqindv[27] = (         void  *)&hv_kppno_ind;
 sqlstm.sqinds[27] = (         int  )0;
 sqlstm.sqharm[27] = (unsigned int  )0;
 sqlstm.sqadto[27] = (unsigned short )0;
 sqlstm.sqtdso[27] = (unsigned short )0;
 sqlstm.sqhstv[28] = (         void  *)hv_kptno;
 sqlstm.sqhstl[28] = (unsigned int  )13;
 sqlstm.sqhsts[28] = (         int  )0;
 sqlstm.sqindv[28] = (         void  *)&hv_kptno_ind;
 sqlstm.sqinds[28] = (         int  )0;
 sqlstm.sqharm[28] = (unsigned int  )0;
 sqlstm.sqadto[28] = (unsigned short )0;
 sqlstm.sqtdso[28] = (unsigned short )0;
 sqlstm.sqhstv[29] = (         void  *)hv_ktindcode;
 sqlstm.sqhstl[29] = (unsigned int  )3;
 sqlstm.sqhsts[29] = (         int  )0;
 sqlstm.sqindv[29] = (         void  *)&hv_ktindcode_ind;
 sqlstm.sqinds[29] = (         int  )0;
 sqlstm.sqharm[29] = (unsigned int  )0;
 sqlstm.sqadto[29] = (unsigned short )0;
 sqlstm.sqtdso[29] = (unsigned short )0;
 sqlstm.sqhstv[30] = (         void  *)hv_lastcardissuedate;
 sqlstm.sqhstl[30] = (unsigned int  )9;
 sqlstm.sqhsts[30] = (         int  )0;
 sqlstm.sqindv[30] = (         void  *)&hv_lastcardissuedate_ind;
 sqlstm.sqinds[30] = (         int  )0;
 sqlstm.sqharm[30] = (unsigned int  )0;
 sqlstm.sqadto[30] = (unsigned short )0;
 sqlstm.sqtdso[30] = (unsigned short )0;
 sqlstm.sqhstv[31] = (         void  *)hv_militaryid;
 sqlstm.sqhstl[31] = (unsigned int  )12;
 sqlstm.sqhsts[31] = (         int  )0;
 sqlstm.sqindv[31] = (         void  *)&hv_militaryid_ind;
 sqlstm.sqinds[31] = (         int  )0;
 sqlstm.sqharm[31] = (unsigned int  )0;
 sqlstm.sqadto[31] = (unsigned short )0;
 sqlstm.sqtdso[31] = (unsigned short )0;
 sqlstm.sqhstv[32] = (         void  *)&hv_motheridno;
 sqlstm.sqhstl[32] = (unsigned int  )18;
 sqlstm.sqhsts[32] = (         int  )0;
 sqlstm.sqindv[32] = (         void  *)&hv_motheridno_ind;
 sqlstm.sqinds[32] = (         int  )0;
 sqlstm.sqharm[32] = (unsigned int  )0;
 sqlstm.sqadto[32] = (unsigned short )0;
 sqlstm.sqtdso[32] = (unsigned short )0;
 sqlstm.sqhstv[33] = (         void  *)hv_motheridtype;
 sqlstm.sqhstl[33] = (unsigned int  )3;
 sqlstm.sqhsts[33] = (         int  )0;
 sqlstm.sqindv[33] = (         void  *)&hv_motheridtype_ind;
 sqlstm.sqinds[33] = (         int  )0;
 sqlstm.sqharm[33] = (unsigned int  )0;
 sqlstm.sqadto[33] = (unsigned short )0;
 sqlstm.sqtdso[33] = (unsigned short )0;
 sqlstm.sqhstv[34] = (         void  *)&hv_origname;
 sqlstm.sqhstl[34] = (unsigned int  )153;
 sqlstm.sqhsts[34] = (         int  )0;
 sqlstm.sqindv[34] = (         void  *)&hv_origname_ind;
 sqlstm.sqinds[34] = (         int  )0;
 sqlstm.sqharm[34] = (unsigned int  )0;
 sqlstm.sqadto[34] = (unsigned short )0;
 sqlstm.sqtdso[34] = (unsigned short )0;
 sqlstm.sqhstv[35] = (         void  *)&hv_orignameind;
 sqlstm.sqhstl[35] = (unsigned int  )1;
 sqlstm.sqhsts[35] = (         int  )0;
 sqlstm.sqindv[35] = (         void  *)&hv_orignameind_ind;
 sqlstm.sqinds[35] = (         int  )0;
 sqlstm.sqharm[35] = (unsigned int  )0;
 sqlstm.sqadto[35] = (unsigned short )0;
 sqlstm.sqtdso[35] = (unsigned short )0;
 sqlstm.sqhstv[36] = (         void  *)hv_passportissuecountry;
 sqlstm.sqhstl[36] = (unsigned int  )5;
 sqlstm.sqhsts[36] = (         int  )0;
 sqlstm.sqindv[36] = (         void  *)&hv_passportissuecountry_ind;
 sqlstm.sqinds[36] = (         int  )0;
 sqlstm.sqharm[36] = (unsigned int  )0;
 sqlstm.sqadto[36] = (unsigned short )0;
 sqlstm.sqtdso[36] = (unsigned short )0;
 sqlstm.sqhstv[37] = (         void  *)hv_passportissuedate;
 sqlstm.sqhstl[37] = (unsigned int  )9;
 sqlstm.sqhsts[37] = (         int  )0;
 sqlstm.sqindv[37] = (         void  *)&hv_passportissuedate_ind;
 sqlstm.sqinds[37] = (         int  )0;
 sqlstm.sqharm[37] = (unsigned int  )0;
 sqlstm.sqadto[37] = (unsigned short )0;
 sqlstm.sqtdso[37] = (unsigned short )0;
 sqlstm.sqhstv[38] = (         void  *)&hv_passportno;
 sqlstm.sqhstl[38] = (unsigned int  )18;
 sqlstm.sqhsts[38] = (         int  )0;
 sqlstm.sqindv[38] = (         void  *)&hv_passportno_ind;
 sqlstm.sqinds[38] = (         int  )0;
 sqlstm.sqharm[38] = (unsigned int  )0;
 sqlstm.sqadto[38] = (unsigned short )0;
 sqlstm.sqtdso[38] = (unsigned short )0;
 sqlstm.sqhstv[39] = (         void  *)hv_permitissuedate;
 sqlstm.sqhstl[39] = (unsigned int  )9;
 sqlstm.sqhsts[39] = (         int  )0;
 sqlstm.sqindv[39] = (         void  *)&hv_permitissuedate_ind;
 sqlstm.sqinds[39] = (         int  )0;
 sqlstm.sqharm[39] = (unsigned int  )0;
 sqlstm.sqadto[39] = (unsigned short )0;
 sqlstm.sqtdso[39] = (unsigned short )0;
 sqlstm.sqhstv[40] = (         void  *)&hv_permitno;
 sqlstm.sqhstl[40] = (unsigned int  )15;
 sqlstm.sqhsts[40] = (         int  )0;
 sqlstm.sqindv[40] = (         void  *)&hv_permitno_ind;
 sqlstm.sqinds[40] = (         int  )0;
 sqlstm.sqharm[40] = (unsigned int  )0;
 sqlstm.sqadto[40] = (unsigned short )0;
 sqlstm.sqtdso[40] = (unsigned short )0;
 sqlstm.sqhstv[41] = (         void  *)hv_policeid;
 sqlstm.sqhstl[41] = (unsigned int  )12;
 sqlstm.sqhsts[41] = (         int  )0;
 sqlstm.sqindv[41] = (         void  *)&hv_policeid_ind;
 sqlstm.sqinds[41] = (         int  )0;
 sqlstm.sqharm[41] = (unsigned int  )0;
 sqlstm.sqadto[41] = (unsigned short )0;
 sqlstm.sqtdso[41] = (unsigned short )0;
 sqlstm.sqhstv[42] = (         void  *)hv_policeretiredate;
 sqlstm.sqhstl[42] = (unsigned int  )9;
 sqlstm.sqhsts[42] = (         int  )0;
 sqlstm.sqindv[42] = (         void  *)&hv_policeretiredate_ind;
 sqlstm.sqinds[42] = (         int  )0;
 sqlstm.sqharm[42] = (unsigned int  )0;
 sqlstm.sqadto[42] = (unsigned short )0;
 sqlstm.sqtdso[42] = (unsigned short )0;
 sqlstm.sqhstv[43] = (         void  *)&hv_polmilitarycode;
 sqlstm.sqhstl[43] = (unsigned int  )1;
 sqlstm.sqhsts[43] = (         int  )0;
 sqlstm.sqindv[43] = (         void  *)&hv_polmilitarycode_ind;
 sqlstm.sqinds[43] = (         int  )0;
 sqlstm.sqharm[43] = (unsigned int  )0;
 sqlstm.sqadto[43] = (unsigned short )0;
 sqlstm.sqtdso[43] = (unsigned short )0;
 sqlstm.sqhstv[44] = (         void  *)hv_polmilitaryjoindate;
 sqlstm.sqhstl[44] = (unsigned int  )9;
 sqlstm.sqhsts[44] = (         int  )0;
 sqlstm.sqindv[44] = (         void  *)&hv_polmilitaryjoindate_ind;
 sqlstm.sqinds[44] = (         int  )0;
 sqlstm.sqharm[44] = (unsigned int  )0;
 sqlstm.sqadto[44] = (unsigned short )0;
 sqlstm.sqtdso[44] = (unsigned short )0;
 sqlstm.sqhstv[45] = (         void  *)&hv_postcode;
 sqlstm.sqhstl[45] = (unsigned int  )8;
 sqlstm.sqhsts[45] = (         int  )0;
 sqlstm.sqindv[45] = (         void  *)&hv_postcode_ind;
 sqlstm.sqinds[45] = (         int  )0;
 sqlstm.sqharm[45] = (unsigned int  )0;
 sqlstm.sqadto[45] = (unsigned short )0;
 sqlstm.sqtdso[45] = (unsigned short )0;
 sqlstm.sqhstv[46] = (         void  *)hv_racecode;
 sqlstm.sqhstl[46] = (unsigned int  )5;
 sqlstm.sqhsts[46] = (         int  )0;
 sqlstm.sqindv[46] = (         void  *)&hv_racecode_ind;
 sqlstm.sqinds[46] = (         int  )0;
 sqlstm.sqharm[46] = (unsigned int  )0;
 sqlstm.sqadto[46] = (unsigned short )0;
 sqlstm.sqtdso[46] = (unsigned short )0;
 sqlstm.sqhstv[47] = (         void  *)hv_relationcode;
 sqlstm.sqhstl[47] = (unsigned int  )3;
 sqlstm.sqhsts[47] = (         int  )0;
 sqlstm.sqindv[47] = (         void  *)&hv_relationcode_ind;
 sqlstm.sqinds[47] = (         int  )0;
 sqlstm.sqharm[47] = (unsigned int  )0;
 sqlstm.sqadto[47] = (unsigned short )0;
 sqlstm.sqtdso[47] = (unsigned short )0;
 sqlstm.sqhstv[48] = (         void  *)&hv_religioncode;
 sqlstm.sqhstl[48] = (unsigned int  )1;
 sqlstm.sqhsts[48] = (         int  )0;
 sqlstm.sqindv[48] = (         void  *)&hv_religioncode_ind;
 sqlstm.sqinds[48] = (         int  )0;
 sqlstm.sqharm[48] = (unsigned int  )0;
 sqlstm.sqadto[48] = (unsigned short )0;
 sqlstm.sqtdso[48] = (unsigned short )0;
 sqlstm.sqhstv[49] = (         void  *)&hv_residentstat;
 sqlstm.sqhstl[49] = (unsigned int  )1;
 sqlstm.sqhsts[49] = (         int  )0;
 sqlstm.sqindv[49] = (         void  *)&hv_residentstat_ind;
 sqlstm.sqinds[49] = (         int  )0;
 sqlstm.sqharm[49] = (unsigned int  )0;
 sqlstm.sqadto[49] = (unsigned short )0;
 sqlstm.sqtdso[49] = (unsigned short )0;
 sqlstm.sqhstv[50] = (         void  *)&hv_sponsorcurrlongname;
 sqlstm.sqhstl[50] = (unsigned int  )183;
 sqlstm.sqhsts[50] = (         int  )0;
 sqlstm.sqindv[50] = (         void  *)&hv_sponsorcurrlongname_ind;
 sqlstm.sqinds[50] = (         int  )0;
 sqlstm.sqharm[50] = (unsigned int  )0;
 sqlstm.sqadto[50] = (unsigned short )0;
 sqlstm.sqtdso[50] = (unsigned short )0;
 sqlstm.sqhstv[51] = (         void  *)&hv_sponsoridno;
 sqlstm.sqhstl[51] = (unsigned int  )18;
 sqlstm.sqhsts[51] = (         int  )0;
 sqlstm.sqindv[51] = (         void  *)&hv_sponsoridno_ind;
 sqlstm.sqinds[51] = (         int  )0;
 sqlstm.sqharm[51] = (unsigned int  )0;
 sqlstm.sqadto[51] = (unsigned short )0;
 sqlstm.sqtdso[51] = (unsigned short )0;
 sqlstm.sqhstv[52] = (         void  *)hv_sponsoridtype;
 sqlstm.sqhstl[52] = (unsigned int  )3;
 sqlstm.sqhsts[52] = (         int  )0;
 sqlstm.sqindv[52] = (         void  *)&hv_sponsoridtype_ind;
 sqlstm.sqinds[52] = (         int  )0;
 sqlstm.sqharm[52] = (unsigned int  )0;
 sqlstm.sqadto[52] = (unsigned short )0;
 sqlstm.sqtdso[52] = (unsigned short )0;
 sqlstm.sqhstv[53] = (         void  *)hv_statecode;
 sqlstm.sqhstl[53] = (unsigned int  )3;
 sqlstm.sqhsts[53] = (         int  )0;
 sqlstm.sqindv[53] = (         void  *)&hv_statecode_ind;
 sqlstm.sqinds[53] = (         int  )0;
 sqlstm.sqharm[53] = (unsigned int  )0;
 sqlstm.sqadto[53] = (unsigned short )0;
 sqlstm.sqtdso[53] = (unsigned short )0;
 sqlstm.sqhstv[54] = (         void  *)&hv_unknownbirthind;
 sqlstm.sqhstl[54] = (unsigned int  )1;
 sqlstm.sqhsts[54] = (         int  )0;
 sqlstm.sqindv[54] = (         void  *)&hv_unknownbirthind_ind;
 sqlstm.sqinds[54] = (         int  )0;
 sqlstm.sqharm[54] = (unsigned int  )0;
 sqlstm.sqadto[54] = (unsigned short )0;
 sqlstm.sqtdso[54] = (unsigned short )0;
 sqlstm.sqhstv[55] = (         void  *)hv_citizenshipacqdate;
 sqlstm.sqhstl[55] = (unsigned int  )9;
 sqlstm.sqhsts[55] = (         int  )0;
 sqlstm.sqindv[55] = (         void  *)&hv_citizenshipacqdate_ind;
 sqlstm.sqinds[55] = (         int  )0;
 sqlstm.sqharm[55] = (unsigned int  )0;
 sqlstm.sqadto[55] = (unsigned short )0;
 sqlstm.sqtdso[55] = (unsigned short )0;
 sqlstm.sqhstv[56] = (         void  *)hv_ktstartdate;
 sqlstm.sqhstl[56] = (unsigned int  )9;
 sqlstm.sqhsts[56] = (         int  )0;
 sqlstm.sqindv[56] = (         void  *)&hv_ktstartdate_ind;
 sqlstm.sqinds[56] = (         int  )0;
 sqlstm.sqharm[56] = (unsigned int  )0;
 sqlstm.sqadto[56] = (unsigned short )0;
 sqlstm.sqtdso[56] = (unsigned short )0;
 sqlstm.sqhstv[57] = (         void  *)hv_ktenddate;
 sqlstm.sqhstl[57] = (unsigned int  )9;
 sqlstm.sqhsts[57] = (         int  )0;
 sqlstm.sqindv[57] = (         void  *)&hv_ktenddate_ind;
 sqlstm.sqinds[57] = (         int  )0;
 sqlstm.sqharm[57] = (unsigned int  )0;
 sqlstm.sqadto[57] = (unsigned short )0;
 sqlstm.sqtdso[57] = (unsigned short )0;
 sqlstm.sqhstv[58] = (         void  *)hv_ptissuedate;
 sqlstm.sqhstl[58] = (unsigned int  )9;
 sqlstm.sqhsts[58] = (         int  )0;
 sqlstm.sqindv[58] = (         void  *)&hv_ptissuedate_ind;
 sqlstm.sqinds[58] = (         int  )0;
 sqlstm.sqharm[58] = (unsigned int  )0;
 sqlstm.sqadto[58] = (unsigned short )0;
 sqlstm.sqtdso[58] = (unsigned short )0;
 sqlstm.sqhstv[59] = (         void  *)hv_ptwno;
 sqlstm.sqhstl[59] = (unsigned int  )16;
 sqlstm.sqhsts[59] = (         int  )0;
 sqlstm.sqindv[59] = (         void  *)&hv_ptwno_ind;
 sqlstm.sqinds[59] = (         int  )0;
 sqlstm.sqharm[59] = (unsigned int  )0;
 sqlstm.sqadto[59] = (unsigned short )0;
 sqlstm.sqtdso[59] = (unsigned short )0;
 sqlstm.sqhstv[60] = (         void  *)hv_birthregndate;
 sqlstm.sqhstl[60] = (unsigned int  )9;
 sqlstm.sqhsts[60] = (         int  )0;
 sqlstm.sqindv[60] = (         void  *)&hv_birthregndate_ind;
 sqlstm.sqinds[60] = (         int  )0;
 sqlstm.sqharm[60] = (unsigned int  )0;
 sqlstm.sqadto[60] = (unsigned short )0;
 sqlstm.sqtdso[60] = (unsigned short )0;
 sqlstm.sqhstv[61] = (         void  *)hv_applid;
 sqlstm.sqhstl[61] = (unsigned int  )20;
 sqlstm.sqhsts[61] = (         int  )0;
 sqlstm.sqindv[61] = (         void  *)0;
 sqlstm.sqinds[61] = (         int  )0;
 sqlstm.sqharm[61] = (unsigned int  )0;
 sqlstm.sqadto[61] = (unsigned short )0;
 sqlstm.sqtdso[61] = (unsigned short )0;
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




	setnull(hv_address1);
	setnull(hv_address2);
	setnull(hv_address3);
	setnull(hv_currlongname);
	setnull(hv_currshortname1);
	setnull(hv_currshortname2);
	setnull(hv_fatheridno);
	setnull(hv_gmpcshortname1);
	setnull(hv_gmpcshortname2);
	setnull(hv_gmpcshortname3);
	setnull(hv_idnumber);
	setnull(hv_immrefno);
	setnull(hv_motheridno);
	setnull(hv_origname);
	setnull(hv_passportno);
	setnull(hv_permitno);
	setnull(hv_postcode);
	setnull(hv_sponsorcurrlongname);
	setnull(hv_sponsoridno);


	if (sqlca.sqlcode != 0 && !(NO_DATA_FOUND))
	{
		#ifdef DEBUG
			userlog(" get_appl_missed_opex_rec : Error in getting APPL_MISSED_OPEX RECORD : %s", SQLMSG);
		#endif
		/* Log the error */
		strcpy(prog_log.remarks,"get_appl_missed_opex_rec : Error in getting APPL_MISSED_OPEX RECORD");
		sprintf(excep_log.error_msg,"get_appl_missed_opex_rec : Error in getting APPL_MISSED_OPEX RECORD : %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		return SELECT_ERROR;
	}
	else if(NO_DATA_FOUND)
	{
		#ifdef DEBUG
			userlog(" get_appl_missed_opex_rec : NO DATA FOUND while getting APPL_MISSED_OPEX RECORD : %s", SQLMSG);
		#endif
		*missed_opex_flag = 1;
		return GMPC_GOOD;
	}

	#ifdef DEBUG
		userlog(" ");
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_applid - %s", hv_applid);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_address1 - %s", hv_address1.arr);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_address2 - %s", hv_address2.arr);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_address3 - %s", hv_address3.arr);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_birthdate - %s", hv_birthdate);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_birthdistrictcode - %d", hv_birthdistrictcode);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_birthplacecode - %s", hv_birthplacecode);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_cardlostcnt - %d", hv_cardlostcnt);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_citizennationcode - %s", hv_citizennationcode);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_citycode - %d", hv_citycode);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_colourarticlecode - %s", hv_colourarticlecode);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_currlongname - %s", hv_currlongname.arr);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_currlongname1 - %s", hv_currshortname1.arr);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_currlongname2 - %s", hv_currshortname2.arr);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_fatheridno - %s", hv_fatheridno.arr);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_fatheridtype - %s", hv_fatheridtype);		
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_gender - %c", hv_gender);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_gmpcshortname1 - %s", hv_gmpcshortname1.arr);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_gmpcshortname2 - %s", hv_gmpcshortname2.arr);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_gmpcshortname3 - %s", hv_gmpcshortname2.arr);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_hkind - %c", hv_hkind);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_iccolorcode - %c", hv_iccolorcode);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_idnumber - %s", hv_idnumber.arr);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_idtype - %s", hv_idtype);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_immexpirydate - %s", hv_immexpirydate);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_immrefno - %s", hv_immrefno.arr);		
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_kppno - %s", hv_kppno);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_kptno - %s", hv_kptno);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_ktindcode - %s", hv_ktindcode);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_lastcardissuedate - %s", hv_lastcardissuedate);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_militaryid - %s", hv_militaryid);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_motheridno - %s", hv_motheridno.arr);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_motheridtype - %s", hv_motheridtype);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_origname - %s", hv_origname.arr);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_orignameind - %c", hv_orignameind);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_passportissuecountry - %s", hv_passportissuecountry);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_passportissuedate - %s", hv_passportissuedate);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_passportno - %s", hv_passportno.arr);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_permitissuedate - %s", hv_permitissuedate);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_permitno - %s", hv_permitno.arr);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_policeid - %s", hv_policeid);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_policeretiredate - %s", hv_policeretiredate);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_polmilitarycode - %c", hv_polmilitarycode);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_polmilitaryjoindate - %s", hv_polmilitaryjoindate);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_postcode - %s", hv_postcode.arr);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_racecode - %s", hv_racecode);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_ktstartdate - %s", hv_ktstartdate);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_ktenddate - %s", hv_ktenddate);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_ptissuedate - %s", hv_ptissuedate);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_birthregndate - %s", hv_birthregndate);
	#endif
	
			
	if(hv_birthdate_ind == 0)
	{
		strcpy(missed_opex_rec->birthdate, hv_birthdate);
	}

	if(hv_birthplacecode_ind == 0)
	{
		strcpy(missed_opex_rec->birthplacecode, hv_birthplacecode);
	}

	if(hv_birthstatecode_ind == 0)
	{
		strcpy(missed_opex_rec->birthstatecode, hv_birthstatecode);
	}

	if(hv_citizennationcode_ind == 0)
	{
		strcpy(missed_opex_rec->citizennationcode, hv_citizennationcode);
	}

	if(hv_colourarticlecode_ind == 0)
	{
		strcpy(missed_opex_rec->colourarticlecode, hv_colourarticlecode);
	}

	if(hv_fatheridtype_ind == 0)
	{
		strcpy(missed_opex_rec->fatheridtype, hv_fatheridtype);
	}

	if(hv_gender_ind == 0)
	{
		missed_opex_rec->gender=hv_gender;
	}

	if(hv_hkind_ind == 0)
	{
		missed_opex_rec->hkind=hv_hkind;
	}

	if(hv_iccolorcode_ind == 0)
	{
		missed_opex_rec->iccolorcode=hv_iccolorcode;
	}

	if(hv_idtype_ind == 0)
	{
		strcpy(missed_opex_rec->idtype, hv_idtype);
	}

	if(hv_immexpirydate_ind == 0)
	{
		strcpy(missed_opex_rec->immexpirydate, hv_immexpirydate);
	}

	if(hv_immrefdate_ind == 0)
	{
		strcpy(missed_opex_rec->immrefdate, hv_immrefdate);
	}

	if(hv_kppno_ind == 0)
	{
		strcpy(missed_opex_rec->kppno, hv_kppno);
	}

	if(hv_kptno_ind == 0)
	{
		strcpy(missed_opex_rec->kptno, hv_kptno);
	}

	if(hv_ktindcode_ind == 0)
	{
		strcpy(missed_opex_rec->ktindcode, hv_ktindcode);
	}

	if(hv_lastcardissuedate_ind == 0)
	{
		strcpy(missed_opex_rec->lastcardissuedate, hv_lastcardissuedate);
	}

	if(hv_militaryid_ind == 0)
	{
		strcpy(missed_opex_rec->militaryid, hv_militaryid);
	}

	if(hv_motheridtype_ind == 0)
	{
		strcpy(missed_opex_rec->motheridtype, hv_motheridtype);
	}

	if(hv_orignameind_ind == 0)
	{
		missed_opex_rec->orignameind=hv_orignameind;
	}

	if(hv_passportissuecountry_ind == 0)
	{
		strcpy(missed_opex_rec->passportissuecountry, hv_passportissuecountry);
	}

	if(hv_passportissuedate_ind == 0)
	{
		strcpy(missed_opex_rec->passportissuedate, hv_passportissuedate);
	}

	if(hv_permitissuedate_ind == 0)
	{
		strcpy(missed_opex_rec->permitissuedate, hv_permitissuedate);
	}

	if(hv_policeid_ind == 0)
	{
		strcpy(missed_opex_rec->policeid, hv_policeid);
	}

	if(hv_policeretiredate_ind == 0)
	{
		strcpy(missed_opex_rec->policeretiredate, hv_policeretiredate);
	}

	if(hv_polmilitarycode_ind == 0)
	{
		missed_opex_rec->polmilitarycode=hv_polmilitarycode;
	}

	if(hv_polmilitaryjoindate_ind == 0)
	{
		strcpy(missed_opex_rec->polmilitaryjoindate, hv_polmilitaryjoindate);
	}

	if(hv_racecode_ind == 0)
	{
		strcpy(missed_opex_rec->racecode, hv_racecode);
	}

	if(hv_relationcode_ind == 0)
	{
		strcpy(missed_opex_rec->relationcode, hv_relationcode);
	}

	if(hv_religioncode_ind == 0)
	{
		missed_opex_rec->religioncode=hv_religioncode;
	}

	if(hv_residentstat_ind == 0)
	{
		missed_opex_rec->residentstat=hv_residentstat;
	}

	if(hv_sponsoridtype_ind == 0)
	{
		strcpy(missed_opex_rec->sponsoridtype, hv_sponsoridtype);
	}

	if(hv_statecode_ind == 0)
	{
		strcpy(missed_opex_rec->statecode, hv_statecode);
	}

	if(hv_unknownbirthind_ind == 0)
	{
		missed_opex_rec->unknownbirthind = hv_unknownbirthind;
	}

	if(hv_birthdistrictcode_ind == 0)
	{
		missed_opex_rec->birthdistrictcode = hv_birthdistrictcode;
	}

	if(hv_cardlostcnt_ind == 0)
	{
		missed_opex_rec->cardlostcnt = hv_cardlostcnt;
	}

	if(hv_citycode_ind == 0)
	{
		missed_opex_rec->citycode = hv_citycode;
	}

	if(hv_address1_ind == 0)
	{
		strcpy(missed_opex_rec->address1, hv_address1.arr);
	}

	if(hv_address2_ind == 0)
	{
		strcpy(missed_opex_rec->address2, hv_address2.arr);
	}

	if(hv_address3_ind == 0)
	{
		strcpy(missed_opex_rec->address3, hv_address3.arr);
	}

	if(hv_currlongname_ind == 0)
	{
		strcpy(missed_opex_rec->currlongname, hv_currlongname.arr);
	}

	if(hv_currshortname1_ind == 0)
	{
		strcpy(missed_opex_rec->currshortname1, hv_currshortname1.arr);
	}

	if(hv_currshortname2_ind == 0)
	{
		strcpy(missed_opex_rec->currshortname2, hv_currshortname2.arr);
	}

	if(hv_fatheridno_ind == 0)
	{
		strcpy(missed_opex_rec->fatheridno, hv_fatheridno.arr);
	}

	if(hv_gmpcshortname1_ind == 0)
	{
		strcpy(missed_opex_rec->gmpcshortname1, hv_gmpcshortname1.arr);
	}

	if(hv_gmpcshortname2_ind == 0)
	{
		strcpy(missed_opex_rec->gmpcshortname2, hv_gmpcshortname2.arr);
	}

	if(hv_gmpcshortname3_ind == 0)
	{
		strcpy(missed_opex_rec->gmpcshortname3, hv_gmpcshortname3.arr);
	}

	if(hv_idnumber_ind == 0)
	{
		strcpy(missed_opex_rec->idnumber, hv_idnumber.arr);
	}

	if(hv_immrefno_ind == 0)
	{

		strcpy(missed_opex_rec->immrefno, hv_immrefno.arr);

		#ifdef DEBUG
		userlog("----------> TESTING <----------");
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : hv_immrefno - %s", hv_immrefno.arr);
		userlog("GET_PROB_REC : get_appl_missed_opex_rec : missed_opex_rec->immrefno - %s", missed_opex_rec->immrefno);
		userlog("----------> TESTING <----------");
		#endif
	}

	if(hv_motheridno_ind == 0)
	{
		strcpy(missed_opex_rec->motheridno, hv_motheridno.arr);
	}

	if(hv_origname_ind == 0)
	{
		strcpy(missed_opex_rec->origname, hv_origname.arr);
	}

	if(hv_passportno_ind == 0)
	{
		strcpy(missed_opex_rec->passportno, hv_passportno.arr);
	}

	if(hv_permitno_ind == 0)
	{
		strcpy(missed_opex_rec->permitno, hv_permitno.arr);
	}

	if(hv_postcode_ind == 0)
	{
		strcpy(missed_opex_rec->postcode, hv_postcode.arr);
	}

	if(hv_sponsorcurrlongname_ind == 0)
	{
		strcpy(missed_opex_rec->sponsorcurrlongname, hv_sponsorcurrlongname.arr);
	}

	if(hv_sponsoridno_ind == 0)
	{
		strcpy(missed_opex_rec->sponsoridno, hv_sponsoridno.arr);
	}

	if(hv_citizenshipacqdate_ind == 0)
	{
		strcpy(missed_opex_rec->citizenshipacqdate, hv_citizenshipacqdate);
	}
	
	if(hv_ktstartdate_ind == 0)
	{
		strcpy(missed_opex_rec->ktstartdate, hv_ktstartdate);
	}

	if(hv_ktenddate_ind == 0)
	{
		strcpy(missed_opex_rec->ktenddate, hv_ktenddate);
	}

	if(hv_ptissuedate_ind == 0)
	{
		strcpy(missed_opex_rec->ptissuedate, hv_ptissuedate);
	}

	if(hv_ptwno_ind == 0)
	{
		strcpy(missed_opex_rec->ptwno, hv_ptwno);
	}

	if(hv_birthregndate_ind == 0)
	{
		strcpy(missed_opex_rec->birthregndate, hv_birthregndate);
	}

	#ifdef DEBUG
		userlog(" ***** APPL_MISSED_OPEX Details *****");

		userlog("");
		userlog("GET_PROB_REC: address1: %s",missed_opex_rec->address1);
		userlog("GET_PROB_REC: address2: %s",missed_opex_rec->address2);
		userlog("GET_PROB_REC: address3: %s",missed_opex_rec->address3);
		userlog("GET_PROB_REC: birthdate: %s",missed_opex_rec->birthdate);
		userlog("GET_PROB_REC: birthplacecode: %s",missed_opex_rec->birthplacecode);
		userlog("GET_PROB_REC: birthstatecode: %s",missed_opex_rec->birthstatecode);
		userlog("GET_PROB_REC: citizennationcode: %s",missed_opex_rec->citizennationcode);
		userlog("GET_PROB_REC: colourarticlecode: %s",missed_opex_rec->colourarticlecode);
		userlog("GET_PROB_REC: fatheridtype: %s",missed_opex_rec->fatheridtype);
		userlog("GET_PROB_REC: gender: %c",missed_opex_rec->gender);
		userlog("GET_PROB_REC: hkind: %c",missed_opex_rec->hkind);
		userlog("GET_PROB_REC: iccolorcode: %c",missed_opex_rec->iccolorcode);
		userlog("GET_PROB_REC: idtype: %s",missed_opex_rec->idtype);
		userlog("GET_PROB_REC: immexpirydate: %s",missed_opex_rec->immexpirydate);
		userlog("GET_PROB_REC: immrefdate: %s",missed_opex_rec->immrefdate);
		userlog("GET_PROB_REC: kppno: %s",missed_opex_rec->kppno);
		userlog("GET_PROB_REC: kptno: %s",missed_opex_rec->kptno);
		userlog("GET_PROB_REC: ktindcode: %s",missed_opex_rec->ktindcode);
		userlog("GET_PROB_REC: lastcardissuedate: %s",missed_opex_rec->lastcardissuedate);
		userlog("GET_PROB_REC: militaryid: %s",missed_opex_rec->militaryid);
		userlog("GET_PROB_REC: motheridtype: %s",missed_opex_rec->motheridtype);
		userlog("GET_PROB_REC: orignameind: %c",missed_opex_rec->orignameind);
		userlog("GET_PROB_REC: passportissuecountry: %s",missed_opex_rec->passportissuecountry);
		userlog("GET_PROB_REC: passportissuedate: %s",missed_opex_rec->passportissuedate);
		userlog("GET_PROB_REC: permitissuedate: %s",missed_opex_rec->permitissuedate);
		userlog("GET_PROB_REC: policeid: %s",missed_opex_rec->policeid);
		userlog("GET_PROB_REC: policeretiredate: %s",missed_opex_rec->policeretiredate);
		userlog("GET_PROB_REC: polmilitarycode: %c",missed_opex_rec->polmilitarycode);
		userlog("GET_PROB_REC: polmilitaryjoindate: %s",missed_opex_rec->polmilitaryjoindate);
		userlog("GET_PROB_REC: racecode: %s",missed_opex_rec-> racecode);
		userlog("GET_PROB_REC: relationcode: %s",missed_opex_rec->relationcode);
		userlog("GET_PROB_REC: religioncode: %c",missed_opex_rec->religioncode);
		userlog("GET_PROB_REC: residentstat: %c",missed_opex_rec->residentstat);
		userlog("GET_PROB_REC: sponsoridtype: %s",missed_opex_rec->sponsoridtype);
		userlog("GET_PROB_REC: statecode: %s",missed_opex_rec->statecode);
		userlog("GET_PROB_REC: unknownbirthind: %c",missed_opex_rec->unknownbirthind);
		userlog("GET_PROB_REC: birthdistrictcode: %d",missed_opex_rec->birthdistrictcode);
		userlog("GET_PROB_REC: cardlostcnt: %d",missed_opex_rec->cardlostcnt);
		userlog("GET_PROB_REC: citycode: %d",missed_opex_rec->citycode);		
		userlog("GET_PROB_REC: currlongname: %s",missed_opex_rec->currlongname);
		userlog("GET_PROB_REC: currshortname1: %s",missed_opex_rec->currshortname1);
		userlog("GET_PROB_REC: currshortname2: %s",missed_opex_rec->currshortname2);
		userlog("GET_PROB_REC: fatheridno: %s",missed_opex_rec->fatheridno);
		userlog("GET_PROB_REC: gmpcshortname1: %s",missed_opex_rec->gmpcshortname1);
		userlog("GET_PROB_REC: gmpcshortname2: %s",missed_opex_rec->gmpcshortname2);
		userlog("GET_PROB_REC: gmpcshortname3: %s",missed_opex_rec->gmpcshortname3);
		userlog("GET_PROB_REC: idnumber: %s",missed_opex_rec->idnumber);
		userlog("GET_PROB_REC: immrefno: %s",missed_opex_rec->immrefno);
		userlog("GET_PROB_REC: motheridno: %s",missed_opex_rec->motheridno);
		userlog("GET_PROB_REC: origname: %s",missed_opex_rec->origname);
		userlog("GET_PROB_REC: passportno: %s",missed_opex_rec->passportno);
		userlog("GET_PROB_REC: permitno: %s",missed_opex_rec->permitno);
		userlog("GET_PROB_REC: postcode: %s",missed_opex_rec->postcode);
		userlog("GET_PROB_REC: sponsorcurrlongname: %s",missed_opex_rec->sponsorcurrlongname);
		userlog("GET_PROB_REC: sponsoridno: %s",missed_opex_rec->sponsoridno);
		userlog(" ");
	#endif


	return GMPC_GOOD;
}

/********************************************************************************/
/* Function name: get_prob_count												*/
/* Description	: This function gets the count for no of problems for the given */											
/*                application id.  												*/
/* Input		: Application Id, reference to problem count,					*/
/* Return values: GMPC_GOOD/ORA_ERROR											*/
/* Limitations	: None															*/
/********************************************************************************/
int get_prob_count(char lappl_id[20], int *prob_count,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 07/03/06	
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar appl_id[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } appl_id
 = {0};

	int rec_count = 0;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

#ifdef DEBUG
	userlog("get_prob_count : lappl_id - %s", lappl_id);
#endif

	strcpy(appl_id.arr, lappl_id);
#ifdef DEBUG
	userlog("get_prob_count : Before setlen");
#endif
	setlen(appl_id);
	

	#ifdef DEBUG
		userlog("get_prob_count : In get_prob_count() function");
		userlog("get_prob_count : Application Id - %s", appl_id.arr);		
	#endif



	/* Get the count for the no of problems for the application id*/

	    /* EXEC SQL 
			SELECT COUNT(PROBLNO) INTO :rec_count 
			FROM PROBL_RECORD 
			WHERE APPLID = :appl_id; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 62;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select count(PROBLNO) into :b0  from PROBL_RECORD where \
APPLID=:b1";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )562;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&rec_count;
     sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&appl_id;
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



  
	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog(" get_prob_count : Error while selecting the count from PROBL_RECORD : %s", SQLMSG);
	#endif
		/* Log the error */
		strcpy(prog_log.remarks,"get_prob_count : Error in selecting the count from PROBL_RECORD");
		sprintf(excep_log.error_msg,"get_prob_count : Error in selecting the count from PROBL_RECORD : %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		return SELECT_ERROR;
	}
	
	*prob_count = rec_count;

#ifdef DEBUG
	userlog(" get_prob_count : prob_count : %d", *prob_count);
#endif

	return GMPC_GOOD;
}



/********************************************************************************/
/* Function name: get_prob_record_recs												*/
/* Description	: This function retrieves the problem details for the given 	*/
/*                applicantion id												*/
/* Input		: Applicantion Id, pointer to PROBL_RECORD_T struct, Error Code */
/* Return values: GMPC_GOOD/ORA_ERROR											*/
/* Limitations	: None															*/
/********************************************************************************/
int get_probl_record_recs(char lappl_id[20], PROBL_RECORD_T *prob_details,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 07/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	//char lappl_id[APP_ID_SIZE] = {0};
	int  prob_no = 0;
	
	struct
	{
		int  prob_no;
		/* varchar id_type[ID_TYPE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[3]; } id_type;

		/* varchar id_no[ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } id_no;

		/* varchar prob_date[DATE_TIME_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } prob_date;

		char reason_code[REASON_CODE_SIZE];
		int  reason_srno;
		char prob_stat;
		/* varchar prob_remarks[PROB_REMARK_SIZE]; */ 
struct { unsigned short len; unsigned char arr[151]; } prob_remarks;

		char prob_solve_date[DATE_TIME_SIZE];
		/* varchar user_id[USER_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id;

		/* varchar workstation_id[WS_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } workstation_id;

		char action_date[DATE_TIME_SIZE];
		/* varchar action_remarks[PROB_REMARK_SIZE]; */ 
struct { unsigned short len; unsigned char arr[151]; } action_remarks;

		/* varchar action_user_id[USER_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } action_user_id;

		char branch_code[BRANCH_CODE_SIZE];
		char txn_code[TRANSACTION_CODE_SIZE];
		char legacy_type[AGENCY_TYPE_SIZE];
		char gscbupdflag;
		char genkpt;
		char bskrecd;
	} local_prob_details;
	
	struct
	{
		short prob_no_ind;
		short id_type_ind;
		short id_no_ind;
		short prob_date_ind;
		short reason_code_ind;
		short reason_srno_ind;
		short prob_stat_ind;
		short prob_remarks_ind;
		short prob_solve_date_ind;
		short user_id_ind;
		short workstation_id_ind;
		short action_date_ind;
		short action_remarks_ind;
		short action_user_id_ind;
		short branch_code_ind;
		short txn_code_ind;
		short legacy_type_ind;
		short gscbupdflag_ind;
		short genkpt_ind;
		short bskrecd_ind; 
	} local_prob_details_ind;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	
	//strcpy(lappl_id, appl_id);
	

#ifdef DEBUG
	userlog(" get_prob_record_recs : In get_prob_record_recs() function");
	userlog(" get_prob_record_recs : lappl_id - %s", lappl_id);
#endif


	/* Declare the cursor for fetching count of Application Ids */

	/* EXEC SQL DECLARE prob_details CURSOR FOR 
		SELECT PROBLNO, IDTYPE, IDNO, TO_CHAR(PROBLDATE,'DDMMYYYY HH24MISS'),
			PROBLREASONCODE, PROBLSERNO, PROBLSTAT, PROBLREMARKS,
			TO_CHAR(PROBLSOLVEDATE,'DDMMYYYY HH24MISS'), USERID, WSID,
			TO_CHAR(ACTDATETIME, 'DDMMYYYY HH24MISS'), ACTREMARKS,
			ACTUSERID, BRANCHCODE, TXNCODE, LEGACYTYPE, GSCBUPDFLAG,
			GENKPT, BSKRECD
		FROM PROBL_RECORD
		WHERE APPLID = :lappl_id; */ 



	/* EXEC SQL OPEN prob_details; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 62;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0013;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )585;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (         void  *)lappl_id;
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



	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog(" get_prob_record_recs : Error in opening the cursor prob_details : %s", SQLMSG);
	#endif
		/* Log the error */
		strcpy(prog_log.remarks,"get_prob_record_recs : Error in opening the cursor prob_details");
		sprintf(excep_log.error_msg,"get_prob_record_recs : Error in opening the cursor prob_details : %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		return CURSOR_OPEN_ERROR;
	}
	
	while(1)
	{
		memset(&local_prob_details,'\0',sizeof(local_prob_details));
		memset(&local_prob_details_ind,'\0',sizeof(local_prob_details_ind));

		/* EXEC SQL FETCH prob_details 
				INTO :local_prob_details INDICATOR :local_prob_details_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 62;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )604;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&local_prob_details.prob_no;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&local_prob_details_ind.prob_no_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&local_prob_details.id_type;
  sqlstm.sqhstl[1] = (unsigned int  )5;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&local_prob_details_ind.id_type_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&local_prob_details.id_no;
  sqlstm.sqhstl[2] = (unsigned int  )18;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&local_prob_details_ind.id_no_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&local_prob_details.prob_date;
  sqlstm.sqhstl[3] = (unsigned int  )18;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&local_prob_details_ind.prob_date_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)local_prob_details.reason_code;
  sqlstm.sqhstl[4] = (unsigned int  )6;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&local_prob_details_ind.reason_code_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&local_prob_details.reason_srno;
  sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&local_prob_details_ind.reason_srno_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&local_prob_details.prob_stat;
  sqlstm.sqhstl[6] = (unsigned int  )1;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&local_prob_details_ind.prob_stat_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&local_prob_details.prob_remarks;
  sqlstm.sqhstl[7] = (unsigned int  )153;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&local_prob_details_ind.prob_remarks_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)local_prob_details.prob_solve_date;
  sqlstm.sqhstl[8] = (unsigned int  )16;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&local_prob_details_ind.prob_solve_date_ind;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&local_prob_details.user_id;
  sqlstm.sqhstl[9] = (unsigned int  )11;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)&local_prob_details_ind.user_id_ind;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&local_prob_details.workstation_id;
  sqlstm.sqhstl[10] = (unsigned int  )18;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)&local_prob_details_ind.workstation_id_ind;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)local_prob_details.action_date;
  sqlstm.sqhstl[11] = (unsigned int  )16;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)&local_prob_details_ind.action_date_ind;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqhstv[12] = (         void  *)&local_prob_details.action_remarks;
  sqlstm.sqhstl[12] = (unsigned int  )153;
  sqlstm.sqhsts[12] = (         int  )0;
  sqlstm.sqindv[12] = (         void  *)&local_prob_details_ind.action_remarks_ind;
  sqlstm.sqinds[12] = (         int  )0;
  sqlstm.sqharm[12] = (unsigned int  )0;
  sqlstm.sqadto[12] = (unsigned short )0;
  sqlstm.sqtdso[12] = (unsigned short )0;
  sqlstm.sqhstv[13] = (         void  *)&local_prob_details.action_user_id;
  sqlstm.sqhstl[13] = (unsigned int  )11;
  sqlstm.sqhsts[13] = (         int  )0;
  sqlstm.sqindv[13] = (         void  *)&local_prob_details_ind.action_user_id_ind;
  sqlstm.sqinds[13] = (         int  )0;
  sqlstm.sqharm[13] = (unsigned int  )0;
  sqlstm.sqadto[13] = (unsigned short )0;
  sqlstm.sqtdso[13] = (unsigned short )0;
  sqlstm.sqhstv[14] = (         void  *)local_prob_details.branch_code;
  sqlstm.sqhstl[14] = (unsigned int  )7;
  sqlstm.sqhsts[14] = (         int  )0;
  sqlstm.sqindv[14] = (         void  *)&local_prob_details_ind.branch_code_ind;
  sqlstm.sqinds[14] = (         int  )0;
  sqlstm.sqharm[14] = (unsigned int  )0;
  sqlstm.sqadto[14] = (unsigned short )0;
  sqlstm.sqtdso[14] = (unsigned short )0;
  sqlstm.sqhstv[15] = (         void  *)local_prob_details.txn_code;
  sqlstm.sqhstl[15] = (unsigned int  )4;
  sqlstm.sqhsts[15] = (         int  )0;
  sqlstm.sqindv[15] = (         void  *)&local_prob_details_ind.txn_code_ind;
  sqlstm.sqinds[15] = (         int  )0;
  sqlstm.sqharm[15] = (unsigned int  )0;
  sqlstm.sqadto[15] = (unsigned short )0;
  sqlstm.sqtdso[15] = (unsigned short )0;
  sqlstm.sqhstv[16] = (         void  *)local_prob_details.legacy_type;
  sqlstm.sqhstl[16] = (unsigned int  )4;
  sqlstm.sqhsts[16] = (         int  )0;
  sqlstm.sqindv[16] = (         void  *)&local_prob_details_ind.legacy_type_ind;
  sqlstm.sqinds[16] = (         int  )0;
  sqlstm.sqharm[16] = (unsigned int  )0;
  sqlstm.sqadto[16] = (unsigned short )0;
  sqlstm.sqtdso[16] = (unsigned short )0;
  sqlstm.sqhstv[17] = (         void  *)&local_prob_details.gscbupdflag;
  sqlstm.sqhstl[17] = (unsigned int  )1;
  sqlstm.sqhsts[17] = (         int  )0;
  sqlstm.sqindv[17] = (         void  *)&local_prob_details_ind.gscbupdflag_ind;
  sqlstm.sqinds[17] = (         int  )0;
  sqlstm.sqharm[17] = (unsigned int  )0;
  sqlstm.sqadto[17] = (unsigned short )0;
  sqlstm.sqtdso[17] = (unsigned short )0;
  sqlstm.sqhstv[18] = (         void  *)&local_prob_details.genkpt;
  sqlstm.sqhstl[18] = (unsigned int  )1;
  sqlstm.sqhsts[18] = (         int  )0;
  sqlstm.sqindv[18] = (         void  *)&local_prob_details_ind.genkpt_ind;
  sqlstm.sqinds[18] = (         int  )0;
  sqlstm.sqharm[18] = (unsigned int  )0;
  sqlstm.sqadto[18] = (unsigned short )0;
  sqlstm.sqtdso[18] = (unsigned short )0;
  sqlstm.sqhstv[19] = (         void  *)&local_prob_details.bskrecd;
  sqlstm.sqhstl[19] = (unsigned int  )1;
  sqlstm.sqhsts[19] = (         int  )0;
  sqlstm.sqindv[19] = (         void  *)&local_prob_details_ind.bskrecd_ind;
  sqlstm.sqinds[19] = (         int  )0;
  sqlstm.sqharm[19] = (unsigned int  )0;
  sqlstm.sqadto[19] = (unsigned short )0;
  sqlstm.sqtdso[19] = (unsigned short )0;
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
			strcpy(prog_log.remarks,"get_prob_record_recs : Error in fetching the cursor prob_details");
			sprintf(excep_log.error_msg,"get_prob_record_recs : Error in fetching the cursor prob_details : %s", SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;

			log_error(ctx);

			/* EXEC SQL CLOSE prob_details; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 62;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )699;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



			return CURSOR_FETCH_ERROR;
		}
		
		setnull(local_prob_details.id_no);
		setnull(local_prob_details.prob_remarks);
		setnull(local_prob_details.user_id);
		setnull(local_prob_details.workstation_id);
		setnull(local_prob_details.action_remarks);
		setnull(local_prob_details.action_user_id);
		setnull(local_prob_details.id_type);
		setnull(local_prob_details.prob_date);

#ifdef DEBUG
		userlog(" ");
		userlog("GET_PROB_REC : get_prob_record_recs : local_prob_details.prob_no - %d", local_prob_details.prob_no);
		userlog("GET_PROB_REC : get_prob_record_recs : local_prob_details.id_type - %s", local_prob_details.id_type.arr);
		userlog("GET_PROB_REC : get_prob_record_recs : local_prob_details.id_no - %s", local_prob_details.id_no.arr);
		userlog("GET_PROB_REC : get_prob_record_recs : local_prob_details.prob_date - %s", local_prob_details.prob_date.arr);
		userlog("GET_PROB_REC : get_prob_record_recs : local_prob_details.reason_code - %s", local_prob_details.reason_code);
		userlog("GET_PROB_REC : get_prob_record_recs : local_prob_details.reason_srno - %d", local_prob_details.reason_srno);
		userlog("GET_PROB_REC : get_prob_record_recs : local_prob_details.prob_stat - %c", local_prob_details.prob_stat);
		userlog(" ");
#endif

			
		if(local_prob_details_ind.prob_no_ind != -1)
			prob_details->prob_no = local_prob_details.prob_no;

		if(local_prob_details_ind.id_type_ind != -1)
			strcpy(prob_details->id_type, local_prob_details.id_type.arr);

		if(local_prob_details_ind.id_no_ind != -1)
			strcpy(prob_details->id_no, local_prob_details.id_no.arr);

		if(local_prob_details_ind.prob_date_ind != -1)
			strcpy(prob_details->prob_date, local_prob_details.prob_date.arr);

		if(local_prob_details_ind.reason_code_ind != -1)
			strcpy(prob_details->reason_code, local_prob_details.reason_code);

		if(local_prob_details_ind.reason_srno_ind != -1)
			prob_details->reason_srno = local_prob_details.reason_srno;

		if(local_prob_details_ind.prob_stat_ind != -1)
			prob_details->prob_stat = local_prob_details.prob_stat;

		if(local_prob_details_ind.prob_remarks_ind != -1)
			strcpy(prob_details->prob_remarks, local_prob_details.prob_remarks.arr);

		if(local_prob_details_ind.prob_solve_date_ind != -1)
			strcpy(prob_details->prob_solve_date, local_prob_details.prob_solve_date);

		if(local_prob_details_ind.user_id_ind != -1)
			strcpy(prob_details->user_id, local_prob_details.user_id.arr);

		if(local_prob_details_ind.workstation_id_ind != -1)
			strcpy(prob_details->workstation_id, local_prob_details.workstation_id.arr);

		if(local_prob_details_ind.action_date_ind != -1)
			strcpy(prob_details->action_date, local_prob_details.action_date);

		if(local_prob_details_ind.action_remarks_ind != -1)
			strcpy(prob_details->action_remarks, local_prob_details.action_remarks.arr);

		if(local_prob_details_ind.action_user_id_ind != -1)
			strcpy(prob_details->action_user_id, local_prob_details.action_user_id.arr);

		if(local_prob_details_ind.branch_code_ind != -1)
			strcpy(prob_details->branch_code, local_prob_details.branch_code);

		if(local_prob_details_ind.txn_code_ind != -1)
			strcpy(prob_details->txn_code, local_prob_details.txn_code);

		if(local_prob_details_ind.legacy_type_ind != -1)
			strcpy(prob_details->legacy_type, local_prob_details.legacy_type);

		if(local_prob_details_ind.gscbupdflag_ind != -1)
			prob_details->gscbupdflag = local_prob_details.gscbupdflag;

		if(local_prob_details_ind.genkpt_ind != -1)
			prob_details->genkpt = local_prob_details.genkpt;

		if(local_prob_details_ind.bskrecd_ind != -1)
			prob_details->bskrecd = local_prob_details.bskrecd;

		#ifdef DEBUG
			userlog(" ");
			userlog(" get_prob_record_recs : prob_no : %d", prob_details->prob_no);
			userlog(" get_prob_record_recs : id_type : %s", prob_details->id_type);
			userlog(" get_prob_record_recs : id_no : %s", prob_details->id_no);
			userlog(" get_prob_record_recs : prob_date : %s", prob_details->prob_date);
			userlog(" get_prob_record_recs : reason_code : %s", prob_details->reason_code);
			userlog(" get_prob_record_recs : reason_srno : %d", prob_details->reason_srno);
			userlog(" get_prob_record_recs : prob_stat : %c", prob_details->prob_stat);
			userlog(" get_prob_record_recs : prob_remarks : %s", prob_details->prob_remarks);
			userlog(" get_prob_record_recs : prob_solve_date : %s", prob_details->prob_solve_date);
			userlog(" get_prob_record_recs : user_id : %s", prob_details->user_id);
			userlog(" get_prob_record_recs : workstation_id : %s", prob_details->workstation_id);
			userlog(" get_prob_record_recs : action_date : %s", prob_details->action_date);
			userlog(" get_prob_record_recs : action_remarks : %s", prob_details->action_remarks);
			userlog(" get_prob_record_recs : action_user_id : %s", prob_details->action_user_id);
			userlog(" get_prob_record_recs : branch_code : %s", prob_details->branch_code);
			userlog(" get_prob_record_recs : txn_code : %s", prob_details->txn_code);
			userlog(" get_prob_record_recs : legacy_type : %s", prob_details->legacy_type);
			userlog(" get_prob_record_recs : gscbupdflag : %c", prob_details->gscbupdflag);
			userlog(" get_prob_record_recs : genkpt : %c", prob_details->genkpt);
			userlog(" get_prob_record_recs : bskrecd : %c", prob_details->bskrecd);
			userlog(" ");
		#endif
		
		prob_details++;
	}

	/* EXEC SQL CLOSE prob_details; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 62;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )714;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



#ifdef DEBUG
	userlog(" get_prob_record_recs : The problem details copied successfully to the response buffer \n");
#endif

	return GMPC_GOOD;
}


int update_probl_record(char *appl_id,char updstat, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 07/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char updstatus='\0';
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	updstatus = updstat;

	/* EXEC SQL UPDATE PROBL_RECORD
		SET ENQFLAG = 'Y'
				 WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 62;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update PROBL_RECORD  set ENQFLAG='Y' where APPLID=:b0";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )729;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)appl_id;
 sqlstm.sqhstl[0] = (unsigned int  )0;
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


	
	if ((SQLCODE != 0) && (SQLCODE != 1403))
	{
	#ifdef DEBUG
		userlog(" GET_PROB_REC :update_probl_record : Error in updating ENQFLAG of prob_details : %s", SQLMSG);
	#endif
	/* Log the error */
	strcpy(prog_log.remarks,"GET_PROB_REC :update_probl_record : Error in updating ENQFLAG of prob_details ");
	sprintf(excep_log.error_msg,"GET_PROB_REC :update_probl_record : Error in updating ENQFLAG of prob_details : %s", SQLMSG);
	excep_log.termination_flag = 'Y';
	excep_log.severity = FATAL;
	log_error(ctx);
	return UPDATE_ERROR;
	}
	#ifdef DEBUG
		userlog(" GET_PROB_REC : update_probl_record : Updated the ENQFLAG in PROBL_RECORD to Y successfully");
	#endif

	
	/* EXEC SQL UPDATE APPNT_PROBL_DATA 
					SET SENDFLAG = :updstatus //'Y' changed on 19/09/2005 for IJPN
					WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 62;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update APPNT_PROBL_DATA  set SENDFLAG=:b0 where APPLID=:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )748;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&updstatus;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)appl_id;
 sqlstm.sqhstl[1] = (unsigned int  )0;
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



	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog(" GET_PROB_REC :update_probl_record : Error while updating SENDFLAG of APPNT_PROBL_DATA : %s", SQLMSG);
	#endif
	/* Log the error */
	strcpy(prog_log.remarks,"GET_PROB_REC :update_probl_record : Error while updating SENDFLAG of APPNT_PROBL_DATA ");
	sprintf(excep_log.error_msg,"GET_PROB_REC :update_probl_record : Error while updating SENDFLAG of APPNT_PROBL_DATA : %s", SQLMSG);
	excep_log.termination_flag = 'Y';
	excep_log.severity = FATAL;
	log_error(ctx);
	return UPDATE_ERROR;
	}
	#ifdef DEBUG
		userlog(" GET_PROB_REC : update_probl_record : Updated the ENQFLAG in PROBL_RECORD to Y successfully");
	#endif


	return GMPC_GOOD;

}


/********************************************************************************/
/* Function name: get_addr_info_rec											    */
/* Description	: This function retrieves the address details for the given 	*/
/*                applicantion id												*/
/* Input		: Applicantion Id, pointer to ADDRESS_INFO_T struct, Error Code */
/* Return values: GMPC_GOOD/ORA_ERROR											*/
/* Limitations	: None															*/
/********************************************************************************/
int get_addr_info_rec(char *appl_id, ADDRESS_INFO_T *addr_info, int *addr_info_flag, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 07/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	
	/* varchar applid[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } applid
 = {0};
	
	/* varchar shortname1[GMPC_SNAME1_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } shortname1
 = {0};

	/* varchar shortname2[GMPC_SNAME2_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } shortname2
 = {0};

	/* varchar shortname3[GMPC_SNAME3_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } shortname3
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

	int  citycode=0;
	/* varchar collcenter[APPL_COLLCENTER_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[7]; } collcenter
 = {0};

		
	short shortname1_ind = 0;
	short shortname2_ind = 0;
	short shortname3_ind = 0;
	short address1_ind = 0;
	short address2_ind = 0;
	short address3_ind = 0;
	short postcode_ind = 0;
	short statecode_ind = 0;
	short citycode_ind = 0;
	short kptno_ind = 0;
	short collcenter_ind = 0;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	memset(addr_info,'\0', sizeof(ADDRESS_INFO_T));

	#ifdef DEBUG
		userlog("GET_PROB_REC : get_addr_info_rec : appl_id : %s",appl_id);
	#endif

	strcpy(applid.arr,appl_id);
	setlen(applid);

	#ifdef DEBUG
		userlog("GET_PROB_REC : get_addr_info_rec : applid : %s",applid.arr);
	#endif


	/* EXEC SQL SELECT GMPCSHORTNAME1,GMPCSHORTNAME2, GMPCSHORTNAME3,
					ADDRESS1, ADDRESS2, ADDRESS3, 
					STATECODE, CITYCODE, POSTCODE
			INTO	:shortname1:shortname1_ind,:shortname2:shortname2_ind,
					:shortname3:shortname3_ind,:address1:address1_ind,
					:address2:address2_ind,:address3:address3_ind,
					:statecode:statecode_ind,:citycode:citycode_ind,
					:postcode:postcode_ind					
			FROM	APPNT_JPN_INFO
			WHERE	APPLID = :applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 62;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select GMPCSHORTNAME1 ,GMPCSHORTNAME2 ,GMPCSHORTNAME3 ,ADDRE\
SS1 ,ADDRESS2 ,ADDRESS3 ,STATECODE ,CITYCODE ,POSTCODE into :b0:b1,:b2:b3,:b4:\
b5,:b6:b7,:b8:b9,:b10:b11,:b12:b13,:b14:b15,:b16:b17  from APPNT_JPN_INFO wher\
e APPLID=:b18";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )771;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&shortname1;
 sqlstm.sqhstl[0] = (unsigned int  )33;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&shortname1_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&shortname2;
 sqlstm.sqhstl[1] = (unsigned int  )33;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&shortname2_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&shortname3;
 sqlstm.sqhstl[2] = (unsigned int  )23;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&shortname3_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&address1;
 sqlstm.sqhstl[3] = (unsigned int  )33;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&address1_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&address2;
 sqlstm.sqhstl[4] = (unsigned int  )33;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&address2_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&address3;
 sqlstm.sqhstl[5] = (unsigned int  )33;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&address3_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&statecode;
 sqlstm.sqhstl[6] = (unsigned int  )5;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&statecode_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&citycode;
 sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&citycode_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&postcode;
 sqlstm.sqhstl[8] = (unsigned int  )8;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&postcode_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&applid;
 sqlstm.sqhstl[9] = (unsigned int  )22;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)0;
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




		if((SQLCODE) && !(NO_DATA_FOUND))
		{
		 #ifdef DEBUG
			userlog(" GET_PROB_REC : get_addr_info_rec : Select from APPNT_JPN_INFO failed : %s", SQLMSG);
		 #endif
			strcpy(prog_log.remarks,"GET_PROB_REC : get_addr_info_rec : Select from APPNT_JPN_INFO failed");
			sprintf(excep_log.error_msg, "GET_PROB_REC : get_addr_info_rec : Select from APPNT_JPN_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;
			log_error(ctx);
				
			return SELECT_ERROR;
		}
		else if(NO_DATA_FOUND)
		{
			#ifdef DEBUG
				userlog(" GET_PROB_REC : get_addr_info_rec : NO DATA FOUND in APPNT_JPN_INFO table : %s", SQLMSG);
			#endif			
			*addr_info_flag = 1;
			return GMPC_GOOD;
		}

	
		setnull(shortname1);
		setnull(shortname2);
		setnull(shortname3);
		setnull(address1);
		setnull(address2);
		setnull(address3);
		setnull(statecode);
		setnull(postcode);

		#ifdef DEBUG
			userlog(" ");
			userlog("GET_PROB_REC : get_addr_info_rec : shortname1 - %s", shortname1.arr);
			userlog("GET_PROB_REC : get_addr_info_rec : shortname2 - %s", shortname2.arr);
			userlog("GET_PROB_REC : get_addr_info_rec : shortname3 - %s", shortname3.arr);
			userlog("GET_PROB_REC : get_addr_info_rec : address1 - %s", address1.arr);
			userlog("GET_PROB_REC : get_addr_info_rec : address2 - %s", address2.arr);
			userlog("GET_PROB_REC : get_addr_info_rec : address3 - %s", address3.arr);
			userlog("GET_PROB_REC : get_addr_info_rec : statecode - %s", statecode.arr);
			userlog("GET_PROB_REC : get_addr_info_rec : postcode - %s", postcode.arr);
			userlog("GET_PROB_REC : get_addr_info_rec : citycode - %d", citycode);			
		#endif
		
		//strcpy(addr_info->applid,applid.arr);
		strcpy(addr_info->gmpcshortname1,shortname1.arr);
		strcpy(addr_info->gmpcshortname2,shortname2.arr);
		strcpy(addr_info->gmpcshortname3,shortname3.arr);
		strcpy(addr_info->address1,address1.arr);
		strcpy(addr_info->address2,address2.arr);
		strcpy(addr_info->address3,address3.arr);
		strcpy(addr_info->postcode,postcode.arr);
		strcpy(addr_info->statecode,statecode.arr);
		addr_info->citycode = citycode;


		/* EXEC SQL SELECT COLLCENTER INTO :collcenter:collcenter_ind 
				FROM  APPLICATION 
				WHERE APPLID = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 62;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select COLLCENTER into :b0:b1  from APPLICATION where APPLI\
D=:b2";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )826;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&collcenter;
  sqlstm.sqhstl[0] = (unsigned int  )9;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&collcenter_ind;
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



		if((SQLCODE) && !(NO_DATA_FOUND))
		{
		 #ifdef DEBUG
			userlog(" GET_PROB_REC : get_addr_info_rec : Select from APPLICATION failed : %s", SQLMSG);
		 #endif
			strcpy(prog_log.remarks,"GET_PROB_REC : get_addr_info_rec : Select from APPLICATION failed");
			sprintf(excep_log.error_msg, "GET_PROB_REC : get_addr_info_rec : Select from APPLICATION failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;
			log_error(ctx);
				
			return SELECT_ERROR;
		}
	
		setnull(collcenter);

		 #ifdef DEBUG
			userlog("GET_PROB_REC : get_addr_info_rec : collcenter : %s", collcenter.arr);
			userlog(" ");
		 #endif

		strcpy(addr_info->collcenter,collcenter.arr);
	
	
		#ifdef DEBUG
			userlog(" ");
			userlog("GET_PROB_REC : get_addr_info_rec : addr_info->gmpcshortname1 - %s", addr_info->gmpcshortname1);
			userlog("GET_PROB_REC : get_addr_info_rec : addr_info->gmpcshortname2 - %s", addr_info->gmpcshortname2);
			userlog("GET_PROB_REC : get_addr_info_rec : addr_info->gmpcshortname3 - %s", addr_info->gmpcshortname3);
			userlog("GET_PROB_REC : get_addr_info_rec : addr_info->address1 - %s", addr_info->address1);
			userlog("GET_PROB_REC : get_addr_info_rec : addr_info->address2 - %s", addr_info->address2);
			userlog("GET_PROB_REC : get_addr_info_rec : addr_info->address3 - %s", addr_info->address3);
			userlog("GET_PROB_REC : get_addr_info_rec : addr_info->statecode - %s", addr_info->statecode);
			userlog("GET_PROB_REC : get_addr_info_rec : addr_info->postcode - %s", addr_info->postcode);
			userlog("GET_PROB_REC : get_addr_info_rec : addr_info->citycode - %d", addr_info->citycode);
			userlog("GET_PROB_REC : get_addr_info_rec : addr_info->collcenter : %s", addr_info->collcenter);
			userlog(" ");
		#endif

		*addr_info_flag = 0; // record found 

		#ifdef DEBUG
			userlog("GET_PROB_REC : get_addr_info_rec : Record selected successfully");
		#endif

	return SUCCESS;

}


int get_appl_txn_rec(char *appl_id, APPL_TXN_FEE_T *appl_txn, int fee_cnt, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 07/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	
	/* varchar applid[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } applid
 = {0};

	int   i=0;
	int   ltxnserno=0;
	float lfeeamt=0;	
	char  lfeetype[3];
	int   lagencyrevncode=0;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	memset(appl_txn,'\0', sizeof(APPL_TXN_FEE_T));

	#ifdef DEBUG
		userlog("GET_PROB_REC : get_appl_txn_rec : appl_id : %s",appl_id);
	#endif

	strcpy(applid.arr,appl_id);
	setlen(applid);

	#ifdef DEBUG
		userlog("GET_PROB_REC : get_appl_txn_rec : applid : %s",applid.arr);
	#endif

	/* EXEC SQL DECLARE fee_cur CURSOR FOR 
		SELECT TXNSERNO, FEETYPE, FEEAMT, AGENCYREVNCODE 
			  FROM  APPL_TXN_FEE 
			  WHERE APPLID  = :applid
			  AND   FEETYPE IN ('CF','FF','UF'); */ 



	/* EXEC SQL OPEN fee_cur; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 62;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0018;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )849;
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



	
		if(SQLCODE != 0) 
		{
		 #ifdef DEBUG
			userlog("GET_PROB_REC : get_appl_txn_rec : open fee_cur failed ");
		 #endif
			strcpy(prog_log.remarks,"GET_PROB_REC : get_appl_txn_rec : open fee_cur failed");
			sprintf(excep_log.error_msg,"GET_PROB_REC : get_appl_txn_rec : open fee_cur failed:%s ",SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;

			log_error(ctx);
					
			/* EXEC SQL CLOSE fee_cur; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 62;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )868;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



			return CURSOR_OPEN_ERROR;
		}

		
		for(i=0;i<fee_cnt;i++,appl_txn++)
		{
			/* EXEC SQL FETCH fee_cur INTO :ltxnserno,:lfeetype,:lfeeamt,:lagencyrevncode; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 62;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )883;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqfoff = (           int )0;
   sqlstm.sqfmod = (unsigned int )2;
   sqlstm.sqhstv[0] = (         void  *)&ltxnserno;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)lfeetype;
   sqlstm.sqhstl[1] = (unsigned int  )3;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&lfeeamt;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&lagencyrevncode;
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


						
			
			if((SQLCODE != 0) && (sqlca.sqlcode != 1403))
			{
				#ifdef DEBUG
					userlog("GET_PROB_REC : get_appl_txn_rec : fee_cur failed while SELECT from appl_txn_fee :%s",SQLMSG);
				#endif
				strcpy(prog_log.remarks,"GET_PROB_REC : get_appl_txn_rec : fee_cur failed while SELECT from appl_txn_fee");
				sprintf(excep_log.error_msg,"GET_PROB_REC : get_appl_txn_rec : fee_cur failed while SELECT from appl_txn_fee:%s ",SQLMSG);
				excep_log.termination_flag = 'Y';
				excep_log.severity = FATAL;
				log_error(ctx);
					
				/* EXEC SQL CLOSE fee_cur; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 62;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )914;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



				return CURSOR_FETCH_ERROR;
			}

		#ifdef DEBUG
			userlog(" ");
			userlog("GET_PROB_REC : get_appl_txn_rec :  ltxnserno - %d", ltxnserno);
			userlog("GET_PROB_REC : get_appl_txn_rec :  lfeetype - %s", lfeetype);
			userlog("GET_PROB_REC : get_appl_txn_rec :  lfeeamt - %f", lfeeamt);
			userlog("GET_PROB_REC : get_appl_txn_rec :  lagencyrevncode - %d", lagencyrevncode);					
		#endif


			appl_txn->txnserno = ltxnserno;
			strcpy(appl_txn->feetype,lfeetype);
			appl_txn->feeamt = lfeeamt;
			appl_txn->agencyrevncode = lagencyrevncode;


		#ifdef DEBUG
			userlog(" ");
			userlog("GET_PROB_REC : get_appl_txn_rec :  appl_txn->txnserno - %d", appl_txn->txnserno);
			userlog("GET_PROB_REC : get_appl_txn_rec :  appl_txn->feetype - %s", appl_txn->feetype);
			userlog("GET_PROB_REC : get_appl_txn_rec :  appl_txn->feeamt - %f", appl_txn->feeamt);
			userlog("GET_PROB_REC : get_appl_txn_rec :  appl_txn->agencyrevncode - %d", appl_txn->agencyrevncode);					
		#endif


		} /* end of for */

		/* EXEC SQL CLOSE fee_cur; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 62;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )929;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



		return SUCCESS;

}



int get_outstand_txn_rec(char *appl_id, OUTSTAND_TXN_FEE_T *outstand_txn, int fee_cnt, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 07/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	
	/* varchar applid[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } applid
 = {0};

	int   i=0;
	int   ltxnserno=0;
	float lfeeamt=0;	
	char  lfeetype[3]={0};
	int   lagencyrevncode=0;
	char  lsend_gsc='\0';

		sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	memset(outstand_txn,'\0', sizeof(OUTSTAND_TXN_FEE_T));

	#ifdef DEBUG
		userlog("GET_PROB_REC : get_outstand_txn_rec : appl_id : %s",appl_id);
	#endif

	strcpy(applid.arr,appl_id);
	setlen(applid);

	#ifdef DEBUG
		userlog("GET_PROB_REC : get_outstand_txn_rec : applid : %s",applid.arr);
	#endif

	/* EXEC SQL DECLARE fee_cur1 CURSOR FOR 
		SELECT TXNSERNO, FEETYPE, FEEAMT, AGENCYREVNCODE, SEND_GSC 
			  FROM  OUTSTAND_TXN_FEE 
			  WHERE APPLID  = :applid
			  AND   FEETYPE IN ('CF','FF','UF'); */ 



	/* EXEC SQL OPEN fee_cur1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 62;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0019;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )944;
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



	
		if(SQLCODE != 0) 
		{
		 #ifdef DEBUG
			userlog("GET_PROB_REC : get_outstand_txn_rec : open fee_cur1 failed ");
		 #endif
			strcpy(prog_log.remarks,"GET_PROB_REC : get_outstand_txn_rec : open fee_cur1 failed");
			sprintf(excep_log.error_msg,"GET_PROB_REC : get_outstand_txn_rec : open fee_cur1 failed:%s ",SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;

			log_error(ctx);
					
			/* EXEC SQL CLOSE fee_cur1; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 62;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )963;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



			return CURSOR_OPEN_ERROR;
		}

		
		for(i=0;i<fee_cnt;i++,outstand_txn++)
		{
			/* EXEC SQL FETCH fee_cur1 INTO :ltxnserno,:lfeetype,:lfeeamt,
					:lagencyrevncode,lsend_gsc; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 62;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )978;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqfoff = (           int )0;
   sqlstm.sqfmod = (unsigned int )2;
   sqlstm.sqhstv[0] = (         void  *)&ltxnserno;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)lfeetype;
   sqlstm.sqhstl[1] = (unsigned int  )3;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&lfeeamt;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&lagencyrevncode;
   sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)0;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)&lsend_gsc;
   sqlstm.sqhstl[4] = (unsigned int  )1;
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


						
			
			if((SQLCODE != 0) && (sqlca.sqlcode != 1403))
			{
				#ifdef DEBUG
					userlog("GET_PROB_REC : get_outstand_txn_rec : fee_cur1 failed while SELECT from appl_txn_fee :%s",SQLMSG);
				#endif
				strcpy(prog_log.remarks,"GET_PROB_REC : get_outstand_txn_rec : fee_cur1 failed while SELECT from appl_txn_fee");
				sprintf(excep_log.error_msg,"GET_PROB_REC : get_outstand_txn_rec : fee_cur1 failed while SELECT from appl_txn_fee:%s ",SQLMSG);
				excep_log.termination_flag = 'Y';
				excep_log.severity = FATAL;
				log_error(ctx);
					
				/* EXEC SQL CLOSE fee_cur1; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 62;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1013;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



				return CURSOR_FETCH_ERROR;
			}

		#ifdef DEBUG
			userlog(" ");
			userlog("GET_PROB_REC : get_outstand_txn_rec :  ltxnserno - %d", ltxnserno);
			userlog("GET_PROB_REC : get_outstand_txn_rec :  lfeetype - %s", lfeetype);
			userlog("GET_PROB_REC : get_outstand_txn_rec :  lfeeamt - %f", lfeeamt);
			userlog("GET_PROB_REC : get_outstand_txn_rec :  lagencyrevncode - %d", lagencyrevncode);
			userlog("GET_PROB_REC : get_outstand_txn_rec :  lsend_gsc - %c", lsend_gsc);
		#endif

			outstand_txn->txnserno = ltxnserno;
			strcpy(outstand_txn->feetype,lfeetype);
			outstand_txn->feeamt = lfeeamt;
			outstand_txn->agencyrevncode = lagencyrevncode;
			outstand_txn->send_gsc = lsend_gsc;


		#ifdef DEBUG
			userlog(" ");
			userlog("GET_PROB_REC : get_outstand_txn_rec :  outstand_txn->txnserno - %d", outstand_txn->txnserno);
			userlog("GET_PROB_REC : get_outstand_txn_rec :  outstand_txn->feetype - %s", outstand_txn->feetype);
			userlog("GET_PROB_REC : get_outstand_txn_rec :  outstand_txn->feeamt - %f", outstand_txn->feeamt);
			userlog("GET_PROB_REC : get_outstand_txn_rec :  outstand_txn->agencyrevncode - %d", outstand_txn->agencyrevncode);					
			userlog("GET_PROB_REC : get_outstand_txn_rec :  outstand_txn->send_gsc - %c", outstand_txn->send_gsc);
		#endif


		} /* end of for */

		/* EXEC SQL CLOSE fee_cur1; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 62;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1028;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



		return SUCCESS;

}

/********************************************************************************/
/* Function name: get_time_ver_rec											    */
/* Description	: This function retrieves the time stamp details for the given 	*/
/*                applicantion id												*/
/* Input		: Applicantion Id, pointer to TIME_VERSION_T struct, Error Code */
/* Return values: GMPC_GOOD/ORA_ERROR											*/
/* Limitations	: None															*/
/********************************************************************************/
int get_time_ver_rec(char *appl_id, TIME_VERSION_T *time_version,  void * ctx)
{
	struct sqlca sqlca = {0}; // added on 07/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	
	/* varchar applid[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } applid
 = {0};
	
	/* varchar timeStatmp[DATE_TIME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } timeStatmp
 = {0};

	char lagencyonchip[AGENCY_ON_CHIP_SIZE] = {0};
	int  version=0;
	short timeStatmp_ind = 0;
	short version_ind = 0;
	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	memset(time_version,'\0', sizeof(TIME_VERSION_T));

	#ifdef DEBUG
		userlog("GET_PROB_REC : get_time_ver_rec : appl_id : %s",appl_id);
	#endif

	strcpy(applid.arr,appl_id);
	setlen(applid);

	#ifdef DEBUG
		userlog("GET_PROB_REC : get_time_ver_rec : applid : %s",applid.arr);
	#endif


	/* EXEC SQL SELECT TO_CHAR(TIMESTAMP,'YYYYMMDDHH24MISS')
			INTO	:timeStatmp:timeStatmp_ind					
			FROM	APPLICATION
			WHERE	APPLID = :applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 62;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR( timestamp ,'YYYYMMDDHH24MISS') into :b0:b1  \
from APPLICATION where APPLID=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1043;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&timeStatmp;
 sqlstm.sqhstl[0] = (unsigned int  )18;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&timeStatmp_ind;
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




	if((SQLCODE) && !(NO_DATA_FOUND))
		{
		 #ifdef DEBUG
			userlog(" GET_PROB_REC : get_time_ver_rec : Select from APPLICATION failed : %s", SQLMSG);
		 #endif
			strcpy(prog_log.remarks,"GET_PROB_REC :  get_time_ver_rec: Select from APPLICATION failed");
			sprintf(excep_log.error_msg, "GET_PROB_REC :  get_time_ver_rec : Select from APPLICATION failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;
			log_error(ctx);
				
			return SELECT_ERROR;
		}

		/* EXEC SQL SELECT CARDVERSIONNO,AGENCYONCHIP
			INTO	:version:version_ind,:lagencyonchip						
			FROM	CARD_STATUS
			WHERE	APPLID = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 62;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select CARDVERSIONNO ,AGENCYONCHIP into :b0:b1,:b2  from CA\
RD_STATUS where APPLID=:b3";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1066;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&version;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&version_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)lagencyonchip;
  sqlstm.sqhstl[1] = (unsigned int  )9;
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





	if((SQLCODE) && !(NO_DATA_FOUND))
		{
		 #ifdef DEBUG
			userlog(" GET_PROB_REC : get_time_ver_rec : Select from CARD_STATUS failed : %s", SQLMSG);
		 #endif
			strcpy(prog_log.remarks,"GET_PROB_REC :  get_time_ver_rec: Select from CARD_STATUS failed");
			sprintf(excep_log.error_msg, "GET_PROB_REC :  get_time_ver_rec : Select from CARD_STATUS failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;
			log_error(ctx);
				
			return SELECT_ERROR;
		}
		
	
		setnull(timeStatmp);
		

		#ifdef DEBUG
			userlog(" ");
			userlog("GET_PROB_REC :  get_time_ver_rec :time stamp - %s", timeStatmp.arr);
			userlog("GET_PROB_REC : get_time_ver_rec : version - %d", version);
			userlog(" ");
		#endif
		
		
			strcpy(time_version->timeStamp,timeStatmp.arr);		
			time_version->cardVersion = version;
			strcpy(time_version->agencyonchip, lagencyonchip);
	
	
		#ifdef DEBUG
			userlog(" ");
			userlog("GET_PROB_REC : get_time_ver_rec : time stamp - %s",time_version->timeStamp);
			userlog("GET_PROB_REC : get_time_ver_rec : version - %d",  time_version->cardVersion);
			userlog("GET_PROB_REC : get_time_ver_rec : agencyonchip - %s", lagencyonchip);
			userlog(" ");
		#endif

	

		#ifdef DEBUG
			userlog("GET_PROB_REC : get_time_ver_rec : Record selected successfully");
		#endif

	return SUCCESS;

}


 /*** end IJPN ***/