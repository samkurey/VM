
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
           char  filnam[21];
};
static const struct sqlcxp sqlfpn =
{
    20,
    ".\\RevUpdCaller_DB.pc"
};


static unsigned int sqlctx = 68930251;


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
            void  *sqhstv[3];
   unsigned int   sqhstl[3];
            int   sqhsts[3];
            void  *sqindv[3];
            int   sqinds[3];
   unsigned int   sqharm[3];
   unsigned int   *sqharc[3];
   unsigned short  sqadto[3];
   unsigned short  sqtdso[3];
} sqlstm = {12,3};

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
5,0,0,1,66,0,4,90,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
28,0,0,2,106,0,4,98,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
51,0,0,3,99,0,4,107,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
74,0,0,4,83,0,4,188,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,3,0,0,
101,0,0,5,156,0,3,199,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,
128,0,0,6,0,0,29,225,0,0,0,0,0,1,0,
};



/* Include files	*/

#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#define SQLCA_STORAGE_CLASS extern
#include <sqlca.h>

#include "gscbdef.h"
#include "gscbio.h"
#include "gscblog.h"
#include "gscblookupdef.h"
#include "KPPdef.h"
#include "KPPstruct.h"
#include "KPPproto.h"
#include "li_rev_add_new_class.h"
#include "rev_gmpc_appl_io.h"
#include "rev_gmpc_appl.h"
#include "Jpj_upd_Sp_Caller_io.h"


//#import  "JpjUpdSpCaller.tlb" no_namespace



extern "C" PROG_ACCESS_LOG_T prog_log;
extern "C" APPL_EXCEP_LOG_T excep_log;
extern "C" TXN_LOG_T tran_log;
READ_REG_GENERIC_T gen_reg;



char sqlmsg[SQL_MSG_SIZE];
char afis_call_flag = 'N';

extern "C" void userlog(char *szFormatString,...);
extern "C" int Call_Jpj_Upd_Caller(HEADER_T header , void * ctx);   // added this on 20/04/2015 for JPJ WEBSERVICE


