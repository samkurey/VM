
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
    ".\\CreateApplntMisc_DB.pc"
};


static unsigned int sqlctx = 1071722763;


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
            void  *sqhstv[31];
   unsigned int   sqhstl[31];
            int   sqhsts[31];
            void  *sqindv[31];
            int   sqinds[31];
   unsigned int   sqharm[31];
   unsigned int   *sqharc[31];
   unsigned short  sqadto[31];
   unsigned short  sqtdso[31];
} sqlstm = {12,31};

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

 static const char *sq0003 = 
"select A.TXNSERNO ,A.TXNCODE ,A.LICTYPE ,A.LICCLASS ,A.LICUSAGECODE ,A.LICVA\
LIDPERIOD ,A.PAYMSERNO ,A.QCSERNO ,A.QCFLAG ,TO_CHAR(A.TXNDATE,'DDMMYYYY') ,B.\
TXNTYPE  from APPL_TXN A ,TXN_CODE B where (((A.APPLID=:b0 and A.TXNCANCELCODE\
 is null ) and A.LEGUPDFLAG='N') and B.TXNCODE=A.TXNCODE)           ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4274,178,0,0,
5,0,0,1,83,0,4,72,0,0,3,1,0,1,0,2,1,0,0,2,1,0,0,1,97,0,0,
32,0,0,2,116,0,4,165,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
55,0,0,3,300,0,9,245,0,0,1,1,0,1,0,1,97,0,0,
74,0,0,3,0,0,13,269,0,0,11,0,0,1,0,2,3,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,
2,3,0,0,2,3,0,0,2,3,0,0,2,1,0,0,2,97,0,0,2,3,0,0,
133,0,0,3,0,0,15,282,0,0,0,0,0,1,0,
148,0,0,3,0,0,15,372,0,0,0,0,0,1,0,
163,0,0,4,96,0,4,433,0,0,4,1,0,1,0,2,97,0,0,2,9,0,0,2,1,0,0,1,97,0,0,
194,0,0,5,171,0,4,461,0,0,5,4,0,1,0,2,3,0,0,1,9,0,0,1,1,0,0,1,9,0,0,1,1,0,0,
229,0,0,6,59,0,4,548,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
252,0,0,7,58,0,4,614,0,0,2,1,0,1,0,2,1,0,0,1,97,0,0,
275,0,0,8,108,0,3,677,0,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
298,0,0,9,557,0,4,787,0,0,14,2,0,1,0,2,3,0,0,2,3,0,0,2,9,0,0,2,97,0,0,2,97,0,0,
2,97,0,0,2,9,0,0,2,9,0,0,2,97,0,0,2,97,0,0,2,9,0,0,2,97,0,0,1,97,0,0,1,97,0,0,
369,0,0,10,366,0,3,920,0,0,9,9,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,97,0,0,
1,3,0,0,1,97,0,0,1,9,0,0,1,97,0,0,
420,0,0,11,342,0,3,964,0,0,12,12,0,1,0,1,97,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,97,
0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,97,0,0,1,97,0,0,1,9,0,0,1,97,0,0,
483,0,0,12,75,0,4,1100,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
506,0,0,13,220,0,5,1106,0,0,5,5,0,1,0,1,3,0,0,1,9,0,0,1,97,0,0,1,9,0,0,1,97,0,
0,
541,0,0,14,95,0,2,1132,0,0,2,2,0,1,0,1,97,0,0,1,3,0,0,
564,0,0,15,144,0,3,1138,0,0,4,4,0,1,0,1,97,0,0,1,3,0,0,1,9,0,0,1,9,0,0,
595,0,0,16,75,0,4,1254,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
618,0,0,17,254,0,5,1260,0,0,5,5,0,1,0,1,3,0,0,1,9,0,0,1,97,0,0,1,9,0,0,1,97,0,
0,
653,0,0,18,95,0,2,1286,0,0,2,2,0,1,0,1,97,0,0,1,3,0,0,
676,0,0,19,144,0,3,1292,0,0,4,4,0,1,0,1,97,0,0,1,3,0,0,1,9,0,0,1,9,0,0,
707,0,0,20,91,0,4,1359,0,0,3,2,0,1,0,1,97,0,0,1,3,0,0,2,97,0,0,
734,0,0,21,87,0,4,1435,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,1,0,0,
761,0,0,22,56,0,5,1512,0,0,2,2,0,1,0,1,1,0,0,1,97,0,0,
784,0,0,23,82,0,4,1652,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
807,0,0,24,63,0,4,1678,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
830,0,0,25,81,0,4,1728,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,97,0,0,
857,0,0,26,350,0,6,1817,0,0,12,12,0,1,0,1,97,0,0,1,97,0,0,3,4,0,0,1,97,0,0,1,
97,0,0,3,4,0,0,1,97,0,0,1,97,0,0,3,4,0,0,3,4,0,0,2,3,0,0,2,9,0,0,
920,0,0,27,113,0,4,1925,0,0,3,2,0,1,0,2,1,0,0,1,97,0,0,1,97,0,0,
947,0,0,28,79,0,5,1970,0,0,3,3,0,1,0,1,1,0,0,1,97,0,0,1,97,0,0,
974,0,0,29,79,0,5,1993,0,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
997,0,0,30,56,0,5,2028,0,0,2,2,0,1,0,1,1,0,0,1,97,0,0,
1020,0,0,31,106,0,4,2057,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,97,0,0,
1047,0,0,32,56,0,5,2086,0,0,2,2,0,1,0,1,1,0,0,1,97,0,0,
1070,0,0,33,56,0,5,2115,0,0,1,1,0,1,0,1,97,0,0,
1089,0,0,34,61,0,5,2138,0,0,1,1,0,1,0,1,97,0,0,
1108,0,0,35,181,0,4,2164,0,0,5,4,0,1,0,2,9,0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,
0,
1143,0,0,36,129,0,5,2195,0,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
1166,0,0,37,87,0,4,2207,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
1189,0,0,38,166,0,4,2303,0,0,4,2,0,1,0,2,97,0,0,2,97,0,0,1,97,0,0,1,97,0,0,
1220,0,0,39,191,0,4,2340,0,0,5,3,0,1,0,2,97,0,0,2,97,0,0,1,9,0,0,1,1,0,0,1,97,
0,0,
1255,0,0,40,192,0,4,2378,0,0,5,3,0,1,0,2,97,0,0,2,97,0,0,1,9,0,0,1,1,0,0,1,97,
0,0,
1290,0,0,41,81,0,4,2448,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
1313,0,0,42,88,0,4,2472,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
1336,0,0,43,399,0,4,2568,0,0,17,1,0,1,0,2,9,0,0,2,97,0,0,2,1,0,0,2,97,0,0,2,9,
0,0,2,1,0,0,2,1,0,0,2,1,0,0,2,1,0,0,2,97,0,0,2,97,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,9,0,0,2,1,0,0,1,97,0,0,
1419,0,0,44,765,0,5,2606,0,0,31,31,0,1,0,1,3,0,0,1,1,0,0,1,3,0,0,1,97,0,0,1,3,
0,0,1,1,0,0,1,3,0,0,1,1,0,0,1,3,0,0,1,1,0,0,1,3,0,0,1,1,0,0,1,3,0,0,1,1,0,0,1,
3,0,0,1,9,0,0,1,3,0,0,1,9,0,0,1,3,0,0,1,9,0,0,1,3,0,0,1,9,0,0,1,3,0,0,1,97,0,0,
1,3,0,0,1,9,0,0,1,3,0,0,1,9,0,0,1,3,0,0,1,97,0,0,1,97,0,0,
1558,0,0,45,218,0,3,2726,0,0,7,7,0,1,0,1,3,0,0,1,1,0,0,1,1,0,0,1,97,0,0,1,9,0,
0,1,9,0,0,1,97,0,0,
1601,0,0,46,111,0,4,2856,0,0,2,1,0,1,0,2,3,0,0,1,9,0,0,
1624,0,0,47,213,0,3,2865,0,0,6,6,0,1,0,1,3,0,0,1,1,0,0,1,97,0,0,1,9,0,0,1,9,0,
0,1,97,0,0,
1663,0,0,48,111,0,4,2903,0,0,2,1,0,1,0,2,3,0,0,1,9,0,0,
1686,0,0,49,213,0,3,2912,0,0,6,6,0,1,0,1,3,0,0,1,1,0,0,1,97,0,0,1,9,0,0,1,9,0,
0,1,97,0,0,
1725,0,0,50,218,0,3,2950,0,0,7,7,0,1,0,1,3,0,0,1,1,0,0,1,1,0,0,1,97,0,0,1,9,0,
0,1,9,0,0,1,97,0,0,
1768,0,0,51,212,0,5,3060,0,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,97,0,0,1,9,0,0,1,97,0,
0,1,97,0,0,
1807,0,0,52,153,0,4,3134,0,0,3,2,0,1,0,2,9,0,0,1,97,0,0,1,97,0,0,
1834,0,0,53,305,0,4,3222,0,0,6,5,0,1,0,2,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,
0,0,1,97,0,0,
1873,0,0,54,281,0,2,3260,0,0,5,5,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,
97,0,0,
1908,0,0,55,58,0,4,3347,0,0,1,0,0,1,0,2,97,0,0,
1927,0,0,56,77,0,4,3374,0,0,1,0,0,1,0,2,97,0,0,
1946,0,0,57,77,0,4,3398,0,0,3,2,0,1,0,1,97,0,0,1,97,0,0,2,3,0,0,
1973,0,0,58,79,0,4,3430,0,0,2,1,0,1,0,2,3,0,0,1,9,0,0,
1996,0,0,59,97,0,4,3505,0,0,3,2,0,1,0,1,97,0,0,1,3,0,0,2,97,0,0,
2023,0,0,60,64,0,4,3530,0,0,2,1,0,1,0,1,97,0,0,2,3,0,0,
2046,0,0,61,58,0,4,3557,0,0,1,0,0,1,0,2,97,0,0,
2065,0,0,62,97,0,4,3578,0,0,3,2,0,1,0,1,97,0,0,1,3,0,0,2,97,0,0,
2092,0,0,63,102,0,4,3609,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
2115,0,0,64,76,0,4,3630,0,0,1,0,0,1,0,2,97,0,0,
2134,0,0,65,77,0,4,3636,0,0,3,2,0,1,0,1,97,0,0,1,97,0,0,2,3,0,0,
2161,0,0,66,131,0,5,3645,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,
2188,0,0,67,131,0,5,3674,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,
2215,0,0,68,166,0,5,3698,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,
2242,0,0,69,246,0,4,3756,0,0,4,3,0,1,0,2,3,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
2273,0,0,70,120,0,4,3805,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
};


/* $Header$ */
/********************************************************************************/
/* Filename    : create_applnt_misc.pc										*/
/* Author      : Amit Sangrulkar												*/
/* Description : This file contains database routines for the service           */
/*               CREATE_APPLNT. 												*/
/********************************************************************************/

/* Include files */

#include <stdio.h>
#include <string.h>
#include <windows.h>  

#include <time.h>
#include <string.h>
#include <stdlib.h>
#include "userlog.h"
#include "userlog_r.h"


#define LOG_DEFINED
#include "gscbdef.h"
#include "gscbio.h"
#include "gscblog.h"
#include "gscblookupdef.h"
#include "KPPdef.h"
#include "KPPstruct.h"
#include "KPPproto.h"
#include <sqlca.h>
#include "create_applnt_io.h"
#include "create_applnt.h"

//EXEC SQL INCLUDE SQLCA;

