
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
           char  filnam[16];
};
static const struct sqlcxp sqlfpn =
{
    15,
    ".\\gscbcommon.pc"
};


static unsigned int sqlctx = 2107483;


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
            void  *sqhstv[6];
   unsigned int   sqhstl[6];
            int   sqhsts[6];
            void  *sqindv[6];
            int   sqinds[6];
   unsigned int   sqharm[6];
   unsigned int   *sqharc[6];
   unsigned short  sqadto[6];
   unsigned short  sqtdso[6];
} sqlstm = {12,6};

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
5,0,0,1,0,0,29,104,0,0,0,0,0,1,0,
20,0,0,2,0,0,31,146,0,0,0,0,0,1,0,
35,0,0,3,58,0,4,215,0,0,2,1,0,1,0,2,1,0,0,1,9,0,0,
58,0,0,4,71,0,4,287,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
81,0,0,5,71,0,4,291,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
104,0,0,6,71,0,4,295,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
127,0,0,7,72,0,4,299,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
150,0,0,8,121,0,3,489,0,0,6,6,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,1,0,0,1,3,0,0,
1,9,0,0,
189,0,0,9,0,0,29,502,0,0,0,0,0,1,0,
};


/* $Header$*/

/********************************************************************/
/* File Name   : gscbcommon.pc                                      */
/* Author      : Sangeeta Natu, Amit Sangrulkar, Bakul Waghmare		*/
/* Description : This file contains common functions required       */
/*               by all services.                                   */
/********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sqlca.h>

#define LOG_DEFINED    /* To define global variables used for logging */
#include "gscbdef.h"
#include "gscblookupdef.h"
#include "gscblog.h"
#include "gscbio.h"
#include "kppdef.h"
#include "userlog.h"

PROG_ACCESS_LOG_T prog_log;
APPL_EXCEP_LOG_T excep_log;
TXN_LOG_T tran_log;

/********************************************************************/
/* Function Name : gscbbegin_trans()                                */
/* Input         : None                                             */
/* Description   : This function is used to initiate a transaction  */
/*                 by doing a tpbegin if Tuxedo is used for         */
/*                 transaction management or by connecting to Oracle*/
/*                 when Oracle is used for transaction management   */
/* Return Values : SUCCESS / FAILURE / CONN_FAIL					*/
/* Limitations   : None                                             */
/********************************************************************/
//int gscbbegin_trans(void *ctx)
int gscbbegin_trans(void * ctx)
{
	struct sqlca sqlca = {0};

	/*#ifdef TP_TRAN
		if((tpbegin(0, 0)) == -1)
		{
		/* Log into Ulog 
		userlog("gscbbegin_trans: Could not begin the transaction : %s\n", tpstrerror(tperrno));
		return FAILURE;
		}
	#endif*/
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 
  

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
 

	//EXEC SQL SAVEPOINT start_tran;
	if (SQLCODE != 0)
	{
		userlog("gscbrollback_trans: Could not rollback the transaction : %s\n", SQLMSG);
		return FAILURE;
	}
//#endif
	else
	{
		return SUCCESS;
	}
    
	//return SUCCESS;
}

