
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
           char  filnam[12];
};
static const struct sqlcxp sqlfpn =
{
    11,
    ".\\GSCBDB.pc"
};


static unsigned int sqlctx = 131435;


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

 static const char *sq0003 = 
"select APPLID  from APPNT_JPN_STATUPD where UPDFLAG='N'           ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4274,178,0,0,
5,0,0,0,0,0,58,143,0,0,1,1,0,1,0,3,109,0,0,
24,0,0,1,0,0,27,153,0,0,4,4,0,1,0,1,97,0,0,1,97,0,0,1,10,0,0,1,10,0,0,
55,0,0,2,0,0,30,191,0,0,0,0,0,1,0,
70,0,0,0,0,0,59,203,0,0,1,1,0,1,0,3,109,0,0,
89,0,0,3,66,0,9,254,0,0,0,0,0,1,0,
104,0,0,3,0,0,13,273,0,0,1,0,0,1,0,2,97,0,0,
123,0,0,3,0,0,15,283,0,0,0,0,0,1,0,
138,0,0,4,107,0,4,303,0,0,4,1,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,1,97,0,0,
169,0,0,3,0,0,15,349,0,0,0,0,0,1,0,
184,0,0,5,59,0,4,673,0,0,2,1,0,1,0,2,1,0,0,1,97,0,0,
207,0,0,6,139,0,5,683,0,0,1,1,0,1,0,1,97,0,0,
226,0,0,7,259,0,3,710,0,0,1,1,0,1,0,1,97,0,0,
245,0,0,8,48,0,2,718,0,0,1,1,0,1,0,1,97,0,0,
264,0,0,9,84,0,4,734,0,0,3,1,0,1,0,2,97,0,0,2,3,0,0,1,97,0,0,
291,0,0,10,139,0,5,764,0,0,1,1,0,1,0,1,97,0,0,
310,0,0,11,259,0,3,791,0,0,1,1,0,1,0,1,97,0,0,
329,0,0,12,48,0,2,799,0,0,1,1,0,1,0,1,97,0,0,
348,0,0,13,151,0,4,811,0,0,5,1,0,1,0,2,97,0,0,2,97,0,0,2,9,0,0,2,97,0,0,1,97,0,
0,
383,0,0,14,80,0,4,844,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
406,0,0,15,183,0,4,880,0,0,4,2,0,1,0,2,97,0,0,2,9,0,0,1,97,0,0,1,97,0,0,
437,0,0,16,139,0,5,916,0,0,1,1,0,1,0,1,97,0,0,
456,0,0,17,259,0,3,943,0,0,1,1,0,1,0,1,97,0,0,
475,0,0,18,48,0,2,951,0,0,1,1,0,1,0,1,97,0,0,
494,0,0,19,86,0,4,960,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
517,0,0,20,91,0,4,1002,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
540,0,0,21,364,0,4,1057,0,0,8,2,0,1,0,2,3,0,0,2,97,0,0,2,97,0,0,2,9,0,0,2,97,0,
0,2,97,0,0,1,97,0,0,1,97,0,0,
587,0,0,22,121,0,4,1078,0,0,4,2,0,1,0,2,97,0,0,2,97,0,0,1,97,0,0,1,9,0,0,
618,0,0,23,120,0,4,1102,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
641,0,0,24,74,0,4,1132,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
664,0,0,25,71,0,4,1346,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
687,0,0,26,67,0,4,1375,0,0,1,0,0,1,0,2,97,0,0,
706,0,0,27,49,0,4,1394,0,0,1,0,0,1,0,2,9,0,0,
725,0,0,28,190,0,5,1496,0,0,4,4,0,1,0,1,97,0,0,1,9,0,0,1,9,0,0,1,97,0,0,
756,0,0,29,188,0,5,1544,0,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
779,0,0,30,259,0,3,1570,0,0,1,1,0,1,0,1,97,0,0,
798,0,0,31,48,0,2,1578,0,0,1,1,0,1,0,1,97,0,0,
};


#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#include <sqlca.h>


#include "gscbdef.h"
#include "gscbio.h"
#include "gscblog.h"
#include "gscblookupdef.h"

#include "KPPdef.h"
#include "KPPstruct.h"
#include "KPPproto.h"

#include "li_update_gmpc_stat.h"

#include "jpn_status_upd_io.h"
#include "jpn_status_upd.h"

#include "userlog.h"

#include "jpn_status_upd_io.h"

//extern "C" void userlog(char* szFormatString, ...);
long gzSleepTime;
extern bool g_bSlpState;

APPL_EXCEP_LOG_T excep_log = { {""},{""},{""},{""},{""},{""}, 0,{""}} ;
PROG_ACCESS_LOG_T prog_log = { {""},{""},{""},{""},{""},{""},{""},{""} };

TXN_LOG_T tran_log;


/************************************************************************************/
/* Function Name:	LoginToOracle()         										*/
/* Input		:	1. sql context							              			*/
/*					2. User id														*/
/*					3. Password														*/
/* Return Values:   GMPC_GOOD/oracle error											*/
/* Description	:	This function connects to oracle using the userid and password	*/
/*					read from the registry											*/
/* Limitations	:   None															*/
/************************************************************************************/