int Call_Jpj_Upd_Caller(HEADER_T header, void * ctx)
{

		struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char applid[APP_ID_SIZE] = {0};
	char branchcode[BRANCH_CODE_SIZE] = {0};
	char reqtype = {0};
	char txndate[11] = {0};
	char wsid[WS_ID_SIZE] = {0};
	char userid[USER_ID_SIZE] = {0};

	int  revcount=0;
	int  ret_code = 0;
	int  rencount = 0;
	int  txncount = 0;

		sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN




	#ifdef DEBUG
		userlog(" ");
		userlog("Call_Jpj_Upd_Caller : header.application_id:%s:",header.application_id);
		userlog("Call_Jpj_Upd_Caller : header.branch_code:%s:", header.branch_code);
		userlog("Call_Jpj_Upd_Caller : header.service_id:%d:", header.service_id);
		userlog("Call_Jpj_Upd_Caller : header.user_id:%s:", header.user_id);
		userlog("Call_Jpj_Upd_Caller : header.workstation_id:%s:", header.workstation_id);		
		userlog("Call_Jpj_Upd_Caller : reqtype:%d:", reqtype);		
		userlog(" ");
	#endif

	strcpy(applid,header.application_id);

	#ifdef DEBUG
		userlog(" ");
		userlog("Call_Jpj_Upd_Caller : applid:%s:",applid);
		userlog(" ");
	#endif



		/* EXEC SQL SELECT COUNT(*) INTO :revcount
		FROM APPNT_JPJ_LICSYNC
		WHERE APPLID = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 2;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPNT_JPJ_LICSYNC where APP\
LID=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )5;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&revcount;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)applid;
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




	if(revcount > 0)
	{

		/* EXEC SQL SELECT COUNT(*) INTO :txncount 
			FROM APPL_TXN 
			WHERE TXNCODE = '609'
			AND TXNCANCELCODE IS NULL
			AND APPLID = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 2;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN where ((TXNCODE='6\
09' and TXNCANCELCODE is null ) and APPLID=:b1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )28;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&txncount;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)applid;
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



		if(txncount >0)
		{

			/* EXEC SQL SELECT COUNT(*) INTO :rencount
			FROM IJPN_JPJ_UPD_REQ
			WHERE APPLID = :applid
			AND REQTYPE = '3'
			AND REQSTAT = 0; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 2;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select count(*)  into :b0  from IJPN_JPJ_UPD_REQ where ((A\
PPLID=:b1 and REQTYPE='3') and REQSTAT=0)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )51;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&rencount;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)applid;
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



			 // checking for renewalupate, for successful cases only we reverse
			if(rencount > 0)
			{

				// for reversal update the reqtype = 4
					reqtype = 4;
				if (SUCCESS == (ret_code = insert_into_ijpn_jpj_updreq(header,reqtype,ctx)))
					{
						if (SUCCESS != (ret_code = call_jpj_update(header,reqtype,ctx)))
						{
							#ifdef DEBUG
								userlog("Call_Jpj_Upd_Caller : call to jpj_update webservice failed with %d", ret_code);
							#endif
							return GMPC_BAD;
						}
					}
					else
					{
						userlog("Call_Jpj_Upd_Caller : insert_into_ijpn_jpj_updreq failed!!");
						return ret_code;
					}
			}
		}
	}


	#ifdef DEBUG
		userlog(" ");
		userlog("Call_Jpj_Upd_Caller : call to jpj_update webservice Successful with ret_code:%d", ret_code);		
		userlog(" ");
	#endif


	return GMPC_GOOD;

}



// added this on 26/03/2015 for JPJ JAVA changes
int insert_into_ijpn_jpj_updreq(HEADER_T header, int reqtype, void * ctx)
{
		struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char applid[APP_ID_SIZE] = {0};	
	char kptno[KPT_SIZE] = {0};	
	char bcode[9] = {0};
	int  lcount=0;
	int  lcount1=0;	
	int  jreqtype = 0;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 

	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	#ifdef DEBUG
		userlog("insert_into_ijpn_jpj_updreq : header.application_id : %s",header.application_id);
		userlog("insert_into_ijpn_jpj_updreq : header.branch_code : %s",header.branch_code);
		userlog("insert_into_ijpn_jpj_updreq : reqtype : %d",reqtype);		
    #endif

	strcpy(applid, header.application_id);
	strcpy(bcode, header.branch_code);
	jreqtype = reqtype;

	#ifdef DEBUG
		userlog("insert_into_ijpn_jpj_updreq : applid : %s",applid);
		userlog("insert_into_ijpn_jpj_updreq : branch code : %s",bcode);
		userlog("insert_into_ijpn_jpj_updreq : jreqtype : %d",jreqtype);	
    #endif

	lcount=0;
	/* EXEC SQL SELECT COUNT(*) INTO :lcount FROM IJPN_JPJ_UPD_REQ
		WHERE APPLID = :applid
		AND REQTYPE = :jreqtype; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 3;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from IJPN_JPJ_UPD_REQ where (APPL\
ID=:b1 and REQTYPE=:b2)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )74;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&lcount;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)applid;
 sqlstm.sqhstl[1] = (unsigned int  )20;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&jreqtype;
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



	#ifdef DEBUG
		userlog("insert_into_ijpn_jpj_updreq : lcount FROM IJPN_JPJ_UPD_REQ: %d",lcount);
    #endif

	if(lcount == 0)
	{
		
		/* EXEC SQL INSERT INTO IJPN_JPJ_UPD_REQ(APPLID, BRANCHCODE, TXNID, REVTXNID, REQTYPE, REQSTAT, RESPONSECODE, TIMESTAMP)
			VALUES(:applid,:bcode,NULL,NULL,:jreqtype,-1,NULL,SYSDATE); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 3;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into IJPN_JPJ_UPD_REQ (APPLID,BRANCHCODE,TXNID,REVTX\
NID,REQTYPE,REQSTAT,RESPONSECODE, timestamp ) values (:b0,:b1,null ,null ,:b2,\
(-1),null ,SYSDATE)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )101;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)applid;
  sqlstm.sqhstl[0] = (unsigned int  )20;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)bcode;
  sqlstm.sqhstl[1] = (unsigned int  )9;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&jreqtype;
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




			if(sqlca.sqlcode == 0)
			{
				#ifdef DEBUG
					userlog("insert_into_ijpn_jpj_updreq : Record inserted into IJPN_JPJ_UPD_REQ ");
				#endif
			}
			else
			{
				#ifdef DEBUG
					userlog("insert_into_ijpn_jpj_updreq : Failed to inserted into IJPN_JPJ_UPD_REQ : %d",sqlca.sqlcode);
				#endif
				return INSERT_ERROR;
			}
	
	}
	else
	{
		#ifdef DEBUG
			userlog("insert_into_ijpn_jpj_updreq : record found in IJPN_JPJ_UPD_REQ for this applid : %s",applid);
		#endif
	}

	/* EXEC SQL COMMIT; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 3;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )128;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



	return GMPC_GOOD;

}




/*********************************************************************/
/* Function Name:call_jpj_update									 */
/* Description	:This function calls the service JPJ_UPDATE			 */
/* Input		:Header,Applicant ID,update flag and resp buffer	 */   
/* Return Values:  GMPC_GOOD	 */
/*				 which have only header								 */
/* Limitations	:													 */
/*********************************************************************/
int call_jpj_update(HEADER_T header, int reqtype,void * ctx)
{
	struct sqlca sqlca = {0};
	/*
	int ret;
	JPJ_UPD_CALLER_REQ_T *pstSendBuf;
	
	long ReqLen = 0;
	long RespLen = 0;
	long ret_code = 0;
	int callFlag = 0;
	ReqLen = sizeof(JPJ_UPD_CALLER_REQ_T);
	
	SAFEARRAY *psa;
	SAFEARRAY *psaRsp;
	char flag = UNKNOWN;
	unsigned char *pData = NULL;
	//long lSize;
	//int ret;
	  
	
	
	#ifdef DEBUG
			userlog("call_jpj_update: In call_jpj_update()");
	#endif

	if((pstSendBuf = (JPJ_UPD_CALLER_REQ_T *)malloc(ReqLen)) == NULL)
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
			strcpy(pstSendBuf->header.workstation_id,header.workstation_id);
			strcpy(pstSendBuf->header.branch_code, header.branch_code);
			strcpy(pstSendBuf->header.application_id, header.application_id);
			//pstSendBuf->jpjreqtype = reqtype;
			sprintf(pstSendBuf->jpjreqtype,"%d",reqtype);
			
		#ifdef DEBUG
			userlog("call_jpj_update : REQUEST DATA FOR JPJ_UPD_CALLER :");
			userlog("call_jpj_update : User Id - %s", pstSendBuf->header.user_id );
			userlog("call_jpj_update : Workstation Id - %s", pstSendBuf->header.workstation_id );
			userlog("call_jpj_update : Gsc No - %s", pstSendBuf->header.branch_code );
			userlog("call_jpj_update : Application Id - %s", pstSendBuf->header.application_id);
			userlog("call_jpj_update : jpjreqtype - %s", pstSendBuf->jpjreqtype);
		#endif 
			try
			{
						
				//IJpjUpdCallerServicePtr pI("JpjUpdCaller.JpjUpdCallerService.1");
				IJpjUpdSpCallerServicePtr pI("JpjUpdSpCaller.JpjUpdSpCallerService.1");
			
				// create a safe array to store the stream data
				psa = SafeArrayCreateVector( VT_UI1, 0, sizeof(JPJ_UPD_CALLER_REQ_T));
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
							memcpy( pData, pstSendBuf, sizeof(JPJ_UPD_CALLER_REQ_T));		
							SafeArrayUnaccessData(psa);
							if(FAILED(ret = pI->Execute(psa, &psaRsp)))
							{
								#ifdef DEBUG
									userlog("Error while executing JpjUpdCallerService. Call to Method Execute() Failed. %d", ret);
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
					userlog("Error while executing JpjUpdCallerService. Call to Method Execute() Failed. %s", e.ErrorMessage());
			 #endif
			 
			  callFlag = 1;	
		}
	}
	
	  	#ifdef DEBUG
				userlog("Before free((char*)pstSendBuf)");
		#endif

		if(pstSendBuf)
			free((char*)pstSendBuf);

		#ifdef DEBUG
			userlog("After free((char*)pstSendBuf)");
		 #endif

     if(callFlag == 1)
	 {		
	    sprintf(excep_log.error_msg,"call_jpj_update : Failed");
		excep_log.termination_flag = NO;
		excep_log.severity = NON_FATAL;
		log_error(ctx);		
						
			return GMPC_BAD;
     }
	 */
		return GMPC_GOOD;

}

