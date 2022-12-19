
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
            void  *sqhstv[4];
   unsigned int   sqhstl[4];
            int   sqhsts[4];
            void  *sqindv[4];
            int   sqinds[4];
   unsigned int   sqharm[4];
   unsigned int   *sqharc[4];
   unsigned short  sqadto[4];
   unsigned short  sqtdso[4];
} sqlstm = {12,4};

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
5,0,0,0,0,0,60,30,0,0,0,0,0,1,0,
20,0,0,0,0,0,58,112,0,0,1,1,0,1,0,3,109,0,0,
39,0,0,1,0,0,27,122,0,0,4,4,0,1,0,1,97,0,0,1,97,0,0,1,10,0,0,1,10,0,0,
70,0,0,2,0,0,30,160,0,0,0,0,0,1,0,
85,0,0,0,0,0,59,172,0,0,1,1,0,1,0,3,109,0,0,
};


#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "gscbdef.h"
#include <sqlca.h>

//EXEC SQL INCLUDE SQLCA;

extern "C" void userlog(char* szFormatString, ...);
extern "C" void userlogr(char* szFormatString, ...);



/************************************************************************************/
/* Function Name:	EnableThreads()         										*/
/* Input		:	None							              					*/
/* Return Values:   None															*/
/* Description	:	This function enables oracle thread support.					*/
/* Limitations	:   None															*/
/************************************************************************************/

void EnableThreads()
{
//	EXEC SQL INCLUDE SQLCA;
	
	//#ifdef DEBUG
	//	userlog("Inside EnableThreads");
	//#endif
	//struct sqlca sqlca = {0};
	/* EXEC SQL ENABLE THREADS; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 0;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )5;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

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

	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char connectstring[CONNECTSTRING_SIZE];
	char passwd[PASSWD_SIZE];

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
		//free(other_data.value); // commented on 4/12/2006 temporarly to make sure sure a value is there for this function.
		userlog("ora_connect: Read registry failed for ConnectString", errno);
		userlogr("ora_connect: Read registry failed for ConnectString", errno);
		//return FAILURE;  // commented on 4/12/2006 temporarly to make sure sure a value is there for this function.

		strcpy(connectstring, "GSCB@GSCB");
		//free(other_data.value);
		userlog("ora_connect: Read registry failed for ConnectString, but value is hardcoded and passed here");
		userlogr("ora_connect: Read registry failed for ConnectString, but value is hardcoded and passed here : %s",connectstring);
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
		userlogr("ora_connect: Read registry failed for Password");
		//return FAILURE;

		strcpy(passwd, "gscb");
		userlog("ora_connect: Read registry failed for Password, but value is hardcoded and passed here");
		userlogr("ora_connect: Read registry failed for Password, but value is hardcoded and passed here: %s",passwd);
		//free(other_data.value);
	}
	else
	{
		strcpy(passwd, (const char *)other_data.value);
		free(other_data.value);
	}


	/* EXEC SQL CONTEXT ALLOCATE :pcctx; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 1;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )20;
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
	userlog("Using sql context %u", *ctx);
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
 sqlstm.offset = (unsigned int  )39;
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


	struct sqlca sqlca = {0};

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
 sqlstm.offset = (unsigned int  )70;
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
 sqlstm.offset = (unsigned int  )85;
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