int LoginToOracle(sql_context *ctx)
{

	//extern struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char connectstring[CONNECTSTRING_SIZE];
	char passwd[PASSWD_SIZE];
	char sleepTime[3];

	sql_context pcctx;
	/* EXEC SQL END DECLARE SECTION; */ 

     

	READ_REG_GENERIC_T other_data;

	memset((char *)&other_data, 0, sizeof(READ_REG_GENERIC_T));

		
	/* Allocate memory for reading from registry	*/
	strcpy(other_data.value_name,"ConnectString");
	if (NULL == (other_data.value = (unsigned char *)malloc(CONNECTSTRING_SIZE)))
	{
		/* Log into Ulog */
		userlog("ora_connect: Malloc failed for connect string: errno %d", errno);
		return FAILURE;
	}
	

	/* Get the Oracle connect string				*/
	/* Using Service id 0 to get the default value	*/
	if(GMPC_GOOD != read_registry(0, NULL, &other_data))
	{
		free(other_data.value);
		userlog("ora_connect: Read registry failed for ConnectString",
			   errno);
		return FAILURE;
	}
	else
	{
		strcpy(connectstring, (const char *)other_data.value);
		free(other_data.value);
	}

	

	/* Malloc for Password	*/
	if(NULL == (other_data.value = (unsigned char *) malloc(PASSWD_SIZE)))
	{
		userlog("ora_connect: Unable to malloc for password: errno %d", errno);
		return FAILURE;
	}

	/* Get the Oracle password */
	/* Using Service id 0 to get the default value */
	strcpy(other_data.value_name,"Password");
	if(GMPC_GOOD != read_registry(0, NULL, &other_data))
	{
		free(other_data.value);	
		userlog("ora_connect: Read registry failed for Password");
		return FAILURE;
	}
	else
	{
		strcpy(passwd, (const char *)other_data.value);
		free(other_data.value);
	}



	/* Malloc for JPNSleepTime	*/
	if(NULL == (other_data.value = (unsigned char *) malloc(3)))
	{
		userlog("ora_connect: Unable to malloc for password: errno %d", errno);
		return FAILURE;
	}

	/* Get the Oracle password */
	/* Using Service id 0 to get the default value */
	strcpy(other_data.value_name,"JPNSleepTime");
	if(GMPC_GOOD != read_registry(0, NULL, &other_data))
	{
		free(other_data.value);	
		userlog("ora_connect: Read registry failed for JPNSleepTime");
		return FAILURE;
	}
	else
	{
		strcpy(sleepTime, (const char *)other_data.value);
		free(other_data.value);
	}

	gzSleepTime = atol((char *)sleepTime);


	/* EXEC SQL CONTEXT ALLOCATE :pcctx; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 1;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )5;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&pcctx;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(void *);
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



	*ctx = pcctx;

#ifdef DEBUG
	userlog("LoginToOracle: Using sql context %u", *ctx);
#endif

	/* EXEC SQL CONTEXT USE :pcctx; */ 


	/* EXEC SQL CONNECT :connectstring IDENTIFIED BY :passwd; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )10;
 sqlstm.offset = (unsigned int  )24;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)connectstring;
 sqlstm.sqhstl[0] = (unsigned int  )21;
 sqlstm.sqhsts[0] = (         int  )21;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)passwd;
 sqlstm.sqhstl[1] = (unsigned int  )16;
 sqlstm.sqhsts[1] = (         int  )16;
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
 sqlstm.sqlcmax = (unsigned int )100;
 sqlstm.sqlcmin = (unsigned int )2;
 sqlstm.sqlcincr = (unsigned int )1;
 sqlstm.sqlctimeout = (unsigned int )0;
 sqlstm.sqlcnowait = (unsigned int )0;
 sqlcxt(&pcctx, &sqlctx, &sqlstm, &sqlfpn);
}



	if (sqlca.sqlcode)
	{
		userlog("Not connected !!, %s", SQLMSG);
		return sqlca.sqlcode;
	}
	else 
	{
		//setcontex(Ctx);
		userlog("connected !!");
		return GMPC_GOOD;
	}
}

/************************************************************************************/
/* Function Name:	LogoutFromOracle()         										*/
/* Input		:	1. sql context							              			*/
/* Return Values:   GMPC_GOOD/oracle error											*/
/* Description	:	This function disconnects from oracle							*/
/* Limitations	:   None															*/
/************************************************************************************/

int LogoutFromOracle(void * ctx)
{


	//struct sqlca sqlca = {0};

	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	sql_context pcctx;
	/* EXEC SQL END DECLARE SECTION; */ 



	pcctx = ctx;
	/* EXEC SQL CONTEXT USE:pcctx; */ 


	/* EXEC SQL COMMIT WORK RELEASE; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )55;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&pcctx, &sqlctx, &sqlstm, &sqlfpn);
}



	#ifdef DEBUG
		userlog("Using sql context %u", ctx);
	#endif

	if (sqlca.sqlcode)
	{
		userlog("Not disconnected !!, %s", SQLMSG);
		return sqlca.sqlcode;
	}
	
	/* EXEC SQL CONTEXT FREE :pcctx; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )70;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&pcctx;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(void *);
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




	if (sqlca.sqlcode)
	{
		userlog("Not freed !!, %s", SQLMSG);
		return sqlca.sqlcode;
	}
	else 
		userlog("termination ok !!");

	return GMPC_GOOD;

}

int FillRequest(JPN_STATUS_UPD_REQ_T *req,void * ctx)
{

    /* EXEC SQL BEGIN DECLARE SECTION; */ 

  
	char hzApplid[APP_ID_SIZE]={0};
	char hzBranchCode[BRANCH_CODE_SIZE]={0};
	short hzBranchCode_ind = -1;
	char hzUserID[USER_ID_SIZE]={0};
	short hzUserID_ind = -1;
	char hzWSID[WS_ID_SIZE]={0};
	short hzWSID_ind = -1;
   	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	int ret_code=0,i=0;

	#ifdef DEBUG
		userlog("FillRequest: Entered this function");
	#endif

    /* EXEC SQL DECLARE C1 CURSOR FOR
		 SELECT APPLID 
		 FROM APPNT_JPN_STATUPD
		 WHERE UPDFLAG = 'N'; */ 

	
		if (SQLCODE != 0)  
        {
			g_bSlpState = true;
			userlog("FillRequest: CURSOR C1 Declaration Failed : %s", SQLMSG);
			return CALL_NOT_REQUIRED;
		}

	/* EXEC SQL OPEN C1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0003;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )89;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


		if (SQLCODE != 0)  
			{
				g_bSlpState = true;
				userlog("FillRequest: CURSOR C1 OPEN Failed : %s", SQLMSG);
				return CALL_NOT_REQUIRED;
			}

		#ifdef DEBUG
			userlog("FillRequest: After C1 cursor open");
		#endif

	while(1)
	{
		memset(req, 0, sizeof(JPN_STATUS_UPD_REQ_T));

		for(i=0;i<19;i++)
			hzApplid[i] = '\0';

		/* EXEC SQL FETCH C1 INTO :hzApplid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )104;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)hzApplid;
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



		#if DEBUG
			userlog("FillRequest: After C1 fetch sqlca.sqlcode: %d",sqlca.sqlcode);	
		#endif

		if(sqlca.sqlcode == 1403) break;

		if (SQLCODE != 0)
		{
			/* EXEC SQL CLOSE  C1; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )123;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}

  // close the cursor

			#ifdef DEBUG
				userlog(" FillRequest:: Error in fetching the C1 cursor : %d : %s", SQLCODE, SQLMSG);
			#endif
			/* Log the error */
			strcpy(prog_log.remarks,"FillRequest: Error in fetching the C1 cursor.");
			sprintf(excep_log.error_msg,"FillRequest: Error in fetching the C1 cursor: %d, %s ", SQLCODE, SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			//log_error(ctx);
			return CALL_NOT_REQUIRED; //SQLCODE;
		}

		#ifdef DEBUG
			userlog("FillRequest: Application id : hzApplid : %s",hzApplid);
		#endif

		strcpy(req->applid,hzApplid);
	
		/* EXEC SQL SELECT USERID , WSID,BRANCHCODE INTO 
			:hzUserID:hzUserID_ind,
			:hzWSID:hzWSID_ind,
			:hzBranchCode:hzBranchCode_ind 
		   FROM APPLICATION 
		   WHERE APPLID = :hzApplid AND ROWNUM  = 1; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select USERID ,WSID ,BRANCHCODE into :b0:b1,:b2:b3,:b4:b5  \
from APPLICATION where (APPLID=:b6 and ROWNUM=1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )138;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)hzUserID;
  sqlstm.sqhstl[0] = (unsigned int  )9;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&hzUserID_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hzWSID;
  sqlstm.sqhstl[1] = (unsigned int  )16;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&hzWSID_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)hzBranchCode;
  sqlstm.sqhstl[2] = (unsigned int  )7;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&hzBranchCode_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)hzApplid;
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



		if(hzBranchCode_ind == 0)
			strcpy(req->header.branch_code, hzBranchCode);
	
		if(hzUserID_ind == 0)
			strcpy(req->header.user_id ,hzUserID);
	
		if(hzWSID_ind == 0)
			strcpy(req->header.workstation_id , hzWSID);
	
		strcpy(req->header.application_id,hzApplid);

#if DEBUG
	userlog("FillRequest: req->header.branch_code:%s",req->header.branch_code);
	userlog("FillRequest: req->header.user_id:%s",req->header.user_id);
	userlog("FillRequest: req->header.workstation_id:%s",req->header.workstation_id);
	userlog("FillRequest: req->header.application_id:%s",req->header.application_id);
	userlog("FillRequest: req->applid:%s",req->applid);
	userlog(" ");
	userlog("FillRequest: Before Calling  Jpn_Status_Upd function");
#endif

	if(GMPC_GOOD != (ret_code = Jpn_Status_Upd(req,ctx)))
	{
		strcpy(prog_log.remarks,"FillRequest:  : Jpn_Status_Upd Function failed");
		strcpy(excep_log.error_msg,"FillRequest:  : Jpn_Status_Upd Function failed");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		//log_error(ctx);
		
		return ret_code;
	}

#if DEBUG
	userlog("FillRequest: After Calling  Jpn_Status_Upd function");
	userlog(" ");
#endif

	} // end of while

		/* EXEC SQL CLOSE  C1; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )169;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}

  // close the cursor


    
		return CALL_NOT_REQUIRED;

}


/////////////////////////////////////////

int Jpn_Status_Upd(JPN_STATUS_UPD_REQ_T *pReq, void * ctx)
{    

	JPN_STATUS_UPD_REQ_T *req;
	JPN_STATUS_UPD_RESP_T *resp;	

	char curr_date_time[DATE_TIME_SIZE];
	int ret_val = 0;
	char program_id[PROG_ID_SIZE];
	long resp_len = 0;
	int msgid = 0;
	int txn_srno = 0;
	char req_flag = '\0';

	LI_P_HEADER_T hdr = {0}; // included this on 1/12/2006 to make it local from global declaration
	
	memset(&prog_log, 0, PROG_LOG_SIZE);
	memset(&excep_log, 0, APPL_EXCEP_LOG_SIZE);
	
	/* Initialize the variables used for logging	*/
	/* Get current date-time for logging			*/
	strcpy(curr_date_time, get_date_time());

	/* Assign request buffer	*/
	req = (JPN_STATUS_UPD_REQ_T *) pReq;


#if DEBUG	
	userlog(" ");
	userlog("Inside the Jpn_Status_Upd function");
	userlog(" ");
#endif
	/* Program access log variable */
	itoa(JPN_STATUS_UPD_ID, program_id, 10);
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

	strcpy(prog_log.remarks,"JPN_STATUS_UPD: Initiated");
	
	
	//appl_kptno = (APPL_KPTNO_T *)(req+1); to be removed
	
	
	resp_len = sizeof(JPN_STATUS_UPD_RESP_T);

	/* Allocate response buffer	*/
	if(NULL == (resp = (JPN_STATUS_UPD_RESP_T *) malloc(resp_len)))
	{
		strcpy(prog_log.remarks,"JPN_STATUS_UPD : Memory allocation for response buffer failed");
		sprintf(excep_log.error_msg,"JPN_STATUS_UPD : ");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		//log_error(ctx);

		//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);
		return RESP_BUF_ERR;
	}

	memset(resp, 0, sizeof(JPN_STATUS_UPD_RESP_T));

	#ifdef DEBUG
			userlog("JPN_STATUS_UPD : req->header.application_id:%s:",req->header.application_id);
			userlog("JPN_STATUS_UPD : req->header.branch_code:%s:", req->header.branch_code);
			userlog("JPN_STATUS_UPD : req->header.service_id:%d:", req->header.service_id);
			userlog("JPN_STATUS_UPD : req->header.user_id:%s:", req->header.user_id);
			userlog("JPN_STATUS_UPD : req->header.workstation_id:%s:", req->header.workstation_id);
			userlog("JPN_STATUS_UPD : req->applid:%s:",req->applid);			
	#endif

	resp->header = req->header;

	/* Begin a transaction	----> for data selection we don't require this <-----*/
	if(GMPC_GOOD != (ret_val = gscbbegin_trans(ctx)))
	{
		strcpy(prog_log.remarks,"JPN_STATUS_UPD : gscbbegin_trans failed");
		strcpy(excep_log.error_msg,"JPN_STATUS_UPD : gscbbegin_trans failed");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		//log_error(ctx);

		//tpreturn(TPSUCCESS, BEGIN_TRAN_ERROR, (char *) resp, resp_len, 0);
		//*pRespSize = resp_len;
		//*pResp = resp;
		return BEGIN_TRAN_ERROR;
	}

	#ifdef DEBUG
		userlog("JPN_STATUS_UPD :");		
	#endif
	
	
	req_flag = GMPC_STAT_UPD;
			
	/* Request for updation of card details */
					
	if (SUCCESS != (ret_val = update_gmpc_status_to_host(req, msgid, GMPC_STAT_UPD,hdr,ctx)))
	{
	#ifdef DEBUG
		userlog("JPN_STATUS_UPD : update_gmpc_status_to_host() failed with return code %d", ret_val);
	#endif
	
	//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof (JPN_STATUS_UPD_RESP_T), 0);
		//*pRespSize = resp_len;
		//*pResp = resp;
		return ret_val;
	}


	#ifdef DEBUG
		userlog("JPN_STATUS_UPD : Completed Successfully");
	#endif

		strcpy(prog_log.remarks,"JPN_STATUS_UPD: Completed Successfully");
		//prog_access_log(ctx);

	/* Commit	*/
	if(GMPC_GOOD != (ret_val = gscbcommit_trans(ctx)))
	{
		strcpy(prog_log.remarks,"JPN_STATUS_UPD : Function gscbcommit_trans failed");
		strcpy(excep_log.error_msg,"JPN_STATUS_UPD : Function gscbcommit_trans failed");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		//log_error(ctx);

		//tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
		//*pRespSize = resp_len;
		//*pResp = resp;
		return ret_val;
	}
	

	#ifdef DEBUG
		userlog("JPN_STATUS_UPD :Service Completed");
	#endif

	//tpreturn(TPSUCCESS, GMPC_GOOD, (char *) resp, resp_len, 0);
		//*pRespSize = resp_len;
		//*pResp = resp;
		return GMPC_GOOD;
}


/***************************************************************/
/* Function Name:update_gmpc_status_to_host					   */
/* Description  :Gets applstat from APPLICATION table          */
/*				 And update the same to JPNHOST with other data*/
/* Input        :APPLID                      			       */   
/* Return Values:SUCCESS or SELECT_ERROR				       */
/***************************************************************/
int update_gmpc_status_to_host(JPN_STATUS_UPD_REQ_T *req, int msgid, char request_flag,LI_P_HEADER_T hdr,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char  applid[20];
	char  appl_status = '\0';
	short appl_status_ind = -1;
	/* varchar  jpnstat[3]= {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } jpnstat
 = {0};

	short jpnstat_ind = -1;
	int	  cardstat=0;
	short cardstat_ind = -1;

	char  lgmpcstat[4] = {0};
	
	int  status_copied=0;

	char kpt_no[KPT_SIZE] = {0};
	short kpt_no_ind = -1;
	char applstat = 0;
	short applstat_ind = -1;
	int cardversion = 0;
	short cardversion_ind = -1;
	char card_issue_dt[DATE_SIZE] = {0};
	short card_issue_dt_ind = -1;
	char collection_dt[DATE_SIZE] = {0};
	short collection_dt_ind = -1;
	char personalise_dt[DATE_SIZE] = {0};
	short personalise_dt_ind = -1;
	char appl_date[DATE_SIZE] = {0};
	short appl_date_ind = -1;
	char issue_branch[BRANCH_CODE_SIZE] = {0};
	short issue_branch_ind = -1;
	char license_idno[ID_SIZE] = {0};
	short license_idno_ind = -1;
	
	
	char  processind[PROCESS_IND_SIZE] = {0};
	/* varchar  appln_staff_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } appln_staff_id
 = {0};
 // changed from char to varchar on 23/04/2007
	short appln_staff_id_ind = -1;
	char  issue_user_id[USER_ID_SIZE] = {0};
	short issue_user_id_ind = -1;
	int   card_stat = 0;
	char  txn_code[TRANSACTION_CODE_SIZE] = {0};
	short txn_code_ind = -1;
	int   txn_type = 0;
	short txn_type_ind = -1;
	char  appl_legacy_branch[LEGACY_BRANCH_CODE_SIZE] = {0};
	short appl_legacy_branch_ind = -1;
	char  issuing_legacy_branch[LEGACY_BRANCH_CODE_SIZE] = {0};
	short issuing_legacy_branch_ind = -1;
	int   lost_count = 0;
	short lost_count_ind = -1;
	//int   txn_count = 0;	
	
	char  legapplid[25];	
	short legapplid_ind = -1;

	char  tstamp[DATE_SIZE] = {0};
	short tstamp_ind = -1;

	/* varchar  ws_id[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } ws_id
 = {0};

	short ws_id_ind = 0;

	/* Added for IJPN */
	/* varchar reason_desc[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } reason_desc
 = {0};

	short reason_desc_ind = -1;
	/* varchar reject_code[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } reject_code
 = {0};

	short reject_code_ind = -1;	
	char branch_code[7] = {0};
	/* End for IJPN */

	/* varchar capplstat[4] = {0}; */ 
struct { unsigned short len; unsigned char arr[4]; } capplstat
 = {0};

	int scount=0;
	int prcode=0;
	int applpriority=0;
	short int applpriority_ind = -1;

	/* varchar  bundleid[BATCHNO_SIZE]= {0}; */ 
struct { unsigned short len; unsigned char arr[23]; } bundleid
 = {0};
  // included on 28/10/05 for IJPN
	short  bundleid_ind = -1;

	char ApplStat = 0;
	int k=0,sflag=0;
	char leg_header_date[DATE_TIME_SIZE] = {"\0"};
	short leg_header_date_ind = -1;

	char leg_msgid[MSG_ID_SIZE] = {0};

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 



	LI_UPDATE_GMPC_STAT_REQ_T lireq;

	int  ret_code=0,ret_val=0;
	unsigned char leg_msg_id[MSG_ID_SIZE];
	int  error_code = 0;
	
	int  reqstat = 0;
	char reqflag = '\0';

	char appl_ws_id[WS_ID_SIZE] = {"\0"};
	char appl_user_id[USER_ID_SIZE] = {"\0"};
	
	
	/* Added for IJPN */
	unsigned char pReplyMsg[LI_REPLY_MSG_SIZE];
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE]= {"\0"};
    /* End for IJPN */

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	memset(&lireq,'\0',sizeof(LI_UPDATE_GMPC_STAT_REQ_T));
	//strcpy(leg_msgid, "\0");

	#ifdef DEBUG	
		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : The applid from input buffer :%s", req->applid);		
	#endif

	strcpy(applid,req->applid);
		
	#ifdef DEBUG	
		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : applid : %s ",applid);		
	#endif

/* Added this code on 19/09/05 for IJPN*/

		// check the ijpn_legacy_request for each application
		// if LEGREQFLAG  = 'C' AND   CHECKAGENCY = '1' then skip 
		// the status update to host and update the flag as Y in 
		// APPNT_JPN_STATUPD table, since these are issued applns.

		userlog(" Checking the IJPN_LEGACY_REQUEST for LEGREQFLAG = C for this application");
		scount = 0;
////Commented on 5th March '07
/*		EXEC SQL SELECT COUNT(*) INTO :scount 
			FROM IJPN_LEGACY_REQUEST
			WHERE (APPLID = :applid)
			AND   LEGREQFLAG  = 'C'
			AND   CHECKAGENCY = '1'
			AND   LEGREQSTAT  = 0;

		userlog("count and sqlcode : %d, %d",scount,sqlca.sqlcode);*/

//Added on 5th March '07
		/* EXEC SQL SELECT APPLSTAT 
			INTO :ApplStat
			FROM APPLICATION
			WHERE APPLID = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select APPLSTAT into :b0  from APPLICATION where APPLID=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )184;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&ApplStat;
  sqlstm.sqhstl[0] = (unsigned int  )1;
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



		if(SQLCODE == 0 && ApplStat == 'R')	//(scount > 0))
		{

		// No need to fire li_update_gmpc_stat_p,so update the UPDFLAG as 'Y'

		/* EXEC SQL UPDATE APPNT_JPN_STATUPD 
		SET UPDFLAG			= 'Y',
			LEGREQDATETIME  =  TO_DATE(TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS')
			//LEGMSGID        = :leg_msgid				
		WHERE APPLID  = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPNT_JPN_STATUPD  set UPDFLAG='Y',LEGREQDATETIME=TO\
_DATE(TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS') where APPLID=:\
b0";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )207;
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
				userlog("update_gmpc_status_to_host : Updateing APPNT_JPN_STATUPD failed: %s", SQLMSG);
			#endif
				strcpy(prog_log.remarks,"update_gmpc_status_to_host : Updateing APPNT_JPN_STATUPD  failed ");
				sprintf(excep_log.error_msg, "update_gmpc_status_to_host : Updateing APPNT_JPN_STATUPD failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				//log_error(ctx);	
				
				return UPDATE_ERROR;
			}

			userlog(" Skipping the execution of li_update_gmpc_stat_p, since LEGREQFLAG  = C in IJPN_LEGACY_REQUEST");
			userlog(" Exiting the service after updating the updflag = Y in APPNT_JPN_STATUPD");

			// added this code on 30/10/2006 to insert a record into APPNT_JPN_STATUPD_ARC 
			// to keep track

			/* EXEC SQL INSERT INTO APPNT_JPN_STATUPD_ARC(APPLID, CAPPLSTAT, TIMESTAMP, UPDFLAG, 
				LEGREQDATETIME, LEGMSGID, LEGREJCODE, LEGREJREASON) 
				SELECT APPLID, CAPPLSTAT, TIMESTAMP, UPDFLAG, 
				LEGREQDATETIME, LEGMSGID, LEGREJCODE, LEGREJREASON
				FROM APPNT_JPN_STATUPD WHERE APPLID = :applid; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPNT_JPN_STATUPD_ARC (APPLID,CAPPLSTAT, times\
tamp ,UPDFLAG,LEGREQDATETIME,LEGMSGID,LEGREJCODE,LEGREJREASON)select APPLID ,C\
APPLSTAT , timestamp  ,UPDFLAG ,LEGREQDATETIME ,LEGMSGID ,LEGREJCODE ,LEGREJRE\
ASON  from APPNT_JPN_STATUPD where APPLID=:b0";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )226;
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
				/* EXEC SQL DELETE FROM APPNT_JPN_STATUPD
					WHERE APPLID = :applid; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "delete  from APPNT_JPN_STATUPD  where APPLID=:b0";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )245;
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

			return SUCCESS;

		}
		else
			userlog("Proceeding to fire li_update_gmpc_stat_p message since the LEGREQFLAG  is not C in IJPN_LEGACY_REQUEST");

/* end IJPN */

/* Added this code on 26/01/06, if legapplid is nuul then also no need to fire 
this message, just come out with out firing the 201250 message */

	legapplid[0] = '\0';
	/* EXEC SQL SELECT LEGAPPLID,APPLPRIORITY INTO :legapplid:legapplid_ind,
		:applpriority:applpriority_ind
		FROM  APPLICATION 
		WHERE APPLID = :applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select LEGAPPLID ,APPLPRIORITY into :b0:b1,:b2:b3  from APPL\
ICATION where APPLID=:b4";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )264;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)legapplid;
 sqlstm.sqhstl[0] = (unsigned int  )25;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&legapplid_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&applpriority;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&applpriority_ind;
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
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog("JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from APPLICATION failed : %s", SQLMSG); 
		#endif
			strcpy(prog_log.remarks,"JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from APPLICATION failed");
			sprintf(excep_log.error_msg,"JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from APPLICATION failed  :%s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			//log_error(ctx);
					
			return SELECT_ERROR;
		}

	userlog("update_gmpc_status_to_host : legapplid : %s",legapplid);

	if((legapplid_ind == 0) && ((legapplid[0] != '\0') && (legapplid[0] != ' ')))
	{
		strcpy(lireq.appl_no, legapplid);
	}
	else
	{
		// No need to fire li_update_gmpc_stat_p,so update the UPDFLAG as 'Y'

		/* EXEC SQL UPDATE APPNT_JPN_STATUPD 
		SET UPDFLAG			= 'Y',
			LEGREQDATETIME  =  TO_DATE(TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS')
			//LEGMSGID        = :leg_msgid				
		WHERE APPLID  = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPNT_JPN_STATUPD  set UPDFLAG='Y',LEGREQDATETIME=TO\
_DATE(TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS') where APPLID=:\
b0";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )291;
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
				userlog("update_gmpc_status_to_host : Updateing APPNT_JPN_STATUPD failed: %s", SQLMSG);
			#endif
				strcpy(prog_log.remarks,"update_gmpc_status_to_host : Updateing APPNT_JPN_STATUPD  failed ");
				sprintf(excep_log.error_msg, "update_gmpc_status_to_host : Updateing APPNT_JPN_STATUPD failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				//log_error(ctx);	
				
				return UPDATE_ERROR;
			}

			userlog(" Skipping the execution of li_update_gmpc_stat_p, since legapplid is null");
			userlog(" Exiting the service after updating the updflag = Y in APPNT_JPN_STATUPD");

			// added this code on 30/10/2006 to insert a record into APPNT_JPN_STATUPD_ARC 
			// to keep track

			/* EXEC SQL INSERT INTO APPNT_JPN_STATUPD_ARC(APPLID, CAPPLSTAT, TIMESTAMP, UPDFLAG, 
				LEGREQDATETIME, LEGMSGID, LEGREJCODE, LEGREJREASON) 
				SELECT APPLID, CAPPLSTAT, TIMESTAMP, UPDFLAG, 
				LEGREQDATETIME, LEGMSGID, LEGREJCODE, LEGREJREASON
				FROM APPNT_JPN_STATUPD WHERE APPLID = :applid; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPNT_JPN_STATUPD_ARC (APPLID,CAPPLSTAT, times\
tamp ,UPDFLAG,LEGREQDATETIME,LEGMSGID,LEGREJCODE,LEGREJREASON)select APPLID ,C\
APPLSTAT , timestamp  ,UPDFLAG ,LEGREQDATETIME ,LEGMSGID ,LEGREJCODE ,LEGREJRE\
ASON  from APPNT_JPN_STATUPD where APPLID=:b0";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )310;
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
				/* EXEC SQL DELETE FROM APPNT_JPN_STATUPD
					WHERE APPLID = :applid; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "delete  from APPNT_JPN_STATUPD  where APPLID=:b0";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )329;
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

			return SUCCESS;

	}
	
/* end IJPN */



		/* EXEC SQL SELECT KPTNO, TO_CHAR(APPLDATE,'DDMMYYYY'), USERID,
			TO_CHAR(TIMESTAMP,'DDMMYYYY')
			INTO :kpt_no:kpt_no_ind,
				 :appl_date:appl_date_ind,
				 :appln_staff_id:appln_staff_id_ind,
				 :tstamp:tstamp_ind
			FROM APPLICATION
			WHERE APPLID = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select KPTNO ,TO_CHAR(APPLDATE,'DDMMYYYY') ,USERID ,TO_CHAR\
( timestamp ,'DDMMYYYY') into :b0:b1,:b2:b3,:b4:b5,:b6:b7  from APPLICATION wh\
ere APPLID=:b8";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )348;
  sqlstm.selerr = (unsigned short)1;
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
  sqlstm.sqhstv[1] = (         void  *)appl_date;
  sqlstm.sqhstl[1] = (unsigned int  )9;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&appl_date_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&appln_staff_id;
  sqlstm.sqhstl[2] = (unsigned int  )11;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&appln_staff_id_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)tstamp;
  sqlstm.sqhstl[3] = (unsigned int  )9;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&tstamp_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)applid;
  sqlstm.sqhstl[4] = (unsigned int  )20;
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



		setlen(appln_staff_id);
	    setnull(appln_staff_id);

		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : kpt_no : %s", kpt_no); 
		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : appl_date : %s", appl_date);
		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : appln_staff_id : %s", appln_staff_id.arr);
		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : tstamp : %s", tstamp);

		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog("JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from APPLICATION failed : %s", SQLMSG); 
		#endif
			strcpy(prog_log.remarks,"JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from APPLICATION failed");
			sprintf(excep_log.error_msg,"JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from APPLICATION failed  :%s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			//log_error(ctx);
					
			return SELECT_ERROR;
		}


		/* EXEC SQL SELECT LTRIM(RTRIM(CAPPLSTAT)) INTO :capplstat 
			FROM APPNT_JPN_STATUPD
				WHERE APPLID = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select LTRIM(RTRIM(CAPPLSTAT)) into :b0  from APPNT_JPN_STA\
TUPD where APPLID=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )383;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&capplstat;
  sqlstm.sqhstl[0] = (unsigned int  )6;
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



		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : capplstat : %s",capplstat.arr);

		setlen(capplstat);
		setnull(capplstat);

		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : capplstat : %s",capplstat.arr);

				
		if (SQLCODE != 0) 
		{
		 #ifdef DEBUG
			userlog("JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from APPNT_JPN_STATUPD failed : %s", SQLMSG); 
		 #endif
			strcpy(prog_log.remarks,"JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from APPNT_JPN_STATUPD failed");
			sprintf(excep_log.error_msg,"JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from APPNT_JPN_STATUPD failed  :%s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			//log_error(ctx);
					
			return SELECT_ERROR;
		}


		
		// Added this query on 09/02/2010 to get the userid and timestamp from cardstatus 
		// for P3 and P4
		

		if ((strcmp((char *)capplstat.arr, "P3") == 0) || (strcmp((char *)capplstat.arr, "P4") == 0))
		{

			/* EXEC SQL SELECT TO_CHAR(TIMESTAMP,'DDMMYYYY'),USERID 
				INTO :tstamp:tstamp_ind, appln_staff_id:appln_staff_id_ind
				FROM CARD_STATUS 
				WHERE APPLID = :applid
				AND CARDVERSIONNO = ( SELECT MAX(CARDVERSIONNO) FROM CARD_STATUS WHERE APPLID = :applid); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select TO_CHAR( timestamp ,'DDMMYYYY') ,USERID into :b0:b1\
,:b2:b3  from CARD_STATUS where (APPLID=:b4 and CARDVERSIONNO=(select max(CARD\
VERSIONNO)  from CARD_STATUS where APPLID=:b4))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )406;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)tstamp;
   sqlstm.sqhstl[0] = (unsigned int  )9;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&tstamp_ind;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&appln_staff_id;
   sqlstm.sqhstl[1] = (unsigned int  )11;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)&appln_staff_id_ind;
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
   sqlstm.sqhstv[3] = (         void  *)applid;
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
				userlog("JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from CARD_STATUS failed : %s", SQLMSG); 
			#endif
				strcpy(prog_log.remarks,"JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from CARD_STATUS failed");
				sprintf(excep_log.error_msg,"JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from CARD_STATUS failed  :%s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				//log_error(ctx);
						
				return SELECT_ERROR;
			}

			setlen(appln_staff_id);
			setnull(appln_staff_id);

		}

		// end of code adding 09/02/2010



//Added on 5th March '07
		if(ApplStat == 'T' && capplstat.arr[0] != 'T')	//(scount > 0))
		{

		// No need to fire li_update_gmpc_stat_p,so update the UPDFLAG as 'Y'

		/* EXEC SQL UPDATE APPNT_JPN_STATUPD 
		SET UPDFLAG			= 'Y',
			LEGREQDATETIME  =  TO_DATE(TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS')
			//LEGMSGID        = :leg_msgid				
		WHERE APPLID  = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPNT_JPN_STATUPD  set UPDFLAG='Y',LEGREQDATETIME=TO\
_DATE(TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS') where APPLID=:\
b0";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )437;
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
				userlog("update_gmpc_status_to_host : Updateing APPNT_JPN_STATUPD failed: %s", SQLMSG);
			#endif
				strcpy(prog_log.remarks,"update_gmpc_status_to_host : Updateing APPNT_JPN_STATUPD  failed ");
				sprintf(excep_log.error_msg, "update_gmpc_status_to_host : Updateing APPNT_JPN_STATUPD failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				//log_error(ctx);	
				
				return UPDATE_ERROR;
			}

			userlog(" Skipping the execution of li_update_gmpc_stat_p, since LEGREQFLAG  = C in IJPN_LEGACY_REQUEST");
			userlog(" Exiting the service after updating the updflag = Y in APPNT_JPN_STATUPD");

			// added this code on 30/10/2006 to insert a record into APPNT_JPN_STATUPD_ARC 
			// to keep track

			/* EXEC SQL INSERT INTO APPNT_JPN_STATUPD_ARC(APPLID, CAPPLSTAT, TIMESTAMP, UPDFLAG, 
				LEGREQDATETIME, LEGMSGID, LEGREJCODE, LEGREJREASON) 
				SELECT APPLID, CAPPLSTAT, TIMESTAMP, UPDFLAG, 
				LEGREQDATETIME, LEGMSGID, LEGREJCODE, LEGREJREASON
				FROM APPNT_JPN_STATUPD WHERE APPLID = :applid; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPNT_JPN_STATUPD_ARC (APPLID,CAPPLSTAT, times\
tamp ,UPDFLAG,LEGREQDATETIME,LEGMSGID,LEGREJCODE,LEGREJREASON)select APPLID ,C\
APPLSTAT , timestamp  ,UPDFLAG ,LEGREQDATETIME ,LEGMSGID ,LEGREJCODE ,LEGREJRE\
ASON  from APPNT_JPN_STATUPD where APPLID=:b0";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )456;
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
				/* EXEC SQL DELETE FROM APPNT_JPN_STATUPD
					WHERE APPLID = :applid; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "delete  from APPNT_JPN_STATUPD  where APPLID=:b0";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )475;
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

			return SUCCESS;

		}
//End 5th March '07

	/* EXEC SQL SELECT LTRIM(RTRIM(JPNSTAT)) INTO :jpnstat:jpnstat_ind
		FROM APPLSTAT_REL_GMPCJPN
			WHERE GMPCSTAT = :capplstat; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 5;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select LTRIM(RTRIM(JPNSTAT)) into :b0:b1  from APPLSTAT_REL_\
GMPCJPN where GMPCSTAT=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )494;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&jpnstat;
 sqlstm.sqhstl[0] = (unsigned int  )5;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&jpnstat_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&capplstat;
 sqlstm.sqhstl[1] = (unsigned int  )6;
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

 

	userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : sqlca.sqlcode : %d",sqlca.sqlcode);
	userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : jpnstat : %s",jpnstat.arr);


	if (SQLCODE != 0) 
	{
	 #ifdef DEBUG
		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : Select from APPLSTAT_REL_GMPCJPN failed : %s", SQLMSG); 
	 #endif
		strcpy(prog_log.remarks,"JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from APPLSTAT_REL_GMPCJPN failed");
		sprintf(excep_log.error_msg,"JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from APPLSTAT_REL_GMPCJPN failed  :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		//log_error(ctx);
					
		return SELECT_ERROR;
	}

		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : jpnstat : %s",jpnstat.arr);

		setlen(capplstat);
		setnull(capplstat);

		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : jpnstat : %s",jpnstat.arr);
		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : length of jpnstat : %d",jpnstat.len);

		if(jpnstat.len == 1)
		{
			lireq.appln_stat  = jpnstat.arr[0];
			lireq.appln_stat2 = '\0';
		}
		else if(jpnstat.len > 1)
		{
			if(strncmp((char *)jpnstat.arr,"QE",2) == 0)
			{
				// if reasoncode is C0100 then send 'E' else send 'Q'
				prcode = 0;
				/* EXEC SQL SELECT COUNT(*) INTO :prcode
				FROM PROBL_RECORD WHERE APPLID = :applid
				AND PROBLREASONCODE = 'C0100'; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select count(*)  into :b0  from PROBL_RECORD where (APPLI\
D=:b1 and PROBLREASONCODE='C0100')";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )517;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&prcode;
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

 

				if (SQLCODE != 0) 
				{
				 #ifdef DEBUG
					userlog("JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from PROBL_RECORD failed : %s", SQLMSG); 
				 #endif
					strcpy(prog_log.remarks,"JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from PROBL_RECORD failed");
					sprintf(excep_log.error_msg,"JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from PROBL_RECORD failed  :%s", SQLMSG);
					excep_log.termination_flag = YES;
					excep_log.severity = FATAL;

					//log_error(ctx);
					
					return SELECT_ERROR;
				}
				
				userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) PROBLREASONCODE C0100 count: %d",prcode); 

				
				if(prcode == 0)
					lireq.appln_stat  = jpnstat.arr[1];  //jpnstat.arr[0]; changed this on 23/8/06 req from vasanth
				else
					lireq.appln_stat  = jpnstat.arr[0];  //jpnstat.arr[1]; changed this on 23/8/06 req from vasanth

				lireq.appln_stat2 = '\0';
			}
			else
			{
			lireq.appln_stat  = jpnstat.arr[0];
			lireq.appln_stat2 = jpnstat.arr[1];
			}
		}

	#ifdef DEBUG
		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : lireq.appln_stat : %c",lireq.appln_stat);
		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : lireq.appln_stat2 : %c",lireq.appln_stat2);
		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : capplstat.arr : %s",capplstat.arr);
	#endif


	/* If the message is to be sent at Issaunce, then only Card details */
	/* are to be sent, otherwise skip the selection						*/

	bundleid.arr[0] = '\0';

	if (request_flag == GMPC_STAT_UPD)
	{
		card_stat = ACTIVE;

	if((strcmp((char *)capplstat.arr,"T") != 0) && (strcmp((char *)capplstat.arr,"H") != 0))
	{

		/* EXEC SQL SELECT A.CARDVERSIONNO, TO_CHAR(A.CARDISSUEDATE, 'DDMMYYYY'),
				TO_CHAR(A.CARDPERSONALDATE, 'DDMMYYYY'), A.BATCHNO,
				TO_CHAR(B.CARDCOLLDATE, 'DDMMYYYY'), B.USERID
		  INTO :cardversion:cardversion_ind,
			   :card_issue_dt:card_issue_dt_ind,
			   :personalise_dt:personalise_dt_ind, :bundleid:bundleid_ind,
			   :collection_dt:collection_dt_ind, 
			   :issue_user_id
		 FROM CARD_STATUS A, APPLICATION B
		 WHERE A.APPLID = :applid
		 AND CARDVERSIONNO = (SELECT MAX(CARDVERSIONNO) FROM CARD_STATUS WHERE APPLID = :applid)		 
		 AND B.APPLID = A.APPLID; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select A.CARDVERSIONNO ,TO_CHAR(A.CARDISSUEDATE,'DDMMYYYY')\
 ,TO_CHAR(A.CARDPERSONALDATE,'DDMMYYYY') ,A.BATCHNO ,TO_CHAR(B.CARDCOLLDATE,'D\
DMMYYYY') ,B.USERID into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10  from CARD_ST\
ATUS A ,APPLICATION B where ((A.APPLID=:b11 and CARDVERSIONNO=(select max(CARD\
VERSIONNO)  from CARD_STATUS where APPLID=:b11)) and B.APPLID=A.APPLID)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )540;
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
  sqlstm.sqhstv[1] = (         void  *)card_issue_dt;
  sqlstm.sqhstl[1] = (unsigned int  )9;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&card_issue_dt_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)personalise_dt;
  sqlstm.sqhstl[2] = (unsigned int  )9;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&personalise_dt_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&bundleid;
  sqlstm.sqhstl[3] = (unsigned int  )25;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&bundleid_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)collection_dt;
  sqlstm.sqhstl[4] = (unsigned int  )9;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&collection_dt_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)issue_user_id;
  sqlstm.sqhstl[5] = (unsigned int  )9;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)applid;
  sqlstm.sqhstl[6] = (unsigned int  )20;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)applid;
  sqlstm.sqhstl[7] = (unsigned int  )20;
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



		//AND A.CARDSTAT = :card_stat

			setlen(bundleid);
			setnull(bundleid);
	}
	else
	{	

		/* EXEC SQL SELECT TO_CHAR(CARDCOLLDATE, 'DDMMYYYY'), USERID
			INTO :collection_dt:collection_dt_ind,:issue_user_id
			FROM APPLICATION WHERE APPLID = :applid
			AND :capplstat IN ('T','H'); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select TO_CHAR(CARDCOLLDATE,'DDMMYYYY') ,USERID into :b0:b1\
,:b2  from APPLICATION where (APPLID=:b3 and :b4 in ('T','H'))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )587;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)collection_dt;
  sqlstm.sqhstl[0] = (unsigned int  )9;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&collection_dt_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)issue_user_id;
  sqlstm.sqhstl[1] = (unsigned int  )9;
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
  sqlstm.sqhstv[3] = (         void  *)&capplstat;
  sqlstm.sqhstl[3] = (unsigned int  )6;
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

		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog("JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from CARD_STATUS/APPLICATION failed : %s", SQLMSG);
		#endif
			strcpy(prog_log.remarks,"JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from CARD_STATUS/APPLICATION failed ");
			sprintf(excep_log.error_msg, "JPN_STATUS_UPD(update_gmpc_status_to_host) : Select from CARD_STATUS/APPLICATION failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			//log_error(ctx);
			
			return SELECT_ERROR;
		}
	}

	//strcpy(processind, APPL_REGISTER);

	/* EXEC SQL SELECT B.BRANCHCODEJPN
		INTO :appl_legacy_branch:appl_legacy_branch_ind
		FROM BRANCH_INFO B, APPLICATION A
		WHERE A.APPLID = :applid
		AND   B.BRANCHCODE = A.BRANCHCODE; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select B.BRANCHCODEJPN into :b0:b1  from BRANCH_INFO B ,APPL\
ICATION A where (A.APPLID=:b2 and B.BRANCHCODE=A.BRANCHCODE)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )618;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)appl_legacy_branch;
 sqlstm.sqhstl[0] = (unsigned int  )9;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&appl_legacy_branch_ind;
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

			 

		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog("JPN_STATUS_UPD(update_gmpc_status_to_host) : Selecting JPN Branch code from BRANCH_INFO failed : %s", SQLMSG);
		#endif
			strcpy(prog_log.remarks,"JPN_STATUS_UPD(update_gmpc_status_to_host) : Selecting  JPN Branch code from BRANCH_INFO failed");
			sprintf(excep_log.error_msg, "JPN_STATUS_UPD(update_gmpc_status_to_host) : Selecting JPN Branch code from BRANCH_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			//log_error(ctx);
		
			return SELECT_ERROR;
		}  

	/* If the message is to be sent at Issaunce, then only Issaunce */
	/* details are to be sent, otherwise skip the selection			*/

	if (request_flag == GMPC_STAT_UPD)
	{
		strcpy(processind,ISSUE_CARD);
		strcpy(issue_branch, req->header.branch_code);
		issue_branch_ind = 0;

		/* EXEC SQL SELECT BRANCHCODEJPN
			 INTO :issuing_legacy_branch:issuing_legacy_branch_ind
			 FROM BRANCH_INFO
			 WHERE BRANCHCODE  = :issue_branch:issue_branch_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select BRANCHCODEJPN into :b0:b1  from BRANCH_INFO where BR\
ANCHCODE=:b2:b3";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )641;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)issuing_legacy_branch;
  sqlstm.sqhstl[0] = (unsigned int  )9;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&issuing_legacy_branch_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)issue_branch;
  sqlstm.sqhstl[1] = (unsigned int  )7;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&issue_branch_ind;
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
			userlog("JPN_STATUS_UPD(update_gmpc_status_to_host) : Selecting Application details of Issuance failed : %s", SQLMSG);
		#endif
			strcpy(prog_log.remarks,"JPN_STATUS_UPD(update_gmpc_status_to_host) : Selecting Application details of Issuance failed ");
			sprintf(excep_log.error_msg, "JPN_STATUS_UPD(update_gmpc_status_to_host) : Selecting Application details of Issuance failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			//log_error(ctx);
			
			return SELECT_ERROR;
		}

	}

	/* Copy the the values into the lireq structure */

	if (kpt_no_ind == 0)
	{
		strcpy(lireq.appnt_kpt, kpt_no); // kptno
	}

	#ifdef DEBUG
		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : Before setnull(bundleid)");
	#endif



	#ifdef DEBUG
		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : bundleid : %s",bundleid.arr);
	#endif

//	userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : bundleid : %c",bundleid.arr[0]);
//	userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : bundleid : %s",bundleid.arr);
	

	// if status is k only send this field to host
	if(strcmp((char *)jpnstat.arr, "K") == 0)
	{
		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) jpnstat.arr for bundleid inside the loop : %s",jpnstat.arr);

		if((bundleid_ind == 0) && ((bundleid.arr[0] != '\0') && (bundleid.arr[0] != ' ')))
		{
			strcpy(lireq.bundleid,(char *)bundleid.arr);  // batchno
		}

		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : personalise_dt : %s",personalise_dt);

		if((personalise_dt_ind == 0) && ((personalise_dt[0] != '\0') && (personalise_dt[0] != ' ')))
		{
			strcpy(lireq.personlised_date,personalise_dt);
		}

	}
	else if(strcmp((char *)jpnstat.arr, "K1") == 0)
	{
		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) jpnstat.arr for bundleid inside the loop : %s",jpnstat.arr);

		if((bundleid_ind == 0) && ((bundleid.arr[0] != '\0') && (bundleid.arr[0] != ' ')))
		{
			strcpy(lireq.bundleid,(char *)bundleid.arr);  // batchno
		}

	}
	else if((applpriority == 4) && (strcmp((char *)jpnstat.arr, "K1") == 0))
	{
		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : personalise_dt : %s",personalise_dt);

		if((personalise_dt_ind == 0) && ((personalise_dt[0] != '\0') && (personalise_dt[0] != ' ')))
		{
			strcpy(lireq.personlised_date,personalise_dt);
		}

	}
	else if (strcmp((char *)jpnstat.arr, "PK") == 0)
	{
		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) jpnstat.arr for bundleid inside the loop : %s",jpnstat.arr);		

		if((bundleid_ind == 0) && ((bundleid.arr[0] != '\0') && (bundleid.arr[0] != ' ')))
		{
			strcpy(lireq.bundleid,(char *)bundleid.arr);  // batchno
		}

	}
	else
		userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : status is not K or K1 or PK so bundleid or batchno is not sent to host");

	userlog("JPN_STATUS_UPD (update_gmpc_status_to_host) : lireq.bundleid : %s",lireq.bundleid);


	if (request_flag == GMPC_STAT_UPD)
	{
	  /* Check whether the application status is 'ISSUED' */

	  //if (applstat != ISSUED)
	  //{
	  //#ifdef DEBUG
	  //	userlog("upd_card_details : Invalid application status - %c", applstat);
	  //#endif
	  //	strcpy(prog_log.remarks,"upd_card_details : Invalid application status");
	  //	sprintf(excep_log.error_msg, "upd_card_details : Invalid application status - %c", applstat);
	  //	excep_log.termination_flag = YES;
	  //	excep_log.severity = FATAL;
	  //
	  //	log_error(ctx);
	  //			
	  //	return INVALID_APPL_STAT;		
	  //}
	  //else
	  //{
	  //	card_dtls.appln_stat = applstat; // appl_status
	  //}

	  /* The fields below are to be sent only for GMPC status update request */

	/* commeneted on 20/08/2005 as this is sent only for Issued by vasanth, used in JPN_UPDATE service 
	  if (cardversion_ind == 0)
	  {
		lireq.gmpc_version_no = cardversion; //gmpc_version_no
	  }

  	  if (personalise_dt_ind == 0)
	  {
		strcpy(lireq.gmpc_pc_date , personalise_dt); //gmpc_pc_date
	  }

	*/
	  if(issuing_legacy_branch_ind == 0)
	  {
		
		strcpy(lireq.appln_gsc_no , issuing_legacy_branch); // application brach code
	  }


	}
	
	/* commented as this is sent for only status X and Q only used in JPN_UPDATE service
	if (appl_date_ind == 0)
	{
		strcpy(lireq.appln_date , appl_date);
	}
	*/

	if(appl_legacy_branch_ind == 0)
	{
		
		strcpy(lireq.appln_gsc_no , appl_legacy_branch);
	}

	// added this code on 23/04/07 to trim the null spaces for appln_staff_id at the end
	//if (appln_staff_id_ind == 0)
	//{
	//	
	//	strcpy(lireq.appln_staff_id , appln_staff_id.arr);
	//}

	#ifdef DEBUG
		userlog("update_gmpc_status_to_host : appln_staff_id.arr before trimming : %s", appln_staff_id.arr);
	#endif

	if((appln_staff_id_ind == 0) && ((appln_staff_id.arr[0] != '\0') && (appln_staff_id.arr[0] != ' ')))
	{
		sflag=0;
		for(k=0;k<9;k++)
		{
			if(appln_staff_id.arr[k] == ' ')
			{
				if((appln_staff_id.arr[k] == ' ') && (sflag == 1))
				{
					sflag=0;
					break;
				}
				else
				{					
					sflag=1;
				}
			}
			lireq.appln_staff_id[k] = appln_staff_id.arr[k];
		}
		lireq.appln_staff_id[k-1] = '\0';
	}

	#ifdef DEBUG
		userlog("update_gmpc_status_to_host : appln_staff_id.arr after trimming : %s", appln_staff_id.arr);
		userlog("update_gmpc_status_to_host : lireq.appln_staff_id after trimming : %s", lireq.appln_staff_id);
	#endif

	if(tstamp_ind == 0)
		strcpy(lireq.appln_date , tstamp);

	userlog("applpriority :%d:",applpriority);
	userlog("jpnstat.arr :%s:",jpnstat.arr);

	// this condition and  code is added on 30/01/07
	if((applpriority == 4) && (strcmp((char *)jpnstat.arr, "K1") == 0))
	{
		userlog("Inside the loop of service");
		lireq.applpriority = applpriority;
	}



		/* Populate the header to be sent to legacy	*/

		strcpy(branch_code, req->header.branch_code);

		/* legacy branch code */
		/* EXEC SQL SELECT BRANCHCODEJPN
			INTO :appl_legacy_branch:appl_legacy_branch_ind
			FROM BRANCH_INFO 
			WHERE BRANCHCODE = :branch_code; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select BRANCHCODEJPN into :b0:b1  from BRANCH_INFO where BR\
ANCHCODE=:b2";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )664;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)appl_legacy_branch;
  sqlstm.sqhstl[0] = (unsigned int  )9;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&appl_legacy_branch_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)branch_code;
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


	
		userlog("update_gmpc_status_to_host : appl_legacy_branch : %s",appl_legacy_branch);
		userlog("update_gmpc_status_to_host : appl_legacy_branch_ind : %d",appl_legacy_branch_ind);
		 

		if (SQLCODE != 0)
		{
			#ifdef DEBUG
				userlog("update_gmpc_status_to_host : Selecting JPN Branch code from BRANCH_INFO failed : %s", SQLMSG);
			#endif
			strcpy(prog_log.remarks,"update_gmpc_status_to_host : Selecting  JPN Branch code from BRANCH_INFO failed");
			sprintf(excep_log.error_msg, "update_gmpc_status_to_host : Selecting JPN Branch code from BRANCH_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			//log_error(ctx);
		
			return SELECT_ERROR;
		}  

		if(appl_legacy_branch_ind == 0)
			strcpy(hdr.gsc_no,appl_legacy_branch);

	/* get the legacy transaction date and time */
	
	/* EXEC SQL SELECT TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') 
			INTO :leg_header_date:leg_header_date_ind 
			FROM DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') into :b0:b1  fro\
m DUAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )687;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)leg_header_date;
 sqlstm.sqhstl[0] = (unsigned int  )16;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&leg_header_date_ind;
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



	userlog("leg_header_date : %s",leg_header_date);
	userlog("leg_header_date_ind : %d",leg_header_date_ind);

	if(leg_header_date_ind == 0)
	{
		strncpy(hdr.trans_date, leg_header_date, 8);
		hdr.trans_date[DATE_SIZE - 1] = '\0';

		strncpy(hdr.trans_time, leg_header_date + 9, 6);
		hdr.trans_time[TIME_SIZE - 1] = '\0';
	}

	strcpy(hdr.user_id, req->header.user_id);


	/* EXEC SQL SELECT LITXNWSID.NEXTVAL 	INTO :ws_id:ws_id_ind
	FROM  DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select LITXNWSID.nextval  into :b0:b1  from DUAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )706;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&ws_id;
 sqlstm.sqhstl[0] = (unsigned int  )18;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&ws_id_ind;
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



	setlen(ws_id);
	setnull(ws_id);
	
	//strcpy(hdr.workstation_id, ws_id.arr);

	#ifdef DEBUG
		userlog("update_gmpc_status_to_host : ws_id.arr before trimming : %s", ws_id.arr);
	#endif

	if((ws_id_ind == 0) && ((ws_id.arr[0] != '\0') && (ws_id.arr[0] != ' ')))
	{
		sflag=0;
		for(k=0;k<16;k++)
		{
			if(ws_id.arr[k] == ' ')
			{
				if((ws_id.arr[k] == ' ') && (sflag == 1))
				{
					sflag=0;
					break;
				}
				else
				{					
					sflag=1;
				}
			}
			hdr.workstation_id[k] = ws_id.arr[k];
		}
		hdr.workstation_id[k-1] = '\0';
	}

	#ifdef DEBUG
		userlog("update_gmpc_status_to_host : ws_id.arr after trimming : %s", ws_id.arr);
		userlog("update_gmpc_status_to_host : hdr.workstation_id after trimming : %s", hdr.workstation_id);
	#endif


#ifdef DEBUG
	userlog("update_gmpc_status_to_host : KPT - %s", lireq.appnt_kpt);
	userlog("update_gmpc_status_to_host : Appl status - %c", lireq.appln_stat);
	userlog("update_gmpc_status_to_host : Appl date - %s", lireq.appln_date);
	userlog("update_gmpc_status_to_host : Branch code - %s", lireq.appln_gsc_no);
	userlog("update_gmpc_status_to_host : User id - %s", lireq.appln_staff_id);	
	userlog("update_gmpc_status_to_host : GMPC PC date - %s", lireq.gmpc_pc_date);		
	userlog("update_gmpc_status_to_host : Appl status2 - %c", lireq.appln_stat2);
	userlog("update_gmpc_status_to_host : Card version no - %d", lireq.gmpc_version_no);
	userlog("update_gmpc_status_to_host : legapplid - %s", lireq.appl_no);
	userlog("update_gmpc_status_to_host : personlised_date - %s", lireq.personlised_date);
	userlog("update_gmpc_status_to_host : ws_id - %s", ws_id.arr);
	userlog("update_gmpc_status_to_host : hdr.workstation_id - %s", hdr.workstation_id);
	//userlog("update_gmpc_status_to_host : lireq.bundleid - %s", lireq.bundleid);
#endif


	/* Put the request */
	sErrMessage[0] = '\0';
	if ((ret_code = li_update_gmpc_stat_p(hdr, lireq, leg_msg_id, &error_code,pReplyMsg, &iReplyMsgLen, sErrMessage)) != GMPC_GOOD)
	{
	
	#ifdef DEBUG
		userlog("update_gmpc_status_to_host : Unable to put the GMPC status update request : %d", error_code);
		userlog("update_gmpc_status_to_host : Unable to put the GMPC status update request : %s", sErrMessage);
	#endif
		strcpy(prog_log.remarks,"update_gmpc_status_to_host : Unable to put the GMPC status update request");
		sprintf(excep_log.error_msg, "update_gmpc_status_to_host : Unable to put the GMPC status update request : Error code - %d", error_code);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		//log_error(ctx);

		if(leg_msg_id != NULL && strlen((char *)leg_msg_id) > 20)
			strcpy(leg_msgid, (char *)leg_msg_id);

		reject_code.arr[0] = '\0';
		reason_desc.arr[0] = '\0';

		if((sErrMessage[0] != '\0') && (sErrMessage[0] != ' '))
		{
		strncpy((char *)reject_code.arr,sErrMessage,8);
		setlen(reject_code);

		strcpy((char *)reason_desc.arr,sErrMessage);
		setlen(reason_desc);
		}

		userlog("reject_code : %s",reject_code.arr);
		if(reject_code.arr[0] != '\0')
			reject_code_ind = 0;
		else 
			reject_code_ind = -1;
	

		userlog("reason_desc : %s",reason_desc.arr);
		if(reason_desc.arr[0] != '\0')
			reason_desc_ind = 0;
		else
			reason_desc_ind = -1;

		
		/* EXEC SQL UPDATE APPNT_JPN_STATUPD 
		SET UPDFLAG			= 'F',
			LEGREQDATETIME  =  TO_DATE(TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS'),
			LEGMSGID        = :leg_msgid,
			LEGREJCODE      = :reject_code:reject_code_ind,
			LEGREJREASON    = :reason_desc:reason_desc_ind		
		WHERE APPLID  = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPNT_JPN_STATUPD  set UPDFLAG='F',LEGREQDATETIME=TO\
_DATE(TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS'),LEGMSGID=:b0,L\
EGREJCODE=:b1:b2,LEGREJREASON=:b3:b4 where APPLID=:b5";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )725;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)leg_msgid;
  sqlstm.sqhstl[0] = (unsigned int  )25;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&reject_code;
  sqlstm.sqhstl[1] = (unsigned int  )11;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&reject_code_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&reason_desc;
  sqlstm.sqhstl[2] = (unsigned int  )163;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&reason_desc_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)applid;
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


		

		if (SQLCODE != 0 && SQLCODE != 1403)
		{
		#ifdef DEBUG
			userlog("update_gmpc_status_to_host : Updateing APPNT_JPN_STATUPD with LEGREJCODE and LEGREJREASON failed : %s", SQLMSG);
		#endif
			strcpy(prog_log.remarks,"update_gmpc_status_to_host : Updateing APPNT_JPN_STATUPD with LEGREJCODE and LEGREJREASON failed ");
			sprintf(excep_log.error_msg, "update_gmpc_status_to_host : Updateing APPNT_JPN_STATUPD failed with LEGREJCODE and LEGREJREASON : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			//log_error(ctx);				
		}

	/* Commit the changes here*/
	if(GMPC_GOOD != (ret_val = gscbcommit_trans(ctx)))
	{
		#ifdef DEBUG
			userlog("update_gmpc_status_to_host : Function gscbcommit_trans failed");
		#endif		

	}

		#ifdef DEBUG
			userlog("update_gmpc_status_to_host : Updated APPNT_JPN_STATUPD with LEGREJCODE and LEGREJREASON");
		#endif
			
		return error_code;

	}
		
	/* Legacy function was successfull so update the flag in APPNT_JPN_STATUPD */

	strcpy(leg_msgid, (char *)leg_msg_id);

	
	if(ret_code == GMPC_GOOD)
	{
		//li_update_gmpc_stat_p is successful so update the table

		/* EXEC SQL UPDATE APPNT_JPN_STATUPD 
		SET UPDFLAG			= 'Y',
			LEGREQDATETIME  =  TO_DATE(TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS'),
			LEGMSGID        = :leg_msgid,
			LEGREJCODE      =  NULL,
			LEGREJREASON    =  NULL			
		WHERE APPLID  = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPNT_JPN_STATUPD  set UPDFLAG='Y',LEGREQDATETIME=TO\
_DATE(TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS'),LEGMSGID=:b0,L\
EGREJCODE=null ,LEGREJREASON=null  where APPLID=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )756;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)leg_msgid;
  sqlstm.sqhstl[0] = (unsigned int  )25;
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



		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog("update_gmpc_status_to_host : Updateing APPNT_JPN_STATUPD after the successful li_put failed: %s", SQLMSG);
		#endif
			strcpy(prog_log.remarks,"update_mykid_issuance : Updateing APPNT_JPN_STATUPD after the successful li_put failed ");
			sprintf(excep_log.error_msg, "update_mykid_issuance : Updateing APPNT_JPN_STATUPD failed after the successful li_put failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			//log_error(ctx);	
			
			return UPDATE_ERROR;
		}

		// added this code on 30/10/2006 to insert a record into APPNT_JPN_STATUPD_ARC 
		// to keep track

		/* EXEC SQL INSERT INTO APPNT_JPN_STATUPD_ARC(APPLID, CAPPLSTAT, TIMESTAMP, UPDFLAG, 
			LEGREQDATETIME, LEGMSGID, LEGREJCODE, LEGREJREASON) 
			SELECT APPLID, CAPPLSTAT, TIMESTAMP, UPDFLAG, 
			LEGREQDATETIME, LEGMSGID, LEGREJCODE, LEGREJREASON
			FROM APPNT_JPN_STATUPD WHERE APPLID = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPNT_JPN_STATUPD_ARC (APPLID,CAPPLSTAT, timest\
amp ,UPDFLAG,LEGREQDATETIME,LEGMSGID,LEGREJCODE,LEGREJREASON)select APPLID ,CA\
PPLSTAT , timestamp  ,UPDFLAG ,LEGREQDATETIME ,LEGMSGID ,LEGREJCODE ,LEGREJREA\
SON  from APPNT_JPN_STATUPD where APPLID=:b0";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )779;
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
			/* EXEC SQL DELETE FROM APPNT_JPN_STATUPD
				WHERE APPLID = :applid; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 8;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "delete  from APPNT_JPN_STATUPD  where APPLID=:b0";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )798;
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

	return SUCCESS;

}