/********************************************************************/
/* Function Name : gscbcommit_trans()                               */
/* Input         : None                                             */
/* Description   : This function is used to commit a transaction    */
/*                 by doing a tpcommit if Tuxedo is used for        */
/*                 transaction management or by doing an EXEC SQL   */
/*                 COMMIT when Oracle is used for transaction       */
/*                 management                                       */
/* Return Values : SUCCESS / FAILURE            					*/
/* Limitations   : None                                             */
/********************************************************************/
int gscbcommit_trans(void * ctx)
{
	struct sqlca sqlca = {0};

/*#ifdef TP_TRAN
	if((tpcommit(0)) == -1)
	{
		userlog("gscbcommit_trans: Could not commit the transaction : %s\n", tpstrerror(tperrno));
		return FAILURE;
	}
#else*/
	/* Modified by viswa for IJPN Req */

	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 
  

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
 


	/* EXEC SQL COMMIT; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 0;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )5;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


	if (SQLCODE != 0)
	{
		userlog("gscbcommit_trans: Could not commit the transaction : %s\n", SQLMSG);
		return FAILURE;
	}
//#endif
	else
	{
		return SUCCESS;
	}
}

/********************************************************************/
/* Function Name : gscbrollback_trans()                             */
/* Input         : None                                             */
/* Description   : This function is used to rollback a transaction  */
/*                 by doing a tpabort if Tuxedo is used for         */
/*                 transaction management or by doing an EXEC SQL   */
/*                 ROLLBACK when Oracle is used for transaction     */
/*                 management                                       */
/* Return Values : SUCCESS / FAILURE            					*/
/* Limitations   : None                                             */
/********************************************************************/
int gscbrollback_trans(void * ctx)
{
struct sqlca sqlca = {0};

/*#ifdef TP_TRAN
	if((tpabort(0)) == -1)
	{
		userlog("gscbrollback_trans: Could not rollback the transaction : %s\n", tpstrerror(tperrno));
		return FAILURE;
	}
#else*/
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 
  

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 


	/* EXEC SQL ROLLBACK; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 0;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )20;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


	if (SQLCODE != 0)
	{
		userlog("gscbrollback_trans: Could not rollback the transaction : %s\n", SQLMSG);
		return FAILURE;
	}
//#endif
	else
	{
		return SUCCESS;
	}
}


/********************************************************************/
/* Function Name : check_header()                                   */
/* Input         : The header information which comes               */
/*                 along with each request                          */
/* Description   : This function validates the information supplied */
/*                 to each service in the header. It checks whether */
/*                 the branch code is valid				  */
/* Return Values : SUCCESS / Error code.                            */
/* Limitations   : None                                             */
/********************************************************************/
int check_header(HEADER_T header,void * ctx)
{
	struct sqlca sqlca = {0};

	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar branch_code[BRANCH_CODE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[7]; } branch_code;

	char exists;
	sql_context pcCtx; 
	/* EXEC SQL END DECLARE SECTION; */ 
  


	pcCtx = ctx; 
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
 	


#ifdef DEBUG
	userlog("check_header: Branch code: %s\n", header.branch_code);
	userlog("check_header: Workstation id: %s\n", header.workstation_id);
#endif

	if('\0' == header.user_id[0])
	{
		sprintf(excep_log.error_msg, "check_header: user id not specified");
		return USER_ID_NULL;
	}

	if('\0' == header.branch_code[0])
	{
		sprintf(excep_log.error_msg, "check_header: branch code not specified");
		return BRANCH_CD_NULL;
	}
	else
	{
		/* Copy data into host variables */
		strcpy(branch_code.arr, header.branch_code);
		setlen(branch_code);
	}

	if('\0' == header.workstation_id[0])
	{
		sprintf(excep_log.error_msg, "check_header: ws id not specified");
		return WS_ID_NULL;
	}

	/* Check if there is a record for the given Branch code and Workstation id in WS_INFO table */	
	/* EXEC SQL SELECT 'X' INTO :exists FROM BRANCH_INFO
		 	 WHERE BRANCHCODE = :branch_code; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 2;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select 'X' into :b0  from BRANCH_INFO where BRANCHCODE=:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )35;
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
 sqlstm.sqhstv[1] = (         void  *)&branch_code;
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



	/* Check for SQL error */
	if (NO_DATA_FOUND)
	{
#ifdef DEBUG
		userlog("check_header: Invalid Branch code %s", header.branch_code);
#endif

		/* Log the error */
		sprintf(excep_log.error_msg,"check_header: Invalid Branch code %s", header.branch_code);
		return INVALID_BRANCH_CD;
	}
	else if(SQLCODE)
	{
		/* Log the error */
		sprintf(excep_log.error_msg,"check_header: %s", SQLMSG);
		return SELECT_ERROR;
	}
	else
		return SUCCESS;
}


/*************************************************************************/
/* Function Name : get_legacy_branchcode()                               */
/* Input         : Branch code - The branch code for which the respective*/
/*								 agency branch code is required          */
/*                 Agency inidcator - Indicator that explains for which  */
/*                 agency (JPN/JPJ/IMM) branch code is required			 */
/* Description   : This function is used to retrieve the Legacy			 */
/*                 branch code for the corresponding GSC Branch code     */
/* Return Values : SUCCESS /DATA_ERROR/ORA_ERROR in case of error.       */
/*                 The Legacy branch code for the given Branch code in   */
/*                 case of success                                       */
/* Limitations   : None													 */
/*************************************************************************/
int get_legacy_branchcode(char branch_code[BRANCH_CODE_SIZE], char agency_ind,
						 char *leg_branch_code,void * ctx)
{
	struct sqlca sqlca = {0};

	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar branchcode[BRANCH_CODE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[7]; } branchcode;

	/* varchar leg_branchcode[LEGACY_BRANCH_CODE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } leg_branchcode;

	
	short int branchcode_ind = -1;
	short int leg_branchcode_ind = -1;
	sql_context pcCtx; 
	/* EXEC SQL END DECLARE SECTION; */ 
  

	pcCtx = ctx; 
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
 	

	if (branch_code[0] == '\0')
	{
#ifdef DEBUG
		userlog("get_legacy_branchcode: Branch code can not be NULL");
#endif

		/* Log the error */
		strcpy(excep_log.error_msg,"get_legacy_branchcode : Branch code can not be NULL");
		return BRANCH_CD_NULL;
	}

	strcpy(branchcode.arr, branch_code);
	setlen(branchcode);

	switch (agency_ind)
	{
	case JPN_ID:
					/* EXEC SQL SELECT BRANCHCODEJPN INTO :leg_branchcode:leg_branchcode_ind
		 					 FROM BRANCH_INFO WHERE BRANCHCODE = :branchcode; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 2;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select BRANCHCODEJPN into :b0:b1  from BRANCH_INFO where\
 BRANCHCODE=:b2";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )58;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&leg_branchcode;
     sqlstm.sqhstl[0] = (unsigned int  )11;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)&leg_branchcode_ind;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&branchcode;
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


					break;
	case JIM_ID:
					/* EXEC SQL SELECT BRANCHCODEIMM INTO :leg_branchcode:leg_branchcode_ind
							 FROM BRANCH_INFO WHERE BRANCHCODE = :branchcode; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 2;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select BRANCHCODEIMM into :b0:b1  from BRANCH_INFO where\
 BRANCHCODE=:b2";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )81;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&leg_branchcode;
     sqlstm.sqhstl[0] = (unsigned int  )11;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)&leg_branchcode_ind;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&branchcode;
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


					break;
	case JPJ_ID:
					/* EXEC SQL SELECT BRANCHCODEJPJ INTO :leg_branchcode:leg_branchcode_ind
							 FROM BRANCH_INFO WHERE BRANCHCODE = :branchcode; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 2;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select BRANCHCODEJPJ into :b0:b1  from BRANCH_INFO where\
 BRANCHCODE=:b2";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )104;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&leg_branchcode;
     sqlstm.sqhstl[0] = (unsigned int  )11;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)&leg_branchcode_ind;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&branchcode;
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


					break;
	case PDRM_ID:
					/* EXEC SQL SELECT BRANCHCODEPDRM INTO :leg_branchcode:leg_branchcode_ind
							 FROM BRANCH_INFO WHERE BRANCHCODE = :branchcode; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 2;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select BRANCHCODEPDRM into :b0:b1  from BRANCH_INFO wher\
e BRANCHCODE=:b2";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )127;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&leg_branchcode;
     sqlstm.sqhstl[0] = (unsigned int  )11;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)&leg_branchcode_ind;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&branchcode;
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


					break;
	default:
#ifdef DEBUG
					userlog("get_legacy_branchcode : Invalid Agency indicator");
#endif	
					/* Log the error */
					strcpy(excep_log.error_msg,"get_legacy_branchcode : Invalid Agency indicator");
					return INVALID_AGENCY_IND;
	}
		
	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("get_legacy_branchcode : Select from branch_info failed");
#endif
		/* Log the error */
		sprintf(excep_log.error_msg,"get_legacy_branchcode : Select from BRANCH_INFO failed : %s", SQLMSG);
		return SELECT_ERROR;
	}

	setnull(leg_branchcode);
	strcpy(leg_branch_code, leg_branchcode.arr);

	return SUCCESS;
}


/****************************************************************************/
/* Function Name : store_error_message										*/
/* Input         : Application id, Message id, Agency, Transaction type		*/
/* Description   : This function is used to store the error messages        */
/*                 returned by legacy into RESPONSE_MSG table at GSCB		*/ 
/* Return Values : GMPC_GOOD, GMPC_BAD										*/
/* Limitations   : None														*/
/****************************************************************************/
int store_error_message(char *appl_id, char *msg_id, char agency, int txn_type, int status, char *resp_msg,void * ctx)
{

	struct sqlca sqlca = {0};

	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_msgid[MSG_ID_SIZE];
	char hv_applid[APP_ID_SIZE];
	char hv_agency;
	char hv_txncode[TRANS_CODE_SIZE];
	int  hv_status;
	/* varchar hv_err_msg[RESPONSE_MESSAGE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } hv_err_msg
 = {0};

	short hv_err_msg_ind = -1;
	sql_context pcCtx; 
	/* EXEC SQL END DECLARE SECTION; */ 
  

	pcCtx = ctx; 
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
 	
	/*
	READ_REG_GENERIC_T dump_path;
	char rsp_file_path[300];
	char rsp_file_name[400];
	FILE *fp_rsp;
	*/

	hv_err_msg.arr[0] = 0;
	hv_err_msg.len = 0;

#ifdef DEBUG
	userlog("store_error_message :appl_id %s",appl_id);
	userlog("store_error_message :msg_id %s",msg_id);
	userlog("store_error_message :agency %c",agency);
	userlog("store_error_message :txn_type %d", txn_type);
	userlog("store_error_message :status %d",status);
	userlog("store_error_message :resp_msg %s",resp_msg);

#endif
	/* Commented out - Not required to read '.rsp' any more, as now	 */
	/*	the li_..._g() functions themselves return the reply message */
	/*
	// Read value for Message Dump path from registry.				
	strcpy(dump_path.value_name,"MsgDumpPath");
	dump_path.value = (unsigned char *) malloc(300); 
	if(NULL == dump_path.value)
	{
		strcpy(rsp_file_path, "d:\\gmpc\\bin");
	}
	else if(GMPC_GOOD != read_registry(KPP_GATE_INTERFACE_ID, NULL, &dump_path))
	{
		strcpy(rsp_file_path, "d:\\gmpc\\bin");
	}
	else
	{
		strcpy(rsp_file_path, dump_path.value);
	}
	*/

	// find the legacy txn code 
	switch(agency)
	{
	case JPN_ID:
		switch(txn_type)
		{
			case TXN_12YO:
				sprintf(hv_txncode, "%d", LI_GET_JPN_DATA_12Y0);
				break;
			case TXN_FT:
				sprintf(hv_txncode, "%d", LI_GET_JPN_DATA_OFTA);
				break;
			case TXN_CONV:
				sprintf(hv_txncode, "%d", LI_GET_JPN_DATA_CON);
				break;
			case TXN_REPL:
				sprintf(hv_txncode, "%d", LI_GET_JPN_DATA_REPL);
				break;
			case TXN_CHIP_UPD:
				sprintf(hv_txncode, "%d", LI_GET_JPN_DATA_CUP);
				break;
			case TXN_GET_KPT:
				sprintf(hv_txncode, "%d", LI_GET_APPLICANT_KPT);
				break;
			case TXN_AFIS:
				sprintf(hv_txncode, "%d", LI_GET_AFIS_IMG);
				break;
		}
		break;

	case JPJ_ID:
		switch(txn_type)
		{
			case TXN_JPJ_DL:
				sprintf(hv_txncode, "%d", LI_GET_JPJ_DATA_DL);
				break;
			case TXN_JPJ_BL:
				sprintf(hv_txncode, "%d", LI_GET_JPJ_DATA_BL);
				break;
			case TXN_SUMM_DL:
				sprintf(hv_txncode, "%d", LI_DOWNLOAD_SUMMONS);
				break;
			case TXN_SUMM_PAY:
				sprintf(hv_txncode, "%d", LI_GET_SUMMONS_PAYMENT);
				break;
		}
		break;
	case JIM_ID:
		sprintf(hv_txncode, "%d", LI_DOWNLOAD_PASSPORT_INFO);
		break;
	default:
		return GMPC_BAD;

	}
	/*
	// now formulate the legacy dump file name 
	sprintf(rsp_file_name, "%s\\%s-%s.rsp", rsp_file_path, msg_id, hv_txncode);

#ifdef DEBUG
	userlog("store_error_message :rsp_file_name %s",rsp_file_name);
#endif
	// now open the file 
	fp_rsp = fopen(rsp_file_name, "rb");

	if (fp_rsp == NULL)
	{
		userlog("store_error_message : File Not Found %s", rsp_file_name);
		return GMPC_BAD;
	}

	// now read the response message 
	fseek(fp_rsp, 0x1a9, SEEK_SET);
	hv_status = fgetc(fp_rsp);
	fread(hv_err_msg.arr, 1, RESPONSE_MESSAGE_SIZE - 1, fp_rsp);
	hv_err_msg.arr[RESPONSE_MESSAGE_SIZE - 1] = 0;
	hv_err_msg.len = strlen(hv_err_msg.arr);
	
	fclose(fp_rsp);

#ifdef DEBUG
	userlog("store_error_message :hv_err_msg %s len %d, hv_status %c",hv_err_msg.arr,hv_err_msg.len, hv_status);
#endif
	*/

	strcpy(hv_msgid, msg_id);
	strcpy(hv_applid, appl_id);
	hv_agency = agency;
	hv_status = status;
	if (strcmp(resp_msg,""))
	{
		strcpy(hv_err_msg.arr, resp_msg);
		hv_err_msg.len = strlen(hv_err_msg.arr);
		hv_err_msg_ind = 0;
	}


	/* EXEC SQL INSERT INTO LEGACY_RESPONSE
		(MESSAGEID, APPLID, LEGACYTXNCODE, AGENCYID, STATUS, ERRORMSG)
		VALUES(:hv_msgid, :hv_applid, :hv_txncode, :hv_agency, :hv_status, :hv_err_msg:hv_err_msg_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into LEGACY_RESPONSE (MESSAGEID,APPLID,LEGACYTXNCODE,\
AGENCYID,STATUS,ERRORMSG) values (:b0,:b1,:b2,:b3,:b4,:b5:b6)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )150;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)hv_msgid;
 sqlstm.sqhstl[0] = (unsigned int  )25;
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
 sqlstm.sqhstv[2] = (         void  *)hv_txncode;
 sqlstm.sqhstl[2] = (unsigned int  )7;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&hv_agency;
 sqlstm.sqhstl[3] = (unsigned int  )1;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&hv_status;
 sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&hv_err_msg;
 sqlstm.sqhstl[5] = (unsigned int  )163;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&hv_err_msg_ind;
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



	if (SQLCODE)
	{
		#ifdef DEBUG
			userlog("store_error_message :Error in insert into LEGACY_RESPONSE SQLMSG %s",SQLMSG);
		#endif

		return GMPC_BAD;
	}
	else
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )189;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}




	return GMPC_GOOD;
}
