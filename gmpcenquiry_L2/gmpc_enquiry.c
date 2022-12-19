
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
  typedeftruct sql_cursor sql_cursor;
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
           char  filnam[18];
};
static const struct sqlcxp sqlfpn =
{
    17,
    ".\\gmpc_enquiry.pc"
};


static unsigned int sqlctx = 8461411;


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
            void  *sqhstv[27];
   unsigned int   sqhstl[27];
            int   sqhsts[27];
            void  *sqindv[27];
            int   sqinds[27];
   unsigned int   sqharm[27];
   unsigned int   *sqharc[27];
   unsigned short  sqadto[27];
   unsigned short  sqtdso[27];
} sqlstm = {12,27};

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

 static const char *sq0014 = 
"select distinct APPLSTAT ,USERID ,TO_CHAR( timestamp ,'YYYYMMDD HH24MISS') ,\
WSID ,BRANCHCODE  from APPL_HISTORY where APPLID=:b0 order by TO_CHAR( timesta\
mp ,'YYYYMMDD HH24MISS') desc             ";

 static const char *sq0015 = 
"select CARDSTAT ,USERID ,TO_CHAR( timestamp ,'YYYYMMDD HH24MISS') ,WSID ,BRA\
NCHCODE  from CARD_HISTORY where (KPTNO=:b0 and CARDVERSIONNO=:b1) order by  t\
imestamp  desc             ";

 static const char *sq0016 = 
"select TXNCODE ,LICTYPE ,LICCLASS ,LICUSAGECODE  from APPL_TXN where (APPLID\
=:b0 and TXNCANCELCODE is null ) order by TXNCODE            ";

 static const char *sq0017 = 
"select A.APPLID ,A.APPLSTAT ,TO_CHAR(A.APPLDATE,'YYYYMMDD HH24MISS') ,C.CARD\
STAT ,C.CARDVERSIONNO ,T.TXNCODE  from APPLICATION A ,CARD_STATUS C ,APPL_TXN \
T where (((((A.APPLID<>:b0 and A.KPTNO=:b1) and A.APPLID=C.APPLID(+)) and A.AP\
PLID=T.APPLID) and APPLSTAT<>'T') and T.TXNCANCELCODE is null ) order by A.APP\
LID            ";

 static const char *sq0018 = 
"select PROCIND ,USERID ,TO_CHAR( timestamp ,'YYYYMMDD HH24MISS')  from APPL_\
PROC where APPLID=:b0 order by PROCSERNO desc             ";

 static const char *sq0023 = 
"select A.KPTNO ,max(C.CARDVERSIONNO)  from APPLICATION A ,APPNT_JPN_INFO B ,\
CARD_STATUS C where (((((A.IDTYPE=:b0:b1 and A.IDNO=:b2:b3) and A.KPTNO=B.KPTN\
O) and A.APPLID=B.APPLID) and A.KPTNO=C.KPTNO) and A.APPLID=C.APPLID) group by\
 A.KPTNO           ";

 static const char *sq0025 = 
"select TO_CHAR(PASSPORTDOCTYPE) ,PASSPORTIDNO ,TO_CHAR(PASSPORTEXPDATE,'YYYY\
MMDD')  from APPNT_PP_INFO where APPLID=:b0           ";

 static const char *sq0027 = 
"select LICTYPE ,LICCLASS ,LICUSAGECODE  from APPNT_LIC_INFO where APPLID=:b0\
           ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4274,178,0,0,
5,0,0,1,80,0,4,51,0,0,3,2,0,1,0,2,97,0,0,1,97,0,0,1,3,0,0,
32,0,0,2,169,0,4,88,0,0,3,2,0,1,0,2,97,0,0,1,97,0,0,1,97,0,0,
59,0,0,3,86,0,4,122,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
82,0,0,4,163,0,4,142,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
105,0,0,5,62,0,4,193,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
128,0,0,6,63,0,4,217,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
151,0,0,7,84,0,4,245,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,3,0,0,
178,0,0,8,212,0,4,301,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,97,0,0,
205,0,0,9,937,0,4,431,0,0,27,2,0,1,0,2,97,0,0,2,9,0,0,2,1,0,0,2,97,0,0,2,97,0,
0,2,97,0,0,2,97,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,97,0,0,2,1,0,0,2,97,0,0,2,9,0,0,
2,3,0,0,2,1,0,0,2,9,0,0,2,1,0,0,2,97,0,0,2,9,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,
3,0,0,2,9,0,0,1,97,0,0,1,3,0,0,
328,0,0,10,185,0,4,633,0,0,4,2,0,1,0,2,9,0,0,2,97,0,0,1,97,0,0,1,3,0,0,
359,0,0,11,134,0,4,681,0,0,4,2,0,1,0,2,9,0,0,2,97,0,0,1,97,0,0,1,3,0,0,
390,0,0,12,64,0,4,749,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
413,0,0,13,71,0,4,778,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
436,0,0,14,196,0,9,853,0,0,1,1,0,1,0,1,97,0,0,
455,0,0,14,0,0,15,867,0,0,0,0,0,1,0,
470,0,0,14,0,0,13,873,0,0,5,0,0,1,0,2,1,0,0,2,9,0,0,2,97,0,0,2,9,0,0,2,97,0,0,
505,0,0,14,0,0,15,891,0,0,0,0,0,1,0,
520,0,0,14,0,0,15,946,0,0,0,0,0,1,0,
535,0,0,15,181,0,9,1033,0,0,2,2,0,1,0,1,97,0,0,1,3,0,0,
558,0,0,15,0,0,13,1059,0,0,5,0,0,1,0,2,3,0,0,2,9,0,0,2,97,0,0,2,9,0,0,2,97,0,0,
593,0,0,15,0,0,15,1077,0,0,0,0,0,1,0,
608,0,0,15,0,0,15,1132,0,0,0,0,0,1,0,
623,0,0,16,137,0,9,1186,0,0,1,1,0,1,0,1,97,0,0,
642,0,0,16,0,0,15,1201,0,0,0,0,0,1,0,
657,0,0,16,0,0,13,1209,0,0,4,0,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,
688,0,0,16,0,0,15,1226,0,0,0,0,0,1,0,
703,0,0,16,0,0,15,1272,0,0,0,0,0,1,0,
718,0,0,17,325,0,9,1384,0,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
741,0,0,17,0,0,13,1411,0,0,6,0,0,1,0,2,97,0,0,2,1,0,0,2,97,0,0,2,3,0,0,2,3,0,0,
2,97,0,0,
780,0,0,17,0,0,15,1432,0,0,0,0,0,1,0,
795,0,0,17,0,0,15,1480,0,0,0,0,0,1,0,
810,0,0,18,134,0,9,1532,0,0,1,1,0,1,0,1,97,0,0,
829,0,0,18,0,0,15,1546,0,0,0,0,0,1,0,
844,0,0,18,0,0,13,1554,0,0,3,0,0,1,0,2,97,0,0,2,9,0,0,2,97,0,0,
871,0,0,18,0,0,15,1570,0,0,0,0,0,1,0,
886,0,0,18,0,0,15,1605,0,0,0,0,0,1,0,
901,0,0,19,194,0,4,1663,0,0,3,2,0,1,0,2,4,0,0,1,97,0,0,1,97,0,0,
928,0,0,20,70,0,4,1699,0,0,2,1,0,1,0,2,4,0,0,1,97,0,0,
951,0,0,21,122,0,4,1763,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,9,0,0,
978,0,0,22,117,0,4,1795,0,0,3,2,0,1,0,2,97,0,0,1,97,0,0,1,9,0,0,
1005,0,0,23,251,0,9,1910,0,0,2,2,0,1,0,1,97,0,0,1,9,0,0,
1028,0,0,23,0,0,15,1925,0,0,0,0,0,1,0,
1043,0,0,23,0,0,13,1937,0,0,2,0,0,1,0,2,97,0,0,2,3,0,0,
1066,0,0,23,0,0,15,1953,0,0,0,0,0,1,0,
1081,0,0,24,215,0,4,1976,0,0,4,2,0,1,0,2,1,0,0,2,9,0,0,1,97,0,0,1,3,0,0,
1112,0,0,25,130,0,9,2064,0,0,1,1,0,1,0,1,97,0,0,
1131,0,0,25,0,0,15,2079,0,0,0,0,0,1,0,
1146,0,0,25,0,0,13,2087,0,0,3,0,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,
1173,0,0,25,0,0,15,2103,0,0,0,0,0,1,0,
1188,0,0,25,0,0,15,2145,0,0,0,0,0,1,0,
1203,0,0,26,238,0,4,2214,0,0,10,1,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,
97,0,0,2,97,0,0,2,97,0,0,2,3,0,0,2,97,0,0,1,97,0,0,
1258,0,0,27,87,0,9,2334,0,0,1,1,0,1,0,1,97,0,0,
1277,0,0,27,0,0,13,2358,0,0,3,0,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,
1304,0,0,27,0,0,15,2375,0,0,0,0,0,1,0,
};


/* $Header$ */

/*******************************************************/
/* Filename		:gmpc_enquiry.pc					   */
/* Author		:Brijesh B Patil   					   */
/* Description	:This file has all database functions  */
/*				 required for the service GMPC_ENQUIRY */
/*******************************************************/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LOG_DEFINED

#include "gscbdef.h"
#include "gscbio.h"
#include "gmpc_enquiry_io.h"
#include "gmpc_enquiry.h"
#include "gscblog.h"
#include "gscblookupdef.h"

//#define	enq_resp	(GMPC_ENQUIRY_RESP_T *)(*enq_resp)

extern userlog(const char *, ...);
extern int get_appl_det(GMPC_ENQUIRY_RESP_T **resp);

/* EXEC SQL INCLUDE SQLCA;
 */ 
/*
 * $Header: sqlca.h 24-apr-2003.12:50:58 mkandarp Exp $ sqlca.h 
 */

/* Copyright (c) 1985, 2003, Oracle Corporation.  All rights reserved.  */
 
/*
NAME
  SQLCA : SQL Communications Area.
FUNCTION
  Contains no code. Oracle fills in the SQLCA with status info
  during the execution of a SQL stmt.
NOTES
  **************************************************************
  ***                                                        ***
  *** This file is SOSD.  Porters must change the data types ***
  *** appropriately on their platform.  See notes/pcport.doc ***
  *** for more information.                                  ***
  ***                                                        ***
  **************************************************************

  If the symbol SQLCA_STORAGE_CLASS is defined, then the SQLCA
  will be defined to have this storage class. For example:
 
    #define SQLCA_STORAGE_CLASS extern
 
  will define the SQLCA as an extern.
 
  If the symbol SQLCA_INIT is defined, then the SQLCA will be
  statically initialized. Although this is not necessary in order
  to use the SQLCA, it is a good pgming practice not to have
  unitialized variables. However, some C compilers/OS's don't
  allow automatic variables to be init'd in this manner. Therefore,
  if you are INCLUDE'ing the SQLCA in a place where it would be
  an automatic AND your C compiler/OS doesn't allow this style
  of initialization, then SQLCA_INIT should be left undefined --
  all others can define SQLCA_INIT if they wish.

  If the symbol SQLCA_NONE is defined, then the SQLCA variable will
  not be defined at all.  The symbol SQLCA_NONE should not be defined
  in source modules that have embedded SQL.  However, source modules
  that have no embedded SQL, but need to manipulate a sqlca struct
  passed in as a parameter, can set the SQLCA_NONE symbol to avoid
  creation of an extraneous sqlca variable.
 
MODIFIED
    lvbcheng   07/31/98 -  long to int
    jbasu      12/12/94 -  Bug 217878: note this is an SOSD file
    losborne   08/11/92 -  No sqlca var if SQLCA_NONE macro set 
  Clare      12/06/84 - Ch SQLCA to not be an extern.
  Clare      10/21/85 - Add initialization.
  Bradbury   01/05/86 - Only initialize when SQLCA_INIT set
  Clare      06/12/86 - Add SQLCA_STORAGE_CLASS option.
*/
 
#ifndef SQLCA
#define SQLCA 1
 
struct   sqlca
         {
         /* ub1 */ char    sqlcaid[8];
         /* b4  */ int     sqlabc;
         /* b4  */ int     sqlcode;
         struct
           {
           /* ub2 */ unsigned short sqlerrml;
           /* ub1 */ char           sqlerrmc[70];
           } sqlerrm;
         /* ub1 */ char    sqlerrp[8];
         /* b4  */ int     sqlerrd[6];
         /* ub1 */ char    sqlwarn[8];
         /* ub1 */ char    sqlext[8];
         };

#ifndef SQLCA_NONE 
#ifdef   SQLCA_STORAGE_CLASS
SQLCA_STORAGE_CLASS struct sqlca sqlca
#else
         struct sqlca sqlca
#endif
 
#ifdef  SQLCA_INIT
         = {
         {'S', 'Q', 'L', 'C', 'A', ' ', ' ', ' '},
         sizeof(struct sqlca),
         0,
         { 0, {0}},
         {'N', 'O', 'T', ' ', 'S', 'E', 'T', ' '},
         {0, 0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0}
         }
#endif
         ;
#endif
 
#endif
 
/* end SQLCA */

char sqlmsg[SQL_MSG_SIZE] = {"\0"};

