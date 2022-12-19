
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
           char  filnam[20];
};
static const struct sqlcxp sqlfpn =
{
    19,
    ".\\GMPCEnquiry_DB.pc"
};


static unsigned int sqlctx = 33761803;


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