/********************************************************************************/
/* Function name: get_appl_status												*/
/* Description	: This function gets the status of the given application        */
/* Input		: Application id,Pointer to a variable to store application     */											
/*                status                                                        */
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int get_appl_status(char *application_id, char *appl_status,char *photo_capture,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	char appl_stat = '\0';
	char photocapture='\0'; /* Added to check phonein cases by shiva.p */

	short appl_stat_ind = -1;
	short photocapture_ind= -1;

sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	/* Populate the variables	*/

	strcpy(appl_id, application_id);

#ifdef DEBUG
	userlog("get_appl_status : Appl id - %s", appl_id);
#endif

	
	/* EXEC SQL SELECT APPLSTAT,PHOTOCAPTURE INTO :appl_stat:appl_stat_ind,:photocapture:photocapture_ind
		FROM APPLICATION WHERE APPLID  = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 3;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select APPLSTAT ,PHOTOCAPTURE into :b0:b1,:b2:b3  from APPLI\
CATION where APPLID=:b4";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )5;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&appl_stat;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&appl_stat_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&photocapture;
 sqlstm.sqhstl[1] = (unsigned int  )1;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&photocapture_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)appl_id;
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



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog(" get_appl_status : Selecting Application status from APPLICATION failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_appl_status : Selecting Application status from APPLICATION failed");
		sprintf(excep_log.error_msg, "get_appl_status : Selecting Application status from APPLICATION failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}

	if (0 == appl_stat_ind)
		*appl_status = appl_stat;
	else
		*appl_status = '\0';

	if(0== photocapture_ind)
		*photo_capture = photocapture;
	else
		*photo_capture='\0';

	return SUCCESS;
}

/********************************************************************************/
/* Function name: fetch_txncode													*/
/* Description	: This function fetches the transaction details for the given   */
/*                application id from APPL_TXN table							*/
/* Input		: Application id,Pointer to a structure to store transaction    */											
/*                details, Pointer to variable storing transacttion count       */
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int fetch_txncode(char *application_id, TXN_DETAILS_T** txn_details, int *txn_count,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	int lic_cnt = 0;
	int txn_sr_no = 0;
	char txn_code[TRANSACTION_CODE_SIZE] = {0};
	int txn_type = 0;
	char txn_date[DATE_SIZE] = {0};
	char lic_type[LIC_TYPE_SIZE] = {0};
	char lic_class[LIC_CLS_SIZE] = {0};
	char lic_usage[LIC_USAGE_SIZE] = {0};
	int lic_validity = 0;
	int pay_sr_no = 0;
	int qc_sr_no = 0;
	char qc_flag = 0;
	

	short txn_sr_no_ind = -1;
	short txn_code_ind = -1;
	short txn_type_ind = -1;
	short txn_date_ind = -1;
	short lic_type_ind = -1;
	short lic_class_ind = -1;
	short lic_usage_ind = -1;
	short lic_validity_ind = -1;
	short pay_sr_no_ind = -1;
	short qc_sr_no_ind = -1;
	short qc_flag_ind = -1;

sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	TXN_DETAILS_T *txn_details_orig;
	TXN_DETAILS_T *txn_details_temp ;
	int buffer_size = 0;


	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	/* Populate the variables	*/

	strcpy(appl_id, application_id);

#ifdef DEBUG
	userlog("fetch_txncode : Appl id - %s", appl_id);
#endif

	
	/* EXEC SQL SELECT COUNT(*) INTO :lic_cnt 
		FROM APPL_TXN
	WHERE APPLID = :appl_id
		AND TXNCANCELCODE IS NULL
		AND LEGUPDFLAG IN ('N','X'); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 3;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN where ((APPLID=:b1 \
and TXNCANCELCODE is null ) and LEGUPDFLAG in ('N','X'))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )32;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&lic_cnt;
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

 // included X for IJPN 
		
	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog(" fetch_txncode : Select from APPL_TXN failed : %s", SQLMSG);
	#endif
		strcpy(prog_log.remarks,"fetch_txncode: Select from APPL_TXN failed ");
		sprintf(excep_log.error_msg, "fetch_txncode: Select from APPL_TXN failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}
	else if (0 == lic_cnt )
	{
#ifdef DEBUG
		userlog(" fetch_txncode : No transaction exists for the applicant");
#endif
		strcpy(prog_log.remarks,"fetch_txncode: No transaction exists");
		sprintf(excep_log.error_msg, "fetch_txncode: No transaction exists");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return NO_TXN_EXISTS;

	}
	
#ifdef DEBUG
		userlog(" fetch_txncode : Txn count - %d", lic_cnt);
#endif

	*txn_count = lic_cnt;

	buffer_size = lic_cnt*(sizeof(TXN_DETAILS_T));

	txn_details_orig = (TXN_DETAILS_T *)malloc(buffer_size);

	if (NULL == txn_details_orig)
	{
#ifdef DEBUG
		userlog("fetch_txncode : Allocation of memory for storing transaction details failed");
#endif
		strcpy(prog_log.remarks,"fetch_txncode: Allocation of memory for storing transaction details failed");
		strcpy(excep_log.error_msg, "fetch_txncode: Allocation of memory for storing transaction details failed");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return MALLOC_ERROR;
	}

	*txn_details = txn_details_orig;
	txn_details_temp = txn_details_orig;

#ifdef DEBUG
	userlog("fetch_txncode - %X", *txn_details );
#endif

	/* Declare the cursor for fetching details of all the transactions */

	/* EXEC SQL DECLARE txn_info CURSOR FOR 
	SELECT A.TXNSERNO, A.TXNCODE, A.LICTYPE, A.LICCLASS, A.LICUSAGECODE, A.LICVALIDPERIOD, 
		   A.PAYMSERNO, A.QCSERNO, A.QCFLAG, TO_CHAR(A.TXNDATE, 'DDMMYYYY'), B.TXNTYPE
		FROM APPL_TXN A, TXN_CODE B
		WHERE A.APPLID = :appl_id
			AND A.TXNCANCELCODE IS NULL
			AND A.LEGUPDFLAG = 'N'
			AND B.TXNCODE = A.TXNCODE; */ 



	/* EXEC SQL OPEN txn_info; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 3;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0003;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )55;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
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



	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog(" fetch_txncode : Unable to open cursor for fetching data from APPL_TXN : %s", SQLMSG);
	#endif
		strcpy(prog_log.remarks,"fetch_txncode: Unable to open cursor for fetching data from APPL_TXN");
		sprintf(excep_log.error_msg, "fetch_txncode: Unable to open cursor for fetching data from APPL_TXN : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return CURSOR_OPEN_ERROR;
	}

#ifdef DEBUG
		userlog(" fetch_txncode : Open cursor successfull");
#endif

	for(;; txn_details_temp++)
	{

		/* EXEC SQL FETCH txn_info
			INTO :txn_sr_no:txn_sr_no_ind, :txn_code:txn_code_ind, :lic_type:lic_type_ind, 
				 :lic_class:lic_class_ind, :lic_usage:lic_usage_ind, :lic_validity:lic_validity_ind,
				 :pay_sr_no:pay_sr_no_ind, :qc_sr_no:qc_sr_no_ind, :qc_flag:qc_flag_ind, 
				 :txn_date:txn_date_ind, :txn_type:txn_type_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 11;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )74;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&txn_sr_no;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&txn_sr_no_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)txn_code;
  sqlstm.sqhstl[1] = (unsigned int  )4;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&txn_code_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)lic_type;
  sqlstm.sqhstl[2] = (unsigned int  )4;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&lic_type_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)lic_class;
  sqlstm.sqhstl[3] = (unsigned int  )3;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&lic_class_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)lic_usage;
  sqlstm.sqhstl[4] = (unsigned int  )3;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&lic_usage_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&lic_validity;
  sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&lic_validity_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&pay_sr_no;
  sqlstm.sqhstl[6] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&pay_sr_no_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&qc_sr_no;
  sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&qc_sr_no_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&qc_flag;
  sqlstm.sqhstl[8] = (unsigned int  )1;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&qc_flag_ind;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)txn_date;
  sqlstm.sqhstl[9] = (unsigned int  )9;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)&txn_date_ind;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&txn_type;
  sqlstm.sqhstl[10] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)&txn_type_ind;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
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



		
		if (NO_DATA_FOUND)
		{
			break;
		}
		else if (SQLCODE != 0)
		{
			/* EXEC SQL CLOSE txn_info; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 11;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )133;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



			if (SQLCODE != 0)
			{
#ifdef DEBUG
				userlog(" fetch_txncode : Unable to close cursor for fetching data from APPL_TXN : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"fetch_txncode: Unable to close cursor for fetching data from APPL_TXN");
				sprintf(excep_log.error_msg, "fetch_txncode: Unable to close cursor for fetching data from APPL_TXN : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				free(txn_details_orig);
				return CURSOR_CLOSE_ERROR;
			}

#ifdef DEBUG
			userlog(" fetch_txncode : Unable to fetch data from APPL_TXN : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"fetch_txncode: Unable to fetch data from APPL_TXN");
			sprintf(excep_log.error_msg, "fetch_txncode: Unable to fetch data from APPL_TXN : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			free(txn_details_orig);
			return CURSOR_FETCH_ERROR;
		}

#ifdef DEBUG
		userlog(" fetch_txncode : Fetch cursor successfull");
#endif

		memset(txn_details_temp, '\0', sizeof(TXN_DETAILS_T));

		/* Copy the values into structure */

		if ( 0 ==  txn_sr_no_ind )
			txn_details_temp->txn_sr_no = txn_sr_no	 ;

		if ( 0 == txn_type_ind )
			txn_details_temp->txn_type = txn_type ;


		if ( 0 == lic_validity_ind )
			txn_details_temp->lic_validity =	lic_validity ;

		if ( 0 == pay_sr_no_ind )
			txn_details_temp->pay_sr_no = pay_sr_no	 ;

		if ( 0 == qc_sr_no_ind )
			txn_details_temp->qc_sr_no =	qc_sr_no ;

		if ( 0 == qc_flag_ind )
			txn_details_temp->qc_flag = qc_flag;

		if ( 0 == txn_code_ind )
			strcpy(txn_details_temp->txn_code, txn_code);

		if ( 0 == txn_date_ind )
			strcpy(txn_details_temp->txn_date, txn_date);

		if ( 0 == lic_type_ind )
			strcpy(txn_details_temp->lic_type, lic_type);

		if ( 0 == lic_class_ind )
			strcpy(txn_details_temp->lic_class, lic_class);

		if ( 0 == lic_usage_ind )
			strcpy(txn_details_temp->lic_usage, lic_usage);

#ifdef DEBUG
		userlog("fetch_txncode : Txn ser no - %d", txn_details_temp->txn_sr_no);
		userlog("fetch_txncode : Txn code - %s", txn_details_temp->txn_code);
		userlog("fetch_txncode : Txn type - %d", txn_details_temp->txn_type);
		userlog("fetch_txncode : Lic type - %s", txn_details_temp->lic_type);
		userlog("fetch_txncode : Lic class - %s", txn_details_temp->lic_class);
		userlog("fetch_txncode : Lic usage - %s", txn_details_temp->lic_usage);
		userlog("fetch_txncode : Lic validity - %d", txn_details_temp->lic_validity);
		userlog("fetch_txncode : Payment ser no - %d", txn_details_temp->pay_sr_no);
		userlog("fetch_txncode : QC flag - %c", txn_details_temp->qc_flag);
		userlog("fetch_txncode : QC ser no - %d", txn_details_temp->qc_sr_no);
		userlog("fetch_txncode : Txn date - %s", txn_details_temp->txn_date);
#endif

	}

	/* EXEC SQL CLOSE txn_info; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 11;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )148;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog(" fetch_txncode : Unable to close cursor for fetching data from APPL_TXN : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"fetch_txncode: Unable to close cursor for fetching data from APPL_TXN");
		sprintf(excep_log.error_msg, "fetch_txncode: Unable to close cursor for fetching data from APPL_TXN : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		free(txn_details_orig);
		return CURSOR_CLOSE_ERROR;
	}

	return SUCCESS;
}

/********************************************************************************/
/* Function name: check_dl_info													*/
/* Description	: This function checks whether the license info is present for  */
/*                the given application id in APPLICATION table					*/
/* Input		: Application id,Flag to indicate license info is present or not*/											
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int check_dl_info(char *application_id, char* lic_flag,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	char lic_id_type[ID_TYPE_SIZE] = {0};
	/* varchar lic_id[LIC_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } lic_id
 = {0};

	char owner_cat = 0;
	int lic_cnt = 0;

	short txn_sr_no_ind = -1;
	short lic_id_type_ind = 0;
	short lic_id_ind = 0;
	short owner_cat_ind = -1;

sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	/* Populate the variables	*/

	strcpy(appl_id, application_id);

#ifdef DEBUG
	userlog("check_dl_info : Appl id - %s", appl_id);
#endif

	
	/* EXEC SQL SELECT LICIDTYPE, LICIDNO, OWNERCAT INTO :lic_id_type:lic_id_type_ind, 
				:lic_id:lic_id_ind, :owner_cat:owner_cat_ind FROM APPLICATION
			WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 11;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select LICIDTYPE ,LICIDNO ,OWNERCAT into :b0:b1,:b2:b3,:b4:b\
5  from APPLICATION where APPLID=:b6";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )163;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)lic_id_type;
 sqlstm.sqhstl[0] = (unsigned int  )3;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&lic_id_type_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&lic_id;
 sqlstm.sqhstl[1] = (unsigned int  )18;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&lic_id_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&owner_cat;
 sqlstm.sqhstl[2] = (unsigned int  )1;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&owner_cat_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)appl_id;
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


		
	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog(" check_dl_info : Select from APPLICATION failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"check_dl_info: Select from APPLICATION failed ");
		sprintf(excep_log.error_msg, "check_dl_info: Select from APPLICATION failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}

	if (0 == lic_id_ind && 0 == owner_cat_ind )
	{
		setnull(lic_id);

#ifdef DEBUG
		userlog("check_dl_info : Lic id - %s", lic_id.arr);
		userlog("check_dl_info : Owner cat  - %c", owner_cat);
#endif

		/* EXEC SQL SELECT COUNT(*) INTO :lic_cnt FROM JPJ_INFO
			WHERE LICIDNO = :lic_id:lic_id_ind
			AND   OWNERCAT = :owner_cat:owner_cat_ind 
			AND EXISTS( SELECT 'X' FROM JPJ_LIC_INFO WHERE
			LICIDNO = :lic_id:lic_id_ind
			AND   OWNERCAT = :owner_cat:owner_cat_ind) ; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 11;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from JPJ_INFO where ((LICIDNO=:b\
1:b2 and OWNERCAT=:b3:b4) and exists (select 'X'  from JPJ_LIC_INFO where (LIC\
IDNO=:b1:b6 and OWNERCAT=:b3:b8)))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )194;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&lic_cnt;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&lic_id;
  sqlstm.sqhstl[1] = (unsigned int  )18;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&lic_id_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&owner_cat;
  sqlstm.sqhstl[2] = (unsigned int  )1;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&owner_cat_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&lic_id;
  sqlstm.sqhstl[3] = (unsigned int  )18;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&lic_id_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&owner_cat;
  sqlstm.sqhstl[4] = (unsigned int  )1;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&owner_cat_ind;
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



		if (SQLCODE != 0)
		{
#ifdef DEBUG
			userlog(" check_dl_info : Select from JPJ_INFO failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"check_dl_info: Select from JPJ_INFO failed ");
			sprintf(excep_log.error_msg, "check_dl_info: Select from JPJ_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}
	}

/*	if (0 == lic_id_type_ind && 0 == lic_id_ind )
	{
		setnull(lic_id);

#ifdef DEBUG
		userlog("check_dl_info : Lic id type - %s", lic_id_type);
		userlog("check_dl_info : Lic id - %s", lic_id.arr);
#endif

		*lic_flag = YES;
	}
*/

#ifdef DEBUG
		userlog("check_dl_info : Lic count - %d", lic_cnt);
#endif

	if (0 < lic_cnt)
	{
		*lic_flag = YES;
	}
	else
		*lic_flag = NO;

	return SUCCESS;
}

/********************************************************************************/
/* Function name: check_pp_info													*/
/* Description	: This function checks whether the passport info is present for */
/*                the given KPT no in IMM_INFO table							*/
/* Input		: KPT no,Flag to indicate passport info is present or not		*/											
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int check_pp_info(char *kptno, char* passport_flag,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char kpt_no[KPT_SIZE] = {0};
	int count = 0;
	
	short kpt_no_ind = -1;
	
sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	/* Populate the variables	*/

	strcpy(kpt_no, kptno);

	if (0 != strcmp(kpt_no, ""))
		kpt_no_ind = 0;

#ifdef DEBUG
	userlog("check_pp_info : KPT no - %s", kpt_no);
#endif

	
	/* EXEC SQL SELECT COUNT(*) INTO :count FROM IMM_INFO
		WHERE KPTNO = :kpt_no:kpt_no_ind; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 11;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from IMM_INFO where KPTNO=:b1:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )229;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&count;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)kpt_no;
 sqlstm.sqhstl[1] = (unsigned int  )13;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&kpt_no_ind;
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
		userlog(" check_pp_info : Select from IMM_INFO failed : %s", SQLMSG);
	#endif
		strcpy(prog_log.remarks,"check_pp_info: Select from IMM_INFO failed ");
		sprintf(excep_log.error_msg, "check_pp_info: Select from IMM_INFO failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}

#ifdef DEBUG
	userlog("check_pp_info : Passport count - %d", count);
#endif
	
		if (0 < count)
			*passport_flag = YES;
		else
			*passport_flag = NO;
	

	return SUCCESS;
}


/********************************************************************************/
/* Function name: get_afis_flag													*/
/* Description	: This function gets the Afis flag for the applicant's KPT no   */
/*                from JPN_INFO table											*/
/* Input		: Applicant's KPT, Pointer to variable in which Afis flag is to */
/*                be populated													*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int get_afis_flag(char *kpt_no, char *afis_flag,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char kptno[KPT_SIZE] = {0};
	char afisflag = 0;
	
	short afisflag_ind = -1;
sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	/* Populate the variables	*/

	strcpy(kptno, kpt_no);

#ifdef DEBUG
	userlog("get_afis_flag : KPT no - %s", kptno);
#endif

	
	/* EXEC SQL SELECT AFISFLAG INTO :afisflag:afisflag_ind
			FROM JPN_INFO
		WHERE KPTNO = :kptno ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 11;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select AFISFLAG into :b0:b1  from JPN_INFO where KPTNO=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )252;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&afisflag;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&afisflag_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)kptno;
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
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


		
	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("get_afis_flag : Select from JPN_INFO failed for KPT %s: %s", kptno, SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_afis_flag: Select from JPN_INFO failed ");
		sprintf(excep_log.error_msg, "get_afis_flag: Select from JPN_INFO failed for KPT %s : %s", kptno, SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}


	if ( 0 == afisflag_ind )
	{
#ifdef DEBUG
		userlog("get_afis_flag : Afis flag - %c", afisflag);
#endif
		*afis_flag = afisflag;
	}
	
	return SUCCESS;
}

/********************************************************************************/
/* Function name: insert_into_afis_refire													*/
/* Description	: This function Inserts record to refire AFIS during recovery   */
/* Input		: Applicant's KPTNO & APPLID									*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_into_afis_refire(char *appl_id,char *kpt_no,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char kptno[KPT_SIZE] = {0};
	char applid[APP_ID_SIZE] = {0};	

sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	/* Populate the variables	*/

	strcpy(applid,appl_id);
	strcpy(kptno, kpt_no);

#ifdef DEBUG
	userlog("insert_into_afis_refire : applid - %s", applid);
	userlog("insert_into_afis_refire : kptno - %s", kptno);
#endif

	/* EXEC SQL INSERT INTO APPL_REFIRE_AFIS(APPLID, KPTNO, TIMESTAMP, REFIREFLAG, APPLSTAT)
		VALUES(:applid,:kptno,SYSDATE,'N','A'); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 11;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into APPL_REFIRE_AFIS (APPLID,KPTNO, timestamp ,REFIR\
EFLAG,APPLSTAT) values (:b0,:b1,SYSDATE,'N','A')";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )275;
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
 sqlstm.sqhstv[1] = (         void  *)kptno;
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
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



	userlog("insert_into_afis_refire : sqlca.sqlcode : %d",sqlca.sqlcode);

		if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("insert_into_afis_refire : Insert into APPL_REFIRE_AFIS failed");
#endif
		strcpy(prog_log.remarks,"insert_into_afis_refire: Insert into APPL_REFIRE_AFIS failed");
		sprintf(excep_log.error_msg, "insert_into_afis_refire : Insert into APPL_REFIRE_AFIS failed for KPT %s : %s", kptno, SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return INSERT_ERROR;
	}

		return SUCCESS;
}



/********************************************************************************/
/* Function name: insert_into_card_blacklist									*/
/* Description	: This function blacklists the Active card of the applicant, if */
/*                he/she comes for the transaction 'Replacement due to loss'	*/
/* Input		: Pointer to dmeogrpahic buffer, Pointer to request buffer of   */
/*                the service													*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_into_card_blacklist(CREATE_APPLNT_REQ_T *req, APPNT_JPN_INFO_T *applnt,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char kpt_no[KPT_SIZE] = {0};
	int card_ver_no = 0;
	/* varchar gmpc_short_name1[GMPC_SNAME1_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } gmpc_short_name1
 = {0};

	/* varchar gmpc_short_name2[GMPC_SNAME2_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } gmpc_short_name2
 = {0};

	/* varchar gmpc_short_name3[GMPC_SNAME3_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } gmpc_short_name3
 = {0};

	char card_bl_code[CARD_BL_CODE_SIZE] = {0};
	/* varchar card_srno[CARDSRNO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[19]; } card_srno
 = {0};

	/* varchar user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id
 = {0};

	char branch_code[BRANCH_CODE_SIZE] = {0};
	int card_stat = 0;

	char card_coll_center[BRANCH_CODE_SIZE] = {0};
	char card_personal_date[DATE_SIZE] = {0};
	char card_coll_date[DATE_SIZE] = {0};
	/* varchar old_user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } old_user_id
 = {0};

	char old_branch_code[BRANCH_CODE_SIZE] = {0};
	/* varchar old_wsid[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } old_wsid
 = {0};

	char old_timestamp[DATE_TIME_SIZE] = {0};
	int old_card_stat = 0;
	/* varchar ag_on_chip[AGENCY_ON_CHIP_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } ag_on_chip
 = {0};

	char wrong_batchno[BATCH_NO_SIZE] = {0};	

	short card_coll_center_ind = -1;
	short card_ver_no_ind = -1;
	short gmpc_short_name1_ind = -1;
	short gmpc_short_name2_ind = -1;
	short gmpc_short_name3_ind = -1;
	short card_bl_code_ind = -1;
	short card_srno_ind = -1;
	short kpt_no_ind = -1;
	short user_id_ind = -1;
	short branch_code_ind = -1;
	short card_stat_ind = -1;

	short card_personal_date_ind = -1;
	short card_coll_date_ind = -1;
	short old_user_id_ind = -1;
	short old_branch_code_ind = -1;
	short old_wsid_ind = -1;
	short old_timestamp_ind = -1;
	short old_card_stat_ind = -1;	
	short ag_on_chip_ind = -1;
	short wrong_batchno_ind = -1;	

	
sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int ret_code = 0;
	int card_version = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	
	/* Populate the variables	*/

	if (0 != strcmp(req->kpt_no, ""))
	{
		strcpy(kpt_no, req->kpt_no);	
		kpt_no_ind  = 0;
	}

//	card_stat = ACTIVE; Commented on 10/05/2007
//	card_stat_ind = 0;
	
#ifdef DEBUG
	userlog("insert_into_card_blacklist : KPT no - %s", kpt_no);
	userlog("insert_into_card_blacklist : Card status - %d", card_stat);
#endif

	/* EXEC SQL SELECT C.CARDVERSIONNO,  C.CARDSTAT, C.CHIPSERNO, 
					A.COLLCENTER,
					TO_CHAR(A.CARDCOLLDATE,'DDMMYYYY'), 
					TO_CHAR(C.CARDPERSONALDATE,'DDMMYYYY'),
					C.USERID, C.WSID, 
					TO_CHAR(C.TIMESTAMP,'DDMMYYYY HH24MISS'),
					C.BRANCHCODE,	C.AGENCYONCHIP, C.WRONGBATCHNO
			INTO :card_ver_no:card_ver_no_ind, 
				 :old_card_stat:old_card_stat_ind,
				 :card_srno:card_srno_ind,
				 :card_coll_center:card_coll_center_ind,
				 :card_coll_date:card_coll_date_ind,
				 :card_personal_date:card_personal_date_ind,
				 :old_user_id:old_user_id_ind,
				 :old_wsid:old_wsid_ind,
				 :old_timestamp:old_timestamp_ind,
				 :old_branch_code:old_branch_code_ind,
				 :ag_on_chip:ag_on_chip_ind,
				 :wrong_batchno:wrong_batchno_ind
			FROM CARD_STATUS C, APPLICATION A
			WHERE C.APPLID = A.APPLID
			  AND C.KPTNO = :kpt_no:kpt_no_ind 
			  AND C.CARDSTAT IN (11,14,16,17) //:card_stat:card_stat_ind
			  AND C.CARDVERSIONNO = 
				  (SELECT MAX(CARDVERSIONNO)-1 FROM CARD_STATUS 
				     WHERE KPTNO = :kpt_no:kpt_no_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select C.CARDVERSIONNO ,C.CARDSTAT ,C.CHIPSERNO ,A.COLLCENTE\
R ,TO_CHAR(A.CARDCOLLDATE,'DDMMYYYY') ,TO_CHAR(C.CARDPERSONALDATE,'DDMMYYYY') \
,C.USERID ,C.WSID ,TO_CHAR(C. timestamp ,'DDMMYYYY HH24MISS') ,C.BRANCHCODE ,C\
.AGENCYONCHIP ,C.WRONGBATCHNO into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11\
,:b12:b13,:b14:b15,:b16:b17,:b18:b19,:b20:b21,:b22:b23  from CARD_STATUS C ,AP\
PLICATION A where (((C.APPLID=A.APPLID and C.KPTNO=:b24:b25) and C.CARDSTAT in\
 (11,14,16,17)) and C.CARDVERSIONNO=(select (max(CARDVERSIONNO)-1)  from CARD_\
STATUS where KPTNO=:b24:b27))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )298;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&card_ver_no;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&card_ver_no_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&old_card_stat;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&old_card_stat_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&card_srno;
 sqlstm.sqhstl[2] = (unsigned int  )21;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&card_srno_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)card_coll_center;
 sqlstm.sqhstl[3] = (unsigned int  )7;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&card_coll_center_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)card_coll_date;
 sqlstm.sqhstl[4] = (unsigned int  )9;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&card_coll_date_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)card_personal_date;
 sqlstm.sqhstl[5] = (unsigned int  )9;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&card_personal_date_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&old_user_id;
 sqlstm.sqhstl[6] = (unsigned int  )11;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&old_user_id_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&old_wsid;
 sqlstm.sqhstl[7] = (unsigned int  )18;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&old_wsid_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)old_timestamp;
 sqlstm.sqhstl[8] = (unsigned int  )16;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&old_timestamp_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)old_branch_code;
 sqlstm.sqhstl[9] = (unsigned int  )7;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&old_branch_code_ind;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&ag_on_chip;
 sqlstm.sqhstl[10] = (unsigned int  )11;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)&ag_on_chip_ind;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)wrong_batchno;
 sqlstm.sqhstl[11] = (unsigned int  )23;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)&wrong_batchno_ind;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)kpt_no;
 sqlstm.sqhstl[12] = (unsigned int  )13;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)&kpt_no_ind;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)kpt_no;
 sqlstm.sqhstl[13] = (unsigned int  )13;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)&kpt_no_ind;
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

    // Added this condition on 10/05/2007
			  //AND C.CARDSTAT = :card_stat:card_stat_ind; // commented on 10/05/2007

	if (SQLCODE != 0 && !NO_DATA_FOUND)
	{
#ifdef DEBUG
		userlog("insert_into_card_blacklist : Select from CARD_STATUS failed for KPT %s: %s", kpt_no, SQLMSG);
#endif
		strcpy(prog_log.remarks,"insert_into_card_blacklist: Select from CARD_STATUS failed ");
		sprintf(excep_log.error_msg, "insert_into_card_blacklist: Select from CARD_STATUS failed for KPT %s : %s", kpt_no, SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}
	else if (NO_DATA_FOUND)
	{
#ifdef DEBUG
		//userlog("insert_into_card_blacklist : No Active card exists for the applicant");
		userlog("insert_into_card_blacklist : No Active card exists for the applicant %s: %s", kpt_no, SQLMSG);
		userlog("insert_into_card_blacklist : card_coll_date - %s", card_coll_date);
		userlog("insert_into_card_blacklist : card_coll_center - %s", card_coll_center);

#endif
		strcpy(prog_log.remarks,"insert_into_card_blacklist: No Active card exists for the applicant");
		strcpy(excep_log.error_msg, "insert_into_card_blacklist: No Active card exists for the applicant");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);

		return NO_ACTIVE_CARD;
	}

	setnull(card_srno);
	setnull(old_wsid);
	setnull(old_user_id);
	setnull(ag_on_chip);
		
#ifdef DEBUG
	userlog("insert_into_card_blacklist : Data selected from CARD_STATUS");
	userlog("insert_into_card_blacklist : Chip sr no - %s", card_srno.arr);
	userlog("insert_into_card_blacklist : Card version - %d", card_ver_no);
	userlog("insert_into_card_blacklist : card_coll_center - %s", card_coll_center);
	userlog("insert_into_card_blacklist : card_coll_date - %s", card_coll_date);
	userlog("insert_into_card_blacklist : card_personal_date - %s", card_personal_date);	
	userlog("insert_into_card_blacklist : old_user_id - %s", old_user_id.arr);
	userlog("insert_into_card_blacklist : old_wsid - %s", old_wsid.arr);
	userlog("insert_into_card_blacklist : old_timestamp - %s", old_timestamp);
	userlog("insert_into_card_blacklist : old_branch_code - %s", old_branch_code);
	userlog("insert_into_card_blacklist : ag_on_chip - %s", ag_on_chip.arr);
	userlog("insert_into_card_blacklist : wrong_batchno - %s", wrong_batchno);

#endif

	/* Populate the host variables */

	if (0 != strcmp(applnt->name.gmpc_short_name1, ""))
	{
		strcpy(gmpc_short_name1.arr, applnt->name.gmpc_short_name1);
		gmpc_short_name1_ind = 0;
		setlen(gmpc_short_name1);
	}

	if (0 != strcmp(applnt->name.gmpc_short_name2, ""))
	{
		strcpy(gmpc_short_name2.arr, applnt->name.gmpc_short_name2);
		gmpc_short_name2_ind = 0;
		setlen(gmpc_short_name2);
	}

	if (0 != strcmp(applnt->name.gmpc_short_name3, ""))
	{
		strcpy(gmpc_short_name3.arr, applnt->name.gmpc_short_name3);
		gmpc_short_name3_ind = 0;
		setlen(gmpc_short_name3);
	}

	if (0 != strcmp(req->create_user_id, ""))
	{
		strcpy(user_id.arr, req->create_user_id);
		user_id_ind = 0;
		setlen(user_id);
	}

	if (0 != strcmp(req->header.branch_code, ""))
	{
		strcpy(branch_code, req->header.branch_code);
		branch_code_ind = 0;
	}

	
	_itoa(BL_CARD_LOST, card_bl_code, 10);
	card_bl_code_ind = 0;
	


#ifdef DEBUG
	userlog("insert_into_card_blacklist : GMPC short name1 - %s", gmpc_short_name1.arr);
	userlog("insert_into_card_blacklist : GMPC short name2 - %s", gmpc_short_name2.arr);
	userlog("insert_into_card_blacklist : GMPC short name3 - %s", gmpc_short_name3.arr);
	userlog("insert_into_card_blacklist : User id - %s", user_id.arr);
	userlog("insert_into_card_blacklist : Card BL code - %s", card_bl_code);
	userlog("insert_into_card_blacklist : Branch code - %s", branch_code);
#endif

	/* EXEC SQL INSERT INTO CARD_BLACKLIST (CHIPSERNO, GMPCSHORTNAME1, GMPCSHORTNAME2,
									GMPCSHORTNAME3, KPTNO, CARDVERSIONNO, CREATEDATE,
									BRANCHCODE, USERID, CARDBLCODE, CARDBLDATE)
		VALUES (:card_srno:card_srno_ind, :gmpc_short_name1:gmpc_short_name1_ind, 
		:gmpc_short_name2:gmpc_short_name2_ind, :gmpc_short_name3:gmpc_short_name3_ind,
		:kpt_no:kpt_no_ind, :card_ver_no:card_ver_no_ind,
		TO_DATE(TO_CHAR(SYSDATE, 'DDMMYYYY HH24MISS'), 'DDMMYYYY HH24MISS'),
		:branch_code:branch_code_ind, :user_id:user_id_ind, :card_bl_code:card_bl_code_ind,
		TO_DATE(TO_CHAR(SYSDATE, 'DDMMYYYY HH24MISS'), 'DDMMYYYY HH24MISS')); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into CARD_BLACKLIST (CHIPSERNO,GMPCSHORTNAME1,GMPCSHO\
RTNAME2,GMPCSHORTNAME3,KPTNO,CARDVERSIONNO,CREATEDATE,BRANCHCODE,USERID,CARDBL\
CODE,CARDBLDATE) values (:b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11,TO_DATE(T\
O_CHAR(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS'),:b12:b13,:b14:b15,:b1\
6:b17,TO_DATE(TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS'))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )369;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&card_srno;
 sqlstm.sqhstl[0] = (unsigned int  )21;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&card_srno_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&gmpc_short_name1;
 sqlstm.sqhstl[1] = (unsigned int  )33;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&gmpc_short_name1_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&gmpc_short_name2;
 sqlstm.sqhstl[2] = (unsigned int  )33;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&gmpc_short_name2_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&gmpc_short_name3;
 sqlstm.sqhstl[3] = (unsigned int  )23;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&gmpc_short_name3_ind;
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
 sqlstm.sqhstv[5] = (         void  *)&card_ver_no;
 sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&card_ver_no_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)branch_code;
 sqlstm.sqhstl[6] = (unsigned int  )7;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&branch_code_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&user_id;
 sqlstm.sqhstl[7] = (unsigned int  )11;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&user_id_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)card_bl_code;
 sqlstm.sqhstl[8] = (unsigned int  )3;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&card_bl_code_ind;
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



		if(SQLCODE != 0 && SQLCODE != -1)	/* Ignore the unique constraint violation error */
		{
		#ifdef DEBUG
			userlog(" insert_into_card_blacklist : Insert into CARD_BLACKLIST failed : %s", SQLMSG);
		#endif
			//strcpy(prog_log.remarks,"insert_into_card_blacklist: Insert into CARD_BLACKLIST failed");
			//sprintf(excep_log.error_msg, "insert_into_card_blacklist: Insert into CARD_BLACKLIST failed : %s", SQLMSG);
			//excep_log.termination_flag = YES;
			//excep_log.severity = FATAL;

			//log_error(ctx);
			
			//return INSERT_ERROR;
		}

		if(sqlca.sqlcode == 0)
		{
		#ifdef DEBUG
			userlog("insert_into_card_blacklist : Record inserted successfully");
		#endif
		}
		else
		{
		#ifdef DEBUG
			userlog("insert_into_card_blacklist : Record not inserted into CARD_BLACKLIST, But the process is continuing");
		#endif
		}


		if (SQLCODE == 0)	/* If record is successfully inserted into CARD_BLACKLIST */
		{
		/* Insert a record with new card status in CARD_HISTORY table */
		/* Code from insert_into_card_history function moved here - 06/03/2001 */

		/* EXEC SQL INSERT INTO CARD_HISTORY (KPTNO, CARDVERSIONNO, CARDSTAT, 
											COLLCENTER, CARDCOLLDATE, 
											CARDPERSONALDATE, USERID, WSID, 
											TIMESTAMP, BRANCHCODE, AGENCYONCHIP, 
											WRONGBATCHNO)
				 VALUES (:kpt_no:kpt_no_ind, :card_ver_no:card_ver_no_ind,:old_card_stat:old_card_stat_ind, 
						 :card_coll_center:card_coll_center_ind,
						 to_date(:card_coll_date:card_coll_date_ind,'DDMMYYYY'),
						 to_date(:card_personal_date:card_personal_date_ind,'DDMMYYYY HH24MISS'),
						 :old_user_id:old_user_id_ind, :old_wsid:old_wsid_ind, 
						 to_date(:old_timestamp:old_timestamp_ind,'DDMMYYYY HH24MISS'),
						 :old_branch_code:old_branch_code_ind,
						 :ag_on_chip:ag_on_chip_ind,
						 :wrong_batchno:wrong_batchno_ind); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into CARD_HISTORY (KPTNO,CARDVERSIONNO,CARDSTAT,COLL\
CENTER,CARDCOLLDATE,CARDPERSONALDATE,USERID,WSID, timestamp ,BRANCHCODE,AGENCY\
ONCHIP,WRONGBATCHNO) values (:b0:b1,:b2:b3,:b4:b5,:b6:b7,to_date(:b8:b9,'DDMMY\
YYY'),to_date(:b10:b11,'DDMMYYYY HH24MISS'),:b12:b13,:b14:b15,to_date(:b16:b17\
,'DDMMYYYY HH24MISS'),:b18:b19,:b20:b21,:b22:b23)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )420;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)kpt_no;
  sqlstm.sqhstl[0] = (unsigned int  )13;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&kpt_no_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&card_ver_no;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&card_ver_no_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&old_card_stat;
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&old_card_stat_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)card_coll_center;
  sqlstm.sqhstl[3] = (unsigned int  )7;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&card_coll_center_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)card_coll_date;
  sqlstm.sqhstl[4] = (unsigned int  )9;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&card_coll_date_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)card_personal_date;
  sqlstm.sqhstl[5] = (unsigned int  )9;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&card_personal_date_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&old_user_id;
  sqlstm.sqhstl[6] = (unsigned int  )11;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&old_user_id_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&old_wsid;
  sqlstm.sqhstl[7] = (unsigned int  )18;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&old_wsid_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)old_timestamp;
  sqlstm.sqhstl[8] = (unsigned int  )16;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&old_timestamp_ind;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)old_branch_code;
  sqlstm.sqhstl[9] = (unsigned int  )7;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)&old_branch_code_ind;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&ag_on_chip;
  sqlstm.sqhstl[10] = (unsigned int  )11;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)&ag_on_chip_ind;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)wrong_batchno;
  sqlstm.sqhstl[11] = (unsigned int  )23;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)&wrong_batchno_ind;
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



			if(SQLCODE != 0)
			{
#ifdef DEBUG
				userlog(" insert_into_card_blacklist : Insert into CARD_HISTORY failed : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"insert_into_card_blacklist: Insert into CARD_HISTORY failed");
				sprintf(excep_log.error_msg, "insert_into_card_blacklist: Insert into CARD_HISTORY failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return INSERT_ERROR;
			}

#ifdef DEBUG
			userlog("insert_into_card_blacklist : Record inserted successfully into card history");
#endif
		

			/* Update status of the card in CARD_STATUS table */

			if (SUCCESS != (ret_code = update_card_status(req,ctx)))
			{
#ifdef DEBUG
				userlog("insert_into_card_blacklist : update_card_status() failed with %d", ret_code);
#endif
				return ret_code;
			}

		}

	return SUCCESS;

}

/********************************************************************************/
/* Function name: update_card_status											*/
/* Description	: This function updates the status of Active card in            */
/*				  CARD_STATUS table to 'Lost'									*/
/* Input		: Pointer to request buffer of the service						*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int update_card_status(CREATE_APPLNT_REQ_T *req,void * ctx)
{
struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char kpt_no[KPT_SIZE] = {0};
	int card_stat = 0;
	int card_active = 0;
	/* varchar user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id
 = {0};

	char branch_code[BRANCH_CODE_SIZE] = {0};
	/* varchar ws_id[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } ws_id
 = {0};

	int lcversion=0;

	short card_stat_ind = -1;
	short card_active_ind = -1;
	short user_id_ind = -1;
	short branch_code_ind = -1;
	short ws_id_ind = -1;
	short kpt_no_ind = -1;
	
	
sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int ret_code = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	
	/* Populate the host variables	*/

	if (0 != strcmp(req->kpt_no, ""))
	{
		strcpy(kpt_no, req->kpt_no);	
		kpt_no_ind  = 0;
	}

	card_stat = LOST;
	card_stat_ind = 0;

	//card_active = ACTIVE; commented on 10/05/2007 
	//card_active_ind = 0;
	
#ifdef DEBUG
	userlog("update_card_status : KPT no - %s", kpt_no);
	userlog("update_card_status : Card status - %d", card_stat);
	userlog("update_card_status : Card active - %d", card_active);
#endif

	if (0 != strcmp(req->create_user_id, ""))
	{
		strcpy(user_id.arr, req->create_user_id);
		user_id_ind = 0;
		setlen(user_id);
	}

	if (0 != strcmp(req->create_ws_id, ""))
	{
		strcpy(ws_id.arr, req->create_ws_id);
		ws_id_ind = 0;
		setlen(ws_id);
	}

	if (0 != strcmp(req->header.branch_code, ""))
	{
		strcpy(branch_code, req->header.branch_code);
		branch_code_ind = 0;
	}

#ifdef DEBUG
	userlog("update_card_status : User id - %s", user_id.arr);
	userlog("update_card_status : WS id - %s", ws_id.arr);
	userlog("update_card_status : Branch code - %s", branch_code);
#endif

	/* This piece of code is included for IJPN 10/8/2005 */
	/* EXEC SQL SELECT MAX(CARDVERSIONNO)-1 INTO :lcversion 
	FROM CARD_STATUS 
	WHERE KPTNO = :kpt_no:kpt_no_ind; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select (max(CARDVERSIONNO)-1) into :b0  from CARD_STATUS whe\
re KPTNO=:b1:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )483;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&lcversion;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)kpt_no;
 sqlstm.sqhstl[1] = (unsigned int  )13;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&kpt_no_ind;
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


	//AND CARDSTAT = :card_active:card_active_ind;


	/* EXEC SQL UPDATE CARD_STATUS
		SET CARDSTAT = :card_stat:card_stat_ind,
			USERID = :user_id:user_id_ind ,
			TIMESTAMP = TO_DATE(TO_CHAR(SYSDATE, 'DDMMYYYY HH24MISS'), 'DDMMYYYY HH24MISS') ,
			BRANCHCODE = :branch_code:branch_code_ind,
			WSID = :ws_id:ws_id_ind
		WHERE KPTNO = :kpt_no:kpt_no_ind
			AND CARDSTAT IN ('11','14','16','17'); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update CARD_STATUS  set CARDSTAT=:b0:b1,USERID=:b2:b3, times\
tamp =TO_DATE(TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS'),BRANCH\
CODE=:b4:b5,WSID=:b6:b7 where (KPTNO=:b8:b9 and CARDSTAT in ('11','14','16','1\
7'))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )506;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&card_stat;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&card_stat_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&user_id;
 sqlstm.sqhstl[1] = (unsigned int  )11;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&user_id_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)branch_code;
 sqlstm.sqhstl[2] = (unsigned int  )7;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&branch_code_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&ws_id;
 sqlstm.sqhstl[3] = (unsigned int  )18;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&ws_id_ind;
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

 // Added this on 10/05/2007
		  //AND CARDSTAT = :card_active:card_active_ind; commented this on 10/05/2007
		
		if(SQLCODE != 0)
		{
#ifdef DEBUG
			userlog(" update_card_status : Updation on CARD_STATUS failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"update_card_status: Updation on CARD_STATUS failed");
			sprintf(excep_log.error_msg, "update_card_status: Updation on CARD_STATUS failed : %s", SQLMSG);
			//excep_log.termination_flag = YES;
			//excep_log.severity = FATAL;

			log_error(ctx);
			
			//return UPDATE_ERROR;
		}

		/* This piece of code is included for IJPN 10/8/2005 */
		/* EXEC SQL DELETE FROM CLMS_CARD_STAT_UPD 
			WHERE KPTNO = :kpt_no:kpt_no_ind
		  AND CARDSTATUS = 17
		  AND CARDVERSIONNO = :lcversion; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "delete  from CLMS_CARD_STAT_UPD  where ((KPTNO=:b0:b1 and C\
ARDSTATUS=17) and CARDVERSIONNO=:b2)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )541;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)kpt_no;
  sqlstm.sqhstl[0] = (unsigned int  )13;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&kpt_no_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&lcversion;
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



		/* This piece of code is included for IJPN 10/8/2005 */
		/* EXEC SQL INSERT INTO CLMS_CARD_STAT_UPD(KPTNO, CARDVERSIONNO, 
		CARDSTATUS, UPDFLAG, TIMESTAMP, USERID, WSID)
		VALUES(:kpt_no:kpt_no_ind,:lcversion,17,'N',SYSDATE,
		:user_id:user_id_ind, :ws_id:ws_id_ind); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into CLMS_CARD_STAT_UPD (KPTNO,CARDVERSIONNO,CARDSTA\
TUS,UPDFLAG, timestamp ,USERID,WSID) values (:b0:b1,:b2,17,'N',SYSDATE,:b3:b4,\
:b5:b6)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )564;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)kpt_no;
  sqlstm.sqhstl[0] = (unsigned int  )13;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&kpt_no_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&lcversion;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&user_id;
  sqlstm.sqhstl[2] = (unsigned int  )11;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&user_id_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&ws_id;
  sqlstm.sqhstl[3] = (unsigned int  )18;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&ws_id_ind;
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
		userlog("update_card_status : Record updated successfully");
#endif

	return SUCCESS;
}


/********************************************************************************/
/* Function name: update_card_status											*/
/* Description	: This function updates the status of Active card in            */
/*				  CARD_STATUS table to 'Lost'									*/
/* Input		: Pointer to request buffer of the service						*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int update_cardstatus_to_retained(CREATE_APPLNT_REQ_T *req,void * ctx)
{
struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char kpt_no[KPT_SIZE] = {0};
	int card_stat = 0;
	int card_active = 0;
	/* varchar user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id
 = {0};

	char branch_code[BRANCH_CODE_SIZE] = {0};
	/* varchar ws_id[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } ws_id
 = {0};

	int lcversion=0;
	int doccnt=0;
	char applid[APP_ID_SIZE] = {0};

	short card_stat_ind = -1;
	short card_active_ind = -1;
	short user_id_ind = -1;
	short branch_code_ind = -1;
	short ws_id_ind = -1;
	short kpt_no_ind = -1;
	
	
sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int ret_code = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	
	/* Populate the host variables	*/

	if (0 != strcmp(req->kpt_no, ""))
	{
		strcpy(kpt_no, req->kpt_no);	
		kpt_no_ind  = 0;
	}

	card_stat = RETAINED_REPLACE;
	card_stat_ind = 0;

	//card_active = ACTIVE; commented on 10/05/2007 
	//card_active_ind = 0;

	strcpy(applid,req->header.application_id);
	
#ifdef DEBUG
	userlog("update_cardstatus_to_retained : KPT no - %s", kpt_no);
	userlog("update_cardstatus_to_retained : applid - %s", applid);
	userlog("update_cardstatus_to_retained : Card status - %d", card_stat);
	userlog("update_cardstatus_to_retained : Card active - %d", card_active);
#endif

	if (0 != strcmp(req->create_user_id, ""))
	{
		strcpy(user_id.arr, req->create_user_id);
		user_id_ind = 0;
		setlen(user_id);
	}

	if (0 != strcmp(req->create_ws_id, ""))
	{
		strcpy(ws_id.arr, req->create_ws_id);
		ws_id_ind = 0;
		setlen(ws_id);
	}

	if (0 != strcmp(req->header.branch_code, ""))
	{
		strcpy(branch_code, req->header.branch_code);
		branch_code_ind = 0;
	}

#ifdef DEBUG
	userlog("update_cardstatus_to_retained : User id - %s", user_id.arr);
	userlog("update_cardstatus_to_retained : WS id - %s", ws_id.arr);
	userlog("update_cardstatus_to_retained : Branch code - %s", branch_code);
#endif

// This code is commented on 26/05/2008, the check is included at the function calling using "summons_pay_ind"
//	doccnt=0;
//	EXEC SQL SELECT COUNT(*) INTO :doccnt FROM APPL_DOC_SERNO
//		WHERE APPLID = :applid;

//#ifdef DEBUG
//	userlog("update_cardstatus_to_retained : doccnt - %d", doccnt);
//#endif

//	if(doccnt > 0)
//	{

	/* This piece of code is included for IJPN 10/8/2005 */
	/* EXEC SQL SELECT MAX(CARDVERSIONNO)-1 INTO :lcversion 
	FROM CARD_STATUS 
	WHERE KPTNO = :kpt_no:kpt_no_ind; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select (max(CARDVERSIONNO)-1) into :b0  from CARD_STATUS whe\
re KPTNO=:b1:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )595;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&lcversion;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)kpt_no;
 sqlstm.sqhstl[1] = (unsigned int  )13;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&kpt_no_ind;
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


	//AND CARDSTAT = :card_active:card_active_ind;


	/* EXEC SQL UPDATE CARD_STATUS
		SET CARDSTAT = :card_stat:card_stat_ind,
			USERID = :user_id:user_id_ind ,
			TIMESTAMP = TO_DATE(TO_CHAR(SYSDATE, 'DDMMYYYY HH24MISS'), 'DDMMYYYY HH24MISS') ,
			BRANCHCODE = :branch_code:branch_code_ind,
			WSID = :ws_id:ws_id_ind
		WHERE KPTNO = :kpt_no:kpt_no_ind
			AND CARDSTAT IN ('11','14','16','17','20','30','31','32','33','34','7'); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update CARD_STATUS  set CARDSTAT=:b0:b1,USERID=:b2:b3, times\
tamp =TO_DATE(TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS'),BRANCH\
CODE=:b4:b5,WSID=:b6:b7 where (KPTNO=:b8:b9 and CARDSTAT in ('11','14','16','1\
7','20','30','31','32','33','34','7'))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )618;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&card_stat;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&card_stat_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&user_id;
 sqlstm.sqhstl[1] = (unsigned int  )11;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&user_id_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)branch_code;
 sqlstm.sqhstl[2] = (unsigned int  )7;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&branch_code_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&ws_id;
 sqlstm.sqhstl[3] = (unsigned int  )18;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&ws_id_ind;
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

 // Added this on 10/05/2007
		  //AND CARDSTAT = :card_active:card_active_ind; commented this on 10/05/2007
		
		if(SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog(" update_cardstatus_to_retained : Updation on CARD_STATUS failed : %s", SQLMSG);
		#endif
			//strcpy(prog_log.remarks,"update_card_status: Updation on CARD_STATUS failed");
			//sprintf(excep_log.error_msg, "update_card_status: Updation on CARD_STATUS failed : %s", SQLMSG);
			//excep_log.termination_flag = YES;
			//excep_log.severity = FATAL;

			//log_error(ctx);
			
			//return UPDATE_ERROR;
		}

		/* This piece of code is included for IJPN 10/8/2005 */
		/* EXEC SQL DELETE FROM CLMS_CARD_STAT_UPD 
			WHERE KPTNO = :kpt_no:kpt_no_ind
		  AND CARDSTATUS = 20
		  AND CARDVERSIONNO = :lcversion; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "delete  from CLMS_CARD_STAT_UPD  where ((KPTNO=:b0:b1 and C\
ARDSTATUS=20) and CARDVERSIONNO=:b2)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )653;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)kpt_no;
  sqlstm.sqhstl[0] = (unsigned int  )13;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&kpt_no_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&lcversion;
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



		/* This piece of code is included for IJPN 10/8/2005 */
		/* EXEC SQL INSERT INTO CLMS_CARD_STAT_UPD(KPTNO, CARDVERSIONNO, 
		CARDSTATUS, UPDFLAG, TIMESTAMP, USERID, WSID)
		VALUES(:kpt_no:kpt_no_ind,:lcversion,20,'N',SYSDATE,
		:user_id:user_id_ind, :ws_id:ws_id_ind); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into CLMS_CARD_STAT_UPD (KPTNO,CARDVERSIONNO,CARDSTA\
TUS,UPDFLAG, timestamp ,USERID,WSID) values (:b0:b1,:b2,20,'N',SYSDATE,:b3:b4,\
:b5:b6)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )676;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)kpt_no;
  sqlstm.sqhstl[0] = (unsigned int  )13;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&kpt_no_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&lcversion;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&user_id;
  sqlstm.sqhstl[2] = (unsigned int  )11;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&user_id_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&ws_id;
  sqlstm.sqhstl[3] = (unsigned int  )18;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&ws_id_ind;
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
		userlog("update_cardstatus_to_retained : Record updated successfully");
#endif

//	}

	return SUCCESS;
}


/****************************************************************************************/
/* Function Name: calculate_lic_validity_date											*/
/* Description	: It calculates the License Validity End date for the License			*/
/* Input		: Application ID, Validity Period, Txn Date, Pointer to Validity End 	*/
/*                date																	*/
/* Return values: SUCCESS / Error code													*/
/* Limitations	: None																	*/
/****************************************************************************************/
int calculate_lic_validity_date(int validity_period, char *txndate, 
								char *validity_end_date,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	  char txn_date[DATE_SIZE] = {0};
	  char validend_date[DATE_SIZE] = {0};
	  int validityperiod = 0;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	/* Populate the variables	*/

	validityperiod = validity_period;
	strcpy(txn_date,txndate);

#ifdef DEBUG
	userlog("calculate_lic_validity_date : Validity period - %d", validityperiod);
	userlog("calculate_lic_validity_date : Txn date - %s", txn_date);
#endif

	if(0 >= validityperiod || '\0' == txn_date[0]) 
	{
#ifdef DEBUG
		userlog(" calculate_lic_validity_date : Invalid validity period");
#endif
		strcpy(prog_log.remarks,"calculate_lic_validity_date: Invalid validity period");
		strcpy(excep_log.error_msg, "calculate_lic_validity_date: Invalid validity period");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return INVALID_VALIDITY_PERIOD;
		
	}


	/* EXEC SQL SELECT TO_CHAR(ADD_MONTHS(TO_DATE(:txn_date,'DDMMYYYY'),:validityperiod) - 1,'DDMMYYYY')
				INTO :validend_date FROM DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR((ADD_MONTHS(TO_DATE(:b0,'DDMMYYYY'),:b1)-1),'\
DDMMYYYY') into :b2  from DUAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )707;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)txn_date;
 sqlstm.sqhstl[0] = (unsigned int  )9;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&validityperiod;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)validend_date;
 sqlstm.sqhstl[2] = (unsigned int  )9;
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
		userlog(" calculate_lic_validity_date : Error in calculating Validity period for the license");
#endif
		strcpy(prog_log.remarks,"calculate_lic_validity_date: Error in calculating Validity period for the license");
		sprintf(excep_log.error_msg, "calculate_lic_validity_date: Error in calculating Validity period for the license : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
		
	}

	strcpy(validity_end_date,validend_date);

#ifdef DEBUG
	userlog("calculate_lic_validity_date : Validity End Date - %s",validity_end_date);
#endif
	return SUCCESS;
}

/********************************************************************************/
/* Function name: get_summons_agency											*/
/* Description	: This function checks whether there are any Summons for JPJ and*/
/*				  PDRM for the given application                                */
/* Input		: Application id, Flags for JPJ and PDRM summons to be populated*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int get_summons_agency(char *application_id, char *jpj_summons_flag, char *pdrm_summons_flag,void * ctx)
{
struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	int count = 0;
	char agency = 0;
	

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


		int cnt  = 0;
	*jpj_summons_flag = NO;
	*pdrm_summons_flag = NO;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN



	
	
	/* Populate the variables	*/

	strcpy(appl_id, application_id);

#ifdef DEBUG
	userlog("get_summons_agency : Appl id - %s", appl_id);
#endif

	for (cnt = 0; cnt < 2; cnt++)
	{

		if (0 == cnt )
			agency = JPJ_ID;
		else
			agency = PDRM_ID;

		/* EXEC SQL SELECT COUNT(*) INTO :count FROM APPL_TXN_SUMMONS
			WHERE APPLID = :appl_id
			AND SUMMBYAGENT = :agency; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN_SUMMONS where (APP\
LID=:b1 and SUMMBYAGENT=:b2)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )734;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&count;
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
  sqlstm.sqhstv[2] = (         void  *)&agency;
  sqlstm.sqhstl[2] = (unsigned int  )1;
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
			userlog(" get_summons_agency : Select from APPL_TXN_SUMMONS failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"get_summons_agency: Select from APPL_TXN_SUMMONS failed");
			sprintf(excep_log.error_msg, "get_summons_agency: Select from APPL_TXN_SUMMONS failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}
		else if (count > 0)
		{
			if (0 == cnt)
				*jpj_summons_flag = YES;
			else
				*pdrm_summons_flag = YES;
		}
	}
	
#ifdef DEBUG
		userlog("get_summons_agency : JPJ summons flag - %c",*jpj_summons_flag );
		userlog("get_summons_agency : PDRM summons flag - %c",*pdrm_summons_flag );
#endif

	return SUCCESS;
}

/********************************************************************************/
/* Function name: update_appl_stat												*/
/* Description	: This function updates the Application status in APPLICATION   */
/*				  table to the set value										*/
/* Input		: Application id, Application status							*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int update_appl_stat(char *application_id, char appl_status,void * ctx)
{
struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	char appl_stat = 0;

	short appl_stat_ind = -1;
	

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	/* Populate the host variables	*/

	strcpy(appl_id, application_id);

	if ('\0' != appl_status)
	{
		appl_stat = appl_status;
		appl_stat_ind = 0;
	}

#ifdef DEBUG
	userlog("update_appl_stat : Appl id - %s", appl_id);
	userlog("update_appl_stat : Appl status - %c", appl_stat);
#endif

	/* EXEC SQL UPDATE APPLICATION 
		SET APPLSTAT  = :appl_stat:appl_stat_ind
		WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update APPLICATION  set APPLSTAT=:b0:b1 where APPLID=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )761;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&appl_stat;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&appl_stat_ind;
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



	if(SQLCODE != 0)
	{
#ifdef DEBUG
		userlog(" update_appl_stat :Updation on APPLICATION failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"update_appl_stat: Updation on APPLICATION failed");
		sprintf(excep_log.error_msg, "update_appl_stat: Updation on APPLICATION failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return UPDATE_ERROR;
	}

#ifdef DEBUG
	userlog("update_appl_stat : Updated appl status in APPLICATION successfully");
#endif

	return SUCCESS;
}

/********************************************************************************/
/* Function name: perform_common_jpj_checks										*/
/* Description	: This function decides whether the license info is to be loaded*/
/*				  on the chip or not											*/
/* Input		: Application id, KPT no, JPN trasnaction type					*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int perform_common_jpj_checks(CREATE_APPLNT_REQ_T *req,int txntype, char *jpj_load_on_chip,void * ctx)
{
struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	char appl_date[DATE_SIZE] = {0};
	char kpt_no[KPT_SIZE] = {0};
	char appl_stat = 0;
	char lic_type[LIC_TYPE_SIZE] = {0};
	int status = 0;
	/* varchar error_msg[ERROR_MSG_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[201]; } error_msg
 = {0};

	char prb_lic[LIC_TYPE_SIZE] = {0};

	short appl_stat_ind = -1;
	char validstart_date[DATE_SIZE] = {0};
	char validend_date[DATE_SIZE] = {0};
	char suspstart_date[DATE_SIZE] = {0};
	char suspend_date[DATE_SIZE] = {0};
	char revokstart_date[DATE_SIZE] = {0};
	char revokend_date[DATE_SIZE] = {0};

	float expiry_period = 0;
	float susp_period = 0;
	float revok_period = 0;
	float susp_valid_period = 0;
	char print_mdl_flag = 0;
	char load_on_chip = 0;
	int lic_count = 0;
	char pdl_lic[LIC_TYPE_SIZE] = {0};
	char psv_lic[LIC_TYPE_SIZE] = {0};
	char gdl_lic[LIC_TYPE_SIZE] = {0};
	int lic_type_count = 0;
	char verified_stat = 0;
	/* varchar lic_id[LIC_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } lic_id
 = {0};

	char owner_cat = 0;
	int card_stat_active = 0;
	int card_stat_lost = 0;
	/* varchar ag_on_chip[AGENCY_ON_CHIP_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } ag_on_chip
 = {0};

			
	short kpt_no_ind = -1;
	short appl_date_ind = -1;
	short validstart_date_ind  = -1;
	short validend_date_ind  = -1;
	short suspstart_date_ind  = -1;
	short suspend_date_ind  = -1;
	short revokstart_date_ind  = -1;
	short revokend_date_ind  = -1;
	short error_msg_ind  = -1;
	short verified_stat_ind = -1;
	short lic_id_ind = -1;
	short owner_cat_ind = -1;
	short ag_on_chip_ind = -1;
	

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int count = 0 ;
	int ret_code  = 0;
	char check_cdl_verified = NO;

	LICENSE_DATE_INFO_T lic;

	char cdl_update = YES;
	char prb_update = YES;
	

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	/* Populate the host variables	*/

	strcpy(appl_id, req->header.application_id);

	if ( '\0' != req->license_id[0])
	{
		strcpy(lic_id.arr, req->license_id);
		setlen(lic_id);
		lic_id_ind = 0;
	}

	if ('\0' != req->owner_cat)
	{
		owner_cat = req->owner_cat;
		owner_cat_ind = 0;
	}
	
	if ('\0' != req->kpt_no[0])
	{
		strcpy(kpt_no, req->kpt_no);	
		kpt_no_ind  = 0;
	}

	print_mdl_flag = YES;	/* Default value */

#ifdef DEBUG
	userlog("perform_common_jpj_checks : Appl id - %s", appl_id);
	userlog("perform_common_jpj_checks : Lic Id - %s", lic_id.arr);
	userlog("perform_common_jpj_checks : Owner cat - %c", owner_cat);
#endif

	/* Get application date from APPLICATION */

	/* EXEC SQL SELECT TO_CHAR(APPLDATE, 'DDMMYYYY') INTO :appl_date:appl_date_ind
		FROM APPLICATION WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(APPLDATE,'DDMMYYYY') into :b0:b1  from APPLIC\
ATION where APPLID=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )784;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)appl_date;
 sqlstm.sqhstl[0] = (unsigned int  )9;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&appl_date_ind;
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



	if(SQLCODE != 0)
	{
#ifdef DEBUG
		userlog(" perform_common_jpj_checks :Selecting Application date from APPLICATION failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"perform_common_jpj_checks: Selecting Application date from APPLICATION failed");
		sprintf(excep_log.error_msg, "perform_common_jpj_checks: Selecting Application date from APPLICATION failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}

#ifdef DEBUG
	userlog("perform_common_jpj_checks : Application date - %s", appl_date);
#endif

	memset(&lic, '\0', sizeof(LICENSE_DATE_INFO_T));

	/* Check whether the applicant has the valid license */

	/* EXEC SQL SELECT COUNT(*) INTO :lic_count FROM APPNT_LIC_INFO
			WHERE APPLID  = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from APPNT_LIC_INFO where APPLID=\
:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )807;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&lic_count;
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



	if(SQLCODE != 0)
	{
#ifdef DEBUG
		userlog(" perform_common_jpj_checks :Selecting from APPL_TXN failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"perform_common_jpj_checks: Selecting from APPL_TXN failed");
		sprintf(excep_log.error_msg, "perform_common_jpj_checks: Selecting from APPL_TXN failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}

#ifdef DEBUG
	userlog(" perform_common_jpj_checks : License count - %d", lic_count);
#endif
	
	if (lic_count == 0)
		print_mdl_flag = NO;

	if (lic_count > 0)
	{
		for (count =  0; count < 4; count++)
		{
			if (check_cdl_verified == YES)
				break;

			if (0 == count) 
				strcpy(lic_type, PRB_LIC);
			else if (1 == count) 
				strcpy(lic_type, CDL_LIC);
			else if (2 == count) 
				strcpy(lic_type, GDL_LIC);
			else if (3 == count) 
				strcpy(lic_type, PSV_LIC);

				validstart_date_ind  = -1;
				validend_date_ind  = -1;
				suspstart_date_ind  = -1;
				suspend_date_ind  = -1;
				revokstart_date_ind  = -1;
				revokend_date_ind  = -1;
	
			/* Check whether the applicant has the license with given license type */

			/* EXEC SQL SELECT COUNT(*) INTO :lic_type_count FROM APPNT_LIC_INFO
				WHERE APPLID  = :appl_id
				AND LICTYPE = :lic_type; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 14;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select count(*)  into :b0  from APPNT_LIC_INFO where (APPL\
ID=:b1 and LICTYPE=:b2)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )830;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&lic_type_count;
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
   sqlstm.sqhstv[2] = (         void  *)lic_type;
   sqlstm.sqhstl[2] = (unsigned int  )4;
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
				userlog(" perform_common_jpj_checks :Selecting from APPL_TXN failed : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"perform_common_jpj_checks: Selecting from APPL_TXN failed");
				sprintf(excep_log.error_msg, "perform_common_jpj_checks: Selecting from APPL_TXN failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return SELECT_ERROR;
			}

#ifdef DEBUG
				userlog(" perform_common_jpj_checks :License type count - %d", lic_type_count);
#endif
			
			if (lic_type_count <= 0)
				continue;

			ret_code = get_license_date_info(req->header.application_id, req->license_id, 
										req->owner_cat, lic_type, &lic,ctx);

			if(SUCCESS != ret_code)
			{
				return ret_code;
			}

			/* Populate the host varibales */

			if ('\0' != lic.validity_start_date[0])
			{
				strcpy(validstart_date, lic.validity_start_date);
				validstart_date_ind  = 0;

			}
			if ('\0' != lic.validity_end_date[0])
			{
				strcpy(validend_date, lic.validity_end_date);
				validend_date_ind  = 0;

			}

			if ('\0' != lic.susp_start_date[0])
			{
				strcpy(suspstart_date, lic.susp_start_date);
				suspstart_date_ind  = 0;

			}

			if ('\0' != lic.susp_end_date[0])
			{
				strcpy(suspend_date, lic.susp_end_date);
				suspend_date_ind  = 0;

			}

			if ('\0' != lic.revok_start_date[0])
			{
				strcpy(revokstart_date, lic.revok_start_date);
				revokstart_date_ind  = 0;

			}

			if ('\0' != lic.revok_end_date[0])
			{
				strcpy(revokend_date, lic.revok_end_date);
				revokend_date_ind  = 0;

			}

#ifdef DEBUG
		userlog("perform_common_jpj_checks : Lic type - %s", lic_type);
		userlog("perform_common_jpj_checks : Validity start date - %s", validstart_date );
		userlog("perform_common_jpj_checks : Validity end date - %s", validend_date );
		userlog("perform_common_jpj_checks : Suspension start date - %s", suspstart_date );
		userlog("perform_common_jpj_checks : Suspension end date - %s", suspend_date );
		userlog("perform_common_jpj_checks : Revocation start date - %s", revokstart_date);
		userlog("perform_common_jpj_checks : Revocation end date - %s", revokend_date);
#endif

			/*Call stored procedure to get differences of License dates with Application Date*/

			/* EXEC SQL EXECUTE
				BEGIN
				LIC_PERIOD_VALIDATIONS(:appl_date:appl_date_ind, :validend_date:validend_date_ind,:expiry_period,
									   :revokstart_date:revokstart_date_ind,:revokend_date:revokend_date_ind, :revok_period,
									   :suspstart_date:suspstart_date_ind, :suspend_date:suspend_date_ind, :susp_period,
									   :susp_valid_period, :status, :error_msg:error_msg_ind);
				END;
			END-EXEC; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 14;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "begin LIC_PERIOD_VALIDATIONS ( :appl_date:appl_date_ind , \
:validend_date:validend_date_ind , :expiry_period , :revokstart_date:revokstar\
t_date_ind , :revokend_date:revokend_date_ind , :revok_period , :suspstart_dat\
e:suspstart_date_ind , :suspend_date:suspend_date_ind , :susp_period , :susp_v\
alid_period , :status , :error_msg:error_msg_ind ) ; END ;";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )857;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)appl_date;
   sqlstm.sqhstl[0] = (unsigned int  )9;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&appl_date_ind;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)validend_date;
   sqlstm.sqhstl[1] = (unsigned int  )9;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)&validend_date_ind;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&expiry_period;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)revokstart_date;
   sqlstm.sqhstl[3] = (unsigned int  )9;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)&revokstart_date_ind;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)revokend_date;
   sqlstm.sqhstl[4] = (unsigned int  )9;
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)&revokend_date_ind;
   sqlstm.sqinds[4] = (         int  )0;
   sqlstm.sqharm[4] = (unsigned int  )0;
   sqlstm.sqadto[4] = (unsigned short )0;
   sqlstm.sqtdso[4] = (unsigned short )0;
   sqlstm.sqhstv[5] = (         void  *)&revok_period;
   sqlstm.sqhstl[5] = (unsigned int  )sizeof(float);
   sqlstm.sqhsts[5] = (         int  )0;
   sqlstm.sqindv[5] = (         void  *)0;
   sqlstm.sqinds[5] = (         int  )0;
   sqlstm.sqharm[5] = (unsigned int  )0;
   sqlstm.sqadto[5] = (unsigned short )0;
   sqlstm.sqtdso[5] = (unsigned short )0;
   sqlstm.sqhstv[6] = (         void  *)suspstart_date;
   sqlstm.sqhstl[6] = (unsigned int  )9;
   sqlstm.sqhsts[6] = (         int  )0;
   sqlstm.sqindv[6] = (         void  *)&suspstart_date_ind;
   sqlstm.sqinds[6] = (         int  )0;
   sqlstm.sqharm[6] = (unsigned int  )0;
   sqlstm.sqadto[6] = (unsigned short )0;
   sqlstm.sqtdso[6] = (unsigned short )0;
   sqlstm.sqhstv[7] = (         void  *)suspend_date;
   sqlstm.sqhstl[7] = (unsigned int  )9;
   sqlstm.sqhsts[7] = (         int  )0;
   sqlstm.sqindv[7] = (         void  *)&suspend_date_ind;
   sqlstm.sqinds[7] = (         int  )0;
   sqlstm.sqharm[7] = (unsigned int  )0;
   sqlstm.sqadto[7] = (unsigned short )0;
   sqlstm.sqtdso[7] = (unsigned short )0;
   sqlstm.sqhstv[8] = (         void  *)&susp_period;
   sqlstm.sqhstl[8] = (unsigned int  )sizeof(float);
   sqlstm.sqhsts[8] = (         int  )0;
   sqlstm.sqindv[8] = (         void  *)0;
   sqlstm.sqinds[8] = (         int  )0;
   sqlstm.sqharm[8] = (unsigned int  )0;
   sqlstm.sqadto[8] = (unsigned short )0;
   sqlstm.sqtdso[8] = (unsigned short )0;
   sqlstm.sqhstv[9] = (         void  *)&susp_valid_period;
   sqlstm.sqhstl[9] = (unsigned int  )sizeof(float);
   sqlstm.sqhsts[9] = (         int  )0;
   sqlstm.sqindv[9] = (         void  *)0;
   sqlstm.sqinds[9] = (         int  )0;
   sqlstm.sqharm[9] = (unsigned int  )0;
   sqlstm.sqadto[9] = (unsigned short )0;
   sqlstm.sqtdso[9] = (unsigned short )0;
   sqlstm.sqhstv[10] = (         void  *)&status;
   sqlstm.sqhstl[10] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[10] = (         int  )0;
   sqlstm.sqindv[10] = (         void  *)0;
   sqlstm.sqinds[10] = (         int  )0;
   sqlstm.sqharm[10] = (unsigned int  )0;
   sqlstm.sqadto[10] = (unsigned short )0;
   sqlstm.sqtdso[10] = (unsigned short )0;
   sqlstm.sqhstv[11] = (         void  *)&error_msg;
   sqlstm.sqhstl[11] = (unsigned int  )203;
   sqlstm.sqhsts[11] = (         int  )0;
   sqlstm.sqindv[11] = (         void  *)&error_msg_ind;
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



			if(SQLCODE != 0)
			{
#ifdef DEBUG
				userlog("perform_common_jpj_checks : Failed to call stored procedure LIC_PERIOD_VALIDATIONS : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"perform_common_jpj_checks: Failed to call stored procedure LIC_PERIOD_VALIDATIONS ");
				sprintf(excep_log.error_msg, "perform_common_jpj_checks: Failed to call stored procedure LIC_PERIOD_VALIDATIONS : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return STORED_PROC_ERROR;
			}

			if( status != 0)
			{
				setnull(error_msg);
#ifdef DEBUG
				userlog(" perform_common_jpj_checks : Failed to validate license dates : %s", error_msg.arr);
#endif
				strcpy(prog_log.remarks,"perform_common_jpj_checks: Failed to validate license dates");
				sprintf(excep_log.error_msg, "perform_common_jpj_checks: Failed to validate license dates : %s", error_msg.arr);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return STORED_PROC_ERROR;
			}

			if (0 == strcmp(lic_type, PRB_LIC))
			{

				if (expiry_period < -12)
				{
					print_mdl_flag = NO;
					prb_update = NO;
				}

				
				if (revok_period > 0)
				{
					print_mdl_flag = NO;
					prb_update = YES;
				}
				
			}
			else if (0 == strcmp(lic_type, CDL_LIC))
			{
				if (expiry_period < -36)
				{
					print_mdl_flag = NO;
					cdl_update = NO;
				}
				else
					print_mdl_flag = YES;

				if (susp_valid_period >= 0)
				{
					if (txntype == TXN_REPL)
					{
						if (susp_period < -12)
						{
							print_mdl_flag = NO;
							cdl_update = NO;
						}
						else
						{
							print_mdl_flag = YES;
							cdl_update = YES;
						}
					}

				}

			}
			else if ((0 == strcmp(lic_type, GDL_LIC)) ||
						(0 == strcmp(lic_type, PSV_LIC)))
			{
				if (expiry_period < -36)
				{
					load_on_chip = NO;
				}
				else
					load_on_chip = YES;
				
			}

			if (0 == count)
				load_on_chip =	prb_update;
			else if (1 == count)
				load_on_chip =	cdl_update;

#ifdef DEBUG
			userlog(" perform_common_jpj_checks : Load on chip for %s : %c", lic_type, load_on_chip);
#endif

			/* Check verified status */
			/* EXEC SQL SELECT DISTINCT(VERIFIEDSTATUS) INTO 
				:verified_stat:verified_stat_ind
				FROM APPNT_LIC_INFO 
				WHERE APPLID  = :appl_id
				AND LICTYPE = :lic_type
				AND ROWNUM = 1; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 14;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select distinct VERIFIEDSTATUS into :b0:b1  from APPNT_LIC\
_INFO where ((APPLID=:b2 and LICTYPE=:b3) and ROWNUM=1)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )920;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&verified_stat;
   sqlstm.sqhstl[0] = (unsigned int  )1;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&verified_stat_ind;
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
   sqlstm.sqhstv[2] = (         void  *)lic_type;
   sqlstm.sqhstl[2] = (unsigned int  )4;
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
				userlog(" perform_common_jpj_checks :Selecting Verified status from APPNT_LIC_INFO failed : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"perform_common_jpj_checks: Selecting Verified status from APPNT_LIC_INFO failed");
				sprintf(excep_log.error_msg, "perform_common_jpj_checks: Selecting Verified status from APPNT_LIC_INFO failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return SELECT_ERROR;
			}
#ifdef DEBUG
			userlog("perform_common_jpj_checks : Verified status - %c", verified_stat);
#endif

			if (0 == strcmp(lic_type, CDL_LIC))
			{
				if ((verified_stat - '0') < 6)
				{
					load_on_chip = NO;
					check_cdl_verified = YES;
				}
				
			}
			else if ((0 == strcmp(lic_type, PSV_LIC)) 
			    	||(0 == strcmp(lic_type, GDL_LIC)))
			{
				if ((verified_stat - '0') < 6)
				{
					load_on_chip = NO;
				}
				
			}
			
			
			/* EXEC SQL UPDATE APPNT_LIC_INFO
				SET LOADONCHIPIND = :load_on_chip
				WHERE APPLID  = :appl_id
				AND LICTYPE = :lic_type; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 14;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update APPNT_LIC_INFO  set LOADONCHIPIND=:b0 where (APPLID\
=:b1 and LICTYPE=:b2)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )947;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&load_on_chip;
   sqlstm.sqhstl[0] = (unsigned int  )1;
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
   sqlstm.sqhstv[2] = (         void  *)lic_type;
   sqlstm.sqhstl[2] = (unsigned int  )4;
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
				userlog(" perform_common_jpj_checks :Updation on APPNT_LIC_INFO failed : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"perform_common_jpj_checks: Updation on APPNT_LIC_INFO failed");
				sprintf(excep_log.error_msg, "perform_common_jpj_checks: Updation on APPNT_LIC_INFO failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return UPDATE_ERROR;
			}
			else if ((strcmp(lic_type, CDL_LIC) == 0) && (cdl_update == YES))	/* If Load on chip for CDL is YES */
			{																/* the same for PRB should be NO */
				strcpy(prb_lic, PRB_LIC);

				/* EXEC SQL UPDATE APPNT_LIC_INFO
					SET LOADONCHIPIND = 'N'
					WHERE APPLID  = :appl_id
					AND LICTYPE = :prb_lic; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 14;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "update APPNT_LIC_INFO  set LOADONCHIPIND='N' where (APPLI\
D=:b0 and LICTYPE=:b1)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )974;
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
    sqlstm.sqhstv[1] = (         void  *)prb_lic;
    sqlstm.sqhstl[1] = (unsigned int  )4;
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


			
				if(SQLCODE != 0 && !NO_DATA_FOUND)
				{
#ifdef DEBUG
					userlog(" perform_common_jpj_checks :Updation on APPNT_LIC_INFO for PRB failed : %s", SQLMSG);
#endif
					strcpy(prog_log.remarks,"perform_common_jpj_checks: Updation on APPNT_LIC_INFO for PRB failed");
					sprintf(excep_log.error_msg, "perform_common_jpj_checks: Updation on APPNT_LIC_INFO for PRB failed : %s", SQLMSG);
					excep_log.termination_flag = YES;
					excep_log.severity = FATAL;

					log_error(ctx);
					
					return UPDATE_ERROR;
				}
			}
#ifdef DEBUG
			userlog("perform_common_jpj_checks : Updated Load on chip indicator in APPNT_LIC_INFO successfully for %s license", lic_type);
#endif

		}	/* End of for (count =  0; count < 4; count++) */

			
	}

#ifdef DEBUG
		userlog(" perform_common_jpj_checks :Print MDL flag : %c", print_mdl_flag);
#endif

	if (NO == print_mdl_flag)
	{
		/* EXEC SQL UPDATE APPNT_JPJ_INFO 
			SET PRINTMDL  = :print_mdl_flag
		WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPNT_JPJ_INFO  set PRINTMDL=:b0 where APPLID=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )997;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&print_mdl_flag;
  sqlstm.sqhstl[0] = (unsigned int  )1;
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



		if(SQLCODE != 0)
		{
#ifdef DEBUG
			userlog(" perform_common_jpj_checks :Updation on APPNT_JPJ_INFO failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"perform_common_jpj_checks: Updation on APPNT_JPJ_INFO failed");
			sprintf(excep_log.error_msg, "perform_common_jpj_checks: Updation on APPNT_JPJ_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return UPDATE_ERROR;
		}
#ifdef DEBUG
		userlog("perform_common_jpj_checks : Updated Print MDL flag in APPNT_JPJ_INFO successfully");
#endif
	}
	else	/* If Print MDL = YES */
	{
		/* Check whether applicant has only PDL license */

		strcpy (pdl_lic, PDL_LIC);
		lic_count = 0;

		/* EXEC SQL SELECT COUNT(*) INTO :lic_count
			FROM APPNT_LIC_INFO 
		WHERE APPLID = :appl_id
		AND LICTYPE != :pdl_lic
		AND LOADONCHIPIND = 'Y'; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPNT_LIC_INFO where ((APPL\
ID=:b1 and LICTYPE<>:b2) and LOADONCHIPIND='Y')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1020;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&lic_count;
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
  sqlstm.sqhstv[2] = (         void  *)pdl_lic;
  sqlstm.sqhstl[2] = (unsigned int  )4;
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
			userlog(" perform_common_jpj_checks :Select from APPNT_JPJ_INFO failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"perform_common_jpj_checks: Select from APPNT_JPJ_INFO failed");
			sprintf(excep_log.error_msg, "perform_common_jpj_checks: Select from APPNT_JPJ_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}

#ifdef DEBUG
			userlog(" perform_common_jpj_checks :License count in APPNT_JPJ_INFO - %d", lic_count);
#endif
		
		if (lic_count == 0)	/* If applicant has only PDL license or any license */
		{					/* with Load on chip flag NO					    */
			print_mdl_flag = NO;

			/* EXEC SQL UPDATE APPNT_JPJ_INFO 
					SET PRINTMDL  = :print_mdl_flag
				WHERE APPLID = :appl_id; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 14;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update APPNT_JPJ_INFO  set PRINTMDL=:b0 where APPLID=:b1";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1047;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&print_mdl_flag;
   sqlstm.sqhstl[0] = (unsigned int  )1;
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



			if(SQLCODE != 0)
			{
#ifdef DEBUG
				userlog(" perform_common_jpj_checks :Updation on APPNT_JPJ_INFO failed : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"perform_common_jpj_checks: Updation on APPNT_JPJ_INFO failed");
				sprintf(excep_log.error_msg, "perform_common_jpj_checks: Updation on APPNT_JPJ_INFO failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return UPDATE_ERROR;
			}
#ifdef DEBUG
			userlog("perform_common_jpj_checks : Updated Print MDL flag in APPNT_JPJ_INFO successfully");
#endif
		}

	}

	if (req->load_dl_flag == NO)
	{
		/* Update the Agency on chip and Print MDL flags */

		/* EXEC SQL UPDATE APPNT_JPJ_INFO 
			SET PRINTMDL  = 'N'
		WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPNT_JPJ_INFO  set PRINTMDL='N' where APPLID=:b0";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1070;
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



		if(SQLCODE != 0)
		{
#ifdef DEBUG
			userlog(" perform_common_jpj_checks :Updating Print MDL flag in APPNT_JPJ_INFO failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"perform_common_jpj_checks: Updating Print MDL flag in APPNT_JPJ_INFO failed");
			sprintf(excep_log.error_msg, "perform_common_jpj_checks: Updating Print MDL flag in APPNT_JPJ_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return UPDATE_ERROR;
		}

#ifdef DEBUG
		userlog("perform_common_jpj_checks : Load DL flag - %c", req->load_dl_flag);
#endif
		
		/* EXEC SQL UPDATE APPNT_LIC_INFO 
			SET LOADONCHIPIND = 'N'
		WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPNT_LIC_INFO  set LOADONCHIPIND='N' where APPLID=:\
b0";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1089;
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



		if(SQLCODE != 0)
		{
#ifdef DEBUG
			userlog(" perform_common_jpj_checks :Updating Load on chip flag in APPNT_LIC_INFO failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"perform_common_jpj_checks: Updating Load on chip flag in APPNT_LIC_INFO failed");
			sprintf(excep_log.error_msg, "perform_common_jpj_checks: Updating Load on chip flag in APPNT_LIC_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return UPDATE_ERROR;
		}

	}

	/* Check added for PDL renew - 14/12/2001 */

	card_stat_active = ACTIVE;
	card_stat_lost = LOST;

	/* EXEC SQL SELECT AGENCYONCHIP INTO :ag_on_chip:ag_on_chip_ind 
		FROM CARD_STATUS
	WHERE KPTNO = :kpt_no:kpt_no_ind
	AND CARDVERSIONNO = (SELECT MAX(CARDVERSIONNO) FROM CARD_STATUS 
							WHERE KPTNO = :kpt_no:kpt_no_ind
							AND CARDSTAT IN (:card_stat_active, :card_stat_lost)); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select AGENCYONCHIP into :b0:b1  from CARD_STATUS where (KPT\
NO=:b2:b3 and CARDVERSIONNO=(select max(CARDVERSIONNO)  from CARD_STATUS where\
 (KPTNO=:b2:b5 and CARDSTAT in (:b6,:b7))))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1108;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&ag_on_chip;
 sqlstm.sqhstl[0] = (unsigned int  )11;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&ag_on_chip_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)kpt_no;
 sqlstm.sqhstl[1] = (unsigned int  )13;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&kpt_no_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)kpt_no;
 sqlstm.sqhstl[2] = (unsigned int  )13;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&kpt_no_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&card_stat_active;
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&card_stat_lost;
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



	if (SQLCODE != 0 && !NO_DATA_FOUND)
	{
#ifdef DEBUG
		userlog(" perform_common_jpj_checks : Selecting Agency on chip from CARD_STATUS failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"perform_common_jpj_checks: Selecting Agency on chip from CARD_STATUS failed");
		sprintf(excep_log.error_msg, "perform_common_jpj_checks: Selecting Agency on chip from CARD_STATUS failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
 
     }

	if (0 == ag_on_chip_ind)
	{
		setnull(ag_on_chip);
		
		if (req->pdl_renew_type == '1' && ag_on_chip.arr[3] == '0')
		{
			strcpy (pdl_lic, PDL_LIC);

			/* EXEC SQL UPDATE APPNT_LIC_INFO
					SET LOADONCHIPIND = 'N'
				WHERE APPLID = :appl_id
				  AND LICTYPE = :pdl_lic
				  AND LICCLASS NOT IN ('B ', 'B1', 'B2', 'B3', 'C '); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 14;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update APPNT_LIC_INFO  set LOADONCHIPIND='N' where ((APPLI\
D=:b0 and LICTYPE=:b1) and LICCLASS not  in ('B ','B1','B2','B3','C '))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1143;
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
   sqlstm.sqhstv[1] = (         void  *)pdl_lic;
   sqlstm.sqhstl[1] = (unsigned int  )4;
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


		}
	}

	lic_count = 0;

		/* Decide if the JPJ info is loaded on chip */

		/* EXEC SQL SELECT COUNT(*) INTO :lic_count
			FROM APPNT_LIC_INFO 
		WHERE APPLID = :appl_id
		AND LOADONCHIPIND = 'Y'; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPNT_LIC_INFO where (APPLI\
D=:b1 and LOADONCHIPIND='Y')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1166;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&lic_count;
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



		if(SQLCODE != 0)
		{
#ifdef DEBUG
			userlog(" perform_common_jpj_checks :Selection from APPNT_LIC_INFO failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"perform_common_jpj_checks: Selection from APPNT_LIC_INFO failed");
			sprintf(excep_log.error_msg, "perform_common_jpj_checks: Selection from APPNT_LIC_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}

		if (lic_count > 0)
			*jpj_load_on_chip = YES;

#ifdef DEBUG
	userlog(" perform_common_jpj_checks :JPJ load on chip flag - %c", *jpj_load_on_chip);
#endif

	return SUCCESS;
}


/************************************************************************************/
/* Function Name: get_license_date_info()											*/
/* Description	: This function get the JPJ Date Details from the GSCB database     */
/*				  for the Applicant.												*/
/* Input		: KPTNo, License Type,  Reference to Structure LICENSE_DATE_INFO_T  */
/* Return values: SUCCESS / Error code												*/
/* Limitations	: None																*/
/************************************************************************************/	
int get_license_date_info(char *application_id, char *license_id, char owner_category, char *license_type,LICENSE_DATE_INFO_T *lic_date,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	/* varchar lic_id[LIC_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } lic_id
 = {0};

	char owner_cat = 0;
	char lic_type[LIC_TYPE_SIZE] = {0};
	char validstart_date[DATE_SIZE] = {0};
	char validend_date[DATE_SIZE] = {0};
	char suspstart_date[DATE_SIZE] = {0};
	char suspend_date[DATE_SIZE] = {0};
	char revocstart_date[DATE_SIZE] = {0};
	char revocend_date[DATE_SIZE] = {0};

	short lic_id_ind = -1;
	short owner_cat_ind = -1;
	short kpt_no_ind = -1;
	short validstart_date_ind  = -1;
	short validend_date_ind  = -1;
	short suspstart_date_ind  = -1;
	short suspend_date_ind  = -1;
	short revocstart_date_ind  = -1;
	short revocend_date_ind  = -1;
	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	/* Populate the host variables	*/

	strcpy(appl_id, application_id);

	if ( '\0' != license_id[0])
	{
		strcpy(lic_id.arr, license_id);
		setlen(lic_id);
		lic_id_ind = 0;
	}

	if ('\0' != owner_category)
	{
		owner_cat = owner_category;
		owner_cat_ind = 0;
	}

	strcpy(lic_type, license_type);

#ifdef DEBUG
	userlog("get_license_date_info : Getting dates for %s license", lic_type);
#endif

	/*Selecting the Validity Start and End date for License Type from JPJ_LIC_INFO*/

	/* EXEC SQL SELECT	TO_CHAR(MAX(LICVALIDSTARTDATE),'DDMMYYYY'),
					TO_CHAR(MAX(LICVALIDENDDATE),'DDMMYYYY')
				INTO :validstart_date:validstart_date_ind, 
					 :validend_date:validend_date_ind 
				FROM APPNT_LIC_INFO 
				WHERE APPLID = :appl_id
				AND LICTYPE = :lic_type; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(max(LICVALIDSTARTDATE),'DDMMYYYY') ,TO_CHAR(m\
ax(LICVALIDENDDATE),'DDMMYYYY') into :b0:b1,:b2:b3  from APPNT_LIC_INFO where \
(APPLID=:b4 and LICTYPE=:b5)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1189;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)validstart_date;
 sqlstm.sqhstl[0] = (unsigned int  )9;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&validstart_date_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)validend_date;
 sqlstm.sqhstl[1] = (unsigned int  )9;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&validend_date_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)appl_id;
 sqlstm.sqhstl[2] = (unsigned int  )20;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)lic_type;
 sqlstm.sqhstl[3] = (unsigned int  )4;
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



	if(SQLCODE != 0 && !NO_DATA_FOUND)
	{
#ifdef DEBUG
		userlog(" get_license_date_info : Selecting dates from JPJ_LIC_INFO failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_license_date_info: Selecting dates from JPJ_LIC_INFO failed");
		sprintf(excep_log.error_msg, "get_license_date_info: Selecting dates from JPJ_LIC_INFO failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}


		if (-1 != validstart_date_ind)
			strcpy(lic_date->validity_start_date, validstart_date);

		if (-1 != validend_date_ind)
			strcpy(lic_date->validity_end_date, validend_date);

#ifdef DEBUG
		userlog("get_license_date_info : Validity start date - %s", lic_date->validity_start_date);
		userlog("get_license_date_info : Validity end date - %s", lic_date->validity_end_date);
#endif

	/*Selecting the Suspension Start and End date for License Type from JPJ_LIC_SUSPENS */

	/* EXEC SQL SELECT	TO_CHAR(MAX(LICSUSPSTARTDATE),'DDMMYYYY'),
					TO_CHAR(MAX(LICSUSPENDDATE),'DDMMYYYY')
				INTO :suspstart_date:suspstart_date_ind,
					 :suspend_date:suspend_date_ind
			 FROM JPJ_LIC_SUSPENS
			 WHERE LICIDNO = :lic_id:lic_id_ind
			 AND OWNERCAT = :owner_cat:owner_cat_ind
			 AND LICTYPE = :lic_type; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(max(LICSUSPSTARTDATE),'DDMMYYYY') ,TO_CHAR(ma\
x(LICSUSPENDDATE),'DDMMYYYY') into :b0:b1,:b2:b3  from JPJ_LIC_SUSPENS where (\
(LICIDNO=:b4:b5 and OWNERCAT=:b6:b7) and LICTYPE=:b8)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1220;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)suspstart_date;
 sqlstm.sqhstl[0] = (unsigned int  )9;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&suspstart_date_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)suspend_date;
 sqlstm.sqhstl[1] = (unsigned int  )9;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&suspend_date_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&lic_id;
 sqlstm.sqhstl[2] = (unsigned int  )18;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&lic_id_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&owner_cat;
 sqlstm.sqhstl[3] = (unsigned int  )1;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&owner_cat_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)lic_type;
 sqlstm.sqhstl[4] = (unsigned int  )4;
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



	if(SQLCODE != 0 && !NO_DATA_FOUND)
	{
#ifdef DEBUG
		userlog(" get_license_date_info : Selecting dates from JPJ_LIC_SUSPENS failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_license_date_info: Selecting dates from JPJ_LIC_SUSPENS failed");
		sprintf(excep_log.error_msg, "get_license_date_info: Selecting dates from JPJ_LIC_SUSPENS failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}


		if (-1 != suspstart_date_ind)
			strcpy(lic_date->susp_start_date, suspstart_date);

		if (-1 != suspend_date_ind)
			strcpy(lic_date->susp_end_date, suspend_date);

#ifdef DEBUG
		userlog("get_license_date_info : Suspension start date - %s", lic_date->susp_end_date);
		userlog("get_license_date_info : Suspension end date - %s", lic_date->susp_end_date);
#endif

	/*Selecting the Revocation Start and End date for License Type from JPJ_LIC_REVOKE*/

	/* EXEC SQL SELECT	TO_CHAR(MAX(LICREVOKSTARTDATE),'DDMMYYYY'),
					TO_CHAR(MAX(LICREVOKENDDATE),'DDMMYYYY')
				INTO :revocstart_date:revocstart_date_ind,
					 :revocend_date:revocend_date_ind 
				FROM JPJ_LIC_REVOKE
				WHERE LICIDNO = :lic_id:lic_id_ind
				AND OWNERCAT = :owner_cat:owner_cat_ind
				AND LICTYPE = :lic_type; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(max(LICREVOKSTARTDATE),'DDMMYYYY') ,TO_CHAR(m\
ax(LICREVOKENDDATE),'DDMMYYYY') into :b0:b1,:b2:b3  from JPJ_LIC_REVOKE where \
((LICIDNO=:b4:b5 and OWNERCAT=:b6:b7) and LICTYPE=:b8)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1255;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)revocstart_date;
 sqlstm.sqhstl[0] = (unsigned int  )9;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&revocstart_date_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)revocend_date;
 sqlstm.sqhstl[1] = (unsigned int  )9;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&revocend_date_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&lic_id;
 sqlstm.sqhstl[2] = (unsigned int  )18;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&lic_id_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&owner_cat;
 sqlstm.sqhstl[3] = (unsigned int  )1;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&owner_cat_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)lic_type;
 sqlstm.sqhstl[4] = (unsigned int  )4;
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



	if(SQLCODE != 0 && !NO_DATA_FOUND)
	{
#ifdef DEBUG
		userlog(" get_license_date_info : Selecting dates from JPJ_LIC_REVOKE failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_license_date_info: Selecting dates from JPJ_LIC_REVOKE failed");
		sprintf(excep_log.error_msg, "get_license_date_info: Selecting dates from JPJ_LIC_REVOKE failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}

		if (-1 != revocstart_date_ind)
			strcpy(lic_date->revok_start_date, revocstart_date);

		if (-1 != revocend_date_ind)
			strcpy(lic_date->revok_end_date, revocend_date);

#ifdef DEBUG
		userlog("get_license_date_info : Revocation start date - %s", lic_date->revok_start_date);
		userlog("get_license_date_info : Revocation end date - %s", lic_date->revok_end_date);
#endif

	return SUCCESS;
}

/********************************************************************************/
/* Function name: check_problem_record										    */
/* Description	: This function gets the count for Problems for the given       */
/*                application id from PROBLEM_RECORD table						*/
/* Input		: Application id,Pointer to a variable to store Problem count   */											
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int check_problem_record(char *application_id, int *prob_count,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	int probcnt = 0;
	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	/* Populate the variables	*/

	strcpy(appl_id, application_id);

#ifdef DEBUG
	userlog("check_problem_record : Appl id - %s", appl_id);
#endif

	
	/* EXEC SQL SELECT COUNT(*) INTO :probcnt
		FROM PROBL_RECORD
	WHERE APPLID = :appl_id
	AND PROBLSTAT = 'O'; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 14;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from PROBL_RECORD where (APPLID=:\
b1 and PROBLSTAT='O')";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1290;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&probcnt;
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


		
	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog(" check_problem_record : Select from PROBLEM_RECORD failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"check_problem_record: Select from PROBLEM_RECORD failed ");
		sprintf(excep_log.error_msg, "check_problem_record: Select from PROBLEM_RECORD failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}

	if (0 == probcnt)
	{
		/* Check application status */

		/* EXEC SQL SELECT COUNT(*) INTO :probcnt
			FROM APPLICATION
		WHERE APPLID = :appl_id
		AND APPLSTAT IN ('X', 'Q'); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 14;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPLICATION where (APPLID=:\
b1 and APPLSTAT in ('X','Q'))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1313;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&probcnt;
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


			
		if (SQLCODE != 0)
		{
#ifdef DEBUG
			userlog(" check_problem_record : Select from PROBLEM_RECORD failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"check_problem_record: Select from PROBLEM_RECORD failed ");
			sprintf(excep_log.error_msg, "check_problem_record: Select from PROBLEM_RECORD failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}
	}
	
#ifdef DEBUG
		userlog(" check_problem_record : Problem count - %d", probcnt);
#endif

	*prob_count = probcnt;

	return SUCCESS;

}

/********************************************************************************/
/* Function name: update_disputed_info										    */
/* Description	: This function updates the disputed data of the applicant into */
/*                APPNT_JPN_INFO table											*/
/* Input		: Application id												*/											
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int update_disputed_info(char *application_id,void * ctx)
{
struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	
	char hk_flag = 0;
	/* varchar gmpc_short_name1[GMPC_SNAME1_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } gmpc_short_name1
 = {0};

	/* varchar gmpc_short_name2[GMPC_SNAME2_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } gmpc_short_name2
 = {0};

	/* varchar gmpc_short_name3[GMPC_SNAME3_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } gmpc_short_name3
 = {0};

	/* varchar current_long_name[LONG_NAME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[151]; } current_long_name
 = {0};

	/* varchar id_no[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } id_no
 = {0};

	char id_type[ID_TYPE_SIZE] = {0};
	char gender = 0;
	char birth_date[DATE_SIZE] = {0};
	char unknown_bi = 0;
	char religion = 0;
	char race = 0;
	char citizen_stat = 0;
	/* varchar birth_place[BIRTH_PLACE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[26]; } birth_place
 = {0};

	char rj_ind[RJ_SIZE] = {0};
	char district_code[DIST_CODE_SIZE] = {0};
	
	
	short hk_flag_ind = -1;
	short gmpc_short_name1_ind = -1;
	short gmpc_short_name2_ind = -1;
	short gmpc_short_name3_ind = -1;
	short current_long_name_ind = -1;
	short id_no_ind = -1;
	short id_type_ind = -1;
	short gender_ind = -1;
	short birth_date_ind = -1;
	short unknown_bi_ind = -1;
	short religion_ind = -1;
	short race_ind = -1;
	short citizen_stat_ind = -1;
	short birth_place_ind = -1;
	short rj_ind_ind = -1;
	short district_code_ind = -1;
	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	/* Populate the variables	*/

	strcpy(appl_id, application_id);

#ifdef DEBUG
	userlog("update_disputed_info : Appl id - %s", appl_id);
#endif

	/* EXEC SQL SELECT IDTYPE, IDNO, GENDER, TO_CHAR(BIRTHDATE, 'DDMMYYYY'),
					BIRTHPLACE, RELIGIONCODE, RACECODE, CITIZENSHIPSTATCODE, 
					HKIND, RJIND, DISTRICTCODE, CURRLONGNAME, GMPCSHORTNAME1, 
					GMPCSHORTNAME2, GMPCSHORTNAME3, UNKNOWNBIRTHIND
			 INTO  :id_no:id_no_ind, :id_type:id_type_ind, :gender:gender_ind, 
				   :birth_date:birth_date_ind, :birth_place:birth_place_ind,
				   :religion:religion_ind, :race:race_ind, :citizen_stat:citizen_stat_ind, 
				   :hk_flag:hk_flag_ind, :rj_ind:rj_ind_ind, :district_code:district_code_ind,
				   :current_long_name:current_long_name_ind, :gmpc_short_name1:gmpc_short_name1_ind, 
				   :gmpc_short_name2:gmpc_short_name2_ind, :gmpc_short_name3:gmpc_short_name3_ind,
				   :unknown_bi:unknown_bi_ind 
			FROM DISPUTED_DATA
			WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 17;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select IDTYPE ,IDNO ,GENDER ,TO_CHAR(BIRTHDATE,'DDMMYYYY') ,\
BIRTHPLACE ,RELIGIONCODE ,RACECODE ,CITIZENSHIPSTATCODE ,HKIND ,RJIND ,DISTRIC\
TCODE ,CURRLONGNAME ,GMPCSHORTNAME1 ,GMPCSHORTNAME2 ,GMPCSHORTNAME3 ,UNKNOWNBI\
RTHIND into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11,:b12:b13,:b14:b15,:b16\
:b17,:b18:b19,:b20:b21,:b22:b23,:b24:b25,:b26:b27,:b28:b29,:b30:b31  from DISP\
UTED_DATA where APPLID=:b32";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1336;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&id_no;
 sqlstm.sqhstl[0] = (unsigned int  )18;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&id_no_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)id_type;
 sqlstm.sqhstl[1] = (unsigned int  )3;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&id_type_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&gender;
 sqlstm.sqhstl[2] = (unsigned int  )1;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&gender_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)birth_date;
 sqlstm.sqhstl[3] = (unsigned int  )9;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&birth_date_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&birth_place;
 sqlstm.sqhstl[4] = (unsigned int  )28;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&birth_place_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&religion;
 sqlstm.sqhstl[5] = (unsigned int  )1;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&religion_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&race;
 sqlstm.sqhstl[6] = (unsigned int  )1;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&race_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&citizen_stat;
 sqlstm.sqhstl[7] = (unsigned int  )1;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&citizen_stat_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&hk_flag;
 sqlstm.sqhstl[8] = (unsigned int  )1;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&hk_flag_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)rj_ind;
 sqlstm.sqhstl[9] = (unsigned int  )3;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&rj_ind_ind;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)district_code;
 sqlstm.sqhstl[10] = (unsigned int  )5;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)&district_code_ind;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&current_long_name;
 sqlstm.sqhstl[11] = (unsigned int  )153;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)&current_long_name_ind;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&gmpc_short_name1;
 sqlstm.sqhstl[12] = (unsigned int  )33;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)&gmpc_short_name1_ind;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)&gmpc_short_name2;
 sqlstm.sqhstl[13] = (unsigned int  )33;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)&gmpc_short_name2_ind;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
 sqlstm.sqhstv[14] = (         void  *)&gmpc_short_name3;
 sqlstm.sqhstl[14] = (unsigned int  )23;
 sqlstm.sqhsts[14] = (         int  )0;
 sqlstm.sqindv[14] = (         void  *)&gmpc_short_name3_ind;
 sqlstm.sqinds[14] = (         int  )0;
 sqlstm.sqharm[14] = (unsigned int  )0;
 sqlstm.sqadto[14] = (unsigned short )0;
 sqlstm.sqtdso[14] = (unsigned short )0;
 sqlstm.sqhstv[15] = (         void  *)&unknown_bi;
 sqlstm.sqhstl[15] = (unsigned int  )1;
 sqlstm.sqhsts[15] = (         int  )0;
 sqlstm.sqindv[15] = (         void  *)&unknown_bi_ind;
 sqlstm.sqinds[15] = (         int  )0;
 sqlstm.sqharm[15] = (unsigned int  )0;
 sqlstm.sqadto[15] = (unsigned short )0;
 sqlstm.sqtdso[15] = (unsigned short )0;
 sqlstm.sqhstv[16] = (         void  *)appl_id;
 sqlstm.sqhstl[16] = (unsigned int  )20;
 sqlstm.sqhsts[16] = (         int  )0;
 sqlstm.sqindv[16] = (         void  *)0;
 sqlstm.sqinds[16] = (         int  )0;
 sqlstm.sqharm[16] = (unsigned int  )0;
 sqlstm.sqadto[16] = (unsigned short )0;
 sqlstm.sqtdso[16] = (unsigned short )0;
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


		
		
	if (SQLCODE != 0 && !NO_DATA_FOUND)
	{
#ifdef DEBUG
		userlog(" update_disputed_info : Select from DISPUTED_DATA failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"update_disputed_info: Select from DISPUTED_DATA failed ");
		sprintf(excep_log.error_msg, "update_disputed_info: Select from DISPUTED_DATA failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}
	else if (NO_DATA_FOUND)
	{
#ifdef DEBUG
		userlog("update_disputed_info : No disputed data for given applicant");
#endif
		return SUCCESS;
	}

	
	/* EXEC SQL UPDATE APPNT_JPN_INFO
		SET GENDER              = DECODE( :gender_ind, 0, :gender , -1, GENDER) ,
		BIRTHDATE				= DECODE( :birth_date_ind, 0, TO_DATE(:birth_date, 'DDMMYYYY')  , -1, BIRTHDATE) ,
		UNKNOWNBIRTHIND			= DECODE( :unknown_bi_ind, 0, :unknown_bi , -1, UNKNOWNBIRTHIND) ,
		RELIGIONCODE			= DECODE( :religion_ind, 0, :religion , -1, RELIGIONCODE) ,
		RACECODE				= DECODE( :race_ind, 0, :race , -1, RACECODE) ,
		CITIZENSHIPSTATCODE		= DECODE( :citizen_stat_ind, 0, :citizen_stat , -1, CITIZENSHIPSTATCODE) ,
		HKIND					= DECODE( :hk_flag_ind, 0, :hk_flag , -1, HKIND) ,
		CURRLONGNAME			= DECODE( :current_long_name_ind, 0, :current_long_name , -1, CURRLONGNAME) ,
		GMPCSHORTNAME1			= DECODE( :gmpc_short_name1_ind, 0, :gmpc_short_name1 , -1, GMPCSHORTNAME1) ,
		GMPCSHORTNAME2			= DECODE( :gmpc_short_name2_ind, 0, :gmpc_short_name2 , -1, GMPCSHORTNAME2) ,
		GMPCSHORTNAME3			= DECODE( :gmpc_short_name3_ind, 0, :gmpc_short_name3 , -1, GMPCSHORTNAME3) ,
		IDTYPE					= DECODE( :id_type_ind, 0, :id_type , -1, IDTYPE) ,
		IDNO					= DECODE( :id_no_ind, 0, :id_no , -1, IDNO) ,
		BIRTHPLACE				= DECODE( :birth_place_ind, 0, :birth_place, -1, BIRTHPLACE) ,
		RJIND					= DECODE( :rj_ind_ind, 0, :rj_ind , -1, RJIND) 
		WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 31;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update APPNT_JPN_INFO  set GENDER=DECODE(:b0,0,:b1,(-1),GEND\
ER),BIRTHDATE=DECODE(:b2,0,TO_DATE(:b3,'DDMMYYYY'),(-1),BIRTHDATE),UNKNOWNBIRT\
HIND=DECODE(:b4,0,:b5,(-1),UNKNOWNBIRTHIND),RELIGIONCODE=DECODE(:b6,0,:b7,(-1)\
,RELIGIONCODE),RACECODE=DECODE(:b8,0,:b9,(-1),RACECODE),CITIZENSHIPSTATCODE=DE\
CODE(:b10,0,:b11,(-1),CITIZENSHIPSTATCODE),HKIND=DECODE(:b12,0,:b13,(-1),HKIND\
),CURRLONGNAME=DECODE(:b14,0,:b15,(-1),CURRLONGNAME),GMPCSHORTNAME1=DECODE(:b1\
6,0,:b17,(-1),GMPCSHORTNAME1),GMPCSHORTNAME2=DECODE(:b18,0,:b19,(-1),GMPCSHORT\
NAME2),GMPCSHORTNAME3=DECODE(:b20,0,:b21,(-1),GMPCSHORTNAME3),IDTYPE=DECODE(:b\
22,0,:b23,(-1),IDTYPE),IDNO=DECODE(:b24,0,:b25,(-1),IDNO),BIRTHPLACE=DECODE(:b\
26,0,:b27,(-1),BIRTHPLACE),RJIND=DECODE(:b28,0,:b29,(-1),RJIND) where APPLID=:\
b30";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1419;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&gender_ind;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(short);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&gender;
 sqlstm.sqhstl[1] = (unsigned int  )1;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&birth_date_ind;
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(short);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)birth_date;
 sqlstm.sqhstl[3] = (unsigned int  )9;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&unknown_bi_ind;
 sqlstm.sqhstl[4] = (unsigned int  )sizeof(short);
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&unknown_bi;
 sqlstm.sqhstl[5] = (unsigned int  )1;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&religion_ind;
 sqlstm.sqhstl[6] = (unsigned int  )sizeof(short);
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&religion;
 sqlstm.sqhstl[7] = (unsigned int  )1;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&race_ind;
 sqlstm.sqhstl[8] = (unsigned int  )sizeof(short);
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)0;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&race;
 sqlstm.sqhstl[9] = (unsigned int  )1;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)0;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&citizen_stat_ind;
 sqlstm.sqhstl[10] = (unsigned int  )sizeof(short);
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)0;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&citizen_stat;
 sqlstm.sqhstl[11] = (unsigned int  )1;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)0;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&hk_flag_ind;
 sqlstm.sqhstl[12] = (unsigned int  )sizeof(short);
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)0;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)&hk_flag;
 sqlstm.sqhstl[13] = (unsigned int  )1;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)0;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
 sqlstm.sqhstv[14] = (         void  *)&current_long_name_ind;
 sqlstm.sqhstl[14] = (unsigned int  )sizeof(short);
 sqlstm.sqhsts[14] = (         int  )0;
 sqlstm.sqindv[14] = (         void  *)0;
 sqlstm.sqinds[14] = (         int  )0;
 sqlstm.sqharm[14] = (unsigned int  )0;
 sqlstm.sqadto[14] = (unsigned short )0;
 sqlstm.sqtdso[14] = (unsigned short )0;
 sqlstm.sqhstv[15] = (         void  *)&current_long_name;
 sqlstm.sqhstl[15] = (unsigned int  )153;
 sqlstm.sqhsts[15] = (         int  )0;
 sqlstm.sqindv[15] = (         void  *)0;
 sqlstm.sqinds[15] = (         int  )0;
 sqlstm.sqharm[15] = (unsigned int  )0;
 sqlstm.sqadto[15] = (unsigned short )0;
 sqlstm.sqtdso[15] = (unsigned short )0;
 sqlstm.sqhstv[16] = (         void  *)&gmpc_short_name1_ind;
 sqlstm.sqhstl[16] = (unsigned int  )sizeof(short);
 sqlstm.sqhsts[16] = (         int  )0;
 sqlstm.sqindv[16] = (         void  *)0;
 sqlstm.sqinds[16] = (         int  )0;
 sqlstm.sqharm[16] = (unsigned int  )0;
 sqlstm.sqadto[16] = (unsigned short )0;
 sqlstm.sqtdso[16] = (unsigned short )0;
 sqlstm.sqhstv[17] = (         void  *)&gmpc_short_name1;
 sqlstm.sqhstl[17] = (unsigned int  )33;
 sqlstm.sqhsts[17] = (         int  )0;
 sqlstm.sqindv[17] = (         void  *)0;
 sqlstm.sqinds[17] = (         int  )0;
 sqlstm.sqharm[17] = (unsigned int  )0;
 sqlstm.sqadto[17] = (unsigned short )0;
 sqlstm.sqtdso[17] = (unsigned short )0;
 sqlstm.sqhstv[18] = (         void  *)&gmpc_short_name2_ind;
 sqlstm.sqhstl[18] = (unsigned int  )sizeof(short);
 sqlstm.sqhsts[18] = (         int  )0;
 sqlstm.sqindv[18] = (         void  *)0;
 sqlstm.sqinds[18] = (         int  )0;
 sqlstm.sqharm[18] = (unsigned int  )0;
 sqlstm.sqadto[18] = (unsigned short )0;
 sqlstm.sqtdso[18] = (unsigned short )0;
 sqlstm.sqhstv[19] = (         void  *)&gmpc_short_name2;
 sqlstm.sqhstl[19] = (unsigned int  )33;
 sqlstm.sqhsts[19] = (         int  )0;
 sqlstm.sqindv[19] = (         void  *)0;
 sqlstm.sqinds[19] = (         int  )0;
 sqlstm.sqharm[19] = (unsigned int  )0;
 sqlstm.sqadto[19] = (unsigned short )0;
 sqlstm.sqtdso[19] = (unsigned short )0;
 sqlstm.sqhstv[20] = (         void  *)&gmpc_short_name3_ind;
 sqlstm.sqhstl[20] = (unsigned int  )sizeof(short);
 sqlstm.sqhsts[20] = (         int  )0;
 sqlstm.sqindv[20] = (         void  *)0;
 sqlstm.sqinds[20] = (         int  )0;
 sqlstm.sqharm[20] = (unsigned int  )0;
 sqlstm.sqadto[20] = (unsigned short )0;
 sqlstm.sqtdso[20] = (unsigned short )0;
 sqlstm.sqhstv[21] = (         void  *)&gmpc_short_name3;
 sqlstm.sqhstl[21] = (unsigned int  )23;
 sqlstm.sqhsts[21] = (         int  )0;
 sqlstm.sqindv[21] = (         void  *)0;
 sqlstm.sqinds[21] = (         int  )0;
 sqlstm.sqharm[21] = (unsigned int  )0;
 sqlstm.sqadto[21] = (unsigned short )0;
 sqlstm.sqtdso[21] = (unsigned short )0;
 sqlstm.sqhstv[22] = (         void  *)&id_type_ind;
 sqlstm.sqhstl[22] = (unsigned int  )sizeof(short);
 sqlstm.sqhsts[22] = (         int  )0;
 sqlstm.sqindv[22] = (         void  *)0;
 sqlstm.sqinds[22] = (         int  )0;
 sqlstm.sqharm[22] = (unsigned int  )0;
 sqlstm.sqadto[22] = (unsigned short )0;
 sqlstm.sqtdso[22] = (unsigned short )0;
 sqlstm.sqhstv[23] = (         void  *)id_type;
 sqlstm.sqhstl[23] = (unsigned int  )3;
 sqlstm.sqhsts[23] = (         int  )0;
 sqlstm.sqindv[23] = (         void  *)0;
 sqlstm.sqinds[23] = (         int  )0;
 sqlstm.sqharm[23] = (unsigned int  )0;
 sqlstm.sqadto[23] = (unsigned short )0;
 sqlstm.sqtdso[23] = (unsigned short )0;
 sqlstm.sqhstv[24] = (         void  *)&id_no_ind;
 sqlstm.sqhstl[24] = (unsigned int  )sizeof(short);
 sqlstm.sqhsts[24] = (         int  )0;
 sqlstm.sqindv[24] = (         void  *)0;
 sqlstm.sqinds[24] = (         int  )0;
 sqlstm.sqharm[24] = (unsigned int  )0;
 sqlstm.sqadto[24] = (unsigned short )0;
 sqlstm.sqtdso[24] = (unsigned short )0;
 sqlstm.sqhstv[25] = (         void  *)&id_no;
 sqlstm.sqhstl[25] = (unsigned int  )18;
 sqlstm.sqhsts[25] = (         int  )0;
 sqlstm.sqindv[25] = (         void  *)0;
 sqlstm.sqinds[25] = (         int  )0;
 sqlstm.sqharm[25] = (unsigned int  )0;
 sqlstm.sqadto[25] = (unsigned short )0;
 sqlstm.sqtdso[25] = (unsigned short )0;
 sqlstm.sqhstv[26] = (         void  *)&birth_place_ind;
 sqlstm.sqhstl[26] = (unsigned int  )sizeof(short);
 sqlstm.sqhsts[26] = (         int  )0;
 sqlstm.sqindv[26] = (         void  *)0;
 sqlstm.sqinds[26] = (         int  )0;
 sqlstm.sqharm[26] = (unsigned int  )0;
 sqlstm.sqadto[26] = (unsigned short )0;
 sqlstm.sqtdso[26] = (unsigned short )0;
 sqlstm.sqhstv[27] = (         void  *)&birth_place;
 sqlstm.sqhstl[27] = (unsigned int  )28;
 sqlstm.sqhsts[27] = (         int  )0;
 sqlstm.sqindv[27] = (         void  *)0;
 sqlstm.sqinds[27] = (         int  )0;
 sqlstm.sqharm[27] = (unsigned int  )0;
 sqlstm.sqadto[27] = (unsigned short )0;
 sqlstm.sqtdso[27] = (unsigned short )0;
 sqlstm.sqhstv[28] = (         void  *)&rj_ind_ind;
 sqlstm.sqhstl[28] = (unsigned int  )sizeof(short);
 sqlstm.sqhsts[28] = (         int  )0;
 sqlstm.sqindv[28] = (         void  *)0;
 sqlstm.sqinds[28] = (         int  )0;
 sqlstm.sqharm[28] = (unsigned int  )0;
 sqlstm.sqadto[28] = (unsigned short )0;
 sqlstm.sqtdso[28] = (unsigned short )0;
 sqlstm.sqhstv[29] = (         void  *)rj_ind;
 sqlstm.sqhstl[29] = (unsigned int  )3;
 sqlstm.sqhsts[29] = (         int  )0;
 sqlstm.sqindv[29] = (         void  *)0;
 sqlstm.sqinds[29] = (         int  )0;
 sqlstm.sqharm[29] = (unsigned int  )0;
 sqlstm.sqadto[29] = (unsigned short )0;
 sqlstm.sqtdso[29] = (unsigned short )0;
 sqlstm.sqhstv[30] = (         void  *)appl_id;
 sqlstm.sqhstl[30] = (unsigned int  )20;
 sqlstm.sqhsts[30] = (         int  )0;
 sqlstm.sqindv[30] = (         void  *)0;
 sqlstm.sqinds[30] = (         int  )0;
 sqlstm.sqharm[30] = (unsigned int  )0;
 sqlstm.sqadto[30] = (unsigned short )0;
 sqlstm.sqtdso[30] = (unsigned short )0;
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
		userlog(" update_disputed_info : Updating disputed data in APPNT_JPN_INFO failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"update_disputed_info: Updating disputed data in APPNT_JPN_INFO failed ");
		sprintf(excep_log.error_msg, "update_disputed_info: Updating disputed data in APPNT_JPN_INFO failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return UPDATE_ERROR;
	}
	
	return SUCCESS;

}

/********************************************************************/
/* Function Name : insert_into_legacy_request()                     */
/* Input         : Struct legacy_req - information required to log  */
/* Description   : This function is used to insert the details of   */
/*                 service being called for Legacy                  */
/* Return values : SUCCESS / Error code								*/
/* Limitations   : None                                             */
/********************************************************************/
int insert_into_legacy_request(LEGACY_REQUEST_T legacy_req,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


		/* varchar appl_id[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } appl_id
 = {0};

		char service_id[PROG_ID_SIZE] = {0};
		/* varchar user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id
 = {0};

		char branch_code[BRANCH_CODE_SIZE] = {0};
		int  request_stat = 0;
		char check_agency = 0;
		char request_flag = 0;
		int ret_val =0;

		short appl_id_ind  = -1;
		short service_id_ind  = -1;
		short user_id_ind  = -1;
		short branch_code_ind  = -1;
		short request_stat_ind  = -1;
		short check_agency_ind  = -1;
		short request_flag_ind  = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	/* Copy data into host variables */
	strcpy(appl_id.arr, legacy_req.appl_id);
	strcpy(branch_code, legacy_req.branch_code);
	strcpy(user_id.arr, legacy_req.user_id);
	itoa(legacy_req.service_id, service_id, 10);
	request_stat = legacy_req.request_stat;
	check_agency = legacy_req.check_agency;
	request_flag = legacy_req.request_flag;

	if (appl_id.arr[0] != '\0')
		appl_id_ind = 0;
	
	if (user_id.arr[0] != '\0')
		user_id_ind = 0;
	
	if (branch_code[0] != '\0')
		branch_code_ind = 0;
	
	if (service_id[0] != '\0')
		service_id_ind = 0;
	
	if (request_stat != '\0')
		request_stat_ind = 0;
	
	if(	check_agency != '\0')
		check_agency_ind = 0;
	
	if(request_flag != '\0')
		request_flag_ind = 0;
	

	setlen(appl_id);
	setlen(user_id);


#ifdef DEBUG
	userlog("insert_into_legacy_request :Application id - %s ", appl_id.arr);
	userlog("insert_into_legacy_request :User id - % ", user_id.arr);	
	userlog("insert_into_legacy_request :Branch code - %s ", branch_code);	
	userlog("insert_into_legacy_request :Service id - %s ", service_id);
	userlog("insert_into_legacy_request :Request Status - %d ",request_stat);
	userlog("insert_into_legacy_request :Check Agency - %c ", check_agency); 	
	userlog("insert_into_legacy_request :Request Flag - %c ", request_flag);	
#endif

	/* EXEC SQL INSERT INTO IJPN_LEGACY_REQUEST (LEGREQMSGID, LEGREQSTAT, LEGREQDATETIME,
									LEGREQFLAG, CHECKAGENCY, SERVICEID, APPLID, 
									USERID, BRANCHCODE)
	VALUES (MESSAGEID.NEXTVAL, :request_stat:request_stat_ind, SYSDATE, :request_flag:request_flag_ind,
			:check_agency:check_agency_ind, :service_id:service_id_ind,:appl_id:appl_id_ind,
			:user_id:user_id_ind, :branch_code:branch_code_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 31;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into IJPN_LEGACY_REQUEST (LEGREQMSGID,LEGREQSTAT,LEGR\
EQDATETIME,LEGREQFLAG,CHECKAGENCY,SERVICEID,APPLID,USERID,BRANCHCODE) values (\
MESSAGEID.nextval ,:b0:b1,SYSDATE,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11,:b12:b1\
3)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1558;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&request_stat;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&request_stat_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&request_flag;
 sqlstm.sqhstl[1] = (unsigned int  )1;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&request_flag_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&check_agency;
 sqlstm.sqhstl[2] = (unsigned int  )1;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&check_agency_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)service_id;
 sqlstm.sqhstl[3] = (unsigned int  )9;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&service_id_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&appl_id;
 sqlstm.sqhstl[4] = (unsigned int  )22;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&appl_id_ind;
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
 sqlstm.sqhstv[6] = (         void  *)branch_code;
 sqlstm.sqhstl[6] = (unsigned int  )7;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&branch_code_ind;
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


	
		if (SQLCODE != 0)
		{
#ifdef DEBUG
			userlog(" insert_into_legacy_request : Insert into LEGACY_REQUEST failed");
#endif
			strcpy(prog_log.remarks,"insert_into_legacy_request: Insert into LEGACY_REQUEST failed");
			sprintf(excep_log.error_msg, "insert_into_legacy_request: Insert into LEGACY_REQUEST failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
          
	 
         }

#ifdef DEBUG
			userlog("insert_into_legacy_request: Record inserted in LEGACY_REQUEST");
#endif

		return SUCCESS;

}


/********************************************************************/
/* Function Name : insert_into_legacy_request()                     */
/* Input         : Struct legacy_req - information required to log  */
/* Description   : This function is used to insert the details of   */
/*                 service being called for Legacy                  */
/* Return values : SUCCESS / Error code								*/
/* Limitations   : None                                             */
/********************************************************************/
int insert_into_legacy_request_jpn(LEGACY_REQUEST_T legacy_req, char applstat, void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


		/* varchar appl_id[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } appl_id
 = {0};

		char service_id[PROG_ID_SIZE] = {0};
		/* varchar user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id
 = {0};

		char branch_code[BRANCH_CODE_SIZE] = {0};
		int  request_stat = 0;
		char check_agency = 0;
		char request_flag = 0;
		int ret_val =0;

		int cnt1=0;

		short appl_id_ind  = -1;
		short service_id_ind  = -1;
		short user_id_ind  = -1;
		short branch_code_ind  = -1;
		short request_stat_ind  = -1;
		short check_agency_ind  = -1;
		short request_flag_ind  = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	/* Copy data into host variables */
	strcpy(appl_id.arr, legacy_req.appl_id);
	strcpy(branch_code, legacy_req.branch_code);
	strcpy(user_id.arr, legacy_req.user_id);
	itoa(legacy_req.service_id, service_id, 10);
	request_stat = legacy_req.request_stat;
	check_agency = legacy_req.check_agency;
	request_flag = legacy_req.request_flag;

	if (appl_id.arr[0] != '\0')
		appl_id_ind = 0;
	
	if (user_id.arr[0] != '\0')
		user_id_ind = 0;
	
	if (branch_code[0] != '\0')
		branch_code_ind = 0;
	
	if (service_id[0] != '\0')
		service_id_ind = 0;
	
	if (request_stat != '\0')
		request_stat_ind = 0;
	
	if(	check_agency != '\0')
		check_agency_ind = 0;
	
	if(request_flag != '\0')
		request_flag_ind = 0;
	

	setlen(appl_id);
	setlen(user_id);


#ifdef DEBUG
	userlog("insert_into_legacy_request_jpn :Application id - %s ", appl_id.arr);
	userlog("insert_into_legacy_request_jpn :User id - % ", user_id.arr);	
	userlog("insert_into_legacy_request_jpn :Branch code - %s ", branch_code);	
	userlog("insert_into_legacy_request_jpn :Service id - %s ", service_id);
	userlog("insert_into_legacy_request_jpn :Request Status - %d ",request_stat);
	userlog("insert_into_legacy_request_jpn :Check Agency - %c ", check_agency); 	
	userlog("insert_into_legacy_request_jpn :Request Flag - %c ", request_flag);	
#endif

#ifdef DEBUG
	userlog("insert_into_legacy_request_jpn :Appl status - :%c: ", applstat);	
#endif

	// This code is added on 15/02/06, 
	//  To avoid inserting 2 records in ijpn_legacy_request
	//  with legreqflag X and D or F


	if((applstat == 'D') || (applstat == 'A'))
	{
		cnt1=0;
		/* EXEC SQL SELECT COUNT(*) INTO :cnt1
			FROM IJPN_LEGACY_REQUEST
			WHERE LEGREQFLAG = 'D' 
			AND CHECKAGENCY = '1'
			AND APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 31;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from IJPN_LEGACY_REQUEST where (\
(LEGREQFLAG='D' and CHECKAGENCY='1') and APPLID=:b1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1601;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&cnt1;
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



	if(cnt1 == 0)
	{
			
	/* EXEC SQL INSERT INTO IJPN_LEGACY_REQUEST (
		LEGREQMSGID, LEGREQSTAT, LEGREQDATETIME,
		LEGREQFLAG, CHECKAGENCY, SERVICEID, 
		APPLID, USERID, BRANCHCODE)
		VALUES(
		MESSAGEID.NEXTVAL, :request_stat:request_stat_ind, SYSDATE, 
		'D',:check_agency:check_agency_ind, :service_id:service_id_ind,
		:appl_id:appl_id_ind,:user_id:user_id_ind, :branch_code:branch_code_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 31;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into IJPN_LEGACY_REQUEST (LEGREQMSGID,LEGREQSTAT,LEGR\
EQDATETIME,LEGREQFLAG,CHECKAGENCY,SERVICEID,APPLID,USERID,BRANCHCODE) values (\
MESSAGEID.nextval ,:b0:b1,SYSDATE,'D',:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1624;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&request_stat;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&request_stat_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&check_agency;
 sqlstm.sqhstl[1] = (unsigned int  )1;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&check_agency_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)service_id;
 sqlstm.sqhstl[2] = (unsigned int  )9;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&service_id_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&appl_id;
 sqlstm.sqhstl[3] = (unsigned int  )22;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&appl_id_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&user_id;
 sqlstm.sqhstl[4] = (unsigned int  )11;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&user_id_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)branch_code;
 sqlstm.sqhstl[5] = (unsigned int  )7;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&branch_code_ind;
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



		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog(" insert_into_legacy_request_jpn : Insert into LEGACY_REQUEST failed");
		#endif
			strcpy(prog_log.remarks,"insert_into_legacy_request_jpn: Insert into IJPN_LEGACY_REQUEST failed");
			sprintf(excep_log.error_msg, "insert_into_legacy_request_jpn: Insert into IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
          
	 
         }

		#ifdef DEBUG
			userlog("insert_into_legacy_request_jpn: Record inserted in IJPN_LEGACY_REQUEST");
		#endif

	}


	}
	else if((applstat == 'X') || (applstat == 'Q'))
	{

	cnt1=0;
	/* EXEC SQL SELECT COUNT(*) INTO :cnt1
		FROM IJPN_LEGACY_REQUEST
		WHERE LEGREQFLAG = 'F' 
		AND CHECKAGENCY = '1'
		AND APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 31;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from IJPN_LEGACY_REQUEST where ((\
LEGREQFLAG='F' and CHECKAGENCY='1') and APPLID=:b1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1663;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&cnt1;
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



	if(cnt1 == 0)
	{
			
	/* EXEC SQL INSERT INTO IJPN_LEGACY_REQUEST (
		LEGREQMSGID, LEGREQSTAT, LEGREQDATETIME,
		LEGREQFLAG, CHECKAGENCY, SERVICEID, 
		APPLID, USERID, BRANCHCODE)
		VALUES(
		MESSAGEID.NEXTVAL, :request_stat:request_stat_ind, SYSDATE, 
		'F',:check_agency:check_agency_ind, :service_id:service_id_ind,
		:appl_id:appl_id_ind,:user_id:user_id_ind, :branch_code:branch_code_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 31;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into IJPN_LEGACY_REQUEST (LEGREQMSGID,LEGREQSTAT,LEGR\
EQDATETIME,LEGREQFLAG,CHECKAGENCY,SERVICEID,APPLID,USERID,BRANCHCODE) values (\
MESSAGEID.nextval ,:b0:b1,SYSDATE,'F',:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1686;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&request_stat;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&request_stat_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&check_agency;
 sqlstm.sqhstl[1] = (unsigned int  )1;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&check_agency_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)service_id;
 sqlstm.sqhstl[2] = (unsigned int  )9;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&service_id_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&appl_id;
 sqlstm.sqhstl[3] = (unsigned int  )22;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&appl_id_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&user_id;
 sqlstm.sqhstl[4] = (unsigned int  )11;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&user_id_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)branch_code;
 sqlstm.sqhstl[5] = (unsigned int  )7;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&branch_code_ind;
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




		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog(" insert_into_legacy_request_jpn : Insert into IJPN_LEGACY_REQUEST failed");
		#endif
			strcpy(prog_log.remarks,"insert_into_legacy_request_jpn: Insert into IJPN_LEGACY_REQUEST failed");
			sprintf(excep_log.error_msg, "insert_into_legacy_request_jpn: Insert into IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
          
	 
         }

		#ifdef DEBUG
			userlog("insert_into_legacy_request_jpn: Record inserted in IJPN_LEGACY_REQUEST");
		#endif

	}


	}
	else
	{

	/* EXEC SQL INSERT INTO IJPN_LEGACY_REQUEST (LEGREQMSGID, LEGREQSTAT, LEGREQDATETIME,
									LEGREQFLAG, CHECKAGENCY, SERVICEID, APPLID, 
									USERID, BRANCHCODE)
	VALUES (MESSAGEID.NEXTVAL, :request_stat:request_stat_ind, SYSDATE, :request_flag:request_flag_ind,
			:check_agency:check_agency_ind, :service_id:service_id_ind,:appl_id:appl_id_ind,
			:user_id:user_id_ind, :branch_code:branch_code_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 31;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into IJPN_LEGACY_REQUEST (LEGREQMSGID,LEGREQSTAT,LEGR\
EQDATETIME,LEGREQFLAG,CHECKAGENCY,SERVICEID,APPLID,USERID,BRANCHCODE) values (\
MESSAGEID.nextval ,:b0:b1,SYSDATE,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11,:b12:b1\
3)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1725;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&request_stat;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&request_stat_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&request_flag;
 sqlstm.sqhstl[1] = (unsigned int  )1;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&request_flag_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&check_agency;
 sqlstm.sqhstl[2] = (unsigned int  )1;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&check_agency_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)service_id;
 sqlstm.sqhstl[3] = (unsigned int  )9;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&service_id_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&appl_id;
 sqlstm.sqhstl[4] = (unsigned int  )22;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&appl_id_ind;
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
 sqlstm.sqhstv[6] = (         void  *)branch_code;
 sqlstm.sqhstl[6] = (unsigned int  )7;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&branch_code_ind;
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


	
		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog(" insert_into_legacy_request_jpn : Insert into LEGACY_REQUEST failed");
		#endif
			strcpy(prog_log.remarks,"insert_into_legacy_request_jpn: Insert into LEGACY_REQUEST failed");
			sprintf(excep_log.error_msg, "insert_into_legacy_request_jpn: Insert into LEGACY_REQUEST failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
          
	 
         }

		#ifdef DEBUG
			userlog("insert_into_legacy_request_jpn: Record inserted in LEGACY_REQUEST");
		#endif

	}

		return SUCCESS;

}


/********************************************************************************/
/* Function name: update_agency_on_chip											*/
/* Description	: This function updates the agency on chip with maximum Card	*/
/*                CARD_STATUS table												*/
/* Input		: KPT no, Agency on chip										*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/
int update_agency_on_chip(char *kptno, char *agency_on_chip, HEADER_T header,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char kpt_no[KPT_SIZE] = {0};
		/* varchar ag_on_chip[AGENCY_ON_CHIP_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } ag_on_chip
 = {0};

		/* varchar user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id
 = {0};

		/* varchar workstation_id[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } workstation_id
 = {0};

		char branch_code[BRANCH_CODE_SIZE];

		short kpt_no_ind = -1;
		short ag_on_chip_ind  = -1;
		short user_id_ind  = -1;
		short workstation_id_ind  = -1;
		short branch_code_ind  = -1;
		
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	/* Populate the host variables	*/

	if (0 != strcmp(kptno, ""))
	{
		strcpy(kpt_no, kptno);	
		kpt_no_ind  = 0;
	}
	
	if (0 != strcmp(agency_on_chip, ""))
	{
		strcpy(ag_on_chip.arr, agency_on_chip);	
		setlen(ag_on_chip);
		ag_on_chip_ind  = 0;
	}

	if (header.user_id[0] != '\0')
	{
		strcpy(user_id.arr, header.user_id);	
		setlen(user_id);
		user_id_ind  = 0;
	}

	if (header.workstation_id[0] != '\0')
	{
		strcpy(workstation_id.arr, header.workstation_id);	
		setlen(workstation_id);
		workstation_id_ind  = 0;
	}

	if (header.branch_code[0] != '\0')
	{
		strcpy(branch_code, header.branch_code);	
		branch_code_ind  = 0;
	}

	/* Copy data into host variables */

#ifdef DEBUG
	userlog("update_agency_on_chip :KPT no - %s ", kpt_no);	
	userlog("update_agency_on_chip :Agency on chip - %s ", ag_on_chip.arr);	
	
#endif

	/* EXEC SQL UPDATE CARD_STATUS
		SET AGENCYONCHIP = :ag_on_chip:ag_on_chip_ind,
			USERID = :user_id:user_id_ind ,
			TIMESTAMP = SYSDATE,
			BRANCHCODE = :branch_code:branch_code_ind,
			WSID = :workstation_id:workstation_id_ind
		WHERE KPTNO = :kpt_no:kpt_no_ind
		AND CARDVERSIONNO = (SELECT MAX(CARDVERSIONNO) FROM CARD_STATUS 
								WHERE KPTNO = :kpt_no:kpt_no_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 31;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update CARD_STATUS  set AGENCYONCHIP=:b0:b1,USERID=:b2:b3, t\
imestamp =SYSDATE,BRANCHCODE=:b4:b5,WSID=:b6:b7 where (KPTNO=:b8:b9 and CARDVE\
RSIONNO=(select max(CARDVERSIONNO)  from CARD_STATUS where KPTNO=:b8:b11))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1768;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&ag_on_chip;
 sqlstm.sqhstl[0] = (unsigned int  )11;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&ag_on_chip_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&user_id;
 sqlstm.sqhstl[1] = (unsigned int  )11;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&user_id_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)branch_code;
 sqlstm.sqhstl[2] = (unsigned int  )7;
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
 sqlstm.sqhstv[4] = (         void  *)kpt_no;
 sqlstm.sqhstl[4] = (unsigned int  )13;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&kpt_no_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)kpt_no;
 sqlstm.sqhstl[5] = (unsigned int  )13;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&kpt_no_ind;
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


	
		if (SQLCODE != 0)
		{
#ifdef DEBUG
			userlog(" update_agency_on_chip : Updating Agency on chip in CARD_STATUS failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"update_agency_on_chip: Updating Agency on chip in CARD_STATUS failed");
			sprintf(excep_log.error_msg, "update_agency_on_chip: Updating Agency on chip in CARD_STATUS failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return UPDATE_ERROR;
          
	 
         }

#ifdef DEBUG
			userlog("update_agency_on_chip: Record updated in CARD_STATUS");
#endif

		return SUCCESS;

}

/********************************************************************************/
/* Function name: get_agency_on_chip											*/
/* Description	: This function retrieves the agency on chip with maximum Card	*/
/*                CARD_STATUS table												*/
/* Input		: KPT no, Pointer to variable to be populated with Agency on    */
/*                chip														    */
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int get_agency_on_chip(char *kptno, char *agency_on_chip,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char kpt_no[KPT_SIZE] = {0};
		/* varchar ag_on_chip[AGENCY_ON_CHIP_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } ag_on_chip
 = {0};


		short kpt_no_ind = -1;
		short ag_on_chip_ind  = -1;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	/* Populate the host variables	*/

	if (0 != strcmp(kptno, ""))
	{
		strcpy(kpt_no, kptno);	
		kpt_no_ind  = 0;
	}
	
#ifdef DEBUG
	userlog("get_agency_on_chip :KPT no - %s ", kpt_no);	
#endif

	/* EXEC SQL SELECT AGENCYONCHIP INTO :ag_on_chip:ag_on_chip_ind 
			FROM CARD_STATUS
		WHERE KPTNO = :kpt_no:kpt_no_ind
		AND CARDVERSIONNO = (SELECT MAX(CARDVERSIONNO) FROM CARD_STATUS 
								WHERE KPTNO = :kpt_no:kpt_no_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 31;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select AGENCYONCHIP into :b0:b1  from CARD_STATUS where (KPT\
NO=:b2:b3 and CARDVERSIONNO=(select max(CARDVERSIONNO)  from CARD_STATUS where\
 KPTNO=:b2:b5))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1807;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&ag_on_chip;
 sqlstm.sqhstl[0] = (unsigned int  )11;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&ag_on_chip_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)kpt_no;
 sqlstm.sqhstl[1] = (unsigned int  )13;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&kpt_no_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)kpt_no;
 sqlstm.sqhstl[2] = (unsigned int  )13;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&kpt_no_ind;
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


	
		if (SQLCODE != 0)
		{
#ifdef DEBUG
			userlog(" get_agency_on_chip : Selecting Agency on chip from CARD_STATUS failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"get_agency_on_chip: Selecting Agency on chip from CARD_STATUS failed");
			sprintf(excep_log.error_msg, "get_agency_on_chip: Selecting Agency on chip from CARD_STATUS failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
	 
         }

		if (0 == ag_on_chip_ind)
		{
			setnull(ag_on_chip);
			strcpy(agency_on_chip, ag_on_chip.arr);
		}
		else
		{
#ifdef DEBUG
			userlog("get_agency_on_chip: Agency on chip is NULL");
#endif
		}

#ifdef DEBUG
	userlog("get_agency_on_chip: Agency on chip for active card - %s", agency_on_chip);
#endif

		return SUCCESS;

}

/********************************************************************************/
/* Function name: delete_old_class												*/
/* Description	: This function retrievs the old class for the given license    */
/*                type and given new class to be added from PSV_GDL_CLASS_REL   */
/* Input		: Application id, Transaction details							*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int delete_old_class(char *application_id, TXN_DETAILS_T *txn_details, int *record_srno,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		char license_type[LIC_TYPE_SIZE] = {0};
		char license_class[LIC_CLS_SIZE] = {0};
		char old_class[LIC_CLS_SIZE] = {0};
		int record_serial_no = 0;
						
		short license_type_ind = -1;
		short license_class_ind = -1;
		short old_class_ind = -1;
		short record_serial_no_ind = -1;
				
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(appl_id, application_id);

	if (0 != txn_details->lic_type[0] )
	{
		strcpy(license_type, txn_details->lic_type);
		license_type_ind = 0;
	}

	if (0 != txn_details->lic_class[0] )
	{
		strcpy(license_class, txn_details->lic_class);
		license_class_ind = 0;
	}

	
	/* EXEC SQL SELECT RECORDSERNO INTO :record_serial_no:record_serial_no_ind
				FROM APPNT_LIC_INFO
		WHERE APPLID = :appl_id
		AND LICTYPE = :license_type:license_type_ind
		AND LICCLASS IN (SELECT LICCLASS FROM PSV_GDL_CLASS_REL A
							WHERE A.LICTYPE = :license_type:license_type_ind
							CONNECT BY A.LICCLASS = PRIOR A.NEWLICCLASS
							START WITH A.LICTYPE = :license_type:license_type_ind
							AND A.NEWLICCLASS = :license_class:license_class_ind)
		AND SUBSTR(LICCLASS, 1, 1) <> 'D'; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 31;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select RECORDSERNO into :b0:b1  from APPNT_LIC_INFO where ((\
(APPLID=:b2 and LICTYPE=:b3:b4) and LICCLASS in (select LICCLASS  from PSV_GDL\
_CLASS_REL A where A.LICTYPE=:b3:b6 connect by A.LICCLASS=prior A.NEWLICCLASS \
start with (A.LICTYPE=:b3:b8 and A.NEWLICCLASS=:b9:b10) )) and SUBSTR(LICCLASS\
,1,1)<>'D')";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1834;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&record_serial_no;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&record_serial_no_ind;
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
 sqlstm.sqhstv[2] = (         void  *)license_type;
 sqlstm.sqhstl[2] = (unsigned int  )4;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&license_type_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)license_type;
 sqlstm.sqhstl[3] = (unsigned int  )4;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&license_type_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)license_type;
 sqlstm.sqhstl[4] = (unsigned int  )4;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&license_type_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)license_class;
 sqlstm.sqhstl[5] = (unsigned int  )3;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&license_class_ind;
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


		
		
	if(SQLCODE != 0 && !NO_DATA_FOUND)
	{
#ifdef DEBUG
		userlog(" delete_old_class : Selecting Record serial no from APPNT_LIC_INFO failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"delete_old_class: Selecting Record serial no from APPNT_LIC_INFO failed");
		sprintf(excep_log.error_msg, "delete_old_class: Selecting Record serial no from APPNT_LIC_INFO failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}

#ifdef DEBUG
	userlog(" delete_old_class : Record sr no- %d", record_serial_no);
#endif

	if (record_serial_no_ind == 0)
	{
		
		*record_srno = record_serial_no;

		/* Delete the record with old class from APPNT_LIC_INFO, if any */

		/* EXEC SQL DELETE FROM APPNT_LIC_INFO
			WHERE APPLID = :appl_id
			AND LICTYPE = :license_type:license_type_ind
			AND LICCLASS IN (SELECT LICCLASS FROM PSV_GDL_CLASS_REL A
							WHERE A.LICTYPE = :license_type:license_type_ind
							CONNECT BY A.LICCLASS = PRIOR A.NEWLICCLASS
							START WITH A.LICTYPE = :license_type:license_type_ind
							AND A.NEWLICCLASS = :license_class:license_class_ind)
			AND SUBSTR(LICCLASS, 1, 1) <> 'D'; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 31;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "delete  from APPNT_LIC_INFO  where (((APPLID=:b0 and LICTYP\
E=:b1:b2) and LICCLASS in (select LICCLASS  from PSV_GDL_CLASS_REL A where A.L\
ICTYPE=:b1:b4 connect by A.LICCLASS=prior A.NEWLICCLASS start with (A.LICTYPE=\
:b1:b6 and A.NEWLICCLASS=:b7:b8) )) and SUBSTR(LICCLASS,1,1)<>'D')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1873;
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
  sqlstm.sqhstv[1] = (         void  *)license_type;
  sqlstm.sqhstl[1] = (unsigned int  )4;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&license_type_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)license_type;
  sqlstm.sqhstl[2] = (unsigned int  )4;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&license_type_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)license_type;
  sqlstm.sqhstl[3] = (unsigned int  )4;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&license_type_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)license_class;
  sqlstm.sqhstl[4] = (unsigned int  )3;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&license_class_ind;
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


		

		if(SQLCODE != 0 && !NO_DATA_FOUND)	/* Ignore no data found */
		{
#ifdef DEBUG
			userlog(" delete_old_class : Deletion from APPNT_LIC_INFO failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"delete_old_class: Deletion from APPNT_LIC_INFO failed ");
			sprintf(excep_log.error_msg, "delete_old_class: Deletion from APPNT_LIC_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return DELETE_ERROR;
		}

#ifdef DEBUG
		userlog(" delete_old_class : Deleted from APPNT_LIC_INFO successfully");
#endif
	}
	else
	{
#ifdef DEBUG
		userlog(" delete_old_class : Record with given class doesn't exist in PSV_GDL_CLASS_REL");
#endif

	}
	
	return SUCCESS;
}

/********************************************************************************/
/* Function name: set_card_expiry_date											*/
/* Description	: This function sets the Card expiry date based upon the        */
/*				  Application approval date										*/
/* Input		: KPT number, Application id									*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int set_card_expiry_date(char *kpt_number, char *application_id, int txn_type, char *immexpdate,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		char kpt_no[KPT_SIZE] = {0};
		char approval_date[DATE_SIZE] = {0};
		char green_card_exp_date[DATE_SIZE] = {0};
		int day_diff = 0;
		int green_card_exp_period = 0;
		/* varchar green_card_exp_param[SYS_PARAM_NAME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } green_card_exp_param
 = {0};

		char chekdate[DATE_SIZE] = {0};
		char gcexpdate[DATE_SIZE] = {0};

		short kpt_no_ind = -1;
		short approval_date_ind = -1;
		short green_card_exp_date_ind = -1;
		short green_card_exp_period_ind = -1;
		short chekdate_ind = -1;
		short gcexpdate_ind = -1;
				
		sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	strcpy(appl_id, application_id);

	if (0 != kpt_number[0] )
	{
		strcpy(kpt_no, kpt_number);	
		kpt_no_ind  = 0;
	}

/*Added by brijesh on 24-09-2002 as per new requirment given by Vasanth*/

	/* EXEC SQL SELECT TO_CHAR(SYSDATE, 'YYYYMMDD')
	INTO  :approval_date:approval_date_ind
	FROM DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 31;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(SYSDATE,'YYYYMMDD') into :b0:b1  from DUAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1908;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)approval_date;
 sqlstm.sqhstl[0] = (unsigned int  )9;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&approval_date_ind;
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
		userlog("set_card_expiry_date : Select SYSDATE from DUAL failed for KPT %s: %s", kpt_no, SQLMSG);
#endif
		strcpy(prog_log.remarks,"set_card_expiry_date: Select SYSDATE from DUAL failed ");
		sprintf(excep_log.error_msg, "set_card_expiry_date: Select SYSDATE from DUAL failed for KPT %s : %s", kpt_no, SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}

	#ifdef DEBUG
		userlog("set_card_expiry_date : Approval date - %s", approval_date);
	#endif


	if(immexpdate[0] != '\0')
	{

		/* EXEC SQL SELECT
			TO_CHAR(ADD_MONTHS(SYSDATE, 24) - 1, 'YYYYMMDD')
				INTO :green_card_exp_date:green_card_exp_date_ind
			FROM DUAL; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 31;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select TO_CHAR((ADD_MONTHS(SYSDATE,24)-1),'YYYYMMDD') into \
:b0:b1  from DUAL ";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1927;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)green_card_exp_date;
  sqlstm.sqhstl[0] = (unsigned int  )9;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&green_card_exp_date_ind;
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
			userlog(" set_card_expiry_date : Selecting Card expiry date failed : %s", SQLMSG);
	#endif
			strcpy(prog_log.remarks,"set_card_expiry_date: Selecting Card expiry date failed");
			sprintf(excep_log.error_msg, "set_card_expiry_date: Selecting Card expiry date failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}

	#ifdef DEBUG
		userlog("set_card_expiry_date : Card expiry date - %s", green_card_exp_date);
	#endif

		/* EXEC SQL SELECT (TO_DATE(:immexpdate, 'YYYYMMDD') - TO_DATE(:green_card_exp_date, 'YYYYMMDD'))
				INTO :day_diff
			FROM DUAL; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 31;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select (TO_DATE(:b0,'YYYYMMDD')-TO_DATE(:b1,'YYYYMMDD')) in\
to :b2  from DUAL ";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1946;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)immexpdate;
  sqlstm.sqhstl[0] = (unsigned int  )0;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)green_card_exp_date;
  sqlstm.sqhstl[1] = (unsigned int  )9;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&day_diff;
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
			userlog(" set_card_expiry_date : difference betweem IMM expiry date and Card expiry date failed:%s:", SQLMSG);
	#endif
			strcpy(prog_log.remarks,"set_card_expiry_date: difference betweem IMM expiry date and Card expiry date failed");
			sprintf(excep_log.error_msg, "set_card_expiry_date: difference betweem IMM expiry date and Card expiry date failed:%s:", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}

		if (day_diff <= 0)
		{
			strcpy(green_card_exp_date, immexpdate);
		}
	}
	else
	{
		
		strcpy(green_card_exp_param.arr, "GREEN_CARD_EXP_PERIOD");
		setlen(green_card_exp_param);

		/* Get the green card expiry period value from SYS_CONFIG_PARMS */

		/* EXEC SQL SELECT TO_NUMBER(PARMVAL) INTO :green_card_exp_period:green_card_exp_period_ind
				FROM SYS_CONFIG_PARMS
			WHERE PARMNAME = :green_card_exp_param; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 31;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select TO_NUMBER(PARMVAL) into :b0:b1  from SYS_CONFIG_PARM\
S where PARMNAME=:b2";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1973;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&green_card_exp_period;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&green_card_exp_period_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&green_card_exp_param;
  sqlstm.sqhstl[1] = (unsigned int  )33;
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
			userlog("set_card_expiry_date : Select from SYS_CONFIG_PARMS failed for KPT %s: %s", kpt_no, SQLMSG);
	#endif
			strcpy(prog_log.remarks,"set_card_expiry_date: Select from SYS_CONFIG_PARMS failed ");
			sprintf(excep_log.error_msg, "set_card_expiry_date: Select from SYS_CONFIG_PARMS failed for KPT %s : %s", kpt_no, SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}
			
	#ifdef DEBUG
		userlog("set_card_expiry_date : Green card expity period - %d", green_card_exp_period);
	#endif

		if (green_card_exp_period_ind != 0)
			green_card_exp_period = 60;	/* Set default as 60 months */

	/*	if(txn_type == TXN_CONV)
		{
			EXEC SQL SELECT TO_CHAR(NVL(APPLAPPROVALDATE,SYSDATE), 'YYYYMMDD')
				INTO  :approval_date:approval_date_ind
				FROM JPN_INFO 
				WHERE KPTNO = :kpt_no:kpt_no_ind;

			if (SQLCODE != 0)
			{
		#ifdef DEBUG
				userlog("set_card_expiry_date : Select from JPN_INFO failed for KPT %s: %s", kpt_no, SQLMSG);
		#endif
				strcpy(prog_log.remarks,"set_card_expiry_date: Select from JPN_INFO failed ");
				sprintf(excep_log.error_msg, "set_card_expiry_date: Select from JPN_INFO failed for KPT %s : %s", kpt_no, SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return SELECT_ERROR;
			}
		}
		else if(txn_type == TXN_REPL)
		{
			EXEC SQL SELECT TO_CHAR(NVL(GREENCARDEXPDATE,SYSDATE), 'YYYYMMDD')
				INTO  :approval_date:approval_date_ind
				FROM JPN_INFO 
				WHERE KPTNO = :kpt_no:kpt_no_ind;

			if (SQLCODE != 0)
			{
		#ifdef DEBUG
				userlog("set_card_expiry_date : Select from JPN_INFO failed for KPT %s: %s", kpt_no, SQLMSG);
		#endif
				strcpy(prog_log.remarks,"set_card_expiry_date: Select from JPN_INFO failed ");
				sprintf(excep_log.error_msg, "set_card_expiry_date: Select from JPN_INFO failed for KPT %s : %s", kpt_no, SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return SELECT_ERROR;
			}
		}
	*/
		
		/* Add 2 years in Approval date to get the Card expiry date */
		/* Subtract one day from the date after 2 years */

		/* EXEC SQL SELECT
			TO_CHAR(ADD_MONTHS(TO_DATE(:approval_date:approval_date_ind, 'YYYYMMDD'), :green_card_exp_period) - 1, 'YYYYMMDD')
				INTO :green_card_exp_date:green_card_exp_date_ind
			FROM DUAL; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 31;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select TO_CHAR((ADD_MONTHS(TO_DATE(:b0:b1,'YYYYMMDD'),:b2)-\
1),'YYYYMMDD') into :b3:b4  from DUAL ";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1996;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)approval_date;
  sqlstm.sqhstl[0] = (unsigned int  )9;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&approval_date_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&green_card_exp_period;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)green_card_exp_date;
  sqlstm.sqhstl[2] = (unsigned int  )9;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&green_card_exp_date_ind;
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
			userlog(" set_card_expiry_date : Selecting Card expiry date failed : %s", SQLMSG);
	#endif
			strcpy(prog_log.remarks,"set_card_expiry_date: Selecting Card expiry date failed");
			sprintf(excep_log.error_msg, "set_card_expiry_date: Selecting Card expiry date failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}

	#ifdef DEBUG
		userlog("set_card_expiry_date : Card expiry date - %s", green_card_exp_date);
	#endif


		/* EXEC SQL SELECT TO_DATE(:green_card_exp_date:green_card_exp_date_ind, 'YYYYMMDD') - SYSDATE
				INTO :day_diff
			FROM DUAL; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 31;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select (TO_DATE(:b0:b1,'YYYYMMDD')-SYSDATE) into :b2  from \
DUAL ";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2023;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)green_card_exp_date;
  sqlstm.sqhstl[0] = (unsigned int  )9;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&green_card_exp_date_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&day_diff;
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



		if(SQLCODE != 0)
		{
	#ifdef DEBUG
			userlog(" set_card_expiry_date : Calculating difference betweem IMM expiry date and Card expiry date failed");
	#endif
			strcpy(prog_log.remarks,"set_card_expiry_date: Calculating difference betweem IMM expiry date and Card expiry date failed");
			sprintf(excep_log.error_msg, "set_card_expiry_date: Calculating difference betweem IMM expiry date and Card expiry date failed");
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}

		/* If Expiry date is less or equal to than sysdate */

		if (day_diff <= 0)
		{
	#ifdef DEBUG
			userlog("set_card_expiry_date : Card is already expired");
	#endif

			/* EXEC SQL SELECT TO_CHAR(SYSDATE, 'YYYYMMDD')
					INTO :approval_date:approval_date_ind
				FROM DUAL; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 31;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select TO_CHAR(SYSDATE,'YYYYMMDD') into :b0:b1  from DUAL ";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2046;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)approval_date;
   sqlstm.sqhstl[0] = (unsigned int  )9;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&approval_date_ind;
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
				userlog(" set_card_expiry_date : Selecting Approval date from DUAL failed : %s", SQLMSG);
	#endif
				strcpy(prog_log.remarks,"set_card_expiry_date: Selecting Approval date from DUAL failed");
				sprintf(excep_log.error_msg, "set_card_expiry_date: Selecting Approval date from DUAL failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return SELECT_ERROR;
			}

			/* Add 2 years in Approval date to get the Card expiry date */

			/* EXEC SQL SELECT
				TO_CHAR(ADD_MONTHS(TO_DATE(:approval_date:approval_date_ind, 'YYYYMMDD'), :green_card_exp_period) - 1, 'YYYYMMDD')
					INTO :green_card_exp_date:green_card_exp_date_ind
				FROM DUAL; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 31;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select TO_CHAR((ADD_MONTHS(TO_DATE(:b0:b1,'YYYYMMDD'),:b2)\
-1),'YYYYMMDD') into :b3:b4  from DUAL ";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2065;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)approval_date;
   sqlstm.sqhstl[0] = (unsigned int  )9;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&approval_date_ind;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&green_card_exp_period;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)green_card_exp_date;
   sqlstm.sqhstl[2] = (unsigned int  )9;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&green_card_exp_date_ind;
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
				userlog(" set_card_expiry_date : Selecting Card expiry date failed : %s", SQLMSG);
	#endif
				strcpy(prog_log.remarks,"set_card_expiry_date: Selecting Card expiry date failed");
				sprintf(excep_log.error_msg, "set_card_expiry_date: Selecting Card expiry date failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return SELECT_ERROR;
			}

		}
	}

#ifdef DEBUG
	userlog("set_card_expiry_date : Renewed approval date - %s", approval_date);
	userlog("set_card_expiry_date : Renewed card expiry date - %s", green_card_exp_date);
#endif

	// Added this code on 27/03/2015 for CR 291 
	// for greencardexpirydate checking if it is less than 6 months

	/* EXEC SQL SELECT TO_CHAR(NVL(GREENCARDEXPDATE,SYSDATE), 'YYYYMMDD')
			INTO  :gcexpdate:gcexpdate_ind
			FROM JPN_INFO 
			WHERE KPTNO = :kpt_no:kpt_no_ind; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 31;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(NVL(GREENCARDEXPDATE,SYSDATE),'YYYYMMDD') int\
o :b0:b1  from JPN_INFO where KPTNO=:b2:b3";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2092;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)gcexpdate;
 sqlstm.sqhstl[0] = (unsigned int  )9;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&gcexpdate_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)kpt_no;
 sqlstm.sqhstl[1] = (unsigned int  )13;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&kpt_no_ind;
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
					userlog("set_card_expiry_date : Select from JPN_INFO failed for KPT %s: %s", kpt_no, SQLMSG);
			#endif
			strcpy(prog_log.remarks,"set_card_expiry_date: Select from JPN_INFO failed ");
			sprintf(excep_log.error_msg, "set_card_expiry_date: Select from JPN_INFO failed for KPT %s : %s", kpt_no, SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}


		/* EXEC SQL SELECT
			TO_CHAR(ADD_MONTHS(SYSDATE, 6) - 1, 'YYYYMMDD')
				INTO :chekdate:chekdate_ind
			FROM DUAL; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 31;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select TO_CHAR((ADD_MONTHS(SYSDATE,6)-1),'YYYYMMDD') into :\
b0:b1  from DUAL ";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2115;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)chekdate;
  sqlstm.sqhstl[0] = (unsigned int  )9;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&chekdate_ind;
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



		day_diff = 0;
		/* EXEC SQL SELECT (TO_DATE(:gcexpdate, 'YYYYMMDD') - TO_DATE(:chekdate, 'YYYYMMDD'))
				INTO :day_diff
			FROM DUAL; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 31;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select (TO_DATE(:b0,'YYYYMMDD')-TO_DATE(:b1,'YYYYMMDD')) in\
to :b2  from DUAL ";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2134;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)gcexpdate;
  sqlstm.sqhstl[0] = (unsigned int  )9;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)chekdate;
  sqlstm.sqhstl[1] = (unsigned int  )9;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&day_diff;
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


		
	
	if(day_diff < 1)
	{
	/* Update the Approval date and Green card expiry date */

	/* EXEC SQL UPDATE APPNT_JPN_INFO
		SET APPLAPPROVALDATE = TO_DATE(:approval_date:approval_date_ind, 'YYYYMMDD'),
			GREENCARDEXPDATE = TO_DATE(:green_card_exp_date:green_card_exp_date_ind, 'YYYYMMDD')
		WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 31;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update APPNT_JPN_INFO  set APPLAPPROVALDATE=TO_DATE(:b0:b1,'\
YYYYMMDD'),GREENCARDEXPDATE=TO_DATE(:b2:b3,'YYYYMMDD') where APPLID=:b4";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2161;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)approval_date;
 sqlstm.sqhstl[0] = (unsigned int  )9;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&approval_date_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)green_card_exp_date;
 sqlstm.sqhstl[1] = (unsigned int  )9;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&green_card_exp_date_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)appl_id;
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
		#ifdef DEBUG
				userlog(" set_card_expiry_date : Updating Approval date in APPNT_JPN_INFO failed : %s", SQLMSG);
		#endif
			strcpy(prog_log.remarks,"set_card_expiry_date: Updating Approval date in APPNT_JPN_INFO failed");
			sprintf(excep_log.error_msg, "set_card_expiry_date: Updating Approval date in APPNT_JPN_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return UPDATE_ERROR;
		}

	#ifdef DEBUG
		userlog(" set_card_expiry_date : Approval date updated successfully");
	#endif
	
	}
	else
	{
		strcpy(green_card_exp_date,gcexpdate);

		/* EXEC SQL UPDATE APPNT_JPN_INFO
		SET APPLAPPROVALDATE = TO_DATE(:approval_date:approval_date_ind, 'YYYYMMDD'),
			GREENCARDEXPDATE = TO_DATE(:green_card_exp_date:green_card_exp_date_ind, 'YYYYMMDD')
		WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 31;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPNT_JPN_INFO  set APPLAPPROVALDATE=TO_DATE(:b0:b1,\
'YYYYMMDD'),GREENCARDEXPDATE=TO_DATE(:b2:b3,'YYYYMMDD') where APPLID=:b4";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2188;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)approval_date;
  sqlstm.sqhstl[0] = (unsigned int  )9;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&approval_date_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)green_card_exp_date;
  sqlstm.sqhstl[1] = (unsigned int  )9;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&green_card_exp_date_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)appl_id;
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
		#ifdef DEBUG
				userlog(" set_card_expiry_date : Updating Approval date in APPNT_JPN_INFO failed : %s", SQLMSG);
		#endif
			strcpy(prog_log.remarks,"set_card_expiry_date: Updating Approval date in APPNT_JPN_INFO failed");
			sprintf(excep_log.error_msg, "set_card_expiry_date: Updating Approval date in APPNT_JPN_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return UPDATE_ERROR;
		}

	}

	/* Update Card expiry date */

	/* EXEC SQL UPDATE CARD_STATUS
		SET CARDEXPDATE = TO_DATE(:green_card_exp_date:green_card_exp_date_ind, 'YYYYMMDD')
		WHERE KPTNO = :kpt_no:kpt_no_ind
		AND CARDVERSIONNO = (SELECT MAX(CARDVERSIONNO) FROM CARD_STATUS
								WHERE KPTNO = :kpt_no:kpt_no_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 31;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update CARD_STATUS  set CARDEXPDATE=TO_DATE(:b0:b1,'YYYYMMDD\
') where (KPTNO=:b2:b3 and CARDVERSIONNO=(select max(CARDVERSIONNO)  from CARD\
_STATUS where KPTNO=:b2:b5))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2215;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)green_card_exp_date;
 sqlstm.sqhstl[0] = (unsigned int  )9;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&green_card_exp_date_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)kpt_no;
 sqlstm.sqhstl[1] = (unsigned int  )13;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&kpt_no_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)kpt_no;
 sqlstm.sqhstl[2] = (unsigned int  )13;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&kpt_no_ind;
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
		userlog(" set_card_expiry_date : Updating Card expiry date in CARD_STATUS failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"set_card_expiry_date: Updating Card expiry date in CARD_STATUS failed");
		sprintf(excep_log.error_msg, "set_card_expiry_date: Updating Card expiry date in CARD_STATUS failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return UPDATE_ERROR;
	}
#ifdef DEBUG
	userlog(" set_card_expiry_date : Card expiry date updated successfully");
#endif

	return SUCCESS;

}

int chk_appl_status(char *kptno, char* applid,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	/* varchar kpt_no[KPT_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[13]; } kpt_no
 = {0};

	/* varchar appl_id[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } appl_id
 = {0};

	int nChkStatus = 0;
	short int nChkStatusInd = 0;
	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	/* Populate the variables	*/

//	strcpy(kpt_no, kptno);
//	strcpy(appl_id, applid);


	strcpy((char*)kpt_no.arr, kptno);
	setlen(kpt_no);
	setnull(kpt_no);
	strcpy((char*)appl_id.arr, applid);
	setlen(appl_id);
	setnull(appl_id);

	
	/* EXEC SQL SELECT 1 INTO :nChkStatus:nChkStatusInd
		FROM APPLICATION WHERE KPTNO  = :kpt_no
		AND APPLID NOT IN(:appl_id)
		AND APPLSTAT in('X','Q','A','F','D','S','P','B','L','9')
		AND EXISTS( SELECT 'X' FROM APPL_TXN WHERE APPLID = :appl_id
		AND SUBSTR(TXNCODE,1,1) in ('1','2','3','4')); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 31;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select 1 into :b0:b1  from APPLICATION where (((KPTNO=:b2 an\
d APPLID not  in (:b3)) and APPLSTAT in ('X','Q','A','F','D','S','P','B','L','\
9')) and exists (select 'X'  from APPL_TXN where (APPLID=:b3 and SUBSTR(TXNCOD\
E,1,1) in ('1','2','3','4'))))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2242;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&nChkStatus;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&nChkStatusInd;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&kpt_no;
 sqlstm.sqhstl[1] = (unsigned int  )15;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&appl_id;
 sqlstm.sqhstl[2] = (unsigned int  )22;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&appl_id;
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
	{
#ifdef DEBUG
		userlog(" get_appl_status : Selecting Application status from APPLICATION failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_appl_status : Selecting Application status from APPLICATION failed");
		sprintf(excep_log.error_msg, "get_appl_status : Selecting Application status from APPLICATION failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}

	return nChkStatus;
}

int check_appl_card_status(char *applid,int *appl_proc,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 06/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char appl_id[APP_ID_SIZE] = {0};

	int nCount = -1;
	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN



	strcpy(appl_id, applid);

	#ifdef DEBUG
		userlog("check_appl_card_status : applid - %s", applid);
		userlog("check_appl_card_status : appl_id - %s", appl_id);
	#endif

	/* EXEC SQL
		SELECT COUNT(*) INTO :nCount 
		FROM APPLICATION  
		WHERE APPLID = :appl_id
		AND APPLSTAT IN ('X','Q','A','F','D','S','P','R','L','M'); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 31;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from APPLICATION where (APPLID=:b\
1 and APPLSTAT in ('X','Q','A','F','D','S','P','R','L','M'))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2273;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&nCount;
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




	if((SQLCODE != 0) && (SQLCODE != 1403))
	{
		#ifdef DEBUG
			userlog("check_appl_card_status : select from APPLICATION failed: %s",SQLMSG);			
		#endif
	
		//return SELECT_ERROR;
	}
	else if(SQLCODE == 1403)
	{
		nCount = 0;
	}

	#ifdef DEBUG
		userlog("check_appl_card_status : select from APPLICATION successful, count : %d",nCount);			
	#endif

	*appl_proc = nCount;

	return SUCCESS;
}