/****************************************************************/
/* Function Name:get_rec_numbers								*/
/* Description  :Gets Appl data							*/
/* Input        :GMPC_ENQUIRY_RESP_T structure							*/   
/* Return Values:SUCCESS or SELECT_ERROR					    */
/****************************************************************/
int get_rec_numbers(GMPC_ENQUIRY_RESP_T *resp)
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char applid[APP_ID_SIZE] = {0};
		char new_kptno[KPT_SIZE] = {0};
	//	char txncode[TRANSACTION_CODE_SIZE]; commented because there is a warning while compilation on this
		int i_count = 0;
	/* EXEC SQL END DECLARE SECTION; */ 


	int ret_val = 0;

	if(resp->version > 0)
	{
		/* EXEC SQL
			SELECT APPLID INTO :applid FROM CARD_STATUS WHERE 
			KPTNO = :resp->kptno AND CARDVERSIONNO = :resp->version; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 3;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select APPLID into :b0  from CARD_STATUS where (KPTNO=:b1 a\
nd CARDVERSIONNO=:b2)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )5;
  sqlstm.selerr = (unsigned short)1;
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
  sqlstm.sqhstv[1] = (         void  *)(resp->kptno);
  sqlstm.sqhstl[1] = (unsigned int  )13;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&(resp->version);
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
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE)
		{
			strcpy(prog_log.remarks,"get_rec_numbers :Select APPLID failed");
			sprintf(excep_log.error_msg,"get_rec_numbers :  Select APPLID failed:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error();

			#ifdef DEBUG
				userlog("get_rec_numbers: Select APPLID failed ");
			#endif
			return SELECT_ERROR;
		}
	}
	else
	{
/* Changed by Sushil 08/09/2003 to include Application status 'I' in the select statement
		EXEC SQL
			SELECT APPLID INTO :applid FROM APPLICATION WHERE 
			KPTNO = :resp->kptno AND APPLDATE = 
			(SELECT MAX(APPLDATE) FROM APPLICATION WHERE 
			KPTNO = :resp->kptno) AND APPLSTAT NOT IN ('T', 'M');
*/
				
/* Changed by Sushil 27/11/2003 to include Application status 'B' in the select statement		
		EXEC SQL
			SELECT APPLID INTO :applid FROM APPLICATION WHERE 
			KPTNO = :resp->kptno AND APPLDATE = 
			(SELECT MAX(APPLDATE) FROM APPLICATION WHERE 
			KPTNO = :resp->kptno) AND APPLSTAT NOT IN ('T','M','I');
*/	
	/* EXEC SQL
			SELECT APPLID INTO :applid FROM APPLICATION WHERE 
			KPTNO = :resp->kptno AND APPLDATE = 
			(SELECT MAX(APPLDATE) FROM APPLICATION WHERE 
			KPTNO = :resp->kptno) AND APPLSTAT NOT IN ('T','M','I','B'); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 3;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select APPLID into :b0  from APPLICATION where ((KPTNO=:b1 a\
nd APPLDATE=(select max(APPLDATE)  from APPLICATION where KPTNO=:b1)) and APPL\
STAT not  in ('T','M','I','B'))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )32;
 sqlstm.selerr = (unsigned short)1;
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
 sqlstm.sqhstv[1] = (         void  *)(resp->kptno);
 sqlstm.sqhstl[1] = (unsigned int  )13;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)(resp->kptno);
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
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


			
		
		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE)
		{
			strcpy(prog_log.remarks,"get_rec_numbers :Select APPLID from application failed");
			sprintf(excep_log.error_msg,"get_rec_numbers :  Select APPLID from application failed:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error();

			#ifdef DEBUG
				userlog("get_rec_numbers: Select APPLID from application failed ");
			#endif
			
			/* Changed by Sushil 03/04/2003 to change the response from the service
			return SELECT_ERROR;
			*/
			return APPL_NOT_COMPLETED;
		}
	}

	#ifdef DEBUG
		userlog("get_rec_numbers: APPLID is:%s:", applid);
	#endif

	strcpy(resp->applid, applid);

	/* EXEC SQL
		SELECT COUNT(*) INTO :resp->txn_cnt FROM APPL_TXN
		WHERE APPLID = :applid AND TXNCANCELCODE is null; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 3;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN where (APPLID=:b1 a\
nd TXNCANCELCODE is null )";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )59;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&(resp->txn_cnt);
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
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		strcpy(prog_log.remarks,"get_rec_numbers :Select COUNT(*) from appl_txn failed");
		sprintf(excep_log.error_msg,"get_rec_numbers :  Select COUNT(*) from appl_txn failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

		#ifdef DEBUG
			userlog("get_rec_numbers: Select COUNT(*) from appl_txn failed ");
		#endif
		return SELECT_ERROR;
	}

	/* EXEC SQL
		SELECT COUNT(*) INTO :resp->applhistory_cnt FROM
		(SELECT DISTINCT APPLSTAT, USERID, 
		TO_CHAR(TIMESTAMP, 'YYYYMMDD HH24MISS'), 
		WSID, BRANCHCODE
		FROM APPL_HISTORY
		WHERE APPLID = :applid); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 3;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from (select distinct APPLSTAT ,U\
SERID ,TO_CHAR( timestamp ,'YYYYMMDD HH24MISS') ,WSID ,BRANCHCODE  from APPL_H\
ISTORY where APPLID=:b1) ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )82;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&(resp->applhistory_cnt);
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
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



//		SELECT COUNT(*) INTO :resp->applhistory_cnt FROM APPL_HISTORY
//		WHERE APPLID = :applid;

	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		strcpy(prog_log.remarks,"get_rec_numbers :Select COUNT(*) from APPL_HISTORY failed");
		sprintf(excep_log.error_msg,"get_rec_numbers :  Select COUNT(*) from appl_txn APPL_HISTORY:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

		#ifdef DEBUG
			userlog("get_rec_numbers: Select COUNT(*) from APPL_HISTORY failed ");
		#endif
		return SELECT_ERROR;
	}

#ifdef APPL_PROC
	EXEC SQL
		SELECT COUNT(*) INTO :resp->applproc_cnt FROM APPL_PROC
		WHERE APPLID = :applid;

	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		strcpy(prog_log.remarks,"get_rec_numbers :Select COUNT(*) from APPL_PROC failed");
		sprintf(excep_log.error_msg,"get_rec_numbers :  Select COUNT(*) from appl_txn APPL_PROC:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

		#ifdef DEBUG
			userlog("get_rec_numbers: Select COUNT(*) from APPL_PROC failed ");
		#endif
		return SELECT_ERROR;
	}
#else
	resp->applproc_cnt = 0;
#endif
	
	/* EXEC SQL
		SELECT COUNT(*) INTO :resp->passport_cnt FROM APPNT_PP_INFO
		WHERE APPLID = :applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 3;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from APPNT_PP_INFO where APPLID=:\
b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )105;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&(resp->passport_cnt);
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
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		strcpy(prog_log.remarks,"get_rec_numbers :Select COUNT(*) from APPNT_PP_INFO failed");
		sprintf(excep_log.error_msg,"get_rec_numbers :  Select COUNT(*) from APPNT_PP_INFO failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

		#ifdef DEBUG
			userlog("get_rec_numbers: Select COUNT(*) from APPNT_PP_INFO failed ");
		#endif
		return SELECT_ERROR;
	}

#ifdef DEBUG
		userlog("get_rec_numbers: resp->passport_cnt %d\n",resp->passport_cnt);
#endif

	/* EXEC SQL
		SELECT COUNT(*) INTO :resp->appnt_lic_cnt FROM APPNT_LIC_INFO
		WHERE APPLID = :applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 3;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from APPNT_LIC_INFO where APPLID=\
:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )128;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&(resp->appnt_lic_cnt);
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
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		strcpy(prog_log.remarks,"get_rec_numbers :Select COUNT(*) from APPNT_LIC_INFO failed");
		sprintf(excep_log.error_msg,"get_rec_numbers :  Select COUNT(*) from APPNT_LIC_INFO failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

		#ifdef DEBUG
			userlog("get_rec_numbers: Select COUNT(*) from APPNT_LIC_INFO failed ");
		#endif
		return SELECT_ERROR;
	}
#ifdef DEBUG
		userlog("get_rec_numbers: resp->appnt_lic_cnt %d\n",resp->appnt_lic_cnt);
#endif




	if(resp->version > 0)
	{
		/* EXEC SQL
			SELECT COUNT(*) INTO :resp->cardhistory_cnt FROM CARD_HISTORY
			WHERE KPTNO = :resp->kptno AND CARDVERSIONNO = :resp->version; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 3;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from CARD_HISTORY where (KPTNO=:\
b1 and CARDVERSIONNO=:b2)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )151;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&(resp->cardhistory_cnt);
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)(resp->kptno);
  sqlstm.sqhstl[1] = (unsigned int  )13;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&(resp->version);
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
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE)
		{
			strcpy(prog_log.remarks,"get_rec_numbers :Select COUNT(*) from CARD_HISTORY failed");
			sprintf(excep_log.error_msg,"get_rec_numbers :  Select COUNT(*) from CARD_HISTORY failed:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error();

			#ifdef DEBUG
				userlog("get_rec_numbers: Select COUNT(*) from CARD_HISTORY failed ");
			#endif
			return SELECT_ERROR;
		}


	}
	else
	{
		resp->cardhistory_cnt = 0;
	}
/*
	EXEC SQL
		SELECT TXNCODE INTO :txncode FROM APPL_TXN WHERE 
		APPLID = :applid AND TXNSERNO = 
		(SELECT MIN(TXNSERNO) FROM APPL_TXN WHERE 
		APPLID = :applid) AND TXNCANCELCODE IS NULL;

	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		strcpy(prog_log.remarks,"get_rec_numbers :Select TXNCODE from APPL_TXN failed");
		sprintf(excep_log.error_msg,"get_rec_numbers :  Select TXNCODE from APPL_TXN failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

		#ifdef DEBUG
			userlog("get_rec_numbers: Select TXNCODE from APPL_TXN failed ");
		#endif
		return SELECT_ERROR;
	}
*/
//	if(txncode[0] == '4' || txncode[0] == '5')
//	{
/*		EXEC SQL 
			SELECT COUNT(*) INTO :resp->prev_appl_cnt FROM APPLICATION A, 
			CARD_STATUS C WHERE A.APPLID != :applid AND C.KPTNO = :resp->kptno
			AND C.CARDVERSIONNO != :resp->version AND A.APPLID = C.APPLID;
*/
		/* EXEC SQL 
			SELECT COUNT(*) INTO :resp->prev_appl_cnt
			FROM APPLICATION A, CARD_STATUS C, APPL_TXN T
			WHERE A.APPLID != :applid AND A.KPTNO = :resp->kptno
			AND A.APPLID = C.APPLID(+)
			AND A.APPLID = T.APPLID 
			AND APPLSTAT <> 'T'
			AND T.TXNCANCELCODE IS NULL; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 3;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPLICATION A ,CARD_STATUS \
C ,APPL_TXN T where (((((A.APPLID<>:b1 and A.KPTNO=:b2) and A.APPLID=C.APPLID(\
+)) and A.APPLID=T.APPLID) and APPLSTAT<>'T') and T.TXNCANCELCODE is null )";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )178;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&(resp->prev_appl_cnt);
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
  sqlstm.sqhstv[2] = (         void  *)(resp->kptno);
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
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE)
		{
			strcpy(prog_log.remarks,"get_rec_numbers :Select COUNT(*) for prev appl failed");
			sprintf(excep_log.error_msg,"get_rec_numbers :  Select COUNT(*) for prev appl failed:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error();

			#ifdef DEBUG
				userlog("get_rec_numbers: Select COUNT(*) for prev appl failed ");
			#endif
			return SELECT_ERROR;
		}

//	}
//	else
//	{
//		resp->prev_appl_cnt = 0;
//	}

	ret_val = 0;
	if((ret_val = get_appl_det(&resp)) != SUCCESS)
	{
		return ret_val;
	}
	return SUCCESS;
}

/****************************************************************/
/* Function Name:get_appl_det									*/
/* Description  :Gets APPL data							*/
/* Input        :GMPC_ENQUIRY_RESP_T structure							*/   
/* Return Values:SUCCESS or SELECT_ERROR					    */
/****************************************************************/
int get_appl_det(GMPC_ENQUIRY_RESP_T **resp)
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char hv_appldate[DATE_TIME_SIZE];
		short int hv_appldate_ind = 0;
		/* varchar hv_applremarks[501] = {0}; */ 
struct { unsigned short len; unsigned char arr[501]; } hv_applremarks
 = {0};

		short int hv_applremarks_ind = 0;
		char hv_applstat;
		short int hv_applstat_ind = 0;
		char hv_birthdate[DATE_SIZE];
		short int hv_birthdate_ind = 0;
		char hv_branchcode[7];
		short int hv_branchcode_ind = 0;
		char hv_cardcolldate[DATE_TIME_SIZE];
		short int hv_cardcolldate_ind = 0;
		char hv_collcenter[7];
		short int hv_collcenter_ind = 0;
		/* varchar hv_contactno[31] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } hv_contactno
 = {0};

		short int hv_contactno_ind = 0;
		/* varchar hv_idno[16] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_idno
 = {0};

		short int hv_idno_ind = 0;
		/* varchar hv_licidno[16] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_licidno
 = {0};

		short int hv_licidno_ind = 0;
		char hv_licidtype[3];
		short int hv_licidtype_ind = 0;
		char hv_ownercat;
		short int hv_ownercat_ind = 0;
		char hv_timestamp[DATE_TIME_SIZE];
		short int hv_timestamp_ind = 0;
		/* varchar hv_userid[9] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_userid
 = {0};

		short int hv_userid_ind = 0;

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

		/* varchar hv_gmpcname[GMPC_SNAME1_SIZE+GMPC_SNAME2_SIZE+GMPC_SNAME3_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[83]; } hv_gmpcname
 = {0};

		short int hv_gmpcname_ind = 0;
		
		char hv_hsccolorcode;
		short int hv_hsccolorcode_ind = 0;
		char hv_racecode[5];
		short int hv_racecode_ind = 0;

		/* varchar hv_agencyonchip[9] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_agencyonchip
 = {0};

		short int hv_agencyonchip_ind = 0;
		char hv_batchno[23];
		short int hv_batchno_ind = 0;
		char hv_cardissuedate[DATE_TIME_SIZE];
		short int hv_cardissuedate_ind = 0;
		char hv_cardpersonaldate[DATE_TIME_SIZE];
		short int hv_cardpersonaldate_ind = 0;
		int hv_cardstat;
		short int hv_cardstat_ind = 0;
		/* varchar hv_chipserno[19] = {0}; */ 
struct { unsigned short len; unsigned char arr[19]; } hv_chipserno
 = {0};

		short int hv_chipserno_ind = 0;

		char applid[APP_ID_SIZE] = {0};
		char kptno[KPT_SIZE] = {0};
		int version = 0;

		int applpriority = 0;
		short int applpriority_ind = 0;
	/* EXEC SQL END DECLARE SECTION; */ 

	int i_count = 0;

	GMPC_ENQUIRY_RESP_T *enq_resp;

	enq_resp = *resp;

	#ifdef DEBUG
		userlog("get_appl_det: kptno is:%s:", enq_resp->kptno);
		userlog("get_appl_det: Version is:%d:", enq_resp->version);
		userlog("get_appl_det: APPLID is:%s:", enq_resp->applid);
	#endif

	strcpy(applid, enq_resp->applid);
	strcpy(kptno, enq_resp->kptno);
	version = enq_resp->version;

	/* EXEC SQL 
		SELECT TO_CHAR(A.APPLDATE, 'YYYYMMDD HH24MISS'), A.APPLREMARKS, 
		A.APPLSTAT, TO_CHAR(A.BIRTHDATE, 'YYYYMMDD'), A.BRANCHCODE, 
		TO_CHAR(A.CARDCOLLDATE, 'YYYYMMDD HH24MISS'), A.COLLCENTER, 
		A.CONTACTNO, A.IDNO, A.LICIDNO, A.LICIDTYPE, A.OWNERCAT, 
		TO_CHAR(A.TIMESTAMP, 'YYYYMMDD HH24MISS'), A.USERID, A.APPLPRIORITY, 
		J.GENDER, J.GMPCSHORTNAME1 || ' ' || J.GMPCSHORTNAME2 || ' ' || J.GMPCSHORTNAME3, 
		J.HSCCOLORCODE, J.RACECODE,
		C.AGENCYONCHIP, C.BATCHNO, 
		TO_CHAR(C.CARDISSUEDATE, 'YYYYMMDD HH24MISS'), 
		TO_CHAR(C.CARDPERSONALDATE, 'YYYYMMDD HH24MISS'), C.CARDSTAT, C.CHIPSERNO
		INTO :hv_appldate:hv_appldate_ind, 
		:hv_applremarks:hv_applremarks_ind, 
		:hv_applstat:hv_applstat_ind, 
		:hv_birthdate:hv_birthdate_ind, 
		:hv_branchcode:hv_branchcode_ind, 
		:hv_cardcolldate:hv_cardcolldate_ind, 
		:hv_collcenter:hv_collcenter_ind, :hv_contactno:hv_contactno_ind, 
		:hv_idno:hv_idno_ind, :hv_licidno:hv_licidno_ind, 
		:hv_licidtype:hv_licidtype_ind, :hv_ownercat:hv_ownercat_ind, 
		:hv_timestamp:hv_timestamp_ind, :hv_userid:hv_userid_ind,
		:applpriority:applpriority_ind,
		:hv_gender:hv_gender_ind, 
		:hv_gmpcname:hv_gmpcname_ind, 
//		:hv_gmpcshortname1:hv_gmpcshortname1_ind, 
//		:hv_gmpcshortname2:hv_gmpcshortname2_ind, 
//		:hv_gmpcshortname3:hv_gmpcshortname3_ind, 
		:hv_hsccolorcode:hv_hsccolorcode_ind, :hv_racecode:hv_racecode_ind,
		:hv_agencyonchip:hv_agencyonchip_ind, :hv_batchno:hv_batchno_ind, 
		:hv_cardissuedate:hv_cardissuedate_ind, :hv_cardpersonaldate:hv_cardpersonaldate_ind, 
		:hv_cardstat:hv_cardstat_ind, :hv_chipserno:hv_chipserno_ind
		FROM APPLICATION A, CARD_STATUS C, APPNT_JPN_INFO J 
		WHERE  A.APPLID  = :applid AND A.APPLID = C.APPLID(+)
		AND A.APPLID = J.APPLID(+) AND C.CARDVERSIONNO = :version; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(A.APPLDATE,'YYYYMMDD HH24MISS') ,A.APPLREMARK\
S ,A.APPLSTAT ,TO_CHAR(A.BIRTHDATE,'YYYYMMDD') ,A.BRANCHCODE ,TO_CHAR(A.CARDCO\
LLDATE,'YYYYMMDD HH24MISS') ,A.COLLCENTER ,A.CONTACTNO ,A.IDNO ,A.LICIDNO ,A.L\
ICIDTYPE ,A.OWNERCAT ,TO_CHAR(A. timestamp ,'YYYYMMDD HH24MISS') ,A.USERID ,A.\
APPLPRIORITY ,J.GENDER ,((((J.GMPCSHORTNAME1||' ')||J.GMPCSHORTNAME2)||' ')||J\
.GMPCSHORTNAME3) ,J.HSCCOLORCODE ,J.RACECODE ,C.AGENCYONCHIP ,C.BATCHNO ,TO_CH\
AR(C.CARDISSUEDATE,'YYYYMMDD HH24MISS') ,TO_CHAR(C.CARDPERSONALDATE,'YYYYMMDD \
HH24MISS') ,C.CARDSTAT ,C.CHIPSERNO into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b\
10:b11,:b12:b13,:b14:b15,:b16:b17,:b18:b19,:b20:b21,:b22:b23,:b24:b25,:b26:b27\
,:b28:b29,:b30:b31,:b32:b33,:b34:b35,:b36:b37,:b38:b39,:b40:b41,:b42:b43,:b44:\
b45,:b46:b47,:b48:b49  from APPLICATION A ,CARD_STATUS C ,APPNT_JPN_INFO J whe\
re (((A.APPLID=:b50 and A.APPLID=C.APPLID(+)) and A.APPLID=J.APPLID(+)) and C.\
CARDVERSIONNO=:b51)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )205;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)hv_appldate;
 sqlstm.sqhstl[0] = (unsigned int  )16;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&hv_appldate_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&hv_applremarks;
 sqlstm.sqhstl[1] = (unsigned int  )503;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&hv_applremarks_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&hv_applstat;
 sqlstm.sqhstl[2] = (unsigned int  )1;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&hv_applstat_ind;
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
 sqlstm.sqhstv[4] = (         void  *)hv_branchcode;
 sqlstm.sqhstl[4] = (unsigned int  )7;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&hv_branchcode_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)hv_cardcolldate;
 sqlstm.sqhstl[5] = (unsigned int  )16;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&hv_cardcolldate_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)hv_collcenter;
 sqlstm.sqhstl[6] = (unsigned int  )7;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&hv_collcenter_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&hv_contactno;
 sqlstm.sqhstl[7] = (unsigned int  )33;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&hv_contactno_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&hv_idno;
 sqlstm.sqhstl[8] = (unsigned int  )18;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&hv_idno_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&hv_licidno;
 sqlstm.sqhstl[9] = (unsigned int  )18;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&hv_licidno_ind;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)hv_licidtype;
 sqlstm.sqhstl[10] = (unsigned int  )3;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)&hv_licidtype_ind;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&hv_ownercat;
 sqlstm.sqhstl[11] = (unsigned int  )1;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)&hv_ownercat_ind;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)hv_timestamp;
 sqlstm.sqhstl[12] = (unsigned int  )16;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)&hv_timestamp_ind;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)&hv_userid;
 sqlstm.sqhstl[13] = (unsigned int  )11;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)&hv_userid_ind;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
 sqlstm.sqhstv[14] = (         void  *)&applpriority;
 sqlstm.sqhstl[14] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[14] = (         int  )0;
 sqlstm.sqindv[14] = (         void  *)&applpriority_ind;
 sqlstm.sqinds[14] = (         int  )0;
 sqlstm.sqharm[14] = (unsigned int  )0;
 sqlstm.sqadto[14] = (unsigned short )0;
 sqlstm.sqtdso[14] = (unsigned short )0;
 sqlstm.sqhstv[15] = (         void  *)&hv_gender;
 sqlstm.sqhstl[15] = (unsigned int  )1;
 sqlstm.sqhsts[15] = (         int  )0;
 sqlstm.sqindv[15] = (         void  *)&hv_gender_ind;
 sqlstm.sqinds[15] = (         int  )0;
 sqlstm.sqharm[15] = (unsigned int  )0;
 sqlstm.sqadto[15] = (unsigned short )0;
 sqlstm.sqtdso[15] = (unsigned short )0;
 sqlstm.sqhstv[16] = (         void  *)&hv_gmpcname;
 sqlstm.sqhstl[16] = (unsigned int  )85;
 sqlstm.sqhsts[16] = (         int  )0;
 sqlstm.sqindv[16] = (         void  *)&hv_gmpcname_ind;
 sqlstm.sqinds[16] = (         int  )0;
 sqlstm.sqharm[16] = (unsigned int  )0;
 sqlstm.sqadto[16] = (unsigned short )0;
 sqlstm.sqtdso[16] = (unsigned short )0;
 sqlstm.sqhstv[17] = (         void  *)&hv_hsccolorcode;
 sqlstm.sqhstl[17] = (unsigned int  )1;
 sqlstm.sqhsts[17] = (         int  )0;
 sqlstm.sqindv[17] = (         void  *)&hv_hsccolorcode_ind;
 sqlstm.sqinds[17] = (         int  )0;
 sqlstm.sqharm[17] = (unsigned int  )0;
 sqlstm.sqadto[17] = (unsigned short )0;
 sqlstm.sqtdso[17] = (unsigned short )0;
 sqlstm.sqhstv[18] = (         void  *)hv_racecode;
 sqlstm.sqhstl[18] = (unsigned int  )5;
 sqlstm.sqhsts[18] = (         int  )0;
 sqlstm.sqindv[18] = (         void  *)&hv_racecode_ind;
 sqlstm.sqinds[18] = (         int  )0;
 sqlstm.sqharm[18] = (unsigned int  )0;
 sqlstm.sqadto[18] = (unsigned short )0;
 sqlstm.sqtdso[18] = (unsigned short )0;
 sqlstm.sqhstv[19] = (         void  *)&hv_agencyonchip;
 sqlstm.sqhstl[19] = (unsigned int  )11;
 sqlstm.sqhsts[19] = (         int  )0;
 sqlstm.sqindv[19] = (         void  *)&hv_agencyonchip_ind;
 sqlstm.sqinds[19] = (         int  )0;
 sqlstm.sqharm[19] = (unsigned int  )0;
 sqlstm.sqadto[19] = (unsigned short )0;
 sqlstm.sqtdso[19] = (unsigned short )0;
 sqlstm.sqhstv[20] = (         void  *)hv_batchno;
 sqlstm.sqhstl[20] = (unsigned int  )23;
 sqlstm.sqhsts[20] = (         int  )0;
 sqlstm.sqindv[20] = (         void  *)&hv_batchno_ind;
 sqlstm.sqinds[20] = (         int  )0;
 sqlstm.sqharm[20] = (unsigned int  )0;
 sqlstm.sqadto[20] = (unsigned short )0;
 sqlstm.sqtdso[20] = (unsigned short )0;
 sqlstm.sqhstv[21] = (         void  *)hv_cardissuedate;
 sqlstm.sqhstl[21] = (unsigned int  )16;
 sqlstm.sqhsts[21] = (         int  )0;
 sqlstm.sqindv[21] = (         void  *)&hv_cardissuedate_ind;
 sqlstm.sqinds[21] = (         int  )0;
 sqlstm.sqharm[21] = (unsigned int  )0;
 sqlstm.sqadto[21] = (unsigned short )0;
 sqlstm.sqtdso[21] = (unsigned short )0;
 sqlstm.sqhstv[22] = (         void  *)hv_cardpersonaldate;
 sqlstm.sqhstl[22] = (unsigned int  )16;
 sqlstm.sqhsts[22] = (         int  )0;
 sqlstm.sqindv[22] = (         void  *)&hv_cardpersonaldate_ind;
 sqlstm.sqinds[22] = (         int  )0;
 sqlstm.sqharm[22] = (unsigned int  )0;
 sqlstm.sqadto[22] = (unsigned short )0;
 sqlstm.sqtdso[22] = (unsigned short )0;
 sqlstm.sqhstv[23] = (         void  *)&hv_cardstat;
 sqlstm.sqhstl[23] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[23] = (         int  )0;
 sqlstm.sqindv[23] = (         void  *)&hv_cardstat_ind;
 sqlstm.sqinds[23] = (         int  )0;
 sqlstm.sqharm[23] = (unsigned int  )0;
 sqlstm.sqadto[23] = (unsigned short )0;
 sqlstm.sqtdso[23] = (unsigned short )0;
 sqlstm.sqhstv[24] = (         void  *)&hv_chipserno;
 sqlstm.sqhstl[24] = (unsigned int  )21;
 sqlstm.sqhsts[24] = (         int  )0;
 sqlstm.sqindv[24] = (         void  *)&hv_chipserno_ind;
 sqlstm.sqinds[24] = (         int  )0;
 sqlstm.sqharm[24] = (unsigned int  )0;
 sqlstm.sqadto[24] = (unsigned short )0;
 sqlstm.sqtdso[24] = (unsigned short )0;
 sqlstm.sqhstv[25] = (         void  *)applid;
 sqlstm.sqhstl[25] = (unsigned int  )20;
 sqlstm.sqhsts[25] = (         int  )0;
 sqlstm.sqindv[25] = (         void  *)0;
 sqlstm.sqinds[25] = (         int  )0;
 sqlstm.sqharm[25] = (unsigned int  )0;
 sqlstm.sqadto[25] = (unsigned short )0;
 sqlstm.sqtdso[25] = (unsigned short )0;
 sqlstm.sqhstv[26] = (         void  *)&version;
 sqlstm.sqhstl[26] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[26] = (         int  )0;
 sqlstm.sqindv[26] = (         void  *)0;
 sqlstm.sqinds[26] = (         int  )0;
 sqlstm.sqharm[26] = (unsigned int  )0;
 sqlstm.sqadto[26] = (unsigned short )0;
 sqlstm.sqtdso[26] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE)
		{
			strcpy(prog_log.remarks,"get_appl_det :Select appl detials failed");
			sprintf(excep_log.error_msg,"get_appl_det :  Select appl detials failed:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error();

			#ifdef DEBUG
				userlog("get_appl_det: Select appl detials failed ");
			#endif
			return SELECT_ERROR;
		}


	setnull(hv_applremarks);
	setnull(hv_contactno);
	setnull(hv_idno);
	setnull(hv_licidno);
	setnull(hv_userid);

	setnull(hv_gmpcname);
//	setnull(hv_gmpcshortname1);
//	setnull(hv_gmpcshortname2);
//	setnull(hv_gmpcshortname3);

	setnull(hv_agencyonchip);
	setnull(hv_chipserno);

	if (sqlca.sqlcode != 0)
	{
		return SELECT_ERROR;
	}

	if(hv_appldate_ind != -1)
	{
		strcpy(enq_resp->appldate, hv_appldate);
	}

	if(hv_applremarks_ind != -1)
	{
		strcpy(enq_resp->applremarks, hv_applremarks.arr);
	}

	if(hv_applstat_ind != -1)
	{
		enq_resp->applstat = hv_applstat;
	}

	if(hv_birthdate_ind != -1)
	{
		strcpy(enq_resp->birth_date, hv_birthdate);
	}

	if(hv_branchcode_ind != -1)
	{
		strcpy(enq_resp->branchcode, hv_branchcode);
	}

	if(hv_cardcolldate_ind != -1)
	{
		strcpy(enq_resp->colldate, hv_cardcolldate);
	}

	if(hv_collcenter_ind != -1)
	{
		strcpy(enq_resp->collection_center, hv_collcenter);
	}

	if(hv_contactno_ind != -1)
	{
		strcpy(enq_resp->contact_number, hv_contactno.arr);
	}

	if(hv_idno_ind != -1)
	{
		strcpy(enq_resp->idno, hv_idno.arr);
	}

	if(hv_licidno_ind != -1)
	{
		strcpy(enq_resp->lic_id, hv_licidno.arr);
	}

	if(hv_licidtype_ind != -1)
	{
		strcpy(enq_resp->lic_idtype, hv_licidtype);
	}

	if(hv_ownercat_ind != -1)
	{
		enq_resp->owner_cat = hv_ownercat;
	}

	if(hv_timestamp_ind != -1)
	{
		strcpy(enq_resp->timestamp, hv_timestamp);
	}

	if(hv_userid_ind != -1)
	{
		strcpy(enq_resp->userid, hv_userid.arr);
	}

	if(applpriority_ind != -1)
	{
		enq_resp->applpriority = applpriority;
	}

	if(hv_gender_ind != -1)
	{
		enq_resp->gender = hv_gender;
	}

	if(hv_gmpcname_ind != -1)
	{
		strcpy(enq_resp->name, hv_gmpcname.arr);
	}

	if(hv_hsccolorcode_ind != -1)
	{
		enq_resp->color_code = hv_hsccolorcode;
	}

	if(hv_racecode_ind != -1)
	{
		strcpy(enq_resp->race_code, hv_racecode);
	}
	
	if(hv_agencyonchip_ind != -1)
	{
		strcpy(enq_resp->agencyonchip, hv_agencyonchip.arr);
	}

	if(hv_batchno_ind != -1)
	{
		strcpy(enq_resp->batch_no, hv_batchno);
	}

	if(hv_cardissuedate_ind != -1)
	{
		strcpy(enq_resp->issuedate, hv_cardissuedate);
	}

	if(hv_cardpersonaldate_ind != -1)
	{
		strcpy(enq_resp->cardpersonaldate, hv_cardpersonaldate);
	}

	if(hv_cardstat_ind != -1)
	{
		enq_resp->cardstat = hv_cardstat;
	}

	if(hv_chipserno_ind != -1)
	{
		strcpy(enq_resp->chipsrno, hv_chipserno.arr);
	}

/*
   Change made by Sushil 13/03/2003 to take the Userid and 
   Timestamp from the card status table when card status is greater than 2 - PERSONALISED
*/
	if (enq_resp->cardstat > 2)
	{
		/* EXEC SQL
			SELECT C.USERID, TO_CHAR(C.TIMESTAMP, 'YYYYMMDD HH24MISS') into :hv_userid:hv_userid_ind,:hv_timestamp:hv_timestamp_ind
			FROM APPLICATION A, CARD_STATUS C
			WHERE  A.APPLID  = :applid AND A.APPLID = C.APPLID(+)
			AND C.CARDVERSIONNO = :version; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 27;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select C.USERID ,TO_CHAR(C. timestamp ,'YYYYMMDD HH24MISS')\
 into :b0:b1,:b2:b3  from APPLICATION A ,CARD_STATUS C where ((A.APPLID=:b4 an\
d A.APPLID=C.APPLID(+)) and C.CARDVERSIONNO=:b5)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )328;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&hv_userid;
  sqlstm.sqhstl[0] = (unsigned int  )11;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&hv_userid_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_timestamp;
  sqlstm.sqhstl[1] = (unsigned int  )16;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&hv_timestamp_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)applid;
  sqlstm.sqhstl[2] = (unsigned int  )20;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&version;
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
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 

		setnull(hv_userid);

		if(hv_timestamp_ind != -1)
		{
			strcpy(enq_resp->timestamp, hv_timestamp);
		}

		if(hv_userid_ind != -1)
		{
			strcpy(enq_resp->userid, hv_userid.arr);
		}

	}
	
	return SUCCESS;
}

/****************************************************************/
/* Function Name:get_blklst_data								*/
/* Description  :Gets black list data							*/
/* Input        :GMPC_ENQUIRY_RESP_T structure							*/   
/* Return Values:SUCCESS or SELECT_ERROR					    */
/****************************************************************/
int get_blklst_data(GMPC_ENQUIRY_RESP_T *resp)
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char blklst_date[DATE_TIME_SIZE];
		/* varchar blklst_userid[USER_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } blklst_userid;

		short int blklst_date_ind = -1;
		short int blklst_userid_ind = -1;
	/* EXEC SQL END DECLARE SECTION; */ 

	int i_count = 0;

	blklst_date[0] = '\0';
	blklst_userid.arr[0] = '\0';
	setlen(blklst_userid);

	#ifdef DEBUG
		userlog("get_blklst_data: %s: kpt_no ", resp->kptno);
		userlog("get_blklst_data: %d: version ", resp->version);
	#endif

	/* EXEC SQL
		SELECT USERID, TO_CHAR(CARDBLDATE, 'YYYYMMDD HH24MISS') INTO blklst_userid:blklst_userid_ind, 
		blklst_date:blklst_date_ind FROM CARD_BLACKLIST
		WHERE KPTNO = :resp->kptno AND 
		CARDVERSIONNO = :resp->version; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select USERID ,TO_CHAR(CARDBLDATE,'YYYYMMDD HH24MISS') into \
:b0:b1,:b2:b3  from CARD_BLACKLIST where (KPTNO=:b4 and CARDVERSIONNO=:b5)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )359;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&blklst_userid;
 sqlstm.sqhstl[0] = (unsigned int  )11;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&blklst_userid_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)blklst_date;
 sqlstm.sqhstl[1] = (unsigned int  )16;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&blklst_date_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)(resp->kptno);
 sqlstm.sqhstl[2] = (unsigned int  )13;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&(resp->version);
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
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	setnull(blklst_userid);
	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);

	if(SQLCODE && !NO_DATA_FOUND)
	{
		#ifdef DEBUG
			userlog("get_blklst_data: get_blklst_data failed ");
		#endif
		strcpy(prog_log.remarks,"get_blklst_data : get_blklst_data failed");
		sprintf(excep_log.error_msg,"get_blklst_data : get_blklst_data failed:%s ",sqlmsg);
		excep_log.termination_flag = 'N';
		excep_log.severity = FATAL;
		log_error();
		resp->blklst_stat = 'U';
		resp->blklst_date[0] = '\0';
		resp->blklst_userid[0] = '\0';
		return SELECT_ERROR;
	}
	else if(NO_DATA_FOUND)
	{
		#ifdef DEBUG
			userlog("get_blklst_data: %s: Not blacklisted ", resp->kptno);
		#endif

		resp->blklst_stat = 'N';
		resp->blklst_date[0] = '\0';
		resp->blklst_userid[0] = '\0';
	}
	else
	{
		#ifdef DEBUG
			userlog("get_blklst_data: %s: blacklisted ", resp->kptno);
		#endif
		resp->blklst_stat = 'Y';
		strcpy(resp->blklst_date, blklst_date);
		strcpy(resp->blklst_userid, blklst_userid.arr);
	}

	return SUCCESS;
}


/****************************************************************/
/* Function Name:get_max_card_version							*/
/* Description  :Gets version			*/
/* Input        :Kptno		*/   
/* Return Values:SUCCESS or FAILURE							    */
/****************************************************************/
int get_max_card_version(char *kptno, int *version, char *oldkptno)
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char cardidno[KPT_SIZE];
		char new_kptno[KPT_SIZE];
		int i = 0;
		int cardversion = 0;
		short int cardversion_ind = -1;
		int ret_val = 0;
	/* EXEC SQL END DECLARE SECTION; */ 


/* Added by Sushil 06012004 to check if the kpt number existes in the KPT_CHG_OLDNEW table */
	
		/* EXEC SQL
			SELECT NEWKPTNO INTO :new_kptno FROM KPT_CHG_OLDNEW WHERE 
			OLDKPTNO = :kptno; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 27;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select NEWKPTNO into :b0  from KPT_CHG_OLDNEW where OLDKPTN\
O=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )390;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)new_kptno;
  sqlstm.sqhstl[0] = (unsigned int  )13;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)kptno;
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
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


		
		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);

		if(NO_DATA_FOUND){
		}	
		else if (SQLCODE && !(NO_DATA_FOUND)){
			strcpy(prog_log.remarks,"get_max_card_version :Select KPTNO from KPT_CHG_OLDNEW failed");
			sprintf(excep_log.error_msg,"get_max_card_version :Select KPTNO from KPT_CHG_OLDNEW failed");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error();

			return SELECT_ERROR;
		}
		else{
			strcpy(oldkptno,kptno);
			strcpy(kptno,new_kptno);
			#ifdef DEBUG
				userlog("get_max_card_version: Old KPT Number:%s", oldkptno);
				userlog("get_max_card_version: New KPT Number:%s", kptno);
			#endif
		}

	strcpy(cardidno, kptno);

	/* EXEC SQL
		SELECT MAX(CARDVERSIONNO) INTO :cardversion:cardversion_ind
		FROM CARD_STATUS 
		WHERE KPTNO = :cardidno; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select max(CARDVERSIONNO) into :b0:b1  from CARD_STATUS wher\
e KPTNO=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )413;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&cardversion;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&cardversion_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)cardidno;
 sqlstm.sqhstl[1] = (unsigned int  )13;
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
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 

	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE && !(NO_DATA_FOUND))
	{
		strcpy(prog_log.remarks,"get_max_card_version :Select max(cardversion) failed");
		sprintf(excep_log.error_msg,"get_max_card_version :  Select max(cardversion) failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

		#ifdef DEBUG
			userlog("get_max_card_version: Select max(cardversion) failed ");
		#endif
			return SELECT_ERROR;
	}
	else if (NO_DATA_FOUND)
	{
		*version = 0;
	}

	if(cardversion_ind != -1)
	{
		*version = cardversion;
	}
	else
	{
		*version = 0;
	}

	#ifdef DEBUG
		userlog("get_max_card_version: Returning max(cardversion) successfully :%d:",*version);
	#endif
	
	return SUCCESS;
}

/****************************************************************/
/* Function Name:get_appl_history								*/
/* Description  :Gets History details for the given card		*/
/* Input        :applid							*/   
/* Return Values:SUCCESS or FAILURE							    */
/****************************************************************/
int get_appl_history(char *applid, APPL_HISTORY_RECORDS_T *appl_hist_rec, int reccount)
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_stat;
		/* varchar userid[USER_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } userid;

		char timestamp[DATE_TIME_SIZE];
		/* varchar wsid[WS_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } wsid;

		char branchcode[BRANCH_CODE_SIZE];

		char applicationid[APP_ID_SIZE];

		short int appl_stat_ind = -1;
		short int branchcode_ind = -1;
		short int timestamp_ind = -1;
		short int userid_ind = -1;
		short int wsid_ind = -1;
	/* EXEC SQL END DECLARE SECTION; */ 

	int icount = 0;

	strcpy(applicationid, applid);

	/* EXEC SQL DECLARE APPL_HISTORY_CURSOR CURSOR FOR 
				SELECT DISTINCT APPLSTAT, USERID, 
				TO_CHAR(TIMESTAMP, 'YYYYMMDD HH24MISS'), 
				WSID, BRANCHCODE
				FROM APPL_HISTORY
				WHERE APPLID = :applicationid ORDER BY TO_CHAR(TIMESTAMP, 'YYYYMMDD HH24MISS') DESC; */ 


	/* EXEC SQL OPEN APPL_HISTORY_CURSOR; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0014;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )436;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (         void  *)applicationid;
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
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("get_appl_history: Open APPL_HISTORY_CURSOR cursor failed ");
		#endif
		strcpy(prog_log.remarks,"get_appl_history :Open APPL_HISTORY_CURSOR cursor failed");
		sprintf(excep_log.error_msg,"get_appl_history : Open APPL_HISTORY_CURSOR cursor failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

		/* EXEC SQL CLOSE APPL_HISTORY_CURSOR; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 27;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )455;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


		return CURSOR_OPEN_ERROR;
	}
	
	for(icount = 1; icount <= reccount; icount++, appl_hist_rec++)
	{
		/* EXEC SQL
			FETCH APPL_HISTORY_CURSOR INTO :appl_stat:appl_stat_ind,
			:userid:userid_ind, timestamp:timestamp_ind, 
			:wsid:wsid_ind, :branchcode:branchcode_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 27;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )470;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&appl_stat;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&appl_stat_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&userid;
  sqlstm.sqhstl[1] = (unsigned int  )11;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&userid_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)timestamp;
  sqlstm.sqhstl[2] = (unsigned int  )16;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&timestamp_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&wsid;
  sqlstm.sqhstl[3] = (unsigned int  )18;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&wsid_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)branchcode;
  sqlstm.sqhstl[4] = (unsigned int  )7;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&branchcode_ind;
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
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE)
		{
			#ifdef DEBUG
				userlog("get_appl_history: Fetch APPL_HISTORY_CURSOR cursor failed ");
			#endif
			strcpy(prog_log.remarks,"get_appl_history :Fetch APPL_HISTORY_CURSOR cursor failed");
			sprintf(excep_log.error_msg,"get_appl_history : Fetch APPL_HISTORY_CURSOR cursor failed:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error();

			/* EXEC SQL CLOSE APPL_HISTORY_CURSOR; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 27;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )505;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



			return CURSOR_FETCH_ERROR;
		}

		
		if(appl_stat_ind != -1)
		{
			appl_hist_rec->appl_stat = appl_stat;
		}
		else
		{
			appl_hist_rec->appl_stat = 0;
		}

		if(userid_ind != -1)
		{
			setnull(userid);
			strcpy(appl_hist_rec->userid ,userid.arr);
		}
		else
		{
			appl_hist_rec->userid[0] = '\0';
		}

		if(branchcode_ind != -1)
		{
			strcpy(appl_hist_rec->branchcode ,branchcode);
		}
		else
		{
			appl_hist_rec->branchcode[0] = '\0';
		}

		if(timestamp_ind != -1)
		{
			strcpy(appl_hist_rec->timestamp ,timestamp);
		}
		else
		{
			appl_hist_rec->timestamp[0] = '\0';
		}

		if(wsid_ind != -1)
		{
			setnull(wsid);
			strcpy(appl_hist_rec->wsid ,wsid.arr);
		}
		else
		{
			appl_hist_rec->wsid[0] = '\0';
		}

	}

	/* EXEC SQL CLOSE APPL_HISTORY_CURSOR; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )520;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("get_appl_history: Close APPL_HISTORY_CURSOR cursor failed ");
		#endif
		strcpy(prog_log.remarks,"get_appl_history :Close APPL_HISTORY_CURSOR cursor failed");
		sprintf(excep_log.error_msg,"get_appl_history : Close APPL_HISTORY_CURSOR cursor failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

		return CURSOR_CLOSE_ERROR;
	}

	return SUCCESS;
}


/****************************************************************/
/* Function Name:get_card_history								*/
/* Description  :Gets History details for the given card		*/
/* Input        :GMPC_ENQUIRY_T structure							*/   
/* Return Values:SUCCESS or FAILURE							    */
/****************************************************************/
int get_card_history(GMPC_ENQUIRY_RESP_T *resp, CARD_HIST_RECORDS_T *hist_recs, int no_of_cards)
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char kpt_no[KPT_SIZE];
		int version;

		int cardstat;
		char timestamp[DATE_TIME_SIZE];
		/* varchar userid[USER_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } userid;

		/* varchar wsid[WS_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } wsid;

		char branchcode[BRANCH_CODE_SIZE];

		short int kpt_no_ind = 0;
		short int version_ind = 0;

		short int cardstat_ind = -1;
		short int branchcode_ind = -1;
		short int timestamp_ind = -1;
		short int userid_ind = -1;
		short int wsid_ind = -1;


	/* EXEC SQL END DECLARE SECTION; */ 


	
	int i_count = 0;

	strcpy(kpt_no, resp->kptno);
	version = resp->version;

	/* EXEC SQL 
		DECLARE CUR_HIST_RECS
		CURSOR FOR
		SELECT CARDSTAT, USERID, TO_CHAR(TIMESTAMP,'YYYYMMDD HH24MISS'), 
		WSID, BRANCHCODE
		FROM CARD_HISTORY
		WHERE KPTNO = :kpt_no AND CARDVERSIONNO = :version
		ORDER BY TIMESTAMP DESC; */ 
 

	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("get_card_history: Declare CUR_HIST_RECS cursor failed ");
		#endif
		strcpy(prog_log.remarks,"get_card_history :Declare CUR_HIST_RECS cursor failed");
		sprintf(excep_log.error_msg,"get_card_history : Declare CUR_HIST_RECS cursor failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

	   return SELECT_ERROR;
	}

	#ifdef DEBUG
		userlog("get_card_history: Cursor Declare Success ");
	#endif

	/* EXEC SQL 
		OPEN CUR_HIST_RECS; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0015;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )535;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (         void  *)kpt_no;
 sqlstm.sqhstl[0] = (unsigned int  )13;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&version;
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
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 

	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("get_card_history: Open CUR_HIST_RECS cursor failed ");
		#endif
		strcpy(prog_log.remarks,"get_card_history :Open CUR_HIST_RECS cursor failed");
		sprintf(excep_log.error_msg,"get_card_history : Open CUR_HIST_RECS cursor failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

	   return CURSOR_OPEN_ERROR;
	}

	#ifdef DEBUG
		userlog("get_card_history: Open Cursor Success ");
		userlog("get_card_history: Loop For %d\n",no_of_cards);
	#endif

	for(i_count = 1; i_count <= no_of_cards ;i_count++, hist_recs++)
	{
		/* EXEC SQL
			FETCH CUR_HIST_RECS INTO :cardstat:cardstat_ind,
			:userid:userid_ind, :timestamp:timestamp_ind, 
			:wsid:wsid_ind, :branchcode:branchcode_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 27;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )558;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&cardstat;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&cardstat_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&userid;
  sqlstm.sqhstl[1] = (unsigned int  )11;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&userid_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)timestamp;
  sqlstm.sqhstl[2] = (unsigned int  )16;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&timestamp_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&wsid;
  sqlstm.sqhstl[3] = (unsigned int  )18;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&wsid_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)branchcode;
  sqlstm.sqhstl[4] = (unsigned int  )7;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&branchcode_ind;
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
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE)
		{
			#ifdef DEBUG
				userlog("get_card_history: Fetch CUR_HIST_RECS cursor failed ");
			#endif
			strcpy(prog_log.remarks,"get_card_history :Fetch CUR_HIST_RECS cursor failed");
			sprintf(excep_log.error_msg,"get_card_history : Fetch CUR_HIST_RECS cursor failed:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error();

			/* EXEC SQL CLOSE CUR_HIST_RECS; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 27;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )593;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



			return CURSOR_FETCH_ERROR;
		}

		
		if(cardstat_ind != -1)
		{
			hist_recs->cardstat = cardstat;
		}
		else
		{
			hist_recs->cardstat = 0;
		}

		if(userid_ind != -1)
		{
			setnull(userid);
			strcpy(hist_recs->userid ,userid.arr);
		}
		else
		{
			hist_recs->userid[0] = '\0';
		}

		if(branchcode_ind != -1)
		{
			strcpy(hist_recs->branchcode ,branchcode);
		}
		else
		{
			hist_recs->branchcode[0] = '\0';
		}

		if(timestamp_ind != -1)
		{
			strcpy(hist_recs->timestamp ,timestamp);
		}
		else
		{
			hist_recs->timestamp[0] = '\0';
		}

		if(wsid_ind != -1)
		{
			setnull(wsid);
			strcpy(hist_recs->wsid ,wsid.arr);
		}
		else
		{
			hist_recs->wsid[0] = '\0';
		}

	}

	/* EXEC SQL 
		CLOSE CUR_HIST_RECS; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )608;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 

	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("get_card_history: close CUR_HIST_RECS cursor failed ");
		#endif
		strcpy(prog_log.remarks,"get_card_history :close CUR_HIST_RECS cursor failed");
		sprintf(excep_log.error_msg,"get_card_history : close CUR_HIST_RECS cursor failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

	   return CURSOR_CLOSE_ERROR;
	}

	return SUCCESS;

}

/****************************************************************/
/* Function Name:get_txn_det								*/
/* Description  :Gets Txn details for the given card		*/
/* Input        :applid							*/   
/* Return Values:SUCCESS or FAILURE							    */
/****************************************************************/
int get_txn_det(char *applid, TXN_DETAILS_T *txn_rec, int reccount)
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char txn_code[TRANSACTION_CODE_SIZE];
		char lic_type[LIC_TYPE_SIZE];
		char lic_typeclass[LIC_CLS_SIZE];
		char lic_usagecode[LIC_USAGE_SIZE];

		char applicationid[APP_ID_SIZE];

		short int txn_code_ind = 0;
		short int lic_type_ind = 0;
		short int lic_typeclass_ind = 0;
		short int lic_usagecode_ind = 0;
	/* EXEC SQL END DECLARE SECTION; */ 

	int i_count = 0;

	strcpy(applicationid,applid);

	/* EXEC SQL DECLARE TXN_DET_CURSOR CURSOR FOR 
				SELECT TXNCODE,LICTYPE,LICCLASS,LICUSAGECODE 
				FROM APPL_TXN 
				WHERE APPLID = :applicationid AND TXNCANCELCODE is null 
				ORDER BY TXNCODE; */ 


	/* EXEC SQL OPEN TXN_DET_CURSOR; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0016;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )623;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (         void  *)applicationid;
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
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("get_txn_det: Open TXN_DET_CURSOR cursor failed ");
		#endif
		strcpy(prog_log.remarks,"get_txn_det :Open TXN_DET_CURSOR cursor failed");
		sprintf(excep_log.error_msg,"get_txn_det : Open TXN_DET_CURSOR cursor failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

		/* EXEC SQL CLOSE TXN_DET_CURSOR; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 27;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )642;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		return CURSOR_OPEN_ERROR;
	}
	
	for(i_count = 1; i_count <= reccount ;i_count++, txn_rec++)
	{

		/* EXEC SQL FETCH TXN_DET_CURSOR INTO :txn_code:txn_code_ind, 
		:lic_type:lic_type_ind, :lic_typeclass:lic_typeclass_ind, 
		:lic_usagecode:lic_usagecode_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 27;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )657;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)txn_code;
  sqlstm.sqhstl[0] = (unsigned int  )4;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&txn_code_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)lic_type;
  sqlstm.sqhstl[1] = (unsigned int  )4;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&lic_type_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)lic_typeclass;
  sqlstm.sqhstl[2] = (unsigned int  )3;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&lic_typeclass_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)lic_usagecode;
  sqlstm.sqhstl[3] = (unsigned int  )3;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&lic_usagecode_ind;
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
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE)
		{
			#ifdef DEBUG
				userlog("get_txn_det: Fetch TXN_DET_CURSOR cursor failed ");
			#endif
			strcpy(prog_log.remarks,"get_txn_det :Fetch TXN_DET_CURSOR cursor failed");
			sprintf(excep_log.error_msg,"get_txn_det : Fetch TXN_DET_CURSOR cursor failed:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error();

			/* EXEC SQL CLOSE TXN_DET_CURSOR; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 27;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )688;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



			return CURSOR_FETCH_ERROR;
		}

		if (txn_code_ind == 0)
		{
			strcpy(txn_rec->txn_code,txn_code);
			#ifdef DEBUG
				userlog("TXNCODE = %s", txn_code);
			#endif
		}
		else
		{
			txn_rec->txn_code[0] = '\0';
		}

		if (lic_type_ind == 0)
		{
			strcpy(txn_rec->lic_type, lic_type);
		}
		else
		{
			txn_rec->lic_type[0] = '\0';
		}

		if (lic_typeclass_ind == 0)
		{
			strcpy(txn_rec->lic_typeclass, lic_typeclass);
		}
		else
		{
			txn_rec->lic_typeclass[0] = '\0';
		}

		if (lic_usagecode_ind == 0)
		{
			strcpy(txn_rec->lic_usagecode, lic_usagecode);
		}
		else
		{
			txn_rec->lic_usagecode[0] = '\0';
		}
		
	}

	/* EXEC SQL CLOSE TXN_DET_CURSOR; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )703;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("get_txn_det: close TXN_DET_CURSOR cursor failed ");
		#endif
		strcpy(prog_log.remarks,"get_txn_det :close TXN_DET_CURSOR cursor failed");
		sprintf(excep_log.error_msg,"get_txn_det : close TXN_DET_CURSOR cursor failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

	   return CURSOR_CLOSE_ERROR;
	}

	return SUCCESS;
}


/****************************************************************/
/* Function Name:get_prevappl_det								*/
/* Description  :Gets History details for the given card		*/
/* Input        :GMPC_ENQUIRY_T structure							*/   
/* Return Values:SUCCESS or FAILURE							    */
/****************************************************************/
int get_prevappl_det(GMPC_ENQUIRY_RESP_T *resp, PREV_APPL_DET_T *prevappl_recs, int reccount)
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char kpt_no[KPT_SIZE];
		int version;

		char applid[APP_ID_SIZE] = {0};
		int card_status = 0;
		char appl_status = '\0';
		char appldate[DATE_TIME_SIZE] = {0};
		char txn_code[TRANSACTION_CODE_SIZE] = {0};
		int cardversion = 0;


		short int kpt_no_ind = 0;
		short int version_ind = 0;

		short int applid_ind = 0;
		short int card_status_ind = 0;
		short int appl_status_ind = 0;
		short int appldate_ind = 0;
		short int txn_code_ind = 0;
		short int cardversion_ind = 0;
	/* EXEC SQL END DECLARE SECTION; */ 


	
	int i_count = 0;

	strcpy(applid, resp->applid);
	strcpy(kpt_no, resp->kptno);
	version = resp->version;

	#ifdef DEBUG
		userlog("get_prevappl_det:%s: applid ", applid);
		userlog("get_prevappl_det:%s: kpt_no ", kpt_no);
		userlog("get_prevappl_det:%d: version ", version);
	#endif

/*	EXEC SQL 
		DECLARE PREV_APPL_RECS
		CURSOR FOR
		SELECT A.APPLID, A.APPLSTAT, A.APPLDATE, C.CARDSTAT, T.TXNCODE
		FROM APPLICATION A, CARD_STATUS C, APPL_TXN T
		WHERE A.APPLID != :applid AND C.KPTNO = :resp->kptno
		AND C.CARDVERSIONNO != :resp->version AND A.APPLID = C.APPLID
		AND A.APPLID = T.APPLID AND T.TXNSERNO = (SELECT MIN(TXNSERNO)
		FROM APPL_TXN TXN WHERE TXN.APPLID = A.APPLID)
		ORDER BY A.APPLID;
*/	

	/* EXEC SQL 
		DECLARE PREV_APPL_RECS
		CURSOR FOR
		SELECT A.APPLID, A.APPLSTAT, TO_CHAR(A.APPLDATE, 'YYYYMMDD HH24MISS'),
		C.CARDSTAT, C.CARDVERSIONNO, T.TXNCODE
		FROM APPLICATION A, CARD_STATUS C, APPL_TXN T
		WHERE A.APPLID != :applid AND A.KPTNO = :resp->kptno
		AND A.APPLID = C.APPLID(+)
		AND A.APPLID = T.APPLID 
		AND APPLSTAT <> 'T'
		AND T.TXNCANCELCODE IS NULL
		ORDER BY A.APPLID; */ 


	
	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("get_prevappl_det: Declare PREV_APPL_RECS cursor failed ");
		#endif
		strcpy(prog_log.remarks,"get_prevappl_det :Declare PREV_APPL_RECS cursor failed");
		sprintf(excep_log.error_msg,"get_prevappl_det : Declare PREV_APPL_RECS cursor failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

	   return SELECT_ERROR;
	}

	#ifdef DEBUG
		userlog("get_prevappl_det: Cursor Declare Success ");
	#endif

	/* EXEC SQL 
		OPEN PREV_APPL_RECS; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0017;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )718;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (         void  *)applid;
 sqlstm.sqhstl[0] = (unsigned int  )20;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)(resp->kptno);
 sqlstm.sqhstl[1] = (unsigned int  )13;
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
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 

	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("get_prevappl_det: Open PREV_APPL_RECS cursor failed ");
		#endif
		strcpy(prog_log.remarks,"get_prevappl_det :Open PREV_APPL_RECS cursor failed");
		sprintf(excep_log.error_msg,"get_prevappl_det : Open PREV_APPL_RECS cursor failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

	   return CURSOR_OPEN_ERROR;
	}

	#ifdef DEBUG
		userlog("get_prevappl_det: Open Cursor Success ");
		userlog("get_prevappl_det: Loop For %d\n",reccount);
	#endif

	for(i_count = 1; i_count <= reccount ;i_count++, prevappl_recs++)
	{

		/* EXEC SQL
			FETCH PREV_APPL_RECS INTO :applid:applid_ind,
			:appl_status:appl_status_ind, :appldate:appldate_ind, 
			:card_status:card_status_ind, :cardversion:cardversion_ind,
			:txn_code:txn_code_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 27;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )741;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)applid;
  sqlstm.sqhstl[0] = (unsigned int  )20;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&applid_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&appl_status;
  sqlstm.sqhstl[1] = (unsigned int  )1;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&appl_status_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)appldate;
  sqlstm.sqhstl[2] = (unsigned int  )16;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&appldate_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&card_status;
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&card_status_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&cardversion;
  sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&cardversion_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)txn_code;
  sqlstm.sqhstl[5] = (unsigned int  )4;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&txn_code_ind;
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
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		userlog("After FETCHING.");

		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE)
		{
			#ifdef DEBUG
				userlog("get_prevappl_det: Fetch PREV_APPL_RECS cursor failed ");
			#endif
			strcpy(prog_log.remarks,"get_prevappl_det :Fetch PREV_APPL_RECS cursor failed");
			sprintf(excep_log.error_msg,"get_prevappl_det : Fetch PREV_APPL_RECS cursor failed:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error();

			/* EXEC SQL CLOSE PREV_APPL_RECS; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 27;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )780;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



			return CURSOR_FETCH_ERROR;
		}

		userlog("After checking SQLCODE.");

		if(applid_ind != -1)
		{
			strcpy(prevappl_recs->applid, applid);
		}
		userlog("get_prevappl_det APPLID:%s ", prevappl_recs->applid);

		if(appl_status_ind != -1)
		{
			prevappl_recs->appl_status = appl_status;
		}
		userlog("get_prevappl_det APPLSTAT: %c", prevappl_recs->appl_status);
		
		if(appldate_ind != -1)
		{
			strcpy(prevappl_recs->appldate, appldate);
		}
		userlog("get_prevappl_det APPLDATE: %s", prevappl_recs->appldate);

		if(card_status_ind != -1)
		{
			prevappl_recs->card_status = card_status;
		}
		userlog("get_prevappl_det CARDSTAT: %d", prevappl_recs->card_status);

		if(txn_code_ind != -1)
		{
			strcpy(prevappl_recs->txn_code, txn_code);
		}
		userlog("get_prevappl_det TXNCODE:%s", prevappl_recs->txn_code);

//Added by Amarjith on 27th Aug '04. To send the previous cardversions to GSC.

		if(cardversion_ind != -1)
		{
			prevappl_recs->cardversion = cardversion;
		}
		userlog("get_prevappl_det CARDVERSION:%d", prevappl_recs->cardversion);

//27th Aug '04.
	}

	/* EXEC SQL 
		CLOSE PREV_APPL_RECS; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )795;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 

	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("get_prevappl_det: close PREV_APPL_RECS cursor failed ");
		#endif
		strcpy(prog_log.remarks,"get_prevappl_det :close PREV_APPL_RECS cursor failed");
		sprintf(excep_log.error_msg,"get_prevappl_det : close PREV_APPL_RECS cursor failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

	   return CURSOR_CLOSE_ERROR;
	}

	return SUCCESS;

}

/****************************************************************/
/* Function Name:get_appl_proc								*/
/* Description  :Gets appl_proc details for the given card		*/
/* Input        :applid							*/   
/* Return Values:SUCCESS or FAILURE							    */
/****************************************************************/
int get_appl_proc(char *applid, APPL_PROC_DETAILS_T *appl_proc, int reccount)
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char procind[PROCESS_IND_SIZE];
		/* varchar userid[USER_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } userid;

		char timestamp[DATE_TIME_SIZE];

		char applicationid[APP_ID_SIZE];

		short int procind_ind = 0;
		short int userid_ind = 0;
		short int timestamp_ind = 0;

	/* EXEC SQL END DECLARE SECTION; */ 

	int i_count = 0;

	strcpy(applicationid,applid);

	/* EXEC SQL DECLARE APPL_PROC_CURSOR CURSOR FOR 
				SELECT PROCIND, USERID,TO_CHAR(TIMESTAMP, 'YYYYMMDD HH24MISS') 
				FROM APPL_PROC
				WHERE APPLID = :applicationid ORDER BY PROCSERNO DESC; */ 


	/* EXEC SQL OPEN APPL_PROC_CURSOR; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0018;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )810;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (         void  *)applicationid;
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
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("get_appl_proc: Open APPL_PROC_CURSOR cursor failed ");
		#endif
		strcpy(prog_log.remarks,"get_appl_proc :Open APPL_PROC_CURSOR cursor failed");
		sprintf(excep_log.error_msg,"get_appl_proc : Open APPL_PROC_CURSOR cursor failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

		/* EXEC SQL CLOSE APPL_PROC_CURSOR; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 27;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )829;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		return CURSOR_OPEN_ERROR;
	}
	
	for(i_count = 1; i_count <= reccount ;i_count++, appl_proc++)
	{

		/* EXEC SQL FETCH APPL_PROC_CURSOR INTO :procind:procind_ind,
		:userid:userid_ind, :timestamp:timestamp_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 27;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )844;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)procind;
  sqlstm.sqhstl[0] = (unsigned int  )3;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&procind_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&userid;
  sqlstm.sqhstl[1] = (unsigned int  )11;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&userid_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)timestamp;
  sqlstm.sqhstl[2] = (unsigned int  )16;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&timestamp_ind;
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
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE)
		{
			#ifdef DEBUG
				userlog("get_appl_proc: Fetch APPL_PROC_CURSOR cursor failed ");
			#endif
			strcpy(prog_log.remarks,"get_appl_proc :Fetch APPL_PROC_CURSOR cursor failed");
			sprintf(excep_log.error_msg,"get_appl_proc : Fetch APPL_PROC_CURSOR cursor failed:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error();

			/* EXEC SQL CLOSE APPL_PROC_CURSOR; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 27;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )871;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



			return CURSOR_FETCH_ERROR;
		}

		if (procind_ind == 0)
		{
			strcpy(appl_proc->procind,procind);
		}
		else
		{
			appl_proc->procind[0] = '\0';
		}

		if (userid_ind == 0)
		{
			setnull(userid);
			strcpy(appl_proc->userid, userid.arr);
		}
		else
		{
			appl_proc->userid[0] = '\0';
		}
		
		if (timestamp_ind == 0)
		{
			strcpy(appl_proc->timestamp,timestamp);
		}
		else
		{
			appl_proc->timestamp[0] = '\0';
		}

	};

	/* EXEC SQL CLOSE APPL_PROC_CURSOR; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )886;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("get_appl_proc: close APPL_PROC_CURSOR cursor failed ");
		#endif
		strcpy(prog_log.remarks,"get_appl_proc :close APPL_PROC_CURSOR cursor failed");
		sprintf(excep_log.error_msg,"get_appl_proc : close APPL_PROC_CURSOR cursor failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

	   return CURSOR_CLOSE_ERROR;
	}

	return SUCCESS;
}



/****************************************************************/
/* Function Name:get_outstand_payment								*/
/* Description  :Gets outstanding fees for the given card		*/
/* Input        :applid							*/   
/* Return Values:SUCCESS or FAILURE							    */
/****************************************************************/
int get_outstand_payment(GMPC_ENQUIRY_RESP_T *resp)
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char applid[APP_ID_SIZE];
		short int outstandpay_ind = -1;
	/* EXEC SQL END DECLARE SECTION; */ 


	strcpy(applid, resp->applid);

	if(applid[14] == '4' || applid[14] == '5')
	{
	/*Changed by Sushil 160103. The sum of the fees in the APPL_TXN_FEE should be sent out 
		EXEC SQL
			SELECT FEEAMT INTO :resp->outstandpay:outstandpay_ind FROM 
			APPL_TXN_FEE A, APPL_TXN T WHERE 
			A.APPLID = :applid AND A.APPLID = T.APPLID 
			AND T.PAYMSERNO IS NULL AND ROWNUM = 1;
	*/
		
	/* Changed by Sushil 170203. To avoid getting double fees. Added txncancelcode	
		EXEC SQL
			SELECT SUM(FEEAMT) INTO :resp->outstandpay:outstandpay_ind FROM 
			APPL_TXN_FEE A, APPL_TXN T WHERE 
			A.APPLID = :applid AND A.APPLID = T.APPLID 
			AND T.PAYMSERNO IS NULL
			GROUP BY A.APPLID;

  */


		/* EXEC SQL
			SELECT SUM(FEEAMT) INTO :resp->outstandpay:outstandpay_ind FROM 
			APPL_TXN_FEE where APPLID = :applid AND EXISTS( SELECT 'X' from 
			APPL_TXN where applid = :applid and PAYMSERNO IS NULL AND TXNCANCELCODE IS NULL)
			GROUP BY APPLID; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 27;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select sum(FEEAMT) into :b0:b1  from APPL_TXN_FEE where (AP\
PLID=:b2 and exists (select 'X'  from APPL_TXN where ((applid=:b2 and PAYMSERN\
O is null ) and TXNCANCELCODE is null ))) group by APPLID";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )901;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&(resp->outstandpay);
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&outstandpay_ind;
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
  sqlstm.sqhstv[2] = (         void  *)applid;
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
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	
		
		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE && !(NO_DATA_FOUND))
		{
			strcpy(prog_log.remarks,"get_outstand_payment :Select FEEAMT failed");
			sprintf(excep_log.error_msg,"get_outstand_payment :  Select FEEAMT failed:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error();

			#ifdef DEBUG
				userlog("get_outstand_payment: Select FEEAMT failed ");
			#endif
				return SELECT_ERROR;
		}
		else if((NO_DATA_FOUND) || (outstandpay_ind == -1))
		{
			resp->outstandpay = 0;
		}
	}
	else
	{
		/* Changed by Sushil on 04/02/2003 to get the sum of fees 
		EXEC SQL
			SELECT FEEAMT INTO :resp->outstandpay FROM 
			OUTSTAND_TXN_FEE WHERE 
			APPLID = :applid AND ROWNUM = 1;
		*/
		
		/* EXEC SQL
			SELECT SUM(FEEAMT) INTO :resp->outstandpay:outstandpay_ind FROM 
			OUTSTAND_TXN_FEE WHERE 
			APPLID = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 27;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select sum(FEEAMT) into :b0:b1  from OUTSTAND_TXN_FEE where\
 APPLID=:b2";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )928;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&(resp->outstandpay);
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&outstandpay_ind;
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
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


			

		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE && !(NO_DATA_FOUND))
		{
			strcpy(prog_log.remarks,"get_outstand_payment :Select FEEAMT failed");
			sprintf(excep_log.error_msg,"get_outstand_payment :  Select FEEAMT failed:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error();

			#ifdef DEBUG
				userlog("get_outstand_payment: Select FEEAMT failed ");
			#endif
				return SELECT_ERROR;
		}
		else if((NO_DATA_FOUND) || outstandpay_ind == -1)
		{
			resp->outstandpay = 0;
		}

	}

	return SUCCESS;
}


/****************************************************************/
/* Function Name:get_kptno								*/
/* Description  :Gets kptno for the given card		*/
/* Input        :Req buffer							*/   
/* Return Values:SUCCESS or FAILURE							    */
/****************************************************************/
int get_kptno(GMPC_ENQUIRY_REQ_T *req, int *cnt)
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char idtype[ID_TYPE_SIZE];
		/* varchar idno[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } idno
 = {0};

		char kptno[KPT_SIZE];
		int icount = 0;

		short int idtype_ind = 0;
		short int idno_ind = 0;
		short int kptno_ind = 0;
	/* EXEC SQL END DECLARE SECTION; */ 


	strcpy(idtype, req->idtype);

	strcpy(idno.arr, req->idno);
	setlen(idno);

/*changed on 21/01/03 - ravi 
	EXEC SQL
		SELECT COUNT(*) INTO :icount FROM APPLICATION 
		WHERE IDTYPE = :idtype:idtype_ind AND 
		IDNO = :idno:idno_ind AND APPLSTAT NOT IN ('T','H','M');
*/

/*changed on 29/05/03 - Sushil Exclude Application Status 'I' */
	/* EXEC SQL
		SELECT COUNT(*) INTO :icount FROM APPLICATION 
		WHERE IDTYPE = :idtype:idtype_ind AND 
		IDNO = :idno:idno_ind AND APPLSTAT NOT IN ('T','H','M','I'); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from APPLICATION where ((IDTYPE=:\
b1:b2 and IDNO=:b3:b4) and APPLSTAT not  in ('T','H','M','I'))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )951;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&icount;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)idtype;
 sqlstm.sqhstl[1] = (unsigned int  )3;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&idtype_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&idno;
 sqlstm.sqhstl[2] = (unsigned int  )18;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&idno_ind;
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
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("get_kptno: Select count(*) from APPLICATION failed");
		#endif
		strcpy(prog_log.remarks,"get_kptno :Select count(*) from APPLICATION failed");
		sprintf(excep_log.error_msg,"get_kptno : Select count(*) from APPLICATION failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

	   return SELECT_ERROR;
	}

	*cnt = icount;

	if(icount == 0)
	{
		return NO_DATA_FOUND;
	}
	else if(icount >= 2)
	{
		return MULTI_REC_FOUND;
	}

	/* EXEC SQL
		SELECT KPTNO INTO :kptno:kptno_ind FROM APPLICATION 
		WHERE IDTYPE = :idtype:idtype_ind AND 
		IDNO = :idno:idno_ind AND APPLSTAT NOT IN ('T','H','M'); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select KPTNO into :b0:b1  from APPLICATION where ((IDTYPE=:b\
2:b3 and IDNO=:b4:b5) and APPLSTAT not  in ('T','H','M'))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )978;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)kptno;
 sqlstm.sqhstl[0] = (unsigned int  )13;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&kptno_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)idtype;
 sqlstm.sqhstl[1] = (unsigned int  )3;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&idtype_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&idno;
 sqlstm.sqhstl[2] = (unsigned int  )18;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&idno_ind;
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
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("get_kptno: Select from APPLICATION failed");
		#endif
		strcpy(prog_log.remarks,"get_kptno :Select from APPLICATION failed");
		sprintf(excep_log.error_msg,"get_kptno : Select from APPLICATION failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

	   return SELECT_ERROR;
	}
	
	if(kptno_ind == -1)
	{
		#ifdef DEBUG
			userlog("get_kptno: KPTNO in APPLICATION is NULL ");
		#endif
		strcpy(prog_log.remarks,"get_kptno :KPTNO in APPLICATION is NULL");
		sprintf(excep_log.error_msg,"get_kptno : KPTNO in APPLICATION is NULL:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

	   return KPT_NO_NULL;

	}
	else
	{
		strcpy(req->kptno, kptno);
	}

	#ifdef DEBUG
		userlog("get_kptno: KPTNO is :%s:%s:", kptno, req->kptno);
	#endif


	return SUCCESS;
}

/****************************************************************/
/* Function Name:get_gmpc_matches								*/
/* Description  :Gets kptnos for the given card					*/
/* Input        :Req buffer	, GMPC matches buffer				*/  
/* Return Values:SUCCESS or FAILURE							    */
/****************************************************************/
int get_gmpc_matches(GMPC_ENQUIRY_REQ_T *req, GMPC_MATCHES_T *matches, int cnt)
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char idtype[ID_TYPE_SIZE];
		/* varchar idno[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } idno
 = {0};

		char kptno[KPT_SIZE];
		int i_count = 0;
		char gender = '\0';
		int version = 0;
		/* varchar hv_gmpcname[GMPC_SNAME1_SIZE+GMPC_SNAME2_SIZE+GMPC_SNAME3_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[83]; } hv_gmpcname
 = {0};


		short int idtype_ind = 0;
		short int idno_ind = 0;
		short int kptno_ind = 0;
		short int gender_ind = 0;
		short int version_ind = 0;
		short int hv_gmpcname_ind = 0;
	/* EXEC SQL END DECLARE SECTION; */ 


	strcpy(idtype, req->idtype);

	strcpy(idno.arr, req->idno);
	setlen(idno);

/*		DECLARE GMPC_MATCHES_CURSOR CURSOR FOR 
		SELECT A.KPTNO, B.GENDER, C.CARDVERSIONNO, 
		B.GMPCSHORTNAME1 || ' ' || B.GMPCSHORTNAME2 || ' ' || B.GMPCSHORTNAME3
		FROM APPLICATION A, APPNT_JPN_INFO B, CARD_STATUS C
		WHERE A.IDTYPE = :idtype:idtype_ind AND 
		A.IDNO = :idno:idno_ind
		AND A.KPTNO = B.KPTNO AND A.APPLID = B.APPLID
		AND A.KPTNO = C.KPTNO AND A.APPLID = C.APPLID;
*/

	/* EXEC SQL
		DECLARE GMPC_MATCHES_CURSOR CURSOR FOR 
		SELECT A.KPTNO, MAX(C.CARDVERSIONNO) 
		FROM APPLICATION A, APPNT_JPN_INFO B, CARD_STATUS C
		WHERE A.IDTYPE = :idtype:idtype_ind AND 
		A.IDNO = :idno:idno_ind
		AND A.KPTNO = B.KPTNO AND A.APPLID = B.APPLID
		AND A.KPTNO = C.KPTNO AND A.APPLID = C.APPLID
		GROUP BY A.KPTNO; */ 


	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("get_gmpc_matches: DECLARE GMPC_MATCHES_CURSOR CURSOR failed");
		#endif
		strcpy(prog_log.remarks,"get_gmpc_matches :DECLARE GMPC_MATCHES_CURSOR CURSOR failed");
		sprintf(excep_log.error_msg,"get_gmpc_matches : DECLARE GMPC_MATCHES_CURSOR CURSOR failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

		return SELECT_ERROR;
	}

	
	/* EXEC SQL OPEN GMPC_MATCHES_CURSOR; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0023;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1005;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (         void  *)idtype;
 sqlstm.sqhstl[0] = (unsigned int  )3;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&idtype_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&idno;
 sqlstm.sqhstl[1] = (unsigned int  )18;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&idno_ind;
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
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("get_gmpc_matches: Open GMPC_MATCHES_CURSOR cursor failed ");
		#endif
		strcpy(prog_log.remarks,"get_gmpc_matches :Open GMPC_MATCHES_CURSOR cursor failed");
		sprintf(excep_log.error_msg,"get_gmpc_matches : Open GMPC_MATCHES_CURSOR cursor failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

		/* EXEC SQL CLOSE GMPC_MATCHES_CURSOR; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 27;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1028;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		return CURSOR_OPEN_ERROR;
	}

	for(i_count = 1; i_count <= cnt ;i_count++, matches++)
	{

/*		EXEC SQL FETCH GMPC_MATCHES_CURSOR INTO :kptno:kptno_ind, 
			:gender:gender_ind, :version:version_ind, 
			:hv_gmpcname:hv_gmpcname_ind;
*/
		/* EXEC SQL FETCH GMPC_MATCHES_CURSOR INTO :kptno:kptno_ind, 
			:version:version_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 27;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1043;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)kptno;
  sqlstm.sqhstl[0] = (unsigned int  )13;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&kptno_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&version;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&version_ind;
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
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


		
		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE)
		{
			#ifdef DEBUG
				userlog("get_passport_det: Fetch GMPC_MATCHES_CURSOR cursor failed ");
			#endif
			strcpy(prog_log.remarks,"get_passport_det :Fetch GMPC_MATCHES_CURSOR cursor failed");
			sprintf(excep_log.error_msg,"get_passport_det : Fetch GMPC_MATCHES_CURSOR cursor failed:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error();

			/* EXEC SQL CLOSE GMPC_MATCHES_CURSOR; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 27;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1066;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



			return CURSOR_FETCH_ERROR;
		}

		if(kptno_ind == -1)
		{
			matches->kptno[0] = '\0';
		}
		else
		{
			strcpy(matches->kptno, kptno);
		}

		if(version_ind == -1)
		{
			matches->version = 0;
		}
		else
		{
			matches->version = version;
		}

		/* EXEC SQL
			SELECT GENDER, 
			GMPCSHORTNAME1 || ' ' || GMPCSHORTNAME2 || ' ' || GMPCSHORTNAME3
			INTO :gender:gender_ind, :hv_gmpcname:hv_gmpcname_ind
			FROM APPNT_JPN_INFO
			WHERE APPLID IN (SELECT APPLID FROM CARD_STATUS WHERE 
			KPTNO = :kptno:kptno_ind AND CARDVERSIONNO = :version:version_ind); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 27;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select GENDER ,((((GMPCSHORTNAME1||' ')||GMPCSHORTNAME2)||'\
 ')||GMPCSHORTNAME3) into :b0:b1,:b2:b3  from APPNT_JPN_INFO where APPLID in (\
select APPLID  from CARD_STATUS where (KPTNO=:b4:b5 and CARDVERSIONNO=:b6:b7))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1081;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&gender;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&gender_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&hv_gmpcname;
  sqlstm.sqhstl[1] = (unsigned int  )85;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&hv_gmpcname_ind;
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
  sqlstm.sqhstv[3] = (         void  *)&version;
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&version_ind;
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
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		
		setnull(hv_gmpcname);

		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE)
		{
			#ifdef DEBUG
				userlog("get_gmpc_matches: SELECT FROM APPNT_JPN_INFO failed");
			#endif
			strcpy(prog_log.remarks,"get_gmpc_matches :SELECT FROM APPNT_JPN_INFO failed");
			sprintf(excep_log.error_msg,"get_gmpc_matches : SELECT FROM APPNT_JPN_INFO failed:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error();

			return SELECT_ERROR;
		}

		if(gender_ind == -1)
		{
			matches->gender = '\0';
		}
		else
		{
			matches->gender = gender;
		}

		if(hv_gmpcname_ind == -1)
		{
			matches->name[0] = '\0';
		}
		else
		{
			strcpy(matches->name, hv_gmpcname.arr);
		}

		#ifdef DEBUG
			userlog("get_gmpc_matches: KPTNO is :%s:%s:", kptno, matches->kptno);
			userlog("get_gmpc_matches: VERSION is :%d:", matches->version);
			userlog("get_gmpc_matches: GENDER is :%c:", matches->gender);
			userlog("get_gmpc_matches: NAME is :%s:", matches->name);
		#endif

	}

	return SUCCESS;
}

/****************************************************************/
/* Function Name:get_passport_det								*/
/* Description  :Gets passport details for the given card		*/
/* Input        :applid											*/   
/* Return Values:SUCCESS or FAILURE							    */
/****************************************************************/
int get_passport_det(char *applid, PASSPORT_DETAILS_T *passport_det, int reccount)
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char passport_doctype[JIM_DOC_TYPE_SIZE];
		char passport_number[PASSPORT_NO_SIZE];
		char expiry_date[DATE_SIZE];

		char applicationid[APP_ID_SIZE];

		short int passport_doctype_ind = 0;
		short int passport_number_ind = 0;
		short int expiry_date_ind = 0;
	/* EXEC SQL END DECLARE SECTION; */ 

	int i_count = 0;

#ifdef DEBUG
	userlog("get_passport_det :Insise get_passport_det func ");
#endif

	strcpy(applicationid, applid);

	/* EXEC SQL DECLARE PASSPORT_CURSOR CURSOR FOR 
				SELECT TO_CHAR(PASSPORTDOCTYPE), PASSPORTIDNO, TO_CHAR(PASSPORTEXPDATE,'YYYYMMDD')
				FROM APPNT_PP_INFO 
				WHERE APPLID = :applicationid; */ 
 
	/* EXEC SQL OPEN passport_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0025;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1112;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (         void  *)applicationid;
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
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("get_passport_det: Open PASSPORT_CURSOR cursor failed ");
		#endif
		strcpy(prog_log.remarks,"get_passport_det :Open PASSPORT_CURSOR cursor failed");
		sprintf(excep_log.error_msg,"get_passport_det : Open PASSPORT_CURSOR cursor failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

		/* EXEC SQL CLOSE PASSPORT_CURSOR; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 27;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1131;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		return CURSOR_OPEN_ERROR;
	}
	
	for(i_count = 1; i_count <= reccount ;i_count++, passport_det++)
	{

		/* EXEC SQL FETCH PASSPORT_CURSOR INTO :passport_doctype:passport_doctype_ind, 
		:passport_number:passport_number_ind, :expiry_date:expiry_date_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 27;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1146;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)passport_doctype;
  sqlstm.sqhstl[0] = (unsigned int  )4;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&passport_doctype_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)passport_number;
  sqlstm.sqhstl[1] = (unsigned int  )16;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&passport_number_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)expiry_date;
  sqlstm.sqhstl[2] = (unsigned int  )9;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&expiry_date_ind;
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
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


		
		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE)
		{
			#ifdef DEBUG
				userlog("get_passport_det: Fetch PASSPORT_CURSOR cursor failed ");
			#endif
			strcpy(prog_log.remarks,"get_passport_det :Fetch PASSPORT_CURSOR cursor failed");
			sprintf(excep_log.error_msg,"get_passport_det : Fetch PASSPORT_CURSOR cursor failed:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error();

			/* EXEC SQL CLOSE PASSPORT_CURSOR; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 27;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1173;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



			return CURSOR_FETCH_ERROR;
		}

		
		if (passport_doctype_ind == 0)
		{
			strcpy(passport_det->passport_doctype, passport_doctype);
		}
		else
		{	
			passport_det->passport_doctype[0] = '\0';
		}

		if (passport_number_ind == 0)
		{
			strcpy(passport_det->passport_number, passport_number);
		}
		else
		{
			passport_det->passport_number[0] = '\0';
		}

		if (expiry_date_ind == 0)
		{
			strcpy(passport_det->expiry_date, expiry_date);
		}
		else
		{
			passport_det->expiry_date[0] = '\0';
		}

	#ifdef DEBUG
		userlog(" GMPC_ENQUIRY : get_passport_det : passport_doctype :%s", passport_det->passport_doctype);
		userlog(" GMPC_ENQUIRY : get_passport_det : passport_number :%s", passport_det->passport_number);
		userlog(" GMPC_ENQUIRY : get_passport_det : expiry_date :%s", passport_det->expiry_date);
	#endif

	}


	/* EXEC SQL CLOSE PASSPORT_CURSOR; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1188;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("get_passport_det: close PASSPORT_CURSOR cursor failed ");
		#endif
		strcpy(prog_log.remarks,"get_passport_det :close PASSPORT_CURSOR cursor failed");
		sprintf(excep_log.error_msg,"get_passport_det : close PASSPORT_CURSOR cursor failed:%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error();

	   return CURSOR_CLOSE_ERROR;
	}

	return SUCCESS;
}


	/* Added on 1 MARCH 2005 for IJPN */

/****************************************************************/
/* Function Name:get_appnt_jpn_info								*/
/* Description  :Gets appnt jpn info for the given applid		*/
/* Input        :applid											*/  
/* Return Values:SUCCESS or FAILURE							    */
/****************************************************************/
int get_appnt_jpn_info(char *applid, APPNT_JPN_INFO_T *appnt_jpn_info)
{

	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	
		typedef struct local_appnt_jpn_info
		{
			char gmpcshortname1[GMPC_SNAME1_SIZE];
			char gmpcshortname2[GMPC_SNAME2_SIZE];
			char gmpcshortname3[GMPC_SNAME3_SIZE];
			char address1[ADDRESS_SIZE];
			char address2[ADDRESS_SIZE];
			char address3[ADDRESS_SIZE];
			char postcode[POSTCODE_SIZE];
			int  citycode;
			char statecode[STATECODE_SIZE];
		}LOCAL_APPNT_JPN_INFO_T;

		typedef struct local_appnt_jpn_info_ind
		{
			short gmpcshortname1_ind;
			short gmpcshortname2_ind;
			short gmpcshortname3_ind;
			short address1_ind;
			short address2_ind;
			short address3_ind;
			short postcode_ind;
			short citycode_ind;
			short statecode_ind;
		}LOCAL_APPNT_JPN_INFO_IND_T;

		LOCAL_APPNT_JPN_INFO_T local_jpn;
		LOCAL_APPNT_JPN_INFO_IND_T local_jpn_ind;

	/* EXEC SQL END DECLARE SECTION; */ 


	memset(&local_jpn,'\0',sizeof(LOCAL_APPNT_JPN_INFO_T));
	memset(&local_jpn_ind,'\0',sizeof(LOCAL_APPNT_JPN_INFO_IND_T));

	/* EXEC SQL 
		SELECT GMPCSHORTNAME1, GMPCSHORTNAME2, GMPCSHORTNAME3, ADDRESS1,
				ADDRESS2,ADDRESS3, POSTCODE, CITYCODE, STATECODE
		INTO   :local_jpn INDICATOR :local_jpn_ind
		FROM   APPNT_JPN_INFO
		WHERE  APPLID = :applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select GMPCSHORTNAME1 ,GMPCSHORTNAME2 ,GMPCSHORTNAME3 ,ADDRE\
SS1 ,ADDRESS2 ,ADDRESS3 ,POSTCODE ,CITYCODE ,STATECODE into :s2:s1 ,:s4:s3 ,:s\
6:s5 ,:s8:s7 ,:s10:s9 ,:s12:s11 ,:s14:s13 ,:s16:s15 ,:s18:s17   from APPNT_JPN\
_INFO where APPLID=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1203;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)local_jpn.gmpcshortname1;
 sqlstm.sqhstl[0] = (unsigned int  )31;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&local_jpn_ind.gmpcshortname1_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)local_jpn.gmpcshortname2;
 sqlstm.sqhstl[1] = (unsigned int  )31;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&local_jpn_ind.gmpcshortname2_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)local_jpn.gmpcshortname3;
 sqlstm.sqhstl[2] = (unsigned int  )21;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&local_jpn_ind.gmpcshortname3_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)local_jpn.address1;
 sqlstm.sqhstl[3] = (unsigned int  )41;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&local_jpn_ind.address1_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)local_jpn.address2;
 sqlstm.sqhstl[4] = (unsigned int  )41;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&local_jpn_ind.address2_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)local_jpn.address3;
 sqlstm.sqhstl[5] = (unsigned int  )41;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&local_jpn_ind.address3_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)local_jpn.postcode;
 sqlstm.sqhstl[6] = (unsigned int  )6;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&local_jpn_ind.postcode_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&local_jpn.citycode;
 sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&local_jpn_ind.citycode_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)local_jpn.statecode;
 sqlstm.sqhstl[8] = (unsigned int  )3;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&local_jpn_ind.statecode_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)applid;
 sqlstm.sqhstl[9] = (unsigned int  )0;
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
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		if(SQLCODE != 0)
		{
#ifdef DEBUG
		userlog(" get_appnt_jpn_info : Error in getting data from the table APPNT_JPN_INFO : %s", SQLMSG);
#endif
		/* Log the error */
		strcpy(prog_log.remarks,"get_appnt_jpn_info : Error in getting data from the table APPNT_JPN_INFO");
		sprintf(excep_log.error_msg,"get_appnt_jpn_info : Error in getting data from the table APPNT_JPN_INFO : %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error();

		return SELECT_ERROR;
		}

	if(local_jpn_ind.gmpcshortname1_ind != -1)
		strcpy(appnt_jpn_info->gmpcshortname1,local_jpn.gmpcshortname1);

	if(local_jpn_ind.gmpcshortname2_ind != -1)
		strcpy(appnt_jpn_info->gmpcshortname2,local_jpn.gmpcshortname2);

	if(local_jpn_ind.gmpcshortname3_ind != -1)
		strcpy(appnt_jpn_info->gmpcshortname3,local_jpn.gmpcshortname3);

	if(local_jpn_ind.address1_ind != -1)
		strcpy(appnt_jpn_info->address1,local_jpn.address1);

	if(local_jpn_ind.address2_ind != -1)
		strcpy(appnt_jpn_info->address2,local_jpn.address2);

	if(local_jpn_ind.address3_ind != -1)
		strcpy(appnt_jpn_info->address3,local_jpn.address3);

	if(local_jpn_ind.postcode_ind != -1)
		strcpy(appnt_jpn_info->postcode,local_jpn.postcode);

	if(local_jpn_ind.statecode_ind != -1)
		strcpy(appnt_jpn_info->statecode,local_jpn.statecode);

	if(local_jpn_ind.citycode_ind != -1)
		appnt_jpn_info->citycode = local_jpn.citycode;

	#ifdef DEBUG
		userlog(" GMPC_ENQUIRY : get_appnt_jpn_info : gmpcshortname1 :%s", appnt_jpn_info->gmpcshortname1);
		userlog(" GMPC_ENQUIRY : get_appnt_jpn_info : gmpcshortname2 :%s", appnt_jpn_info->gmpcshortname2);
		userlog(" GMPC_ENQUIRY : get_appnt_jpn_info : gmpcshortname3 :%s", appnt_jpn_info->gmpcshortname3);
		userlog(" GMPC_ENQUIRY : get_appnt_jpn_info : address1 :%s", appnt_jpn_info->address1);
		userlog(" GMPC_ENQUIRY : get_appnt_jpn_info : address2 :%s", appnt_jpn_info->address2);
		userlog(" GMPC_ENQUIRY : get_appnt_jpn_info : address3 :%s", appnt_jpn_info->address3);
		userlog(" GMPC_ENQUIRY : get_appnt_jpn_info : postcode :%s", appnt_jpn_info->postcode);
		userlog(" GMPC_ENQUIRY : get_appnt_jpn_info : citycode :%d", appnt_jpn_info->citycode);
		userlog(" GMPC_ENQUIRY : get_appnt_jpn_info : statecode :%s", appnt_jpn_info->statecode);
	#endif

	return SUCCESS;
}

/****************************************************************/
/* Function Name:get_appnt_lic_info								*/
/* Description  :Gets appnt lic info for the given applid		*/
/* Input        :applid											*/  
/* Return Values:SUCCESS or FAILURE							    */
/****************************************************************/
int get_appnt_lic_info(char *applid,APPNT_LIC_INFO_T *appnt_lic_info, int lic_count)
{

	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	
	typedef struct local_appnt_lic_info
		{
			char lictype[LICTYPE_SIZE];
			char licclass[LICCLASS_SIZE];
			char licusagecode[LICUSAGECODE_SIZE];
		}LOCAL_APPNT_LIC_INFO_T;

	typedef struct local_appnt_lic_info_ind
		{
			short lictype_ind;
			short licclass_ind;
			short licusagecode_ind;			
		}LOCAL_APPNT_LIC_INFO_IND_T;

		LOCAL_APPNT_LIC_INFO_T local_lic;
		LOCAL_APPNT_LIC_INFO_IND_T local_lic_ind;
		
		int count=0;
	/* EXEC SQL END DECLARE SECTION; */ 


	memset(&local_lic,'\0',sizeof(LOCAL_APPNT_LIC_INFO_T));
	memset(&local_lic_ind,'\0',sizeof(LOCAL_APPNT_LIC_INFO_IND_T));

	/* EXEC SQL DECLARE lic_cur CURSOR FOR
		SELECT LICTYPE, LICCLASS, LICUSAGECODE
		FROM   APPNT_LIC_INFO
		WHERE  APPLID = :applid; */ 


	if(SQLCODE != 0)
		{
#ifdef DEBUG
		userlog(" get_appnt_lic_info : Error in while declaring lic_cur cursor for the table APPNT_LIC_INFO : %s", SQLMSG);
#endif
		/* Log the error */
		strcpy(prog_log.remarks,"get_appnt_lic_info : Error while declaring lic_cur cursor for the table APPNT_LIC_INFO");
		sprintf(excep_log.error_msg,"get_appnt_lic_info : Error while declaring lic_cur cursor for the table APPNT_LIC_INFO : %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error();

		return SELECT_ERROR;
		}

	/* EXEC SQL OPEN lic_cur; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 27;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0027;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1258;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (         void  *)applid;
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
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog(" get_appnt_lic_info : Error in opening lic_cur cursor for APPNT_LIC_INFO : %s", SQLMSG);
#endif
		/* Log the error */
		strcpy(prog_log.remarks,"get_appl_fee_reduction : Error in opening lic_cur cursor for APPNT_LIC_INFO");
		sprintf(excep_log.error_msg,"get_appl_fee_reduction : Error in opening lic_cur cursor for APPNT_LIC_INFO : %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error();

		return CURSOR_OPEN_ERROR;
	}
#ifdef DEBUG
		userlog("get_appnt_lic_info: Open lic_cur Cursor Success ");		
#endif

		while(count < lic_count)
		{

			/* EXEC SQL FETCH lic_cur INTO :local_lic INDICATOR :local_lic_ind; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 27;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1277;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqfoff = (           int )0;
   sqlstm.sqfmod = (unsigned int )2;
   sqlstm.sqhstv[0] = (         void  *)local_lic.lictype;
   sqlstm.sqhstl[0] = (unsigned int  )4;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&local_lic_ind.lictype_ind;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)local_lic.licclass;
   sqlstm.sqhstl[1] = (unsigned int  )3;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)&local_lic_ind.licclass_ind;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)local_lic.licusagecode;
   sqlstm.sqhstl[2] = (unsigned int  )3;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&local_lic_ind.licusagecode_ind;
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
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



		 if(NO_DATA_FOUND) break;

		 sqlmsg[0] = '\0';
		 strcpy(sqlmsg, SQLMSG);
		 if(SQLCODE) 
		 {
#ifdef DEBUG
		userlog("get_appnt_lic_info: Fetch lic_cur cursor failed ");
#endif
			strcpy(prog_log.remarks,"get_appnt_lic_info :Fetch lic_cur cursor failed");
			sprintf(excep_log.error_msg,"get_appnt_lic_info : Fetch lic_cur cursor failed:%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error();

			/* EXEC SQL CLOSE lic_cur; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 27;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1304;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



			return CURSOR_FETCH_ERROR;
		 }

		 if(local_lic_ind.lictype_ind != -1)
			strcpy(appnt_lic_info->lictype,local_lic.lictype);

		 if(local_lic_ind.licclass_ind != -1)
			strcpy(appnt_lic_info->licclass,local_lic.licclass);

		 if(local_lic_ind.licusagecode_ind != -1)
			strcpy(appnt_lic_info->licusagecode,local_lic.licusagecode);

	#ifdef DEBUG
		userlog(" GMPC_ENQUIRY : get_appnt_lic_info : lictype :%s", appnt_lic_info->lictype);
		userlog(" GMPC_ENQUIRY : get_appnt_lic_info : licclass :%s", appnt_lic_info->licclass);
		userlog(" GMPC_ENQUIRY : get_appnt_lic_info : licusagecode :%s", appnt_lic_info->licusagecode);		
	#endif

		 appnt_lic_info++;
		 count++;
		 memset(&local_lic,'\0',sizeof(LOCAL_APPNT_LIC_INFO_T));
		 memset(&local_lic_ind,'\0',sizeof(LOCAL_APPNT_LIC_INFO_IND_T));
		}

	return SUCCESS;
}



	/* end IJPN */