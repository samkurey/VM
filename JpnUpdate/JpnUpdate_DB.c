
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
           char  filnam[18];
};
static const struct sqlcxp sqlfpn =
{
    17,
    ".\\JpnUpdate_DB.pc"
};


static unsigned int sqlctx = 8544267;


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
            void  *sqhstv[47];
   unsigned int   sqhstl[47];
            int   sqhsts[47];
            void  *sqindv[47];
            int   sqinds[47];
   unsigned int   sqharm[47];
   unsigned int   *sqharc[47];
   unsigned short  sqadto[47];
   unsigned short  sqtdso[47];
} sqlstm = {12,47};

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

 static const char *sq0007 = 
"select A.TXNSERNO ,null  ,null  ,A.TXNCODE ,B.TXNTYPE  from APPL_TXN A ,TXN_\
CODE B where (((A.APPLID=:b0 and A.TXNCANCELCODE is null ) and A.LEGUPDFLAG in\
 (:b1,'X')) and B.TXNCODE=A.TXNCODE) order by A.TXNSERNO            ";

 static const char *sq0008 = 
"select A.TXNSERNO ,A.LEGREQFLAG ,A.LEGREQMSGID ,A.LEGREQSTAT ,C.TXNCODE ,B.T\
XNTYPE  from IJPN_LEGACY_REQUEST A ,APPL_TXN C ,TXN_CODE B where ((((((A.APPLI\
D=:b0 and A.LEGREQSTAT in (:b1,:b2)) and A.CHECKAGENCY=:b3) and A.SERVICEID=:b\
4) and C.APPLID=A.APPLID) and C.TXNSERNO=A.TXNSERNO) and B.TXNCODE=C.TXNCODE) \
order by A.TXNSERNO            ";

 static const char *sq0019 = 
"select SUBSTR(FEETYPE,1,2) ,FEEAMT  from APPL_TXN_FEE where (APPLID=:b0 and \
SUBSTR(FEETYPE,1,2) in ('PF','AF','FF','UF','CF','MF','EF'))           ";

 static const char *sq0020 = 
"select SUBSTR(FEETYPE,1,2) ,FEEAMT  from OUTSTAND_TXN_FEE where (APPLID=:b0 \
and SUBSTR(FEETYPE,1,2) in ('PF','AF','FF','UF','CF','MF','EF'))           ";

 static const char *sq0039 = 
"select TXNCODE  from APPL_TXN where (applid=:b0 and SUBSTR(TXNCODE,1,1) in (\
'1','2','3','4'))           ";

 static const char *sq0108 = 
"select TO_CHAR((A.FEEAMT* 100)) ,TO_CHAR(A.AGENCYREVNCODE) ,B.PAYMMODE  from\
 APPL_TXN_FEE A ,PAYMENT_INFO B ,APPL_TXN C ,TXN_CODE D where ((((((C.APPLID=:\
b0 and A.TXNSERNO=C.TXNSERNO) and B.APPLID=C.APPLID) and B.PAYMSERNO=C.PAYMSER\
NO) and A.APPLID=C.APPLID) and D.TXNCODE=C.TXNCODE) and D.TXNTYPE=:b1)        \
   ";

 static const char *sq0109 = 
"select TO_CHAR((A.FEEAMT* 100)) ,TO_CHAR(A.AGENCYREVNCODE) ,B.PAYMMODE  from\
 APPL_TXN_FEE A ,PAYMENT_INFO B ,APPL_TXN C ,TXN_CODE D where (((((((C.APPLID=\
:b0 and A.TXNSERNO=C.TXNSERNO) and B.APPLID=C.APPLID) and B.PAYMSERNO=C.PAYMSE\
RNO) and NVL(B.LEGUPDFLAG,'N')='N') and A.APPLID=C.APPLID) and D.TXNCODE=C.TXN\
CODE) and D.TXNTYPE=:b1)           ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4274,178,0,0,
5,0,0,1,175,0,4,443,0,0,4,3,0,1,0,2,1,0,0,1,97,0,0,1,97,0,0,1,97,0,0,
36,0,0,2,61,0,4,525,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
59,0,0,3,108,0,4,659,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
82,0,0,4,61,0,4,916,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
105,0,0,5,116,0,4,1919,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,1,0,0,
132,0,0,6,140,0,4,1927,0,0,6,5,0,1,0,2,3,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,1,0,0,
1,97,0,0,
171,0,0,7,222,0,9,2011,0,0,2,2,0,1,0,1,97,0,0,1,1,0,0,
194,0,0,8,341,0,9,2030,0,0,5,5,0,1,0,1,97,0,0,1,3,0,0,1,3,0,0,1,1,0,0,1,97,0,0,
229,0,0,7,0,0,13,2058,0,0,5,0,0,1,0,2,3,0,0,2,1,0,0,2,3,0,0,2,97,0,0,2,3,0,0,
264,0,0,8,0,0,13,2064,0,0,6,0,0,1,0,2,3,0,0,2,1,0,0,2,3,0,0,2,3,0,0,2,97,0,0,2,
3,0,0,
303,0,0,7,0,0,15,2094,0,0,0,0,0,1,0,
318,0,0,8,0,0,15,2098,0,0,0,0,0,1,0,
333,0,0,7,0,0,15,2184,0,0,0,0,0,1,0,
348,0,0,8,0,0,15,2188,0,0,0,0,0,1,0,
363,0,0,9,170,0,4,2259,0,0,8,1,0,1,0,2,97,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,3,0,0,2,97,0,0,1,97,0,0,
410,0,0,10,151,0,4,2383,0,0,7,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,
2,97,0,0,1,97,0,0,
453,0,0,11,116,0,2,2587,0,0,4,4,0,1,0,1,97,0,0,1,97,0,0,1,1,0,0,1,1,0,0,
484,0,0,12,146,0,2,2613,0,0,6,6,0,1,0,1,97,0,0,1,97,0,0,1,1,0,0,1,1,0,0,1,3,0,
0,1,3,0,0,
523,0,0,13,46,0,4,2721,0,0,1,0,0,1,0,2,3,0,0,
542,0,0,14,194,0,3,2748,0,0,9,9,0,1,0,1,3,0,0,1,97,0,0,1,97,0,0,1,9,0,0,1,97,0,
0,1,3,0,0,1,1,0,0,1,3,0,0,1,1,0,0,
593,0,0,15,1291,0,4,3327,0,0,47,1,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,2,9,0,0,2,9,
0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,1,0,0,2,1,0,0,2,97,0,0,2,
1,0,0,2,97,0,0,2,1,0,0,2,9,0,0,2,97,0,0,2,97,0,0,2,1,0,0,2,97,0,0,2,97,0,0,2,1,
0,0,2,97,0,0,2,9,0,0,2,9,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,
0,0,2,3,0,0,2,3,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,1,0,0,2,1,0,
0,2,1,0,0,2,1,0,0,2,97,0,0,2,97,0,0,1,97,0,0,
796,0,0,16,151,0,4,3589,0,0,3,2,0,1,0,2,9,0,0,1,97,0,0,1,97,0,0,
823,0,0,17,100,0,4,3748,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
846,0,0,18,78,0,4,3942,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
869,0,0,19,147,0,9,4131,0,0,1,1,0,1,0,1,97,0,0,
888,0,0,19,0,0,15,4144,0,0,0,0,0,1,0,
903,0,0,19,0,0,13,4151,0,0,2,0,0,1,0,2,97,0,0,2,4,0,0,
926,0,0,19,0,0,15,4180,0,0,0,0,0,1,0,
941,0,0,20,151,0,9,4224,0,0,1,1,0,1,0,1,97,0,0,
960,0,0,20,0,0,15,4237,0,0,0,0,0,1,0,
975,0,0,20,0,0,13,4244,0,0,2,0,0,1,0,2,97,0,0,2,4,0,0,
998,0,0,20,0,0,15,4273,0,0,0,0,0,1,0,
1013,0,0,21,173,0,4,4313,0,0,3,2,0,1,0,2,4,0,0,1,97,0,0,1,97,0,0,
1040,0,0,22,177,0,4,4336,0,0,3,2,0,1,0,2,4,0,0,1,97,0,0,1,97,0,0,
1067,0,0,23,179,0,4,4370,0,0,3,2,0,1,0,2,4,0,0,1,97,0,0,1,97,0,0,
1094,0,0,24,183,0,4,4393,0,0,3,2,0,1,0,2,4,0,0,1,97,0,0,1,97,0,0,
1121,0,0,25,187,0,4,4434,0,0,2,1,0,1,0,2,4,0,0,1,97,0,0,
1144,0,0,26,191,0,4,4467,0,0,2,1,0,1,0,2,4,0,0,1,97,0,0,
1167,0,0,27,67,0,4,4499,0,0,2,1,0,1,0,2,4,0,0,1,97,0,0,
1190,0,0,28,65,0,4,4523,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
1213,0,0,29,80,0,4,4542,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
1236,0,0,30,67,0,4,4561,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
1259,0,0,31,160,0,4,4583,0,0,4,2,0,1,0,2,4,0,0,2,4,0,0,1,97,0,0,1,97,0,0,
1290,0,0,32,412,0,4,4842,0,0,15,1,0,1,0,2,9,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,9,
0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,1,0,0,2,1,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,
0,0,1,97,0,0,
1365,0,0,33,86,0,4,4881,0,0,3,1,0,1,0,2,97,0,0,2,97,0,0,1,97,0,0,
1392,0,0,34,74,0,4,4902,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
1415,0,0,35,145,0,4,5039,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,97,0,0,
1442,0,0,36,72,0,4,5071,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
1465,0,0,37,72,0,4,5101,0,0,2,1,0,1,0,2,97,0,0,1,1,0,0,
1488,0,0,38,78,0,4,5132,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
1511,0,0,39,104,0,9,5167,0,0,1,1,0,1,0,1,97,0,0,
1530,0,0,39,0,0,13,5172,0,0,1,0,0,1,0,2,97,0,0,
1549,0,0,40,147,0,4,5199,0,0,3,2,0,1,0,2,97,0,0,1,97,0,0,1,97,0,0,
1576,0,0,41,162,0,4,5224,0,0,3,2,0,1,0,2,9,0,0,1,97,0,0,1,97,0,0,
1603,0,0,42,176,0,4,5283,0,0,6,1,0,1,0,2,1,0,0,2,97,0,0,2,1,0,0,2,3,0,0,2,9,0,
0,1,97,0,0,
1642,0,0,43,63,0,4,5390,0,0,2,1,0,1,0,2,1,0,0,1,97,0,0,
1665,0,0,44,68,0,4,5427,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
1688,0,0,45,123,0,2,5497,0,0,5,5,0,1,0,1,97,0,0,1,1,0,0,1,1,0,0,1,3,0,0,1,3,0,
0,
1723,0,0,46,307,0,6,5544,0,0,10,10,0,1,0,1,97,0,0,3,1,0,0,3,3,0,0,3,1,0,0,3,95,
0,0,3,95,0,0,3,95,0,0,3,95,0,0,3,95,0,0,3,1,0,0,
1778,0,0,47,196,0,4,5581,0,0,9,1,0,1,0,2,9,0,0,2,3,0,0,2,9,0,0,2,3,0,0,2,1,0,0,
2,3,0,0,2,1,0,0,2,3,0,0,1,97,0,0,
1829,0,0,48,89,0,4,6257,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
1852,0,0,49,122,0,4,6266,0,0,3,1,0,1,0,2,9,0,0,2,97,0,0,1,97,0,0,
1879,0,0,50,129,0,4,6277,0,0,3,1,0,1,0,2,9,0,0,2,97,0,0,1,97,0,0,
1906,0,0,51,122,0,4,6318,0,0,3,1,0,1,0,2,9,0,0,2,97,0,0,1,97,0,0,
1933,0,0,52,352,0,4,6588,0,0,4,3,0,1,0,2,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,
1964,0,0,53,77,0,4,6724,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
1987,0,0,54,58,0,4,6749,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
2010,0,0,55,100,0,4,6787,0,0,3,1,0,1,0,2,97,0,0,2,97,0,0,1,97,0,0,
2037,0,0,56,119,0,4,6813,0,0,4,1,0,1,0,2,3,0,0,2,3,0,0,2,3,0,0,1,97,0,0,
2068,0,0,57,86,0,4,6867,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
2091,0,0,58,50,0,2,6915,0,0,1,1,0,1,0,1,97,0,0,
2110,0,0,59,87,0,3,6924,0,0,1,1,0,1,0,1,97,0,0,
2129,0,0,60,198,0,5,6991,0,0,8,8,0,1,0,1,97,0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,97,
0,0,1,97,0,0,1,97,0,0,1,3,0,0,
2176,0,0,61,80,0,5,7057,0,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
2199,0,0,62,82,0,6,7540,0,0,3,3,0,1,0,1,9,0,0,3,95,0,0,3,1,0,0,
2226,0,0,63,202,0,4,7877,0,0,7,1,0,1,0,2,97,0,0,2,1,0,0,2,97,0,0,2,9,0,0,2,97,
0,0,2,97,0,0,1,97,0,0,
2269,0,0,64,282,0,4,7907,0,0,7,2,0,1,0,2,3,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,9,
0,0,1,97,0,0,1,3,0,0,
2312,0,0,65,120,0,4,7938,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
2335,0,0,66,74,0,4,7970,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
2358,0,0,67,125,0,4,8050,0,0,5,1,0,1,0,2,9,0,0,2,97,0,0,2,97,0,0,2,9,0,0,1,97,
0,0,
2393,0,0,68,79,0,4,8134,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
2416,0,0,69,127,0,4,8148,0,0,5,1,0,1,0,2,3,0,0,2,3,0,0,2,3,0,0,2,3,0,0,1,97,0,
0,
2451,0,0,70,59,0,5,8165,0,0,2,2,0,1,0,1,3,0,0,1,97,0,0,
2474,0,0,71,83,0,4,8188,0,0,3,1,0,1,0,2,1,0,0,2,1,0,0,1,97,0,0,
2501,0,0,72,79,0,4,64,1,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
2524,0,0,73,69,0,4,97,1,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
2547,0,0,74,170,0,4,122,1,0,3,1,0,1,0,2,97,0,0,2,3,0,0,1,97,0,0,
2574,0,0,75,69,0,4,168,1,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
2597,0,0,76,145,0,4,195,1,0,3,2,0,1,0,2,1,0,0,1,97,0,0,1,3,0,0,
2624,0,0,77,78,0,4,233,1,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
2647,0,0,78,108,0,4,277,1,0,4,1,0,1,0,2,3,0,0,2,97,0,0,2,97,0,0,1,97,0,0,
2678,0,0,79,78,0,4,322,1,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,97,0,0,
2705,0,0,80,87,0,4,360,1,0,2,1,0,1,0,2,4,0,0,1,97,0,0,
2728,0,0,81,170,0,4,403,1,0,3,2,0,1,0,2,4,0,0,1,97,0,0,1,97,0,0,
2755,0,0,82,86,0,4,433,1,0,2,1,0,1,0,2,1,0,0,1,97,0,0,
2778,0,0,83,103,0,4,469,1,0,4,1,0,1,0,2,97,0,0,2,1,0,0,2,97,0,0,1,97,0,0,
2809,0,0,84,71,0,4,506,1,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
2832,0,0,85,89,0,4,518,1,0,3,1,0,1,0,2,97,0,0,2,97,0,0,1,97,0,0,
2859,0,0,86,119,0,4,544,1,0,4,1,0,1,0,2,3,0,0,2,3,0,0,2,3,0,0,1,97,0,0,
2890,0,0,87,50,0,2,819,1,0,1,1,0,1,0,1,97,0,0,
2909,0,0,88,87,0,3,828,1,0,1,1,0,1,0,1,97,0,0,
2928,0,0,89,198,0,5,883,1,0,8,8,0,1,0,1,97,0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,97,0,
0,1,97,0,0,1,97,0,0,1,3,0,0,
2975,0,0,90,198,0,5,963,1,0,8,8,0,1,0,1,97,0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,97,0,
0,1,97,0,0,1,97,0,0,1,3,0,0,
3022,0,0,91,198,0,5,1039,1,0,8,8,0,1,0,1,97,0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,97,
0,0,1,97,0,0,1,97,0,0,1,3,0,0,
3069,0,0,92,80,0,5,1082,1,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
3092,0,0,93,131,0,4,1177,1,0,5,1,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,1,
97,0,0,
3127,0,0,94,64,0,4,1220,1,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
3150,0,0,95,198,0,5,1431,1,0,8,8,0,1,0,1,97,0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,97,
0,0,1,97,0,0,1,97,0,0,1,3,0,0,
3197,0,0,96,105,0,4,1567,1,0,5,1,0,1,0,2,97,0,0,2,97,0,0,2,9,0,0,2,97,0,0,1,97,
0,0,
3232,0,0,97,140,0,4,1623,1,0,3,2,0,1,0,2,97,0,0,1,97,0,0,1,97,0,0,
3259,0,0,98,166,0,4,1636,1,0,3,2,0,1,0,2,97,0,0,1,97,0,0,1,97,0,0,
3286,0,0,99,55,0,2,1666,1,0,1,1,0,1,0,1,3,0,0,
3305,0,0,100,352,0,4,1708,1,0,4,3,0,1,0,2,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,
3336,0,0,101,67,0,4,1747,1,0,1,0,0,1,0,2,97,0,0,
3355,0,0,102,198,0,5,1863,1,0,8,8,0,1,0,1,97,0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,97,
0,0,1,97,0,0,1,97,0,0,1,3,0,0,
3402,0,0,103,71,0,5,1966,1,0,2,2,0,1,0,1,97,0,0,1,3,0,0,
3425,0,0,104,102,0,5,2027,1,0,2,2,0,1,0,1,97,0,0,1,3,0,0,
3448,0,0,105,123,0,4,2108,1,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,3,0,0,
3475,0,0,106,257,0,4,2194,1,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,3,0,0,
3502,0,0,107,289,0,4,2208,1,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,3,0,0,
3529,0,0,108,313,0,9,2269,1,0,2,2,0,1,0,1,97,0,0,1,3,0,0,
3552,0,0,109,345,0,9,2288,1,0,2,2,0,1,0,1,97,0,0,1,3,0,0,
3575,0,0,108,0,0,13,2314,1,0,3,0,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,
3602,0,0,109,0,0,13,2320,1,0,3,0,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,
3629,0,0,108,0,0,15,2334,1,0,0,0,0,1,0,
3644,0,0,109,0,0,15,2338,1,0,0,0,0,1,0,
3659,0,0,108,0,0,15,2405,1,0,0,0,0,1,0,
3674,0,0,109,0,0,15,2409,1,0,0,0,0,1,0,
3689,0,0,108,0,0,15,2492,1,0,0,0,0,1,0,
3704,0,0,109,0,0,15,2496,1,0,0,0,0,1,0,
3719,0,0,110,62,0,4,2551,1,0,2,1,0,1,0,2,1,0,0,1,97,0,0,
3742,0,0,111,165,0,5,2647,1,0,7,7,0,1,0,1,3,0,0,1,97,0,0,1,9,0,0,1,97,0,0,1,9,
0,0,1,97,0,0,1,3,0,0,
3785,0,0,112,169,0,4,2734,1,0,6,4,0,1,0,2,3,0,0,2,3,0,0,1,97,0,0,1,1,0,0,1,1,0,
0,1,3,0,0,
3824,0,0,113,132,0,4,2745,1,0,5,4,0,1,0,2,3,0,0,1,97,0,0,1,1,0,0,1,1,0,0,1,3,0,
0,
3859,0,0,114,176,0,4,2881,1,0,7,5,0,1,0,2,3,0,0,2,3,0,0,1,97,0,0,1,3,0,0,1,3,0,
0,1,3,0,0,1,3,0,0,
3902,0,0,115,131,0,4,2964,1,0,5,4,0,1,0,2,3,0,0,1,97,0,0,1,1,0,0,1,1,0,0,1,3,0,
0,
3937,0,0,116,91,0,4,3046,1,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
3960,0,0,117,94,0,4,3101,1,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
3983,0,0,118,300,0,5,3158,1,0,4,4,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,3,0,0,
4014,0,0,119,187,0,4,3223,1,0,4,3,0,1,0,2,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,
4045,0,0,120,61,0,4,3278,1,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
4068,0,0,121,161,0,4,3339,1,0,7,6,0,1,0,2,3,0,0,1,97,0,0,1,1,0,0,1,1,0,0,1,3,0,
0,1,3,0,0,1,3,0,0,
4111,0,0,122,69,0,4,3449,1,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
4134,0,0,123,205,0,4,3473,1,0,3,2,0,1,0,2,1,0,0,1,97,0,0,1,97,0,0,
4161,0,0,124,111,0,4,3487,1,0,4,3,0,1,0,2,3,0,0,1,97,0,0,1,1,0,0,1,1,0,0,
4192,0,0,125,115,0,4,3508,1,0,4,3,0,1,0,2,3,0,0,1,97,0,0,1,1,0,0,1,1,0,0,
4223,0,0,126,80,0,2,3544,1,0,3,3,0,1,0,1,97,0,0,1,3,0,0,1,3,0,0,
4250,0,0,127,61,0,4,3565,1,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
4273,0,0,128,46,0,4,3598,1,0,1,0,0,1,0,2,3,0,0,
4292,0,0,129,191,0,3,3626,1,0,9,9,0,1,0,1,3,0,0,1,97,0,0,1,97,0,0,1,9,0,0,1,97,
0,0,1,3,0,0,1,1,0,0,1,3,0,0,1,1,0,0,
4343,0,0,130,79,0,4,3746,1,0,3,1,0,1,0,2,9,0,0,2,97,0,0,1,97,0,0,
4370,0,0,131,95,0,4,3798,1,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
4393,0,0,132,49,0,4,3827,1,0,1,0,0,1,0,2,9,0,0,
4412,0,0,133,416,0,4,3939,1,0,14,1,0,1,0,2,97,0,0,2,3,0,0,2,97,0,0,2,1,0,0,2,1,
0,0,2,97,0,0,2,1,0,0,2,9,0,0,2,97,0,0,2,9,0,0,2,97,0,0,2,97,0,0,2,97,0,0,1,97,
0,0,
4483,0,0,134,67,0,4,4015,1,0,1,0,0,1,0,2,97,0,0,
4502,0,0,135,49,0,4,4033,1,0,1,0,0,1,0,2,9,0,0,
4521,0,0,136,198,0,5,4158,1,0,8,8,0,1,0,1,97,0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,97,
0,0,1,97,0,0,1,97,0,0,1,3,0,0,
4568,0,0,137,762,0,4,4427,1,0,30,1,0,1,0,2,97,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,97,0,0,2,3,0,0,2,97,0,0,2,9,0,0,2,1,0,0,2,1,0,0,
2,97,0,0,2,1,0,0,2,1,0,0,2,97,0,0,2,1,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,97,0,0,1,97,0,0,
4703,0,0,138,215,0,4,4475,1,0,9,1,0,1,0,2,97,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,
0,2,9,0,0,2,9,0,0,2,1,0,0,1,97,0,0,
4754,0,0,139,71,0,4,4832,1,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
4777,0,0,140,88,0,4,4863,1,0,3,1,0,1,0,2,9,0,0,2,9,0,0,1,97,0,0,
4804,0,0,141,92,0,4,4905,1,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
4827,0,0,142,67,0,4,4933,1,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
4850,0,0,143,85,0,4,4950,1,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
4873,0,0,144,298,0,4,4977,1,0,3,1,0,1,0,2,1,0,0,2,3,0,0,1,97,0,0,
4900,0,0,145,307,0,6,5226,1,0,10,10,0,1,0,1,97,0,0,3,1,0,0,3,3,0,0,3,1,0,0,3,
95,0,0,3,95,0,0,3,95,0,0,3,95,0,0,3,95,0,0,3,1,0,0,
4955,0,0,146,148,0,4,5414,1,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
4978,0,0,147,210,0,4,5471,1,0,5,3,0,1,0,2,97,0,0,2,97,0,0,1,97,0,0,1,97,0,0,1,
97,0,0,
};


/* $Header$ */
/********************************************************************************/
/* Filename    : jpn_update.pc													*/
/* Author      : Amit Sangrulkar												*/
/* Description : This file contains database routines for the service           */
/*               JPN_UPDATE. 													*/
/********************************************************************************/

/* Include files */

#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <errno.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <sqlca.h>




#define LOG_DEFINED
#include "gscbdef.h"
#include "gscbio.h"
#include "gscblog.h"
#include "gscblookupdef.h"

#include "KPPdef.h"
#include "KPPstruct.h"
#include "KPPproto.h"
#include "userlog.h"
//#include "userlog_r.h"

#include <VICDEFS.H>


#include "li_jpn_update.h"
#include "li_update_gmpc_stat.h"
#include "li_update_jpn_addr.h"
#include "li_jpn_upd_payment.h"
#include "li_jpn_gmpc_surrender.h"
#include "li_mykad_issuance.h"
#include "li_nrs_update.h"


#include "jpn_update_io.h"
#include "jpn_update.h"


//EXEC SQL INCLUDE SQLCA;

//LI_P_HEADER_T hdr; //Commented on 11/08/06 by kasi Global scope sends wrong values 
					 //to the host.  

APPL_EXCEP_LOG_T excep_log = { {""},{""},{""},{""},{""},{""}, 0,{""}} ;
PROG_ACCESS_LOG_T prog_log = { {""},{""},{""},{""},{""},{""},{""},{""} };
TXN_LOG_T tran_log;
//extern void userlog(void * uContext,char* szFormatString, ...);

int Jpn_Update(JPN_UPDATE_REQ_T *pReq, 
			 JPN_UPDATE_RESP_T **pResp, long *pRespSize,void * ctx)
{

	LI_P_HEADER_T hdr;  // This stmt added by kasi on 11/08/06

  	/* Variable declarations */
	JPN_UPDATE_REQ_T *req; 
	JPN_UPDATE_RESP_T *resp;
	TXN_INFO_T *txn_details = NULL;
	TXN_INFO_T *txn_details_orig = NULL;
	ADDRESS_T *old_address = NULL;
	ADDRESS_T *new_address = NULL;
	LEGACY_REQUEST_T legacy_req;
	LI_NRS_UPDATE_REQ_T nrs_data;

	int resp_length = 0;
	int count =  0;
	int ret_code = 0;
	int txn_count = 0;
	int txn_srno = 0;
	int msgid = 0;
	char req_flag = '\0';
	char demo_upd_flag = NO;
	char card_upd_flag = NO;
	char addr_upd_flag = NO;
	char address_flag = NO;
	char payment_upd_flag = NO;
	char first_time_ind = NO;
	char current_date_time[DATE_TIME_SIZE] = "";
	char program_id[PROG_ID_SIZE] = "";
	char branch_code[LEGACY_BRANCH_CODE_SIZE] = ""; 
	char appl_stat = '\0';
	char leg_upd_flag = '\0';
	char q_no[Q_NO_SIZE] = {"\0"};
	int appl_txn_srno = 0;
	int request_status = -5;
	int req_msg_id = 0;
	int req_cnt = 0;
	char pay_ind = '\0';
	int payment_srno = 0;
	int pcount=0;
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	int  demo_rec_exist=0;
	char appl_id[APP_ID_SIZE]={0};
	char txn_code[TXN_CODE_SIZE] = {0};	//Added by Salmi, Date 19th June 2020, CRAPPL-  SKP002/CR/2020
	char txn_short_desc[61] = {0};      //Added by Salmi, Date 19th June 2020, CRAPPL-  SKP002/CR/2020
	char apprv_status = '\0';			//Added by Salmi, Date 19th June 2020, CRAPPL-  SKP002/CR/2020
	char apprv_userid[USER_ID_SIZE] = {0};	//Added by Salmi, Date 19th June 2020, CRAPPL-  SKP002/CR/2020
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	memset(&nrs_data,'\0',sizeof(LI_NRS_UPDATE_REQ_T));
		
#ifdef DEBUG
	userlog("JPN_UPDATE : Entered server:::%u",ctx);
#endif

	/* Set pointer to data received by the service */
	req = (JPN_UPDATE_REQ_T *) pReq;
	
#ifdef DEBUG
	userlog("JPN_UPDATE : Version - 3.48 -TPA Maklumat Caw. Kutipan");
	userlog("JPN_UPDATE : Branch code - %s:::%u", req->header.branch_code,ctx);
	userlog("JPN_UPDATE : WS id - %s", req->header.workstation_id);
	userlog("JPN_UPDATE : User id - %s", req->header.user_id);
	userlog("JPN_UPDATE : Appl id - %s", req->header.application_id);
	userlog("JPN_UPDATE : Invoking mode - %c", req->invoke_mode); 

#endif

	/* Get current date-time for logging */
	strcpy(current_date_time, get_date_time());

	/* Set the program id */
	itoa(JPN_UPDATE_ID, program_id, 10);

#ifdef DEBUG
	userlog("JPN_UPDATE : Current date time = %s\n", current_date_time);	 
	userlog("JPN_UPDATE : Program Id = %s\n", program_id);
#endif

	/* Initialize the variables used for logging */
	/* Program access log variable */
	
	strcpy(prog_log.program_id,program_id);
	strcpy(prog_log.user_id, req->header.user_id);
	strcpy(prog_log.workstation_id, req->header.workstation_id);
	strcpy(prog_log.branch_code, req->header.branch_code);
	strcpy(prog_log.access_start_time, current_date_time);
	strcpy(prog_log.remarks, "");
	strcpy(prog_log.application_id, req->header.application_id);

	/* Application exception log variable */
	strcpy(excep_log.program_id, program_id);
	strcpy(excep_log.user_id, req->header.user_id); 	
	strcpy(excep_log.workstation_id, req->header.workstation_id);
	strcpy(excep_log.branch_code, req->header.branch_code);
	strcpy(excep_log.error_date, current_date_time);
	strcpy(excep_log.error_msg, "");
	strcpy(excep_log.application_id, req->header.application_id); 	
	excep_log.severity = '\0';	
	excep_log.termination_flag = NO;	

	resp_length = sizeof(JPN_UPDATE_RESP_T);

	/* Allocate the response buffer		*/
	//resp = (JPN_UPDATE_RESP_T *) tpalloc("CARRAY","", resp_length);
	resp = (JPN_UPDATE_RESP_T *) malloc(resp_length);

	if (NULL == resp)
	{
#ifdef DEBUG
		userlog("JPN_UPDATE : malloc failed ");
#endif
		strcpy(prog_log.remarks,"JPN_UPDATE : Allocation of memory for response buffer failed");
		sprintf(excep_log.error_msg,"JPN_UPDATE : Allocation of memory for response buffer failed : ");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);
		return RESP_BUF_ERR;
	}

	memset(resp, 0, sizeof(JPN_UPDATE_RESP_T));

	/* Copy header info from request to response */
	resp->header = req->header;

#ifdef DEBUG
	userlog("JPN_UPDATE : Copied content of header from request to response");
	userlog("JPN_UPDATE : For Testing this componenet in 2003 SIT server");
#endif


	/* Intialization of variables for Legacy Request */
	strcpy(appl_id,req->header.application_id);

	strcpy(legacy_req.appl_id,req->header.application_id);
	strcpy(legacy_req.user_id,req->header.user_id);
	strcpy(legacy_req.branch_code,req->header.branch_code);
	legacy_req.service_id = JPN_UPDATE_ID;
	legacy_req.txn_ser_no = 0;
	legacy_req.request_stat = PUT_ERROR;
	legacy_req.request_flag = '\0';
	legacy_req.messageid = 0;
	legacy_req.check_agency = JPN_ID;

	strcpy(apprv_userid,req->header.user_id); //Added by Salmi, Date 19th June 2020, CRAPPL-  SKP002/CR/2020
	
	/* Check the info in header	*/
	if (SUCCESS != (ret_code = check_header(req->header,ctx)))
	{
#ifdef DEBUG
		userlog("JPN_UPDATE : check header failed");
#endif
		/* Log the error */
		sprintf(prog_log.remarks, "JPN_UPDATE : check_header failed with %d", ret_code);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
		*pRespSize = resp_length;
		//memcpy(*pResp, resp, resp_length);
		*pResp = resp;
		return ret_code;
	}


	/* Check for input Application id */

	if (0 == strcmp(req->header.application_id, ""))
	{
#ifdef DEBUG
		userlog("JPN_UPDATE : Application id NULL");
#endif
		/* Log the error */
		strcpy(prog_log.remarks, "JPN_UPDATE : Application id can not be NULL");
		strcpy(excep_log.error_msg, "JPN_UPDATE : Application id can not be NULL");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		//(TPSUCCESS, APP_ID_NULL, (char *) resp, resp_length, 0);
		*pRespSize = resp_length;
		//memcpy(*pResp, resp, resp_length);
		*pResp = resp;
		return ret_code;
	}

	ret_code = get_legacy_branchcode(req->header.branch_code, JPN_ID, branch_code,ctx);

	if (ret_code != SUCCESS)
	{
		strcpy(prog_log.remarks,"JPN_UPDATE: Unable to retrieve Legacy branch code");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);

		//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
		*pRespSize = resp_length;
		//memcpy(*pResp, resp, resp_length);
		*pResp = resp;
		return ret_code;
	}
#ifdef DEBUG
	userlog("JPN_UPDATE : Legacy Branch Code - %s", branch_code);
#endif

	/* Populate the buffer to be sent to legacy interface	*/
	strcpy(hdr.workstation_id, req->header.workstation_id);
	strcpy(hdr.user_id, req->header.user_id);
	strcpy(hdr.gsc_no, branch_code);
	hdr.transaction_type = 0;

	/* Get the application status for the given application id */

	if (SUCCESS != (ret_code = get_appl_stat(req->header.application_id, &appl_stat,ctx)))
	{
#ifdef DEBUG
		userlog("JPN_UPDATE : get_appl_stat() failed with %d", ret_code);
#endif
		//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
		*pRespSize = resp_length;
		//memcpy(*pResp, resp, resp_length);
		*pResp = resp;
		return ret_code;
	}
	
	/* If application is being cancelled terminate the processing */

	if (CANCELLED == appl_stat)
	{
#ifdef DEBUG
		userlog("JPN_UPDATE : Application is being Cancelled");
#endif
		/* Log the error */
		strcpy(prog_log.remarks, "JPN_UPDATE : Application is being Cancelled");
		strcpy(excep_log.error_msg, "JPN_UPDATE : Application is being Cancelled");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		//tpreturn(TPSUCCESS, INVALID_APPL_STAT, (char *) resp, resp_length, 0);			
		*pRespSize = resp_length;
		//memcpy(*pResp, resp, resp_length);
		*pResp = resp;
		return INVALID_APPL_STAT;
	}

	/* If application is being terminated at SSC/GQD, Update application status message has to be fired */

	if (TERMINATED_GSC == appl_stat)
	{
#ifdef DEBUG
		userlog("JPN_UPDATE : Application is being terminated at SSC/GQD");
#endif
		/* Fire the GMPC status update message with status as 'C' */

		if (SUCCESS != (ret_code = update_leg_application_stat(req, appl_stat, 0,hdr,ctx))) //hdr added by kasi on 11/08/06 to remove global scope.
		{
#ifdef DEBUG
			userlog("JPN_UPDATE : update_termination_stat() failed with %d", ret_code);
#endif
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return ret_code;

		}

		/* Message has been sent successfully to Legacy, return from here */

		/* Commit the updation on LEGACY_REQUEST and APPL_TXN (if any) */

		if(SUCCESS != gscbcommit_trans(ctx))
		{
			userlog("JPN_UPDATE : Commit transaction failed!!");
			//tpreturn(TPSUCCESS, END_TRAN_ERROR, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return END_TRAN_ERROR;
		}

		strcpy(prog_log.remarks, "JPN_UPDATE : Completed successfully");

		log_exit(ctx);

#ifdef DEBUG
		userlog("JPN_UPDATE : Completed successfully");
#endif

		/* Return the response buffer	*/
		//tpreturn(TPSUCCESS, GMPC_GOOD, (char *) resp, resp_length, 0);
		*pRespSize = resp_length;
		//memcpy(*pResp, resp, resp_length);
		*pResp = resp;
		return GMPC_GOOD;

	}

	// The following code is commenetd for IJPN inorder to hardcode the leg_upd_flag = NO for SERVICE_CALL
	//if (req->invoke_mode == SERVICE_CALL)	/* Service is called by another service */	
	//{
	//	leg_upd_flag = NO;
	//}
	//else	/* Service is called manually */
	//{
	//	leg_upd_flag = '\0';
	//	
	//}

	//for SERVICE_CALL = 'S'
	leg_upd_flag = NO;

	if (SUCCESS != (ret_code = check_leg_request(req->header.application_id, &req_cnt,ctx)))
	{
#ifdef DEBUG
		userlog("JPN_UPDATE : check_leg_request() failed with %d", ret_code);
#endif
		//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
		*pRespSize = resp_length;
		//memcpy(*pResp, resp, resp_length);
		*pResp = resp;
		return ret_code;
	}

	if (req_cnt > 0 )
	{
#ifdef DEBUG
		userlog("JPN_UPDATE : Found record with flag UNKNOWN");
#endif

		leg_upd_flag = NO;
	}
	
	/* Get transaction codes for which the applicant has applied for */

	if (SUCCESS != (ret_code = fetch_transaction(req->header.application_id, &txn_details, &txn_count, leg_upd_flag,ctx)))
	{
#ifdef DEBUG
		userlog("JPN_UPDATE : fetch_transaction() failed with %d", ret_code);
#endif
		//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
		*pRespSize = resp_length;
		//memcpy(*pResp, resp, resp_length);
		*pResp = resp;
		return ret_code;
	}

	txn_details_orig = txn_details;

#ifdef DEBUG
	userlog("JPN_UPDATE : Txn pointer - %X", txn_details_orig);
	userlog("JPN_UPDATE : Txn count - %d", txn_count );
	userlog("JPN_UPDATE : Legacy update flag - %c", leg_upd_flag);	
#endif

	//Added by Salmi, Date 12th June 2020, CRAPPL-  SKP002/CR/2020

	if ( strncmp(txn_details->txn_code,"12",2) == 0)
	{
#ifdef DEBUG
		userlog("JPN_UPDATE : DLKP Transaction");
#endif

		/* EXEC SQL SELECT STATUS INTO :apprv_status 
			FROM DLEWAT_APPRV_HISTORY WHERE APPLID = :appl_id AND OPERID =:apprv_userid
			AND DATETIMESTAMP = 
				(SELECT max(DATETIMESTAMP) from DLEWAT_APPRV_HISTORY where APPLID =:appl_id); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select STATUS into :b0  from DLEWAT_APPRV_HISTORY where ((A\
PPLID=:b1 and OPERID=:b2) and DATETIMESTAMP=(select max(DATETIMESTAMP)  from D\
LEWAT_APPRV_HISTORY where APPLID=:b1))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )5;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&apprv_status;
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
  sqlstm.sqhstv[2] = (         void  *)apprv_userid;
  sqlstm.sqhstl[2] = (unsigned int  )9;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
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


		
		if(SQLCODE == 1403)	
		{
			#ifdef DEBUG
			userlog("JPN_UPDATE : No record from DLEWAT_APPRV_HISTORY : %s",SQLMSG);
			#endif
			apprv_status = 'L'; //L is for create applicant & Lulus
		}
		
		userlog("JPN_UPDATE : apprv_status[%c]",apprv_status);
		if (apprv_status != 'L') //Skip this part for create applicant and 'LULUS' trans
		{
			if (SUCCESS != (ret_code = update_leg_application_stat(req, appl_stat, 0,hdr,ctx))) 
			{
		#ifdef DEBUG
			userlog("JPN_UPDATE : update_leg_application_stat() failed with %d", ret_code);
		#endif
				//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
				return ret_code;
			}

			if(SUCCESS != gscbcommit_trans(ctx))
			{
				userlog("JPN_UPDATE : Commit transaction failed!!");
				//tpreturn(TPSUCCESS, END_TRAN_ERROR, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
				return END_TRAN_ERROR;
			}

			strcpy(prog_log.remarks, "JPN_UPDATE : Completed successfully");

			log_exit(ctx);

		#ifdef DEBUG
		userlog("JPN_UPDATE : Completed successfully");
		#endif

			*pRespSize = resp_length;
			*pResp = resp;
			return GMPC_GOOD;
		}
	}
	//Added by Salmi, Date 12th June 2020, CRAPPL-  SKP002/CR/2020

	/* Decide which update requests are to be put */

	userlog("JPN_UPDATE : txn_details->txn_type - %d", txn_details->txn_type );

	for (count = 0; count < txn_count; count++, txn_details++)
	{
#ifdef DEBUG
		userlog("JPN_UPDATE : Processing transaction - %d", count+1);
		userlog("JPN_UPDATE : txn_details->txn_type - %d", txn_details->txn_type );
#endif
		switch(txn_details->txn_type)
		{
			case TXN_12YO :
			case TXN_FT :
			case TXN_CONV :
			case TXN_REPL :
			{
				/* If application is being referred to SSC/GQD, or if request for Payment update is picked */
				/* up when the service is being fired manually, only send financial data				   */

				if (REFFERED_SSC == appl_stat || REFFERED_GQD == appl_stat || txn_details->legacy_req_flag == PAYMENT_UPD)
				{
					if (payment_upd_flag == NO)
					{

/* The code addition starts here *******************/
/* The following code is included for IJPN on 25/01/06 to avoid stoping theprocess from further processing
when there is no payment data to be sent, req from vasanth */

					/* EXEC SQL SELECT COUNT(*) INTO :pcount FROM PAYMENT_INFO
						WHERE APPLID = :appl_id; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 4;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select count(*)  into :b0  from PAYMENT_INFO where APPLI\
D=:b1";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )36;
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
						userlog("-update_payment: Select from PAYMENT_INFO failed : %s", SQLMSG); 
					#endif
					
					}

					if(pcount == 0)
						userlog("-update_payment: PAYMENT_INFO count : %d for appl_id : %s, so payment_update will be bypassed",pcount,appl_id);
					

					if(pcount)
					{

						req_flag = PAYMENT_UPD;

						/* Insert a record for the request in LEGACY_REQUEST table only if */
						/* service is being called for the first time for this transaction */
						/* i.e. if it is being called by another service				   */

						if (leg_upd_flag == NO)
						{
							if(SUCCESS != (ret_code = insert_legacy_req(&msgid, req, JPN_ID, txn_details->txn_sr_no, req_flag,ctx)))
							{
#ifdef DEBUG
								userlog("JPN_UPDATE : insert_legacy_req() failed with %d", ret_code);
#endif
								free(txn_details_orig);
								//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;

							}
						}
						else	/* Copy the Message id from LEGACY_REQUEST */
							msgid = txn_details->message_id;

#ifdef DEBUG
						userlog("JPN_UPDATE : Oracle Message id - %d", msgid);
#endif

						if(SUCCESS != (ret_code = upd_payment(req, msgid, txn_details->txn_sr_no, 
														txn_details->request_status, txn_details->txn_type,hdr,ctx))) //hdr added by kasi on 11/08/06 to remove global scope.
						{
#ifdef DEBUG
							if (ret_code == GMPC_WARN)
								userlog("JPN_UPDATE : No Payment info to be sent");
							else
								userlog("JPN_UPDATE : upd_payment() failed with %d", ret_code);
#endif
							if (ret_code == GMPC_WARN)
								continue;
							else
							{
								free(txn_details_orig);
								//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;
							}

						}

						payment_upd_flag = YES;

						/* Update the Payment update flag to YES */

						if(SUCCESS != (ret_code = upd_payment_flag(req->header.application_id, txn_details->txn_sr_no,ctx)))
						{
#ifdef DEBUG
							userlog("JPN_UPDATE : upd_payment_flag() failed with %d", ret_code);
#endif
							free(txn_details_orig);
							//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
							*pRespSize = resp_length;
							//memcpy(*pResp, resp, resp_length);
							*pResp = resp;
							return ret_code;

						}
					}
/* The new code addition ends here *******************/

						/* Fire the GMPC status update message with status as 'T', only if  */
						/* The application still to be approved/ terminated by SSC/GQD      */

						if (REFFERED_SSC == appl_stat || REFFERED_GQD == appl_stat)
						{
							if (SUCCESS != (ret_code = update_leg_application_stat(req, appl_stat, txn_details->txn_sr_no,hdr,ctx))) //hdr added by kasi on 11/08/06 to remove global scope.
							{
#ifdef DEBUG
								userlog("JPN_UPDATE : update_leg_application_stat() failed with %d", ret_code);
#endif
								free(txn_details_orig);
								//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;
							}

						}

					}
					/* Even if the request sent successfully, don't update Legacy upd flag here */
					/* as demographic info is yet to send										*/
				}
				else	/* Update the Demographic info also */
				{
					if (demo_upd_flag == NO)
					{
						req_flag = DEMO_UPD;
						first_time_ind = YES;
						
						/* Insert a record for the request in LEGACY_REQUEST table only if */
						/* service is being called for the first time for this transaction */
						/* i.e. if it is being called by another service				   */
					   
						 /* The following check is included on 13/09/05 to avoid the demo_upd
						 firing after it is successfully fired, but the legupdflag in APPL_TXN
						 is still X for replacement. */

						//strcpy(appl_id,req->header.application_id);

						userlog("---check for skipping the demo_upd appl_id----: %s",appl_id);

						demo_rec_exist = 0;
						/* EXEC SQL SELECT COUNT(*) INTO :demo_rec_exist
							FROM  IJPN_LEGACY_REQUEST
							WHERE APPLID     = :appl_id
							AND   LEGREQFLAG = 'D'
							AND   LEGREQSTAT = 0; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 12;
      sqlstm.arrsiz = 4;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "select count(*)  into :b0  from IJPN_LEGACY_REQUEST whe\
re ((APPLID=:b1 and LEGREQFLAG='D') and LEGREQSTAT=0)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )59;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&demo_rec_exist;
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



						userlog("--- demo_rec_exists -- : %d",demo_rec_exist);
						userlog("--- sqlca.sqlcode : %d", sqlca.sqlcode);
						userlog("--- appl_stat : %c",appl_stat);

					  /* skip this if it has already fired, but the legupdflag in APPL_TXN is STILL X */
					  //if(demo_rec_exist == 0) // Need to remove this comment after all GSC's migrated to IJPN
					  if((demo_rec_exist == 0) && (appl_stat != 'R') && (appl_stat != 'K'))
					  {
						if (leg_upd_flag == NO)
						{
							/* Insert a record for the request in LEGACY_REQUEST table */

							if(SUCCESS != (ret_code = insert_legacy_req(&msgid, req, JPN_ID, txn_details->txn_sr_no, req_flag,ctx)))
							{
#ifdef DEBUG
								userlog("JPN_UPDATE : insert_legacy_req() failed with %d", ret_code);
#endif
								free(txn_details_orig);
								//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;

							}
						}
						else	/* Copy the Message is from LEGACY_REQUEST */
							msgid = txn_details->message_id;
						
#ifdef DEBUG
							userlog("JPN_UPDATE : Oracle Message id - %d", msgid);
#endif

							/* Request has come for Demographic update */
							
							if (SUCCESS != (ret_code = upd_appnt_demo_info(req, msgid, 
								first_time_ind, txn_details, &request_status, 
								&req_msg_id, txn_details->txn_code,hdr,ctx)))	//Last parameter(txn_details->txn_code) added by Amarjith on 7th Sept '04. JRS 147. //Commented for NRO. //hdr added by kasi to remove globl scope
							{
#ifdef DEBUG
								userlog("JPN_UPDATE : upd_appnt_demo_info() failed with return code %d", ret_code);
#endif
								free(txn_details_orig);
								//tpreturn(TPSUCCESS, ret_code, (char *)resp, sizeof (JPN_UPDATE_RESP_T), 0);
								*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;
							}
						
						demo_upd_flag = YES;
					  } /* end of check demo_rec_exists */
						/* Set the address update flag to YES as address has been sent */
						/* by default with demographic information					   */
						addr_upd_flag = YES;

						/* Forcefully fire the Payment request, if any, if the service */
						/* is being fired by another Service                           */

						if (leg_upd_flag != '\0' && (request_status == REPLY_NOT_RECIEVED || request_status == REQ_NOT_SENT))
						{
							msgid = req_msg_id;
							txn_details->request_status = request_status;

#ifdef DEBUG
							userlog("JPN_UPDATE : Oracle Message id - %d", msgid);
#endif

							if(SUCCESS != (ret_code = upd_payment(req, msgid, txn_details->txn_sr_no,
															txn_details->request_status, txn_details->txn_type,hdr,ctx))) //hdr added by kasi on 11/08/06 to remove global scope.
							{
#ifdef DEBUG
								if (ret_code == GMPC_WARN)
									userlog("JPN_UPDATE : No Payment info to be sent");
								else
									userlog("JPN_UPDATE : upd_payment() failed with %d", ret_code);
#endif
								if (ret_code == GMPC_WARN)
									continue;
								else
								{
									free(txn_details_orig);
									//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
									*pRespSize = resp_length;
									//memcpy(*pResp, resp, resp_length);
									*pResp = resp;
									return ret_code;
								}

							}

							/* Update the Payment update flag to YES */

							if(SUCCESS != (ret_code = upd_payment_flag(req->header.application_id, txn_details->txn_sr_no,ctx)))
							{
#ifdef DEBUG
								userlog("JPN_UPDATE : upd_payment_flag() failed with %d", ret_code);
#endif
								free(txn_details_orig);
								//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;

							}
							
						}
					}

					if (atoi(txn_details->txn_code) == TXN_REPL_ADDR_CHNG
						|| atoi(txn_details->txn_code) == TXN_REPL_NAME_CHNG
						|| atoi(txn_details->txn_code) == TXN_CON_ADDR_CH
						|| atoi(txn_details->txn_code) == TXN_CON_NAME_CH)
					{
						
						/* Update the Legacy update flag to intermidiate status 'X', if        */
						/* the request is to be picked up by the JPJ_UPDATE service, otherwise */
						/* update the flag to YES											   */

						if (SUCCESS != (ret_code = upd_common_leg_upd_flag(req->header.application_id, txn_details->txn_sr_no,ctx)))
						{
#ifdef DEBUG
							userlog("JPN_UPDATE : upd_common_leg_upd_flag failed with return code %d", ret_code);
#endif
							free(txn_details_orig);
							//tpreturn(TPSUCCESS, ret_code, (char *)resp, sizeof (JPN_UPDATE_RESP_T), 0);
							*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;
						}
						
						
					}
					else
					{
						/* Update the Legacy update flag to YES */

						if (SUCCESS != (ret_code = upd_leg_upd_flag(req->header.application_id, txn_details->txn_sr_no,ctx)))
						{
#ifdef DEBUG
							userlog("JPN_UPDATE : upd_leg_upd_flag failed with return code %d", ret_code);
#endif
							free(txn_details_orig);
							//tpreturn(TPSUCCESS, ret_code, (char *)resp, sizeof (JPN_UPDATE_RESP_T), 0);
							*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;
						}

					}

				}
			
				break;
			}
			case TXN_CHIP_UPD:
			{
				if (addr_upd_flag == NO)
				{
					if (atoi(txn_details->txn_code) == TXN_ADDR_UPD && (txn_details->legacy_req_flag == ADDRESS_UPD
																		|| txn_details->legacy_req_flag == '\0'))
					{
						/* Get the old and new addresses */

						if (SUCCESS != (ret_code = get_address(req->header.application_id, &old_address, &new_address,
															&address_flag,ctx)))
						{
#ifdef DEBUG
							userlog("JPN_UPDATE : get_address() failed with %d", ret_code);
#endif
							free(txn_details_orig);
							//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
							*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;

						}

#ifdef DEBUG
							userlog("JPN_UPDATE : Address update flag - %c", address_flag);
#endif


						req_flag = ADDRESS_UPD;
						
						/* Insert a record for the request in LEGACY_REQUEST table only if */
						/* service is being called for the first time for this transaction */
						/* i.e. if it is being called by another service				   */

						if (leg_upd_flag == NO)
						{
							if(SUCCESS != (ret_code = insert_legacy_req(&msgid, req, JPN_ID, txn_details->txn_sr_no, req_flag,ctx)))
							{
#ifdef DEBUG
								userlog("JPN_UPDATE : insert_legacy_req() failed with %d", ret_code);
#endif
								free(txn_details_orig);

								if (NULL != old_address)
									free(old_address);

								if (NULL != new_address)
									free(new_address);

								//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;

							}
						}
						else	/* Copy the Message is from LEGACY_REQUEST */
							msgid = txn_details->message_id;

#ifdef DEBUG
						userlog("JPN_UPDATE : Oracle Message id - %d", msgid);
#endif
						if (SUCCESS != (ret_code = upd_address(req, msgid, old_address, new_address,hdr,ctx))) //hdr added by kasi on 11/08/06 to remove global scope.
						{
#ifdef DEBUG
							userlog("JPN_UPDATE : upd_address failed with return code %d", ret_code);
#endif
							free(txn_details_orig);

							if (NULL != old_address)
								free(old_address);

							if (NULL != new_address)
								free(new_address);

							//tpreturn(TPSUCCESS, ret_code, (char *)resp, sizeof (JPN_UPDATE_RESP_T), 0);
							*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;
						}

/************************/
						pcount=0;
						//ret_code = payment_info_count(req->header.application_id, &pcount, ctx);
						//ret_code = payment_info_count(req->header.application_id,&pcount,ctx);
					
						//userlog("req->header.application_id : %s",req->header.application_id);
						//strcpy(appl_id, req->header.application_id);
						userlog("appl_id : %s",appl_id);
						
						/* EXEC SQL SELECT COUNT(*) INTO :pcount FROM PAYMENT_INFO
							WHERE APPLID = :appl_id; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 12;
      sqlstm.arrsiz = 4;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "select count(*)  into :b0  from PAYMENT_INFO where APPL\
ID=:b1";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )82;
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
							userlog("update_payment : Select from PAYMENT_INFO failed : %s", SQLMSG); 
						#endif
						
						}

						userlog("update_payment : PAYMENT_INFO count : %d for appl_id : %s",pcount,appl_id);
						

						if(pcount)
						{	
							userlog("Payment record exists in payment_info so updating the data to host");

							req_flag = PAYMENT_UPD;
							
							/* Insert a record for the request in LEGACY_REQUEST table only if */
							/* service is being called for the first time for this transaction */
							/* i.e. if it is being called by another service				   */

							if(SUCCESS != (ret_code = insert_legacy_req(&msgid, req, JPN_ID, appl_txn_srno, req_flag,ctx)))
							{
							#ifdef DEBUG
								userlog("JPN_UPDATE : insert_legacy_req() failed with %d", ret_code);
							#endif
								free(txn_details_orig);
								//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
							//memcpy(*pResp, resp, resp_length);
							*pResp = resp;
							return ret_code;

							}
						
							#ifdef DEBUG
								userlog("JPN_UPDATE : Oracle Message id - %d", msgid);
							#endif

							ret_code = upd_payment(req, msgid, txn_details->txn_sr_no,
											txn_details->request_status, txn_details->txn_type,hdr,ctx); //hdr added by kasi on 11/08/06 to remove global scope.

							if(SUCCESS != ret_code && GMPC_WARN != ret_code)
							{
							#ifdef DEBUG
								userlog("JPN_UPDATE : upd_payment() failed with %d", ret_code);
							#endif

							free(txn_details_orig);
							//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
							*pRespSize = resp_length;
							//memcpy(*pResp, resp, resp_length);
							*pResp = resp;
							return ret_code;
								
							}

							if (SUCCESS == ret_code)
							{
								/* Update the Payment update flag to YES */

								if(SUCCESS != (ret_code = upd_payment_flag(req->header.application_id, txn_details->txn_sr_no,ctx)))
								{
								#ifdef DEBUG
									userlog("JPN_UPDATE : upd_payment_flag() failed with %d", ret_code);
								#endif
								free(txn_details_orig);
								//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;

								}
							}							
						}

/************************/

						addr_upd_flag = YES;
					}

				
					/* Update the Legacy update flag to intermidiate status 'X', if        */
					/* the request is to be picked up by the JPJ_UPDATE service, otherwise */
					/* update the flag to YES											   */

					if (SUCCESS != (ret_code = upd_common_leg_upd_flag(req->header.application_id, txn_details->txn_sr_no,ctx)))
					{
#ifdef DEBUG
						userlog("JPN_UPDATE : upd_common_leg_upd_flag failed with return code %d", ret_code);
#endif
						free(txn_details_orig);

						if (NULL != old_address)
							free(old_address);

						if (NULL != new_address)
							free(new_address);

						//tpreturn(TPSUCCESS, ret_code, (char *)resp, sizeof (JPN_UPDATE_RESP_T), 0);
						*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;
					}


					if (NULL != old_address)
						free(old_address);

					if (NULL != new_address)
						free(new_address);
				}

				break;
			}
			case TXN_ISSUE:
			{
				userlog("Inside the TXN_ISSUE");	
				
				address_flag = NO;

				if ( NO == card_upd_flag)
				{
					userlog("Inside the card_upd_flag");

					if (atoi(txn_details->txn_code) == TXN_ISSUANCE && (txn_details->legacy_req_flag == GMPC_STAT_UPD
																		|| txn_details->legacy_req_flag == '\0'))
					{
						req_flag = GMPC_STAT_UPD;
						
						/* Insert a record for the request in LEGACY_REQUEST table only if */
						/* service is being called for the first time for this transaction */
						/* i.e. if it is being called by another service				   */

						if (leg_upd_flag == NO)
						{
							if(SUCCESS != (ret_code = insert_legacy_req(&msgid, req, JPN_ID, txn_details->txn_sr_no, req_flag,ctx)))
							{
							#ifdef DEBUG
								userlog("JPN_UPDATE : insert_legacy_req() failed with %d", ret_code);
							#endif
								free(txn_details_orig);
								//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;

							}
						}
						else	/* Copy the Message is from LEGACY_REQUEST */
							msgid = txn_details->message_id;

						#ifdef DEBUG
							userlog("JPN_UPDATE : Oracle Message id - %d", msgid);
						#endif

						/* Request is for updation of card details */
					
						if (SUCCESS != (ret_code = upd_card_details(req, msgid, GMPC_STAT_UPD,hdr,ctx))) //hdr added by kasi on 11/08/06 to remove global scope.
						{
						#ifdef DEBUG
							userlog("JPN_UPDATE : upd_card_details() failed with return code %d", ret_code);
						#endif
							free(txn_details_orig);
							//tpreturn(TPSUCCESS, ret_code, (char *)resp, sizeof (JPN_UPDATE_RESP_T), 0);
							*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;
						}
						
						/* Check if address is already updated */

/*Commented by Amarjith on 10th Sept 2004 to block updating address to host during issuance. Req from Vasanth.

						if (GMPC_BAD == (ret_code = check_addr_updated(req->header.application_id,ctx)))
						{
#ifdef DEBUG
							userlog("JPN_UPDATE : check_addr_updated() failed with return code %d", ret_code);
#endif
							free(txn_details_orig);
							tpreturn(TPSUCCESS, ret_code, (char *)resp, sizeof (JPN_UPDATE_RESP_T), 0);
						}
						else if (GMPC_WARN == ret_code)
						{
							addr_upd_flag = YES;
						}

						if (addr_upd_flag == NO)
						{
							// Set the address update flag if address is to be updated if modified 

							if (SUCCESS != (ret_code = get_address(req->header.application_id, &old_address, &new_address,
														&address_flag,ctx)))
							{
#ifdef DEBUG
								userlog("JPN_UPDATE : get_address() failed with %d", ret_code);
#endif
								free(txn_details_orig);
								tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);

							}
							
#ifdef DEBUG
							userlog("JPN_UPDATE : Address update flag - %c", address_flag);
#endif

							// For Issuance transaction, send the addresses only if they are changed 

							if (YES == address_flag)
							{
								req_flag = ADDRESS_UPD;
								
								// Insert a record for the request in LEGACY_REQUEST table irrespective 
								// of whether it is being called by another service or manually         
								
								if(SUCCESS != (ret_code = insert_legacy_req(&msgid, req, JPN_ID, txn_details->txn_sr_no, req_flag,ctx)))
								{
#ifdef DEBUG
									userlog("JPN_UPDATE : insert_legacy_req() failed with %d", ret_code);
#endif
									free(txn_details_orig);

									if (NULL != old_address)
										free(old_address);

									if (NULL != new_address)
										free(new_address);

									tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);

								}

#ifdef DEBUG
								userlog("JPN_UPDATE : Oracle Message id - %d", msgid);
#endif
								if (SUCCESS != (ret_code = upd_address(req, msgid, old_address, new_address,ctx)))
								{
#ifdef DEBUG
									userlog("JPN_UPDATE : upd_address failed with return code %d", ret_code);
#endif
									free(txn_details_orig);

									if (NULL != old_address)
										free(old_address);

									if (NULL != new_address)
										free(new_address);

									tpreturn(TPSUCCESS, ret_code, (char *)resp, sizeof (JPN_UPDATE_RESP_T), 0);
								}

							}

							addr_upd_flag = YES;
						}
*///10th Sept 2004.
						if (leg_upd_flag == NO)
						{
						
							req_flag = PAYMENT_UPD;

							/* Retrieve the transaction serial no at the Application time */

/*							if(SUCCESS != (ret_code = get_txn_srno(req->header.application_id, &appl_txn_srno, &payment_srno,ctx)))
							{
#ifdef DEBUG
								userlog("JPN_UPDATE : get_txn_srno() failed with %d", ret_code);
#endif
								free(txn_details_orig);
								tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);

							}

*/
							/* Check for Payment to be sent or not */

							if(SUCCESS != (ret_code = check_issue_payment(req->header.application_id, &pay_ind,ctx)))
							{
#ifdef DEBUG
								userlog("JPN_UPDATE : check_issue_payment() failed with %d", ret_code);
#endif
								free(txn_details_orig);
								//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;

							}

							if (pay_ind == YES)
							{
								/* Insert a record for the request in LEGACY_REQUEST table only if */
								/* service is being called for the first time for this transaction */
								/* i.e. if it is being called by another service				   */

								if(SUCCESS != (ret_code = insert_legacy_req(&msgid, req, JPN_ID, appl_txn_srno, req_flag,ctx)))
								{
#ifdef DEBUG
									userlog("JPN_UPDATE : insert_legacy_req() failed with %d", ret_code);
#endif
									free(txn_details_orig);
									//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
									*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;

								}
							
#ifdef DEBUG
								userlog("JPN_UPDATE : Oracle Message id - %d", msgid);
#endif

								ret_code = upd_payment(req, msgid, txn_details->txn_sr_no,
												txn_details->request_status, txn_details->txn_type,hdr,ctx); //hdr added by kasi on 11/08/06 to remove global scope.

								if(SUCCESS != ret_code && GMPC_WARN != ret_code)
								{
#ifdef DEBUG
									userlog("JPN_UPDATE : upd_payment() failed with %d", ret_code);
#endif

									free(txn_details_orig);
									//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
									*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;
									
								}

								if (SUCCESS == ret_code)
								{
									/* Update the Payment update flag to YES */

									if(SUCCESS != (ret_code = upd_payment_flag(req->header.application_id, txn_details->txn_sr_no,ctx)))
									{
#ifdef DEBUG
										userlog("JPN_UPDATE : upd_payment_flag() failed with %d", ret_code);
#endif
										free(txn_details_orig);
										//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
										*pRespSize = resp_length;
										//memcpy(*pResp, resp, resp_length);
										*pResp = resp;
										return ret_code;

									}
								}
							}
						}

						/* Update the Legacy update flag to intermidiate status 'X', if        */
						/* the request is to be picked up by the JPJ_UPDATE service, otherwise */
						/* update the flag to YES											   */

						if (SUCCESS != (ret_code = upd_common_leg_upd_flag(req->header.application_id, txn_details->txn_sr_no,ctx)))
						{
#ifdef DEBUG
							userlog("JPN_UPDATE : upd_common_leg_upd_flag failed with return code %d", ret_code);
#endif
							free(txn_details_orig);

							if (NULL != old_address)
								free(old_address);

							if (NULL != new_address)
								free(new_address);

							//tpreturn(TPSUCCESS, ret_code, (char *)resp, sizeof (JPN_UPDATE_RESP_T), 0);
							*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;
						}

						card_upd_flag = YES;
					}

					if (NULL != old_address)
						free(old_address);

					if (NULL != new_address)
						free(new_address);

				}

				break;
			}
			case TXN_MISC:
			{
				
				req_flag = PAYMENT_UPD;

				/* Insert a record for the request in LEGACY_REQUEST table only if */
				/* service is being called for the first time for this transaction */
				/* i.e. if it is being called by another service				   */

				if (leg_upd_flag == NO)
				{
					if(SUCCESS != (ret_code = insert_legacy_req(&msgid, req, JPN_ID, txn_details->txn_sr_no, req_flag,ctx)))
					{
#ifdef DEBUG
						userlog("JPN_UPDATE : insert_legacy_req() failed with %d", ret_code);
#endif
						free(txn_details_orig);
						//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
						*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;

					}
				}
				else
					msgid = txn_details->message_id;

#ifdef DEBUG
				userlog("JPN_UPDATE : Oracle Message id - %d", msgid);
#endif

				if(SUCCESS != (ret_code = upd_payment(req, msgid, txn_details->txn_sr_no, 
												txn_details->request_status, txn_details->txn_type,hdr,ctx))) //hdr added by kasi on 11/08/06 to remove global scope.
				{
#ifdef DEBUG
					if (ret_code == GMPC_WARN)
						userlog("JPN_UPDATE : No Payment info to be sent");
					else
						userlog("JPN_UPDATE : upd_payment() failed with %d", ret_code);
#endif
					if (ret_code == GMPC_WARN)
						continue;
					else
					{
						free(txn_details_orig);
						//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
						*pRespSize = resp_length;
						//memcpy(*pResp, resp, resp_length);
						*pResp = resp;
						return ret_code;
					}

				}

				/* Update the Payment update flag to YES */

				if(SUCCESS != (ret_code = upd_payment_flag(req->header.application_id, txn_details->txn_sr_no,ctx)))
				{
#ifdef DEBUG
					userlog("JPN_UPDATE : upd_payment_flag() failed with %d", ret_code);
#endif
					free(txn_details_orig);
					//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
					*pRespSize = resp_length;
					//memcpy(*pResp, resp, resp_length);
					*pResp = resp;
					return ret_code;

				}
				/* Update the Legacy update flag to YES */

				if (SUCCESS != (ret_code = upd_leg_upd_flag(req->header.application_id, txn_details->txn_sr_no,ctx)))
				{
#ifdef DEBUG
					userlog("JPN_UPDATE : upd_leg_upd_flag failed with return code %d", ret_code);
#endif
					free(txn_details_orig);
					//tpreturn(TPSUCCESS, ret_code, (char *)resp, sizeof (JPN_UPDATE_RESP_T), 0);
					*pRespSize = resp_length;
					//memcpy(*pResp, resp, resp_length);
					*pResp = resp;
					return ret_code;
				}
			
				break;
			}
			case TXN_UNCLAIMED_CARD:
			{
				
				req_flag = SURRENDER_UPD;

				/* Insert a record for the request in LEGACY_REQUEST table only if */
				/* service is being called for the first time for this transaction */
				/* i.e. if it is being called by another service				   */

				if (leg_upd_flag == NO)
				{
					if(SUCCESS != (ret_code = insert_legacy_req(&msgid, req, JPN_ID, txn_details->txn_sr_no, req_flag,ctx)))
					{
#ifdef DEBUG
						userlog("JPN_UPDATE : insert_legacy_req() failed with %d", ret_code);
#endif
						free(txn_details_orig);
						//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
						*pRespSize = resp_length;
						//memcpy(*pResp, resp, resp_length);
						*pResp = resp;
						return ret_code;

					}
				}
				else
					msgid = txn_details->message_id;

#ifdef DEBUG
				userlog("JPN_UPDATE : Oracle Message id - %d", msgid);
#endif

				if(SUCCESS != (ret_code = upd_unclaimed_card_details(req,branch_code,msgid,hdr,ctx))) //hdr added by kasi on 11/08/06 to remove global scope.
				{
#ifdef DEBUG
					if (ret_code == GMPC_WARN)
						userlog("JPN_UPDATE : No Surrender info to be sent");
					else
						userlog("JPN_UPDATE : upd_unclaimed_details() failed with %d", ret_code);
#endif
					if (ret_code == GMPC_WARN)
						continue;
					else
					{
						free(txn_details_orig);
						//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
						*pRespSize = resp_length;
						//memcpy(*pResp, resp, resp_length);
						*pResp = resp;
						return ret_code;
					}

				}

				/* Update the Legacy update flag to YES */

				if (SUCCESS != (ret_code = upd_leg_upd_flag(req->header.application_id, txn_details->txn_sr_no,ctx)))
				{
#ifdef DEBUG
					userlog("JPN_UPDATE : upd_leg_upd_flag failed with return code %d", ret_code);
#endif
					free(txn_details_orig);
					//tpreturn(TPSUCCESS, ret_code, (char *)resp, sizeof (JPN_UPDATE_RESP_T), 0);
					*pRespSize = resp_length;
					//memcpy(*pResp, resp, resp_length);
					*pResp = resp;
					return ret_code;
				}
			
				break;
			}
			case TXN_LIC :
						break;
			default:
			{
#ifdef DEBUG
				userlog("JPN_UPDATE : Invalid transaction type");
#endif
				/* Log the error */
				strcpy(prog_log.remarks, "JPN_UPDATE : Invalid transaction type");
				strcpy(excep_log.error_msg, "JPN_UPDATE : Invalid transaction type");
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				free(txn_details_orig);
				//tpreturn(TPSUCCESS, INVALID_TXN_TYPE, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
				return INVALID_TXN_TYPE;
			}
		}

		/* Commit the updation on LEGACY_REQUEST and APPL_TXN (if any) */

		if(SUCCESS != gscbcommit_trans(ctx))
		{
			userlog("JPN_UPDATE : Commit transaction failed!!");
			free(txn_details_orig);
			//tpreturn(TPSUCCESS, END_TRAN_ERROR, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return END_TRAN_ERROR;
		}

	}	/* End of for (count = 0; count < txn_count; count++, txn_details++) */

	strcpy(prog_log.remarks, "JPN_UPDATE : Completed successfully");

	log_exit(ctx);

#ifdef DEBUG
	userlog("JPN_UPDATE : Completed successfully");
#endif

	free(txn_details_orig);

	/* Return the response buffer	*/
	//tpreturn(TPSUCCESS, GMPC_GOOD, (char *) resp, resp_length, 0);
	*pRespSize = resp_length;
	//memcpy(*pResp, resp, resp_length);
	*pResp = resp;
	return GMPC_GOOD;
	


}

/**********************************************************************/
/* Function :     error_log_for_malloc								  */
/* Description :  Updates the JPN/JPJ legacy system with the changed  */
/*				  address of the applicant 							  */
/**********************************************************************/

void error_log_for_malloc(char *image_remark,void * ctx)
{
	
#ifdef DEBUG
	userlog(image_remark);
#endif
		
	strcpy(prog_log.remarks,image_remark);
	strcpy(excep_log.error_msg, image_remark);
	excep_log.termination_flag = YES;
	excep_log.severity = FATAL;

	log_error(ctx);
	
}

/*********************************************************************************************/
/* Function Name	:	free_alloced_mem													 */
/* Description		:   This function frees the malloced memory for the legacy structures.	 */
/* Input			:   Address of LI_JPN_UPDATE_REQ_T and LI_PUT_FIN_DATA_T variables		 */
/* Return Values	:   None																 */
/* Limitations		:   None															     */
/*********************************************************************************************/
void free_alloced_mem(LI_JPN_UPDATE_REQ_T *jpn_upd, LI_PUT_FIN_DATA_T *fin_data,void * ctx)
{

#ifdef DEBUG
	userlog("free_alloced_mem : Into function");
#endif 

	if(fin_data->fin_data != NULL)
	{
		free(fin_data->fin_data);
	}

#ifdef DEBUG
	userlog("free_alloced_mem : frees fin_data");
#endif

	if(jpn_upd->new_address != NULL)
	{
		free(jpn_upd->new_address);
	}
#ifdef DEBUG
	userlog("free_alloced_mem : jpn_upd->new_address");
#endif

	if(jpn_upd->old_address != NULL)
	{
		free(jpn_upd->old_address);
	}

#ifdef DEBUG
	userlog("free_alloced_mem : jpn_upd->old_address");
#endif


//	if(jpn_upd->hi_res_portrait.portrait_buff != NULL)
//	{
//		free(jpn_upd->hi_res_portrait.portrait_buff);
//	}
//
//#ifdef DEBUG
//	userlog("free_alloced_mem : jpn_upd->hi_res_portrait.portrait_buff");
//#endif

	if(jpn_upd->low_res_portrait.portrait_buff != NULL)
	{
		free(jpn_upd->low_res_portrait.portrait_buff);
	}

#ifdef DEBUG
	userlog("free_alloced_mem : jpn_upd->low_res_portrait.portrait_buff");
#endif


	
//	if(jpn_upd->lfinger.fp_img_buff != NULL)
//	{
//		free(jpn_upd->lfinger.fp_img_buff);
//	}
//
//#ifdef DEBUG
//	userlog("free_alloced_mem : jpn_upd->lfinger.fp_img_buff");
//#endif

	if(jpn_upd->lfinger.org_minutiae_buff != NULL)
	{
		free(jpn_upd->lfinger.org_minutiae_buff);
	}

#ifdef DEBUG
	userlog("free_alloced_mem : jpn_upd->lfinger.org_minutiae_buff");
#endif

	if(jpn_upd->lfinger.norm_minutiae_buff != NULL)
	{
		free(jpn_upd->lfinger.norm_minutiae_buff);
	}

#ifdef DEBUG
	userlog("free_alloced_mem : jpn_upd->lfinger.norm_minutiae_buff");
#endif
	
//	if(jpn_upd->lfinger.matrix_buffer != NULL)
//	{
//		free(jpn_upd->lfinger.matrix_buffer);
//	}
//
//#ifdef DEBUG
//	userlog("free_alloced_mem : jpn_upd->lfinger.matrix_buffer");
//#endif

//	if(jpn_upd->rfinger.fp_img_buff != NULL)
//	{
//		free(jpn_upd->rfinger.fp_img_buff);
//	}
//
//#ifdef DEBUG
//	userlog("free_alloced_mem : jpn_upd->rfinger.fp_img_buff");
//#endif

	if(jpn_upd->rfinger.org_minutiae_buff != NULL)
	{
		free(jpn_upd->rfinger.org_minutiae_buff);
	}

#ifdef DEBUG
	userlog("free_alloced_mem : jpn_upd->rfinger.org_minutiae_buff");
#endif

	if(jpn_upd->rfinger.norm_minutiae_buff != NULL)
	{
		free(jpn_upd->rfinger.norm_minutiae_buff);
	}

#ifdef DEBUG
	userlog("free_alloced_mem : jpn_upd->rfinger.norm_minutiae_buff");
#endif
	
//	if(jpn_upd->rfinger.matrix_buffer != NULL)
//	{
//		free(jpn_upd->rfinger.matrix_buffer);
//	}
//
//#ifdef DEBUG
//	userlog("free_alloced_mem : jpn_upd->rfinger.matrix_buffer");
//#endif

	return;
}

/*********************************************************************************************/
/* Function Name	:	rtrim																 */
/* Description		:   trims the spaces on the right for the given string.					 */
/* Input			:   string																 */
/* Return Values	:   right trimed string													 */
/* Limitations		:   None															     */
/*********************************************************************************************/
char * rtrim(char *amt)
{
	char trimed_amount[AMT_SIZE];


	int i;

	strcpy(trimed_amount, amt);

	for(i = 0; ; i++)
	{
		if(trimed_amount[i] == ' ' || trimed_amount[i] == '\0')
			break;
	}

	trimed_amount[i] = '\0';

	strcpy(amt, trimed_amount);
	return amt;
}

/**********************************************************************************/
/* Function Name: convert_mode()         										  */
/* Description	: This function coverts the mode to the format in which the legacy*/
/*				  needs.														  */
/* Input		: Payment mode, Converted mode									  */
/* Return Values: None                                							  */
/* Limitations	: None															  */
/**********************************************************************************/	
void convert_mode(char mode[PAY_MODE_SIZE], unsigned char *converted_mode)
{

		if(strcmp(strupr(mode), "CA") == 0)
		{
			*converted_mode = '1' - '0';
			return;
		}
	
		if(strcmp(strupr(mode), "CH") == 0)
		{
			*converted_mode = '2' - '0';
			return;
		}

		if(strcmp(strupr(mode), "MO") == 0)
		{
			*converted_mode = '3' - '0';
			return;
		}

		if(strcmp(strupr(mode), "PO") == 0)
		{
			*converted_mode = '4' - '0';
			return;
		}

		if(strcmp(strupr(mode), "BD") == 0)
		{
			*converted_mode = '5' - '0';
			return;
		}

		
		if(strcmp(strupr(mode), "CC") == 0)
		{
			*converted_mode = '7' - '0';
			return;
		}

		if(strcmp(strupr(mode), "DC") == 0)
		{
			*converted_mode = '8' - '0';
			return;
		}
		
		if(strcmp(strupr(mode), "MC") == 0)
		{
			*converted_mode = '9' - '0';
			return;
		}

		if(strcmp(strupr(mode), "FC") == 0)
		{
			*converted_mode = '0';
			return;
		}

		
#ifdef DEBUG
		userlog("convert_mode : Converted pay mode - %c", *converted_mode);
#endif
}

/************************************************************************************/
/* Function Name: get_age()         												*/
/* Description	: This function calculates the applicant's age						*/
/* Input		: Date of Birth, Application date                					*/
/* Return Values: Age                                								*/
/* Limitations	: None																*/
/************************************************************************************/	
int get_age(char *date_of_birth, char *date_of_appl)
{
	 char y2[YEAR] = "";
	 char m2[MON] = "";
	 char d2[DAY] = "";
	 char y1[YEAR] = "";
	 char m1[MON] = "";
	 char d1[DAY] = "";
	 int age = 0;
	 char *ptr = NULL;

#ifdef DEBUG
	userlog("get_age : DOB - %s",date_of_birth);
	userlog("get_age : Date of Application - %s",date_of_appl);
#endif

	if (date_of_birth[0] != '\0')
	{
		ptr = date_of_birth;
		strncpy(d1, ptr, 2);
		d1[2] = 0;
		

		strncpy(m1, ptr+2, 2);
		m1[2] = 0;
		
		strncpy(y1, ptr+4,4);
		y1[4] = 0;

		ptr = date_of_appl;
		strncpy(d2, ptr, 2);
		d2[2] = 0;
		

		strncpy(m2, ptr+2, 2);
		m2[2] = 0;
		

		strncpy(y2, ptr+4,4);
		y2[4] = 0;

		age = atoi(y2) - atoi(y1);

		if((atoi(m1) > atoi(m2)) || ((atoi(m1) == atoi(m2)) &&
		(atoi(d1) > atoi(d2))))
		{
			age = age-1;
		}
		return age;
	}
	else
		return 0;	/* default */

}



/********************************************************************************/
/* Function name: fetch_transaction												*/
/* Description	: This function fetches the transaction details for the given   */
/*                application id from APPL_TXN table							*/
/* Input		: Application id,Pointer to a structure to store transaction    */											
/*                details, Pointer to variable storing transacttion count       */
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int fetch_transaction(char *application_id, TXN_INFO_T** txn_details, int *txn_count, char leg_upd_flag,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	int txn_cnt = 0;
	int txn_sr_no = 0;
	char txn_code[TRANSACTION_CODE_SIZE] = {0};
	int txn_type = 0;
	char leg_upd = 0;
	int req_stat = 0;
	int req_stat1 = 0;
	char check_agency = 0;
	char service_id[PROG_ID_SIZE] = {0};
	char request_flag = 0;
	int message_id = 0;
	int request_status = 0;
			
	short txn_sr_no_ind = -1;
	short txn_code_ind = -1;
	short txn_type_ind = -1;
	short request_flag_ind  = -1;
	short message_id_ind = -1;
	short request_status_ind = -1;
	
sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	TXN_INFO_T *txn_details_orig = NULL;
	TXN_INFO_T *txn_details_temp = NULL;
	int count = 0 ;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	

	/* Populate the variables	*/

	strcpy(appl_id, application_id);

	leg_upd = leg_upd_flag;
	req_stat = REQ_NOT_SENT;
	req_stat1 = REPLY_NOT_RECIEVED;
	check_agency = JPN_ID;
	itoa(JPN_UPDATE_ID, service_id, 10);
	
#ifdef DEBUG
	userlog("fetch_transaction : Appl id - %s", appl_id);
	userlog("fetch_transaction : Legacy update flag - %c", leg_upd);
#endif


	if (leg_upd_flag != '\0')
	{
		/* EXEC SQL SELECT COUNT(*) INTO :txn_cnt 
			FROM APPL_TXN
		WHERE APPLID = :appl_id
			AND TXNCANCELCODE IS NULL
			AND LEGUPDFLAG IN (:leg_upd, 'X'); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN where ((APPLID=:b1\
 and TXNCANCELCODE is null ) and LEGUPDFLAG in (:b2,'X'))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )105;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&txn_cnt;
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
  sqlstm.sqhstv[2] = (         void  *)&leg_upd;
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

	/* X - Intermidiate legacy update flag */
	}	
	else 
	{
		/* EXEC SQL SELECT COUNT(*) INTO :txn_cnt 
			FROM IJPN_LEGACY_REQUEST
		WHERE APPLID = :appl_id
		AND LEGREQSTAT IN (:req_stat, :req_stat1)
		AND CHECKAGENCY = :check_agency
		AND SERVICEID = :service_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from IJPN_LEGACY_REQUEST where (\
((APPLID=:b1 and LEGREQSTAT in (:b2,:b3)) and CHECKAGENCY=:b4) and SERVICEID=:\
b5)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )132;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&txn_cnt;
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
  sqlstm.sqhstv[2] = (         void  *)&req_stat;
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&req_stat1;
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&check_agency;
  sqlstm.sqhstl[4] = (unsigned int  )1;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)service_id;
  sqlstm.sqhstl[5] = (unsigned int  )9;
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



	}
	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog(" fetch_transaction : Select from APPL_TXN failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"fetch_transaction: Select from APPL_TXN failed ");
		sprintf(excep_log.error_msg, "fetch_transaction: Select from APPL_TXN failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}
	else if (0 == txn_cnt )
	{
#ifdef DEBUG
		userlog(" fetch_transaction : No transaction exists for the applicant");
#endif
		strcpy(prog_log.remarks,"fetch_transaction: No transaction exists");
		strcpy(excep_log.error_msg, "fetch_transaction: No transaction exists");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return NO_TXN_EXISTS;

	}
	
#ifdef DEBUG
		userlog(" fetch_transaction : Txn count - %d", txn_cnt);
#endif

	*txn_count = txn_cnt;

	txn_details_orig = (TXN_INFO_T *)malloc(txn_cnt*(sizeof(TXN_INFO_T)));

	if (NULL == txn_details_orig)
	{
#ifdef DEBUG
		userlog("fetch_transaction : Allocation of memory for storing transaction details failed");
#endif
		strcpy(prog_log.remarks,"fetch_transaction: Allocation of memory for storing transaction details failed");
		strcpy(excep_log.error_msg, "fetch_transaction: Allocation of memory for storing transaction details failed");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return MALLOC_ERROR;
	}

	*txn_details = txn_details_orig;
	txn_details_temp = txn_details_orig;

#ifdef DEBUG
	userlog("fetch_transaction - Memory allocation successfull");
#endif

	/* Declare the cursor for fetching details of all the transactions */

	if (leg_upd_flag != '\0')
	{
		/* If the service is being called by another service (first time call) */
		/* select transaction details from APPL_TXN							   */

		/* EXEC SQL DECLARE txn_info CURSOR FOR 
		SELECT A.TXNSERNO, NULL, NULL, A.TXNCODE, B.TXNTYPE
			FROM APPL_TXN A, TXN_CODE B 
			WHERE A.APPLID = :appl_id
				AND A.TXNCANCELCODE IS NULL
				AND A.LEGUPDFLAG IN (:leg_upd, 'X')
				AND B.TXNCODE = A.TXNCODE
				ORDER BY A.TXNSERNO; */ 

 
		/* EXEC SQL OPEN txn_info; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = sq0007;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )171;
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
  sqlstm.sqhstv[1] = (         void  *)&leg_upd;
  sqlstm.sqhstl[1] = (unsigned int  )1;
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
	else 
	{
		/* If the service is being called manually (if first call failed or   */
		/* reply not received ) select transaction details from LEGACY_REQUEST*/							   

		/* EXEC SQL DECLARE transaction_info CURSOR FOR 
		SELECT A.TXNSERNO, A.LEGREQFLAG, A.LEGREQMSGID, A.LEGREQSTAT, C.TXNCODE, B.TXNTYPE
			FROM IJPN_LEGACY_REQUEST A, APPL_TXN C, TXN_CODE B 
			WHERE A.APPLID = :appl_id
			AND A.LEGREQSTAT IN (:req_stat, :req_stat1)
			AND A.CHECKAGENCY = :check_agency
			AND A.SERVICEID = :service_id
			AND C.APPLID = A.APPLID
			AND C.TXNSERNO = A.TXNSERNO
			AND B.TXNCODE = C.TXNCODE
			ORDER BY A.TXNSERNO; */ 

				
		/* EXEC SQL OPEN transaction_info; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = sq0008;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )194;
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
  sqlstm.sqhstv[1] = (         void  *)&req_stat;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&req_stat1;
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&check_agency;
  sqlstm.sqhstl[3] = (unsigned int  )1;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)service_id;
  sqlstm.sqhstl[4] = (unsigned int  )9;
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


	}

	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog(" fetch_transaction : Unable to open cursor for fetching data from APPL_TXN : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"fetch_transaction: Unable to open cursor for fetching data from APPL_TXN");
		sprintf(excep_log.error_msg, "fetch_transaction: Unable to open cursor for fetching data from APPL_TXN : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return CURSOR_OPEN_ERROR;
	}

#ifdef DEBUG
		userlog(" fetch_transaction : Open cursor successfull");
#endif

	for(count = 0; ;count++, txn_details_temp++)
	{

		if (leg_upd_flag != '\0')
		{
	
			/* EXEC SQL FETCH txn_info
				INTO :txn_sr_no:txn_sr_no_ind, :request_flag:request_flag_ind, :message_id:message_id_ind,
					 :txn_code:txn_code_ind, :txn_type:txn_type_ind; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )229;
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
   sqlstm.sqhstv[1] = (         void  *)&request_flag;
   sqlstm.sqhstl[1] = (unsigned int  )1;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)&request_flag_ind;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&message_id;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&message_id_ind;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)txn_code;
   sqlstm.sqhstl[3] = (unsigned int  )4;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)&txn_code_ind;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)&txn_type;
   sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)&txn_type_ind;
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


		}
		else
		{
			/* EXEC SQL FETCH transaction_info
				INTO :txn_sr_no:txn_sr_no_ind, :request_flag:request_flag_ind, :message_id:message_id_ind,
					 :request_status:request_status_ind, :txn_code:txn_code_ind, :txn_type:txn_type_ind; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )264;
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
   sqlstm.sqhstv[1] = (         void  *)&request_flag;
   sqlstm.sqhstl[1] = (unsigned int  )1;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)&request_flag_ind;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&message_id;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&message_id_ind;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&request_status;
   sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)&request_status_ind;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)txn_code;
   sqlstm.sqhstl[4] = (unsigned int  )4;
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)&txn_code_ind;
   sqlstm.sqinds[4] = (         int  )0;
   sqlstm.sqharm[4] = (unsigned int  )0;
   sqlstm.sqadto[4] = (unsigned short )0;
   sqlstm.sqtdso[4] = (unsigned short )0;
   sqlstm.sqhstv[5] = (         void  *)&txn_type;
   sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[5] = (         int  )0;
   sqlstm.sqindv[5] = (         void  *)&txn_type_ind;
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


		}
		
		if (NO_DATA_FOUND)
		{
			if (0 == count)
			{
#ifdef DEBUG
				userlog(" fetch_transaction : No transaction details present : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"fetch_transaction: No transaction details present");
				sprintf(excep_log.error_msg, "fetch_transaction: No transaction details present : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				free(txn_details_orig);
				return NO_TXN_EXISTS;
			}
			else
				break;
		}
		else if (SQLCODE != 0)
		{

			if (leg_upd_flag != '\0')
			{
				/* EXEC SQL CLOSE txn_info; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )303;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


			}
			else
			{
				/* EXEC SQL CLOSE transaction_info; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )318;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


			}

			if (SQLCODE != 0)
			{
#ifdef DEBUG
				userlog(" fetch_transaction : Unable to close cursor for fetching data from APPL_TXN : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"fetch_transaction: Unable to close cursor for fetching data from APPL_TXN");
				sprintf(excep_log.error_msg, "fetch_transaction: Unable to close cursor for fetching data from APPL_TXN : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				free(txn_details_orig);
				return CURSOR_CLOSE_ERROR;
			}

#ifdef DEBUG
			userlog(" fetch_transaction : Unable to fetch data from APPL_TXN : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"fetch_transaction: Unable to fetch data from APPL_TXN");
			sprintf(excep_log.error_msg, "fetch_transaction: Unable to fetch data from APPL_TXN : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			free(txn_details_orig);
			return CURSOR_FETCH_ERROR;
		}

#ifdef DEBUG
		userlog(" fetch_transaction : Fetch cursor successfull");
#endif

		memset(txn_details_temp, '\0', sizeof(TXN_INFO_T));

		/* Copy the values into structure */

		if ( 0 ==  txn_sr_no_ind )
			txn_details_temp->txn_sr_no = txn_sr_no	 ;

		if ( 0 == txn_type_ind )
			txn_details_temp->txn_type = txn_type ;

		if ( 0 == txn_code_ind )
			strcpy(txn_details_temp->txn_code, txn_code);

		if (leg_upd_flag != '\0')
		{
			txn_details_temp->legacy_req_flag = '\0';
			txn_details_temp->request_status = -5;
		}
		else
		{
			if (0 == request_flag_ind)
			{
				txn_details_temp->legacy_req_flag = request_flag;
			}

			if (0 == message_id_ind)
			{
				txn_details_temp->message_id = message_id;
			}

			if (0 == request_status_ind)
			{
				txn_details_temp->request_status = request_status;
			}
		}

#ifdef DEBUG
		userlog("fetch_transaction : Txn ser no - %d", txn_details_temp->txn_sr_no);
		userlog("fetch_transaction : Txn code - %s", txn_details_temp->txn_code);
		userlog("fetch_transaction : Txn type - %d", txn_details_temp->txn_type);
		userlog("fetch_transaction : Legacy request flag - %c", txn_details_temp->legacy_req_flag);
		userlog("fetch_transaction : Oracle message id - %d", txn_details_temp->message_id);
		userlog("fetch_transaction : Request status - %d", txn_details_temp->request_status);
#endif

	}

	if (leg_upd_flag != '\0')
	{
		/* EXEC SQL CLOSE txn_info; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )333;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


	}
	else
	{
		/* EXEC SQL CLOSE transaction_info; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )348;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


	}

	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog(" fetch_transaction : Unable to close cursor for fetching data from APPL_TXN : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"fetch_transaction: Unable to close cursor for fetching data from APPL_TXN");
		sprintf(excep_log.error_msg, "fetch_transaction: Unable to close cursor for fetching data from APPL_TXN : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		free(txn_details_orig);
		return CURSOR_CLOSE_ERROR;
	}

	return SUCCESS;
}

/****************************************************************************/
/* Function name: get_address												*/
/* Description :  This function gets the old address at the legacy and the  */
/*				  one given by the applicant at the worksation.				*/
/* Input		: Application id,Pointer to a structure to store old and new*/											
/*                addresses, Pointer to variable storing address update flag*/
/* Return values: SUCCESS / Error code										*/
/* Limitations	: None														*/
/********************************************************************************/

int get_address(char *application_id, ADDRESS_T **old_address, ADDRESS_T **new_address, char *address_flag,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	
		char appl_id[APP_ID_SIZE] = {0};
		short appl_id_ind = -1;
		char kpt_no[KPT_SIZE] = {0};
		short kpt_no_ind = -1;
		/* varchar address1[ADDRESS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } address1
 = {0};

		short address1_ind = -1;
		short new_address1_ind = -1;
		/* varchar address2[ADDRESS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } address2
 = {0};

		short address2_ind = -1;
		short new_address2_ind = -1;
		/* varchar address3[ADDRESS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } address3
 = {0};

		short address3_ind = -1;
		short new_address3_ind = -1;
		/* varchar postalcode[POST_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[6]; } postalcode
 = {0};

		short postalcode_ind = -1;
		int city_code;
		short city_code_ind = -1;
		char state_code[STATE_CODE_SIZE] = {0};
		short state_code_ind = -1;
				
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

		
	strcpy(appl_id, application_id);
	
	#ifdef DEBUG
		userlog("get_address : Appl Id  - %s",appl_id);
	#endif

	/* EXEC SQL SELECT KPTNO, ADDRESS1, ADDRESS2, ADDRESS3, 
				POSTCODE, CITYCODE, STATECODE
		 INTO :kpt_no:kpt_no_ind,:address1:new_address1_ind,
			  :address2:new_address2_ind,:address3:new_address3_ind,
			  :postalcode:postalcode_ind,
			  :city_code:city_code_ind,
			  :state_code:state_code_ind
		 FROM  APPNT_JPN_INFO
		 WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select KPTNO ,ADDRESS1 ,ADDRESS2 ,ADDRESS3 ,POSTCODE ,CITYCO\
DE ,STATECODE into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11,:b12:b13  from \
APPNT_JPN_INFO where APPLID=:b14";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )363;
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
 sqlstm.sqhstv[1] = (         void  *)&address1;
 sqlstm.sqhstl[1] = (unsigned int  )43;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&new_address1_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&address2;
 sqlstm.sqhstl[2] = (unsigned int  )43;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&new_address2_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&address3;
 sqlstm.sqhstl[3] = (unsigned int  )43;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&new_address3_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&postalcode;
 sqlstm.sqhstl[4] = (unsigned int  )8;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&postalcode_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&city_code;
 sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&city_code_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)state_code;
 sqlstm.sqhstl[6] = (unsigned int  )3;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&state_code_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)appl_id;
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



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("get_address : Selecting address from APPNT_JPN_INFO failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_address: Selecting address from APPNT_JPN_INFO failed ");
		sprintf(excep_log.error_msg, "get_address: Selecting address from APPNT_JPN_INFO failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}

#ifdef DEBUG
	userlog("get_address :  Seletced new address from APPNT_JPN_INFO");
#endif

	*new_address = (ADDRESS_T*) malloc(sizeof(ADDRESS_T));

	if(*new_address == NULL)
	{
#ifdef DEBUG
		userlog("get_address : Allocation of memory for storing new address failed");
#endif
		strcpy(prog_log.remarks,"get_address : Allocation of memory for storing new address failed");
		strcpy(excep_log.error_msg, "get_address : Allocation of memory for storing new address failed");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return MALLOC_ERROR;
	}

		if (new_address1_ind != 0)
		{
			strcpy((*new_address)->address1, "");
		}
		else
		{
			setnull(address1);
			strcpy((*new_address)->address1, address1.arr);
	
		}

		if (new_address2_ind != 0)
		{
			strcpy((*new_address)->address2, "");
		}
		else
		{
			setnull(address2);
			strcpy((*new_address)->address2 , address2.arr);
		}

		if (new_address3_ind != 0)
		{
			strcpy((*new_address)->address3, "");
		}
		else
		{
			setnull(address3);
			strcpy((*new_address)->address3 , address3.arr);
		}
		
		if (postalcode_ind != 0)
		{
			strcpy((*new_address)->post_code , "");
		}
		else
		{
			setnull(postalcode);
			strcpy((*new_address)->post_code , postalcode.arr);
		}

		if (city_code_ind != 0)
		{
			//(*new_address)->city_code = 0;
			(*new_address)->city_code = 9999;   // Added this part if city code is null we update it to 9999 as part of JRS 103
	                                            // Release 3.17 22/07/2009
		}
		else
		{
			(*new_address)->city_code = city_code;
		}

		if (state_code_ind != 0)
		{
			strcpy((*new_address)->state_code , "");
		}
		else
		{					
			strcpy((*new_address)->state_code , state_code);
		}

#ifdef DEBUG
	userlog("get_address : NEW ADDRESS : ");
	userlog("get_address : new_address - %X", *new_address);
	userlog("get_address : Address1 - %s", (*new_address)->address1);
	userlog("get_address : Address2 - %s", (*new_address)->address2);
	userlog("get_address : Address3 - %s", (*new_address)->address3);
	userlog("get_address : Post code - %s", (*new_address)->post_code);
	userlog("get_address : City code - %d", (*new_address)->city_code);
	userlog("get_address : State code - %s", (*new_address)->state_code);
#endif

	/* Reinitialize the indicator variables */

	postalcode_ind = -1;
	city_code_ind = -1;
	state_code_ind = -1;
	
	/* EXEC SQL SELECT ADDRESS1, ADDRESS2, ADDRESS3,  
					POSTCODE, CITYCODE, STATECODE
			 INTO :address1:address1_ind,
				  :address2:address2_ind,
				  :address3:address3_ind,
				  :postalcode:postalcode_ind,
				  :city_code:city_code_ind,
			      :state_code:state_code_ind
			FROM  JPN_INFO
			WHERE KPTNO = :kpt_no:kpt_no_ind; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select ADDRESS1 ,ADDRESS2 ,ADDRESS3 ,POSTCODE ,CITYCODE ,STA\
TECODE into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11  from JPN_INFO where K\
PTNO=:b12:b13";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )410;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&address1;
 sqlstm.sqhstl[0] = (unsigned int  )43;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&address1_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&address2;
 sqlstm.sqhstl[1] = (unsigned int  )43;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&address2_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&address3;
 sqlstm.sqhstl[2] = (unsigned int  )43;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&address3_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&postalcode;
 sqlstm.sqhstl[3] = (unsigned int  )8;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&postalcode_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&city_code;
 sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&city_code_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)state_code;
 sqlstm.sqhstl[5] = (unsigned int  )3;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&state_code_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)kpt_no;
 sqlstm.sqhstl[6] = (unsigned int  )13;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&kpt_no_ind;
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
		userlog("get_address : Selecting address from JPN_INFO failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_address: Selecting address from JPN_INFO failed ");
		sprintf(excep_log.error_msg, "get_address: Selecting address from JPN_INFO failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		free(*new_address);
		return SELECT_ERROR;
	}

#ifdef DEBUG
	userlog("get_address :  Seletced new address from JPN_INFO");
#endif

	*old_address = (ADDRESS_T*) malloc(sizeof(ADDRESS_T));

	if(*old_address == NULL)
	{
#ifdef DEBUG
		userlog("get_address : Allocation of memory for storing old address failed");
#endif
		strcpy(prog_log.remarks,"get_address : Allocation of memory for storing old address failed");
		strcpy(excep_log.error_msg, "get_address : Allocation of memory for storing old address failed");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		free(*new_address);
		return MALLOC_ERROR;
	}

	if (address1_ind != 0)
	{
		strcpy((*old_address)->address1 , "");
	}
	else
	{
		setnull(address1);
		strcpy((*old_address)->address1 , address1.arr);
	}

	if (address2_ind != 0)
	{
		strcpy((*old_address)->address2 , "");
	}
	else
	{	
		setnull(address2);
		strcpy((*old_address)->address2 , address2.arr);
	}

	if (address3_ind != 0)
	{
		strcpy((*old_address)->address3 , "");
	}
	else
	{
		setnull(address3);
		strcpy((*old_address)->address3 , address3.arr);
	}
	
	if (postalcode_ind != 0)
	{	
		strcpy((*old_address)->post_code , "");
	}
	else
	{
		setnull(postalcode);
		strcpy((*old_address)->post_code , postalcode.arr);
	}

	if (city_code_ind != 0)
	{
		(*old_address)->city_code = 0;
	}
	else
	{
		(*old_address)->city_code = city_code;
	}

	if (state_code_ind != 0)
	{
		strcpy((*old_address)->state_code , "");
	}
	else
	{					
		strcpy((*old_address)->state_code , state_code);
	}
 
#ifdef DEBUG
	userlog("get_address : OLD ADDRESS : ");
	userlog("get_address : old_address - %X", *old_address);
	userlog("get_address : Address1 - %s", (*old_address)->address1);
	userlog("get_address : Address2 - %s", (*old_address)->address2);
	userlog("get_address : Address3 - %s", (*old_address)->address3);
	userlog("get_address : Post code - %s", (*old_address)->post_code);
	userlog("get_address : City code - %d", (*old_address)->city_code);
	userlog("get_address : State code - %s", (*old_address)->state_code);
#endif

	/* Compare the addresses */

	if (strcmp((*old_address)->address1,(*new_address)->address1) != 0 ||
		strcmp((*old_address)->address2,(*new_address)->address2) != 0 ||
		strcmp((*old_address)->address3,(*new_address)->address3) != 0 ||
		strcmp((*old_address)->post_code,(*new_address)->post_code) != 0 ||
		((*old_address)->city_code != (*new_address)->city_code) ||
		strcmp((*old_address)->state_code,(*new_address)->state_code) != 0)
	{
#ifdef DEBUG	
		userlog("get_address : Address is not the same");
#endif
		/* Commented on 31/03/2001 as address to be sent as NULL if it is NULL */

/*		if (new_address1_ind != 0)
		{
			memset((*new_address)->address1, ' ' ,(ADDRESS_SIZE - 1));
			(*new_address)->address1[LEGACY_ADDRESS_SIZE - 1] = '\0';
		}

		if (new_address2_ind != 0)
		{
			memset((*new_address)->address2, ' ' ,(ADDRESS_SIZE - 1));
			(*new_address)->address2[LEGACY_ADDRESS_SIZE - 1] = '\0';
		}

		if (new_address3_ind != 0)
		{
			memset((*new_address)->address3, ' ' ,(ADDRESS_SIZE - 1));
			(*new_address)->address3[LEGACY_ADDRESS_SIZE - 1] = '\0';
		}
*/
		*address_flag = YES;

		return SUCCESS;
	}

#ifdef DEBUG
	userlog("get_address :  Addresses are the same");
#endif

	*address_flag = NO;
	
	return SUCCESS;

}

/*****************************************************************************************/
/* Function Name	: delete_legacy_req													 */
/* Description		: This function deletes any record from LEGACY_REQUEST for the given */
/*					  application id with request status other  than 'SENT'				 */
/* Input			: Appl id															 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/

int delete_legacy_req(char *application_id, int txn_srno, char req_flag, char chk_agency,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char appl_id[APP_ID_SIZE] = {0};
	char agency = 0;
	char service_id[PROG_ID_SIZE] = {0};
	int req_stat = 0;
	char check_agency = 0;
	int txn_sr_no = 0;
	char request_flag = 0;
	short request_flag_ind  = -1;
	int req_stat1 = 0;
	int req_stat2 = 0;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(appl_id, application_id);
	itoa(JPN_UPDATE_ID, service_id, 10);
	agency = chk_agency;
	
	/* Delete the request inserted by CREATE_APPLNT if any */

	request_flag = UNKNOWN ;
	request_flag_ind  = 0;

	/* EXEC SQL DELETE FROM IJPN_LEGACY_REQUEST 
		WHERE APPLID = :appl_id
		AND SERVICEID = :service_id
		AND CHECKAGENCY = :agency
		AND LEGREQFLAG = :request_flag:request_flag_ind; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "delete  from IJPN_LEGACY_REQUEST  where (((APPLID=:b0 and SE\
RVICEID=:b1) and CHECKAGENCY=:b2) and LEGREQFLAG=:b3:b4)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )453;
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
 sqlstm.sqhstv[1] = (         void  *)service_id;
 sqlstm.sqhstl[1] = (unsigned int  )9;
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
 sqlstm.sqhstv[3] = (         void  *)&request_flag;
 sqlstm.sqhstl[3] = (unsigned int  )1;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&request_flag_ind;
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
		userlog("delete_legacy_req : Deletion on IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"delete_legacy_req : Deletion on IJPN_LEGACY_REQUEST failed ");
		sprintf(excep_log.error_msg, "delete_legacy_req : Deletion on IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return DELETE_ERROR;
	}

	request_flag = req_flag ;
	request_flag_ind  = 0;
	req_stat1 = REQ_NOT_SENT;
	req_stat2 = REPLY_NOT_RECIEVED;

	/* EXEC SQL DELETE FROM IJPN_LEGACY_REQUEST 
		WHERE APPLID = :appl_id
		AND SERVICEID = :service_id
		AND CHECKAGENCY = :agency
		AND LEGREQFLAG = :request_flag:request_flag_ind
		AND LEGREQSTAT IN (:req_stat1, :req_stat2) ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "delete  from IJPN_LEGACY_REQUEST  where ((((APPLID=:b0 and S\
ERVICEID=:b1) and CHECKAGENCY=:b2) and LEGREQFLAG=:b3:b4) and LEGREQSTAT in (:\
b5,:b6))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )484;
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
 sqlstm.sqhstv[1] = (         void  *)service_id;
 sqlstm.sqhstl[1] = (unsigned int  )9;
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
 sqlstm.sqhstv[3] = (         void  *)&request_flag;
 sqlstm.sqhstl[3] = (unsigned int  )1;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&request_flag_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&req_stat1;
 sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&req_stat2;
 sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
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



	if(SQLCODE != 0 && !NO_DATA_FOUND)
	{
#ifdef DEBUG
		userlog("delete_legacy_req : Deletion on IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"delete_legacy_req : Deletion on IJPN_LEGACY_REQUEST failed ");
		sprintf(excep_log.error_msg, "delete_legacy_req : Deletion on IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return DELETE_ERROR;
	}

#ifdef DEBUG
	userlog("delete_legacy_req : Record deleted from IJPN_LEGACY_REQUEST - %d", SQLCODE);
#endif

	return SUCCESS;
}

/*****************************************************************************************/
/* Function Name	: insert_legacy_req													 */
/* Description		: This function inserts request into LEGACY_REQUEST for the given	 */
/*					  application id and transaction serial no with deafult request		 */
/*					  status as 'REQ_NOT_SENT'											 */
/* Input			: Appl id, Txn serial no, Agency, Pointer to the variable in which   */
/*                    message id is populated											 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/
int insert_legacy_req(int *msgid, JPN_UPDATE_REQ_T *req, char agency,int txn_srno, char req_flag,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	int msg_id = 0;
	char appl_id[APP_ID_SIZE]  = {0};
	/* varchar user_id[USER_ID_SIZE]  = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id
 = {0};

	char branch_code[BRANCH_CODE_SIZE]  = {0};
	int req_stat = 0;
	int req_stat1 = 0;
	char check_agency = 0;
	char service_id[PROG_ID_SIZE] = {0};
	int txn_sr_no = 0;
	char request_flag = 0;
	short request_flag_ind  = -1;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int rec_cnt = 0;
	int ret_code = 0;
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	

    /* Copy the parameters passed to the function in local variables */
	strcpy(appl_id, req->header.application_id);
	strcpy(user_id.arr, req->header.user_id);
	setlen(user_id);
	strcpy(branch_code, req->header.branch_code);
	req_stat = REPLY_RECEIVED;
	req_stat1 = REQ_SENT;
	check_agency = agency;
	itoa(JPN_UPDATE_ID, service_id, 10);
	txn_sr_no = txn_srno;

	if (req_flag != '\0')
	{
		request_flag = req_flag;
		request_flag_ind  = 0;
	}

#ifdef DEBUG
	userlog("insert_legacy_req : Appl id  - %s", appl_id);
	userlog("insert_legacy_req : Agency  - %c", agency );
	userlog("insert_legacy_req : Txn ser no  - %d", txn_srno );
	userlog("insert_legacy_req : Request flag  - %c", request_flag);
#endif
	

	/* Delete record from LEGACY_REQUEST table for the applid inserted by */
	/* CREATE_APPLNT service											  */

	if(SUCCESS != (ret_code = delete_legacy_req(req->header.application_id, txn_srno, req_flag, agency,ctx)))
	{
#ifdef DEBUG
		userlog("insert_legacy_req : delete_legacy_req() failed with %d", ret_code);
#endif
		return ret_code;

	}

	if (agency == AFIS_ID)
		req_stat = REQ_SENT;	/* As the request is already sent to AFIS */
	else
		req_stat = REQ_NOT_SENT;

	/* Select the Next value for the sequence MESSAGEID */	
	/* EXEC SQL SELECT MESSAGEID.NEXTVAL INTO :msg_id FROM DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select MESSAGEID.nextval  into :b0  from DUAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )523;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&msg_id;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
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
		*msgid = 0;
#ifdef DEBUG
		userlog("insert_legacy_req : Message id can not be selected from sequence : %s", SQLMSG); 
#endif
		strcpy(prog_log.remarks,"insert_legacy_req : Select message id from DUAL failed");
		sprintf(excep_log.error_msg,"insert_legacy_req : Select message id from DUAL failed  :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}


	/* Copy the value of the message id into the msgid which will be used while updating */

	*msgid = msg_id;

#ifdef DEBUG
	userlog("insert_legacy_req : Message id - %d", msg_id);
#endif

	/* EXEC SQL INSERT INTO IJPN_LEGACY_REQUEST	(LEGREQMSGID, APPLID, BRANCHCODE, 
									USERID, SERVICEID, LEGREQSTAT, LEGREQDATETIME, 
									CHECKAGENCY, TXNSERNO, LEGREQFLAG)
				VALUES (:msg_id, :appl_id, :branch_code, :user_id, :service_id,
				:req_stat, SYSDATE, :check_agency, :txn_sr_no, :request_flag:request_flag_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into IJPN_LEGACY_REQUEST (LEGREQMSGID,APPLID,BRANCHCO\
DE,USERID,SERVICEID,LEGREQSTAT,LEGREQDATETIME,CHECKAGENCY,TXNSERNO,LEGREQFLAG)\
 values (:b0,:b1,:b2,:b3,:b4,:b5,SYSDATE,:b6,:b7,:b8:b9)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )542;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&msg_id;
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
 sqlstm.sqhstv[2] = (         void  *)branch_code;
 sqlstm.sqhstl[2] = (unsigned int  )7;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&user_id;
 sqlstm.sqhstl[3] = (unsigned int  )11;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)service_id;
 sqlstm.sqhstl[4] = (unsigned int  )9;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&req_stat;
 sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&check_agency;
 sqlstm.sqhstl[6] = (unsigned int  )1;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&txn_sr_no;
 sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&request_flag;
 sqlstm.sqhstl[8] = (unsigned int  )1;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&request_flag_ind;
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



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("insert_legacy_req : Insert into IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"insert_legacy_req : Insert into IJPN_LEGACY_REQUEST failed ");
		sprintf(excep_log.error_msg, "insert_legacy_req : Insert into IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return INSERT_ERROR;
	}
#ifdef DEBUG
	userlog("insert_legacy_req : Record inserted into IJPN_LEGACY_REQUEST");
#endif

	/* Commit the insertion into LEGACY_REQUEST */

	if(SUCCESS != (ret_code = gscbcommit_trans(ctx)))
	{
		userlog("insert_legacy_req : Commit transaction failed!!");

		return END_TRAN_ERROR;
	}
	

	return SUCCESS;
}


/*****************************************************************************************/
/* Function Name	: upd_appnt_demo_info												 */
/* Description		: This function updates the JPN legacy system with data of the		 */
/*				      applicant's demographics 											 */
/* Input			: Request buffer of the service, Oracle message id, Txn ser no		 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/
int upd_appnt_demo_info(JPN_UPDATE_REQ_T *req, int msgid, 
						char first_time_ind, TXN_INFO_T *txn_details, 
						int *request_status, int *req_msg_id
						, char *pTxnCode,       //pTxnCode added by Amarjith on 7th Sept '04. JRS 147. //Commented GSCB Upgrade- 10th March 2005.
						LI_P_HEADER_T hdr,void * ctx)//LI_P_HEADER_T hdr added by kasi on 11/08/06 to remove global scope.	
{
	struct sqlca sqlca = {0}; // added on 01/03/06

	typedef struct
	{
	 int len;
	 unsigned char arr[LOW_RES_PHOTO_SIZE];
	} lowres;

	/* EXEC SQL TYPE lowres IS LONG varraw(LOW_RES_PHOTO_SIZE); */ 

/* commented for IJPN
	typedef struct
	{
	 int len;
	 unsigned char arr[HIGH_RES_PHOTO_SIZE];
	} highres;

	EXEC SQL TYPE highres IS LONG varraw(HIGH_RES_PHOTO_SIZE);
*/
	typedef struct
	{
	 int len;
	 unsigned char arr[MINUTIAE_SIZE];
	} lforg;

	/* EXEC SQL TYPE lforg IS LONG varraw(MINUTIAE_SIZE); */ 


	typedef struct
	{
	 int len;
	 unsigned char arr[MINUTIAE_SIZE];
	} lfnorm;

	/* EXEC SQL TYPE lfnorm IS LONG varraw(MINUTIAE_SIZE); */ 

/*
	typedef struct
	{
	 int len;
	 unsigned char arr[FINGERPRINT_SIZE];
	} lfimg;

	EXEC SQL TYPE lfimg IS LONG varraw(FINGERPRINT_SIZE);

	typedef struct
	{
	 int len;
	 unsigned char arr[FINGERPRINT_SIZE];
	} lfmatrix;

	EXEC SQL TYPE lfmatrix IS LONG varraw(FINGERPRINT_SIZE);
*/
	typedef struct
	{
	 int len;
	 unsigned char arr[MINUTIAE_SIZE];
	} rforg;

	/* EXEC SQL TYPE rforg IS LONG varraw(MINUTIAE_SIZE); */ 


	typedef struct
	{
	 int len;
	 unsigned char arr[MINUTIAE_SIZE];
	} rfnorm;

	/* EXEC SQL TYPE rfnorm IS LONG varraw(MINUTIAE_SIZE); */ 

/*
	typedef struct
	{
	 int len;
	 unsigned char arr[FINGERPRINT_SIZE];
	} rfimg;

	EXEC SQL TYPE rfimg IS LONG varraw(FINGERPRINT_SIZE);

	typedef struct
	{
	 int len;
	 unsigned char arr[FINGERPRINT_SIZE];
	} rfmatrix;

	EXEC SQL TYPE rfmatrix IS LONG varraw(FINGERPRINT_SIZE);
*/

/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char appl_id[APP_ID_SIZE];
	char read_ind = '\0';
	char kptno[KPT_SIZE] = {"\0"};
	short kptno_ind = -1;
	char kppno[KPP_SIZE] = {"\0"};
	short kppno_ind = -1;
	char identitytype[ID_TYPE_SIZE] = {"\0"};
	short identitytype_ind = -1;
	/* varchar identityno[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } identityno
 = {0};

	short identityno_ind = -1;

	/* varchar origname[LONG_NAME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[151]; } origname
 = {0};

	short origname_ind = -1;
	/* varchar currlongname[LONG_NAME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[151]; } currlongname
 = {0};

	short currlongname_ind = -1;
	/* varchar sirenshortname1[SIREN_SHORT_NAME] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } sirenshortname1
 = {0};

	short sirenshortname1_ind = -1;
	/* varchar sirenshortname2[SIREN_SHORT_NAME] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } sirenshortname2
 = {0};

	short sirenshortname2_ind = -1;
	/* varchar gmpcshortname1[GMPC_SNAME1_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } gmpcshortname1
 = {0};

	short gmpcshortname1_ind = -1;
	/* varchar gmpcshortname2[GMPC_SNAME2_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } gmpcshortname2
 = {0};

	short gmpcshortname2_ind = -1;
	/* varchar gmpcshortname3[GMPC_SNAME3_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } gmpcshortname3
 = {0};

	short gmpcshortname3_ind = -1;

	char birthdate[DATE_SIZE] = {"\0"};
	short birthdate_ind = -1;
	//varchar birthplace[PLACE_CODE_SIZE] = {0};
	//short birthplace_ind = -1;
	char gender = '\0';
	short gender_ind = -1;
	char religioncode = '\0';
	short religioncode_ind = -1;
	char racecode[RACE_CODE_SIZE] = {0};
	short racecode_ind = -1;
	char hkcode = '\0';
	short hkcode_ind = -1;

	/* varchar remarks[REMARK_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[61]; } remarks
 = {0};

	short remarks_ind = -1;
	int card_version = 0;
	short card_version_ind = -1;
	char restrictedresicode[KT_CODE_SIZE] = {0};
	short restrictedresicode_ind = -1;
	char iccolorcode = '\0';
	short iccolorcode_ind = -1;
	char unknown_birth = '\0';
	short unknown_birth_ind = -1;
	char art_color_code[ARTICLE_COLOR_CODE_SIZE] = {0};
	short art_color_code_ind = -1;
	char retire_date[DATE_SIZE] = {0};
	short retire_date_ind = -1;
	char pol_army_join_date[DATE_SIZE] = {0};
	short pol_army_join_date_ind = -1;
	char orig_name_indicator = '\0';
	short orig_name_indicator_ind = -1;
	char appl_approval_date[DATE_SIZE] = {0};
	short appl_approval_date_ind = -1;
	char green_card_exp_date[DATE_SIZE] = {0};
	short green_card_exp_date_ind = -1;
	char person_status = '\0';
	short person_status_ind = -1;
	char citizen_nation_code[COUNTRY_CODE_SIZE] = {0};
	short citizen_nation_code_ind = -1;
	/* added on 24/09/2002 by shiva.p,requirement from vasanth */
	/* varchar name_appr_ref_num[APPROV_DOC_NO_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[41]; } name_appr_ref_num
 = {0};

	short name_appr_ref_num_ind =-1;
	char name_chg_reason_code[NAME_CHG_CODE]={0};
	short name_chg_reason_code_ind =-1;
	char name_reg_date[DATE_SIZE]={0};
	short name_reg_date_ind = -1;
	/* varchar imm_ref_number[IMM_REFER_NO_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[31]; } imm_ref_number
 = {0};

	short imm_ref_number_ind = -1;
	char imm_ref_date[DATE_SIZE]={"\0"};
	short imm_ref_date_ind = -1;
	char imm_expire_date[DATE_SIZE]={"\0"};
	short imm_expire_date_ind =-1;
	/* varchar passport_no[PASSPORT_NO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } passport_no
 = {0};

	short passport_no_ind =-1;
	char passport_issue_date[DATE_SIZE]={0};
	short passport_issue_date_ind =-1;
	char passport_issue_country[COUNTRY_CODE_SIZE]={0};
	short passport_issue_country_ind =-1;
			
	//char license_idno[ID_SIZE] = {0};
	//short license_idno_ind = -1;
	
	char finger_acq_src = '\0';
	short finger_acq_src_ind = -1;
	int quality_stat = 0;
	short quality_stat_ind = -1;
	/* varchar lf_ind[FINGER_IND_SIZE]= {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } lf_ind
 = {0};

	short lf_ind_ind = -1;
	int lfquality = 0;
	short lfquality_ind = -1;
	/* varchar rf_ind[FINGER_IND_SIZE]= {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } rf_ind
 = {0};

	short rf_ind_ind = -1;
	int rfquality = 0;
	short rfquality_ind = -1;
	char lf_thstat = '\0';
	short lf_thstat_ind;
	int lf_pattern = 0;
	short lf_pattern_ind = -1;
	char rf_thstat = '\0';
	short rf_thstat_ind = -1;
	int rf_pattern = 0;
	short rf_pattern_ind = -1;
	char sysdate[DATE_SIZE]= {0};

	lowres lowres_buf;
	short lowres_buf_ind = -1;
	//highres highres_buf;
	//short highres_buf_ind= -1;
	lforg lforg_buf;
	short lforg_buf_ind= -1;
	lfnorm lfnorm_buf;
	short lfnorm_buf_ind= -1;
	//lfimg lfimg_buf;
	//short lfimg_buf_ind= -1;
	//lfmatrix lfmatrix_buf;
	//short lfmatrix_buf_ind= -1;
	rforg rforg_buf;
	short rforg_buf_ind= -1;
	rfnorm rfnorm_buf;
	short rfnorm_buf_ind= -1;
	//rfimg rfimg_buf;
	//short rfimg_buf_ind= -1;
	//rfmatrix rfmatrix_buf;
	//short rfmatrix_buf_ind= -1;

	char  afis_flag = '\0';
	short afis_flag_ind = -1;
	char  jkind = '\0';
	short jkind_ind = -1;
	char  resi_status = '\0';
	short resi_status_ind = -1;
	char  juvenile_flag = '\0';
	short juvenile_flag_ind = -1;
	char  updateprintsind = '\0';
	short updateprintsind_ind= -1;
	int   lost_count = 0;
	int   cardstat=0;
	short lost_count_ind = -1;


	char paymode[PAY_MODE_SIZE] = {0};
	short paymode_ind= -1;
	char revenue_code[AGENCY_SIZE]= {0};
	short revenue_code_ind = -1;
	char amt_value[AMT_SIZE]= {0};
	short amt_value_ind = -1;
	int pay_cnt = 0;
	char leg_date[DATE_TIME_SIZE]= {0};
	short leg_date_ind = -1;
	int txn_srno = 0;
	char agency = '\0';
	char addr_flag = '\0';
	int req_stat1 = 0;
	int req_stat2 = 0;
	char photo_cature_flag = '\0';   /* Added on 04/04/2002 requirement from vasanth changed by shiva.p */
//Commented for GSCB upgrade- 10th March 2005
//Added by Amarjith on 7th Sept 04. JRS 147.
	char szTxnCode[TRANSACTION_CODE_SIZE] = {0}; 
	char szPermitNo[PERMIT_NO_SIZE + 1] = {0};
	char szPermitDate[DATE_SIZE] = {0};
	char szCitizenNationCode[IMM_CITIZENSHIP_SIZE + 1] = {0};
	char szOriginCountryCode[IMM_CITIZENSHIP_SIZE] = {0};	
	int	 nEntryPermitType = 0;
	int  nDocTypeCode = 0;

	short ind_PermitNo = -1;
	short ind_PermitDate = -1;
	short ind_EntryPermitType = -1;
	short ind_DocTypeCode = -1;
	short ind_CitizenNationCode = -1;
	short ind_OriginCountryCode = -1;

//JRS 147.
//10th March 2005

		/* start IJPN */
	char legapplid[25] = {0};
	/* varchar sponsoridno[16] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } sponsoridno
 = {0};

	char sponsoridtype[3] = {0};
	char relationcode[3] = {0};
	char clocation[7] = {0};
	short clocation_ind = -1;
	char colllocation[9] = {0};
	char colldate[DATE_SIZE] = {0};

	short legapplid_ind = -1;
	short sponsoridno_ind = -1;
	short sponsoridtype_ind = -1;
	short relationcode_ind = -1;
	short colllocation_ind = -1;
	short colldate_ind = -1;
	
	char  ktstartdate[DATE_SIZE] = {0};
	char  ktenddate[DATE_SIZE] = {0};
	char  rjind[3] = {0};
	char  rjstartdate[DATE_SIZE] = {0};
	char  rjenddate[DATE_SIZE] = {0};

	short ktstartdate_ind = -1;
	short ktenddate_ind = -1;
	short rjind_ind = -1;
	short rjstartdate_ind = -1;
	short rjenddate_ind = -1;

	float processing_fee = 0;      //AMTPF
	float calculated_comp_fee = 0; //
	float special_fee = 0;         //AMTAF
	float paid_fee = 0;            //PAYMENT_INFO.PAYABLEAMT
	float additional_fee = 0;      //
	float renewal_comp_fee = 0;    //AMTKH
	float renewal_18_comp_fee = 0; //AMTPR
	float lost_comp_fee = 0;       //AMTHG
	float card_exp_comp_fee = 0;   //AMTKL
	float damaged_comp_fee = 0;    //AMTRK
	float miscl_fee = 0;    //AMT miscllenious fee
	float extra_fee = 0;    //AMT extra fee
	float pf,af,ff,cf,uf,mf,ef = 0;

	short processing_fee_ind = -1;
	short calculated_comp_fee_ind = -1;
	short special_fee_ind = -1;
	short paid_fee_ind = -1;
	short additional_fee_ind = -1;
	short renewal_comp_fee_ind = -1;
	short renewal_18_comp_fee_ind = -1;
	short lost_comp_fee_ind = -1;
	short card_exp_comp_fee_ind = -1;
	short damaged_comp_fee_ind = -1;
	short miscl_fee_ind = -1;
	short extra_fee_ind = -1;


	char  priority = '\0';
	short priority_ind = -1;
	char  txncode = '\0'; // to select indicator2 value from APPLICATION
	short txncode_ind = -1;
	char  agency_on_chip[8] = {0}; // to select indicator1 value from CARD_STATUS
	short agency_on_chip_ind = -1;
	char  legtxncode[5] = {0};
	short legtxncode_ind = -1;
	char  appl_type[3] = {0};
	/* varchar  docserno[16] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } docserno
 = {0};

	short docserno_ind = -1;
	char  appl_status='\0';
	short appl_status_ind = -1;
	char  applstat2 = '\0';
	short applstat2_ind = -1;

	char  jpnstat[3]= {0};
	short jpnstat_ind = -1;
	int	  cardstat1=0;
	short cardstat1_ind = -1;
	char  lgmpcstat[4] = {0};	
	int   status_copied=0;


	char  la_feetype[3]={"\0"};
	char  lo_feetype[3]={"\0"};
	float la_feeamt=0;
	float lo_feeamt=0;
	int    i=0, j = 0;
	int   ocnt = -1,freduction = -1;
	char  pmode[3] = {"\0"};
	int ret = 0;
	/* varchar reason_desc[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } reason_desc
 = {0};

	short reason_desc_ind = -1;
	/* varchar reject_code[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } reject_code
 = {0};

	short reject_code_ind = -1;
	/* varchar birth_dist_code[5] = {0}; */ 
struct { unsigned short len; unsigned char arr[5]; } birth_dist_code
 = {0};

	short birth_dist_code_ind = -1;
	char bdcode[5] = {0};
	int emsglen=0;

	char branch_code[7] = {0};
	int  lfee=0;
	char temp_fee[10]={0};
	char  appldate[DATE_SIZE] = {0};
	short appldate_ind = -1;

	char  ctxncode[4];
	char  temp_txncode[11];
	int   icnt=0;

	char  a_branch_code[BRANCH_CODE_SIZE];
	short a_branch_code_ind = -1;
	char  appl_branch_code[BRANCH_CODE_SIZE+2];
	short appl_branch_code_ind = -1;
	char  telephone_no[15]={0};
	short telephone_no_ind = -1;

	/* varchar remarks1[121] = {0}; */ 
struct { unsigned short len; unsigned char arr[121]; } remarks1
 = {0};

	short remarks1_ind = -1;

	int k=0,sflag=0;

	char hsccode = '\0';
	short hsccode_ind = -1;
	char invserviceflag = '\0';
	short invserviceflag_ind = -1;
	char pval[11] = {"\0"};
	int  sdate = -1;

	char  tstamp[DATE_SIZE] = {0};
	/* varchar user_id[USER_ID_SIZE]  = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id
 = {0};


	int ncount = 0;
	int lxqcount = 0;	
	
	/* end IJPN */

	// CR 278
	char branchind[6] = {0};
	// CR 278

	// CR 283
	/* varchar lidno[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } lidno
 = {0};

	short   lidno_ind = -1;
	int  ltxncnt = 0;
	// CR 283

	// CR 284
	char ltxncode[3+1] = {0};
	char llclass[2+1] = {0};
	int  llneg = 0;
	int  llcrime = 0;
	int  lldis = 0;
	int  lclcnt = 0;
	// CR 284

	// CR 282 
	char ktareacode[6+1] = {0};
	short ktareacode_ind = -1;
	char apjareacode[8+1] = {0};
	short apjareacode_ind = -1;
	char ktindcode[2+1] = {0};
	short ktindcode_ind = -1;
	// CR 282

	// CR 293
	char Hg3PaymentFlag = '\0';



	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	LI_JPN_UPDATE_REQ_T jpn_upd ;	
	LI_PUT_FIN_DATA_T jpn_fin_data ;	
	ADDRESS_T *old_address = NULL;
	ADDRESS_T *new_address = NULL;

	unsigned char pReplyMsg[LI_REPLY_MSG_SIZE];
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE];

	#ifdef DEBUG
		FIN_DATA_T *jpn_fin_temp = NULL;
	#endif

	char address_flag = NO;
	int ret_code=0;
	//int i = 0;
	//int reqstat;
	char reqflag = '\0';
	char imageremark[PROB_REMARK_SIZE] = {0};
	unsigned char leg_msg_id[MSG_ID_SIZE] = {0};
	char leg_msgid[MSG_ID_SIZE] = {"\0"};
	int error_code = 0;
	int id_type = 0;
	int count = 0;
	char appl_stat = '\0';
	char leg_header_date[DATE_TIME_SIZE] = {"\0"};
	char appl_ws_id[WS_ID_SIZE] = {"\0"};
	char appl_user_id[USER_ID_SIZE] = {"\0"};
	int req_status = -5;

	//Compress Photo

	int pret = 0;
	BYTE *pnew_buff;
	int plen;
	//int nQuality = 100;

	//Compress Photo
	char user_remark[201] = {0};
	char user_kptno[KPT_SIZE] = {0};
	int apprv_count = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	
	memset(&jpn_upd,'\0',sizeof(LI_JPN_UPDATE_REQ_T));
	memset(&jpn_fin_data,'\0',sizeof(LI_PUT_FIN_DATA_T));

	/* Initialise all the raw buufers types to null and set there lengths to 0 */
	memset(lowres_buf.arr, '\0', LOW_RES_PHOTO_SIZE);
	lowres_buf.len = 0;
	//memset(highres_buf.arr, '\0', HIGH_RES_PHOTO_SIZE);
	//highres_buf.len = 0;

	memset(lforg_buf.arr, '\0', MINUTIAE_SIZE);
	lforg_buf.len = 0;
	memset(lfnorm_buf.arr, '\0', MINUTIAE_SIZE);
	lfnorm_buf.len = 0;
	//memset(lfimg_buf.arr, '\0', FINGERPRINT_SIZE);
	//lfimg_buf.len = 0;
	//memset(lfmatrix_buf.arr, '\0', FINGERPRINT_SIZE);
	//lfmatrix_buf.len = 0;

	memset(rforg_buf.arr, '\0', MINUTIAE_SIZE);
	rforg_buf.len = 0;
	memset(rfnorm_buf.arr, '\0', MINUTIAE_SIZE);
	rfnorm_buf.len = 0;
	//memset(rfimg_buf.arr, '\0', FINGERPRINT_SIZE);
	//rfimg_buf.len = 0;
	//memset(rfmatrix_buf.arr, '\0', FINGERPRINT_SIZE);
	//rfmatrix_buf.len = 0;

	/* Populate the host variables */

	strcpy(appl_id, req->header.application_id);

	strcpy(szTxnCode, pTxnCode);	//Copy the TXNCODE here.//Commented GSCB upgrade- 10th March 2005
	
#ifdef DEBUG
	userlog("upd_appnt_demo_info : Appl id - %s", appl_id);
	userlog("upd_appnt_demo_info : First time ind - %c", first_time_ind);
#endif

	for(i=0;i<31;i++)
		imm_ref_number.arr[i] = '\0';

	for(i=0;i<16;i++)
		passport_no.arr[i] = '\0';
	
	/* EXEC SQL SELECT KPTNO, KPPNO, IDTYPE, IDNO, ORIGNAME,
					CURRLONGNAME, CURRSHORTNAME1, CURRSHORTNAME2, 
					GMPCSHORTNAME1, GMPCSHORTNAME2, GMPCSHORTNAME3,
					//BIRTHPLACE, for IJPN
					GENDER, RELIGIONCODE, RACECODE, 
					HKIND, KTINDCODE, //RESTRICRESIDCODE, 
					RESIDENTSTAT, 
					//HSCCOLORCODE,  // interchanged this value selection on 17/10/2006 
					APPNTREMARKS, 
					TO_CHAR(RETIREMENTDATE, 'DDMMYYYY'), 
					TO_CHAR(POLMILITARYJOINDATE, 'DDMMYYYY'),
					ORIGNAMEIND, TO_CHAR(APPLAPPROVALDATE, 'DDMMYYYY'), 
					TO_CHAR(GREENCARDEXPDATE, 'DDMMYYYY'),
					PERSONSTATCODE, CITIZENNATIONCODE,
					IMMREFNO,PASSPORTNO,PASSPORTISSUECOUNTRY,
					TO_CHAR(IMMREFDATE, 'DDMMYYYY'),
					TO_CHAR(IMMEXPDATE, 'DDMMYYYY'),
					TO_CHAR(PASSPORTISSUEDDATE, 'DDMMYYYY'), 
					PERMITNO, TO_CHAR(PERMITISSUEDATE, 'DDMMYYYY'), //JRS 147
					PERMITTYPE, PRDOCTYPE,
					TO_CHAR(KTSTARTDATE,'DDMMYYYY'), TO_CHAR(KTENDDATE,'DDMMYYYY'),
					RJIND, TO_CHAR(RJSTARTDATE,'DDMMYYYY'), 
					TO_CHAR(RJENDDATE,'DDMMYYYY'),   // this line added for IJPN on 10th may 2005
					AFISBYPASS,JKIND,
					HSCCOLORCODE,     // This column included on 11/07/2008 to send field id 4457 to 201050 message.
					INVSERVICEFLAG,    // Added this on 09/07/2010 for Release 3.18 CR 211
					KTAREACODE, APJAREACODE
			 INTO   :kptno:kptno_ind,:kppno:kppno_ind,
					:identitytype:identitytype_ind,
					:identityno:identityno_ind,
					:origname:origname_ind,
					:currlongname:currlongname_ind,
					:sirenshortname1:sirenshortname1_ind,
					:sirenshortname2:sirenshortname2_ind,
					:gmpcshortname1:gmpcshortname1_ind,
					:gmpcshortname2:gmpcshortname2_ind,
					:gmpcshortname3:gmpcshortname3_ind,
					//:birthplace:birthplace_ind, for IJPN
					:gender:gender_ind,
					:religioncode:religioncode_ind,
					:racecode:racecode_ind,
					:hkcode:hkcode_ind,
					//:restrictedresicode:restrictedresicode_ind,
					:ktindcode:ktindcode_ind,
					:iccolorcode:iccolorcode_ind,:remarks:remarks_ind,
					:retire_date:retire_date_ind, :pol_army_join_date:pol_army_join_date_ind,
					:orig_name_indicator:orig_name_indicator_ind,
					:appl_approval_date:appl_approval_date_ind,
					:green_card_exp_date:green_card_exp_date_ind,
					:person_status:person_status_ind,
					:citizen_nation_code:citizen_nation_code_ind,
					:imm_ref_number:imm_ref_number_ind,
					:passport_no:passport_no_ind,
					:passport_issue_country:passport_issue_country_ind,
					:imm_ref_date:imm_ref_date_ind,
					:imm_expire_date:imm_expire_date_ind,
					:passport_issue_date:passport_issue_date_ind,
					:szPermitNo:ind_PermitNo, :szPermitDate:ind_PermitDate, 
					:nEntryPermitType:ind_EntryPermitType, :nDocTypeCode:ind_DocTypeCode, 					
					:ktstartdate:ktstartdate_ind,:ktenddate:ktenddate_ind,
					:rjind:rjind_ind,rjstartdate:rjstartdate_ind,
					:rjenddate:rjenddate_ind,
					:afis_flag:afis_flag_ind,
					:jkind:jkind_ind,
					:hsccode:hsccode_ind,
					:invserviceflag:invserviceflag_ind,
					:ktareacode:ktareacode_ind,:apjareacode:apjareacode_ind
			FROM APPNT_JPN_INFO
			WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft(&pcCtx,
   "select KPTNO ,KPPNO ,IDTYPE ,IDNO ,ORIGNAME ,CURRLONGNAME ,CURRSHORTNAME\
1 ,CURRSHORTNAME2 ,GMPCSHORTNAME1 ,GMPCSHORTNAME2 ,GMPCSHORTNAME3 ,GENDER ,R\
ELIGIONCODE ,RACECODE ,HKIND ,KTINDCODE ,RESIDENTSTAT ,APPNTREMARKS ,TO_CHAR\
(RETIREMENTDATE,'DDMMYYYY') ,TO_CHAR(POLMILITARYJOINDATE,'DDMMYYYY') ,ORIGNA\
MEIND ,TO_CHAR(APPLAPPROVALDATE,'DDMMYYYY') ,TO_CHAR(GREENCARDEXPDATE,'DDMMY\
YYY') ,PERSONSTATCODE ,CITIZENNATIONCODE ,IMMREFNO ,PASSPORTNO ,PASSPORTISSU\
ECOUNTRY ,TO_CHAR(IMMREFDATE,'DDMMYYYY') ,TO_CHAR(IMMEXPDATE,'DDMMYYYY') ,TO\
_CHAR(PASSPORTISSUEDDATE,'DDMMYYYY') ,PERMITNO ,TO_CHAR(PERMITISSUEDATE,'DDM\
MYYYY') ,PERMITTYPE ,PRDOCTYPE ,TO_CHAR(KTSTARTDATE,'DDMMYYYY') ,TO_CHAR(KTE\
NDDATE,'DDMMYYYY') ,RJIND ,TO_CHAR(RJSTARTDATE,'DDMMYYYY') ,TO_CHAR(RJENDDAT\
E,'DDMMYYYY') ,AFISBYPASS ,JKIND ,HSCCOLORCODE ,INVSERVICEFLAG ,KTAREACODE ,\
APJAREACODE into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11,:b12:b13,:b14:b\
15,:b16:b17,:b18:b19,:b20:b21,:b22:b23,:b24:b25,:b26:b27,:b28:b29,:b30:b31,:\
b32:b33,:b34:b35,:b36:b37,:b38:b39,:b40:");
 sqlstm.stmt = "b41,:b42:b43,:b44:b45,:b46:b47,:b48:b49,:b50:b51,:b52:b53,:b\
54:b55,:b56:b57,:b58:b59,:b60:b61,:b62:b63,:b64:b65,:b66:b67,:b68:b69,:b70:b71\
,:b72:b73,:b74:b75,:b76:b77,:b78:b79,:b80:b81,:b82:b83,:b84:b85,:b86:b87,:b88:\
b89,:b90:b91  from APPNT_JPN_INFO where APPLID=:b92";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )593;
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
 sqlstm.sqhstv[1] = (         void  *)kppno;
 sqlstm.sqhstl[1] = (unsigned int  )9;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&kppno_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)identitytype;
 sqlstm.sqhstl[2] = (unsigned int  )3;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&identitytype_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&identityno;
 sqlstm.sqhstl[3] = (unsigned int  )18;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&identityno_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&origname;
 sqlstm.sqhstl[4] = (unsigned int  )153;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&origname_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&currlongname;
 sqlstm.sqhstl[5] = (unsigned int  )153;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&currlongname_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&sirenshortname1;
 sqlstm.sqhstl[6] = (unsigned int  )23;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&sirenshortname1_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&sirenshortname2;
 sqlstm.sqhstl[7] = (unsigned int  )23;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&sirenshortname2_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&gmpcshortname1;
 sqlstm.sqhstl[8] = (unsigned int  )33;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&gmpcshortname1_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&gmpcshortname2;
 sqlstm.sqhstl[9] = (unsigned int  )33;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&gmpcshortname2_ind;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&gmpcshortname3;
 sqlstm.sqhstl[10] = (unsigned int  )23;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)&gmpcshortname3_ind;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&gender;
 sqlstm.sqhstl[11] = (unsigned int  )1;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)&gender_ind;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&religioncode;
 sqlstm.sqhstl[12] = (unsigned int  )1;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)&religioncode_ind;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)racecode;
 sqlstm.sqhstl[13] = (unsigned int  )5;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)&racecode_ind;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
 sqlstm.sqhstv[14] = (         void  *)&hkcode;
 sqlstm.sqhstl[14] = (unsigned int  )1;
 sqlstm.sqhsts[14] = (         int  )0;
 sqlstm.sqindv[14] = (         void  *)&hkcode_ind;
 sqlstm.sqinds[14] = (         int  )0;
 sqlstm.sqharm[14] = (unsigned int  )0;
 sqlstm.sqadto[14] = (unsigned short )0;
 sqlstm.sqtdso[14] = (unsigned short )0;
 sqlstm.sqhstv[15] = (         void  *)ktindcode;
 sqlstm.sqhstl[15] = (unsigned int  )3;
 sqlstm.sqhsts[15] = (         int  )0;
 sqlstm.sqindv[15] = (         void  *)&ktindcode_ind;
 sqlstm.sqinds[15] = (         int  )0;
 sqlstm.sqharm[15] = (unsigned int  )0;
 sqlstm.sqadto[15] = (unsigned short )0;
 sqlstm.sqtdso[15] = (unsigned short )0;
 sqlstm.sqhstv[16] = (         void  *)&iccolorcode;
 sqlstm.sqhstl[16] = (unsigned int  )1;
 sqlstm.sqhsts[16] = (         int  )0;
 sqlstm.sqindv[16] = (         void  *)&iccolorcode_ind;
 sqlstm.sqinds[16] = (         int  )0;
 sqlstm.sqharm[16] = (unsigned int  )0;
 sqlstm.sqadto[16] = (unsigned short )0;
 sqlstm.sqtdso[16] = (unsigned short )0;
 sqlstm.sqhstv[17] = (         void  *)&remarks;
 sqlstm.sqhstl[17] = (unsigned int  )63;
 sqlstm.sqhsts[17] = (         int  )0;
 sqlstm.sqindv[17] = (         void  *)&remarks_ind;
 sqlstm.sqinds[17] = (         int  )0;
 sqlstm.sqharm[17] = (unsigned int  )0;
 sqlstm.sqadto[17] = (unsigned short )0;
 sqlstm.sqtdso[17] = (unsigned short )0;
 sqlstm.sqhstv[18] = (         void  *)retire_date;
 sqlstm.sqhstl[18] = (unsigned int  )9;
 sqlstm.sqhsts[18] = (         int  )0;
 sqlstm.sqindv[18] = (         void  *)&retire_date_ind;
 sqlstm.sqinds[18] = (         int  )0;
 sqlstm.sqharm[18] = (unsigned int  )0;
 sqlstm.sqadto[18] = (unsigned short )0;
 sqlstm.sqtdso[18] = (unsigned short )0;
 sqlstm.sqhstv[19] = (         void  *)pol_army_join_date;
 sqlstm.sqhstl[19] = (unsigned int  )9;
 sqlstm.sqhsts[19] = (         int  )0;
 sqlstm.sqindv[19] = (         void  *)&pol_army_join_date_ind;
 sqlstm.sqinds[19] = (         int  )0;
 sqlstm.sqharm[19] = (unsigned int  )0;
 sqlstm.sqadto[19] = (unsigned short )0;
 sqlstm.sqtdso[19] = (unsigned short )0;
 sqlstm.sqhstv[20] = (         void  *)&orig_name_indicator;
 sqlstm.sqhstl[20] = (unsigned int  )1;
 sqlstm.sqhsts[20] = (         int  )0;
 sqlstm.sqindv[20] = (         void  *)&orig_name_indicator_ind;
 sqlstm.sqinds[20] = (         int  )0;
 sqlstm.sqharm[20] = (unsigned int  )0;
 sqlstm.sqadto[20] = (unsigned short )0;
 sqlstm.sqtdso[20] = (unsigned short )0;
 sqlstm.sqhstv[21] = (         void  *)appl_approval_date;
 sqlstm.sqhstl[21] = (unsigned int  )9;
 sqlstm.sqhsts[21] = (         int  )0;
 sqlstm.sqindv[21] = (         void  *)&appl_approval_date_ind;
 sqlstm.sqinds[21] = (         int  )0;
 sqlstm.sqharm[21] = (unsigned int  )0;
 sqlstm.sqadto[21] = (unsigned short )0;
 sqlstm.sqtdso[21] = (unsigned short )0;
 sqlstm.sqhstv[22] = (         void  *)green_card_exp_date;
 sqlstm.sqhstl[22] = (unsigned int  )9;
 sqlstm.sqhsts[22] = (         int  )0;
 sqlstm.sqindv[22] = (         void  *)&green_card_exp_date_ind;
 sqlstm.sqinds[22] = (         int  )0;
 sqlstm.sqharm[22] = (unsigned int  )0;
 sqlstm.sqadto[22] = (unsigned short )0;
 sqlstm.sqtdso[22] = (unsigned short )0;
 sqlstm.sqhstv[23] = (         void  *)&person_status;
 sqlstm.sqhstl[23] = (unsigned int  )1;
 sqlstm.sqhsts[23] = (         int  )0;
 sqlstm.sqindv[23] = (         void  *)&person_status_ind;
 sqlstm.sqinds[23] = (         int  )0;
 sqlstm.sqharm[23] = (unsigned int  )0;
 sqlstm.sqadto[23] = (unsigned short )0;
 sqlstm.sqtdso[23] = (unsigned short )0;
 sqlstm.sqhstv[24] = (         void  *)citizen_nation_code;
 sqlstm.sqhstl[24] = (unsigned int  )5;
 sqlstm.sqhsts[24] = (         int  )0;
 sqlstm.sqindv[24] = (         void  *)&citizen_nation_code_ind;
 sqlstm.sqinds[24] = (         int  )0;
 sqlstm.sqharm[24] = (unsigned int  )0;
 sqlstm.sqadto[24] = (unsigned short )0;
 sqlstm.sqtdso[24] = (unsigned short )0;
 sqlstm.sqhstv[25] = (         void  *)&imm_ref_number;
 sqlstm.sqhstl[25] = (unsigned int  )33;
 sqlstm.sqhsts[25] = (         int  )0;
 sqlstm.sqindv[25] = (         void  *)&imm_ref_number_ind;
 sqlstm.sqinds[25] = (         int  )0;
 sqlstm.sqharm[25] = (unsigned int  )0;
 sqlstm.sqadto[25] = (unsigned short )0;
 sqlstm.sqtdso[25] = (unsigned short )0;
 sqlstm.sqhstv[26] = (         void  *)&passport_no;
 sqlstm.sqhstl[26] = (unsigned int  )18;
 sqlstm.sqhsts[26] = (         int  )0;
 sqlstm.sqindv[26] = (         void  *)&passport_no_ind;
 sqlstm.sqinds[26] = (         int  )0;
 sqlstm.sqharm[26] = (unsigned int  )0;
 sqlstm.sqadto[26] = (unsigned short )0;
 sqlstm.sqtdso[26] = (unsigned short )0;
 sqlstm.sqhstv[27] = (         void  *)passport_issue_country;
 sqlstm.sqhstl[27] = (unsigned int  )5;
 sqlstm.sqhsts[27] = (         int  )0;
 sqlstm.sqindv[27] = (         void  *)&passport_issue_country_ind;
 sqlstm.sqinds[27] = (         int  )0;
 sqlstm.sqharm[27] = (unsigned int  )0;
 sqlstm.sqadto[27] = (unsigned short )0;
 sqlstm.sqtdso[27] = (unsigned short )0;
 sqlstm.sqhstv[28] = (         void  *)imm_ref_date;
 sqlstm.sqhstl[28] = (unsigned int  )9;
 sqlstm.sqhsts[28] = (         int  )0;
 sqlstm.sqindv[28] = (         void  *)&imm_ref_date_ind;
 sqlstm.sqinds[28] = (         int  )0;
 sqlstm.sqharm[28] = (unsigned int  )0;
 sqlstm.sqadto[28] = (unsigned short )0;
 sqlstm.sqtdso[28] = (unsigned short )0;
 sqlstm.sqhstv[29] = (         void  *)imm_expire_date;
 sqlstm.sqhstl[29] = (unsigned int  )9;
 sqlstm.sqhsts[29] = (         int  )0;
 sqlstm.sqindv[29] = (         void  *)&imm_expire_date_ind;
 sqlstm.sqinds[29] = (         int  )0;
 sqlstm.sqharm[29] = (unsigned int  )0;
 sqlstm.sqadto[29] = (unsigned short )0;
 sqlstm.sqtdso[29] = (unsigned short )0;
 sqlstm.sqhstv[30] = (         void  *)passport_issue_date;
 sqlstm.sqhstl[30] = (unsigned int  )9;
 sqlstm.sqhsts[30] = (         int  )0;
 sqlstm.sqindv[30] = (         void  *)&passport_issue_date_ind;
 sqlstm.sqinds[30] = (         int  )0;
 sqlstm.sqharm[30] = (unsigned int  )0;
 sqlstm.sqadto[30] = (unsigned short )0;
 sqlstm.sqtdso[30] = (unsigned short )0;
 sqlstm.sqhstv[31] = (         void  *)szPermitNo;
 sqlstm.sqhstl[31] = (unsigned int  )13;
 sqlstm.sqhsts[31] = (         int  )0;
 sqlstm.sqindv[31] = (         void  *)&ind_PermitNo;
 sqlstm.sqinds[31] = (         int  )0;
 sqlstm.sqharm[31] = (unsigned int  )0;
 sqlstm.sqadto[31] = (unsigned short )0;
 sqlstm.sqtdso[31] = (unsigned short )0;
 sqlstm.sqhstv[32] = (         void  *)szPermitDate;
 sqlstm.sqhstl[32] = (unsigned int  )9;
 sqlstm.sqhsts[32] = (         int  )0;
 sqlstm.sqindv[32] = (         void  *)&ind_PermitDate;
 sqlstm.sqinds[32] = (         int  )0;
 sqlstm.sqharm[32] = (unsigned int  )0;
 sqlstm.sqadto[32] = (unsigned short )0;
 sqlstm.sqtdso[32] = (unsigned short )0;
 sqlstm.sqhstv[33] = (         void  *)&nEntryPermitType;
 sqlstm.sqhstl[33] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[33] = (         int  )0;
 sqlstm.sqindv[33] = (         void  *)&ind_EntryPermitType;
 sqlstm.sqinds[33] = (         int  )0;
 sqlstm.sqharm[33] = (unsigned int  )0;
 sqlstm.sqadto[33] = (unsigned short )0;
 sqlstm.sqtdso[33] = (unsigned short )0;
 sqlstm.sqhstv[34] = (         void  *)&nDocTypeCode;
 sqlstm.sqhstl[34] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[34] = (         int  )0;
 sqlstm.sqindv[34] = (         void  *)&ind_DocTypeCode;
 sqlstm.sqinds[34] = (         int  )0;
 sqlstm.sqharm[34] = (unsigned int  )0;
 sqlstm.sqadto[34] = (unsigned short )0;
 sqlstm.sqtdso[34] = (unsigned short )0;
 sqlstm.sqhstv[35] = (         void  *)ktstartdate;
 sqlstm.sqhstl[35] = (unsigned int  )9;
 sqlstm.sqhsts[35] = (         int  )0;
 sqlstm.sqindv[35] = (         void  *)&ktstartdate_ind;
 sqlstm.sqinds[35] = (         int  )0;
 sqlstm.sqharm[35] = (unsigned int  )0;
 sqlstm.sqadto[35] = (unsigned short )0;
 sqlstm.sqtdso[35] = (unsigned short )0;
 sqlstm.sqhstv[36] = (         void  *)ktenddate;
 sqlstm.sqhstl[36] = (unsigned int  )9;
 sqlstm.sqhsts[36] = (         int  )0;
 sqlstm.sqindv[36] = (         void  *)&ktenddate_ind;
 sqlstm.sqinds[36] = (         int  )0;
 sqlstm.sqharm[36] = (unsigned int  )0;
 sqlstm.sqadto[36] = (unsigned short )0;
 sqlstm.sqtdso[36] = (unsigned short )0;
 sqlstm.sqhstv[37] = (         void  *)rjind;
 sqlstm.sqhstl[37] = (unsigned int  )3;
 sqlstm.sqhsts[37] = (         int  )0;
 sqlstm.sqindv[37] = (         void  *)&rjind_ind;
 sqlstm.sqinds[37] = (         int  )0;
 sqlstm.sqharm[37] = (unsigned int  )0;
 sqlstm.sqadto[37] = (unsigned short )0;
 sqlstm.sqtdso[37] = (unsigned short )0;
 sqlstm.sqhstv[38] = (         void  *)rjstartdate;
 sqlstm.sqhstl[38] = (unsigned int  )9;
 sqlstm.sqhsts[38] = (         int  )0;
 sqlstm.sqindv[38] = (         void  *)&rjstartdate_ind;
 sqlstm.sqinds[38] = (         int  )0;
 sqlstm.sqharm[38] = (unsigned int  )0;
 sqlstm.sqadto[38] = (unsigned short )0;
 sqlstm.sqtdso[38] = (unsigned short )0;
 sqlstm.sqhstv[39] = (         void  *)rjenddate;
 sqlstm.sqhstl[39] = (unsigned int  )9;
 sqlstm.sqhsts[39] = (         int  )0;
 sqlstm.sqindv[39] = (         void  *)&rjenddate_ind;
 sqlstm.sqinds[39] = (         int  )0;
 sqlstm.sqharm[39] = (unsigned int  )0;
 sqlstm.sqadto[39] = (unsigned short )0;
 sqlstm.sqtdso[39] = (unsigned short )0;
 sqlstm.sqhstv[40] = (         void  *)&afis_flag;
 sqlstm.sqhstl[40] = (unsigned int  )1;
 sqlstm.sqhsts[40] = (         int  )0;
 sqlstm.sqindv[40] = (         void  *)&afis_flag_ind;
 sqlstm.sqinds[40] = (         int  )0;
 sqlstm.sqharm[40] = (unsigned int  )0;
 sqlstm.sqadto[40] = (unsigned short )0;
 sqlstm.sqtdso[40] = (unsigned short )0;
 sqlstm.sqhstv[41] = (         void  *)&jkind;
 sqlstm.sqhstl[41] = (unsigned int  )1;
 sqlstm.sqhsts[41] = (         int  )0;
 sqlstm.sqindv[41] = (         void  *)&jkind_ind;
 sqlstm.sqinds[41] = (         int  )0;
 sqlstm.sqharm[41] = (unsigned int  )0;
 sqlstm.sqadto[41] = (unsigned short )0;
 sqlstm.sqtdso[41] = (unsigned short )0;
 sqlstm.sqhstv[42] = (         void  *)&hsccode;
 sqlstm.sqhstl[42] = (unsigned int  )1;
 sqlstm.sqhsts[42] = (         int  )0;
 sqlstm.sqindv[42] = (         void  *)&hsccode_ind;
 sqlstm.sqinds[42] = (         int  )0;
 sqlstm.sqharm[42] = (unsigned int  )0;
 sqlstm.sqadto[42] = (unsigned short )0;
 sqlstm.sqtdso[42] = (unsigned short )0;
 sqlstm.sqhstv[43] = (         void  *)&invserviceflag;
 sqlstm.sqhstl[43] = (unsigned int  )1;
 sqlstm.sqhsts[43] = (         int  )0;
 sqlstm.sqindv[43] = (         void  *)&invserviceflag_ind;
 sqlstm.sqinds[43] = (         int  )0;
 sqlstm.sqharm[43] = (unsigned int  )0;
 sqlstm.sqadto[43] = (unsigned short )0;
 sqlstm.sqtdso[43] = (unsigned short )0;
 sqlstm.sqhstv[44] = (         void  *)ktareacode;
 sqlstm.sqhstl[44] = (unsigned int  )7;
 sqlstm.sqhsts[44] = (         int  )0;
 sqlstm.sqindv[44] = (         void  *)&ktareacode_ind;
 sqlstm.sqinds[44] = (         int  )0;
 sqlstm.sqharm[44] = (unsigned int  )0;
 sqlstm.sqadto[44] = (unsigned short )0;
 sqlstm.sqtdso[44] = (unsigned short )0;
 sqlstm.sqhstv[45] = (         void  *)apjareacode;
 sqlstm.sqhstl[45] = (unsigned int  )9;
 sqlstm.sqhsts[45] = (         int  )0;
 sqlstm.sqindv[45] = (         void  *)&apjareacode_ind;
 sqlstm.sqinds[45] = (         int  )0;
 sqlstm.sqharm[45] = (unsigned int  )0;
 sqlstm.sqadto[45] = (unsigned short )0;
 sqlstm.sqtdso[45] = (unsigned short )0;
 sqlstm.sqhstv[46] = (         void  *)appl_id;
 sqlstm.sqhstl[46] = (unsigned int  )20;
 sqlstm.sqhsts[46] = (         int  )0;
 sqlstm.sqindv[46] = (         void  *)0;
 sqlstm.sqinds[46] = (         int  )0;
 sqlstm.sqharm[46] = (unsigned int  )0;
 sqlstm.sqadto[46] = (unsigned short )0;
 sqlstm.sqtdso[46] = (unsigned short )0;
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
		userlog("upd_appnt_demo_info : Select from APPNT_JPN_INFO failed : %s", SQLMSG); 
#endif
		strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from APPNT_JPN_INFO failed");
		sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from APPNT_JPN_INFO failed  :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}



	
	userlog(" ");
	userlog("upd_appnt_demo_info : Id_type : %s",identitytype);
	userlog("upd_appnt_demo_info : identityno : %s",identityno.arr);
	userlog("upd_appnt_demo_info : invserviceflag,invserviceflag_ind : %c,%d",invserviceflag,invserviceflag_ind);
	userlog(" ");

	// The following code is Added on 09/07/2010 for Release 3.18 CR 211
	if(invserviceflag == 'S')
	{
		if(strncmp(identitytype,"92",2) != 0)
		{

		#ifdef DEBUG
			userlog("upd_appnt_demo_info : Invserviceflag = S and idtype not 92 "); 
		#endif
		strcpy(prog_log.remarks,"upd_appnt_demo_info : Invserviceflag = S and idtype not 92");
		sprintf(excep_log.error_msg,"upd_appnt_demo_info : Invserviceflag = S and idtype not 92");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		return GMPC_BAD;
		}

	}


	if((strncmp(identitytype,"92",2) == 0) || (strncmp(identitytype,"93",2) == 0))
	{
		if((identityno.arr[0] == ' ') || (identityno.arr[0] == '\0'))
		{

		#ifdef DEBUG
			userlog("upd_appnt_demo_info : Idtype 92/93 and idno does not exist"); 
		#endif
		strcpy(prog_log.remarks,"upd_appnt_demo_info : Idtype 92/93 and idno does not exist");
		sprintf(excep_log.error_msg,"upd_appnt_demo_info : Idtype 92/93 and idno does not exist");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		return GMPC_BAD;
		}

	}
	// Release 3.18 code adding end

	if ((kptno_ind == 0) && (kptno[0] != '\0'))
	{
		strcpy(jpn_upd.misc.applicant_kpt , kptno);
	}

	if ((kppno_ind == 0) && ((kppno[0] != '\0') && (kppno[0] != ' ')))
	{
		strcpy(jpn_upd.afis_1n_misc.kpp_no , kppno);
	
	}
	
	id_type = atoi(identitytype);

	if(id_type == ID_TYPE_POLICE)
	{		
		jpn_upd.afis_1n_misc.police_army_id = 'P'; //added this on 4/7/06

		if(identityno.arr[0] != '\0')
		{
		setnull(identityno);
		//strcpy(jpn_upd.afis_1n_misc.police_no , identityno.arr);
		strcpy(jpn_upd.afis_1n_misc.police_army_no , identityno.arr);  //added this on 7/4/06
		

		//strcpy(jpn_upd.afis_1n_misc.army_no , "");
		}
	}
	else if(id_type == ID_TYPE_MILITARY)
	{
		jpn_upd.afis_1n_misc.police_army_id = 'T';  //added this on 7/4/06

		if(identityno.arr[0] != '\0')
		{
		setnull(identityno);
		//strcpy(jpn_upd.afis_1n_misc.police_no , "");
		//strcpy(jpn_upd.afis_1n_misc.army_no , identityno.arr);
		strcpy(jpn_upd.afis_1n_misc.police_army_no , identityno.arr);  //added this on 7/4/06
		}
	}
	else
	{
		//strcpy(jpn_upd.afis_1n_misc.police_army_no , "");
		//strcpy(jpn_upd.afis_1n_misc.police_no, "");
		//strcpy(jpn_upd.afis_1n_misc.army_no, "");
	}


	if((origname_ind == 0) && (origname.arr[0] != '\0'))
	{
		setnull(origname);
		strcpy(jpn_upd.appnt_names.original_name , origname.arr);
	}

	//jpn_upd.misc.origin_indicator = '1'; commented on 19/10/05 as per vasanth
	// this value should be 1 if scanned, 0 if captured
	jpn_upd.misc.origin_indicator = '0';
	
	if((currlongname_ind == 0) && (currlongname.arr[0] != '\0'))
	{
		setnull(currlongname);
		strcpy(jpn_upd.appnt_names.current_long_name , currlongname.arr);
	}

	/*if(sirenshortname1_ind == 0)
	{
		setnull(sirenshortname1);
		strcpy(jpn_upd.appnt_names.siren_short_name1 , sirenshortname1.arr);
	}

	if(sirenshortname2_ind == 0)
	{
		setnull(sirenshortname2);
		strcpy(jpn_upd.appnt_names.siren_short_name2 , sirenshortname2.arr);
	}
	*/
	if((gmpcshortname1_ind == 0) && (gmpcshortname1.arr[0] != '\0'))
	{
		setnull(gmpcshortname1);
		strcpy(jpn_upd.appnt_names.gmpc_short_name1  , gmpcshortname1.arr);
	}

	if((gmpcshortname2_ind == 0) && (gmpcshortname2.arr[0] != '\0'))
	{
		setnull(gmpcshortname2);
		strcpy(jpn_upd.appnt_names.gmpc_short_name2  , gmpcshortname2.arr);
	}

	if((gmpcshortname3_ind == 0) && (gmpcshortname3.arr[0] != '\0'))
	{
		setlen(gmpcshortname3);
		setnull(gmpcshortname3);
		strcpy(jpn_upd.appnt_names.gmpc_short_name3  , gmpcshortname3.arr);
	}
/*
	userlog("birthplace.arr : %s",birthplace.arr);
	if(birthplace_ind == 0)
	{
		setnull(birthplace);
		strcpy(jpn_upd.afis_1n_misc.birth_dist_code , birthplace.arr);
	}
	userlog("jpn_upd.afis_1n_misc.birth_dist_code : %s",jpn_upd.afis_1n_misc.birth_dist_code);
*/
	if((gender_ind == 0) && (gender != '\0'))
	{
		jpn_upd.afis_1n_misc.gender = gender;
	}

	if((religioncode_ind == 0) && (religioncode != '\0'))
	{
		jpn_upd.afis_1n_misc.religion = religioncode;
	}

	if((racecode_ind == 0) && (racecode != '\0'))
	{
		strcpy(jpn_upd.afis_1n_misc.race , racecode);
	}

	if((hkcode_ind == 0) && (hkcode != '\0'))
	{
		jpn_upd.afis_1n_misc.hk_ind = hkcode;
	}

	// this piece of code (33 lines) added on 18/09/06 for sending remarks to host, JRS-63

	remarks1.arr[0] = '\0';

	/* EXEC SQL 
	  SELECT SUBSTR(ACTREMARKS,1,120) INTO :remarks1:remarks1_ind 
	    FROM PROBl_RECORD
		WHERE APPLID = :appl_id
		//AND PROBLNO = 1; Commented on 24/07/2009
		AND PROBLNO =  (SELECT MIN(PROBLNO) FROM PROBl_RECORD WHERE APPLID = :appl_id); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select SUBSTR(ACTREMARKS,1,120) into :b0:b1  from PROBl_RECO\
RD where (APPLID=:b2 and PROBLNO=(select min(PROBLNO)  from PROBl_RECORD where\
 APPLID=:b2))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )796;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&remarks1;
 sqlstm.sqhstl[0] = (unsigned int  )123;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&remarks1_ind;
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




	setnull(remarks1);

	if (SQLCODE != 0)
	{
		#ifdef DEBUG
			userlog("upd_appnt_demo_info : Select from PROBL_RECORD failed : %s\n", SQLMSG); 
		#endif
	}

	if(SQLCODE == 0)
	{
		#ifdef DEBUG
			userlog("upd_appnt_demo_info : remarks1,remarks1_ind : %s,%d\n", remarks1.arr,remarks1_ind); 
		#endif
	}

	if((remarks1_ind == 0) && ((remarks1.arr[0] != ' ') && (remarks1.arr[0] != '\0')))
	{
		strncpy(jpn_upd.misc.gmpc_remarks1, remarks1.arr,60);

		strncpy(jpn_upd.misc.gmpc_remarks2, remarks1.arr+60,60);

	}
	else
	{
	 if((remarks_ind == 0) && (remarks.arr[0] != '\0'))
	 {
		setnull(remarks);
		strcpy(jpn_upd.misc.gmpc_remarks1, remarks.arr);
	 }

	    strcpy(jpn_upd.misc.gmpc_remarks2 , "\0");
	}

	//if((restrictedresicode_ind == 0) && (restrictedresicode[0] != '\0'))
	//{
	//	strcpy(jpn_upd.afis_1n_misc.kt_ind , restrictedresicode);
	//}



	if((iccolorcode_ind == 0) && (iccolorcode != '\0'))
	{
		jpn_upd.misc.ic_colour = iccolorcode;
		/* new requirement from vasanth changed on 22/03/2002 by shiva.p */
		if(iccolorcode == 'H' )
		{
			if(atoi(txn_details->txn_code) == TXN_12YO_GREEN || atoi(txn_details->txn_code) == TXN_FT_GREEN )
			{
				strcpy(jpn_upd.misc.art_color_code , "25");	
			}
		}
	}

	if((art_color_code_ind == 0) && (art_color_code[0] != '\0'))
	{
		strcpy(jpn_upd.misc.art_color_code , art_color_code);
	}

	if((retire_date_ind == 0) && (retire_date[0] != '\0'))
	{
		strcpy(jpn_upd.misc.retire_date , retire_date);
	}

	if((pol_army_join_date_ind == 0) && (pol_army_join_date[0] != '\0'))
	{
		strcpy(jpn_upd.misc.pol_army_join_date , pol_army_join_date);
	}

	if((orig_name_indicator_ind == 0) && (orig_name_indicator != '\0'))
	{
		jpn_upd.misc.original_name_indicator = orig_name_indicator;
	}
/* commented on 18/06/2002 requirement by change & sam -shiva.p */
/*	else
		jpn_upd.misc.original_name_indicator = '1';

*/
	/*
	if(appl_approval_date_ind == 0)
	{
		strcpy(jpn_upd.misc.appl_approval_date , appl_approval_date);
	}
	*/
	if((green_card_exp_date_ind == 0) && (green_card_exp_date[0] != '\0'))
	{
		strcpy(jpn_upd.misc.green_card_exp_date, green_card_exp_date);
	}

	if((person_status_ind == 0) && (person_status != '\0'))
	{
		jpn_upd.misc.person_status = person_status;
	}

	/* Set the person status according to Id type */
	/* added retire_date_ind check on 19/07/02 by shiva.p, requirement from vasanth & azlinda */

	/* commented on 4/07/06
	if (jpn_upd.afis_1n_misc.police_no[0] != '\0' && retire_date_ind ==0)
	{
		if (toupper(jpn_upd.misc.person_status) == 'F')
			jpn_upd.misc.person_status = 'A';
	}
	else if (jpn_upd.afis_1n_misc.army_no[0] != '\0' && retire_date_ind ==0)
	{
		if ((toupper(jpn_upd.misc.person_status) == 'F')
				&& (atoi(txn_details->txn_code) == TXN_CON_POLICE))
		{
			jpn_upd.misc.person_status = 'A';
		}
	}
	comment end*/

/*   Commented this part of the code on 26/01/2010 for 3.16A  for JRS 162
     

	// included this on 4/07/06
	if (jpn_upd.afis_1n_misc.police_army_no[0] != '\0' && retire_date_ind ==0)
	{
		if ((toupper(jpn_upd.misc.person_status) == 'F')
				&& (atoi(txn_details->txn_code) == TXN_CON_POLICE))
				jpn_upd.misc.person_status = 'A';
		else if (toupper(jpn_upd.misc.person_status) == 'F')
				jpn_upd.misc.person_status = 'A';
		
	}

	/* New requirement from vasanth on 31/07/2002 - shiva.p 

	if( atoi(txn_details ->txn_code) == TXN_CON_POLICE || atoi(txn_details ->txn_code) == TXN_REPL_EX_MILITARY)
	{
		if(jpn_upd.misc.person_status == '1' && retire_date_ind==0)
		{
			jpn_upd.misc.person_status = 'A';
		}
		else if (atoi(txn_details ->txn_code) == TXN_CON_POLICE)
		{
			if(jpn_upd.misc.person_status == '1' && retire_date_ind != 0) 
			{
					jpn_upd.misc.person_status = 'F';
			}
		}
	}

comment ended 26/01/2010 */

/* Included this part of the code to take care of 315,415,206,207 transactions for 3.16A  JRS 162
   on 26/01/2010  */


		ncount = 0;
		/* EXEC SQL SELECT COUNT(*) INTO :ncount FROM APPL_TXN
				WHERE APPLID = :appl_id
				 AND TXNCODE IN ('206','207','315','415'); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN where (APPLID=:b1 \
and TXNCODE in ('206','207','315','415'))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )823;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&ncount;
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
			userlog("selecting from appl_txn failed for 206/207/315/415 txncodes: %s",SQLMSG);
		}

		#ifdef DEBUG
			userlog("JRS 162  Release 3.16A ");
			userlog("Count of records from APPL_TXN for txncodes 206,207,315,415 :%d",ncount);
		#endif

		if(ncount > 0)
		{
			if(retire_date_ind == 0)
			{
				jpn_upd.misc.person_status = 'A';
			}
			else if(retire_date_ind != 0)
			{
				jpn_upd.misc.person_status = 'F';
			}			
		}

/* code addition ended 26/01/2010  */


// JRS 160

	// This code added on 20/06/2008 for R3.14 for JRS160
	// again commented on 10/07/2008 to include new logic for mypr
	//if (jpn_upd.misc.person_status = 'M')
	//	jpn_upd.misc.person_status = '1';  // 'M' means not converted to mypr.

	// now we execute this piece of code based on date to send the data to host
	// for MYPR, added on 11/07/2008 for JRS 160

	

		if(hsccode == 'M')
		{
			strncpy(jpn_upd.misc.myprind, "M2",2);
		}


// JRS 160
	
// JRS 167 Release 3.16 changed this on 8/06/2009		
		userlog("upd_appnt_demo_info : szTxnCode - %s", szTxnCode);
		userlog("upd_appnt_demo_info : szTxnCode - %c", szTxnCode[0]);
		userlog("upd_appnt_demo_info : hsccode - %c", hsccode);
		if((szTxnCode[0] == '1') || (szTxnCode[0] == '2'))
		{
			if(hsccode == 'B')
			{
				citizen_nation_code_ind = 0;
				strcpy(citizen_nation_code,"3000");
				userlog("Citizen_nation_code = 3000 for hsccode = B and sztxncode is 1 or 2");

			}

		}



// JRS 167




	if ((citizen_nation_code_ind == 0) && (citizen_nation_code[0] != '\0'))
	{
		strcpy(jpn_upd.misc.citizen_nation_code, citizen_nation_code);		
	}
	/* new requirement by vasanth added on 24/09/2002 by shiva.p */
	// commented this on 21/02/07 to trim the null spaces at the end
	//if((imm_ref_number_ind == 0) && (imm_ref_number.arr[0] != '\0'))
	//{
	//	setnull(imm_ref_number);
	//	strcpy(jpn_upd.misc.imm_ref_number , imm_ref_number.arr);
	//}

	setlen(imm_ref_number);
	setnull(imm_ref_number);

	// added this code on 21/02/07 to trim the null spaces for passport_no at the end
	if((imm_ref_number_ind == 0) && ((imm_ref_number.arr[0] != '\0') && (imm_ref_number.arr[0] != ' ')))
	{
		for(k=0;k<15;k++)
		{
			if(imm_ref_number.arr[k] == ' ')
			{
				if((imm_ref_number.arr[k] == ' ') && (sflag == 1))
				{
					sflag=0;
					break;
				}
				else
				{					
					sflag=1;
				}
			}
			jpn_upd.misc.imm_ref_number[k] = imm_ref_number.arr[k];
		}
		jpn_upd.misc.imm_ref_number[k-1] = '\0';
	}

	if((imm_ref_date_ind == 0) && (imm_ref_date[0] != '\0'))
	{
		strcpy(jpn_upd.misc.imm_ref_date ,imm_ref_date);
	}
	if((imm_expire_date_ind == 0) && (imm_expire_date[0] != '\0'))
	{
		strcpy(jpn_upd.misc.imm_expire_date , imm_expire_date);
	}

	/*
	if((passport_no_ind == 0) && (passport_no.arr[0] != '\0'))
	{
		setnull(passport_no);
		strcpy(jpn_upd.misc.passport_no , passport_no.arr);
	}
	*/

	setlen(passport_no);
	setnull(passport_no);

	// added this code on 06/11/06 to trim the null spaces for passport_no at the end
	if((passport_no_ind == 0) && ((passport_no.arr[0] != '\0') && (passport_no.arr[0] != ' ')))
	{
		sflag=0;
		for(k=0;k<16;k++)
		{
			if(passport_no.arr[k] == ' ')
			{
				if((passport_no.arr[k] == ' ') && (sflag == 1))
				{
					sflag=0;
					break;
				}
				else
				{					
					sflag=1;
				}
			}
			jpn_upd.misc.passport_no[k] = passport_no.arr[k];
		}
		jpn_upd.misc.passport_no[k-1] = '\0';
	}




	if((passport_issue_date_ind == 0) && (passport_issue_date[0] != '\0'))
	{
		strcpy(jpn_upd.misc.passport_issue_date , passport_issue_date);
	}
	if((passport_issue_country_ind == 0) && (passport_issue_country[0] != '\0'))
	{
		strcpy(jpn_upd.misc.passport_issue_country , passport_issue_country);
	}

//Commented for GSCB upgrade- 10th March 2005
//Added by Amarjith on 7th Sept '04. JRS 147.
/*
	//Select the immigration country code from the IMM_COUNTRY_CODE table.

	EXEC SQL SELECT CITIZENSHIP 
		INTO :szOriginCountryCode:ind_OriginCountryCode
		FROM IMM_COUNTRY_CODE 
		WHERE COUNTRYCODEJPN = :szCitizenNationCode;

	if ((SQLCODE != 0) && (SQLCODE != 1403))
	{
	#ifdef DEBUG
		userlog("upd_appnt_demo_info : Select from IMM_COUNTRY_CODE failed : %s", SQLMSG); 
	#endif
		strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from IMM_COUNTRY_CODE failed");
		sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from IMM_COUNTRY_CODE failed  :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}
*/

	// Added this 15 lines on 28/06/06
	//Select the immigration country code from the IMM_COUNTRY_CODE table.

	/* EXEC SQL SELECT CITIZENSHIP 
		INTO :szOriginCountryCode:ind_OriginCountryCode
		FROM IMM_COUNTRY_CODE 
		WHERE COUNTRYCODEJPN = :citizen_nation_code; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select CITIZENSHIP into :b0:b1  from IMM_COUNTRY_CODE where \
COUNTRYCODEJPN=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )846;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)szOriginCountryCode;
 sqlstm.sqhstl[0] = (unsigned int  )4;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&ind_OriginCountryCode;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)citizen_nation_code;
 sqlstm.sqhstl[1] = (unsigned int  )5;
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



	if ((SQLCODE != 0) && (SQLCODE != 1403))
	{
	#ifdef DEBUG
		userlog("upd_appnt_demo_info : Select from IMM_COUNTRY_CODE failed : %s", SQLMSG); 
	#endif
		strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from IMM_COUNTRY_CODE failed");
		sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from IMM_COUNTRY_CODE failed  :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	userlog(" szOriginCountryCode(imm_country_code_3digit) : %s",szOriginCountryCode);

	if(ind_OriginCountryCode == 0)
	{
		strcpy(jpn_upd.imm_country_code_3digit, szOriginCountryCode);		
	}

	userlog(" jpn_upd.imm_country_code_3digit : %s",jpn_upd.imm_country_code_3digit);

	//Select the CITIZENNATIONCODE as imm_country_code from the APPNT_JPN_INFO table.

	if ((citizen_nation_code_ind == 0) && (citizen_nation_code[0] != '\0'))
	{
		userlog(" citizen_nation_code : %s",citizen_nation_code);
		strcpy(jpn_upd.imm_country_code, citizen_nation_code);
	}
	
	userlog(" jpn_upd.imm_country_code : %s",jpn_upd.imm_country_code);

	

	// added this code on 19/04/07 to trim the null spaces for szPermitNo at the end
	//if((ind_PermitNo == 0) && (szPermitNo[0] != '\0'))
	//{
	//	strcpy(jpn_upd.misc.szPermitNo, szPermitNo);
	//}

	if((ind_PermitNo == 0) && ((szPermitNo[0] != '\0') && (szPermitNo[0] != ' ')))
	{
		sflag=0;
		for(k=0;k<16;k++)
		{
			if(szPermitNo[k] == ' ')
			{
				if((szPermitNo[k] == ' ') && (sflag == 1))
				{
					sflag=0;
					break;
				}
				else
				{					
					sflag=1;
				}
			}
			jpn_upd.misc.szPermitNo[k] = szPermitNo[k];
		}
		jpn_upd.misc.szPermitNo[k-1] = '\0';
	}


	if((ind_PermitDate == 0) && (szPermitDate[0] != '\0'))
	{
		strcpy(jpn_upd.misc.szPermitDate, szPermitDate);
	}

	if((ind_EntryPermitType == 0) && (nEntryPermitType > 0))
	{
		jpn_upd.misc.nEntryPermitType = nEntryPermitType;
	}

	if((ind_DocTypeCode == 0) && (nDocTypeCode > 0))
	{
		jpn_upd.misc.nDocTypeCode = nDocTypeCode;
	}

	//if(ind_OriginCountryCode == 0)
	//{
	//	strcpy(jpn_upd.misc.szOriginCountryCode, szOriginCountryCode);
	//}

//JRS 147.
//10th March 2005	

	// Added for IJPN on 10th may 2005
	
	if((ktindcode_ind == 0) && (strcmp(ktindcode, "KT") == 0))
	{
		strcpy(jpn_upd.afis_1n_misc.kt_ind , ktindcode);
		

		if((ktstartdate_ind == 0) && (ktstartdate[0] != '\0'))
		{
			strcpy(jpn_upd.ktstartdate, ktstartdate);
		}

		if((ktenddate_ind == 0) && (ktenddate[0] != '\0'))
		{
			strcpy(jpn_upd.ktenddate, ktenddate);
		}

		// CR 282 Realease 3.28 added on 28/05/2014
		if((ktareacode[0] != '\0') && (ktareacode[0] != ' '))
			strcpy(jpn_upd.ktareacode,ktareacode);	

	}


	//Added on 30/03/2015 fixed bug to send MYTENTERA milrank
	userlog("li_jpn_upd: upd_appnt_demo_info : SKP025/SA/2021");
	if((ktindcode_ind == 0) && ((strcmp(ktindcode, "01") == 0) || (strcmp(ktindcode, "02") == 0) || (strcmp(ktindcode, "03") == 0))) //modified by samsuri on 21 jan 2022, SKP025/SA/2021
	{
		strcpy(jpn_upd.afis_1n_misc.kt_ind , ktindcode);
	}
	

/*
	if((ktstartdate_ind == 0) && (ktstartdate[0] != '\0'))
	{
		strcpy(jpn_upd.ktstartdate, ktstartdate);
	}

	if((ktenddate_ind == 0) && (ktenddate[0] != '\0'))
	{
		strcpy(jpn_upd.ktenddate, ktenddate);
	}
*/

	if((rjind_ind == 0) && (strcmp(rjind, "RJ") == 0))
	{
		strcpy(jpn_upd.rjind, rjind);

		if((rjstartdate_ind == 0) && (rjstartdate[0] != '\0'))
		{
			strcpy(jpn_upd.rjstartdate, rjstartdate);
		}

		if((rjenddate_ind == 0) && (rjenddate[0] != '\0'))
		{
			strcpy(jpn_upd.rjenddate, rjenddate);
		}

			if((apjareacode[0] != '\0') && (apjareacode[0] != ' '))
				strcpy(jpn_upd.apjareacode,apjareacode);
		
	}

	//Added on 30/03/2015 fixed bug to send MYTENTERA miltype
	if((rjind_ind == 0) && ((strcmp(rjind, "01") == 0) || (strcmp(rjind, "02") == 0) || (strcmp(rjind, "03") == 0)))
	{
		strcpy(jpn_upd.rjind, rjind);
	}
/*
	if((rjstartdate_ind == 0) && (rjstartdate[0] != '\0'))
	{
		strcpy(jpn_upd.rjstartdate, rjstartdate);
	}

	if((rjenddate_ind == 0) && (rjenddate[0] != '\0'))
	{
		strcpy(jpn_upd.rjenddate, rjenddate);
	}
*/

	if((afis_flag_ind == 0) && (afis_flag != '\0'))
	{
		jpn_upd.bypass_afis_ind = afis_flag;
	}

	if((jkind_ind == 0) && (jkind != '\0'))
	{
		jpn_upd.jkind = jkind;
	}

    /* compound fee calculations */

	/* EXEC SQL DECLARE appl_cur CURSOR FOR 
		SELECT SUBSTR(FEETYPE,1,2), FEEAMT FROM APPL_TXN_FEE WHERE APPLID = :appl_id
			AND SUBSTR(FEETYPE,1,2) IN ('PF','AF','FF','UF','CF','MF','EF'); */ 


	/* EXEC SQL OPEN appl_cur; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0019;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )869;
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


	
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("jpn_update: Open appl_cur cursor failed ");
		#endif
		strcpy(prog_log.remarks,"jpn_update: Open appl_cur cursor failed");
		sprintf(excep_log.error_msg,"jpn_update: Open appl_cur cursor failed:%s ",SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		/* EXEC SQL CLOSE appl_cur; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )888;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


		return CURSOR_OPEN_ERROR;
	}

	pf=0;uf=0;af=0;ff=0;cf=0;mf=0;ef=0;
	for(;;)
	{
		/* EXEC SQL FETCH APPL_CUR INTO :la_feetype,:la_feeamt; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )903;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)la_feetype;
  sqlstm.sqhstl[0] = (unsigned int  )3;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&la_feeamt;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(float);
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



		if(sqlca.sqlcode == 1403)
			break;

		#ifdef DEBUG
			userlog("jpn_update: la_feetype=%s, la_feeamt=%f",la_feetype,la_feeamt);
		#endif

		if(strcmp(la_feetype,"PF") == 0)
			pf = la_feeamt;
		else if(strcmp(la_feetype,"AF") == 0)
			af = la_feeamt;
		else if(strcmp(la_feetype,"FF") == 0)
			ff = la_feeamt;		
		else if(strcmp(la_feetype,"UF") == 0)
			uf = la_feeamt;
		else if(strcmp(la_feetype,"CF") == 0)
			cf = la_feeamt;
		else if(strcmp(la_feetype,"EF") == 0)
			ef = la_feeamt;
		else if(strcmp(la_feetype,"MF") == 0)
			mf = la_feeamt;

		la_feeamt = 0; la_feetype[0] = '\0';
		

	}

	/* EXEC SQL CLOSE appl_cur; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )926;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}




	processing_fee = 0;
	processing_fee = pf;
	pf = 0;

	special_fee=0;
	special_fee = af;
	af = 0;

	renewal_comp_fee=0;
	renewal_comp_fee = ff;
	ff = 0;

	card_exp_comp_fee=0;
	card_exp_comp_fee = uf;
	uf = 0;

	calculated_comp_fee=0;
	calculated_comp_fee = cf;
	cf = 0;

	extra_fee=0;
	extra_fee = ef;
	ef = 0;


// pindaan fee mf adding to processing fee
	if (mf>0)
	{
	processing_fee = processing_fee + mf;
	}
	mf = 0;
	

	#ifdef DEBUG
		userlog("jpn_update: appl processing_fee+mf=%f",processing_fee);
	#endif

	/* EXEC SQL DECLARE out_cur CURSOR FOR 
		SELECT SUBSTR(FEETYPE,1,2), FEEAMT FROM OUTSTAND_TXN_FEE WHERE APPLID = :appl_id
			AND SUBSTR(FEETYPE,1,2) IN ('PF','AF','FF','UF','CF','MF','EF'); */ 


	/* EXEC SQL OPEN out_cur; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0020;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )941;
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


	
	if(SQLCODE)
	{
		#ifdef DEBUG
			userlog("jpn_update: Open out_cur cursor failed ");
		#endif
		strcpy(prog_log.remarks,"jpn_update: Open out_cur cursor failed");
		sprintf(excep_log.error_msg,"jpn_update: Open out_cur cursor failed:%s ",SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		/* EXEC SQL CLOSE out_cur; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )960;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


		return CURSOR_OPEN_ERROR;
	}

	pf=0;uf=0;af=0;ff=0;cf=0;mf=0;ef=0;
	for(;;)
	{
		/* EXEC SQL FETCH OUT_CUR INTO :lo_feetype,:lo_feeamt; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )975;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)lo_feetype;
  sqlstm.sqhstl[0] = (unsigned int  )3;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&lo_feeamt;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(float);
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



		if(sqlca.sqlcode == 1403)
			break;


		#ifdef DEBUG
			userlog("jpn_update: lo_feetype=%s, lo_feeamt=%f",lo_feetype,lo_feeamt);
		#endif

		if(strcmp(lo_feetype,"PF") == 0)
			pf = lo_feeamt;
		else if(strcmp(lo_feetype,"AF") == 0)
			af = lo_feeamt;
		else if(strcmp(lo_feetype,"FF") == 0)
			ff = lo_feeamt;		
		else if(strcmp(lo_feetype,"UF") == 0)
			uf = lo_feeamt;
		else if(strcmp(lo_feetype,"CF") == 0)
			cf = lo_feeamt;
		else if(strcmp(lo_feetype,"EF") == 0)
			ef = lo_feeamt;
		else if(strcmp(lo_feetype,"MF") == 0)
			mf = lo_feeamt;

		lo_feeamt = 0; lo_feetype[0] = '\0';	

	}

	/* EXEC SQL CLOSE out_cur; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )998;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



	if(pf>0)	
	processing_fee = processing_fee + pf;
	pf = 0;

	if(af>0)
	special_fee = special_fee + af;
	af = 0;

	if(ff>0)
	renewal_comp_fee = renewal_comp_fee + ff;
	ff = 0;

	if(uf>0)
	card_exp_comp_fee = card_exp_comp_fee + uf;
	uf = 0;

	if(cf>0)
	calculated_comp_fee = calculated_comp_fee + cf;
	cf = 0;

	if(ef>0)
	extra_fee = extra_fee + ef;
	ef = 0;

	// Added this on 30/10/2008 to add the extra fee to calculated compound fee
	calculated_comp_fee = calculated_comp_fee + extra_fee;

// pindaan fee mf adding to processing fee
	if(mf>0)
	{
	processing_fee = processing_fee + mf;
	}
	mf = 0;

	#ifdef DEBUG
		userlog("jpn_update: outstand processing_fee+mf=%f",processing_fee);
	#endif

	/* EXEC SQL 
		SELECT FEEAMT INTO :la_feeamt FROM APPL_TXN_FEE 
		WHERE APPLID   = :appl_id
		AND   FEETYPE  = 'CF' 
		AND   TXNSERNO = (SELECT TXNSERNO FROM APPL_TXN 
							WHERE APPLID = :appl_id 
							AND TXNCODE IN ('303','403')); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select FEEAMT into :b0  from APPL_TXN_FEE where ((APPLID=:b1\
 and FEETYPE='CF') and TXNSERNO=(select TXNSERNO  from APPL_TXN where (APPLID=\
:b1 and TXNCODE in ('303','403'))))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1013;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&la_feeamt;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
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



	
	if((sqlca.sqlcode != 0) && (sqlca.sqlcode != 1403))
	{
		#ifdef DEBUG
			userlog("jpn_update: select lost feeamt from APPL_TXN_FEE failed ");
		#endif
		strcpy(prog_log.remarks,"jpn_update: select lost feeamt from APPL_TXN_FEE failed");
		sprintf(excep_log.error_msg,"jpn_update: select lost feeamt from APPL_TXN_FEE failed:%s ",SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		
		return SELECT_ERROR;
	}

	/* EXEC SQL 
		SELECT FEEAMT INTO :lo_feeamt FROM OUTSTAND_TXN_FEE 
		WHERE APPLID   = :appl_id
		AND   FEETYPE  = 'CF' 
		AND   TXNSERNO = (SELECT TXNSERNO FROM APPL_TXN 
							WHERE APPLID = :appl_id 
							AND TXNCODE IN ('303','403')); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select FEEAMT into :b0  from OUTSTAND_TXN_FEE where ((APPLID\
=:b1 and FEETYPE='CF') and TXNSERNO=(select TXNSERNO  from APPL_TXN where (APP\
LID=:b1 and TXNCODE in ('303','403'))))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1040;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&lo_feeamt;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
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



	

	if((sqlca.sqlcode != 0) && (sqlca.sqlcode != 1403))
	{
		#ifdef DEBUG
			userlog("jpn_update: select lost feeamt from OUTSTAND_TXN_FEE failed ");
		#endif
		strcpy(prog_log.remarks,"jpn_update: select lost  feeamt from OUTSTAND_TXN_FEE failed");
		sprintf(excep_log.error_msg,"jpn_update: select lost feeamt from OUTSTAND_TXN_FEE failed:%s ",SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		
		return SELECT_ERROR;
	}

	
	
	lost_comp_fee = 0;
	lost_comp_fee = la_feeamt + lo_feeamt;

	la_feeamt = 0; lo_feeamt = 0;


	

	/* EXEC SQL 
		SELECT FEEAMT INTO :la_feeamt FROM APPL_TXN_FEE 
		WHERE APPLID   = :appl_id
		AND   FEETYPE  = 'CF' 
		AND   TXNSERNO = (SELECT TXNSERNO FROM APPL_TXN 
							WHERE APPLID = :appl_id 
							AND TXNCODE IN ('304','404','420')); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select FEEAMT into :b0  from APPL_TXN_FEE where ((APPLID=:b1\
 and FEETYPE='CF') and TXNSERNO=(select TXNSERNO  from APPL_TXN where (APPLID=\
:b1 and TXNCODE in ('304','404','420'))))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1067;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&la_feeamt;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
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



	
	if((sqlca.sqlcode != 0) && (sqlca.sqlcode != 1403))
	{
		#ifdef DEBUG
			userlog("jpn_update: select damaged feeamt from APPL_TXN_FEE failed ");
		#endif
		strcpy(prog_log.remarks,"jpn_update: select damaged feeamt from APPL_TXN_FEE failed");
		sprintf(excep_log.error_msg,"jpn_update: select damaged feeamt from APPL_TXN_FEE failed:%s ",SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		
		return SELECT_ERROR;
	}

	/* EXEC SQL 
		SELECT FEEAMT INTO :lo_feeamt FROM OUTSTAND_TXN_FEE 
		WHERE APPLID   = :appl_id
		AND   FEETYPE  = 'CF' 
		AND   TXNSERNO = (SELECT TXNSERNO FROM APPL_TXN 
							WHERE APPLID = :appl_id 
							AND TXNCODE IN ('304','404','420')); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select FEEAMT into :b0  from OUTSTAND_TXN_FEE where ((APPLID\
=:b1 and FEETYPE='CF') and TXNSERNO=(select TXNSERNO  from APPL_TXN where (APP\
LID=:b1 and TXNCODE in ('304','404','420'))))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1094;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&lo_feeamt;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
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



	
	if((sqlca.sqlcode != 0) && (sqlca.sqlcode != 1403))
	{
		#ifdef DEBUG
			userlog("jpn_update: select damaged feeamt from OUTSTAND_TXN_FEE failed ");
		#endif
		strcpy(prog_log.remarks,"jpn_update: select damaged  feeamt from OUTSTAND_TXN_FEE failed");
		sprintf(excep_log.error_msg,"jpn_update: select damaged feeamt from OUTSTAND_TXN_FEE failed:%s ",SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		
		return SELECT_ERROR;
	}

	

	damaged_comp_fee = 0;
	damaged_comp_fee = la_feeamt + lo_feeamt;

	la_feeamt = 0; lo_feeamt = 0;



/*	EXEC SQL 
		SELECT SUM(FEEAMT) INTO :la_feeamt FROM APPL_TXN_FEE 
		WHERE APPLID   = :appl_id
		AND   FEETYPE  = 'CF' 
		AND   TXNSERNO = (SELECT TXNSERNO FROM APPL_TXN 
							WHERE APPLID = :appl_id 
							AND TXNCODE NOT IN ('303','403','304','404','420'));
*/

	/* EXEC SQL SELECT SUM(A.FEEAMT) INTO :la_feeamt FROM
		APPL_TXN_FEE A, APPL_TXN B
		WHERE A.APPLID = B.APPLID
		AND A.TXNSERNO = B.TXNSERNO
		AND A.FEETYPE  = 'CF'
		//AND B.TXNCODE NOT IN ('303','403','304','404','420')  commented on 19/10/05 as per vasanth
		AND B.TXNCODE IN ('301','401')
		AND A.APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select sum(A.FEEAMT) into :b0  from APPL_TXN_FEE A ,APPL_TXN\
 B where ((((A.APPLID=B.APPLID and A.TXNSERNO=B.TXNSERNO) and A.FEETYPE='CF') \
and B.TXNCODE in ('301','401')) and A.APPLID=:b1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1121;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&la_feeamt;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
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



	
	if((sqlca.sqlcode != 0) && (sqlca.sqlcode != 1403))
	{
		#ifdef DEBUG
			userlog("jpn_update: select feeamt from APPL_TXN_FEE failed ");
		#endif
		strcpy(prog_log.remarks,"jpn_update: select feeamt from APPL_TXN_FEE failed");
		sprintf(excep_log.error_msg,"jpn_update: select feeamt from APPL_TXN_FEE failed:%s ",SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		
		return SELECT_ERROR;
	}

/*	EXEC SQL 
		SELECT SUM(FEEAMT) INTO :lo_feeamt FROM OUTSTAND_TXN_FEE 
		WHERE APPLID   = :appl_id
		AND   FEETYPE  = 'CF' 
		AND   TXNSERNO = (SELECT TXNSERNO FROM APPL_TXN 
							WHERE APPLID = :appl_id 
							AND TXNCODE NOT IN ('303','403','304','404','420'));
*/

	/* EXEC SQL SELECT SUM(A.FEEAMT) INTO :lo_feeamt FROM
		OUTSTAND_TXN_FEE A, APPL_TXN B
		WHERE A.APPLID = B.APPLID
		AND A.TXNSERNO = B.TXNSERNO
		AND A.FEETYPE  = 'CF'
		//AND B.TXNCODE NOT IN ('303','403','304','404','420') commented on 19/10/05 as per vasanth
		AND B.TXNCODE IN ('301','401')
		AND A.APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select sum(A.FEEAMT) into :b0  from OUTSTAND_TXN_FEE A ,APPL\
_TXN B where ((((A.APPLID=B.APPLID and A.TXNSERNO=B.TXNSERNO) and A.FEETYPE='C\
F') and B.TXNCODE in ('301','401')) and A.APPLID=:b1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1144;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&lo_feeamt;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
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




	
	if((sqlca.sqlcode != 0) && (sqlca.sqlcode != 1403))
	{
		#ifdef DEBUG
			userlog("jpn_update: select renewal 18 feeamt from OUTSTAND_TXN_FEE failed ");
		#endif
		strcpy(prog_log.remarks,"jpn_update: select renewal 18 feeamt from OUTSTAND_TXN_FEE failed");
		sprintf(excep_log.error_msg,"jpn_update: select renewal 18 feeamt from OUTSTAND_TXN_FEE failed:%s ",SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		
		return SELECT_ERROR;
	}

	
	renewal_18_comp_fee =0;
	renewal_18_comp_fee = la_feeamt + lo_feeamt;

	la_feeamt = 0; lo_feeamt = 0;

	
	/* EXEC SQL 
		SELECT SUM(PAYABLEAMT) INTO :la_feeamt 
		FROM PAYMENT_INFO 
		WHERE APPLID=:appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select sum(PAYABLEAMT) into :b0  from PAYMENT_INFO where APP\
LID=:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1167;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&la_feeamt;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
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



	
	if((sqlca.sqlcode != 0) && (sqlca.sqlcode != 1403))
	{
		#ifdef DEBUG
			userlog("jpn_update: select payableamt from PAYMENT_INFO failed ");
		#endif
		strcpy(prog_log.remarks,"jpn_update: select payableamt from PAYMENT_INFO failed");
		sprintf(excep_log.error_msg,"jpn_update: select payableamt from PAYMENT_INFO failed:%s ",SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		
		return SELECT_ERROR;
	}

	paid_fee = la_feeamt;
	la_feeamt = 0;


	/* EXEC SQL SELECT COUNT(*) INTO :ocnt FROM OUTSTAND_TXN_FEE 
		WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from OUTSTAND_TXN_FEE where APPLI\
D=:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1190;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&ocnt;
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



	
	if((sqlca.sqlcode != 0) && (sqlca.sqlcode != 1403))
	{
		#ifdef DEBUG
			userlog("jpn_update: select from OUTSTAND_TXN_FEE failed ");
		#endif
		strcpy(prog_log.remarks,"jpn_update: select from OUTSTAND_TXN_FEE failed");
		sprintf(excep_log.error_msg,"jpn_update: select from OUTSTAND_TXN_FEE failed:%s ",SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		
		return SELECT_ERROR;
	}

	pmode[0] = '\0';
	/* EXEC SQL SELECT PAYMMODE INTO :pmode FROM PAYMENT_INFO
		WHERE APPLID = :appl_id
		AND PAYMMODE = 'FW'; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select PAYMMODE into :b0  from PAYMENT_INFO where (APPLID=:b\
1 and PAYMMODE='FW')";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1213;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)pmode;
 sqlstm.sqhstl[0] = (unsigned int  )3;
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



	
	if((sqlca.sqlcode != 0) && (sqlca.sqlcode != 1403))
	{
		#ifdef DEBUG
			userlog("jpn_update: select from PAYMENT_INFO failed ");
		#endif
		strcpy(prog_log.remarks,"jpn_update: select from PAYMENT_INFO failed");
		sprintf(excep_log.error_msg,"jpn_update: select from PAYMENT_INFO failed:%s ",SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		
		return SELECT_ERROR;
	}

	/* EXEC SQL SELECT COUNT(*) INTO :freduction FROM APPL_FEE_REDUCTION
		WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from APPL_FEE_REDUCTION where APP\
LID=:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1236;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&freduction;
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



	
	if((sqlca.sqlcode != 0) && (sqlca.sqlcode != 1403))
	{
		#ifdef DEBUG
			userlog("jpn_update: select from APPL_FEE_REDUCTION failed ");
		#endif
		strcpy(prog_log.remarks,"jpn_update: select from APPL_FEE_REDUCTION failed");
		sprintf(excep_log.error_msg,"jpn_update: select from APPL_FEE_REDUCTION failed:%s ",SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		
		return SELECT_ERROR;
	}

	// Added the following code on 02/06/2016 for Release 3.32 CR 293
	// to get lostfee calculated and paidfee from APPNT_HG3_FEE_INFO

		la_feeamt = 0; lo_feeamt = 0;
		/* EXEC SQL SELECT PAIDAMT,ORIGAMT INTO :la_feeamt,:lo_feeamt
			FROM APPNT_HG3_FEE_INFO
			WHERE OLDAPPLID = :appl_id
			AND APPLID = (SELECT MAX(APPLID) FROM APPNT_HG3_FEE_INFO WHERE OLDAPPLID = :appl_id); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select PAIDAMT ,ORIGAMT into :b0,:b1  from APPNT_HG3_FEE_IN\
FO where (OLDAPPLID=:b2 and APPLID=(select max(APPLID)  from APPNT_HG3_FEE_INF\
O where OLDAPPLID=:b2))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1259;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&la_feeamt;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&lo_feeamt;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(float);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
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



			if((sqlca.sqlcode != 0) && (sqlca.sqlcode != 1403))
			{
				#ifdef DEBUG
					userlog("jpn_update: select from PAYMENT_INFO failed ");
				#endif
				strcpy(prog_log.remarks,"jpn_update: select from APPNT_HG3_FEE_INFO failed");
				sprintf(excep_log.error_msg,"jpn_update: select from APPNT_HG3_FEE_INFO failed:%s ",SQLMSG);
				excep_log.termination_flag = 'Y';
				excep_log.severity = FATAL;
				log_error(ctx);
				
				return SELECT_ERROR;
			}

			#ifdef DEBUG
				userlog("jpn_update: after select from APPNT_HG3_FEE_INFO sqlca.sqlcode :%d",sqlca.sqlcode);
				userlog("jpn_update: after select from APPNT_HG3_FEE_INFO la_feeamt :%.2f",la_feeamt);
				userlog("jpn_update: after select from APPNT_HG3_FEE_INFO lo_feeamt :%.2f",lo_feeamt);
			#endif

		Hg3PaymentFlag = FALSE;

		if((la_feeamt > 0) || (lo_feeamt > 0))
		{
			#ifdef DEBUG
				userlog("jpn_update: Inside the record found if loop ");				
			#endif

			if(la_feeamt > 0)
			{
				calculated_comp_fee = calculated_comp_fee + la_feeamt;

				lost_comp_fee = lost_comp_fee + la_feeamt;

				paid_fee = paid_fee + la_feeamt;

				#ifdef DEBUG
					userlog("jpn_update: calculated_comp_fee :%.2f",calculated_comp_fee);
					userlog("jpn_update: lost_comp_fee :%.2f",lost_comp_fee);
					userlog("jpn_update: paid_fee :%.2f",paid_fee);
				#endif
			}

			Hg3PaymentFlag = TRUE;
		}

	// Release 3.32 CR 293 end here



	/* To copy all float variables to libuffer, float values 
		converted to integer then to char and then copied,
		to get exact value to send it to libuff float is 
		multiplied by 100*/

	/* PF PROCESSING FEE*/
	if(processing_fee > 0)
	{
		lfee = (int)(processing_fee*100);
	userlog("lfee : %d",lfee);
		itoa(lfee,temp_fee,10);
	userlog("temp_fee : %s",temp_fee);

		strcpy(jpn_upd.processing_fee,temp_fee);
	userlog("jpn_upd.processing_fee : %s",jpn_upd.processing_fee);
	}

	lfee = 0;temp_fee[0] = '\0';

	/* AF SPECIAL FEE*/
	if(special_fee > 0)
	{
		lfee = (int)(special_fee*100);
	userlog("lfee : %d",lfee);
		itoa(lfee,temp_fee,10);
	userlog("temp_fee : %s",temp_fee);

		strcpy(jpn_upd.special_fee,temp_fee);
		userlog("jpn_upd.special_fee : %s",jpn_upd.special_fee);
	}

	lfee = 0;temp_fee[0] = '\0';

	/* FF RENEWAL COMPOUND FEE*/
	if(renewal_comp_fee > 0)
	{
		userlog("RENEWAL COMPOUND FEE CALCULATION");

		lfee = (int)(renewal_comp_fee*100);
	userlog("lfee : %d",lfee);
		itoa(lfee,temp_fee,10);
	userlog("temp_fee : %s",temp_fee);

		strcpy(jpn_upd.renewal_compound,temp_fee);
		userlog("jpn_upd.renewal_compound : %s",jpn_upd.renewal_compound);
	}

	lfee = 0;temp_fee[0] = '\0';

	/* UF CARD EXP COMP FEE*/
	if(card_exp_comp_fee > 0)
	{
		lfee = (int)(card_exp_comp_fee*100);
	userlog("lfee : %d",lfee);
		itoa(lfee,temp_fee,10);
	userlog("temp_fee : %s",temp_fee);
		strcpy(jpn_upd.card_expired_compound,temp_fee);
		userlog("jpn_upd.card_expired_compound : %s",jpn_upd.card_expired_compound);
	}

	lfee = 0;temp_fee[0] = '\0';

	/* CF CALCULATED COMP FEE*/
	//if(calculated_comp_fee > 0)
	if((calculated_comp_fee > 0) || (card_exp_comp_fee > 0) || (renewal_comp_fee > 0)) //Modified by Salmi on 23 Apr 2021, Unclaimed card fee -SKP008/PM/2021
	{
		//lfee = (int)(calculated_comp_fee*100); 
		lfee = (int)(calculated_comp_fee*100) + (int)(card_exp_comp_fee*100) + (int)(renewal_comp_fee*100);  //Modified by Salmi on 23 Apr 2021, Unclaimed card fee -SKP008/PM/2021
	userlog("lfee : %d",lfee);
		itoa(lfee,temp_fee,10);
	userlog("temp_fee : %s",temp_fee);
		strcpy(jpn_upd.calculcated_compound_fee,temp_fee);
		userlog("jpn_upd.calculcated_compound_fee : %s",jpn_upd.calculcated_compound_fee);
	}

	lfee = 0;temp_fee[0] = '\0';

	/* CF LOST COMP FEE */
	if(lost_comp_fee > 0)
	{
		userlog("LOST COMPOUND FEE CALCULATION");
		lfee = (int)(lost_comp_fee*100);
	userlog("lfee : %d",lfee);
		itoa(lfee,temp_fee,10);
	userlog("temp_fee : %s",temp_fee);

		strcpy(jpn_upd.lost_compound,temp_fee);
		userlog("jpn_upd.lost_compound : %s",jpn_upd.lost_compound);
	}

	lfee = 0;temp_fee[0] = '\0';

	/* CF DAMAGED COMP FEE */
	if(damaged_comp_fee > 0)
	{
		userlog("DAMAGED COMPOUND FEE CALCULATION");
		lfee = (int)(damaged_comp_fee*100);
	userlog("lfee : %d",lfee);
		itoa(lfee,temp_fee,10);
	userlog("temp_fee : %s",temp_fee);

		strcpy(jpn_upd.damaged_compound,temp_fee);
		userlog("jpn_upd.damaged_compound : %s",jpn_upd.damaged_compound);
	}

	lfee = 0;temp_fee[0] = '\0';

	/* CF RENEWAL 18 COMP FEE */
	if(renewal_18_comp_fee > 0)
	{
		userlog("RENEWAL 18 COMPOUND FEE CALCULATION");

		lfee = (int)(renewal_18_comp_fee*100);
	userlog("lfee : %d",lfee);
		itoa(lfee,temp_fee,10);
	userlog("temp_fee : %s",temp_fee);

		strcpy(jpn_upd.renewal_18_compound,temp_fee);
		userlog("jpn_upd.renewal_18_compound : %s",jpn_upd.renewal_18_compound);
	}

	lfee = 0;temp_fee[0] = '\0';

	/* PAID FEE */
	if(paid_fee > 0)
	{
		lfee = (int)(paid_fee*100);
	userlog("lfee : %d",lfee);
		itoa(lfee,temp_fee,10);
	userlog("temp_fee : %s",temp_fee);

		strcpy(jpn_upd.paid_fee,temp_fee);
		userlog("jpn_upd.paid_fee : %s",jpn_upd.paid_fee);
	}

	lfee = 0;temp_fee[0] = '\0';

	/* Additional Fee */
	/* commented this code on 02/06/2016 for Release 3.32 CR 293
	
	if(strcmp(pmode,"FW") == 0) 
		strcpy(jpn_upd.additional_fee,"9");  // fee waiver
	else if(freduction > 0)
		strcpy(jpn_upd.additional_fee,"1");  // fee reduction
	else if(ocnt == 0)
		strcpy(jpn_upd.additional_fee,"0");  // full payment
    */

	// Added the following code on 02/06/2016 for Release 3.32 CR 293
	// HG3 Payment

	if(Hg3PaymentFlag == TRUE)
	{
		#ifdef DEBUG
			userlog("jpn_update: Inside Hg3PaymentFlag == TRUE ");
		#endif

		if((strcmp(pmode,"FW") == 0) && (lo_feeamt == 0))
			strcpy(jpn_upd.additional_fee,"9");  // fee waiver
		else if((freduction > 0) || (la_feeamt != lo_feeamt))
			strcpy(jpn_upd.additional_fee,"1");  // fee reduction
		else if(ocnt == 0)
			strcpy(jpn_upd.additional_fee,"0");  // full payment
	}
	else
	{
		#ifdef DEBUG
			userlog("jpn_update: Inside Hg3PaymentFlag == FALSE ");
		#endif

		if(strcmp(pmode,"FW") == 0) 
			strcpy(jpn_upd.additional_fee,"9");  // fee waiver
		else if(freduction > 0)
			strcpy(jpn_upd.additional_fee,"1");  // fee reduction
		else if(ocnt == 0)
			strcpy(jpn_upd.additional_fee,"0");  // full payment
	}

	// Release 3.32 end

	lfee = 0;temp_fee[0] = '\0';

	/* MYPR extra fine Fee */
	if(extra_fee > 0)
	{
		lfee = (int)(extra_fee*100);
	userlog("lfee : %d",lfee);
		itoa(lfee,temp_fee,10);
	userlog("temp_fee : %s",temp_fee);

		strcpy(jpn_upd.mypr_extrafee,temp_fee);
	userlog("jpn_upd.mypr_extrafee : %s",jpn_upd.mypr_extrafee);
	}

// end IJPN
	
	/*EXEC SQL SELECT APRVLDOCNO, NAMECHGCODE, TO_CHAR(NAMEREGDATE, 'DDMMYYYY')
		 INTO :name_appr_ref_num:name_appr_ref_num_ind,
			  :name_chg_reason_code:name_chg_reason_code_ind,
			  :name_reg_date:name_reg_date_ind
		 FROM  APPLICATION 
		 WHERE APPLID = :appl_id; */ // Commented as part of IJPN on 9th May 2005 to include fewmore columns
		telephone_no[0] = '\0';

	/* EXEC SQL SELECT APRVLDOCNO, NAMECHGCODE, TO_CHAR(NAMEREGDATE, 'DDMMYYYY'),
			 LEGAPPLID, SPONSORIDNO, RELATIONCODE, COLLCENTER, TO_CHAR(CARDCOLLDATE,'DDMMYYYY'),
			 APPLPRIORITY,APPLSTAT,TO_CHAR(TIMESTAMP,'DDMMYYYY'), //TO_CHAR(APPLDATE,'DDMMYYYY') changed this on 06/11/06
			 SPONSORIDTYPE, BRANCHCODE,SUBSTR(CONTACTNO,1,14)
		 INTO :name_appr_ref_num:name_appr_ref_num_ind,
			  :name_chg_reason_code:name_chg_reason_code_ind,
			  :name_reg_date:name_reg_date_ind,
			  :legapplid:legapplid_ind,:sponsoridno:sponsoridno_ind,
			  :relationcode:relationcode_ind,:clocation:clocation_ind,
			  :colldate:colldate_ind,:priority:priority_ind,
			  :appl_status:appl_status_ind,:appldate:appldate_ind,
			  :sponsoridtype:sponsoridtype_ind,
			  :a_branch_code:a_branch_code_ind,
			  :telephone_no:telephone_no_ind
		 FROM  APPLICATION 
		 WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select APRVLDOCNO ,NAMECHGCODE ,TO_CHAR(NAMEREGDATE,'DDMMYYY\
Y') ,LEGAPPLID ,SPONSORIDNO ,RELATIONCODE ,COLLCENTER ,TO_CHAR(CARDCOLLDATE,'D\
DMMYYYY') ,APPLPRIORITY ,APPLSTAT ,TO_CHAR( timestamp ,'DDMMYYYY') ,SPONSORIDT\
YPE ,BRANCHCODE ,SUBSTR(CONTACTNO,1,14) into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b\
9,:b10:b11,:b12:b13,:b14:b15,:b16:b17,:b18:b19,:b20:b21,:b22:b23,:b24:b25,:b26\
:b27  from APPLICATION where APPLID=:b28";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1290;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&name_appr_ref_num;
 sqlstm.sqhstl[0] = (unsigned int  )43;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&name_appr_ref_num_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)name_chg_reason_code;
 sqlstm.sqhstl[1] = (unsigned int  )3;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&name_chg_reason_code_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)name_reg_date;
 sqlstm.sqhstl[2] = (unsigned int  )9;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&name_reg_date_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)legapplid;
 sqlstm.sqhstl[3] = (unsigned int  )25;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&legapplid_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&sponsoridno;
 sqlstm.sqhstl[4] = (unsigned int  )18;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&sponsoridno_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)relationcode;
 sqlstm.sqhstl[5] = (unsigned int  )3;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&relationcode_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)clocation;
 sqlstm.sqhstl[6] = (unsigned int  )7;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&clocation_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)colldate;
 sqlstm.sqhstl[7] = (unsigned int  )9;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&colldate_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&priority;
 sqlstm.sqhstl[8] = (unsigned int  )1;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&priority_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&appl_status;
 sqlstm.sqhstl[9] = (unsigned int  )1;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&appl_status_ind;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)appldate;
 sqlstm.sqhstl[10] = (unsigned int  )9;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)&appldate_ind;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)sponsoridtype;
 sqlstm.sqhstl[11] = (unsigned int  )3;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)&sponsoridtype_ind;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)a_branch_code;
 sqlstm.sqhstl[12] = (unsigned int  )7;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)&a_branch_code_ind;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)telephone_no;
 sqlstm.sqhstl[13] = (unsigned int  )15;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)&telephone_no_ind;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
 sqlstm.sqhstv[14] = (         void  *)appl_id;
 sqlstm.sqhstl[14] = (unsigned int  )20;
 sqlstm.sqhsts[14] = (         int  )0;
 sqlstm.sqindv[14] = (         void  *)0;
 sqlstm.sqinds[14] = (         int  )0;
 sqlstm.sqharm[14] = (unsigned int  )0;
 sqlstm.sqadto[14] = (unsigned short )0;
 sqlstm.sqtdso[14] = (unsigned short )0;
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
		userlog("upd_appnt_demo_info : Select from APPLICATION  failed : %s", SQLMSG); 
#endif
		strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from APPLICATION failed");
		sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from APPLICATION failed  :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	setlen(sponsoridno);
	setnull(sponsoridno);
	setlen(name_appr_ref_num);

	userlog("upd_appnt_demo_info : name_appr_ref_num : %s",name_appr_ref_num.arr);
	userlog("upd_appnt_demo_info : clocation : %s",clocation);

	/* EXEC SQL SELECT BRANCHCODEJPN, BRANCHIND INTO :colllocation:colllocation_ind, :branchind
		FROM BRANCH_INFO
		WHERE BRANCHCODE = :clocation; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select BRANCHCODEJPN ,BRANCHIND into :b0:b1,:b2  from BRANCH\
_INFO where BRANCHCODE=:b3";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1365;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)colllocation;
 sqlstm.sqhstl[0] = (unsigned int  )9;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&colllocation_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)branchind;
 sqlstm.sqhstl[1] = (unsigned int  )6;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)clocation;
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



	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog("upd_appnt_demo_info : Select from BRANCH_INFO  failed : %s", SQLMSG); 
	#endif
		strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from BRANCH_INFO failed");
		sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from BRANCH_INFO failed  :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	/* Added for IJPN on 10/11/05 for adding up the branchcodejpn to the  1050 message */

	/* EXEC SQL SELECT BRANCHCODEJPN INTO :appl_branch_code:appl_branch_code_ind
		FROM BRANCH_INFO
		WHERE BRANCHCODE = :a_branch_code:a_branch_code_ind; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select BRANCHCODEJPN into :b0:b1  from BRANCH_INFO where BRA\
NCHCODE=:b2:b3";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1392;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)appl_branch_code;
 sqlstm.sqhstl[0] = (unsigned int  )9;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&appl_branch_code_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)a_branch_code;
 sqlstm.sqhstl[1] = (unsigned int  )7;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&a_branch_code_ind;
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
		userlog("upd_appnt_demo_info : Select from BRANCH_INFO  failed for BRANCHCODEJPN : %s", SQLMSG); 
	#endif
		strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from BRANCH_INFO failed for BRANCHCODEJPN");
		sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from BRANCH_INFO failed for BRANCHCODEJPN :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}


	userlog("upd_appnt_demo_info : appl_branch_code : %s",appl_branch_code);

	if((appl_branch_code_ind == 0) && (appl_branch_code[0] != '\0'))
		strcpy(jpn_upd.appl_branch_code , appl_branch_code);

	userlog("upd_appnt_demo_info : telephone_no : %s",telephone_no);

	if((telephone_no_ind == 0) && (telephone_no[0] != '\0'))
		strcpy(jpn_upd.telephone_no , telephone_no);


	/* end IJPN */

	if((name_appr_ref_num_ind == 0)	&& (name_appr_ref_num.arr[0] != '\0'))
	{
		//setnull(name_appr_ref_num);
		setlen(name_appr_ref_num);
		strcpy(jpn_upd.misc.name_appr_ref_num , name_appr_ref_num.arr);
	}
	if((name_chg_reason_code_ind == 0) && (name_chg_reason_code[0] != '\0'))	
	{
		strcpy(jpn_upd.misc.name_chg_reason_code , name_chg_reason_code);
	}
	if((name_reg_date_ind == 0)	&& (name_reg_date[0] != '\0'))
	{
		strcpy(jpn_upd.misc.name_reg_date , name_reg_date);
	}


		/* start IJPN */
	if((legapplid_ind == 0) && (legapplid[0] != '\0'))
	{
		strcpy(jpn_upd.appl_no, legapplid);
	}

	// if legapplid is not null then send 1 else send 2 to ijpn_gmpc_ind
	if((legapplid[0] != '\0') && (legapplid[0] != ' '))
		jpn_upd.ijpn_gmpc_ind = '1';
	else
		jpn_upd.ijpn_gmpc_ind = '2';

	if((sponsoridno_ind == 0) && (sponsoridno.arr[0] != '\0'))
	{
		strcpy(jpn_upd.sponsor_kpt,sponsoridno.arr);
	}

	if((sponsoridtype_ind == 0) && (sponsoridtype[0] != '\0'))
	{
		strcpy(jpn_upd.sponsor_id_type,sponsoridtype);
	}

	if((relationcode_ind == 0) && (relationcode[0] != '\0'))
	{
		strcpy(jpn_upd.appnt_spon_rel_code ,relationcode);
	}
	if((colllocation_ind == 0) && (colllocation[0] != '\0'))
	{
		#ifdef DEBUG
			userlog("upd_appnt_demo_info : colllocation : %s", colllocation); 
		#endif

		jpn_upd.coll_location[0] = '\0';
		strcpy(jpn_upd.coll_location ,colllocation);

		#ifdef DEBUG
			userlog("upd_appnt_demo_info : jpn_upd.coll_location : %s", jpn_upd.coll_location); 
		#endif
	}
	if((colldate_ind == 0) && (colldate[0] != '\0'))
	{
		#ifdef DEBUG
			userlog("upd_appnt_demo_info : colldate : %s", colldate); 
		#endif

		strcpy(jpn_upd.coll_date ,colldate);

		#ifdef DEBUG
			userlog("upd_appnt_demo_info : jpn_upd.coll_date : %s", jpn_upd.coll_date); 
		#endif
	}
	if((priority_ind == 0) && (priority != '\0'))
	{
		jpn_upd.indicator2 = priority;
	}

/* added on 26/09/05 for indicator2 for IJPN*/

	userlog("appl_id[14] : %c",appl_id[14]);
	userlog("priority : %c",priority);

	if((appl_id[14] == '4') || (appl_id[14] == '5'))
	{
		if(priority == '0')
			jpn_upd.indicator2 = '3';
		else if(priority == '1')
			jpn_upd.indicator2 = '4';
		else if(priority == '2')
			jpn_upd.indicator2 = '5';
	}

/* end IJPN*/


	userlog("appldate : %s",appldate);

	//appldate
	if((appldate[0] != '\0') && (appldate_ind == 0))
	{
		strcpy(jpn_upd.appldate,appldate);
	}

	/* For appl_status & appl_status2 */

	if(appl_status_ind == 0)
	{
	 if((appl_status == 'P') || (appl_status == 'Q'))
	 {
		/* EXEC SQL SELECT CARDSTAT INTO :cardstat1:cardstat1_ind
			FROM CARD_STATUS
			WHERE APPLID = :appl_id
			AND CARDVERSIONNO = 
				(SELECT MAX(CARDVERSIONNO) 
						FROM CARD_STATUS WHERE APPLID = :appl_id); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select CARDSTAT into :b0:b1  from CARD_STATUS where (APPLID\
=:b2 and CARDVERSIONNO=(select max(CARDVERSIONNO)  from CARD_STATUS where APPL\
ID=:b2))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1415;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&cardstat1;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&cardstat1_ind;
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



		if ((SQLCODE != 0) && (SQLCODE != 1403))
		{
		#ifdef DEBUG
			userlog("upd_appnt_demo_info : Select from CARD_STATUS failed : %s", SQLMSG); 
		#endif
			strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from CARD_STATUS failed");
			sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from CARD_STATUS failed  :%s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}

				
		if((cardstat1 == 2) || (cardstat1 == 3) || (cardstat1 == 4) || (cardstat1 == 21))
		{
		/* copy the appl_status to a variable and append the cardstat ot it */
		//strcpy(lgmpcstat,appl_status);
		//strcat(lgmpcstat,cardstat);
			lgmpcstat[0] = appl_status;
			lgmpcstat[1] = cardstat1;
			lgmpcstat[2] = '\0';

			/* EXEC SQL SELECT JPNSTAT INTO :jpnstat:jpnstat_ind
				FROM APPLSTAT_REL_GMPCJPN
				WHERE GMPCSTAT = :lgmpcstat; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 47;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select JPNSTAT into :b0:b1  from APPLSTAT_REL_GMPCJPN wher\
e GMPCSTAT=:b2";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1442;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)jpnstat;
   sqlstm.sqhstl[0] = (unsigned int  )3;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&jpnstat_ind;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)lgmpcstat;
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

 

			if (SQLCODE != 0) 
			{
			#ifdef DEBUG
				userlog("upd_appnt_demo_info : Select from APPLSTAT_REL_GMPCJPN failed : %s", SQLMSG); 
			#endif
				strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from APPLSTAT_REL_GMPCJPN failed");
				sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from APPLSTAT_REL_GMPCJPN failed  :%s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
					
				return SELECT_ERROR;
			}

			/* copy the first character of jpnstat to appl_status and 
				the second charatcter of jpnstat to appl_status2 */
				jpn_upd.appl_status  = jpnstat[0];
				jpn_upd.appl_status2 = jpnstat[1];
				status_copied = 1;
		}
			
	 }

	if(status_copied != 1)
	{
	    /* EXEC SQL SELECT JPNSTAT INTO :jpnstat:jpnstat_ind
			FROM APPLSTAT_REL_GMPCJPN
				WHERE GMPCSTAT = :appl_status; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 47;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select JPNSTAT into :b0:b1  from APPLSTAT_REL_GMPCJPN wh\
ere GMPCSTAT=:b2";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )1465;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)jpnstat;
     sqlstm.sqhstl[0] = (unsigned int  )3;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)&jpnstat_ind;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&appl_status;
     sqlstm.sqhstl[1] = (unsigned int  )1;
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
			userlog("upd_appnt_demo_info : Select from APPLSTAT_REL_GMPCJPN failed : %s", SQLMSG); 
		#endif
			strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from APPLSTAT_REL_GMPCJPN failed");
			sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from APPLSTAT_REL_GMPCJPN failed  :%s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
					
			return SELECT_ERROR;
		}

		/* copy the jpnstat to appl_status and 
			the appl_status2 will be null*/
			jpn_upd.appl_status  = jpnstat[0];
			jpn_upd.appl_status2 = '\0';


	}
	} // end of if for appl_status_ind

	/*  end appl_status & appl_status2 */
	

	/* EXEC SQL SELECT LEGTXNCODE into :legtxncode:legtxncode_ind FROM APPL_TXN 
		WHERE applid = :appl_id
		AND TXNSERNO = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select LEGTXNCODE into :b0:b1  from APPL_TXN where (applid=:\
b2 and TXNSERNO=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1488;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)legtxncode;
 sqlstm.sqhstl[0] = (unsigned int  )5;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&legtxncode_ind;
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
		userlog("upd_appnt_demo_info : Select from APPL_TXN failed : %s", SQLMSG); 
	#endif
		strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from APPL_TXN failed");
		sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from APPL_TXN failed  :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	// transaction_code
	if((legtxncode_ind == 0) && (legtxncode[0] != '\0'))
	{
		strcpy(jpn_upd.transaction_code,legtxncode);
	}

	// application_type (Txn category)
	// copy the last two characters of txncode into appl_type if one record
	// if two records then take the last two characters of first record and concatenate with the
	// last two characters of second recod and so on for subsequent recirds

	/* EXEC SQL DECLARE txn_cur CURSOR FOR 
		SELECT TXNCODE  FROM APPL_TXN 
		WHERE applid = :appl_id
		AND SUBSTR(TXNCODE,1,1) IN ('1','2','3','4'); */ 


	/* EXEC SQL OPEN txn_cur; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0039;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1511;
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



	icnt=1; temp_txncode[0] = '\0';
	while(sqlca.sqlcode != 1403)
	{
		/* EXEC SQL FETCH txn_cur INTO :ctxncode; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1530;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)ctxncode;
  sqlstm.sqhstl[0] = (unsigned int  )4;
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



		userlog("Inside the txn_cur txncode : %s",ctxncode);

		if(sqlca.sqlcode == 1403)
			break;
		
		ctxncode[3] = '\0';

		if(icnt == 1)
		strcpy(temp_txncode,ctxncode+1);
		else
		{
			if(ctxncode[0] != '\0')
				strcat(temp_txncode,ctxncode+1);
		}

		icnt++;
		userlog("Inside the txn_cur temp_txncode : %s : icnt : %d",temp_txncode,icnt);
		ctxncode[0] = '\0';
	}

	userlog("final temp_txncode : %s",temp_txncode);

	strcpy(jpn_upd.application_type,temp_txncode);

	// agency_on_chip
	/* EXEC SQL SELECT agencyonchip into agency_on_chip:agency_on_chip_ind FROM CARD_STATUS WHERE kptno=:kptno AND cardversionno = 
	(SELECT MAX(cardversionno) FROM CARD_STATUS WHERE kptno=:kptno); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select agencyonchip into :b0:b1  from CARD_STATUS where (kpt\
no=:b2 and cardversionno=(select max(cardversionno)  from CARD_STATUS where kp\
tno=:b2))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1549;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)agency_on_chip;
 sqlstm.sqhstl[0] = (unsigned int  )8;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&agency_on_chip_ind;
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
 sqlstm.sqhstv[2] = (         void  *)kptno;
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
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}




		if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog("upd_appnt_demo_info : Select from CARD_STATUS failed : %s", SQLMSG); 
	#endif
		strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from CARD_STATUS failed");
		sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from CARD_STATUS failed  :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	//Indicator1 
	if((agency_on_chip_ind == 0) && (agency_on_chip[0] != '\0'))
	{
		strcpy(jpn_upd.indicator1,agency_on_chip);
	}

	/* EXEC SQL SELECT DOCSERNO INTO :docserno:docserno_ind 
		FROM APPL_DOC_SERNO
		WHERE APPLID = :appl_id
		AND TIMESTAMP = 
		(SELECT MAX(TIMESTAMP) FROM APPL_DOC_SERNO WHERE APPLID = :appl_id)
		AND ROWNUM = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select DOCSERNO into :b0:b1  from APPL_DOC_SERNO where ((APP\
LID=:b2 and  timestamp =(select max( timestamp )  from APPL_DOC_SERNO where AP\
PLID=:b2)) and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1576;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&docserno;
 sqlstm.sqhstl[0] = (unsigned int  )18;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&docserno_ind;
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



	setlen(docserno);
	setnull(docserno);

	if (sqlca.sqlcode != 0 && sqlca.sqlcode != 1403)
	{
#ifdef DEBUG
		userlog("upd_appnt_demo_info : Select from APPL_DOC_SERNO failed : %s", SQLMSG); 
#endif
		strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from APPL_DOC_SERNO failed");
		sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from APPL_DOC_SERNO failed  :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	/* commented this code on 07/06/2017 as the host data length is increased to 15 from 7
	//jpn_doc_no 
	if((docserno_ind == 0) && (docserno.arr[0] != '\0'))
	{
		//strcpy(jpn_upd.jpn_doc_no, docserno.arr);  // commented on 20/02/06
		strncpy(jpn_upd.jpn_doc_no, docserno.arr,7);  // to copy only the first 7 characters only
												   // as the host data length is only 7
	}
	*/

	//jpn_doc_no ; comment opened on 07/06/2017 as the host data length is increased to 15 from 7
	if((docserno_ind == 0) && (docserno.arr[0] != '\0'))
	{
		strcpy(jpn_upd.jpn_doc_no, docserno.arr);  
		//strncpy(jpn_upd.jpn_doc_no, docserno.arr,7); //commented this code on 07/06/2017  // to copy only the first 7 characters only
												   // as the host data length is only 7
	}


	/* end IJPN */


	/* commented for IJPN AFISFLAG selection is removed from here 
	EXEC SQL SELECT RESIDENTSTAT, AFISFLAG, TO_CHAR(BIRTHDATE, 'DDMMYYYY'),
					UNKNOWNBIRTHIND, CARDVERSIONNO
		 INTO :resi_status:resi_status_ind,
			  :afis_flag:afis_flag_ind,
			  :birthdate:birthdate_ind,
			  :unknown_birth:unknown_birth_ind,   
			  :card_version:card_version_ind
		 FROM  JPN_INFO
		 WHERE KPTNO = :kptno:kptno_ind;
	*/

	/* EXEC SQL SELECT ICCOLORCODE,  
					//RESIDENTSTAT, // interchanged this value selection on 17/10/2006 
					TO_CHAR(BIRTHDATE, 'DDMMYYYY'),
					UNKNOWNBIRTHIND, CARDVERSIONNO,BIRTHDISTRICTCODE
		 INTO :resi_status:resi_status_ind,			  
			  :birthdate:birthdate_ind,
			  :unknown_birth:unknown_birth_ind,   
			  :card_version:card_version_ind,
			  :birth_dist_code:birth_dist_code_ind
		 FROM  JPN_INFO
		 WHERE KPTNO = :kptno:kptno_ind; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select ICCOLORCODE ,TO_CHAR(BIRTHDATE,'DDMMYYYY') ,UNKNOWNBI\
RTHIND ,CARDVERSIONNO ,BIRTHDISTRICTCODE into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:\
b9  from JPN_INFO where KPTNO=:b10:b11";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1603;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&resi_status;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&resi_status_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)birthdate;
 sqlstm.sqhstl[1] = (unsigned int  )9;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&birthdate_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&unknown_birth;
 sqlstm.sqhstl[2] = (unsigned int  )1;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&unknown_birth_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&card_version;
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&card_version_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&birth_dist_code;
 sqlstm.sqhstl[4] = (unsigned int  )7;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&birth_dist_code_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)kptno;
 sqlstm.sqhstl[5] = (unsigned int  )13;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&kptno_ind;
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
		userlog("upd_appnt_demo_info : Select from JPN_INFO failed : %s", SQLMSG); 
#endif
		strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from JPN_INFO failed");
		sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from JPN_INFO failed  :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	userlog("birth_dist_code : %s",birth_dist_code.arr);
	userlog("length of birth_dist_code : %d",birth_dist_code.len);

	// if the length of the birth_dist_code is 1 or 3 
	//then append 0 as the first character to the
	 
	if(birth_dist_code.len == 1 || birth_dist_code.len == 3)
		sprintf(bdcode,"0%s",birth_dist_code.arr);

	userlog("birth_dist_code : %s",bdcode);

	if((birth_dist_code_ind == 0) && (bdcode[0] != '\0'))
		strcpy(jpn_upd.afis_1n_misc.birth_dist_code ,bdcode);
	
	userlog("jpn_upd.afis_1n_misc.birth_dist_code : %s",jpn_upd.afis_1n_misc.birth_dist_code);

	if((resi_status_ind == 0) && (resi_status != '\0'))
	{
		jpn_upd.afis_1n_misc.resi_status = resi_status;
	}
//Commented for GSCB upgrade- 10th March 2005
//Added by Amarjith on 7th Sept '04. JRS 147.

	userlog("upd_appnt_demo_info: TXCODE Received is: %s", szTxnCode);

	if(atoi(szTxnCode) == TXN_CON_GREEN_TO_RED
		|| atoi(szTxnCode) == TXN_REPL_GREEN_TO_RED)
	{
		userlog("upd_appnt_demo_info: Inside TXCODE = 308 OR 408. Residential Stat Code is: %c", jpn_upd.afis_1n_misc.resi_status);
		jpn_upd.afis_1n_misc.resi_status = 'M';
	}

//JRS 147
//10th March 2005
	if(afis_flag_ind == -1)
	{
		afis_flag = '\0';
	}

	jpn_upd.bypass_afis_ind = afis_flag; // included for IJPN

	if((birthdate_ind == 0) && (birthdate[0] != '\0'))
	{
		strcpy(jpn_upd.afis_1n_misc.dob , birthdate);
	}

	if(unknown_birth_ind == -1)
	{
#ifdef DEBUG
		userlog("upd_appnt_demo_info : unknown birth indicator selected is null assuming it to be 1");
#endif

		unknown_birth = '0';
	
	}
	
	jpn_upd.afis_1n_misc.unknown_birth_ind = unknown_birth;

	strcpy(sysdate, get_date());

	if(get_age(birthdate, sysdate) < 18)
	{
		juvenile_flag = '0';
	}
	else
	{
		juvenile_flag = '1';
	}

	jpn_upd.misc.juvenile_flag = juvenile_flag;

	if(card_version_ind == -1 || card_version == 0)
		card_version = 1;

	//jpn_upd.misc.card_version = card_version; //Commented as per IJPN Requirement
	/* commented on 27/03/2002 requirement from vasanth & soraya  by shiva.p */
	/*	if (afis_flag == '2' || afis_flag == '8' || afis_flag == '9') */

	if(req->header.application_id[14] =='4' || req->header.application_id[14] == '5' ) 
	{
		/* EXEC SQL SELECT PHOTOCAPTURE INTO :photo_cature_flag
		FROM APPLICATION WHERE
		APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select PHOTOCAPTURE into :b0  from APPLICATION where APPLID\
=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1642;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&photo_cature_flag;
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


		if (SQLCODE != 0)
		{
#ifdef DEBUG
			userlog("upd_appnt_demo_info : Select from QCFLAG (AFIS) failed : %s", SQLMSG); 
#endif
			strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from APPLICATION(QCFLAG) failed");
			sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from APPLICATION(QCFLAG) failed  :%s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
				
			return SELECT_ERROR;
		}


		if(photo_cature_flag == 'C')
			jpn_upd.trans_type = TXN_TYPE_AFIS_1N;
		else
			jpn_upd.trans_type = TXN_TYPE_JPN_UPDATE;
	}
	else
	{
		jpn_upd.trans_type = TXN_TYPE_AFIS_1N;
	}

	cardstat = LOST;

/*	EXEC SQL SELECT COUNT(*) INTO :lost_count
		FROM CARD_STATUS 
		WHERE KPTNO = :kptno:kptno_ind
		AND CARDSTAT = :cardstat;
*/

	/* EXEC SQL SELECT CARDLOSTCNT INTO :lost_count:lost_count_ind
		FROM APPNT_JPN_INFO
		WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select CARDLOSTCNT into :b0:b1  from APPNT_JPN_INFO where AP\
PLID=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1665;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&lost_count;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&lost_count_ind;
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
		userlog("upd_appnt_demo_info : Select from APPNT_JPN_INFO failed : %s", SQLMSG); 
#endif
		strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from APPNT_JPN_INFO failed");
		sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from APPNT_JPN_INFO failed  :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	if (lost_count > 0)
	{
		jpn_upd.afis_1n_misc.lost_card_count = lost_count;
		//jpn_upd.afis_1n_misc.lost_card_count_ind = 0;
	}
	//else  // commnted this on 31/03/2014 for 3.27
	//{
	//	jpn_upd.afis_1n_misc.lost_card_count = lost_count;
	//	//jpn_upd.afis_1n_misc.lost_card_count_ind = -1;
	//}

	if(first_time_ind == YES)
	{
		jpn_upd.afis_1n_misc.first_time_ind = '0';
	}
	else
	{
		jpn_upd.afis_1n_misc.first_time_ind = '1';
	}

	/* Retrieve the old and new addresses */

	if (SUCCESS != (ret_code = get_address(req->header.application_id, &(jpn_upd.old_address), &(jpn_upd.new_address), &address_flag,ctx)))
	{
#ifdef DEBUG
		userlog("upd_appnt_demo_info : get_address() failed with %d", ret_code);
#endif
		return ret_code;
	}

#ifdef DEBUG
		userlog("upd_appnt_demo_info : Address update flag - %c", address_flag);
#endif


	/* Send the old and new address only if both are different */
	
	if (address_flag == NO)
	{
		memset(jpn_upd.old_address, '\0', sizeof(ADDRESS_T));
		memset(jpn_upd.new_address, '\0', sizeof(ADDRESS_T));
	}
	else
	{
		/* Delete the Address record failed to sent to Legacy in LEGACY_REQUEST , if any */

		addr_flag = ADDRESS_UPD;
		agency = JPN_ID;
		req_stat1 = REQ_NOT_SENT;
		req_stat2 = REPLY_NOT_RECIEVED;

		/* EXEC SQL DELETE FROM IJPN_LEGACY_REQUEST
			WHERE APPLID = :appl_id
			AND LEGREQFLAG = :addr_flag
			AND CHECKAGENCY = :agency
			AND LEGREQSTAT IN (:req_stat1, :req_stat2); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "delete  from IJPN_LEGACY_REQUEST  where (((APPLID=:b0 and L\
EGREQFLAG=:b1) and CHECKAGENCY=:b2) and LEGREQSTAT in (:b3,:b4))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1688;
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
  sqlstm.sqhstv[1] = (         void  *)&addr_flag;
  sqlstm.sqhstl[1] = (unsigned int  )1;
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
  sqlstm.sqhstv[3] = (         void  *)&req_stat1;
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&req_stat2;
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



		if(SQLCODE != 0 && !NO_DATA_FOUND)
		{
#ifdef DEBUG
			userlog("upd_appnt_demo_info : Deletion from IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"upd_appnt_demo_info: Deletion from IJPN_LEGACY_REQUEST failed");
			sprintf(excep_log.error_msg, "upd_appnt_demo_info: Deletion from IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			if (jpn_upd.old_address != NULL)
				free(jpn_upd.old_address);

			if (jpn_upd.new_address != NULL)
				free(jpn_upd.new_address);

			return DELETE_ERROR;
		}
		
	}

	/* Get the applicant images */
/* commented for IJPN as images are taken care by AFIS system
	EXEC SQL EXECUTE
		BEGIN
		GET_APPNT_IMAGES(:appl_id, :finger_acq_src:finger_acq_src_ind,
		:quality_stat:quality_stat_ind, :updateprintsind:updateprintsind_ind, 
		:lowres_buf:lowres_buf_ind, :highres_buf:highres_buf_ind, 
		:lforg_buf:lforg_buf_ind, :lfnorm_buf:lfnorm_buf_ind,
		:lfimg_buf:lfimg_buf_ind, :lfmatrix_buf:lfmatrix_buf_ind, 
		:rforg_buf:rforg_buf_ind, :rfnorm_buf:rfnorm_buf_ind,
		:rfimg_buf:rfimg_buf_ind, :rfmatrix_buf:rfmatrix_buf_ind, 
		:read_ind);
		END;
	END-EXEC;
*/

	/* Get the applicant minutiae */

	/* EXEC SQL EXECUTE
		BEGIN
		GET_APPNT_MINUTIAE(:appl_id, :finger_acq_src:finger_acq_src_ind,
		:quality_stat:quality_stat_ind, :updateprintsind:updateprintsind_ind,
		:lowres_buf:lowres_buf_ind,
		:lforg_buf:lforg_buf_ind, :lfnorm_buf:lfnorm_buf_ind,		
		:rforg_buf:rforg_buf_ind, :rfnorm_buf:rfnorm_buf_ind,		
		:read_ind);
		END;
	END-EXEC; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "begin GET_APPNT_MINUTIAE ( :appl_id , :finger_acq_src:finger\
_acq_src_ind , :quality_stat:quality_stat_ind , :updateprintsind:updateprintsi\
nd_ind , :lowres_buf:lowres_buf_ind , :lforg_buf:lforg_buf_ind , :lfnorm_buf:l\
fnorm_buf_ind , :rforg_buf:rforg_buf_ind , :rfnorm_buf:rfnorm_buf_ind , :read_\
ind ) ; END ;";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1723;
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
 sqlstm.sqhstv[1] = (         void  *)&finger_acq_src;
 sqlstm.sqhstl[1] = (unsigned int  )1;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&finger_acq_src_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&quality_stat;
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&quality_stat_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&updateprintsind;
 sqlstm.sqhstl[3] = (unsigned int  )1;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&updateprintsind_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&lowres_buf;
 sqlstm.sqhstl[4] = (unsigned int  )5004;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&lowres_buf_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&lforg_buf;
 sqlstm.sqhstl[5] = (unsigned int  )604;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&lforg_buf_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&lfnorm_buf;
 sqlstm.sqhstl[6] = (unsigned int  )604;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&lfnorm_buf_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&rforg_buf;
 sqlstm.sqhstl[7] = (unsigned int  )604;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&rforg_buf_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&rfnorm_buf;
 sqlstm.sqhstl[8] = (unsigned int  )604;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&rfnorm_buf_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&read_ind;
 sqlstm.sqhstl[9] = (unsigned int  )1;
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



		if(SQLCODE != 0)
		{
#ifdef DEBUG
			userlog("upd_appnt_demo_info : Failed to call stored procedure GET_APPNT_MINUTIAE : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"upd_appnt_demo_info: Failed to call stored procedure GET_APPNT_MINUTIAE ");
			sprintf(excep_log.error_msg, "upd_appnt_demo_info: Failed to call stored procedure GET_APPNT_MINUTIAE : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			if (jpn_upd.old_address != NULL)
				free(jpn_upd.old_address);

			if (jpn_upd.new_address != NULL)
				free(jpn_upd.new_address);

			return STORED_PROC_ERROR;
		}

#ifdef DEBUG
		userlog("upd_appnt_demo_info : Call to stored procedure GET_APPNT_MINUTIAE succesfull");
		userlog("upd_appnt_demo_info : Read indicator - %c",read_ind);
#endif

		/* EXEC SQL SELECT LFIND, LFMINUTIAEQUAL, RFIND, RFMINUTIAEQUAL, 
					LTHSTAT, LFPATTERN, RTHSTAT, RFPATTERN
		INTO  :lf_ind:lf_ind_ind, :lfquality:lfquality_ind,
			  :rf_ind:rf_ind_ind, :rfquality:rfquality_ind,
			  :lf_thstat:lf_thstat_ind, :lf_pattern:lf_pattern_ind,
			  :rf_thstat:rf_thstat_ind, :rf_pattern:rf_pattern_ind
		FROM APPNT_JPN_IMG
		WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select LFIND ,LFMINUTIAEQUAL ,RFIND ,RFMINUTIAEQUAL ,LTHSTA\
T ,LFPATTERN ,RTHSTAT ,RFPATTERN into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:\
b11,:b12:b13,:b14:b15  from APPNT_JPN_IMG where APPLID=:b16";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1778;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&lf_ind;
  sqlstm.sqhstl[0] = (unsigned int  )5;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&lf_ind_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&lfquality;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&lfquality_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&rf_ind;
  sqlstm.sqhstl[2] = (unsigned int  )5;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&rf_ind_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&rfquality;
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&rfquality_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&lf_thstat;
  sqlstm.sqhstl[4] = (unsigned int  )1;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&lf_thstat_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&lf_pattern;
  sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&lf_pattern_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&rf_thstat;
  sqlstm.sqhstl[6] = (unsigned int  )1;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&rf_thstat_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&rf_pattern;
  sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&rf_pattern_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)appl_id;
  sqlstm.sqhstl[8] = (unsigned int  )20;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)0;
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



		if(SQLCODE != 0)
		{
#ifdef DEBUG
			userlog("upd_appnt_demo_info : Failed to select from APPNT_JPN_IMG : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"upd_appnt_demo_info: Failed to select from APPNT_JPN_IMG");
			sprintf(excep_log.error_msg, "upd_appnt_demo_info: Failed to select from APPNT_JPN_IMG : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			if (jpn_upd.old_address != NULL)
				free(jpn_upd.old_address);

			if (jpn_upd.new_address != NULL)
				free(jpn_upd.new_address);

			return SELECT_ERROR;
		}

#ifdef DEBUG
		userlog("upd_appnt_demo_info : Select from APPNT_JPN_IMG successfull");
#endif

	if(lf_ind_ind == -1)
	{
		strcpy(lf_ind.arr, "\0");
	}
	else
	{
		setnull(lf_ind);
	}

	if(rf_ind_ind == -1)
	{
		strcpy(rf_ind.arr, "\0");
	}
	else
	{
		setnull(rf_ind);
	}

	if(lfquality_ind == -1)
	{
		lfquality = '\0';
	}

	if(rfquality_ind == -1)
	{
		rfquality = '\0';
	}

	if(quality_stat_ind == -1)
	{
		jpn_upd.misc.quality_status = quality_stat = '\0';
	}
	else
	{
		jpn_upd.misc.quality_status = quality_stat + '0';
	}

	if(finger_acq_src_ind == -1)
	{
		jpn_upd.misc.finger_acquision_source = finger_acq_src = '\0';
	}
	else
	{
		jpn_upd.misc.finger_acquision_source = finger_acq_src;
	}

	if(updateprintsind_ind == -1)
	{
		jpn_upd.misc.update_prints_ind = '\0';
	}
	else
	{
		jpn_upd.misc.update_prints_ind = updateprintsind ;
	}

	if(lf_thstat_ind == -1)
	{
		lf_thstat = '\0';
	}

	if(rf_thstat_ind == -1)
	{
		rf_thstat = '\0';
	}

	if(lf_pattern_ind == -1)
	{
		lf_pattern = 0;
	}
	
	if(rf_pattern_ind == -1)
	{
		rf_pattern = 0;
	}
		
	strcpy(jpn_upd.lfinger.finger_ind, lf_ind.arr);
	jpn_upd.lfinger.quality_score = lfquality;

	if(lf_pattern_ind != -1)
	{
		jpn_upd.lfinger.finger_pattern = (unsigned char)lf_pattern;
	}
	else
	{
		jpn_upd.lfinger.finger_pattern = 0;
	}

	if(lf_thstat_ind != -1)
	{
		jpn_upd.lfinger.thumb_status = lf_thstat - '0';
	}
	else
	{
		jpn_upd.lfinger.thumb_status = '\0';
	}
	
/*
	if(lfimg_buf_ind != -1)
	{
		jpn_upd.lfinger.fp_img_size = lfimg_buf.len;
	}
	else
	{
		lfimg_buf.len = 0;
		jpn_upd.lfinger.fp_img_size = 0;
	}
*/
	if(lforg_buf_ind != -1)
	{
		/* Check for the exact minutia length */

		if (lforg_buf.len != 0 && lforg_buf.len != EXACT_MINUTIAE_SIZE)
		{
#ifdef DEBUG
			userlog("upd_appnt_demo_info : Wrong Left finger original minutia size - %d", lforg_buf.len);
#endif
			strcpy(prog_log.remarks,"upd_appnt_demo_info : Left finger original minutia size is wrong");
			sprintf(excep_log.error_msg, "upd_appnt_demo_info : Left finger original minutia size is wrong - %d", lforg_buf.len);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
							
			if (jpn_upd.old_address != NULL)
				free(jpn_upd.old_address);

			if (jpn_upd.new_address != NULL)
				free(jpn_upd.new_address);

			return WRONG_MINUT_SIZE;
		}

		jpn_upd.lfinger.orginal_minutiae_size = lforg_buf.len;
	}
	else
	{
		lforg_buf.len = 0;
		jpn_upd.lfinger.orginal_minutiae_size = EXACT_MINUTIAE_SIZE; 
	
	}

	if(lfnorm_buf_ind != -1)
	{
		/* Check for the exact minutia length */

		if (lfnorm_buf.len != 0 && lfnorm_buf.len != EXACT_MINUTIAE_SIZE)
		{
#ifdef DEBUG
			userlog("upd_appnt_demo_info : Wrong Left finger normalised minutia size - %d", lfnorm_buf.len);
#endif
			strcpy(prog_log.remarks,"upd_appnt_demo_info : Left finger normalised minutia size is wrong");
			sprintf(excep_log.error_msg, "upd_appnt_demo_info : Left finger normalised minutia size is wrong - %d", lfnorm_buf.len);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
							
			if (jpn_upd.old_address != NULL)
				free(jpn_upd.old_address);

			if (jpn_upd.new_address != NULL)
				free(jpn_upd.new_address);

			return WRONG_MINUT_SIZE;
		}

		jpn_upd.lfinger.normalized_minutiae_size = lfnorm_buf.len;
	}
	else
	{
		lfnorm_buf.len = 0;
		jpn_upd.lfinger.normalized_minutiae_size = EXACT_MINUTIAE_SIZE; 
		
	}
/*
	if(lfmatrix_buf_ind != -1)
	{
		jpn_upd.lfinger.matrix_buffer_size = lfmatrix_buf.len;
	}
	else
	{
		lfmatrix_buf.len = 0;
		jpn_upd.lfinger.matrix_buffer_size = 0;
	}
*/
	
	strcpy(jpn_upd.rfinger.finger_ind, rf_ind.arr);
	jpn_upd.rfinger.quality_score = rfquality;

	if(rf_pattern_ind != -1)
	{
		jpn_upd.rfinger.finger_pattern = (unsigned char)rf_pattern;
	}
	else
	{
		jpn_upd.rfinger.finger_pattern = 0;
	}

	if(rf_thstat_ind != -1)
	{
		jpn_upd.rfinger.thumb_status = rf_thstat - '0';
	}
	else
	{
		jpn_upd.rfinger.thumb_status = '\0';
	}

/*
	if(rfimg_buf_ind != -1)
	{
		jpn_upd.rfinger.fp_img_size = rfimg_buf.len;
	}
	else
	{
		rfimg_buf.len = 0;
		jpn_upd.rfinger.fp_img_size = 0;
	}
*/

	if(rforg_buf_ind != -1)
	{
		/* Check for the exact minutia length */

		if (rforg_buf.len != 0 && rforg_buf.len != EXACT_MINUTIAE_SIZE)
		{
#ifdef DEBUG
			userlog("upd_appnt_demo_info : Wrong Right finger original minutia size - %d", rforg_buf.len);
#endif
			strcpy(prog_log.remarks,"upd_appnt_demo_info : Right finger original minutia size is wrong");
			sprintf(excep_log.error_msg, "upd_appnt_demo_info : Right finger original minutia size is wrong - %d", rforg_buf.len);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
							
			if (jpn_upd.old_address != NULL)
				free(jpn_upd.old_address);

			if (jpn_upd.new_address != NULL)
				free(jpn_upd.new_address);

			return WRONG_MINUT_SIZE;
		}

		jpn_upd.rfinger.orginal_minutiae_size = rforg_buf.len;
	}
	else
	{
		rforg_buf.len = 0;
		jpn_upd.rfinger.orginal_minutiae_size = EXACT_MINUTIAE_SIZE; 
	
	}

	if(rfnorm_buf_ind != -1)
	{
		/* Check for the exact minutia length */

		if (rfnorm_buf.len != 0 && rfnorm_buf.len != EXACT_MINUTIAE_SIZE)
		{
#ifdef DEBUG
			userlog("upd_appnt_demo_info : Wrong Right finger normalised minutia size - %d", rfnorm_buf.len);
#endif
			strcpy(prog_log.remarks,"upd_appnt_demo_info : Right finger normalised minutia size is wrong");
			sprintf(excep_log.error_msg, "upd_appnt_demo_info : Right finger normalised minutia size is wrong - %d", rfnorm_buf.len);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
							
			if (jpn_upd.old_address != NULL)
				free(jpn_upd.old_address);

			if (jpn_upd.new_address != NULL)
				free(jpn_upd.new_address);

			return WRONG_MINUT_SIZE;
		}

		jpn_upd.rfinger.normalized_minutiae_size = rfnorm_buf.len;
	}
	else
	{
		rfnorm_buf.len = 0;
		jpn_upd.rfinger.normalized_minutiae_size = EXACT_MINUTIAE_SIZE; 
	
	}
/*
	if(rfmatrix_buf_ind != -1)
	{
		jpn_upd.rfinger.matrix_buffer_size = rfmatrix_buf.len;
	}
	else
	{
		rfmatrix_buf.len = 0;
		jpn_upd.rfinger.matrix_buffer_size = 0;
	}

	if(highres_buf_ind != -1)
	{
		jpn_upd.hi_res_portrait.portrait_size = highres_buf.len;
	}
	else
	{
		jpn_upd.hi_res_portrait.portrait_size = highres_buf.len = 0;
	}
*/

	if(lowres_buf_ind != -1)
	{
		jpn_upd.low_res_portrait.portrait_size = lowres_buf.len;
	}
	else
	{
		jpn_upd.low_res_portrait.portrait_size = lowres_buf.len = 0;
	}

	/*Left Finger Image*/
/*
	if(lfimg_buf.len != 0)
	{
		jpn_upd.lfinger.fp_img_buff = (unsigned char *)malloc(lfimg_buf.len);

		if(jpn_upd.lfinger.fp_img_buff == NULL)
		{
			strcpy(imageremark,"upd_appnt_demo_info : Error in allocating memory for left finger image");
			error_log_for_malloc(imageremark,ctx);
			return MALLOC_ERROR;
		}
		memcpy(jpn_upd.lfinger.fp_img_buff, lfimg_buf.arr, lfimg_buf.len);
	}
	else
	{
		jpn_upd.lfinger.fp_img_buff = NULL;
	}
*/
	/*Left Finger Original Minutiae*/
	if(lforg_buf.len != 0)
	{
		jpn_upd.lfinger.org_minutiae_buff = (unsigned char *)malloc(lforg_buf.len);

		if(jpn_upd.lfinger.org_minutiae_buff == NULL)
		{
			strcpy(imageremark,"upd_appnt_demo_info : Error in allocating memory for original minu buffer");
			error_log_for_malloc(imageremark,ctx);
			return MALLOC_ERROR;
		}

		memcpy(jpn_upd.lfinger.org_minutiae_buff, lforg_buf.arr, lforg_buf.len);
	}
	else
	{
		
		 jpn_upd.lfinger.org_minutiae_buff = (unsigned char *)malloc(EXACT_MINUTIAE_SIZE);

		if(jpn_upd.lfinger.org_minutiae_buff == NULL)
		{
			strcpy(imageremark,"upd_appnt_demo_info : Error in allocating memory for original minu buffer");
			error_log_for_malloc(imageremark,ctx);
			return MALLOC_ERROR;
		}

		memset(jpn_upd.lfinger.org_minutiae_buff, (int)NULL, EXACT_MINUTIAE_SIZE); 

	}


	/*Left Finger Normalised Minutiae*/
	if(lfnorm_buf.len != 0)
	{
		jpn_upd.lfinger.norm_minutiae_buff = (unsigned char *)malloc(lfnorm_buf.len);

		if(jpn_upd.lfinger.norm_minutiae_buff == NULL)
		{
			strcpy(imageremark,"upd_appnt_demo_info : Error in allocating memory for normal minu buffer");
			error_log_for_malloc(imageremark,ctx);
			return MALLOC_ERROR;
		}
		memcpy(jpn_upd.lfinger.norm_minutiae_buff, lfnorm_buf.arr, lfnorm_buf.len);
	}
	else
	{
		 jpn_upd.lfinger.norm_minutiae_buff = (unsigned char *)malloc(EXACT_MINUTIAE_SIZE);

		if(jpn_upd.lfinger.norm_minutiae_buff == NULL)
		{
			strcpy(imageremark,"upd_appnt_demo_info : Error in allocating memory for normal minu buffer");
			error_log_for_malloc(imageremark,ctx);
			return MALLOC_ERROR;
		}
		memset(jpn_upd.lfinger.norm_minutiae_buff, (int)NULL, EXACT_MINUTIAE_SIZE); 

	}


	/*Left Finger Matrix Buffer*/
/*
	if(lfmatrix_buf.len != 0)
	{
		jpn_upd.lfinger.matrix_buffer = (unsigned char *)malloc(lfmatrix_buf.len);

		if(jpn_upd.lfinger.matrix_buffer == NULL)
		{
			strcpy(imageremark,"upd_appnt_demo_info : Error in allocating memory for left matrix buffer");
			error_log_for_malloc(imageremark,ctx);
			return MALLOC_ERROR;
		}

		memcpy(jpn_upd.lfinger.matrix_buffer, lfmatrix_buf.arr, lfmatrix_buf.len);
	}
	else
	{
		jpn_upd.lfinger.matrix_buffer = NULL;
	}
*/

	/*Right Finger Image*/
/*
	if(rfimg_buf.len != 0)
	{
		jpn_upd.rfinger.fp_img_buff = (unsigned char *)malloc(rfimg_buf.len);

		if(jpn_upd.rfinger.fp_img_buff == NULL)
		{
			strcpy(imageremark,"upd_appnt_demo_info : Error in allocating memory for right finger image");
			error_log_for_malloc(imageremark,ctx);
			return MALLOC_ERROR;
		}

		memcpy(jpn_upd.rfinger.fp_img_buff, rfimg_buf.arr, rfimg_buf.len);
	}
	else
	{
		jpn_upd.rfinger.fp_img_buff = NULL;
	}
*/

	/*Right Finger Original Minutiae*/
	if(rforg_buf.len != 0)
	{
		jpn_upd.rfinger.org_minutiae_buff = (char *)malloc(rforg_buf.len);

		if(jpn_upd.rfinger.org_minutiae_buff == NULL)
		{
			strcpy(imageremark,"upd_appnt_demo_info : Error in allocating memory for right original minutiae");
			error_log_for_malloc(imageremark,ctx);
			return MALLOC_ERROR;
		}

		memcpy(jpn_upd.rfinger.org_minutiae_buff, rforg_buf.arr, rforg_buf.len);
	}
	else
	{
		
		jpn_upd.rfinger.org_minutiae_buff = (char *)malloc(EXACT_MINUTIAE_SIZE);

		if(jpn_upd.rfinger.org_minutiae_buff == NULL)
		{
			strcpy(imageremark,"upd_appnt_demo_info : Error in allocating memory for right original minutiae");
			error_log_for_malloc(imageremark,ctx);
			return MALLOC_ERROR;
		}
		memset(jpn_upd.rfinger.org_minutiae_buff, (int)NULL, EXACT_MINUTIAE_SIZE); 
		
	}

	/*Right Finger Normalised Minutiae*/
	if(rfnorm_buf.len != 0)
	{
		jpn_upd.rfinger.norm_minutiae_buff = (unsigned char *)malloc(rfnorm_buf.len);

		if(jpn_upd.rfinger.norm_minutiae_buff == NULL)
		{
			strcpy(imageremark,"upd_appnt_demo_info : Error in allocating memory for right finger normalised image");
			error_log_for_malloc(imageremark,ctx);
			return MALLOC_ERROR;
		}

		memcpy(jpn_upd.rfinger.norm_minutiae_buff, rfnorm_buf.arr, rfnorm_buf.len);
	}
	else
	{
		jpn_upd.rfinger.norm_minutiae_buff = (unsigned char *)malloc(EXACT_MINUTIAE_SIZE);
		if(jpn_upd.rfinger.norm_minutiae_buff == NULL)
		{
			strcpy(imageremark,"upd_appnt_demo_info : Error in allocating memory for right finger normalised image");
			error_log_for_malloc(imageremark,ctx);
			return MALLOC_ERROR;
		}

		memset(jpn_upd.rfinger.norm_minutiae_buff, (int)NULL, EXACT_MINUTIAE_SIZE); 
		
	}

	/*Right Finger Matrix Buffer*/
/*
	if(rfmatrix_buf.len != 0)
	{
		jpn_upd.rfinger.matrix_buffer = (unsigned char *)malloc(rfmatrix_buf.len);

		if(jpn_upd.rfinger.matrix_buffer == NULL)
		{
			strcpy(imageremark,"upd_appnt_demo_info : Error in allocating memory for right finger matrix buffer");
			error_log_for_malloc(imageremark,ctx);
			return MALLOC_ERROR;
		}

		memcpy(jpn_upd.rfinger.matrix_buffer, rfmatrix_buf.arr, rfmatrix_buf.len);
	}
	else
	{
		jpn_upd.rfinger.matrix_buffer = NULL;
	}
*/	
	/* High Res Photo */
/*
	jpn_upd.hi_res_portrait.portrait_buff = (unsigned char *)malloc(highres_buf.len);

	if(jpn_upd.hi_res_portrait.portrait_buff == NULL)
	{
		strcpy(imageremark,"upd_appnt_demo_info : Error in allocating memory for high resolution potraint");
		error_log_for_malloc(imageremark,ctx);
		return MALLOC_ERROR;
	}

	memcpy(jpn_upd.hi_res_portrait.portrait_buff, highres_buf.arr, highres_buf.len);
*/
	//
	/* Low Res Photo 
	jpn_upd.low_res_portrait.portrait_buff = (char *)malloc(lowres_buf.len);

	if(jpn_upd.low_res_portrait.portrait_buff == NULL)
	{
		strcpy(imageremark,"upd_appnt_demo_info : Error in allocating memory for low resolution potraint");
		error_log_for_malloc(imageremark,ctx);
		return MALLOC_ERROR;
	}

	// Added this on 10/11/2010 to stop sending the demo update 
	// when lowres photo size less than 2k

	if(lowres_buf.len < 2049)
	{
		#ifdef DEBUG
			userlog("upd_appnt_demo_info : Lowres photo size is less than 2k"); 
		#endif
		strcpy(prog_log.remarks,"upd_appnt_demo_info : Lowres photo size is less than 2k");
		sprintf(excep_log.error_msg,"upd_appnt_demo_info : Lowres photo size is less than 2k");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;

	}

    
	// 10/11/2010

	memcpy(jpn_upd.low_res_portrait.portrait_buff, lowres_buf.arr, lowres_buf.len); 

    */
 
	// Compressing Low Res Photo 

	#ifdef DEBUG
		userlog(" ");
		userlog("upd_appnt_demo_info : low_res photo compression starts");
		userlog("upd_appnt_demo_info : Before calling compress_photo ctx:%u, kptno:%s",ctx,jpn_upd.misc.applicant_kpt);
		userlog("upd_appnt_demo_info : low_res portrait_size before compression:%d",lowres_buf.len);
		
	#endif

		
	/* Low res photo is compressed to 2.9k size now for IJPN */
	if(lowres_buf.len > 0)
	{
      // compressing the low res photo here
	 //pret = compress_photo(jpn_upd.low_res_portrait.portrait_buff, jpn_upd.low_res_portrait.portrait_size, &pnew_buff, &plen, ctx);
	 //pret = ncompress_photo((char *)lowres_buf.arr, lowres_buf.len, &pnew_buff, &plen, jpn_upd.misc.applicant_kpt, ctx);
	   pret = ncompress_photo((char *)lowres_buf.arr, lowres_buf.len, &pnew_buff, &plen, jpn_upd.misc.applicant_kpt, req->header.application_id, ctx);
	 if (pret != GMPC_GOOD)
	 {
		userlog("upd_appnt_demo_info : Unable to compress low res photo");
		return GMPC_BAD;
	 }

	    //free(jpn_upd->low_res_portrait.portrait_buff);

		jpn_upd.low_res_portrait.portrait_buff = (char *)malloc(plen);

		if(jpn_upd.low_res_portrait.portrait_buff == NULL)
		{
			strcpy(imageremark,"upd_appnt_demo_info : Error in allocating memory for low resolution potraint");
			error_log_for_malloc(imageremark,ctx);
			return MALLOC_ERROR;
		}

		// Added this on 10/11/2010 to stop sending the demo update 
		// when lowres photo size less than 2k

		if(plen < 2049)
		{
			#ifdef DEBUG
				userlog("upd_appnt_demo_info : Lowres photo size is less than 2k"); 
			#endif
			strcpy(prog_log.remarks,"upd_appnt_demo_info : Lowres photo size is less than 2k");
			sprintf(excep_log.error_msg,"upd_appnt_demo_info : Lowres photo size is less than 2k");
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
					
			return SELECT_ERROR;

		}

		//memset(jpn_upd.low_res_portrait.portrait_buff, '\0', plen);
		jpn_upd.low_res_portrait.portrait_size = 0;

		// low res photo and size values are copied here after Compression
		memcpy(jpn_upd.low_res_portrait.portrait_buff, pnew_buff, plen);
		jpn_upd.low_res_portrait.portrait_size = plen;

		#ifdef DEBUG
			userlog("upd_appnt_demo_info : low_res portrait_size after compression:%d",jpn_upd.low_res_portrait.portrait_size);
			userlog("upd_appnt_demo_info : low_res photo compression ends");
			userlog(" ");
		#endif

	}

	// Compressing Photo


// Added this code for sending the following fields userid and timestamp to host on 17/04/2009

	if(txn_details->txn_type == TXN_FT)
	{

		// modified on 24/02/2010 included the following 2 queries
		lxqcount = 0;
		/* EXEC SQL
			SELECT COUNT(*) INTO :lxqcount
					FROM APPL_HISTORY
					WHERE APPLID = :appl_id
					AND APPLSTAT IN ('X','Q'); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPL_HISTORY where (APPLID=\
:b1 and APPLSTAT in ('X','Q'))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1829;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&lxqcount;
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



		if(lxqcount != 0)
		{

			/* EXEC SQL
			    SELECT USERID,TO_CHAR(TIMESTAMP,'DDMMYYYY') INTO :user_id,tstamp  
					FROM APPLICATION
					WHERE APPLID = :appl_id
					AND APPLSTAT IN ('A','D'); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 47;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select USERID ,TO_CHAR( timestamp ,'DDMMYYYY') into :b0,:b\
1  from APPLICATION where (APPLID=:b2 and APPLSTAT in ('A','D'))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1852;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&user_id;
   sqlstm.sqhstl[0] = (unsigned int  )11;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)tstamp;
   sqlstm.sqhstl[1] = (unsigned int  )9;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
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


			
		}
		else
		{


		/* EXEC SQL
			    SELECT USERID,TO_CHAR(TIMESTAMP,'DDMMYYYY') INTO :user_id,tstamp  
					FROM APPL_HISTORY
					WHERE APPLID = :appl_id
					AND APPLSTAT = 'V'
					AND ROWNUM = 1; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select USERID ,TO_CHAR( timestamp ,'DDMMYYYY') into :b0,:b1\
  from APPL_HISTORY where ((APPLID=:b2 and APPLSTAT='V') and ROWNUM=1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1879;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&user_id;
  sqlstm.sqhstl[0] = (unsigned int  )11;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)tstamp;
  sqlstm.sqhstl[1] = (unsigned int  )9;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
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



		}

		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog("upd_appnt_demo_info : Select from APPL_HISTORY of userid and timestamp failed : %s", SQLMSG); 
		#endif
			strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from APPL_HISTORY(userid and timestamp) failed");
			sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from APPL_HISTORY(userid and timestamp) failed  :%s", SQLMSG);
			//excep_log.termination_flag = YES;
			//excep_log.severity = FATAL;

			//log_error(ctx);
				
			//return SELECT_ERROR;
		}

		user_id.arr[user_id.len] = '\0';


		if((user_id.arr[0] != '\0') && (user_id.arr[0] != ' '))
			  strcpy(jpn_upd.apprv_user_id,user_id.arr);

		if((tstamp[0] != '\0') && (tstamp[0] != ' '))
			  strcpy(jpn_upd.approve_date,tstamp);

		#ifdef DEBUG
			userlog("upd_appnt_demo_info : in if, Select from APPL_HISTORY of userid and timestamp : %s and %s", user_id.arr,tstamp); 
		#endif

	}
	else if(txn_details->txn_type == TXN_12YO)
	{
		
		/* EXEC SQL
			    SELECT USERID,TO_CHAR(TIMESTAMP,'DDMMYYYY') INTO :user_id,tstamp  
					FROM APPLICATION
					WHERE APPLID = :appl_id
					AND APPLSTAT  IN ( 'A','D'); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select USERID ,TO_CHAR( timestamp ,'DDMMYYYY') into :b0,:b1\
  from APPLICATION where (APPLID=:b2 and APPLSTAT in ('A','D'))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1906;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&user_id;
  sqlstm.sqhstl[0] = (unsigned int  )11;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)tstamp;
  sqlstm.sqhstl[1] = (unsigned int  )9;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
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
			userlog("upd_appnt_demo_info : in else if, Select from APPLICATION of userid and timestamp failed : %s", SQLMSG); 
		#endif
			strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from APPLICATION(userid and timestamp) failed");
			sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from APPLICATION(userid and timestamp) failed  :%s", SQLMSG);
			//excep_log.termination_flag = YES;
			//excep_log.severity = FATAL;

			//log_error(ctx);
				
			//return SELECT_ERROR;
		}

		
		user_id.arr[user_id.len] = '\0';

		if((user_id.arr[0] != '\0') && (user_id.arr[0] != ' '))
			  strcpy(jpn_upd.apprv_user_id,user_id.arr);

		if((tstamp[0] != '\0') && (tstamp[0] != ' '))
			  strcpy(jpn_upd.approve_date,tstamp);

		#ifdef DEBUG
			userlog("upd_appnt_demo_info : in else if, Select from APPLICATION of userid and timestamp : %s and %s", user_id.arr,tstamp); 
		#endif

	}

// code addition to userid and timestamp end 17/04/2009




#ifdef DEBUG
	userlog("upd_appnt_demo_info : Txn type - %d", jpn_upd.trans_type);
	userlog("upd_appnt_demo_info : Siren short name1 - %s", jpn_upd.appnt_names.siren_short_name1);
	userlog("upd_appnt_demo_info : Siren short name2 - %s", jpn_upd.appnt_names.siren_short_name2);
	userlog("upd_appnt_demo_info : GMPC short name1 - %s", jpn_upd.appnt_names.gmpc_short_name1);
	userlog("upd_appnt_demo_info : GMPC short name2 - %s", jpn_upd.appnt_names.gmpc_short_name2);
	userlog("upd_appnt_demo_info : GMPC short name3 - %s", jpn_upd.appnt_names.gmpc_short_name3);
	userlog("upd_appnt_demo_info : Current long name - %s", jpn_upd.appnt_names.current_long_name);
	userlog("upd_appnt_demo_info : Orig name - %s", jpn_upd.appnt_names.original_name);
	userlog("upd_appnt_demo_info : KPT no - %s", jpn_upd.misc.applicant_kpt);
	userlog("upd_appnt_demo_info : GMPC remarks1 - %s", jpn_upd.misc.gmpc_remarks1);
	userlog("upd_appnt_demo_info : GMPC remarks2 - %s", jpn_upd.misc.gmpc_remarks2);
	userlog("upd_appnt_demo_info : Update print ind - %c", jpn_upd.misc.update_prints_ind);
	userlog("upd_appnt_demo_info : Juvenile flag - %c", jpn_upd.misc.juvenile_flag);
	userlog("upd_appnt_demo_info : Quality stat - %c", jpn_upd.misc.quality_status);
	userlog("upd_appnt_demo_info : Ic color code - %c", jpn_upd.misc.ic_colour);
	userlog("upd_appnt_demo_info : Finger acquisition source - %c", jpn_upd.misc.finger_acquision_source);
	//userlog("upd_appnt_demo_info : Card version - %d", jpn_upd.misc.card_version);
	userlog("upd_appnt_demo_info : Orig name ind - %c", jpn_upd.misc.original_name_indicator);
	userlog("upd_appnt_demo_info : Origin ind - %c", jpn_upd.misc.origin_indicator);
	userlog("upd_appnt_demo_info : New address1 - %s", jpn_upd.new_address->address1);
	userlog("upd_appnt_demo_info : New address2 - %s", jpn_upd.new_address->address2);
	userlog("upd_appnt_demo_info : New address3 - %s", jpn_upd.new_address->address3);
	userlog("upd_appnt_demo_info : New post code - %s", jpn_upd.new_address->post_code);
	userlog("upd_appnt_demo_info : New city code - %d", jpn_upd.new_address->city_code);
	userlog("upd_appnt_demo_info : New state code - %s", jpn_upd.new_address->state_code);
	userlog("upd_appnt_demo_info : Old address1 - %s", jpn_upd.old_address->address1);
	userlog("upd_appnt_demo_info : Old address2 - %s", jpn_upd.old_address->address2);
	userlog("upd_appnt_demo_info : Old address3 - %s", jpn_upd.old_address->address3);
	userlog("upd_appnt_demo_info : Old post code - %s", jpn_upd.old_address->post_code);
	userlog("upd_appnt_demo_info : Old city code - %d", jpn_upd.old_address->city_code);
	userlog("upd_appnt_demo_info : Old state code - %s", jpn_upd.old_address->state_code);
	//userlog("upd_appnt_demo_info : HR photo size - %ld", jpn_upd.hi_res_portrait.portrait_size);
	userlog("upd_appnt_demo_info : LR photo size - %ld", jpn_upd.low_res_portrait.portrait_size);
	userlog("upd_appnt_demo_info : LF ind - %s", jpn_upd.lfinger.finger_ind);
	userlog("upd_appnt_demo_info : LF quality score - %ld", jpn_upd.lfinger.quality_score);
	userlog("upd_appnt_demo_info : LF pattern - %c", jpn_upd.lfinger.finger_pattern);
	userlog("upd_appnt_demo_info : LF thumb stat - %c", jpn_upd.lfinger.thumb_status);
	//userlog("upd_appnt_demo_info : LF image size - %ld", jpn_upd.lfinger.fp_img_size);
	userlog("upd_appnt_demo_info : LF orig min size - %ld", jpn_upd.lfinger.orginal_minutiae_size);
	userlog("upd_appnt_demo_info : LF norm min size - %ld", jpn_upd.lfinger.normalized_minutiae_size);
	//userlog("upd_appnt_demo_info : LF matrix size - %ld", jpn_upd.lfinger.matrix_buffer_size);
	userlog("upd_appnt_demo_info : RF ind - %s", jpn_upd.rfinger.finger_ind);
	userlog("upd_appnt_demo_info : RF quality score - %ld", jpn_upd.rfinger.quality_score);
	userlog("upd_appnt_demo_info : RF pattern - %c", jpn_upd.rfinger.finger_pattern);
	userlog("upd_appnt_demo_info : RF thumb stat - %c", jpn_upd.rfinger.thumb_status);
	//userlog("upd_appnt_demo_info : RF image size - %ld", jpn_upd.rfinger.fp_img_size);
	userlog("upd_appnt_demo_info : RF orig min size - %ld", jpn_upd.rfinger.orginal_minutiae_size);
	userlog("upd_appnt_demo_info : RF norm min size - %ld", jpn_upd.rfinger.normalized_minutiae_size);
	//userlog("upd_appnt_demo_info : RF matrix size - %ld", jpn_upd.rfinger.matrix_buffer_size);
	userlog("upd_appnt_demo_info : KPP no - %s", jpn_upd.afis_1n_misc.kpp_no);
	userlog("upd_appnt_demo_info : Police_army_id - %c", jpn_upd.afis_1n_misc.police_army_id);
	userlog("upd_appnt_demo_info : Police_army_no - %s", jpn_upd.afis_1n_misc.police_army_no);
	//userlog("upd_appnt_demo_info : Police no - %s", jpn_upd.afis_1n_misc.police_no);
	//userlog("upd_appnt_demo_info : Army no - %s", jpn_upd.afis_1n_misc.army_no);
	userlog("upd_appnt_demo_info : DOB - %s", jpn_upd.afis_1n_misc.dob);
	userlog("upd_appnt_demo_info : Unknown birth ind - %c", jpn_upd.afis_1n_misc.unknown_birth_ind);
	userlog("upd_appnt_demo_info : First time ind - %c", jpn_upd.afis_1n_misc.first_time_ind);
	userlog("upd_appnt_demo_info : Birth district - %s", jpn_upd.afis_1n_misc.birth_dist_code);
	userlog("upd_appnt_demo_info : Gender - %c", jpn_upd.afis_1n_misc.gender);
	userlog("upd_appnt_demo_info : Religion - %c", jpn_upd.afis_1n_misc.religion);
	userlog("upd_appnt_demo_info : Race - %s", jpn_upd.afis_1n_misc.race);
	userlog("upd_appnt_demo_info : HK ind - %c", jpn_upd.afis_1n_misc.hk_ind);
	userlog("upd_appnt_demo_info : KT ind - %s", jpn_upd.afis_1n_misc.kt_ind);
	userlog("upd_appnt_demo_info : rjind - %s", jpn_upd.rjind);
	userlog("upd_appnt_demo_info : Residence stat - %c", jpn_upd.afis_1n_misc.resi_status);
	userlog("upd_appnt_demo_info : Lost card cnt - %d", jpn_upd.afis_1n_misc.lost_card_count);
	//userlog("upd_appnt_demo_info : Lost card ind - %d", jpn_upd.afis_1n_misc.lost_card_count_ind);
	userlog("upd_appnt_demo_info : Article color code - %s", jpn_upd.misc.art_color_code);
	userlog("upd_appnt_demo_info : Retire date - %s", jpn_upd.misc.retire_date);
	userlog("upd_appnt_demo_info : Pol/Army join date - %s", jpn_upd.misc.pol_army_join_date);
	//userlog("upd_appnt_demo_info : Appl approval date - %s", jpn_upd.misc.appl_approval_date);
	userlog("upd_appnt_demo_info : Green card expiry date - %s", jpn_upd.misc.green_card_exp_date);
	userlog("upd_appnt_demo_info : Person status - %c", jpn_upd.misc.person_status);
	userlog("upd_appnt_demo_info : Citizen nationality code - %s", jpn_upd.misc.citizen_nation_code);

	/* added on 24/09/2002 by shiva.p */
	userlog("upd_appnt_demo_info : name_appr_ref_num - %s", jpn_upd.misc.name_appr_ref_num);
	userlog("upd_appnt_demo_info : name_chg_reason_code - %s", jpn_upd.misc.name_chg_reason_code);
	userlog("upd_appnt_demo_info : name_reg_date - %s", jpn_upd.misc.name_reg_date);
	userlog("upd_appnt_demo_info : imm_ref_number - %s", jpn_upd.misc.imm_ref_number);
	userlog("upd_appnt_demo_info : imm_ref_date - %s", jpn_upd.misc.imm_ref_date);
	userlog("upd_appnt_demo_info : imm_expire_date - %s", jpn_upd.misc.imm_expire_date);
	userlog("upd_appnt_demo_info : passport_no - %s", jpn_upd.misc.passport_no);
	userlog("upd_appnt_demo_info : passport_issue_date - %s", jpn_upd.misc.passport_issue_date);
	userlog("upd_appnt_demo_info : passport_issue_country - %s", jpn_upd.misc.passport_issue_country);

	//userlog("upd_appnt_demo_info : jpn_upd.lfinger.fp_img_buff - %X", jpn_upd.lfinger.fp_img_buff);
	userlog("upd_appnt_demo_info : jpn_upd.lfinger.org_minutiae_buff - %X", jpn_upd.lfinger.org_minutiae_buff);
	userlog("upd_appnt_demo_info : jpn_upd.lfinger.norm_minutiae_buff - %X", jpn_upd.lfinger.norm_minutiae_buff);
	//userlog("upd_appnt_demo_info : jpn_upd.lfinger.matrix_buffer - %X", jpn_upd.lfinger.matrix_buffer);
	//userlog("upd_appnt_demo_info : jpn_upd.rfinger.fp_img_buff - %X", jpn_upd.rfinger.fp_img_buff);
	userlog("upd_appnt_demo_info : jpn_upd.rfinger.org_minutiae_buff - %X", jpn_upd.rfinger.org_minutiae_buff);
	userlog("upd_appnt_demo_info : jpn_upd.rfinger.norm_minutiae_buff - %X", jpn_upd.rfinger.norm_minutiae_buff);
	//userlog("upd_appnt_demo_info : jpn_upd.rfinger.matrix_buffer - %X", jpn_upd.rfinger.matrix_buffer);
	userlog("upd_appnt_demo_info : jpn_upd.low_res_portrait.portrait_buff - %X", jpn_upd.low_res_portrait.portrait_buff);
	//userlog("upd_appnt_demo_info : jpn_upd.hi_res_portrait.portrait_buff - %X", jpn_upd.hi_res_portrait.portrait_buff);

//Commented for GSCB upgrade- 10th March 2005
//JRS 147.
	userlog("upd_appnt_demo_info : jpn_upd.misc.szPermitNo is: %s", jpn_upd.misc.szPermitNo);
	userlog("upd_appnt_demo_info : jpn_upd.misc.szPermitDate is: %s", jpn_upd.misc.szPermitDate);
	userlog("upd_appnt_demo_info : jpn_upd.misc.nEntryPermitType is: %d", jpn_upd.misc.nEntryPermitType);
	userlog("upd_appnt_demo_info : jpn_upd.misc.nDocTypeCode is: %d", jpn_upd.misc.nDocTypeCode);

//JRS 147.
//10th March 2005

	userlog("upd_appnt_demo_info : jpn_upd.jkind - %c", jpn_upd.jkind);
	userlog("upd_appnt_demo_info : jpn_upd.imm_country_code - %s", jpn_upd.imm_country_code);
	userlog("upd_appnt_demo_info : jpn_upd.ijpn_gmpc_ind - %c", jpn_upd.ijpn_gmpc_ind);

	userlog("upd_appnt_demo_info : jpn_upd.appl_branch_code - %s", jpn_upd.appl_branch_code);
	userlog("upd_appnt_demo_info : jpn_upd.telephone_no - %s", jpn_upd.telephone_no);

	// Added this on 17/04/2009
	userlog("upd_appnt_demo_info : jpn_upd.approve_date - %s", jpn_upd.approve_date);
	userlog("upd_appnt_demo_info : jpn_upd.apprv_user_id - %s", jpn_upd.apprv_user_id);

	userlog("upd_appnt_demo_info : jpn_upd.processing_fee - %s", jpn_upd.processing_fee);
	userlog("upd_appnt_demo_info : jpn_upd.calculcated_compound_fee - %s", jpn_upd.calculcated_compound_fee);
	userlog("upd_appnt_demo_info : jpn_upd.special_fee - %s", jpn_upd.special_fee);
	userlog("upd_appnt_demo_info : jpn_upd.paid_fee - %s", jpn_upd.paid_fee);
	userlog("upd_appnt_demo_info : jpn_upd.additional_fee - %s", jpn_upd.additional_fee);
	userlog("upd_appnt_demo_info : jpn_upd.renewal_compound - %s", jpn_upd.renewal_compound);
	userlog("upd_appnt_demo_info : jpn_upd.renewal_18_compound - %s", jpn_upd.renewal_18_compound);
	userlog("upd_appnt_demo_info : jpn_upd.lost_compound - %s", jpn_upd.lost_compound);
	userlog("upd_appnt_demo_info : jpn_upd.card_expired_compound - %s", jpn_upd.card_expired_compound);
	userlog("upd_appnt_demo_info : jpn_upd.damaged_compound - %s", jpn_upd.damaged_compound);

	userlog("upd_appnt_demo_info : jpn_upd.transaction_code - %s", jpn_upd.transaction_code);
	userlog("upd_appnt_demo_info : jpn_upd.application_type - %s", jpn_upd.application_type);
	userlog("upd_appnt_demo_info : jpn_upd.coll_location - %s", jpn_upd.coll_location);
	userlog("upd_appnt_demo_info : jpn_upd.coll_date - %s", jpn_upd.coll_date);
	userlog("upd_appnt_demo_info : jpn_upd.indicator2 - %c", jpn_upd.indicator2);

	userlog("upd_appnt_demo_info : Realease 3.28");
	userlog("upd_appnt_demo_info : jpn_upd.ktareacode - %s", jpn_upd.ktareacode);
	userlog("upd_appnt_demo_info : jpn_upd.apjareacode - %s", jpn_upd.apjareacode);
	
#endif

	/* Get Application date */

	ret_code = get_appl_date(req->header.application_id, leg_header_date, txn_details->txn_type,ctx);

	if (ret_code != SUCCESS )
	{
#ifdef DEBUG
		userlog("upd_appnt_demo_info : get_appl_date() failed with %d", ret_code);
#endif

		/* commeted on 03/05/2002 by shiva.p */

		/* if (jpn_upd.old_address != NULL)
			free(jpn_upd.old_address);

		if (jpn_upd.new_address != NULL)
			free(jpn_upd.new_address); */
/* free comment removed */		
		free_alloced_mem(&jpn_upd, &jpn_fin_data,ctx); /* Added on 03/05/2002 by shiva.p */
		return ret_code;
	}
	
	/* Get Application WS id and User id */
	appl_user_id[0] = '\0';
	ret_code = get_appl_machine(req->header.application_id, appl_ws_id,
							appl_user_id, txn_details->txn_type,ctx);

	if (ret_code != SUCCESS )
	{
#ifdef DEBUG
		userlog("upd_appnt_demo_info : get_appl_machine() failed with %d", ret_code);
#endif
	/* commeted on 03/05/2002 by shiva.p */
	/*	if (jpn_upd.old_address != NULL)
			free(jpn_upd.old_address);

		if (jpn_upd.new_address != NULL)
			free(jpn_upd.new_address); */
/* free comment removed */		
		free_alloced_mem(&jpn_upd, &jpn_fin_data,ctx); /* Added on 03/05/2002 by shiva.p */
		return ret_code;
	}

#ifdef DEBUG
	userlog("upd_appnt_demo_info : Legacy header date - %s", leg_header_date);
	userlog("upd_appnt_demo_info : Legacy WS Id - %s", appl_ws_id);
#endif

	strcpy(leg_date, leg_header_date);
	leg_date_ind = 0;

	/* If application is sent to SSC or GQD, Financial data is already sent */
	
	ret_code = check_pay_data_sent(req->header.application_id, txn_details->txn_sr_no, &req_status, req_msg_id,ctx);

	if(SELECT_ERROR == ret_code )
	{
#ifdef DEBUG
		userlog("upd_appnt_demo_info : check_pay_data_sent() failed with %d", ret_code);
#endif
/* free comment removed */		
		free_alloced_mem(&jpn_upd, &jpn_fin_data,ctx); /* Added on 03/05/2002 by shiva.p */
		return ret_code;
	}
	else if (SUCCESS == ret_code)
	{
#ifdef DEBUG
		userlog("upd_appnt_demo_info : Req status - %d", req_status);
#endif

		/* Get financial data for the applicant */

		if(SUCCESS != (ret_code = get_financial_data(req->header.application_id, txn_details->txn_sr_no, &jpn_fin_data, req_status,ctx)))
		{
#ifdef DEBUG
			userlog("upd_appnt_demo_info : get_financial_data() failed with %d", ret_code);
#endif
			free_alloced_mem(&jpn_upd, &jpn_fin_data,ctx);
			return ret_code;
		}

		if (NULL != jpn_fin_data.fin_data)
		{
			/* Get the payment date */
			leg_date_ind  = -1;
			txn_srno = txn_details->txn_sr_no;

				/* EXEC SQL SELECT TO_CHAR(RECEIPTDATETIME, 'DDMMYYYY HH24MISS')
						 INTO :leg_date:leg_date_ind
					FROM PAYMENT_INFO A, APPL_TXN B, TXN_CODE C
					WHERE A.APPLID = :appl_id
					AND A.PAYMSERNO = B.PAYMSERNO
					AND B.APPLID = A.APPLID
					AND C.TXNCODE = B.TXNCODE
					AND C.TXNTYPE = (SELECT D.TXNTYPE FROM TXN_CODE D,
										APPL_TXN E
										WHERE E.APPLID = :appl_id
										AND E.TXNSERNO = :txn_srno
										AND D.TXNCODE = E.TXNCODE)
				
					AND ROWNUM = 1; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 47;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select TO_CHAR(RECEIPTDATETIME,'DDMMYYYY HH24MISS') into \
:b0:b1  from PAYMENT_INFO A ,APPL_TXN B ,TXN_CODE C where (((((A.APPLID=:b2 an\
d A.PAYMSERNO=B.PAYMSERNO) and B.APPLID=A.APPLID) and C.TXNCODE=B.TXNCODE) and\
 C.TXNTYPE=(select D.TXNTYPE  from TXN_CODE D ,APPL_TXN E where ((E.APPLID=:b2\
 and E.TXNSERNO=:b4) and D.TXNCODE=E.TXNCODE))) and ROWNUM=1)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1933;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)leg_date;
    sqlstm.sqhstl[0] = (unsigned int  )16;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)&leg_date_ind;
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
    sqlstm.sqhstv[2] = (         void  *)appl_id;
    sqlstm.sqhstl[2] = (unsigned int  )20;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&txn_srno;
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




			if (SQLCODE != 0)
			{
#ifdef DEBUG
				userlog("upd_appnt_demo_info : Selection from PAYMENT_INFO failed : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"upd_appnt_demo_info : Selection from PAYMENT_INFO failed");
				sprintf(excep_log.error_msg, "upd_appnt_demo_info : Selection from PAYMENT_INFO failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);

				free_alloced_mem(&jpn_upd, &jpn_fin_data,ctx);
				return SELECT_ERROR;

			}
		}

#ifdef DEBUG
		userlog("upd_appnt_demo_info : Got financial data");
		userlog("upd_appnt_demo_info : Pay count - %d",jpn_fin_data.counter);
		userlog("upd_appnt_demo_info : Length of data - %ld",jpn_fin_data.len);
		
		if (NULL != jpn_fin_data.fin_data)
		{
			jpn_fin_temp = jpn_fin_data.fin_data;

			for (count = 0; count < jpn_fin_data.counter; count++, jpn_fin_temp++)
			{
				userlog("upd_appnt_demo_info : Pay mode - %c", jpn_fin_temp->pay_mode);
				userlog("upd_appnt_demo_info : Revenue code - %s", jpn_fin_temp->revenue_code);
				userlog("upd_appnt_demo_info : Amt type - %c", jpn_fin_temp->amt_type);
				userlog("upd_appnt_demo_info : Amt value - %s", jpn_fin_temp->amt_value);
			}
		}
#endif
	
	}

	*request_status = req_status;		

#ifdef DEBUG
	userlog("upd_appnt_demo_info : Request status - %d", *request_status);
	userlog("upd_appnt_demo_info : Req message is - %d", *req_msg_id);
#endif
/* Commented for IJPN as we are not usomg this anymore
	/* Call interface function to open connection with MQSeries  

	ret_code = li_init(LI_ENQUIRE_1N_CHECK);

	if (ret_code != GMPC_GOOD)
	{
#ifdef DEBUG
		userlog("upd_appnt_demo_info : li_init failed");
#endif
		strcpy(prog_log.remarks,"upd_appnt_demo_info : Unable to connect to MQSeries interface");
		strcpy(excep_log.error_msg, "upd_appnt_demo_info : Unable to connect to MQSeries interface");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
						
		free_alloced_mem(&jpn_upd, &jpn_fin_data,ctx);
		return ret_code;
	}

#ifdef DEBUG
	userlog("upd_appnt_demo_info : li init successfull");  
	userlog("upd_appnt_demo_info : Legacy date - %s", leg_date);  
#endif
*/
	/* Populate the Legacy header */

//	strncpy(hdr.trans_date, leg_date, 8);
	strncpy(hdr.trans_date, leg_header_date, 8);
	hdr.trans_date[DATE_SIZE - 1] = '\0';

//	strncpy(hdr.trans_time, leg_date + 9, 6);
	strncpy(hdr.trans_time, leg_header_date + 9, 6);
	hdr.trans_time[TIME_SIZE - 1] = '\0';

	//strcpy(hdr.user_id, appl_user_id); commented for IJPN on 26/10/05
	if(appl_user_id[0] == '\0')
	{
		strcpy(hdr.user_id, req->header.user_id);
		strcpy(appl_user_id,req->header.user_id);
	}
	else
		strcpy(hdr.user_id, appl_user_id);


	strcpy(hdr.workstation_id, appl_ws_id);


	// Added this code on 19/09/2013 for CR 278, to send cardcolldate as appt_date to host


	#ifdef DEBUG
		userlog("upd_appnt_demo_info : branchind : %s",branchind);
		userlog("upd_appnt_demo_info : cardcolldate : %s",colldate);
	#endif

	if(branchind[4] == '1')
	{
		strcpy(jpn_upd.appt_date,colldate);

		#ifdef DEBUG		
			userlog("upd_appnt_demo_info : jpn_upd.appt_date : %s",jpn_upd.appt_date);
		#endif
	}

	//

	// Added this code on 13/02/2014 for CR 283, to send idno as actual_kptno to host

	#ifdef DEBUG		
		userlog("upd_appnt_demo_info : jpn_upd.appt_date Release 3.27");
		userlog("upd_appnt_demo_info : appl_id : %s",appl_id);
	#endif

	/* EXEC SQL SELECT COUNT(*) INTO :ltxncnt FROM APPL_TXN 
		WHERE APPLID = :appl_id
		AND TXNCODE = '426'; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN where (APPLID=:b1 a\
nd TXNCODE='426')";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1964;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&ltxncnt;
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
			userlog("upd_appnt_demo_info : Select from APPL_TXN of txncount failed : %s", SQLMSG); 
		#endif
			strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from APPL_TXN of txncount failed");
			sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from APPL_TXN of txncount failed  :%s", SQLMSG);
			//excep_log.termination_flag = YES;
			//excep_log.severity = FATAL;

			//log_error(ctx);
				
			//return SELECT_ERROR;
		}

	#ifdef DEBUG		
		userlog("upd_appnt_demo_info : ltxncnt : %d",ltxncnt);
	#endif

	if(ltxncnt > 0)
	{
		/* EXEC SQL SELECT IDNO INTO :lidno:lidno_ind FROM APPLICATION 
			WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select IDNO into :b0:b1  from APPLICATION where APPLID=:b2";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1987;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&lidno;
  sqlstm.sqhstl[0] = (unsigned int  )18;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&lidno_ind;
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
			userlog("upd_appnt_demo_info : Select from APPLICATION of IDNO failed : %s", SQLMSG); 
		#endif
			strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from APPLICATION of IDNO failed");
			sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from APPLICATION of IDNO failed  :%s", SQLMSG);
			//excep_log.termination_flag = YES;
			//excep_log.severity = FATAL;

			//log_error(ctx);
				
			//return SELECT_ERROR;
		}


		lidno.arr[lidno.len] = '\0';

		#ifdef DEBUG		
			userlog("upd_appnt_demo_info : lidno : %s",lidno.arr);
		#endif

		if((lidno.arr[0] != '\0') && (lidno.arr[0] != ' '))
			strcpy(jpn_upd.actual_kptno,lidno.arr);

		#ifdef DEBUG		
			userlog("upd_appnt_demo_info : jpn_upd.actual_kptno : %s",jpn_upd.actual_kptno);
		#endif

	}

	// end of CR 283

	// Added this code on 19/02/2014 for CR 284, to send lostcntneg,lostcntdis,lostcntcrime to host

	/* EXEC SQL SELECT TXNCODE,LICCLASS INTO :ltxncode, :llclass
		FROM APPL_TXN WHERE APPLID = :appl_id
		AND TXNCODE IN ('303','403'); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TXNCODE ,LICCLASS into :b0,:b1  from APPL_TXN where (\
APPLID=:b2 and TXNCODE in ('303','403'))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2010;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)ltxncode;
 sqlstm.sqhstl[0] = (unsigned int  )4;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)llclass;
 sqlstm.sqhstl[1] = (unsigned int  )3;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
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
			userlog("upd_appnt_demo_info : Select from APPL_TXN of TXNCODE,LICCLASS failed : %s", SQLMSG); 
		#endif
			strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from APPL_TXN of TXNCODE,LICCLASS failed");
			sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from APPL_TXN of TXNCODE,LICCLASS failed  :%s", SQLMSG);
			//excep_log.termination_flag = YES;
			//excep_log.severity = FATAL;
			//log_error(ctx);				
			//return SELECT_ERROR;
		}
		
		#ifdef DEBUG
			userlog("upd_appnt_demo_info : Release 3.27");
			userlog("upd_appnt_demo_info : ltxncode : %s",ltxncode);
			userlog("upd_appnt_demo_info : licclass : %s",llclass);
		#endif


	if((strcmp(ltxncode,"303") == 0) || (strcmp(ltxncode,"403") == 0))
	{
		/* EXEC SQL SELECT NVL(LOSTCNTNEG,0), NVL(LOSTCNTCRIME,0), NVL(LOSTCNTDIS,0)
			INTO :llneg, :llcrime, :lldis
				FROM APPNT_JPN_INFO
					WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select NVL(LOSTCNTNEG,0) ,NVL(LOSTCNTCRIME,0) ,NVL(LOSTCNTD\
IS,0) into :b0,:b1,:b2  from APPNT_JPN_INFO where APPLID=:b3";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2037;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&llneg;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&llcrime;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&lldis;
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
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
			userlog("upd_appnt_demo_info : Select from APPNT_JPN_INFO of LOSTCNTNEG failed : %s", SQLMSG); 
		#endif
			strcpy(prog_log.remarks,"upd_appnt_demo_info : Select from APPNT_JPN_INFO of LOSTCNTNEG failed");
			sprintf(excep_log.error_msg,"upd_appnt_demo_info : Select from APPNT_JPN_INFO of LOSTCNTNEG failed  :%s", SQLMSG);
			//excep_log.termination_flag = YES;
			//excep_log.severity = FATAL;
			//log_error(ctx);				
			//return SELECT_ERROR;
		}

/* Need to send only that particular type, so commented this
		if(llneg > 0)
			jpn_upd.lostcntneg = llneg;
	

		if(llcrime > 0 )
			jpn_upd.lostcntcrime = llcrime;


		if(lldis > 0)
			jpn_upd.lostcntdis = lldis;

*/
		if(strcmp(llclass,"01") == 0)
		{
			jpn_upd.lostcntneg = llneg + 1;

		}

		if(strcmp(llclass,"02") == 0)
		{
			jpn_upd.lostcntcrime = llcrime + 1;
		}

		if(strcmp(llclass,"03") == 0)
		{
			jpn_upd.lostcntdis = lldis + 1;
		}

	
	}

	// end of CR 284

	//Added by Salmi, 11th Aug 2020, DLKP (CRAPPL-  SKP002/CR/2020)

	/* EXEC SQL SELECT COUNT(*) INTO :apprv_count FROM DLEWAT_APPRV_HISTORY WHERE APPLID = :appl_id
		and STATUS ='L'; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from DLEWAT_APPRV_HISTORY where (\
APPLID=:b1 and STATUS='L')";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2068;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&apprv_count;
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
	userlog("upd_appnt_demo_info: Select from DLEWAT_APPRV_HISTORY failed : %s", SQLMSG); 
	#endif	
	}

	#ifdef DEBUG
	userlog("upd_appnt_demo_info : apprv_count[%d]",apprv_count );
	#endif

	if(apprv_count > 0)
	{
		ret = get_dlewat_apprv_hist(appl_id, hdr.user_id, user_remark, user_kptno, ctx );
		if (ret != GMPC_GOOD)
		{
			userlog("upd_appnt_demo_info: Select from DLEWAT_APPRV_HISTORY failed : %s", SQLMSG);
			return GMPC_BAD;			
		}
		jpn_upd.jkind = '8'; //Lulus for DLKP(1051)
		strcpy(jpn_upd.remark, user_remark);
		strcpy(jpn_upd.kptno, user_kptno);

	#ifdef DEBUG
	userlog("upd_appnt_demo_info : jpn_upd.jkind - %c", jpn_upd.jkind);
	userlog("upd_appnt_demo_info : jpn_upd.kptno - %s", jpn_upd.kptno);
	userlog("upd_appnt_demo_info : jpn_upd.remark - %s", jpn_upd.remark);
	#endif
	}

	//Added by Salmi, 11th Aug 2020, DLKP (CRAPPL-  SKP002/CR/2020)
	
	#ifdef DEBUG
	userlog("upd_appnt_demo_info : Calling li_jpn_update_p");  
	userlog("upd_appnt_demo_info : hdr.trans_date - %s",hdr.trans_date);  
	userlog("upd_appnt_demo_info : hdr.trans_time - %s",hdr.trans_time);  
	userlog("upd_appnt_demo_info : hdr.workstation_id - %s",hdr.workstation_id);  
	userlog("upd_appnt_demo_info : hdr.user_id - %s",hdr.user_id);  
	#endif

	sErrMessage[0] = '\0';
	reject_code.arr[0] = '\0';
	reason_desc.arr[0] = '\0';
	
	// This code is added on 15/02/2008 to capture the request and response time of demo update to host

	/* EXEC SQL DELETE FROM IJPN_LEGACY_UPD_RSP WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "delete  from IJPN_LEGACY_UPD_RSP  where APPLID=:b0";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2091;
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



		if (SQLCODE != 0)
			{
			 #ifdef DEBUG
				userlog("upd_appnt_demo_info : DELETE FROM IJPN_LEGACY_UPD_RSP failed : %s", SQLMSG);
		     #endif
			}

	/* EXEC SQL INSERT INTO IJPN_LEGACY_UPD_RSP(APPLID,LEGREQFLAG,LEGREQDATE)
		VALUES(:appl_id,'D',SYSDATE); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into IJPN_LEGACY_UPD_RSP (APPLID,LEGREQFLAG,LEGREQDAT\
E) values (:b0,'D',SYSDATE)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2110;
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


		//VALUES(:appl_id,'D',:leg_header_date);

		if (SQLCODE != 0)
			{
			 #ifdef DEBUG
				userlog("upd_appnt_demo_info : INSERT INTO IJPN_LEGACY_UPD_RSP failed : %s", SQLMSG);
		     #endif
			}


	//

	/*if ((ret_code = li_jpn_update_p(hdr, jpn_fin_data, jpn_upd, leg_msg_id, &error_code)) != GMPC_GOOD)*/
	ret_code = li_jpn_update_p(hdr, jpn_fin_data, jpn_upd, leg_msg_id, &error_code, pReplyMsg, &iReplyMsgLen, sErrMessage);

	userlog("upd_appnt_demo_info (li_jpn_update_p) : ret_code : %d",ret_code);

	if (ret_code != GMPC_GOOD)
	{
		if(leg_msg_id != NULL && strlen(leg_msg_id) > 20)
		strcpy(leg_msgid, leg_msg_id);
//		li_end();

	#ifdef DEBUG
		userlog("upd_appnt_demo_info : Unable to put the Demographic update request : %d", error_code);
	#endif
		

		if(sErrMessage[0] != '\0')
		{
		reject_code.arr[0] = '\0';
		strncpy(reject_code.arr,sErrMessage,8);
		setlen(reject_code);

		reason_desc.arr[0] = '\0';
		strcpy(reason_desc.arr,sErrMessage);
		setlen(reason_desc);
		}

		userlog("reject_code : %s",reject_code.arr);
		if(reject_code.arr[0] != '\0')
			reject_code_ind = 0;
	

		userlog("reason_desc : %s",reason_desc.arr);
		if(reason_desc.arr[0] != '\0')
			reason_desc_ind = 0;		

		strcpy(prog_log.remarks,"upd_appnt_demo_info : Unable to put the Demographic update request");
		sprintf(excep_log.error_msg, "upd_appnt_demo_info : Unable to put the Demographic update request : Error code - %d", error_code);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);

	
		strcpy(branch_code, req->header.branch_code);
		userlog("branch_code : %s",branch_code);
		userlog("msgid : %d",msgid);
		userlog("leg_msgid : %s",leg_msgid);
		userlog("appl_ws_id : %s",appl_ws_id);
		userlog("appl_user_id : %s",appl_user_id);
		
	
		/* update with LEGREQSTAT = -2, rejectcode and reason desc value when li_put failed*/
		/* EXEC SQL UPDATE IJPN_LEGACY_REQUEST 
		SET BRANCHCODE     = :branch_code,
			LEGMSGID       = :leg_msgid,
			LEGREJCODE     = :reject_code:reject_code_ind,
			LEGREJREASON   = :reason_desc:reason_desc_ind,
			LEGREQDATETIME =  SYSDATE,
			LEGREQSTAT     = -2,			
			USERID         = :appl_user_id,			
			TXNWSID        = :appl_ws_id
			WHERE APPLID   = :appl_id
		AND LEGREQMSGID    = :msgid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update IJPN_LEGACY_REQUEST  set BRANCHCODE=:b0,LEGMSGID=:b1\
,LEGREJCODE=:b2:b3,LEGREJREASON=:b4:b5,LEGREQDATETIME=SYSDATE,LEGREQSTAT=(-2),\
USERID=:b6,TXNWSID=:b7 where (APPLID=:b8 and LEGREQMSGID=:b9)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2129;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)branch_code;
  sqlstm.sqhstl[0] = (unsigned int  )7;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)leg_msgid;
  sqlstm.sqhstl[1] = (unsigned int  )25;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&reject_code;
  sqlstm.sqhstl[2] = (unsigned int  )11;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&reject_code_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&reason_desc;
  sqlstm.sqhstl[3] = (unsigned int  )163;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&reason_desc_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)appl_user_id;
  sqlstm.sqhstl[4] = (unsigned int  )9;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)appl_ws_id;
  sqlstm.sqhstl[5] = (unsigned int  )16;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)appl_id;
  sqlstm.sqhstl[6] = (unsigned int  )20;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&msgid;
  sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
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


			
			if (SQLCODE != 0 && SQLCODE != 1403)
			{
			#ifdef DEBUG
				userlog("upd_appnt_demo_info : Updateing IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON failed : %s", SQLMSG);
			#endif
				strcpy(prog_log.remarks,"upd_appnt_demo_info : Updateing IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON failed ");
				sprintf(excep_log.error_msg, "upd_appnt_demo_info : Updateing IJPN_LEGACY_REQUEST failed with LEGREJCODE and LEGREJREASON : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);				
			}

			#ifdef DEBUG
				userlog("upd_appnt_demo_info : Updated IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON : %s", SQLMSG);
			#endif

			if (error_code == 0)
				return ret_code;
			else
				return error_code;
/* free comment removed */			
				free_alloced_mem(&jpn_upd, &jpn_fin_data,ctx);
	
	/*	if(error_code != NO_MSG_ERROR && error_code != CONN_ERROR)
		{	
			if (error_code == 0)
				return ret_code;
			else
				return error_code;
		}
	*/ // ask ravi about this??
	}

  //userlog("error message %s",sErrMessage);
  //userlog("error_code %d",error_code);
  //userlog("pReplyMsg %s",pReplyMsg);
		
//	li_end();

#ifdef DEBUG
	userlog("upd_appnt_demo_info: Legecy mesg id - %s", leg_msg_id);
#endif 

	/*	In case of demo update the legacy request will have two entries for */
	/*  for the same applid.One for demo and one for AFIS 1:n.Following has */
	/*  JPN as the check agency												*/
	
	/* Legacy function was successfull so update the status in LEGACY_REQUEST */

	strcpy(leg_msgid, leg_msg_id);

	// This code is added on 15/02/2008 to capture the request and response time of demo update to host

	/* EXEC SQL UPDATE IJPN_LEGACY_UPD_RSP SET LEGRSPDATE = SYSDATE,
		LEGMSGID = :leg_msgid WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update IJPN_LEGACY_UPD_RSP  set LEGRSPDATE=SYSDATE,LEGMSGID=\
:b0 where APPLID=:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2176;
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
			userlog("upd_appnt_demo_info : UPDATE IJPN_LEGACY_UPD_RSP failed : %s", SQLMSG);
	     #endif
		}

	
	if((ret_code = update_legacy_req(req, msgid, leg_msgid, appl_ws_id,ctx)) != SUCCESS)
	{
#ifdef DEBUG
		userlog("upd_appnt_demo_info: update_legacy_req() failed with %d", ret_code);
#endif 

		free_alloced_mem(&jpn_upd, &jpn_fin_data,ctx);
		return ret_code;
	}
/* Commenetd for IJPN since this part is calling by AFIS
	/* commented on 27/03/2002 requirement from vasanth & soraya  
	/*	if (afis_flag != '9' && afis_flag != '2' && afis_flag != '8') 
	if((req->header.application_id[14] !='4' && req->header.application_id[14] != '5') || photo_cature_flag == 'C' )
	{
	/*	Insert a new record into LEGACY_REQUEST with AFIS as the check agency 
	/*  and request flag as 'D'												  

		reqstat = REQ_SENT;
		strcpy(leg_msgid, leg_msg_id);
		reqflag = DEMO_UPD;

		if((ret_code = insert_legacy_req(&msgid, req, AFIS_ID, txn_details->txn_sr_no, reqflag,ctx)) != SUCCESS)
		{
#ifdef DEBUG
			userlog("upd_appnt_demo_info: insert_legacy_req failed with error code %d", ret_code);
#endif 
			free_alloced_mem(&jpn_upd, &jpn_fin_data,ctx);
			return ret_code;
		}

		/* Update the Legacy message id for the request 

		if((ret_code = update_legacy_req(req, msgid, leg_msgid, appl_ws_id,ctx)) != SUCCESS)
		{
#ifdef DEBUG
			userlog("upd_appnt_demo_info: update_legacy_req() failed with %d", ret_code);
#endif 

			free_alloced_mem(&jpn_upd, &jpn_fin_data,ctx);
			return ret_code;
		}

	}
end IJPN */

	if (NULL != jpn_fin_data.fin_data)
	{
		/* Update the Payment update flag to YES */

		if(SUCCESS != (ret_code = upd_payment_flag(req->header.application_id, txn_details->txn_sr_no,ctx)))
		{
#ifdef DEBUG
			userlog("upd_appnt_demo_info : upd_payment_flag() failed with %d", ret_code);
#endif
			free_alloced_mem(&jpn_upd, &jpn_fin_data,ctx); /* Added on 02/05/2002 by shiva.p */
			return ret_code;


		}
	}
/* free comment removed */		
	free_alloced_mem(&jpn_upd, &jpn_fin_data,ctx);

	userlog("upd_appnt_demo_info : After freeing the memory allocation");

	return SUCCESS;
}


// Compressing Photo

//int nQuality = 100;

BOOL CreateLowResImage(imgdes *desImage, imgdes *srcImage, DWORD dwMaxSize, long *actual_len, char *kptno, int *nQl, void * ctx)
{

	struct sqlca sqlca = {0}; 
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	int ret = 0;

	sql_context pcCtx; 
	/* EXEC SQL END DECLARE SECTION; */ 



	HGLOBAL hMem;
	BOOL bDone = FALSE;
	unsigned char *pBuffer=NULL;
	int rcode;
	DWORD dwBufSize;
	JpegData jdat;
	int nQuality = 100;

	pcCtx = ctx; 
	/* EXEC SQL CONTEXT USE :pcCtx; */ 


	*nQl = 0;
	#ifdef DEBUG
		userlog("CreateLowResImage : Reducing image quality, current nQuality value = %d",nQuality);		
		userlog("CreateLowResImage : Before reducing image quality, ctx:%u, kptno:%s",ctx,kptno);
    #endif

	do {
		rcode = savejpgtobuffer(&pBuffer, srcImage, nQuality);
		
		if(rcode == NO_ERROR)	
		{
			// Get the buffer size
			hMem = GlobalHandle(pBuffer);
			dwBufSize = GlobalSize(hMem);
			if( dwBufSize > dwMaxSize )	
			{
				GlobalFree(hMem);
				pBuffer = NULL;
				nQuality--;	
				
				//userlog("CreateLowResImage : at dwBufSize > dwMaxSize Image Quality = %d", nQuality);
			}
			else	
			{
			
				bDone = TRUE;
				*actual_len = dwBufSize;
				userlog("CreateLowResImage : reduced length of image");

				freeimage(desImage);
				jpeginfofrombuffer(pBuffer, &jdat);
				allocimage(desImage, jdat.width, jdat.length, jdat.vbitcount);

				if( loadjpgfrombuffer(pBuffer, desImage) != NO_ERROR)	
				{
					userlog("CreateLowResImage : Error converting JPEG image");
					GlobalFree(hMem);
					return FALSE;
				}
				else	
				{
					GlobalFree(hMem);
					userlog("CreateLowResImage : Final Image Quality = %d, kptno = %s", nQuality,kptno);
					// Added this check on 21/12/2011 to fail the process
					// if the Quality is 100 even after compression
					if(nQuality == 100)
					{ 
						userlog("CreateLowResImage : In the Quality = %d loop returning false", nQuality);
						*nQl = nQuality;
						return FALSE;
					}
					else
					{
						*nQl = nQuality;
						return TRUE;
					}
				}
			}
		}
		else	{
			userlog("CreateLowResImage : Unable to save image to buffer");
			*nQl = nQuality;
			bDone = TRUE;
			return FALSE;
		}

		if(nQuality<=0)	{
			userlog("CreateLowResImage : Unable to compress image, the size is too small !");
			*nQl = nQuality;
		}

	} while(!bDone);

	*nQl = nQuality;
	return TRUE;
}

int ncompress_photo(unsigned char *buff, int ori_len, BYTE **new_buff, int *new_len, char *kptno, char *applid, void * ctx)
{
	struct sqlca sqlca = {0}; 
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	int ret = 0;

	sql_context pcCtx; 
	/* EXEC SQL END DECLARE SECTION; */ 


	int rcode;
	int maxSize=LEGACY_LR_PHOTO_SIZE;
	imgdes ImgOrig, Img2k;
	JpegData jdat;
	int nWidth, nHeight;
	//char kpt[12] = '\0';
	int nQuality = 100;
	int nQl = 0;
	//char *appl_id;

	//Compress Photo
	int retcode = 0;
	BYTE *pnew_buff1;
	//int plen1;
	unsigned char *buff1=NULL;
	int ori_len1=0;
	int plen1=0;

	pcCtx = ctx; 
	/* EXEC SQL CONTEXT USE :pcCtx; */ 


	// Get the information
	userlog("compress_photo: Before jpeginfofrombuffer");
	rcode = jpeginfofrombuffer(buff, &jdat);
	if(rcode != NO_ERROR)
		return GMPC_BAD;

	nWidth = jdat.width;
	nHeight = jdat.length;


	userlog("compress_photo: maxsize of the Image :%d",maxSize);
	userlog("compress_photo: Before allocimage");
    rcode = allocimage(&ImgOrig, jdat.width, jdat.length, jdat.vbitcount);
    if(rcode == NO_ERROR) {

		// Load the image
		userlog("compress_photo: Before loadjpgfrombuffer");
      rcode = loadjpgfrombuffer(buff, &ImgOrig);
		if( rcode != NO_ERROR )	{
			printf("\nError reading JPEG Image");
			return GMPC_BAD;
		}
 	}

    #ifdef DEBUG
		userlog("compress_photo : Before calling CreateLowResImage ctx:%u, kptno:%s",ctx,kptno);
		userlog("compress_photo : Before calling CreateLowResImage, current nQuality value = %d",nQuality);
		userlog("compress_photo : Before calling CreateLowResImage, current nQl value = %d",nQl);
    #endif

	
	if(rcode == NO_ERROR)	
	{

		userlog("compress_photo: Before CreateLowResImage");
		ret = CreateLowResImage(&Img2k, &ImgOrig, maxSize, new_len, kptno, &nQl, ctx);

		nQuality=0;
		nQuality = nQl;
		#ifdef DEBUG
			userlog("compress_photo : current nQl value after compression = %d",nQl);
			userlog("compress_photo : current nQuality value after compression = %d",nQuality);
		#endif

			// This code added on 09/01/2017 to use high res photo to generate the 2k photo
			// nQualirt < 7 means LRphoto is blurr, so get a HR photo and reduce it to LR photo
			if(nQuality < 7)
			{
				#ifdef DEBUG
					userlog("compress_photo : Inside the nQuality < 7 loop");
				#endif

				nQuality = 0;//new_len = 0;
				userlog("compress_photo: Before freeimage");
				freeimage(&ImgOrig); 
				freeimage(&Img2k);				

				// compressing the high res photo here	 
				 retcode = ncompress_photo_new(buff1, ori_len1, &pnew_buff1, &plen1, kptno, &nQuality, applid, ctx);
				 if (retcode != GMPC_GOOD)
				 {
					userlog("compress_photo : Unable to compress high res photo to low res photo");
					return GMPC_BAD;			
				 }

				 #ifdef DEBUG
					userlog("compress_photo: size of the reduced photo :%d",plen1);
					userlog("compress_photo: Quality of the reduced photo :%d",nQuality);
				 #endif
				 
				 *new_buff = (unsigned char *)malloc(plen1);
				 
				 if(new_buff == NULL)
				 {
					#ifdef DEBUG
						userlog("compress_photo: Unable to allocate memory to new_buff");
					#endif
					return GMPC_BAD;
				 }				 
				 memcpy((*new_buff),pnew_buff1,plen1);
				 *new_len = plen1;
				 #ifdef DEBUG
					userlog("compress_photo: Allocated memory to new_buff : %u",_msize(*new_buff));
					userlog("compress_photo: size of the reduced photo new_len :%d",new_len);
				 #endif

				  userlog("compress_photo: Before return GMPC_GOOD");
				  return GMPC_GOOD;
			}
			// nQualirt < 7 ends here
		
		if(ret == 0)
		{
			userlog("compress_photo: Error compressing LOW_RES image");
			return GMPC_BAD; // Added this on 21/12/2011 
			                    // If the Quality is 100 even after compression then fail the compression process
			                    // to refire this later after sometime inorder to compress properly
		}
		else	{
			userlog("compress_photo: Before savejpgtobuffer");
			savejpgtobuffer(new_buff, &Img2k, nQuality);
			userlog("compress_photo: After savejpgtobuffer");
		}
	}

	userlog("compress_photo: Before freeimage");
	freeimage(&ImgOrig);
	freeimage(&Img2k);

	userlog("compress_photo: Before return GMPC_GOOD");
	return GMPC_GOOD;
}


// new code start here on 09/01/2017
// This function is called only when the nuality < 7 to make the image better from becoming blur
BOOL CreateLowResImage_new(imgdes *desImage, imgdes *srcImage, DWORD dwMaxSize, long *actual_len, char *kptno, int *nQl, void * ctx)
{

	struct sqlca sqlca = {0}; 
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	int ret = 0;

	sql_context pcCtx; 
	/* EXEC SQL END DECLARE SECTION; */ 



	HGLOBAL hMem;
	BOOL bDone = FALSE;
	unsigned char *pBuffer=NULL;
	int rcode;
	DWORD dwBufSize;
	JpegData jdat;
	int nQuality = 100;

	pcCtx = ctx; 
	/* EXEC SQL CONTEXT USE :pcCtx; */ 


	*nQl = 0;
	#ifdef DEBUG
		userlog("CreateLowResImage_new : Reducing image quality, current nQuality value = %d",nQuality);		
		userlog("CreateLowResImage_new : Before reducing image quality, ctx:%u, kptno:%s",ctx,kptno);
    #endif

	do {
		rcode = savejpgtobuffer(&pBuffer, srcImage, nQuality);
		
		if(rcode == NO_ERROR)	
		{
			// Get the buffer size
			hMem = GlobalHandle(pBuffer);
			dwBufSize = GlobalSize(hMem);
			if( dwBufSize > dwMaxSize )	
			{
				GlobalFree(hMem);
				pBuffer = NULL;
				nQuality--;	
				
				//userlog("CreateLowResImage_new : at dwBufSize > dwMaxSize Image Quality = %d", nQuality);
			}
			else	
			{
			
				bDone = TRUE;
				*actual_len = dwBufSize;
				userlog("CreateLowResImage_new : reduced length of image");

				freeimage(desImage);
				jpeginfofrombuffer(pBuffer, &jdat);
				allocimage(desImage, jdat.width, jdat.length, jdat.vbitcount);

				if( loadjpgfrombuffer(pBuffer, desImage) != NO_ERROR)	
				{
					userlog("CreateLowResImage_new : Error converting JPEG image");
					GlobalFree(hMem);
					return FALSE;
				}
				else	
				{
					GlobalFree(hMem);
					userlog("CreateLowResImage_new : Final Image Quality = %d, kptno = %s", nQuality,kptno);
					// Added this check on 21/12/2011 to fail the process
					// if the Quality is 100 even after compression
					if(nQuality == 100)
					{ 
						userlog("CreateLowResImage_new : In the Quality = %d loop returning false", nQuality);
						*nQl = nQuality;
						return FALSE;
					}
					else
					{
						*nQl = nQuality;
						return TRUE;
					}
				}
			}
		}
		else	{
			userlog("CreateLowResImage_new : Unable to save image to buffer");
			*nQl = nQuality;
			bDone = TRUE;
			return FALSE;
		}

		if(nQuality<=0)	{
			userlog("CreateLowResImage_new : Unable to compress image, the size is too small !");
			*nQl = nQuality;
		}

	} while(!bDone);

	*nQl = nQuality;
	return TRUE;
}

// This function added on 09/01/2017 to compress the high res photo to low res photo
int ncompress_photo_new(unsigned char *buff, int ori_len, BYTE **new_buff, int *new_len, char *kptno, int *nQl1, char *applid, void * ctx)
{
	struct sqlca sqlca = {0}; 
	typedef struct
	{
	 int len;
	 unsigned char arr[HIGH_RES_PHOTO_SIZE];
	} highres;

	/* EXEC SQL TYPE highres IS LONG varraw(HIGH_RES_PHOTO_SIZE); */ 


	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	int ret = 0;
	/* varchar appl_id[20] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } appl_id
 = {0};

	
	highres highres_buf;
	short highres_buf_ind= -1;

	char read_ind=0;

	sql_context pcCtx; 
	/* EXEC SQL END DECLARE SECTION; */ 


	int rcode;
	int maxSize=LEGACY_LR_PHOTO_SIZE1;
	imgdes ImgOrig, Img2k;
	JpegData jdat;
	int nWidth, nHeight;
	//char kpt[12] = '\0';
	int nQuality = 100;
	int nQl = 0;

	pcCtx = ctx; 
	/* EXEC SQL CONTEXT USE :pcCtx; */ 


	memset(highres_buf.arr, '\0', HIGH_RES_PHOTO_SIZE);
	highres_buf.len = 0;


	strcpy((char*)appl_id.arr,applid);
	//appl_id.arr[appl_id.len] = '\0';
	setlen(appl_id);

	#ifdef DEBUG
		userlog("ncompress_photo_new : applid :%s",applid);
		userlog("ncompress_photo_new : appl_id :%s",appl_id.arr);
	#endif

	/* Get the applicant highres photo */
 
	/* EXEC SQL EXECUTE
		BEGIN
		GET_APPNT_HR(:appl_id,  
		:highres_buf:highres_buf_ind,		 
		:read_ind);
		END;
	END-EXEC; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "begin GET_APPNT_HR ( :appl_id , :highres_buf:highres_buf_ind\
 , :read_ind ) ; END ;";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2199;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&appl_id;
 sqlstm.sqhstl[0] = (unsigned int  )22;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&highres_buf;
 sqlstm.sqhstl[1] = (unsigned int  )16504;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&highres_buf_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&read_ind;
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
		userlog("ncompress_photo_new : Failed to call stored procedure GET_APPNT_HR : %s", SQLMSG);
	#endif
		strcpy(prog_log.remarks,"ncompress_photo_new: Failed to call stored procedure GET_APPNT_HR ");
		sprintf(excep_log.error_msg, "ncompress_photo_new: Failed to call stored procedure GET_APPNT_HR : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return STORED_PROC_ERROR;
	}

	#ifdef DEBUG
		userlog("ncompress_photo_new : Call to stored procedure GET_APPNT_HR succesfull");
		userlog("ncompress_photo_new : Read indicator - %c",read_ind);
	#endif

	#ifdef DEBUG
		userlog(" ");
		userlog("ncompress_photo_new : high_res photo compression starts");
		userlog("ncompress_photo_new : Before calling compress_photo ctx:%u, kptno:%s",ctx,kptno);
		userlog("ncompress_photo_new : high_res photo_size before compression:%d",highres_buf.len);		
	#endif

	/* High res photo is compressed to 2.9k size now for IJPN */
	if(highres_buf.len > 0)
	{		
		// Get the information
		userlog("compress_photo_new: Before jpeginfofrombuffer");
		//rcode = jpeginfofrombuffer(buff, &jdat);
		rcode = jpeginfofrombuffer((char *)highres_buf.arr, &jdat);
		if(rcode != NO_ERROR)
			return GMPC_BAD;

		nWidth = jdat.width;
		nHeight = jdat.length;


		userlog("compress_photo_new: Before allocimage");
		rcode = allocimage(&ImgOrig, jdat.width, jdat.length, jdat.vbitcount);
		if(rcode == NO_ERROR) {

			// Load the image
			userlog("compress_photo_new: Before loadjpgfrombuffer");
		  //rcode = loadjpgfrombuffer(buff, &ImgOrig);
			rcode = loadjpgfrombuffer((char *)highres_buf.arr, &ImgOrig);
			if( rcode != NO_ERROR )	{
				printf("\nError reading JPEG Image");
				return GMPC_BAD;
			}
 		}

		#ifdef DEBUG
			userlog("compress_photo_new : Before calling CreateLowResImage ctx:%u, kptno:%s",ctx,kptno);
			userlog("compress_photo_new : Before calling CreateLowResImage, current nQuality value = %d",nQuality);
			userlog("compress_photo_new : Before calling CreateLowResImage, current nQl value = %d",nQl);
		#endif

		
		if(rcode == NO_ERROR)	{

			userlog("compress_photo_new: Before CreateLowResImage");
			ret = CreateLowResImage_new(&Img2k, &ImgOrig, maxSize, new_len, kptno, &nQl, ctx);

			nQuality=0;
			nQuality = nQl;
			*nQl1 = nQl;
			#ifdef DEBUG
				userlog("compress_photo_new : current nQl value after compression = %d",nQl);
				userlog("compress_photo_new : current nQuality value after compression = %d",nQuality);
			#endif
			
			if(ret == 0)
			{
				userlog("compress_photo_new: Error compressing LOW_RES image");
				//return FALSE;
				return GMPC_BAD; // Added this on 21/12/2011 
									// If the Quality is 100 even after compression then fail the compression process
									// to refire this later after sometime inorder to compress properly
			}
			else	{
				userlog("compress_photo_new: Before savejpgtobuffer");
				savejpgtobuffer(new_buff, &Img2k, nQuality);
				userlog("compress_photo_new: After savejpgtobuffer");
			}
		}

		userlog("compress_photo_new: Before freeimage");
		freeimage(&ImgOrig);
		freeimage(&Img2k);

		userlog("compress_photo_new: Before return GMPC_GOOD");
		return GMPC_GOOD;
	}
	else
	{
		userlog("make_lrphoto_from_hrphoto : high_res photo_size before compression:%d",highres_buf.len);
		return GMPC_BAD;
	}
}

// new code end here on 09/01/2017

// Compressing Photo end here


/*****************************************************************************************/
/* Function Name	: upd_card_details													 */
/* Description		: This function updates the JPN legacy system with applicant's		 */
/*				      GMPC details 														 */
/* Input			: Request buffer of the service, Oracle message id, Request flag	 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/

int upd_card_details(JPN_UPDATE_REQ_T *req, int msgid, char request_flag,LI_P_HEADER_T hdr,void * ctx) //LI_P_HEADER_T hdr added by kasi on 11/08/06 to remove global scope.
{
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


		char appl_id[APP_ID_SIZE] = {0};
		short appl_no_ind = -1;
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
		
		//varchar remarks[IMG_REMARK_SIZE] = {0};
		//short remarks_ind = -1;
		char processind[PROCESS_IND_SIZE] = {0};
		/* varchar appln_staff_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } appln_staff_id
 = {0};

		short appln_staff_id_ind = -1;
		/* varchar issue_user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } issue_user_id
 = {0};

		short issue_user_id_ind = -1;
		int cardstat = 0;
		char txn_code[TRANSACTION_CODE_SIZE] = {0};
		short txn_code_ind = -1;
		int txn_type = 0;
		short txn_type_ind = -1;
		/* varchar appl_legacy_branch[LEGACY_BRANCH_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } appl_legacy_branch
 = {0};

		short appl_legacy_branch_ind = -1;
		/* varchar issuing_legacy_branch[LEGACY_BRANCH_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } issuing_legacy_branch
 = {0};

		short issuing_legacy_branch_ind = -1;
		int lost_count = 0;
		short lost_count_ind = -1;
		int txn_count = 0;
		int apprv_status = 0; //Added by Salmi, Date 19th June 2020 CRAPPL-  SKP002/CR/2020
		short apprv_status_ind = -1;  //Added by Salmi, Date 19th June 2020 CRAPPL-  SKP002/CR/2020
		int apprv_count = 0;	//Added by Salmi, Date 19th June 2020 CRAPPL-  SKP002/CR/2020
		/* Added for IJPN */
		char jpnremarks1[REMARK_SIZE];
		char jpnremarks2[REMARK_SIZE];
		//char prob_reason_code[REASON_CODE_SIZE];
		char legapplid[25];

		short jpnremarks1_ind = -1;
		short jpnremarks2_ind = -1;
		//short prob_reason_code_ind = -1;
		short legapplid_ind = -1;

		char  appl_status='\0';
		short appl_status_ind = -1;
		char  applstat2 = '\0';
		short applstat2_ind = -1;

		char  jpnstat[3]= {0};
		short jpnstat_ind = -1;
		int	  cardstat1=0;
		short cardstat1_ind = -1;
		char  lgmpcstat[4] = {0};	
		int   status_copied=0;

		char branch_code[7] = {0};
		/* varchar reason_desc[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } reason_desc
 = {0};

		short reason_desc_ind = -1;
		/* varchar reject_code[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } reject_code
 = {0};

		short reject_code_ind = -1;	

		char  tstamp[DATE_SIZE] = {0};
		short tstamp_ind = -1;

		char cdate[DATE_SIZE] = {0};
		char  priority = '\0';
		short priority_ind = -1;
		//char  ltxncode[LEGTXNCODE_SIZE];
		//short ltxncode_ind = -1;

		/* varchar  idno[ID_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[16]; } idno
 = {0};

		char     idtype[ID_TYPE_SIZE]={0};
		char     relationcode[RELATIONCODE_SIZE]={0};
		/* varchar  currlongname[CURRLONGNAME_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[151]; } currlongname
 = {0};


		short idno_ind = -1;
		short idtype_ind = -1;
		short relationcode_ind = -1;
		short currlongname_ind = -1;

		char  telephone_no[15]={0};
		short telephone_no_ind = -1;

		/* varchar remarks1[121] = {0}; */ 
struct { unsigned short len; unsigned char arr[121]; } remarks1
 = {0};

		short remarks1_ind = -1;
		/* varchar remarks[REMARK_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[61]; } remarks
 = {0};

		short remarks_ind = -1;

		float la_feeamt=0;
		int  lfee=0;
		char temp_fee[10]={0};
		float paid_fee = 0;            //PAYMENT_INFO.PAYABLEAMT
		float lb_feeamt=0;
		float lostcompoundfee = 0;
		float additional_fee = 0;
		char  collcenter[7] = {0};
		short collcenter_ind = -1;
		char  bcodejpn[COLLJPNBRANCHCODE_SIZE] = {0};
		short bcodejpn_ind = -1;
		
		
		/* end IJPN */

		// CR 284
		char ltxncode[3+1] = {0};
		char llclass[2+1] = {0};
		int  llneg = 0;
		int  llcrime = 0;
		int  lldis = 0;
		int  lclcnt = 0;
		// CR 284
		char reductiontype = '\0';
		char leg_txncode[LEG_TXNCODE_SIZE] = {0}; //Added by Salmi, Date 4th March 2021, SKP004/PM/2021
		short leg_txncode_ind = -1; //Added by Salmi, Date 4th March 2021, SKP004/PM/2021

		//Added by Salmi on 12th Apr 2021, MyKas Tamat Tempoh
		char jkind;
		char hsccolorcode;
		short jkind_ind = 0;
		short hsccolorcode_ind =0;
		//Added by Salmi on 12th Apr 2021, MyKas Tamat Tempoh-End

		//added by samsuri on 8 aug 2022
		int cardLostCount = 0;
		short cardLostCount_ind = -1;
		int cardLostCount_Reduced = 0;
		int cardLostCountNeg = 0;
		short cardLostCountNeg_ind = -1;
		int cardLostCountCrime = 0;
		short cardLostCountCrime_ind = -1;
		int cardLostCountDis = 0;
		short cardLostCountDis_ind = -1;
		
		char lostReason[3] = {0};
		short lostReason_ind = -1;
		//end added by samsuri


	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	LI_UPDATE_GMPC_STAT_REQ_T card_dtls;

	LI_MYKAD_ISSUANCE_REQ_T mykad;

	LI_NRS_UPDATE_REQ_T nrs_data;

	LI_PUT_FIN_DATA_T put_fin_data;
	
	int ret_code;
	unsigned char leg_msg_id[MSG_ID_SIZE];
	int error_code = 0;
	char leg_msgid[MSG_ID_SIZE];
	//int reqstat = 0;
	char reqflag = '\0';
	char leg_header_date[DATE_TIME_SIZE] = {"\0"};
	char appl_ws_id[WS_ID_SIZE] = {"\0"};
	char appl_user_id[USER_ID_SIZE] = {"\0"};

	unsigned char pReplyMsg[LI_REPLY_MSG_SIZE];
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE];
	
	char user_remark[201] = {0};
	char user_kptno[KPT_SIZE] = {0};
	char gscflag = ' ';

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	

	memset(&card_dtls,'\0',sizeof(LI_UPDATE_GMPC_STAT_REQ_T));

	memset(&mykad,'\0',sizeof(LI_MYKAD_ISSUANCE_REQ_T));

	memset(&nrs_data,'\0',sizeof(LI_NRS_UPDATE_REQ_T));

	memset(&put_fin_data,'\0',sizeof(LI_PUT_FIN_DATA_T));

	strcpy(leg_msgid, "\0");

	strcpy(appl_id, req->header.application_id);

#ifdef DEBUG
	userlog("upd_card_details : Appl id - %s", appl_id);
	userlog("upd_card_details : Request flag - %c", request_flag);
#endif

	//Check for DLKP Transaction


	/* Added appldate & userid commenting below query, changed on 10/05/2004 */
	telephone_no[0] = '\0';
	/* EXEC SQL SELECT KPTNO, APPLSTAT, TO_CHAR(APPLDATE,'DDMMYYYY'), 
		USERID, TO_CHAR(TIMESTAMP,'DDMMYYYY'),SUBSTR(CONTACTNO,1,14)
		INTO :kpt_no:kpt_no_ind, :applstat:applstat_ind,
			 :appl_date:appl_date_ind,:appln_staff_id:appln_staff_id_ind,
			 :tstamp:tstamp_ind,:telephone_no:telephone_no_ind
		FROM APPLICATION
		WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select KPTNO ,APPLSTAT ,TO_CHAR(APPLDATE,'DDMMYYYY') ,USERID\
 ,TO_CHAR( timestamp ,'DDMMYYYY') ,SUBSTR(CONTACTNO,1,14) into :b0:b1,:b2:b3,:\
b4:b5,:b6:b7,:b8:b9,:b10:b11  from APPLICATION where APPLID=:b12";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2226;
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
 sqlstm.sqhstv[1] = (         void  *)&applstat;
 sqlstm.sqhstl[1] = (unsigned int  )1;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&applstat_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)appl_date;
 sqlstm.sqhstl[2] = (unsigned int  )9;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&appl_date_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&appln_staff_id;
 sqlstm.sqhstl[3] = (unsigned int  )11;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&appln_staff_id_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)tstamp;
 sqlstm.sqhstl[4] = (unsigned int  )9;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&tstamp_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)telephone_no;
 sqlstm.sqhstl[5] = (unsigned int  )15;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&telephone_no_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)appl_id;
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



	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog("upd_card_details : Select from APPLICATION failed : %s", SQLMSG);
	#endif
		strcpy(prog_log.remarks,"upd_card_details : Select from APPLICATION failed ");
		sprintf(excep_log.error_msg, "upd_card_details : Select from APPLICATION failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}

	/* If the message is to be sent at Issaunce, then only Card details */
	/* are to be sent, otherwise skip the selection						*/

	if (request_flag == GMPC_STAT_UPD)
	{
		cardstat = ACTIVE;

		/* EXEC SQL SELECT A.CARDVERSIONNO, TO_CHAR(A.CARDISSUEDATE, 'DDMMYYYY'),
						TO_CHAR(A.CARDPERSONALDATE, 'DDMMYYYY'), 
						TO_CHAR(B.CARDCOLLDATE, 'DDMMYYYY'), B.USERID
				 INTO :cardversion:cardversion_ind,
					  :card_issue_dt:card_issue_dt_ind,
					  :personalise_dt:personalise_dt_ind,
					  :collection_dt:collection_dt_ind, 
					  :issue_user_id
				 FROM CARD_STATUS A, APPLICATION B
				 WHERE A.APPLID = :appl_id
				 AND A.CARDSTAT = :cardstat
				 AND B.APPLID = A.APPLID; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select A.CARDVERSIONNO ,TO_CHAR(A.CARDISSUEDATE,'DDMMYYYY')\
 ,TO_CHAR(A.CARDPERSONALDATE,'DDMMYYYY') ,TO_CHAR(B.CARDCOLLDATE,'DDMMYYYY') ,\
B.USERID into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8  from CARD_STATUS A ,APPLICATION\
 B where ((A.APPLID=:b9 and A.CARDSTAT=:b10) and B.APPLID=A.APPLID)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2269;
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
  sqlstm.sqhstv[3] = (         void  *)collection_dt;
  sqlstm.sqhstl[3] = (unsigned int  )9;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&collection_dt_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&issue_user_id;
  sqlstm.sqhstl[4] = (unsigned int  )11;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)appl_id;
  sqlstm.sqhstl[5] = (unsigned int  )20;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&cardstat;
  sqlstm.sqhstl[6] = (unsigned int  )sizeof(int);
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



		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog("upd_card_details : Select from CARD_STATUS/APPLICATION failed : %s", SQLMSG);
		#endif
			strcpy(prog_log.remarks,"upd_card_details : Select from CARD_STATUS/APPLICATION failed ");
			sprintf(excep_log.error_msg, "upd_card_details : Select from CARD_STATUS/APPLICATION failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}
	}

	strcpy(processind, APPL_REGISTER);
	
	/* EXEC SQL SELECT B.BRANCHCODEJPN
			INTO :appl_legacy_branch:appl_legacy_branch_ind
			FROM BRANCH_INFO B, APPLICATION A
			WHERE A.APPLID = :appl_id
			AND   B.BRANCHCODE = A.COLLCENTER; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select B.BRANCHCODEJPN into :b0:b1  from BRANCH_INFO B ,APPL\
ICATION A where (A.APPLID=:b2 and B.BRANCHCODE=A.COLLCENTER)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2312;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&appl_legacy_branch;
 sqlstm.sqhstl[0] = (unsigned int  )11;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&appl_legacy_branch_ind;
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

   //Added by Salmi on 2nd Aug 2021 for SKP015/PM/2021 - Maklumat pusat kutipan
			 //AND   B.BRANCHCODE = A.BRANCHCODE;

	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("upd_card_details : Selecting JPN Branch code from BRANCH_INFO failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"upd_card_details : Selecting  JPN Branch code from BRANCH_INFO failed");
		sprintf(excep_log.error_msg, "upd_card_details : Selecting JPN Branch code from BRANCH_INFO failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
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
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select BRANCHCODEJPN into :b0:b1  from BRANCH_INFO where BR\
ANCHCODE=:b2:b3";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2335;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&issuing_legacy_branch;
  sqlstm.sqhstl[0] = (unsigned int  )11;
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
			userlog("upd_card_details : Selecting Application details of Issuance failed : %s", SQLMSG);
		#endif
			strcpy(prog_log.remarks,"upd_card_details : Selecting Application details of Issuance failed ");
			sprintf(excep_log.error_msg, "upd_card_details : Selecting Application details of Issuance failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}

	}

	/* Copy the the values into the card detail structure */

		if ((kpt_no_ind == 0) && (kpt_no[0] != '\0'))
		{
			strcpy(card_dtls.appnt_kpt , kpt_no);
			strcpy(mykad.appnt_kpt , kpt_no); // included on 29/09/05 for IJPN for the 6050 message
		}
	

		//if DLKP
		if (request_flag == GMPC_STAT_UPD)
		{
			/* Check whether the application status is 'ISSUED' */

			if (applstat != ISSUED)
			{
#ifdef DEBUG
				userlog("upd_card_details : Invalid application status - %c", applstat);
#endif
				strcpy(prog_log.remarks,"upd_card_details : Invalid application status");
				sprintf(excep_log.error_msg, "upd_card_details : Invalid application status - %c", applstat);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return INVALID_APPL_STAT;		
			}
			else
			{
				//card_dtls.appln_stat = 'A'; //applstat; commented for IJPN
				mykad.appln_stat = 'A';

				if ((cardversion_ind == 0) && (cardversion > 0))
				{
					//card_dtls.gmpc_version_no = cardversion;
					mykad.gmpc_version_no = cardversion;
				}

				if ((tstamp_ind == 0) && (tstamp[0] != '\0'))
				{
					//strcpy(card_dtls.gmpc_pc_date , personalise_dt);
					//strcpy(card_dtls.gmpc_pc_date , tstamp);
					strcpy(mykad.gmpc_pc_date , tstamp);
					strcpy(mykad.appln_date , tstamp);
				}

			}


			if(issuing_legacy_branch_ind == 0)
			{
				setnull(issuing_legacy_branch);
				//strcpy(card_dtls.collection_gsc_no , issuing_legacy_branch.arr);
			}
			
			idno.arr[0] = '\0'; idtype[0] = '\0'; relationcode[0] = '\0';
			currlongname.arr[0] = '\0';
			/* EXEC SQL SELECT IDNO, IDTYPE, RELATIONCODE, CURRLONGNAME
			INTO :idno:idno_ind,idtype:idtype_ind,
				  :relationcode:relationcode_ind,
				  :currlongname:currlongname_ind
			FROM APPNT_JPN_THIRD_PARTY
			WHERE APPLID = :appl_id; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 47;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select IDNO ,IDTYPE ,RELATIONCODE ,CURRLONGNAME into :b0:b\
1,:b2:b3,:b4:b5,:b6:b7  from APPNT_JPN_THIRD_PARTY where APPLID=:b8";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2358;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&idno;
   sqlstm.sqhstl[0] = (unsigned int  )18;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&idno_ind;
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
   sqlstm.sqhstv[2] = (         void  *)relationcode;
   sqlstm.sqhstl[2] = (unsigned int  )3;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&relationcode_ind;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&currlongname;
   sqlstm.sqhstl[3] = (unsigned int  )153;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)&currlongname_ind;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)appl_id;
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



				
			if((SQLCODE != 0) && ( SQLCODE != 1403))
			{
			#ifdef DEBUG
				userlog("upd_card_details : Selecting from APPNT_JPN_THIRD_PARTY failed : %s", SQLMSG);
			#endif
				strcpy(prog_log.remarks,"upd_card_details : Selecting from APPNT_JPN_THIRD_PARTY failed ");
				sprintf(excep_log.error_msg, "upd_card_details : Selecting from APPNT_JPN_THIRD_PARTY failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return SELECT_ERROR;
			}

			setnull(idno);
			setnull(currlongname);

			userlog("upd_card_details : idno, idno_ind : %s, %d",idno.arr,idno_ind);
			userlog("upd_card_details : idtype, idtype_ind : %s, %d",idtype,idtype_ind);
			userlog("upd_card_details : relationcode,relationcode_ind : %s, %d",relationcode,relationcode_ind);
			userlog("upd_card_details : currlongname,currlongname_ind : %s, %d",currlongname.arr,currlongname_ind);
			
			if(idno_ind == 0)
				strcpy(mykad.tidno,idno.arr);

			if(idtype_ind == 0)
				strcpy(mykad.tidtype,idtype);

			if(relationcode_ind = 0)
				strcpy(mykad.trelationcode,relationcode);

			if(currlongname_ind == 0)
				strcpy(mykad.tname,currlongname.arr);

			
		}
		else if (request_flag == APPL_IN_PROG)
		{
			// commented this portion and included the nrs_update(201450) message function here
			// instead of calling 201250 message we call 201450 message here
		 /*	card_dtls.appln_stat = 'T';

			if ((appl_date_ind == 0) && (appl_date[0] != '\0'))
			{
				strcpy(card_dtls.appln_date , appl_date);
			}
		 */ 

		  // call this function to fetch data from appnt_jpn_info table
		  ret_code = get_appnt_jpn_info_data(req->header,&nrs_data,ctx);
		  if (ret_code != SUCCESS)
		  {
			userlog("upd_card_details : get_appnt_jpn_info_data() failed");		
				return ret_code;
		  }


		  // call the stored proceedure to get the RF&LF Normalized minutiae
		  ret_code = get_minutiae_info(req, &nrs_data,ctx);
		  if (ret_code != SUCCESS)
		  {
			userlog("upd_card_details : get_minutiae_info() failed");		
				return ret_code;
		  }


		}
		else if (request_flag == APPL_TERMINATE)
		{
			card_dtls.appln_stat = 'C';


			//samsuri added on 8 aug 2022------------------------------------
			

			/* EXEC SQL SELECT LICCLASS INTO :lostReason:lostReason_ind FROM APPL_TXN 
				WHERE APPLID = :appl_id
				AND TXNCODE = '403'; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 47;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select LICCLASS into :b0:b1  from APPL_TXN where (APPLID=:\
b2 and TXNCODE='403')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2393;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)lostReason;
   sqlstm.sqhstl[0] = (unsigned int  )3;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&lostReason_ind;
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


		
			if(SQLCODE == 1403)	
			{
				userlog("TerminateAppl : No record from APPL_TXN : %s",SQLMSG);
			}
			
			if(lostReason_ind == 0)
			{
				lostReason[2] = '\0';
				userlog("TerminateAppl : lostReason: %s", lostReason);
								
				/* EXEC SQL SELECT CARDLOSTCNT, LOSTCNTNEG, LOSTCNTCRIME, LOSTCNTDIS 
				INTO :cardLostCount:cardLostCount_ind, :cardLostCountNeg:cardLostCountNeg_ind,
				:cardLostCountCrime:cardLostCountCrime_ind, :cardLostCountDis:cardLostCountDis_ind FROM APPNT_JPN_INFO 
				WHERE APPLID = :appl_id; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 47;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select CARDLOSTCNT ,LOSTCNTNEG ,LOSTCNTCRIME ,LOSTCNTDIS \
into :b0:b1,:b2:b3,:b4:b5,:b6:b7  from APPNT_JPN_INFO where APPLID=:b8";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2416;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&cardLostCount;
    sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)&cardLostCount_ind;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&cardLostCountNeg;
    sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)&cardLostCountNeg_ind;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&cardLostCountCrime;
    sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)&cardLostCountCrime_ind;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&cardLostCountDis;
    sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)&cardLostCountDis_ind;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)appl_id;
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



				if(SQLCODE == 1403)	
				{
					userlog("TerminateAppl : No record from APPNT_JPN_INFO : %s",SQLMSG);
				}

				userlog("TerminateAppl : cardLostCount: %d", cardLostCount);

				if(cardLostCount_ind == 0 && cardLostCount > 0)
				{
					//cardLostCount--;
					cardLostCount_Reduced = cardLostCount - 1;

					/* EXEC SQL UPDATE APPNT_JPN_INFO SET CARDLOSTCNT = :cardLostCount_Reduced WHERE APPLID = :appl_id; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 47;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "update APPNT_JPN_INFO  set CARDLOSTCNT=:b0 where APPLID=\
:b1";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )2451;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&cardLostCount_Reduced;
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
						userlog("TerminateAppl : UPDATE APPNT_JPN_INFO CARDLOSTCNT failed : %s", SQLMSG);						 
					}
					
					if(strcmp(lostReason,"01") == 0)
						card_dtls.lostcntneg = cardLostCountNeg + 1;
					else if(strcmp(lostReason,"02") == 0)
						card_dtls.lostcntcrime = cardLostCountCrime + 1;
					else if(strcmp(lostReason,"03") == 0)
						card_dtls.lostcntdis = cardLostCountDis + 1;

				}				
			}

			//end added------------------------------------------------------------

			//EXEC SQL SELECT TO_CHAR(SYSDATE,'DDMMYYYY') INTO :cdate FROM DUAL;
			//strcpy(card_dtls.appln_date , cdate); commented on 24/11/2006 not to send this date as we are sending timestamp in header itself

			//Added by Salmi on 12th Apr 2021, MyKas Tamat Tempoh SKP006/SA/2020-Set jkind to 9 for Batal trans
			/* EXEC SQL SELECT JKIND, HSCCOLORCODE INTO :jkind:jkind_ind, :hsccolorcode:hsccolorcode_ind
				FROM APPNT_JPN_INFO WHERE APPLID = :appl_id; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 47;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select JKIND ,HSCCOLORCODE into :b0:b1,:b2:b3  from APPNT_\
JPN_INFO where APPLID=:b4";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2474;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&jkind;
   sqlstm.sqhstl[0] = (unsigned int  )1;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&jkind_ind;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&hsccolorcode;
   sqlstm.sqhstl[1] = (unsigned int  )1;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)&hsccolorcode_ind;
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


		
			if(SQLCODE == 1403)	
			{
				#ifdef DEBUG
				userlog("JPN_UPDATE : No record from APPNT_JPN_INFO : %s",SQLMSG);
		     	#endif
			}
			
			if(jkind == '9')
			{
				card_dtls.jkind = '9';
			}
			#ifdef DEBUG
			userlog("upd_card_details : jkind[%c] hsccolorcode [%c]",jkind, hsccolorcode );
			userlog("upd_card_details : card_dtls.jkind[%c]", card_dtls.jkind );
			#endif
			//Added by Salmi on 12th Apr 2021, MyKas Tamat Tempoh SKP006/SA/2020-End

		}

/*	commented on 20/08/2005 for IJPN	
		if ((appl_date_ind == 0) && (appl_date[0] != '\0'))
		{
			strcpy(card_dtls.appln_date , appl_date);
		}
*/
		
		if((appl_legacy_branch_ind == 0) && (appl_legacy_branch.arr[0] != '\0'))
		{
			setnull(appl_legacy_branch);
			strcpy(card_dtls.appln_gsc_no , appl_legacy_branch.arr);
			strcpy(mykad.appln_gsc_no , appl_legacy_branch.arr);
		}

		if ((appln_staff_id_ind == 0) && (appln_staff_id.arr[0] != '\0'))
		{
			setnull(appln_staff_id);
			strcpy(card_dtls.appln_staff_id , appln_staff_id.arr);
			strcpy(mykad.appln_staff_id , appln_staff_id.arr);
		}

		// added on 18/04/06 to update the contact no to host in 201250
		if ((telephone_no_ind == 0) && (telephone_no[0] != '\0'))
		{			
			strcpy(card_dtls.telephone_no , telephone_no);			
		}

	// this piece of code (60 lines) added on 16/10/06 for sending remarks to host, JRS-63
		#ifdef DEBUG
			userlog("upd_card_details : applstat from application: %c\n", applstat); 
		#endif

	if(applstat == 'T')
	{
		remarks1.arr[0] = '\0';

		/*
		EXEC SQL 
		  SELECT SUBSTR(ACTREMARKS,1,120) INTO :remarks1:remarks1_ind 
			FROM PROBl_RECORD
			WHERE APPLID = :appl_id
			AND PROBLNO = 1;

        // Commented this code on 27/07/2009 to change the selection to APPLICATION
		*/

		/* EXEC SQL 
		  SELECT SUBSTR(APPLREMARKS,1,120) INTO :remarks1:remarks1_ind 
			FROM APPLICATION
			WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select SUBSTR(APPLREMARKS,1,120) into :b0:b1  from APPLICAT\
ION where APPLID=:b2";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2501;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&remarks1;
  sqlstm.sqhstl[0] = (unsigned int  )123;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&remarks1_ind;
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


			

		setnull(remarks1);

		if (SQLCODE != 0)
		{
			#ifdef DEBUG
				userlog("upd_card_details : Select ACTREMARKS from PROBL_RECORD failed : %s\n", SQLMSG); 
			#endif
		}

		if(SQLCODE == 0)
		{
			#ifdef DEBUG
				userlog("upd_card_details : remarks1,remarks1_ind : %s,%d\n", remarks1.arr,remarks1_ind); 
			#endif
		}

		if((remarks1_ind == 0) && ((remarks1.arr[0] != ' ') && (remarks1.arr[0] != '\0')))
		{
			strncpy(card_dtls.jpnremarks1, remarks1.arr,60);

			strncpy(card_dtls.jpnremarks2, remarks1.arr+60,60);

		}
		else
		{
			remarks.arr[0] = '\0';

			/* EXEC SQL
			SELECT APPNTREMARKS INTO :remarks:remarks_ind
			FROM APPNT_JPN_INFO
			WHERE APPLID = :appl_id; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 47;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select APPNTREMARKS into :b0:b1  from APPNT_JPN_INFO where\
 APPLID=:b2";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2524;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&remarks;
   sqlstm.sqhstl[0] = (unsigned int  )63;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&remarks_ind;
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



			setnull(remarks);

			if (SQLCODE != 0)
			{
				#ifdef DEBUG
					userlog("upd_card_details : Select APPNTREMARKS from APPNT_JPN_INFO failed : %s\n", SQLMSG); 
				#endif
			}

			 if((remarks_ind == 0) && (remarks.arr[0] != '\0'))
			 {				
				strcpy(card_dtls.jpnremarks1, remarks.arr);
			 }
				strcpy(card_dtls.jpnremarks2 , "\0");
		}

	}

		/* Application type has to be converted in the format in which the legacy accepts */

		/* EXEC SQL SELECT A.TXNCODE, B.TXNTYPE INTO :txn_code:txn_code_ind,
											:txn_type:txn_type_ind 
			FROM APPL_TXN A, TXN_CODE B
			WHERE A.APPLID = :appl_id
			AND A.TXNSERNO = 1
			AND B.TXNCODE = A.TXNCODE
			AND A.TXNCANCELCODE IS NULL; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select A.TXNCODE ,B.TXNTYPE into :b0:b1,:b2:b3  from APPL_T\
XN A ,TXN_CODE B where (((A.APPLID=:b4 and A.TXNSERNO=1) and B.TXNCODE=A.TXNCO\
DE) and A.TXNCANCELCODE is null )";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2547;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)txn_code;
  sqlstm.sqhstl[0] = (unsigned int  )4;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&txn_code_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&txn_type;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&txn_type_ind;
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
		userlog("upd_card_details : Selecting Transaction code and Transaction type failed : %s", SQLMSG);
	#endif
		strcpy(prog_log.remarks,"upd_card_details : Selecting Transaction code and Transaction type failed ");
		sprintf(excep_log.error_msg, "upd_card_details : Selecting Transaction code and Transaction type failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}

	#ifdef DEBUG
		userlog("upd_card_details : Txn code - %s", txn_code);
		userlog("upd_card_details : Txn type - %d", txn_type);
		userlog("upd_card_details : request_flag - %c", request_flag);
	#endif

	//Added by Salmi, Date 11th June 2020, CRAPPL-  SKP002/CR/2020
	if(strncmp(txn_code, "12", 2 ) == 0)  //DLKP
	{
  
		// Selesai(5), Tolak(6), Batal(7)
		if(request_flag == '6' || request_flag == '7')
			card_dtls.appln_stat = 'C';

		if ((request_flag == '1') || (request_flag == '2') || (request_flag == '5'))//Selesai
		{
			card_dtls.apprv_status = '5';
			card_dtls.appln_stat = 'T';    //Added by Salmi on 15 Apr 2021 for SKP007-PM-2021
		}
		else
			card_dtls.apprv_status = request_flag;

		/* EXEC SQL SELECT COUNT(*) INTO :apprv_count FROM DLEWAT_APPRV_HISTORY WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from DLEWAT_APPRV_HISTORY where \
APPLID=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2574;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&apprv_count;
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
		userlog("upd_card_details: Select from DLEWAT_APPRV_HISTORY failed : %s", SQLMSG); 
		#endif	
		}

		#ifdef DEBUG
		userlog("upd_card_details : apprv_count[%d]",apprv_count );
		#endif
	
		ret_code = get_dlewat_apprv_hist(appl_id, hdr.user_id, user_remark, user_kptno, ctx );
		if (ret_code != GMPC_GOOD)
		{
			#ifdef DEBUG
			userlog("upd_card_details : Unable to get user REMARK and KPTNO");
			#endif

			return SELECT_ERROR;			
		}

		if(request_flag == '7')//Batal
		{
			if(apprv_count > 1)
			{
				/* EXEC SQL SELECT B.GSCFLAG INTO :gscflag FROM DLEWAT_APPRV_HISTORY A, BRANCH_INFO B
					WHERE A.APPLID = :appl_id AND A.APPRVNO =:apprv_count-1 and 
					A.APPRVBRANCH=B.BRANCHCODE; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 47;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select B.GSCFLAG into :b0  from DLEWAT_APPRV_HISTORY A ,B\
RANCH_INFO B where ((A.APPLID=:b1 and A.APPRVNO=(:b2-1)) and A.APPRVBRANCH=B.B\
RANCHCODE)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2597;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&gscflag;
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
    sqlstm.sqhstv[2] = (         void  *)&apprv_count;
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


				if (SQLCODE != 0)
				{
				#ifdef DEBUG
				userlog("upd_card_details: Select from BRANCH_INFO failed : %s", SQLMSG); 
				#endif	
				}

				#ifdef DEBUG
				userlog("upd_card_details: Select from BRANCH_INFO gscflag : %c", gscflag); 
				#endif

				if(gscflag != 'Q')
				{
					strcpy(card_dtls.user1, hdr.user_id); //Batal G User1, State/Normal Trans
				}
				// else - Batal G User 2, no need to sent user_id
			}
			else
			{
				strcpy(card_dtls.user1, hdr.user_id);   //Batal G User1, GQD Trans
			}
		}
		else if(request_flag == '6') //Tolak only at GQD User2
		{
			//strcpy(card_dtls.user1, hdr.user_id); Dont sent user for Tolak G User2
		}
		else
		{
			strcpy(card_dtls.user1, hdr.user_id);		
		}
		strcpy(card_dtls.user1_kptno, user_kptno);
		strcpy(card_dtls.remark, user_remark);
	
		//Added by Salmi, Date 4th March 2021, SKP004/PM/2021
		leg_txncode[0] = '\0';
		/* EXEC SQL SELECT LEGTXNCODE INTO :leg_txncode:leg_txncode_ind 
			FROM APPL_TXN
			WHERE APPLID = :appl_id
			AND   TXNSERNO = 1; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select LEGTXNCODE into :b0:b1  from APPL_TXN where (APPLID=\
:b2 and TXNSERNO=1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2624;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)leg_txncode;
  sqlstm.sqhstl[0] = (unsigned int  )5;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&leg_txncode_ind;
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
			userlog("upd_card_details : Select from APPL_TXN failed : %s", SQLMSG); 
		#endif
			strcpy(prog_log.remarks,"upd_card_details : Select from APPL_TXN failed");
			sprintf(excep_log.error_msg,"upd_card_details : Select from APPL_TXN failed  :%s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
					
			return SELECT_ERROR;
		}

		if((leg_txncode_ind == 0) && (leg_txncode[0] != '\0'))
		{
			strcpy(card_dtls.transaction_code, leg_txncode);
		}
		//Added by Salmi, Date 4th March 2021, SKP004/PM/2021 -End

		#ifdef DEBUG
		userlog("upd_card_details : leg_txncode : %s", leg_txncode);

		userlog("upd_card_details : card_dtls.apprv_status : %c", card_dtls.apprv_status); 
		userlog("upd_card_details : card_dtls.user1 : %s", card_dtls.user1); 
		userlog("upd_card_details : card_dtls.user1_kptno : %s", card_dtls.user1_kptno); 
		userlog("upd_card_details : card_dtls.remark : %s", card_dtls.remark); 
		userlog("upd_card_details : card_dtls.transaction_code : %s", card_dtls.transaction_code);
		#endif
 
	}
	//Added by Salmi, Date 11th June 2020, CRAPPL-  SKP002/CR/2020-End

	if (request_flag == GMPC_STAT_UPD)
	{
		/* Get the Card lost count */

		/* EXEC SQL SELECT CARDLOSTCNT,JPNREMARKS1, JPNREMARKS2 
		INTO :lost_count:lost_count_ind, :jpnremarks1:jpnremarks1_ind,
		:jpnremarks2:jpnremarks2_ind
		FROM APPNT_JPN_INFO
		WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select CARDLOSTCNT ,JPNREMARKS1 ,JPNREMARKS2 into :b0:b1,:b\
2:b3,:b4:b5  from APPNT_JPN_INFO where APPLID=:b6";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2647;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&lost_count;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&lost_count_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)jpnremarks1;
  sqlstm.sqhstl[1] = (unsigned int  )61;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&jpnremarks1_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)jpnremarks2;
  sqlstm.sqhstl[2] = (unsigned int  )61;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&jpnremarks2_ind;
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
			userlog("upd_card_details : Select from APPNT_JPN_INFO failed : %s", SQLMSG); 
		#endif
			strcpy(prog_log.remarks,"upd_card_details : Select from APPNT_JPN_INFO failed");
			sprintf(excep_log.error_msg,"upd_card_details : Selecting Card lost count from APPNT_JPN_INFO failed  :%s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
					
			return SELECT_ERROR;
		}

		if (lost_count_ind == -1)
			lost_count = 0;

		if((jpnremarks1_ind == 0) && (jpnremarks1[0] != '\0'))
		{
			//strcpy(card_dtls.jpnremarks1 , jpnremarks1);
			strcpy(mykad.jpnremarks1 , jpnremarks1);
		}

		if((jpnremarks2_ind == 0) && (jpnremarks2[0] != '\0'))
		{
			//strcpy(card_dtls.jpnremarks2 , jpnremarks2);
			strcpy(mykad.jpnremarks2 , jpnremarks2);
		}

		#ifdef DEBUG
			userlog("upd_card_details : Card lost count - %d", lost_count); 
		#endif

		/* See if the applicant has applied for 'Loss of Id transaction' */

		itoa(TXN_LOSS_ID, txn_code, 10);
		txn_code_ind = 0;

		/* EXEC SQL SELECT COUNT(*) INTO :txn_count
			FROM APPL_TXN
			WHERE APPLID = :appl_id
			AND TXNCODE = :txn_code:txn_code_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN where (APPLID=:b1 \
and TXNCODE=:b2:b3)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2678;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&txn_count;
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
  sqlstm.sqhstv[2] = (         void  *)txn_code;
  sqlstm.sqhstl[2] = (unsigned int  )4;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&txn_code_ind;
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
			userlog("upd_card_details : Select from APPL_TXN failed : %s", SQLMSG); 
		#endif
			strcpy(prog_log.remarks,"upd_card_details : Select from APPL_TXN failed");
			sprintf(excep_log.error_msg,"upd_card_details : Select from APPL_TXN failed  :%s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
					
			return SELECT_ERROR;
		}

		#ifdef DEBUG
			userlog("upd_card_details : Txn count - %d", txn_count); 
		#endif

		if (txn_count > 0)
			lost_count = lost_count + 1;

		//itoa(lost_count, card_dtls.card_lost_count, 10);
		if(lost_count > 0)
			itoa(lost_count, mykad.card_lost_count, 10);
		else
			userlog("upd_card_details : lost_count is 0 only so no value copied to mykad.card_lost_count");


        // Added this code for Release 3.17  on 13/04/2010 to send paid fee in Isuuance message

		la_feeamt = 0; paid_fee = 0;
		/* EXEC SQL 
			SELECT SUM(PAYABLEAMT) INTO :la_feeamt 
			FROM PAYMENT_INFO 
			WHERE APPLID=:appl_id
			AND PAYMSERNO >= 50; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select sum(PAYABLEAMT) into :b0  from PAYMENT_INFO where (A\
PPLID=:b1 and PAYMSERNO>=50)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2705;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&la_feeamt;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
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



	
			if((sqlca.sqlcode != 0) && (sqlca.sqlcode != 1403))
			{
				#ifdef DEBUG
					userlog("upd_card_details : select payableamt from PAYMENT_INFO failed ");
				#endif
				//strcpy(prog_log.remarks,"jpn_update: select payableamt from PAYMENT_INFO failed");
				//sprintf(excep_log.error_msg,"jpn_update: select payableamt from PAYMENT_INFO failed:%s ",SQLMSG);
				//excep_log.termination_flag = 'Y';
				//excep_log.severity = FATAL;
				//log_error(ctx);
				
				//return SELECT_ERROR;
			}

		paid_fee = la_feeamt;
		la_feeamt = 0;

		lfee = 0;temp_fee[0] = '\0';

		/* PAID FEE */
		if(paid_fee > 0)
		{
			lfee = (int)(paid_fee*100);
		userlog("upd_card_details : lfee : %d",lfee);
			itoa(lfee,temp_fee,10);
		userlog("upd_card_details : temp_fee : %s",temp_fee);

			strcpy(mykad.paid_fee,temp_fee);

			userlog("upd_card_details : mykad.paid_fee : %s",mykad.paid_fee);
		}

		
		// Added this code on 15/11/2014 for Release 3.28A CR 290

		lb_feeamt = 0; lostcompoundfee = 0;
		/* EXEC SQL SELECT SUM(FEEAMT) INTO :lb_feeamt 
		    FROM APPL_TXN_FEE
			WHERE FEETYPE = 'CF'
			  AND TXNSERNO IN (
			   SELECT TXNSERNO FROM APPL_TXN 
				 WHERE APPLID = :appl_id
				    AND TXNCODE = '905')
			   AND APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select sum(FEEAMT) into :b0  from APPL_TXN_FEE where ((FEET\
YPE='CF' and TXNSERNO in (select TXNSERNO  from APPL_TXN where (APPLID=:b1 and\
 TXNCODE='905'))) and APPLID=:b1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2728;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&lb_feeamt;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
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




		lostcompoundfee = lb_feeamt;
		lb_feeamt = 0;

		lfee = 0;temp_fee[0] = '\0';

		if(lostcompoundfee > 0)
		{
			lfee = (int)(lostcompoundfee*100);
			userlog("upd_card_details : lfee : %d",lfee);
			itoa(lfee,temp_fee,10);
			userlog("upd_card_details : temp_fee : %s",temp_fee);

			strcpy(mykad.lostcompoundfee,temp_fee);

			userlog("upd_card_details : mykad.lostcompoundfee : %s",mykad.lostcompoundfee);
		}

		// Added this code on 16/08/2016 for CR 293, Release 3.32, 
		// issuance message to send paid indicator value

		/* EXEC SQL SELECT REDUCTIONTYPE INTO :reductiontype FROM APPL_FEE_REDUCTION
		WHERE APPLID = :appl_id
		AND ROWNUM = 1; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select REDUCTIONTYPE into :b0  from APPL_FEE_REDUCTION wher\
e (APPLID=:b1 and ROWNUM=1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2755;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&reductiontype;
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



	
		if((sqlca.sqlcode != 0) && (sqlca.sqlcode != 1403))
		{
			#ifdef DEBUG
				userlog("upd_card_details: select from APPL_FEE_REDUCTION failed ");
			#endif
			strcpy(prog_log.remarks,"upd_card_details: select from APPL_FEE_REDUCTION failed");
			sprintf(excep_log.error_msg,"upd_card_details: select from APPL_FEE_REDUCTION failed:%s ",SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
			
			return SELECT_ERROR;
		}

		#ifdef DEBUG
			userlog("upd_card_details: reductiontype: %c ",reductiontype);
		#endif

		if(reductiontype == 'R')
			strcpy(mykad.additional_fee,"1");  // fee reduction
		else if(reductiontype == 'W')
			strcpy(mykad.additional_fee,"9");  // fee waiver
		else 
			strcpy(mykad.additional_fee,"0");  // full payment


		// END OF CODE 15/11/2014 for Release 3.28A

	}
	
		legapplid[0] = '\0'; priority = '\0';
		/* EXEC SQL SELECT LEGAPPLID,APPLPRIORITY,COLLCENTER 
			INTO :legapplid:legapplid_ind,:priority:priority_ind,:collcenter:collcenter_ind
			FROM  APPLICATION 
			WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select LEGAPPLID ,APPLPRIORITY ,COLLCENTER into :b0:b1,:b2:\
b3,:b4:b5  from APPLICATION where APPLID=:b6";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2778;
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
  sqlstm.sqhstv[1] = (         void  *)&priority;
  sqlstm.sqhstl[1] = (unsigned int  )1;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&priority_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)collcenter;
  sqlstm.sqhstl[2] = (unsigned int  )7;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&collcenter_ind;
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
			userlog("upd_card_details : Select from APPLICATION failed : %s", SQLMSG); 
		#endif
			strcpy(prog_log.remarks,"upd_card_details : Select from APPLICATION failed");
			sprintf(excep_log.error_msg,"upd_card_details : Select from APPLICATION failed  :%s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
					
			return SELECT_ERROR;
		}

		if((legapplid_ind == 0) && (legapplid[0] != '\0'))
		{
			strcpy(card_dtls.appl_no, legapplid);
			strcpy(mykad.appl_no, legapplid);
		}
		

		// if legapplid is not null then send 1 else send 2 to ijpn_gmpc_ind
		if((legapplid[0] != '\0') && (legapplid[0] != ' '))
			mykad.ijpn_gmpc_ind = '1';
		else
			mykad.ijpn_gmpc_ind = '2';

		// Added this on 15/11/2014

		userlog("upd_card_details : application collcenter : %s",collcenter);

		/* EXEC SQL SELECT BRANCHCODEJPN INTO :bcodejpn:bcodejpn_ind
			FROM BRANCH_INFO WHERE BRANCHCODE = :collcenter; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select BRANCHCODEJPN into :b0:b1  from BRANCH_INFO where BR\
ANCHCODE=:b2";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2809;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)bcodejpn;
  sqlstm.sqhstl[0] = (unsigned int  )9;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&bcodejpn_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)collcenter;
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



		if((bcodejpn_ind == 0) && (bcodejpn[0] != '\0'))
		{			
			strcpy(mykad.collcenter, bcodejpn);
		}
		userlog("upd_card_details : mykad.collcenter : %s",mykad.collcenter);

		// add code finished on 15/11/2014

	// Added this code on 20/02/2014 for CR 284, to send lostcntneg,lostcntdis,lostcntcrime to host
		/* EXEC SQL SELECT TXNCODE,LICCLASS INTO :ltxncode, :llclass
			FROM APPL_TXN WHERE APPLID = :appl_id
			AND TXNCODE = '905'; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select TXNCODE ,LICCLASS into :b0,:b1  from APPL_TXN where \
(APPLID=:b2 and TXNCODE='905')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2832;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)ltxncode;
  sqlstm.sqhstl[0] = (unsigned int  )4;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)llclass;
  sqlstm.sqhstl[1] = (unsigned int  )3;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
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
				userlog("upd_card_details : Select from APPL_TXN of TXNCODE,LICCLASS failed : %s", SQLMSG); 
			#endif
				strcpy(prog_log.remarks,"upd_card_details : Select from APPL_TXN of TXNCODE,LICCLASS failed");
				sprintf(excep_log.error_msg,"upd_card_details : Select from APPL_TXN of TXNCODE,LICCLASS failed  :%s", SQLMSG);
				//excep_log.termination_flag = YES;
				//excep_log.severity = FATAL;
				//log_error(ctx);				
				//return SELECT_ERROR;
			}
			
			#ifdef DEBUG
				userlog("upd_card_details : Release 3.27");
				userlog("upd_card_details : ltxncode : %s",ltxncode);
				userlog("upd_card_details : licclass : %s",llclass);
			#endif


		if(strcmp(ltxncode,"905") == 0)
		{
			/* EXEC SQL SELECT NVL(LOSTCNTNEG,0), NVL(LOSTCNTCRIME,0), NVL(LOSTCNTDIS,0)
				INTO :llneg, :llcrime, :lldis
					FROM APPNT_JPN_INFO
						WHERE APPLID = :appl_id; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 47;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select NVL(LOSTCNTNEG,0) ,NVL(LOSTCNTCRIME,0) ,NVL(LOSTCNT\
DIS,0) into :b0,:b1,:b2  from APPNT_JPN_INFO where APPLID=:b3";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2859;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&llneg;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&llcrime;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&lldis;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
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
				userlog("upd_card_details : Select from APPNT_JPN_INFO of LOSTCNTNEG failed : %s", SQLMSG); 
			#endif
				strcpy(prog_log.remarks,"upd_card_details : Select from APPNT_JPN_INFO of LOSTCNTNEG failed");
				sprintf(excep_log.error_msg,"upd_card_details : Select from APPNT_JPN_INFO of LOSTCNTNEG failed  :%s", SQLMSG);
				//excep_log.termination_flag = YES;
				//excep_log.severity = FATAL;
				//log_error(ctx);				
				//return SELECT_ERROR;
			}
			
/* need to send only particular type, so commented this
			if(llneg > 0)
				mykad.lostcntneg = llneg;
		

			if(llcrime > 0 )
				mykad.lostcntcrime = llcrime;


			if(lldis > 0)
				mykad.lostcntdis = lldis;
*/

			if(strcmp(llclass,"01") == 0)
			{
				mykad.lostcntneg = llneg + 1;

			}

			if(strcmp(llclass,"02") == 0)
			{
				mykad.lostcntcrime = llcrime + 1;
			}

			if(strcmp(llclass,"03") == 0)
			{
				mykad.lostcntdis = lldis + 1;
			}

		
		}

	// end of CR 284



	/*
	if (request_flag == APPL_IN_PROG)
	{

		// if legapplid is not null then send 1 else send 2 to ijpn_gmpc_ind
		if((legapplid[0] != '\0') && (legapplid[0] != ' '))
			card_dtls.ijpn_gmpc_ind = '1';
		else
			card_dtls.ijpn_gmpc_ind = '2';


		if((priority_ind == 0) && ((priority != '\0') && (priority != ' ')))
		{
			card_dtls.indicator2 = priority;
		}

		/* added on 26/09/05 for indicator2 & transaction_code for IJPN

		userlog("appl_id[14] : %c",appl_id[14]);
		userlog("priority : %c",priority);

		if((appl_id[14] == '4') || (appl_id[14] == '5'))
		{
			if(priority == '0')
				card_dtls.indicator2 = '3';
			else if(priority == '1')
				card_dtls.indicator2 = '4';
			else if(priority == '2')
				card_dtls.indicator2 = '5';
		}


		EXEC SQL SELECT PROBLREASONCODE INTO :prob_reason_code:prob_reason_code_ind
			FROM  PROBL_RECORD
			WHERE APPLID = :appl_id
			AND ROWNUM = 1;

		if ((SQLCODE != 0) && (SQLCODE != 1403))
		{
		#ifdef DEBUG
			userlog("upd_card_details : Select from PROBL_RECORD failed : %s", SQLMSG); 
		#endif
			strcpy(prog_log.remarks,"upd_card_details : Select from PROBL_RECORD failed");
			sprintf(excep_log.error_msg,"upd_card_details : Select from PROBL_RECORD failed  :%s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
					
			return SELECT_ERROR;
		}

		if((prob_reason_code_ind == 0) && (prob_reason_code[0] != '\0'))
		{
			strcpy(card_dtls.probl_reason_code, prob_reason_code);
		}


	ltxncode[0] = '\0';
	EXEC SQL SELECT LEGTXNCODE INTO :ltxncode:ltxncode_ind 
		FROM APPL_TXN
		WHERE APPLID = :appl_id
		AND   TXNSERNO = 1;

	
		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog("upd_card_details : Select from APPL_TXN failed : %s", SQLMSG); 
		#endif
			strcpy(prog_log.remarks,"upd_card_details : Select from APPL_TXN failed");
			sprintf(excep_log.error_msg,"upd_card_details : Select from APPL_TXN failed  :%s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
					
			return SELECT_ERROR;
		}

		if((ltxncode_ind == 0) && (ltxncode[0] != '\0'))
		{
		strcpy(card_dtls.transaction_code, ltxncode);
		}

	}
	*/
/* end IJPN*/

	/* Get the Application date-time */
	if (request_flag == GMPC_STAT_UPD)
	{
		//ret_code = get_appl_date(req->header.application_id, leg_header_date, TXN_ISSUE,ctx); commented this on 15/11/2006
		ret_code = get_appl_timestamp(req->header.application_id, leg_header_date, TXN_ISSUE,ctx);
		
	}
	else
	{
		//ret_code = get_appl_date(req->header.application_id, leg_header_date, txn_type,ctx); commented this on 15/11/2006
		ret_code = get_appl_timestamp(req->header.application_id, leg_header_date, txn_type,ctx);
	}

	if (ret_code != SUCCESS)
	{
	#ifdef DEBUG
		userlog("upd_card_details : get_appl_date() failed with return code - %d", ret_code);
	#endif
		return ret_code;
	}

	/* Get Application WS id and User id */
	appl_user_id[0] = '\0';
	if (request_flag == GMPC_STAT_UPD)
	{
		ret_code = get_appl_machine(req->header.application_id, appl_ws_id,
								appl_user_id, TXN_ISSUE,ctx);
	}
	else
	{
		ret_code = get_appl_machine(req->header.application_id, appl_ws_id,
								appl_user_id, txn_type,ctx);

	}

	if (ret_code != SUCCESS )
	{
	#ifdef DEBUG
		userlog("upd_card_details : get_appl_machine() failed with %d", ret_code);
	#endif

		return ret_code;
	}

	#ifdef DEBUG
		userlog("upd_card_details : Legacy header date - %s", leg_header_date);
		userlog("upd_card_details : Legacy WS Id - %s", appl_ws_id);
	#endif

	/* Populate the Legacy header */

	strncpy(hdr.trans_date, leg_header_date, 8);
	hdr.trans_date[DATE_SIZE - 1] = '\0';

	strncpy(hdr.trans_time, leg_header_date + 9, 6);
	hdr.trans_time[TIME_SIZE - 1] = '\0';
	
	//strcpy(hdr.user_id, appl_user_id); commented for IJPN on 26/10/05
	if(appl_user_id[0] == '\0')
	{
		strcpy(hdr.user_id, req->header.user_id);
		strcpy(appl_user_id,req->header.user_id);
	}

	strcpy(hdr.workstation_id, appl_ws_id);

	if ((request_flag != GMPC_STAT_UPD) && (request_flag != APPL_IN_PROG))
	{
		
	#ifdef DEBUG
		userlog("upd_card_details : KPT - %s", card_dtls.appnt_kpt);
		//userlog("upd_card_details : Appl type - %s", card_dtls.appln_type);
		userlog("upd_card_details : Appl date - %s", card_dtls.appln_date);
		userlog("upd_card_details : Branch code - %s", card_dtls.appln_gsc_no);
		userlog("upd_card_details : User id - %s", card_dtls.appln_staff_id);
		//userlog("upd_card_details : Collection branch code - %s", card_dtls.collection_gsc_no);
		//userlog("upd_card_details : Collection date - %s", card_dtls.collection_date);
		userlog("upd_card_details : GMPC PC date - %s", card_dtls.gmpc_pc_date);
		//userlog("upd_card_details : Issuance user id - %s", card_dtls.issuance_staff_id);
		//userlog("upd_card_details : Issuance date - %s", card_dtls.issuance_date);
		userlog("upd_card_details : Remark1 - %s", card_dtls.jpnremarks1);
		userlog("upd_card_details : Remark2 - %s", card_dtls.jpnremarks2);
		userlog("upd_card_details : Card lost count - %s", card_dtls.card_lost_count);
		userlog("upd_card_details : Appl status - %c", card_dtls.appln_stat);
		userlog("upd_card_details : Card version no - %d", card_dtls.gmpc_version_no);
		userlog("upd_card_details : Indicator2 - %c", card_dtls.indicator2);
		userlog("upd_card_details : transaction code - %s", card_dtls.transaction_code);
		userlog("upd_card_details : ijpn_gmpc_ind - %c", card_dtls.ijpn_gmpc_ind);
		userlog("upd_card_details : appl_no - %s", card_dtls.appl_no);
		userlog("upd_card_details : telephone_no_no - %s", card_dtls.telephone_no);
		//Added by Salmi, Date 11th June 2020, CRAPPL-  SKP002/CR/2020
		userlog("upd_card_details : personlised_date - %s", card_dtls.personlised_date);
		userlog("upd_card_details : applpriority - %d", card_dtls.applpriority);
		userlog("upd_card_details : apprv status - %c", card_dtls.apprv_status);
		//Added by Salmi, Date 11th June 2020, CRAPPL-  SKP002/CR/2020-End
		userlog("upd_card_details : jkind - %c", card_dtls.jkind); //Added by Salmi on 12th Apr 2021, MyKas Tamat Tempoh

	#endif
	
	}
	else if (request_flag == GMPC_STAT_UPD)
	{
	#ifdef DEBUG
		userlog("upd_card_details : MYKAD ISSUANCE");
		userlog("upd_card_details : KPT - %s", mykad.appnt_kpt);		
		userlog("upd_card_details : Appl date - %s", mykad.appln_date);
		userlog("upd_card_details : Branch code - %s", mykad.appln_gsc_no);
		userlog("upd_card_details : User id - %s", mykad.appln_staff_id);		
		userlog("upd_card_details : GMPC PC date - %s", mykad.gmpc_pc_date);		
		userlog("upd_card_details : Remark1 - %s", mykad.jpnremarks1);
		userlog("upd_card_details : Remark2 - %s", mykad.jpnremarks2);
		userlog("upd_card_details : Card lost count - %s", mykad.card_lost_count);
		userlog("upd_card_details : Appl status - %c", mykad.appln_stat);
		userlog("upd_card_details : Card version no - %d", mykad.gmpc_version_no);
		userlog("upd_card_details : Id no - %s", mykad.tidno);
		userlog("upd_card_details : Id type - %s", mykad.tidtype);
		userlog("upd_card_details : currlongname - %s", mykad.tname);
		userlog("upd_card_details : relationcode - %s", mykad.trelationcode);
		userlog("upd_card_details : ijpn_gmpc_ind - %c", mykad.ijpn_gmpc_ind);
		userlog("upd_card_details : paid_fee : %s",mykad.paid_fee);
		userlog("upd_card_details : lostcompoundfee : %s",mykad.lostcompoundfee);
		userlog("upd_card_details : appl_no - %s", mykad.appl_no);
	#endif
	}
	/* Put the request */

	if (request_flag == GMPC_STAT_UPD)
	{


	// This code is added on 15/02/2008 to capture the request and response time of ISSUANCE update to host

	/* EXEC SQL DELETE FROM IJPN_LEGACY_UPD_RSP WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "delete  from IJPN_LEGACY_UPD_RSP  where APPLID=:b0";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2890;
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



		if (SQLCODE != 0)
			{
			 #ifdef DEBUG
				userlog("upd_appnt_demo_info : DELETE FROM IJPN_LEGACY_UPD_RSP failed : %s", SQLMSG);
		     #endif
			}

	/* EXEC SQL INSERT INTO IJPN_LEGACY_UPD_RSP(APPLID,LEGREQFLAG,LEGREQDATE)
		VALUES(:appl_id,'C',SYSDATE); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into IJPN_LEGACY_UPD_RSP (APPLID,LEGREQFLAG,LEGREQDAT\
E) values (:b0,'C',SYSDATE)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2909;
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


		//VALUES(:appl_id,'C',:leg_header_date);

		if (SQLCODE != 0)
			{
			 #ifdef DEBUG
				userlog("upd_appnt_demo_info : INSERT INTO IJPN_LEGACY_UPD_RSP failed : %s", SQLMSG);
		     #endif
			}


	//


     ret_code = li_mykad_issuance_p(hdr, mykad, leg_msg_id, &error_code,pReplyMsg, &iReplyMsgLen, sErrMessage);

	 userlog("upd_card_details (li_mykad_issuance_p) : ret_code : %d",ret_code);

	 if(ret_code != GMPC_GOOD)
	 {
	  #ifdef DEBUG
		userlog("upd_card_details : Unable to put the GMPC status update request : %d", error_code);
	  #endif
		strcpy(prog_log.remarks,"upd_card_details : Unable to put the GMPC status update request");
		sprintf(excep_log.error_msg, "upd_card_details : Unable to put the GMPC status update request : Error code - %d", error_code);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
			

		if(leg_msg_id != NULL && strlen(leg_msg_id) > 20)
		strcpy(leg_msgid, leg_msg_id);

	
		strncpy(reject_code.arr,sErrMessage,8);
		setlen(reject_code);

		userlog("reject_code : %s",reject_code.arr);

		if(reject_code.arr[0] != '\0')
			reject_code_ind = 0;

		strcpy(reason_desc.arr,sErrMessage);
		setlen(reason_desc);

		userlog("reason_desc : %s",reason_desc.arr);

		if(reason_desc.arr[0] != '\0')
			reason_desc_ind = 0;
		
		strcpy(branch_code, req->header.branch_code);
	
		/* update with LEGREQSTAT = -2, rejectcode and reason desc value when li_put failed*/
		/* EXEC SQL UPDATE IJPN_LEGACY_REQUEST 
		SET BRANCHCODE     = :branch_code,
			LEGMSGID       = :leg_msgid,
			LEGREJCODE     = :reject_code:reject_code_ind,
			LEGREJREASON   = :reason_desc:reason_desc_ind,
			LEGREQDATETIME =  SYSDATE,
			LEGREQSTAT     = -2,			
			USERID         = :appl_user_id,			
			TXNWSID        = :appl_ws_id
			WHERE APPLID   = :appl_id 
		AND LEGREQMSGID    = :msgid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update IJPN_LEGACY_REQUEST  set BRANCHCODE=:b0,LEGMSGID=:b1\
,LEGREJCODE=:b2:b3,LEGREJREASON=:b4:b5,LEGREQDATETIME=SYSDATE,LEGREQSTAT=(-2),\
USERID=:b6,TXNWSID=:b7 where (APPLID=:b8 and LEGREQMSGID=:b9)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2928;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)branch_code;
  sqlstm.sqhstl[0] = (unsigned int  )7;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)leg_msgid;
  sqlstm.sqhstl[1] = (unsigned int  )25;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&reject_code;
  sqlstm.sqhstl[2] = (unsigned int  )11;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&reject_code_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&reason_desc;
  sqlstm.sqhstl[3] = (unsigned int  )163;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&reason_desc_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)appl_user_id;
  sqlstm.sqhstl[4] = (unsigned int  )9;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)appl_ws_id;
  sqlstm.sqhstl[5] = (unsigned int  )16;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)appl_id;
  sqlstm.sqhstl[6] = (unsigned int  )20;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&msgid;
  sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
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


			
			if (SQLCODE != 0 && SQLCODE != 1403)
			{
			#ifdef DEBUG
				userlog("upd_card_details : Updateing IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON failed : %s", SQLMSG);
			#endif
				strcpy(prog_log.remarks,"upd_appnt_demo_info : Updateing IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON failed ");
				sprintf(excep_log.error_msg, "upd_appnt_demo_info : Updateing IJPN_LEGACY_REQUEST failed with LEGREJCODE and LEGREJREASON : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);				
			}

			#ifdef DEBUG
				userlog("upd_card_details : Updated IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON : %s", SQLMSG);
			#endif

			return error_code;

		}
	}
	else if (request_flag == APPL_IN_PROG)
	{
		// this message calling is commented here on 26/09/06 
		// calling 201250 is commeneted here, instead 201450 is beeing called from here
		// ret_code = li_update_gmpc_stat_p(hdr, card_dtls, leg_msg_id, &error_code,pReplyMsg, &iReplyMsgLen, sErrMessage);
		// userlog("upd_card_details (li_update_gmpc_stat_p) : ret_code : %d",ret_code);

		ret_code = li_nrs_update_p(hdr, put_fin_data, nrs_data, leg_msg_id, &error_code,pReplyMsg, &iReplyMsgLen, sErrMessage);

		userlog("upd_card_details (li_nrs_update_p) : ret_code : %d",ret_code);

		if(ret_code != GMPC_GOOD)
		{
		#ifdef DEBUG
			userlog("upd_card_details : Unable to put the NRS update request : %d", error_code);
		#endif
			strcpy(prog_log.remarks,"upd_card_details : Unable to put the NRS update request");
			sprintf(excep_log.error_msg, "upd_card_details : Unable to put the NRS update request : Error code - %d", error_code);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
				

			if(leg_msg_id != NULL && strlen(leg_msg_id) > 20)
			strcpy(leg_msgid, leg_msg_id);

		
			strncpy(reject_code.arr,sErrMessage,8);
			setlen(reject_code);

			userlog("reject_code : %s",reject_code.arr);

			if(reject_code.arr[0] != '\0')
				reject_code_ind = 0;

			strcpy(reason_desc.arr,sErrMessage);
			setlen(reason_desc);

			userlog("reason_desc : %s",reason_desc.arr);

			if(reason_desc.arr[0] != '\0')
				reason_desc_ind = 0;
			
			strcpy(branch_code, req->header.branch_code);
		
			/* update with LEGREQSTAT = -2, rejectcode and reason desc value when li_put failed*/
			/* EXEC SQL UPDATE IJPN_LEGACY_REQUEST 
			SET BRANCHCODE     = :branch_code,
				LEGMSGID       = :leg_msgid,
				LEGREJCODE     = :reject_code:reject_code_ind,
				LEGREJREASON   = :reason_desc:reason_desc_ind,
				LEGREQDATETIME =  SYSDATE,
				LEGREQSTAT     = -2,			
				USERID         = :appl_user_id,			
				TXNWSID        = :appl_ws_id
				WHERE APPLID   = :appl_id 
			AND LEGREQMSGID    = :msgid; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 47;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update IJPN_LEGACY_REQUEST  set BRANCHCODE=:b0,LEGMSGID=:b\
1,LEGREJCODE=:b2:b3,LEGREJREASON=:b4:b5,LEGREQDATETIME=SYSDATE,LEGREQSTAT=(-2)\
,USERID=:b6,TXNWSID=:b7 where (APPLID=:b8 and LEGREQMSGID=:b9)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2975;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)branch_code;
   sqlstm.sqhstl[0] = (unsigned int  )7;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)leg_msgid;
   sqlstm.sqhstl[1] = (unsigned int  )25;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&reject_code;
   sqlstm.sqhstl[2] = (unsigned int  )11;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&reject_code_ind;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&reason_desc;
   sqlstm.sqhstl[3] = (unsigned int  )163;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)&reason_desc_ind;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)appl_user_id;
   sqlstm.sqhstl[4] = (unsigned int  )9;
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)0;
   sqlstm.sqinds[4] = (         int  )0;
   sqlstm.sqharm[4] = (unsigned int  )0;
   sqlstm.sqadto[4] = (unsigned short )0;
   sqlstm.sqtdso[4] = (unsigned short )0;
   sqlstm.sqhstv[5] = (         void  *)appl_ws_id;
   sqlstm.sqhstl[5] = (unsigned int  )16;
   sqlstm.sqhsts[5] = (         int  )0;
   sqlstm.sqindv[5] = (         void  *)0;
   sqlstm.sqinds[5] = (         int  )0;
   sqlstm.sqharm[5] = (unsigned int  )0;
   sqlstm.sqadto[5] = (unsigned short )0;
   sqlstm.sqtdso[5] = (unsigned short )0;
   sqlstm.sqhstv[6] = (         void  *)appl_id;
   sqlstm.sqhstl[6] = (unsigned int  )20;
   sqlstm.sqhsts[6] = (         int  )0;
   sqlstm.sqindv[6] = (         void  *)0;
   sqlstm.sqinds[6] = (         int  )0;
   sqlstm.sqharm[6] = (unsigned int  )0;
   sqlstm.sqadto[6] = (unsigned short )0;
   sqlstm.sqtdso[6] = (unsigned short )0;
   sqlstm.sqhstv[7] = (         void  *)&msgid;
   sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
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


				
				if (SQLCODE != 0 && SQLCODE != 1403)
				{
				#ifdef DEBUG
					userlog("upd_card_details : Updateing IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON failed : %s", SQLMSG);
				#endif
					strcpy(prog_log.remarks,"upd_appnt_demo_info : Updateing IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON failed ");
					sprintf(excep_log.error_msg, "upd_appnt_demo_info : Updateing IJPN_LEGACY_REQUEST failed with LEGREJCODE and LEGREJREASON : %s", SQLMSG);
					excep_log.termination_flag = YES;
					excep_log.severity = FATAL;

					log_error(ctx);				
				}

				#ifdef DEBUG
					userlog("upd_card_details : Updated IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON : %s", SQLMSG);
				#endif


			return error_code;

		}
	}
	else if((request_flag != GMPC_STAT_UPD) && (request_flag != APPL_IN_PROG))
	{
		ret_code = li_update_gmpc_stat_p(hdr, card_dtls, leg_msg_id, &error_code,pReplyMsg, &iReplyMsgLen, sErrMessage);

		userlog("upd_card_details (li_update_gmpc_stat_p) : ret_code : %d",ret_code);

		if(ret_code != GMPC_GOOD)
		{
		#ifdef DEBUG
			userlog("upd_card_details : Unable to put the GMPC status update request : %d", error_code);
		#endif
			strcpy(prog_log.remarks,"upd_card_details : Unable to put the GMPC status update request");
			sprintf(excep_log.error_msg, "upd_card_details : Unable to put the GMPC status update request : Error code - %d", error_code);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
				

			if(leg_msg_id != NULL && strlen(leg_msg_id) > 20)
			strcpy(leg_msgid, leg_msg_id);

		
			strncpy(reject_code.arr,sErrMessage,8);
			setlen(reject_code);

			userlog("reject_code : %s",reject_code.arr);

			if(reject_code.arr[0] != '\0')
				reject_code_ind = 0;

			strcpy(reason_desc.arr,sErrMessage);
			setlen(reason_desc);

			userlog("reason_desc : %s",reason_desc.arr);

			if(reason_desc.arr[0] != '\0')
				reason_desc_ind = 0;
			
			strcpy(branch_code, req->header.branch_code);
		
			/* update with LEGREQSTAT = -2, rejectcode and reason desc value when li_put failed*/
			/* EXEC SQL UPDATE IJPN_LEGACY_REQUEST 
			SET BRANCHCODE     = :branch_code,
				LEGMSGID       = :leg_msgid,
				LEGREJCODE     = :reject_code:reject_code_ind,
				LEGREJREASON   = :reason_desc:reason_desc_ind,
				LEGREQDATETIME =  SYSDATE,
				LEGREQSTAT     = -2,			
				USERID         = :appl_user_id,			
				TXNWSID        = :appl_ws_id
				WHERE APPLID   = :appl_id 
			AND LEGREQMSGID    = :msgid; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 47;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update IJPN_LEGACY_REQUEST  set BRANCHCODE=:b0,LEGMSGID=:b\
1,LEGREJCODE=:b2:b3,LEGREJREASON=:b4:b5,LEGREQDATETIME=SYSDATE,LEGREQSTAT=(-2)\
,USERID=:b6,TXNWSID=:b7 where (APPLID=:b8 and LEGREQMSGID=:b9)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3022;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)branch_code;
   sqlstm.sqhstl[0] = (unsigned int  )7;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)leg_msgid;
   sqlstm.sqhstl[1] = (unsigned int  )25;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&reject_code;
   sqlstm.sqhstl[2] = (unsigned int  )11;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&reject_code_ind;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&reason_desc;
   sqlstm.sqhstl[3] = (unsigned int  )163;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)&reason_desc_ind;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)appl_user_id;
   sqlstm.sqhstl[4] = (unsigned int  )9;
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)0;
   sqlstm.sqinds[4] = (         int  )0;
   sqlstm.sqharm[4] = (unsigned int  )0;
   sqlstm.sqadto[4] = (unsigned short )0;
   sqlstm.sqtdso[4] = (unsigned short )0;
   sqlstm.sqhstv[5] = (         void  *)appl_ws_id;
   sqlstm.sqhstl[5] = (unsigned int  )16;
   sqlstm.sqhsts[5] = (         int  )0;
   sqlstm.sqindv[5] = (         void  *)0;
   sqlstm.sqinds[5] = (         int  )0;
   sqlstm.sqharm[5] = (unsigned int  )0;
   sqlstm.sqadto[5] = (unsigned short )0;
   sqlstm.sqtdso[5] = (unsigned short )0;
   sqlstm.sqhstv[6] = (         void  *)appl_id;
   sqlstm.sqhstl[6] = (unsigned int  )20;
   sqlstm.sqhsts[6] = (         int  )0;
   sqlstm.sqindv[6] = (         void  *)0;
   sqlstm.sqinds[6] = (         int  )0;
   sqlstm.sqharm[6] = (unsigned int  )0;
   sqlstm.sqadto[6] = (unsigned short )0;
   sqlstm.sqtdso[6] = (unsigned short )0;
   sqlstm.sqhstv[7] = (         void  *)&msgid;
   sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
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


				
				if (SQLCODE != 0 && SQLCODE != 1403)
				{
				#ifdef DEBUG
					userlog("upd_card_details : Updateing IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON failed : %s", SQLMSG);
				#endif
					strcpy(prog_log.remarks,"upd_appnt_demo_info : Updateing IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON failed ");
					sprintf(excep_log.error_msg, "upd_appnt_demo_info : Updateing IJPN_LEGACY_REQUEST failed with LEGREJCODE and LEGREJREASON : %s", SQLMSG);
					excep_log.termination_flag = YES;
					excep_log.severity = FATAL;

					log_error(ctx);				
				}

				#ifdef DEBUG
					userlog("upd_card_details : Updated IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON : %s", SQLMSG);
				#endif


			return error_code;

		}
	}	
	/* Legacy function was successfull so update the status in LEGACY_REQUEST */

	strcpy(leg_msgid, leg_msg_id);

	// This code is added on 15/02/2008 to capture the request and response time of demo update to host

	if (request_flag == GMPC_STAT_UPD)
	{

	/* EXEC SQL UPDATE IJPN_LEGACY_UPD_RSP SET LEGRSPDATE = SYSDATE,
		LEGMSGID = :leg_msgid WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update IJPN_LEGACY_UPD_RSP  set LEGRSPDATE=SYSDATE,LEGMSGID=\
:b0 where APPLID=:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3069;
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
			userlog("upd_appnt_demo_info : UPDATE IJPN_LEGACY_UPD_RSP failed : %s", SQLMSG);
	     #endif
		}
	}
	//
	
	if((ret_code = update_legacy_req(req, msgid, leg_msgid, appl_ws_id,ctx)) != SUCCESS)
	{
	#ifdef DEBUG
		userlog("upd_card_details: update_legacy_req() failed with %d", ret_code);
	#endif 

		return ret_code;
	}

	return SUCCESS;
			

}

/*****************************************************************************************/
/* Function Name	: upd_address														 */
/* Description		: This function updates the JPN legacy system with applicant's		 */
/*				      changed address													 */
/* Input			: Request buffer of the service, Oracle message id, Old and new 	 */
/*                    addresses															 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/
int upd_address(JPN_UPDATE_REQ_T *req, int msgid, ADDRESS_T *old_address, ADDRESS_T *new_address,LI_P_HEADER_T hdr,void * ctx) ////LI_P_HEADER_T hdr added by kasi on 11/08/06 to remove global scope.
{
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		char kpt_no[KPT_SIZE] = {0};
		short kpt_no_ind = -1;

		/* added for IJPN */
		char gmpc_sname1[GMPC_SNAME1_SIZE];
		char gmpc_sname2[GMPC_SNAME2_SIZE];
		char gmpc_sname3[GMPC_SNAME3_SIZE];		
		char  collcenter[KPT_COLLECTION_PLACE_SIZE];

		short gmpc_sname1_ind = -1;
		short gmpc_sname2_ind = -1;
		short gmpc_sname3_ind = -1;
		short collcenter_ind = -1;

		char branch_code[7] = {0};
		/* varchar reason_desc[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } reason_desc
 = {0};

		short reason_desc_ind = -1;
		/* varchar reject_code[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } reject_code
 = {0};

		short reject_code_ind = -1;	
		/* end IJPN */

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	LI_UPDATE_JPN_ADDR_REQ_T addrs;
	unsigned char leg_msg_id[MSG_ID_SIZE];
	char reqflag = '\0';
	char leg_msgid[MSG_ID_SIZE] = {0};
	int ret_code = 0;
	int error_code = 0;
	char leg_header_date[DATE_TIME_SIZE] = {"\0"};
	char appl_ws_id[WS_ID_SIZE] = {"\0"};
	char appl_user_id[USER_ID_SIZE] = {"\0"};

	unsigned char pReplyMsg[LI_REPLY_MSG_SIZE];
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE];

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	


	memset(&addrs,'\0',sizeof(LI_UPDATE_JPN_ADDR_REQ_T));

	strcpy(appl_id, req->header.application_id);

	/* commented for IJPN to include the following fields 
	EXEC SQL SELECT KPTNO
		 INTO :kpt_no:kpt_no_ind
		 FROM APPNT_JPN_INFO
		 WHERE APPLID = :appl_id;
	*/

	/* EXEC SQL SELECT KPTNO,GMPCSHORTNAME1, GMPCSHORTNAME2, GMPCSHORTNAME3 
		 INTO :kpt_no:kpt_no_ind,:gmpc_sname1:gmpc_sname1_ind,
			   :gmpc_sname2:gmpc_sname2_ind,:gmpc_sname3:gmpc_sname3_ind
		 FROM APPNT_JPN_INFO
		 WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select KPTNO ,GMPCSHORTNAME1 ,GMPCSHORTNAME2 ,GMPCSHORTNAME3\
 into :b0:b1,:b2:b3,:b4:b5,:b6:b7  from APPNT_JPN_INFO where APPLID=:b8";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3092;
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
 sqlstm.sqhstv[1] = (         void  *)gmpc_sname1;
 sqlstm.sqhstl[1] = (unsigned int  )31;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&gmpc_sname1_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)gmpc_sname2;
 sqlstm.sqhstl[2] = (unsigned int  )31;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&gmpc_sname2_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)gmpc_sname3;
 sqlstm.sqhstl[3] = (unsigned int  )21;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&gmpc_sname3_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)appl_id;
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



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("upd_address : Select from APPNT_JPN_INFO failed : %s", SQLMSG); 
#endif
		strcpy(prog_log.remarks,"upd_address : Select from APPNT_JPN_INFO failed");
		sprintf(excep_log.error_msg,"upd_address : Select from APPNT_JPN_INFO failed  :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);

		return SELECT_ERROR;
	}

#ifdef DEBUG
		userlog("upd_address : KPT no - %s", kpt_no); 
#endif

	if ((kpt_no_ind == 0) && (kpt_no[0] != '\0'))
		strcpy(addrs.appnt_kpt , kpt_no);

	//
	// This code is commented on 13/04/2017 for testing Address and Name ovelapping 
	if((gmpc_sname1_ind == 0) && (gmpc_sname1[0] != '\0'))
		strcpy(addrs.gmpc_short_name1, gmpc_sname1); // for IJPN

	if((gmpc_sname2_ind == 0) && (gmpc_sname2[0] != '\0'))
		strcpy(addrs.gmpc_short_name2, gmpc_sname2);

	if((gmpc_sname3_ind == 0) && (gmpc_sname3[0] != ' '))
		strcpy(addrs.gmpc_short_name3, gmpc_sname3);

	// to be commented when required

	/* added for IJPN on 10th May 2005 */
	/* get the collection center code from APPLICATION table */
	/* EXEC SQL SELECT COLLCENTER
		 INTO :collcenter:collcenter_ind
		 FROM APPLICATION
		 WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select COLLCENTER into :b0:b1  from APPLICATION where APPLID\
=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3127;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)collcenter;
 sqlstm.sqhstl[0] = (unsigned int  )10;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&collcenter_ind;
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
		userlog("upd_address : Select from APPLICATION failed : %s", SQLMSG); 
#endif
		strcpy(prog_log.remarks,"upd_address : Select from APPLICATION failed");
		sprintf(excep_log.error_msg,"upd_address : Select from APPLICATION failed  :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);

		return SELECT_ERROR;
	}

#ifdef DEBUG
		userlog("upd_address : Collection center - %s", collcenter); 
#endif

	//
	// This code is commented on 13/04/2017 for testing Address and Name ovelapping
	if ((collcenter_ind == 0) && ((collcenter[0] != '\0') && (collcenter[0] != ' ')))
		strcpy(addrs.coll_center_code , collcenter);

	// to be commented when required

	/* end IJPN */

	/* Allocate the memory for old and new addresses */
/* commented as per the IJPN requirement on 10th may 2005	
	addrs.old_address = (ADDRESS_T *)malloc((sizeof(ADDRESS_T)));

	if (NULL == addrs.old_address)
	{
#ifdef DEBUG
		userlog("upd_address : Allocation of memory for storing Old address failed");
#endif
		strcpy(prog_log.remarks,"upd_address: Allocation of memory for storing Old address failed");
		strcpy(excep_log.error_msg, "upd_address: Allocation of memory for storing Old address failed");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return MALLOC_ERROR;
	}
*/
	addrs.new_address = (ADDRESS_T *)malloc((sizeof(ADDRESS_T)));

	if (NULL == addrs.new_address)
	{
#ifdef DEBUG
		userlog("upd_address : Allocation of memory for storing New address failed");
#endif
		strcpy(prog_log.remarks,"upd_address: Allocation of memory for storing New address failed");
		strcpy(excep_log.error_msg, "upd_address: Allocation of memory for storing New address failed");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return MALLOC_ERROR;
	}
	/* Copy the old and new addresses into request buffer */

	//memcpy(addrs.old_address, old_address, sizeof(ADDRESS_T));
	memcpy(addrs.new_address, new_address, sizeof(ADDRESS_T));

	/* Get the Application date-time */

	ret_code = get_appl_date(req->header.application_id, leg_header_date, TXN_CHIP_UPD,ctx);

	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("upd_address : get_appl_date() failed with return code - %d", ret_code);
#endif
		//free(addrs.old_address); /* Added on 23/04/2002 by shiva.p */
		free(addrs.new_address); /* Added on 23/04/2002 by shiva.p */
		return ret_code;
	}

	/* Get Application WS id and User id */
	appl_user_id[0] = '\0';
	ret_code = get_appl_machine(req->header.application_id, appl_ws_id,
							appl_user_id, TXN_CHIP_UPD,ctx);

	if (ret_code != SUCCESS )
	{
#ifdef DEBUG
		userlog("upd_address : get_appl_machine() failed with %d", ret_code);
#endif
		//free(addrs.old_address); /* Added on 23/04/2002 by shiva.p */
		free(addrs.new_address); /* Added on 23/04/2002 by shiva.p */
		return ret_code;
	}

#ifdef DEBUG
	userlog("upd_address : Legacy header date - %s", leg_header_date);
	userlog("upd_address : Legacy WS Id - %s", appl_ws_id);
#endif

	/* Populate the date-time in the header */

	strncpy(hdr.trans_date, leg_header_date, 8);
	hdr.trans_date[DATE_SIZE - 1] = '\0';

	strncpy(hdr.trans_time, leg_header_date + 9, 6);
	hdr.trans_time[TIME_SIZE - 1] = '\0';

	//strcpy(hdr.user_id, appl_user_id); commented for IJPN on 26/10/05
	if(appl_user_id[0] == '\0')
	{
		strcpy(hdr.user_id, req->header.user_id);
		strcpy(appl_user_id,req->header.user_id);
	}

	strcpy(hdr.workstation_id, appl_ws_id);

#ifdef DEBUG
/* commented for IJPN 
	userlog("OLD ADDRESS : ");
	userlog("upd_address : Address1 -%s", addrs.old_address->address1);
	userlog("upd_address : Address2 -%s", addrs.old_address->address2);
	userlog("upd_address : Address3 -%s", addrs.old_address->address3);
	userlog("upd_address : Post code -%s", addrs.old_address->post_code);
	userlog("upd_address : City code -%d", addrs.old_address->city_code);
	userlog("upd_address : State code -%s", addrs.old_address->state_code);
*/
	userlog("NEW ADDRESS : ");
	userlog("upd_address : Address1 -%s", addrs.new_address->address1);
	userlog("upd_address : Address2 -%s", addrs.new_address->address2);
	userlog("upd_address : Address3 -%s", addrs.new_address->address3);
	userlog("upd_address : Post code -%s", addrs.new_address->post_code);
	userlog("upd_address : City code -%d", addrs.new_address->city_code);
	userlog("upd_address : State code -%s", addrs.new_address->state_code);
#endif
	
	/* Call interface function to open connection with MQSeries  */
/* commente for IJPN
	ret_code = li_init(LI_ENQUIRE_1N_CHECK);

	if (ret_code != GMPC_GOOD)
	{
#ifdef DEBUG
		userlog("upd_address : li_init failed");
#endif
		strcpy(prog_log.remarks,"upd_address : Unable to connect to MQSeries interface");
		strcpy(excep_log.error_msg, "upd_address : Unable to connect to MQSeries interface");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;
		
		//free(addrs.old_address); /* Added on 23/04/2002 by shiva.p 
		free(addrs.new_address); /* Added on 23/04/2002 by shiva.p 
		log_error(ctx);
						
		return ret_code;
	}

#ifdef DEBUG
	userlog("upd_address : li init successfull");  
#endif
*/
	ret_code = li_update_jpn_addr_p(hdr, addrs, leg_msg_id, &error_code,pReplyMsg,&iReplyMsgLen,sErrMessage);

	userlog("upd_address (li_update_jpn_addr_p) : ret_code : %d",ret_code);

	if (ret_code  != GMPC_GOOD)
	{
	//	li_end();

#ifdef DEBUG
		userlog("upd_address : Unable to put the Address update request : %d", error_code);
#endif
		strcpy(prog_log.remarks,"upd_address : Unable to put the Address update request");
		sprintf(excep_log.error_msg, "upd_address : Unable to put the Address update request : Error code - %d", error_code);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);


		if(leg_msg_id != NULL && strlen(leg_msg_id) > 20)
			strcpy(leg_msgid, leg_msg_id);

	
		if(sErrMessage[0] != '\0')
		{
			strncpy(reject_code.arr,sErrMessage,8);
			setlen(reject_code);

			strcpy(reason_desc.arr,sErrMessage);
			setlen(reason_desc);
		}

		userlog("reject_code : %s",reject_code.arr);
		if(reject_code.arr[0] != '\0')
			reject_code_ind = 0;		

		userlog("reason_desc : %s",reason_desc.arr);
		if(reason_desc.arr[0] != '\0')
			reason_desc_ind = 0;
		
		strcpy(branch_code, req->header.branch_code);
	
		/* update with LEGREQSTAT = -2, rejectcode and reason desc value when li_put failed*/
		/* EXEC SQL UPDATE IJPN_LEGACY_REQUEST 
		SET BRANCHCODE     = :branch_code,
			LEGMSGID       = :leg_msgid,
			LEGREJCODE     = :reject_code:reject_code_ind,
			LEGREJREASON   = :reason_desc:reason_desc_ind,
			LEGREQDATETIME =  SYSDATE,
			LEGREQSTAT     = -2,			
			USERID         = :appl_user_id,			
			TXNWSID        = :appl_ws_id
		WHERE APPLID       = :appl_id 
		AND LEGREQMSGID    = :msgid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update IJPN_LEGACY_REQUEST  set BRANCHCODE=:b0,LEGMSGID=:b1\
,LEGREJCODE=:b2:b3,LEGREJREASON=:b4:b5,LEGREQDATETIME=SYSDATE,LEGREQSTAT=(-2),\
USERID=:b6,TXNWSID=:b7 where (APPLID=:b8 and LEGREQMSGID=:b9)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3150;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)branch_code;
  sqlstm.sqhstl[0] = (unsigned int  )7;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)leg_msgid;
  sqlstm.sqhstl[1] = (unsigned int  )25;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&reject_code;
  sqlstm.sqhstl[2] = (unsigned int  )11;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&reject_code_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&reason_desc;
  sqlstm.sqhstl[3] = (unsigned int  )163;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&reason_desc_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)appl_user_id;
  sqlstm.sqhstl[4] = (unsigned int  )9;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)appl_ws_id;
  sqlstm.sqhstl[5] = (unsigned int  )16;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)appl_id;
  sqlstm.sqhstl[6] = (unsigned int  )20;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&msgid;
  sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
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


			
			if (SQLCODE != 0 && SQLCODE != 1403)
			{
			#ifdef DEBUG
				userlog("upd_card_details : Updateing IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON failed : %s", SQLMSG);
			#endif
				strcpy(prog_log.remarks,"upd_appnt_demo_info : Updateing IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON failed ");
				sprintf(excep_log.error_msg, "upd_appnt_demo_info : Updateing IJPN_LEGACY_REQUEST failed with LEGREJCODE and LEGREJREASON : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);				
			}

			#ifdef DEBUG
				userlog("upd_card_details : Updated IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON : %s", SQLMSG);
			#endif


	//	free(addrs.old_address); /* Added on 23/04/2002 by shiva.p */
		free(addrs.new_address); /* Added on 23/04/2002 by shiva.p */
		return error_code;

	}
		
	//li_end();

#ifdef DEBUG
	userlog("upd_address : Legecy mesg id - %s", leg_msg_id);
#endif 

	/* Legacy function was successfull so update the status in LEGACY_REQUEST */

	strcpy(leg_msgid, leg_msg_id);
	
	if((ret_code = update_legacy_req(req, msgid, leg_msgid, appl_ws_id,ctx)) != SUCCESS)
	{
#ifdef DEBUG
		userlog("upd_address: update_legacy_req() failed with %d", ret_code);
#endif 
		
		//free(addrs.old_address); /* Added on 03/06/2005 by Ravi*/
		free(addrs.new_address); /* Added on 03/06/2005 by Ravi*/

		return ret_code;
	}

	//free(addrs.old_address); /* Added on 23/04/2002 by shiva.p */
	free(addrs.new_address); /* Added on 23/04/2002 by shiva.p */
	return SUCCESS;
}

/*****************************************************************************************/
/* Function Name	: upd_payment														 */
/* Description		: This function updates the JPN legacy system with Applicant's       */
/*				      payment info														 */
/* Input			: Application id, Transaction serial no, Legayc request status		 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/
int upd_payment(JPN_UPDATE_REQ_T *req, int msgid, int transaction_srno, int request_status, int txn_type,LI_P_HEADER_T hdr,void * ctx) ///LI_P_HEADER_T hdr added by kasi on 11/08/06 to remove global scope.
{
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		char kpt_no[KPT_SIZE] = {0};
		short kpt_no_ind = -1;
		int txn_srno = 0;
		char leg_date[DATE_TIME_SIZE] = {0};
		short leg_date_ind = -1;
		char id_type[ID_TYPE_SIZE] = {0};
		short id_type_ind = -1;
		/* varchar id_no[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } id_no
 = {0};

		short id_no_ind = -1;
		int msg_id=0;
		char  legapplid[25] = {0};
		short legapplid_ind = -1;

		char branch_code[7] = {0};
		/* varchar reason_desc[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } reason_desc
 = {0};

		short reason_desc_ind = -1;
		/* varchar reject_code[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } reject_code
 = {0};

		short reject_code_ind = -1;	

		char  chqno[7] = {0};
		short chqno_ind = -1;

		char  pcdate[DATE_SIZE] = {0};
		short pcdate_ind = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	LI_JPN_UPDATE_PAYMENT_REQ_T payment_req;
	LI_PUT_FIN_DATA_T put_fin_data;

	unsigned char pReplyMsg[LI_REPLY_MSG_SIZE]={0};
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE]={0};

	#ifdef DEBUG
	FIN_DATA_T *jpn_fin_temp = NULL;
	#endif

	unsigned char leg_msg_id[MSG_ID_SIZE] = {0};
	char reqflag = '\0';
	char leg_msgid[MSG_ID_SIZE] = {0};
	int error_code = 0;
	int ret_code = 0;
	int count = 0;
	char appl_ws_id[WS_ID_SIZE] = {"\0"};
	char appl_user_id[USER_ID_SIZE] = {"\0"};
	int identity_type = 0;
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	
	memset(&put_fin_data, 0, sizeof(LI_PUT_FIN_DATA_T));
	memset(&payment_req, 0, sizeof(LI_JPN_UPDATE_PAYMENT_REQ_T));

	strcpy(appl_id, req->header.application_id);
//	strcpy(payment_req.appl_id, req->header.application_id); commented for IJPN on 22/08/2005
	msg_id=msgid;

	/* EXEC SQL SELECT KPTNO, IDTYPE, IDNO, LEGAPPLID
			INTO :kpt_no:kpt_no_ind, :id_type:id_type_ind, 
				  :id_no:id_no_ind,:legapplid:legapplid_ind
		 FROM APPLICATION
		 WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select KPTNO ,IDTYPE ,IDNO ,LEGAPPLID into :b0:b1,:b2:b3,:b4\
:b5,:b6:b7  from APPLICATION where APPLID=:b8";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3197;
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
 sqlstm.sqhstv[1] = (         void  *)id_type;
 sqlstm.sqhstl[1] = (unsigned int  )3;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&id_type_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&id_no;
 sqlstm.sqhstl[2] = (unsigned int  )18;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&id_no_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)legapplid;
 sqlstm.sqhstl[3] = (unsigned int  )25;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&legapplid_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)appl_id;
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



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("upd_payment : Select from APPNT_JPN_INFO failed : %s", SQLMSG); 
#endif
		strcpy(prog_log.remarks,"upd_payment : Select from APPNT_JPN_INFO failed");
		sprintf(excep_log.error_msg,"upd_payment : Select from APPNT_JPN_INFO failed :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);

		return SELECT_ERROR;
	}

	if (kpt_no_ind == 0)
	{
		strcpy(payment_req.kpt_number , kpt_no);
	}
	else if (id_type_ind == 0)
	{
	
		setnull(id_no);

		identity_type = atoi(id_type);

#ifdef DEBUG
		userlog("upd_payment : Id type - %d", identity_type); 
#endif
		
		if (identity_type == ID_TYPE_KPT 
			|| identity_type == ID_TYPE_GMPC
			|| identity_type == ID_TYPE_TEMP)
		{
			strcpy(payment_req.kpt_number , id_no.arr);
		}
	
	}

	if(legapplid_ind == 0)
		strcpy(payment_req.appl_id, legapplid);


	#ifdef DEBUG
		userlog("upd_payment : KPT no - %s", kpt_no);
		userlog("upd_payment : legapplid - %s", legapplid);
	#endif

	/* get the check no from CHEQUE_PAYMENT */

		/* EXEC SQL SELECT CHQNO INTO :chqno:chqno_ind FROM CHEQUE_PAYMENT
			WHERE APPLID = :appl_id
			AND PAYMSERNO = 
			(SELECT MAX(PAYMSERNO) FROM CHEQUE_PAYMENT WHERE APPLID = :appl_id); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select CHQNO into :b0:b1  from CHEQUE_PAYMENT where (APPLID\
=:b2 and PAYMSERNO=(select max(PAYMSERNO)  from CHEQUE_PAYMENT where APPLID=:b\
2))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3232;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)chqno;
  sqlstm.sqhstl[0] = (unsigned int  )7;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&chqno_ind;
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


		    // OR TO SELECT CHQDATE???
		
		if(chqno_ind == 0)
			strcpy(payment_req.cheque_no , chqno);



	/* get the receiptdatetime from payment_info as payment collection date */

		/* EXEC SQL SELECT TO_CHAR(RECEIPTDATETIME,'DDMMYYYY') INTO :pcdate:pcdate_ind
			FROM PAYMENT_INFO 
			WHERE APPLID = :appl_id
			AND PAYMSERNO = 
			(SELECT MAX(PAYMSERNO) FROM PAYMENT_INFO WHERE APPLID = :appl_id); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select TO_CHAR(RECEIPTDATETIME,'DDMMYYYY') into :b0:b1  fro\
m PAYMENT_INFO where (APPLID=:b2 and PAYMSERNO=(select max(PAYMSERNO)  from PA\
YMENT_INFO where APPLID=:b2))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3259;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)pcdate;
  sqlstm.sqhstl[0] = (unsigned int  )9;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&pcdate_ind;
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




		if(pcdate_ind == 0)
			strcpy(payment_req.pay_collection_date , pcdate);

	/* Get financial data for the applicant */

	if(SUCCESS != (ret_code = get_financial_data(req->header.application_id, transaction_srno, &put_fin_data, request_status,ctx)))
	{
	#ifdef DEBUG
		userlog("upd_payment : get_financial_data() failed with %d", ret_code);
	#endif
		if(put_fin_data.fin_data != NULL) /* Added on 03/06/2005 by Ravi*/
			free(put_fin_data.fin_data); /* Added on 03/06/2005 by Ravi*/
		return ret_code;
	}

	if (put_fin_data.counter == 0)
	{
	#ifdef DEBUG
		userlog("upd_payment : No payment data to be sent is available");
	#endif

		// Delete the request inserted into LEGACY_REQUEST 

		/* EXEC SQL DELETE FROM IJPN_LEGACY_REQUEST
			WHERE LEGREQMSGID = :msg_id ; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "delete  from IJPN_LEGACY_REQUEST  where LEGREQMSGID=:b0";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3286;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&msg_id;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
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
			userlog("upd_payment : Deletion from LEGACY_REQUEST failed : %s", SQLMSG); 
	#endif
			strcpy(prog_log.remarks,"upd_payment : Deletion from LEGACY_REQUEST failed");
			sprintf(excep_log.error_msg,"upd_payment : Deletion from LEGACY_REQUEST failed :%s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);

			return DELETE_ERROR;
		}

		return GMPC_WARN;

	}

#ifdef DEBUG
	userlog("upd_payment : Got financial data");
	userlog("upd_payment : Pay count - %d",put_fin_data.counter);
	userlog("upd_payment : Length of data - %ld",put_fin_data.len);

	if (NULL != put_fin_data.fin_data)
	{
		jpn_fin_temp = put_fin_data.fin_data;

		for (count = 0; count < put_fin_data.counter; count++, jpn_fin_temp++)
		{
			userlog("upd_payment : Pay mode - %c", jpn_fin_temp->pay_mode);
			userlog("upd_payment : Revenue code - %s", jpn_fin_temp->revenue_code);
			userlog("upd_payment : Amt type - %c", jpn_fin_temp->amt_type);
			userlog("upd_payment : Amt value - %s", jpn_fin_temp->amt_value);
		}
	}
#endif
		txn_srno = transaction_srno;

		/* EXEC SQL SELECT TO_CHAR(RECEIPTDATETIME, 'DDMMYYYY HH24MISS')
							 INTO :leg_date:leg_date_ind
						FROM PAYMENT_INFO A, APPL_TXN B, TXN_CODE C
						WHERE A.APPLID = :appl_id
						AND A.PAYMSERNO = B.PAYMSERNO
						AND B.APPLID = A.APPLID
						AND C.TXNCODE = B.TXNCODE
						AND C.TXNTYPE = (SELECT D.TXNTYPE FROM TXN_CODE D,
											APPL_TXN E
											WHERE E.APPLID = :appl_id
											AND E.TXNSERNO = :txn_srno
											AND D.TXNCODE = E.TXNCODE)
					
						AND ROWNUM = 1; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select TO_CHAR(RECEIPTDATETIME,'DDMMYYYY HH24MISS') into :b\
0:b1  from PAYMENT_INFO A ,APPL_TXN B ,TXN_CODE C where (((((A.APPLID=:b2 and \
A.PAYMSERNO=B.PAYMSERNO) and B.APPLID=A.APPLID) and C.TXNCODE=B.TXNCODE) and C\
.TXNTYPE=(select D.TXNTYPE  from TXN_CODE D ,APPL_TXN E where ((E.APPLID=:b2 a\
nd E.TXNSERNO=:b4) and D.TXNCODE=E.TXNCODE))) and ROWNUM=1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3305;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)leg_date;
  sqlstm.sqhstl[0] = (unsigned int  )16;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&leg_date_ind;
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
  sqlstm.sqhstv[2] = (         void  *)appl_id;
  sqlstm.sqhstl[2] = (unsigned int  )20;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&txn_srno;
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



			

		if (SQLCODE != 0)
		{
	#ifdef DEBUG
			userlog("upd_payment : Selection from PAYMENT_INFO failed : %s", SQLMSG);
	#endif
			strcpy(prog_log.remarks,"upd_payment : Selection from PAYMENT_INFO failed");
			sprintf(excep_log.error_msg, "upd_payment : Selection from PAYMENT_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);

			if (NULL != put_fin_data.fin_data)
				free(put_fin_data.fin_data);

			return SELECT_ERROR;

		}

		// get the sysdate into leg_date if the RECEIPTDATETIME is null
		if(leg_date_ind == -1)
		{
		 /* EXEC SQL SELECT TO_CHAR(SYSDATE, 'DDMMYYYY HH24MISS')
							 INTO :leg_date:leg_date_ind
								   FROM DUAL; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 47;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') into :b0:b1  f\
rom DUAL ";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3336;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)leg_date;
   sqlstm.sqhstl[0] = (unsigned int  )16;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&leg_date_ind;
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


	/* Get Application WS id and User id */
	appl_user_id[0] = '\0';
	ret_code = get_appl_machine(req->header.application_id, appl_ws_id,
							appl_user_id, txn_type,ctx);

	if (ret_code != SUCCESS )
	{
#ifdef DEBUG
		userlog("upd_payment : get_appl_machine() failed with %d", ret_code);
#endif

		return ret_code;
	}

#ifdef DEBUG
	userlog("upd_payment : Legacy header date - %s", leg_date);
	userlog("upd_payment : Legacy WS Id - %s", appl_ws_id);
#endif

/* commenetd for IJPN as we are not using this anymore 
/* Call interface function to open connection with MQSeries 

	ret_code = li_init(LI_ENQUIRE_1N_CHECK);

	if (ret_code != GMPC_GOOD)
	{
#ifdef DEBUG
		userlog("upd_payment : li_init failed");
#endif
		strcpy(prog_log.remarks,"upd_payment : Unable to connect to MQSeries interface");
		strcpy(excep_log.error_msg, "upd_payment : Unable to connect to MQSeries interface");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
						
		if (NULL != put_fin_data.fin_data)
			free(put_fin_data.fin_data);

		return ret_code;
	}

#ifdef DEBUG
	userlog("upd_payment : li init successfull");  
#endif
*/

	/* Populate the Legacy header */

	strncpy(hdr.trans_date, leg_date, 8);
	hdr.trans_date[DATE_SIZE - 1] = '\0';

	strncpy(hdr.trans_time, leg_date + 9, 6);
	hdr.trans_time[TIME_SIZE - 1] = '\0';

	//strcpy(hdr.user_id, appl_user_id); commented for IJPN on 26/10/05
	if(appl_user_id[0] == '\0')
	{
		strcpy(hdr.user_id, req->header.user_id);
		strcpy(appl_user_id,req->header.user_id);
	}

	strcpy(hdr.workstation_id, appl_ws_id);

	/* if ((ret_code = li_jpn_update_payment_p(hdr, put_fin_data, payment_req, leg_msg_id, &error_code)) != GMPC_GOOD) */
	sErrMessage[0] = '\0';
	ret_code = li_jpn_update_payment_p(hdr, put_fin_data, payment_req, leg_msg_id, &error_code, pReplyMsg, &iReplyMsgLen, sErrMessage);

	userlog("upd_payment (li_jpn_update_payment_p) : ret_code : %d",ret_code);

	if(ret_code != GMPC_GOOD)
	{
//		li_end();

#ifdef DEBUG
		userlog("upd_payment : Unable to put the Payment update request : error_code: %d", error_code);
		userlog("upd_payment : Unable to put the Payment update request : sErrMessage: %s", sErrMessage);
#endif
		strcpy(prog_log.remarks,"upd_payment : Unable to put the Payment update request");
		sprintf(excep_log.error_msg, "upd_payment : Unable to put the Payment update request : Error code - %d", error_code);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);


		if(leg_msg_id != NULL && strlen(leg_msg_id) > 20)
			strcpy(leg_msgid, leg_msg_id);

	
		if(sErrMessage[0] != '\0')
		{
			strncpy(reject_code.arr,sErrMessage,8);
			setlen(reject_code);

			strcpy(reason_desc.arr,sErrMessage);
			setlen(reason_desc);
		}

		userlog("reject_code : %s",reject_code.arr);
		if(reject_code.arr[0] != '\0')
			reject_code_ind = 0;		

		userlog("reason_desc : %s",reason_desc.arr);
		if(reason_desc.arr[0] != '\0')
			reason_desc_ind = 0;
		
		strcpy(branch_code, req->header.branch_code);
	
		/* update with LEGREQSTAT = -2, rejectcode and reason desc value when li_put failed*/
		/* EXEC SQL UPDATE IJPN_LEGACY_REQUEST 
		SET BRANCHCODE     = :branch_code,
			LEGMSGID       = :leg_msgid,
			LEGREJCODE     = :reject_code:reject_code_ind,
			LEGREJREASON   = :reason_desc:reason_desc_ind,
			LEGREQDATETIME =  SYSDATE,
			LEGREQSTAT     = -2,			
			USERID         = :appl_user_id,			
			TXNWSID        = :appl_ws_id
		WHERE APPLID       = :appl_id 
		AND LEGREQMSGID    = :msgid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update IJPN_LEGACY_REQUEST  set BRANCHCODE=:b0,LEGMSGID=:b1\
,LEGREJCODE=:b2:b3,LEGREJREASON=:b4:b5,LEGREQDATETIME=SYSDATE,LEGREQSTAT=(-2),\
USERID=:b6,TXNWSID=:b7 where (APPLID=:b8 and LEGREQMSGID=:b9)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3355;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)branch_code;
  sqlstm.sqhstl[0] = (unsigned int  )7;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)leg_msgid;
  sqlstm.sqhstl[1] = (unsigned int  )25;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&reject_code;
  sqlstm.sqhstl[2] = (unsigned int  )11;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&reject_code_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&reason_desc;
  sqlstm.sqhstl[3] = (unsigned int  )163;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&reason_desc_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)appl_user_id;
  sqlstm.sqhstl[4] = (unsigned int  )9;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)appl_ws_id;
  sqlstm.sqhstl[5] = (unsigned int  )16;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)appl_id;
  sqlstm.sqhstl[6] = (unsigned int  )20;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&msgid;
  sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
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


			
			if (SQLCODE != 0 && SQLCODE != 1403)
			{
			#ifdef DEBUG
				userlog("upd_card_details : Updateing IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON failed : %s", SQLMSG);
			#endif
				strcpy(prog_log.remarks,"upd_appnt_demo_info : Updateing IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON failed ");
				sprintf(excep_log.error_msg, "upd_appnt_demo_info : Updateing IJPN_LEGACY_REQUEST failed with LEGREJCODE and LEGREJREASON : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);				
			}

			#ifdef DEBUG
				userlog("upd_card_details : Updated IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON : %s", SQLMSG);
			#endif


		if (NULL != put_fin_data.fin_data)
			free(put_fin_data.fin_data);

		return error_code;

	}
		
//	li_end();

#ifdef DEBUG
	userlog("upd_payment : Legecy mesg id - %s", leg_msg_id);
#endif 


	/* Legacy function was successfull so update the status in LEGACY_REQUEST */

	strcpy(leg_msgid, leg_msg_id);

#ifdef DEBUG
	userlog("upd_payment : Legecy mesg id - %s", leg_msgid);
#endif

	if((ret_code = update_legacy_req(req, msgid, leg_msgid, appl_ws_id,ctx)) != SUCCESS)
	{
#ifdef DEBUG
		userlog("upd_payment: update_legacy_req() failed with %d", ret_code);
#endif 
		if (NULL != put_fin_data.fin_data)
			free(put_fin_data.fin_data);

		return ret_code;
	}

	if (NULL != put_fin_data.fin_data)
			free(put_fin_data.fin_data);

	return SUCCESS;

}

/*****************************************************************************************/
/* Function Name	: upd_leg_upd_flag													 */
/* Description		: This function updates the Legacy update flag for the given appl id */
/*				      and transaction ser no to YES if legacy update request has been    */
/*                    sent to JPN successfully                                           */
/* Input			: Application id, Txn ser no									 	 */
/*                    addresses															 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/

int upd_leg_upd_flag(char *application_id, int transaction_srno,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		int txn_srno = 0;
		
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(appl_id, application_id);
	txn_srno = transaction_srno;

#ifdef DEBUG
	userlog("upd_leg_upd_flag : Appl id - %s", appl_id);
	userlog("upd_leg_upd_flag : Txn srno - %d", txn_srno);
#endif

	/* EXEC SQL UPDATE APPL_TXN
		SET LEGUPDFLAG = 'Y'
		WHERE APPLID = :appl_id
		AND TXNSERNO = :txn_srno; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update APPL_TXN  set LEGUPDFLAG='Y' where (APPLID=:b0 and TX\
NSERNO=:b1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3402;
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
 sqlstm.sqhstv[1] = (         void  *)&txn_srno;
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



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("upd_leg_upd_flag : Upadating Legacy update flag in APPL_TXN failed : %s", SQLMSG); 
#endif
		strcpy(prog_log.remarks,"upd_leg_upd_flag : Upadating Legacy update flag in APPL_TXN failed");
		sprintf(excep_log.error_msg,"upd_leg_upd_flag : Upadating Legacy update flag in APPL_TXN failed  :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return UPDATE_ERROR;
	}

#ifdef DEBUG
		userlog("upd_leg_upd_flag : Legacy update flag in APPL_TXN updated successfully"); 
#endif

		return SUCCESS;
}

/*****************************************************************************************/
/* Function Name	: upd_common_leg_upd_flag											 */
/* Description		: This function updates the Legacy update flag for the given appl id */
/*				      and transaction ser no to intermidiate status 'X' if legacy update */
/*                    request has been sent to JPN successfully and the flag value is NO */
/*                    If the flag value is 'X' which indicates the request had been      */
/*                    picked up by JPJ_UPDATE service, then it is updaed to YES			 */
/* Input			: Application id, Txn ser no									 	 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/

int upd_common_leg_upd_flag(char *application_id, int transaction_srno,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		int txn_srno = 0;
		
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(appl_id, application_id);
	txn_srno = transaction_srno;

#ifdef DEBUG
	userlog("upd_common_leg_upd_flag : Appl id - %s", appl_id);
	userlog("upd_common_leg_upd_flag : Txn srno - %d", txn_srno);
#endif

	/* EXEC SQL UPDATE APPL_TXN
		SET LEGUPDFLAG = DECODE( LEGUPDFLAG, 'N', 'X', 'X', 'Y')
		WHERE APPLID = :appl_id
		AND TXNSERNO = :txn_srno; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update APPL_TXN  set LEGUPDFLAG=DECODE(LEGUPDFLAG,'N','X','X\
','Y') where (APPLID=:b0 and TXNSERNO=:b1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3425;
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
 sqlstm.sqhstv[1] = (         void  *)&txn_srno;
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



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("upd_common_leg_upd_flag : Upadating Legacy update flag in APPL_TXN failed : %s", SQLMSG); 
#endif
		strcpy(prog_log.remarks,"upd_common_leg_upd_flag : Upadating Legacy update flag in APPL_TXN failed");
		sprintf(excep_log.error_msg,"upd_common_leg_upd_flag : Upadating Legacy update flag in APPL_TXN failed  :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return UPDATE_ERROR;
	}

#ifdef DEBUG
		userlog("upd_common_leg_upd_flag : Legacy update flag in APPL_TXN updated successfully"); 
#endif

		return SUCCESS;
}

/*****************************************************************************************/
/* Function Name	: get_financial_data												 */
/* Description		: This function retrieves applicant's payment info to be updated to  */
/*				      JPN legacy system                                                  */
/* Input			: Application id, Transaction serial no, Pointer to structure in     */
/*                    payment info is populated											 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/
int get_financial_data(char *application_id, int transaction_srno, LI_PUT_FIN_DATA_T *jpn_fin_data, int request_status,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


		char appl_id[APP_ID_SIZE] = {0};
		int txn_srno = 0;
//		int max_fee_txn_srno = 0;
//		short max_fee_txn_srno_ind  = -1;
		char paymode[PAY_MODE_SIZE] = {0};
		short paymode_ind= -1;
		unsigned char pay_mode = 0;
		unsigned char amt_type = 0;
		char revenue_code[AGENCY_SIZE]= {0};
		short revenue_code_ind = -1;
		char amt_value[AMT_SIZE]= {0};
		short amt_value_ind = -1;
		int pay_cnt = 0;
		int txn_type = 0;
		short txn_type_ind = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


		int count= 0;
	unsigned char unsignedpaymode='\0';
	FIN_DATA_T *fin_data = NULL;	

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	
#ifdef DEBUG
		userlog("get_financial_data : In get_financial_data");
#endif		
	strcpy(appl_id, application_id);
	txn_srno = transaction_srno;

#ifdef DEBUG
	userlog("get_financial_data : Appl id - %s", appl_id);
	userlog("get_financial_data : Transaction srno - %d", txn_srno);
	userlog("get_financial_data : Legacy request status - %d", request_status);
#endif

	/* EXEC SQL SELECT A.TXNTYPE INTO :txn_type:txn_type_ind 
		FROM TXN_CODE A,APPL_TXN B 
		WHERE B.APPLID = :appl_id
		AND B.TXNSERNO = :txn_srno
		AND A.TXNCODE = B.TXNCODE; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select A.TXNTYPE into :b0:b1  from TXN_CODE A ,APPL_TXN B wh\
ere ((B.APPLID=:b2 and B.TXNSERNO=:b3) and A.TXNCODE=B.TXNCODE)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3448;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&txn_type;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&txn_type_ind;
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
 sqlstm.sqhstv[2] = (         void  *)&txn_srno;
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



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog(" get_financial_data : Selecting Transaction type from TXN_CODE failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_financial_data: Selecting Transaction type from TXN_CODE failed");
		sprintf(excep_log.error_msg, "get_financial_data: Selecting Transaction type from TXN_CODE failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);

		return SELECT_ERROR;
	}

	if (0 != txn_type_ind)
		return INVALID_TXN_TYPE;

#ifdef DEBUG
	userlog(" get_financial_data : Transaction type - %d", txn_type);
#endif

/*	if (TXN_12YO == txn_type || TXN_FT == txn_type
		|| TXN_CONV == txn_type || TXN_REPL == txn_type)
	{
*/		/* Get the Txn srno for maximum fee */

/*		EXEC SQL SELECT A.TXNSERNO INTO :max_fee_txn_srno:max_fee_txn_srno_ind
				FROM APPL_TXN_FEE A, APPL_TXN B, TXN_CODE C
		   WHERE A.APPLID = :appl_id
		   AND B.APPLID = :appl_id
		   AND A.TXNSERNO = B.TXNSERNO
		   AND B.TXNCODE = C.TXNCODE
		   AND C.TXNTYPE = :txn_type:txn_type_ind
		   AND A.FEEAMT > 0
		   AND ROWNUM = 1;

		if (NO_DATA_FOUND)
		{
#ifdef DEBUG
			userlog(" get_financial_data : No payment data available");
#endif
			jpn_fin_data->counter = 0;
			jpn_fin_data->len = 0;
			jpn_fin_data->fin_data = NULL;

			return SUCCESS;
		}
		else if (SQLCODE != 0)
		{
#ifdef DEBUG
			userlog(" get_financial_data : Selecting Transaction serial no for maximum fee failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"get_financial_data: Selecting Transaction serial no for maximum fee failed");
			sprintf(excep_log.error_msg, "get_financial_data: Selecting Transaction serial no for maximum fee failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);

			return SELECT_ERROR;
		}

	}
	else
	{
		max_fee_txn_srno = txn_srno;
		max_fee_txn_srno_ind  = 0;
	}

#ifdef DEBUG
	userlog(" get_financial_data : Maximum Transaction serial no - %d", max_fee_txn_srno);
#endif
*/
	/* Get the number of payment records for the given Appl id */

	if (request_status == REPLY_NOT_RECIEVED)
	{
		/* Do not check for Payment update flag here */

		/* EXEC SQL SELECT COUNT(*) INTO :pay_cnt
			FROM APPL_TXN_FEE A, PAYMENT_INFO B, APPL_TXN C, TXN_CODE D
					WHERE C.APPLID = :appl_id
					AND A.TXNSERNO = C.TXNSERNO
					AND B.APPLID = C.APPLID
					AND B.PAYMSERNO = C.PAYMSERNO
					AND A.APPLID = C.APPLID
					AND D.TXNCODE = C.TXNCODE
					AND D.TXNTYPE = :txn_type; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN_FEE A ,PAYMENT_INF\
O B ,APPL_TXN C ,TXN_CODE D where ((((((C.APPLID=:b1 and A.TXNSERNO=C.TXNSERNO\
) and B.APPLID=C.APPLID) and B.PAYMSERNO=C.PAYMSERNO) and A.APPLID=C.APPLID) a\
nd D.TXNCODE=C.TXNCODE) and D.TXNTYPE=:b2)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3475;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&pay_cnt;
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
  sqlstm.sqhstv[2] = (         void  *)&txn_type;
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


	}
	else
	{
		/* Check for Payment update flag here */

		/* EXEC SQL SELECT COUNT(*) INTO :pay_cnt
			FROM APPL_TXN_FEE A, PAYMENT_INFO B, APPL_TXN C, TXN_CODE D
					WHERE C.APPLID = :appl_id
					AND A.TXNSERNO = C.TXNSERNO
					AND B.APPLID = C.APPLID
					AND B.PAYMSERNO = C.PAYMSERNO
					AND NVL(B.LEGUPDFLAG, 'N') = 'N'
					AND A.APPLID = C.APPLID
					AND D.TXNCODE = C.TXNCODE
					AND D.TXNTYPE = :txn_type; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN_FEE A ,PAYMENT_INF\
O B ,APPL_TXN C ,TXN_CODE D where (((((((C.APPLID=:b1 and A.TXNSERNO=C.TXNSERN\
O) and B.APPLID=C.APPLID) and B.PAYMSERNO=C.PAYMSERNO) and NVL(B.LEGUPDFLAG,'N\
')='N') and A.APPLID=C.APPLID) and D.TXNCODE=C.TXNCODE) and D.TXNTYPE=:b2)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3502;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&pay_cnt;
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
  sqlstm.sqhstv[2] = (         void  *)&txn_type;
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


	}

	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog(" get_financial_data : Select from APPL_TXN_FEE failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_financial_data: Select from APPL_TXN_FEE failed");
		sprintf(excep_log.error_msg, "get_financial_data : Select from APPL_TXN_FEE failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);

		return SELECT_ERROR;
	}

#ifdef DEBUG
		userlog(" get_financial_data : Payment count - %d", pay_cnt);
#endif

	if (pay_cnt == 0)
	{
		jpn_fin_data->counter = 0;
		jpn_fin_data->len = 0;
		jpn_fin_data->fin_data = NULL;
		
	}
	else	/* Pay count > 0 */
	{
		jpn_fin_data->counter = pay_cnt;
		jpn_fin_data->len = (jpn_fin_data->counter)*(sizeof(FIN_DATA_T));
		
		/* Get Financial Data for the application id from payment_info table */

		if (request_status == REPLY_NOT_RECIEVED)
		{
			/* Do not check for Payment update flag here */

			/* EXEC SQL DECLARE  pay_info CURSOR FOR
				SELECT TO_CHAR(A.FEEAMT*100),TO_CHAR(A.AGENCYREVNCODE),
					   B.PAYMMODE
					FROM APPL_TXN_FEE A, PAYMENT_INFO B, APPL_TXN C, TXN_CODE D
					WHERE C.APPLID = :appl_id
					AND A.TXNSERNO = C.TXNSERNO
					AND B.APPLID = C.APPLID
					AND B.PAYMSERNO = C.PAYMSERNO
					AND A.APPLID = C.APPLID
					AND D.TXNCODE = C.TXNCODE
					AND D.TXNTYPE = :txn_type; */ 


			/* EXEC SQL OPEN pay_info; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 47;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = sq0108;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3529;
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
   sqlstm.sqhstv[1] = (         void  *)&txn_type;
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


		}
		else
		{
			/* Check for Payment update flag here */

			/* EXEC SQL DECLARE  pay_information CURSOR FOR
				SELECT TO_CHAR(A.FEEAMT*100),TO_CHAR(A.AGENCYREVNCODE),
					   B.PAYMMODE
					FROM APPL_TXN_FEE A, PAYMENT_INFO B, APPL_TXN C, TXN_CODE D
					WHERE C.APPLID = :appl_id
					AND A.TXNSERNO = C.TXNSERNO
					AND B.APPLID = C.APPLID
					AND B.PAYMSERNO = C.PAYMSERNO
					AND NVL(B.LEGUPDFLAG, 'N') = 'N'
					AND A.APPLID = C.APPLID
					AND D.TXNCODE = C.TXNCODE
					AND D.TXNTYPE = :txn_type; */ 


			/* EXEC SQL OPEN pay_information; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 47;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = sq0109;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3552;
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
   sqlstm.sqhstv[1] = (         void  *)&txn_type;
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


		}

		if (SQLCODE != 0)
		{
#ifdef DEBUG
			userlog(" get_financial_data : Unable to open cursor for fetching payment details : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"get_financial_data: Unable to open cursor for fetching payment details");
			sprintf(excep_log.error_msg, "get_financial_data: Unable to open cursor for fetching payment details : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return CURSOR_OPEN_ERROR;
		}

#ifdef DEBUG
			userlog(" get_financial_data : Open cursor successfull");
#endif

		for(count = 0;; count++ )
		{
			if (request_status == REPLY_NOT_RECIEVED)
			{
				/* EXEC SQL FETCH pay_info
					INTO :amt_value:amt_value_ind, :revenue_code:revenue_code_ind, 
						 :paymode:paymode_ind; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 47;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3575;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqfoff = (           int )0;
    sqlstm.sqfmod = (unsigned int )2;
    sqlstm.sqhstv[0] = (         void  *)amt_value;
    sqlstm.sqhstl[0] = (unsigned int  )8;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)&amt_value_ind;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)revenue_code;
    sqlstm.sqhstl[1] = (unsigned int  )8;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)&revenue_code_ind;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)paymode;
    sqlstm.sqhstl[2] = (unsigned int  )3;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)&paymode_ind;
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


			}
			else
			{
				/* EXEC SQL FETCH pay_information
					INTO :amt_value:amt_value_ind, :revenue_code:revenue_code_ind, 
						 :paymode:paymode_ind; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 47;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3602;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqfoff = (           int )0;
    sqlstm.sqfmod = (unsigned int )2;
    sqlstm.sqhstv[0] = (         void  *)amt_value;
    sqlstm.sqhstl[0] = (unsigned int  )8;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)&amt_value_ind;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)revenue_code;
    sqlstm.sqhstl[1] = (unsigned int  )8;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)&revenue_code_ind;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)paymode;
    sqlstm.sqhstl[2] = (unsigned int  )3;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)&paymode_ind;
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



			}
				
			if (NO_DATA_FOUND)
			{
				break;
			}
			else if (SQLCODE != 0)
			{
				if (request_status == REPLY_NOT_RECIEVED)
				{
					/* EXEC SQL CLOSE pay_info; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 47;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )3629;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


				}
				else
				{
					/* EXEC SQL CLOSE pay_information; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 47;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )3644;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


				}

				if (SQLCODE != 0)
				{
#ifdef DEBUG
					userlog(" get_financial_data : Unable to close cursor for fetching payment data: %s", SQLMSG);
#endif
					strcpy(prog_log.remarks,"get_financial_data : Unable to close cursor for fetching payment data");
					sprintf(excep_log.error_msg, "get_financial_data : Unable to close cursor for fetching payment data : %s", SQLMSG);
					excep_log.termination_flag = YES;
					excep_log.severity = FATAL;

					log_error(ctx);

					return CURSOR_CLOSE_ERROR;
				}

#ifdef DEBUG
				userlog(" get_financial_data : Unable to fetch payment data : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"get_financial_data: Unable to fetch payment data");
				sprintf(excep_log.error_msg, "get_financial_data: Unable to fetch payment data : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return CURSOR_FETCH_ERROR;
			}

#ifdef DEBUG
			userlog(" get_financial_data : Fetch cursor successfull");
#endif

			/* If the payment mode is 'Free of Cost' no payment info is sent */

			if (paymode_ind == 0)
			{
			  /* commented on 04/04/2003 according to vasanth,becoz payment zero from jan2003 */
			  /*if(strcmp(paymode, "FC") == 0)
				{
					// Reset the values 

					jpn_fin_data->counter = 0;
					jpn_fin_data->len = 0;
					jpn_fin_data->fin_data = NULL;

					break;
				}
				else  on 04/04/2003 */
					convert_mode(paymode, &unsignedpaymode);
			}
			else
				unsignedpaymode = '\0';

			/* Payment mode is other than 'Free of Cost' , so allocate */
			/* the memory for payment details to be sent			   */

			if ( count == 0)
			{
				jpn_fin_data->fin_data = (FIN_DATA_T*)malloc(pay_cnt*sizeof(FIN_DATA_T));

				if (jpn_fin_data->fin_data == NULL)
				{
					if (request_status == REPLY_NOT_RECIEVED)
					{
						/* EXEC SQL CLOSE pay_info; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 12;
      sqlstm.arrsiz = 47;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )3659;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


					}
					else
					{
						/* EXEC SQL CLOSE pay_information; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 12;
      sqlstm.arrsiz = 47;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )3674;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)256;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


					}

					if (SQLCODE != 0)
					{
#ifdef DEBUG
						userlog(" get_financial_data : Unable to close cursor for fetching payment data: %s", SQLMSG);
#endif
						strcpy(prog_log.remarks,"get_financial_data : Unable to close cursor for fetching payment data");
						sprintf(excep_log.error_msg, "get_financial_data : Unable to close cursor for fetching payment data : %s", SQLMSG);
						excep_log.termination_flag = YES;
						excep_log.severity = FATAL;

						log_error(ctx);
										
						return CURSOR_CLOSE_ERROR;
					}
#ifdef DEBUG
					userlog("get_financial_data : Allocation of memory for storing payment details failed");
#endif
					strcpy(prog_log.remarks,"get_financial_data: Allocation of memory for storing payment details failed");
					strcpy(excep_log.error_msg, "get_financial_data: Allocation of memory for storing payment details failed");
					excep_log.termination_flag = YES;
					excep_log.severity = FATAL;

					log_error(ctx);
					
					return MALLOC_ERROR;
				}

				memset(jpn_fin_data->fin_data, '\0', pay_cnt*sizeof(FIN_DATA_T));
				fin_data = jpn_fin_data->fin_data;

			}

			/* Copy the data values into structure */

			if(revenue_code_ind == 0)
			{
				strcpy(fin_data->revenue_code, revenue_code);
			}
				fin_data->pay_mode = unsignedpaymode;
				fin_data->amt_type = CREDIT;

			if (strcmp(paymode, "FW") == 0)		/* If payment mode is 'Fee waiver' */
			{									/* Fee is 0						   */
				strcpy(fin_data->amt_value, "0");
			}
			else if(strcmp(paymode,"FC")== 0) /* Added on 04/04/2003 by shiva.p */
			{
				strcpy(fin_data->amt_value,"0");
			}
			else if (amt_value_ind == 0)
			{
				strcpy(fin_data->amt_value, rtrim(amt_value));
			}

#ifdef DEBUG
		userlog("get_financial_data : FINANCIAL DATA -");
		userlog("get_financial_data : Pay mode - %c", fin_data->pay_mode);
		userlog("get_financial_data : Revenue code - %s", fin_data->revenue_code);
		userlog("get_financial_data : Amt type - %c", fin_data->amt_type);
		userlog("get_financial_data : Amt value - %s", fin_data->amt_value);
#endif
				
			fin_data++;

		}	/* End of for(count = 0;; count++ ) */

#ifdef DEBUG
		userlog("get_financial_data : Loop Count - %d", count);
#endif

		if (count == 0)
		{
			jpn_fin_data->counter = 0;
			jpn_fin_data->len = 0;
			jpn_fin_data->fin_data = NULL;

		}

		if (request_status == REPLY_NOT_RECIEVED)
		{
			/* EXEC SQL CLOSE pay_info; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 47;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3689;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


		}
		else
		{
			/* EXEC SQL CLOSE pay_information; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 47;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3704;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


		}


		if (SQLCODE != 0)
		{
#ifdef DEBUG
			userlog(" get_financial_data : Unable to close cursor for fetching payment data: %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"get_financial_data : Unable to close cursor for fetching payment data");
			sprintf(excep_log.error_msg, "get_financial_data : Unable to close cursor for fetching payment data : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
							
			return CURSOR_CLOSE_ERROR;
		}

	}	/* End else if (Pay count > 0) */

	return SUCCESS;
}

/*****************************************************************************************/
/* Function Name	: get_appl_stat														 */
/* Description		: This function retrieves Application status for given Application   */
/*				      id																 */
/* Input			: Application id, Pointer to a variable in which Application status  */
/*                    is to be populated												 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/
int get_appl_stat(char *application_id, char *appl_stat,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06
/* EXEC SQL BEGIN DECLARE SECTION; */ 


		char appl_id[APP_ID_SIZE] = {0};
		char appl_status = 0;
		short appl_status_ind = -1;		
		
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
		
	strcpy(appl_id, application_id);
	
#ifdef DEBUG
	userlog("get_appl_stat : Appl id - %s", appl_id);
#endif

	/* EXEC SQL SELECT APPLSTAT INTO :appl_status:appl_status_ind
		FROM APPLICATION
		WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select APPLSTAT into :b0:b1  from APPLICATION where APPLID=:\
b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3719;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&appl_status;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&appl_status_ind;
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
		userlog(" get_appl_stat : Select from APPLICATION failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_appl_stat: Select from APPLICATION failed");
		sprintf(excep_log.error_msg, "get_appl_stat: Select from APPLICATION failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);

		return SELECT_ERROR;
	}

	if (appl_status_ind == 0)
		*appl_stat = appl_status;
	else
		*appl_stat = '\0';

#ifdef DEBUG
	userlog(" get_appl_stat : Appl status - %c", *appl_stat);	
#endif

	return SUCCESS;

}

/*****************************************************************************************/
/* Function Name	: update_legacy_req													 */
/* Description		: This function updates the record from LEGACY_REQUEST for the given */
/*					  application id and message id 									 */
/* Input			: Appl id															 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/

int update_legacy_req(JPN_UPDATE_REQ_T *req, int msgid, char *leg_msgid, char *appl_ws_id,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		int mesg_id = 0;
		int req_stat = 0;
		char legacy_msgid[MSG_ID_SIZE] = {0};
		/* varchar user_id[USER_ID_SIZE]  = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id
 = {0};

		char branch_code[BRANCH_CODE_SIZE]  = {0};
		/* varchar ws_id[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } ws_id
 = {0};


		char appl_id[APP_ID_SIZE];

		short legacy_msgid_ind = -1;
		short ws_id_ind = -1;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
#ifdef DEBUG
	userlog("Inside update_legacy_req....");
#endif

	mesg_id = msgid;
	req_stat = REQ_SENT;
	strcpy(user_id.arr, req->header.user_id);
	setlen(user_id);
	strcpy(branch_code, req->header.branch_code);
	strcpy(appl_id, req->header.application_id);
	
	if (0 != strcmp(leg_msgid, "\0"))
	{
		strcpy(legacy_msgid, leg_msgid);
		legacy_msgid_ind = 0;
	}

	if (appl_ws_id[0] != '\0')
	{
		strcpy(ws_id.arr, appl_ws_id);
		setlen(ws_id);
		ws_id_ind = 0;
	}

#ifdef DEBUG
	userlog("update_legacy_req : Applid - %s", appl_id);
	userlog("update_legacy_req : Oracle mesg id - %d", mesg_id);
	userlog("update_legacy_req : Legacy mesg id - %s", legacy_msgid);
	userlog("update_legacy_req : Legacy mesg id ind - %d", legacy_msgid_ind);
	userlog("update_legacy_req : WS id - %s", ws_id.arr);
#endif

	

	/* EXEC SQL UPDATE IJPN_LEGACY_REQUEST 
		SET LEGREQSTAT     = :req_stat,
			LEGMSGID       = :legacy_msgid:legacy_msgid_ind,
			USERID         = :user_id,
			BRANCHCODE     = :branch_code,
			LEGREQDATETIME = SYSDATE,
			TXNWSID        = :ws_id:ws_id_ind
		WHERE APPLID       = :appl_id
		AND LEGREQMSGID    = :mesg_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update IJPN_LEGACY_REQUEST  set LEGREQSTAT=:b0,LEGMSGID=:b1:\
b2,USERID=:b3,BRANCHCODE=:b4,LEGREQDATETIME=SYSDATE,TXNWSID=:b5:b6 where (APPL\
ID=:b7 and LEGREQMSGID=:b8)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3742;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&req_stat;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)legacy_msgid;
 sqlstm.sqhstl[1] = (unsigned int  )25;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&legacy_msgid_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&user_id;
 sqlstm.sqhstl[2] = (unsigned int  )11;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)branch_code;
 sqlstm.sqhstl[3] = (unsigned int  )7;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&ws_id;
 sqlstm.sqhstl[4] = (unsigned int  )18;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&ws_id_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)appl_id;
 sqlstm.sqhstl[5] = (unsigned int  )20;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&mesg_id;
 sqlstm.sqhstl[6] = (unsigned int  )sizeof(int);
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


		

	if(SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("update_legacy_req : Updating Request status in IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"update_legacy_req : Updating Request status in IJPN_LEGACY_REQUEST failed ");
		sprintf(excep_log.error_msg, "update_legacy_req : Updating Request status in IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return UPDATE_ERROR;
	}

#ifdef DEBUG
	userlog("update_legacy_req : Request status in IJPN_LEGACY_REQUEST updated");
#endif

	return SUCCESS;
}

/*****************************************************************************************/
/* Function Name	: check_pay_data_sent												 */
/* Description		: This function checks whether Payment data is already sent to JPN   */
/* Input			: Appl id, Txn serial no											 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/

int check_pay_data_sent(char *application_id, int txn_sr_no, int *request_status, int *req_mesg_id,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		int txn_sr = 0;
		char leg_req_flag = 0;
		char demo_flag = 0;
		int count = 0;
		int req_stat = -5;
		int message_id = 0;
		int req_stat1 = 0;
		int req_stat2 = 0;
		int req_stat3 = 0;
		char agency = 0;
		short message_id_ind = -1;
		short req_stat_ind = -1;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(appl_id, application_id);
	txn_sr = txn_sr_no;
	leg_req_flag = PAYMENT_UPD;
	demo_flag = DEMO_UPD;
	req_stat1 = REQ_SENT;
	req_stat2 = REPLY_RECEIVED;
	req_stat3 = REPLY_NOT_RECIEVED;
	agency = JPN_ID;
	*request_status = -5;

#ifdef DEBUG
	userlog("check_pay_data_sent : Appl id - %s", appl_id);
	userlog("check_pay_data_sent : Txn sr no - %d", txn_sr);
#endif

/*	EXEC SQL SELECT COUNT(*) INTO :count
		FROM LEGACY_REQUEST
		WHERE APPLID = :appl_id
		AND LEGREQFLAG = :leg_req_flag
		AND CHECKAGENCY = :agency
		AND LEGREQSTAT IN (:req_stat1, :req_stat2);
*/
	/* EXEC SQL SELECT LEGREQSTAT, LEGREQMSGID
			INTO :req_stat:req_stat_ind, :message_id:message_id_ind
		FROM IJPN_LEGACY_REQUEST
		WHERE APPLID = :appl_id
		AND LEGREQFLAG = :leg_req_flag
		AND CHECKAGENCY = :agency
		AND TXNSERNO = :txn_sr
		AND ROWNUM = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select LEGREQSTAT ,LEGREQMSGID into :b0:b1,:b2:b3  from IJPN\
_LEGACY_REQUEST where ((((APPLID=:b4 and LEGREQFLAG=:b5) and CHECKAGENCY=:b6) \
and TXNSERNO=:b7) and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3785;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&req_stat;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&req_stat_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&message_id;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&message_id_ind;
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
 sqlstm.sqhstv[3] = (         void  *)&leg_req_flag;
 sqlstm.sqhstl[3] = (unsigned int  )1;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&agency;
 sqlstm.sqhstl[4] = (unsigned int  )1;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&txn_sr;
 sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
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



	if (NO_DATA_FOUND)
	{
		/* EXEC SQL SELECT COUNT(*) INTO :count
			FROM IJPN_LEGACY_REQUEST
			WHERE APPLID = :appl_id
			AND LEGREQFLAG = :demo_flag
			AND CHECKAGENCY = :agency
			AND LEGREQSTAT = :req_stat3; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from IJPN_LEGACY_REQUEST where (\
((APPLID=:b1 and LEGREQFLAG=:b2) and CHECKAGENCY=:b3) and LEGREQSTAT=:b4)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3824;
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
  sqlstm.sqhstv[2] = (         void  *)&demo_flag;
  sqlstm.sqhstl[2] = (unsigned int  )1;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&agency;
  sqlstm.sqhstl[3] = (unsigned int  )1;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&req_stat3;
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



		if (SQLCODE != 0)
		{
#ifdef DEBUG
			userlog("check_pay_data_sent : Selection from in IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"check_pay_data_sent : Selection from IJPN_LEGACY_REQUEST failed ");
			sprintf(excep_log.error_msg, "check_pay_data_sent : Selection from IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
					
			return SELECT_ERROR;

		}

		if (count > 0)
		{
#ifdef DEBUG
			userlog("check_pay_data_sent : Payment data is not sent");
#endif
			*request_status = REPLY_NOT_RECIEVED;
			return SUCCESS;

		}

		return SUCCESS;
	}
	else if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("check_pay_data_sent : Selection from in IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"check_pay_data_sent : Selection from IJPN_LEGACY_REQUEST failed ");
		sprintf(excep_log.error_msg, "check_pay_data_sent : Selection from IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

#ifdef DEBUG
	userlog("check_pay_data_sent : Payment data is already tried to sent");
#endif

	if (req_stat_ind == 0)
	{
		*request_status = req_stat;
	}

	if (message_id_ind == 0)
	{
		*req_mesg_id = message_id;
	}

	/* Delete the failed request for Payment update in LEGACY_REQUEST, if any */

/*	req_stat1 = REQ_NOT_SENT;
	req_stat2 = REPLY_NOT_RECIEVED;

	EXEC SQL DELETE FROM LEGACY_REQUEST
		WHERE APPLID = :appl_id
		AND LEGREQFLAG = :leg_req_flag
		AND CHECKAGENCY = :agency
		AND LEGREQSTAT IN (:req_stat1, :req_stat2);

	if (SQLCODE != 0 && !NO_DATA_FOUND)
	{
#ifdef DEBUG
		userlog("check_pay_data_sent : Deletion from in LEGACY_REQUEST failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"check_pay_data_sent : Deletion from LEGACY_REQUEST failed ");
		sprintf(excep_log.error_msg, "check_pay_data_sent : Deletion from LEGACY_REQUEST failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return DELETE_ERROR;
	}
*/
	return GMPC_WARN;

}

/*****************************************************************************************/
/* Function Name	: get_txn_srno														 */
/* Description		: This function is being called at the time of Issuance and retrievs */
/*                    the Transaction serial no for the given application at the time of */
/*                    Application i.e. the transaction for which the applicant has       */
/*					  applied for														 */
/* Input			: Appl id															 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/

int get_txn_srno(char *application_id, int *appl_txn_srno, int *payment_srno,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		int txn_sr = 0;
		int txn_type_ft = 0;
		int txn_type_conv = 0;
		int txn_type_12yo = 0;
		int txn_type_repl = 0;
		int pay_sr = 0;

		short txn_sr_ind = -1;
		short pay_sr_ind = -1;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(appl_id, application_id);
	txn_type_conv = TXN_CONV;
	txn_type_ft = TXN_FT;
	txn_type_12yo = TXN_12YO;
	txn_type_repl = TXN_REPL;

#ifdef DEBUG
	userlog("get_txn_srno : Appl id - %s", appl_id);
#endif

	/* EXEC SQL SELECT TXNSERNO, PAYMSERNO INTO :txn_sr:txn_sr_ind, :pay_sr:pay_sr_ind
		FROM APPL_TXN 
		WHERE APPLID = :appl_id
		  AND TXNCODE IN (SELECT TXNCODE FROM TXN_CODE
							WHERE TXNTYPE IN (:txn_type_conv, :txn_type_ft, :txn_type_12yo, :txn_type_repl))
		  AND ROWNUM < 2; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TXNSERNO ,PAYMSERNO into :b0:b1,:b2:b3  from APPL_TXN\
 where ((APPLID=:b4 and TXNCODE in (select TXNCODE  from TXN_CODE where TXNTYP\
E in (:b5,:b6,:b7,:b8))) and ROWNUM<2)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3859;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&txn_sr;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&txn_sr_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&pay_sr;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&pay_sr_ind;
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
 sqlstm.sqhstv[3] = (         void  *)&txn_type_conv;
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&txn_type_ft;
 sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&txn_type_12yo;
 sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&txn_type_repl;
 sqlstm.sqhstl[6] = (unsigned int  )sizeof(int);
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



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("get_txn_srno : Selecting Transaction serial no from in APPL_TXN failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_txn_srno : Selection from APPL_TXN failed ");
		sprintf(excep_log.error_msg, "get_txn_srno : Selecting Transaction serial no from in APPL_TXN failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	if (txn_sr_ind != 0)
	{
#ifdef DEBUG
		userlog("get_txn_srno : No basic transaction exists for the applicant");
#endif
		strcpy(prog_log.remarks,"get_txn_srno : No basic transaction exists for the applicant");
		sprintf(excep_log.error_msg, "get_txn_srno : No basic transaction exists for the applicant");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return NO_TXN_EXISTS;
	}

#ifdef DEBUG
	userlog("get_txn_srno : Txn ser no - %d", txn_sr);
	userlog("get_txn_srno : Payment ser no - %d", pay_sr);
#endif

	*appl_txn_srno = txn_sr;

	if (pay_sr_ind == 0)
		*payment_srno  = pay_sr;
	else
		*payment_srno = 0;

	return SUCCESS;

}

/*****************************************************************************************/
/* Function Name	: check_leg_request													 */
/* Description		: This function checks whehther record exists for the given appl id  */
/*                    in LEGACY_REQUEST table with Request flag 'X'						 */
/* Input			: Appl id, Variable to populate record count						 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/

int check_leg_request(char *application_id, int *rec_cnt,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		char req_flag = {0};
		int service_id = 0;
		char agency = {0};
		int record_cnt = 0;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(appl_id, application_id);
	req_flag = UNKNOWN;
	service_id = JPN_UPDATE_ID;
	agency = JPN_ID;

	/* EXEC SQL SELECT COUNT(*) INTO :record_cnt
		FROM IJPN_LEGACY_REQUEST 
		WHERE APPLID = :appl_id
		AND LEGREQFLAG = :req_flag
		AND CHECKAGENCY = :agency
		AND SERVICEID = :service_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from IJPN_LEGACY_REQUEST where ((\
(APPLID=:b1 and LEGREQFLAG=:b2) and CHECKAGENCY=:b3) and SERVICEID=:b4)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3902;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&record_cnt;
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
 sqlstm.sqhstv[2] = (         void  *)&req_flag;
 sqlstm.sqhstl[2] = (unsigned int  )1;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&agency;
 sqlstm.sqhstl[3] = (unsigned int  )1;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&service_id;
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



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("check_leg_request : Selection from IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"check_leg_request : Selection from IJPN_LEGACY_REQUEST failed");
		sprintf(excep_log.error_msg, "check_leg_request : Selection from IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

#ifdef DEBUG
	userlog("check_leg_request : Record count : %d", record_cnt);
#endif

	*rec_cnt = record_cnt;

	return SUCCESS;

}

/*****************************************************************************************/
/* Function Name	: get_appl_date														 */
/* Description		: This function retrieves Application date frpm APPL_PROC table		 */
/* Input			: Appl id, Txn type													 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/

int get_appl_date(char *application_id, char *leg_header_date, int txn_type,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		char appl_date[DATE_TIME_SIZE] = {0};
		short appl_date_ind = -1;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	strcpy(appl_id, application_id);

#ifdef DEBUG
	userlog("get_appl_date : Txn type - %d", txn_type);
#endif
/*Commented by Amartjith on 15th Sept '04 to select APPLDATE from APPLICATION
	if (txn_type == TXN_12YO || txn_type == TXN_FT
		|| txn_type == TXN_CONV || txn_type == TXN_REPL)
	{

		EXEC SQL SELECT TO_CHAR(TIMESTAMP, 'DDMMYYYY HH24MISS') 
				INTO :appl_date:appl_date_ind
			FROM APPL_PROC
			WHERE APPLID = :appl_id
			AND PROCSERNO = (SELECT MIN(PROCSERNO) FROM APPL_PROC
								WHERE APPLID = :appl_id);
	
	}
	else
	{
		EXEC SQL SELECT TO_CHAR(TIMESTAMP, 'DDMMYYYY HH24MISS') 
				INTO :appl_date:appl_date_ind
			FROM APPL_PROC
			WHERE APPLID = :appl_id
			AND PROCSERNO = (SELECT MAX(PROCSERNO) FROM APPL_PROC
								WHERE APPLID = :appl_id);
	}
*///15th Sept '04

		/* EXEC SQL SELECT TO_CHAR(APPLDATE, 'DDMMYYYY HH24MISS') 
			INTO :appl_date:appl_date_ind
			FROM APPLICATION
			WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select TO_CHAR(APPLDATE,'DDMMYYYY HH24MISS') into :b0:b1  f\
rom APPLICATION where APPLID=:b2";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3937;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)appl_date;
  sqlstm.sqhstl[0] = (unsigned int  )16;
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


	
	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("get_appl_date : Selecting Application date from APPLICATION failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_appl_date : Selecting Application date from APPLICATION failed ");
		sprintf(excep_log.error_msg, "get_appl_date : Selecting Application date from APPLICATION failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

#ifdef DEBUG
	userlog("get_appl_date : Appl date - %s", appl_date);
#endif

	if(appl_date_ind == 0)
		strcpy(leg_header_date, appl_date);

	return SUCCESS;
}


/*****************************************************************************************/
/* Function Name	: get_appl_timestamp														 */
/* Description		: This function retrieves Application date frpm APPL_PROC table		 */
/* Input			: Appl id, Txn type													 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/

int get_appl_timestamp(char *application_id, char *leg_header_date, int txn_type,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		char appl_timestamp[DATE_TIME_SIZE] = {0};
		short appl_timestamp_ind = -1;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	strcpy(appl_id, application_id);


	/* EXEC SQL SELECT TO_CHAR(TIMESTAMP, 'DDMMYYYY HH24MISS') 
		INTO :appl_timestamp:appl_timestamp_ind
		FROM APPLICATION
		WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR( timestamp ,'DDMMYYYY HH24MISS') into :b0:b1 \
 from APPLICATION where APPLID=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3960;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)appl_timestamp;
 sqlstm.sqhstl[0] = (unsigned int  )16;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&appl_timestamp_ind;
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
		userlog("get_appl_timestamp : Selecting timestamp from APPLICATION failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_appl_timestamp : Selecting timestamp from APPLICATION failed ");
		sprintf(excep_log.error_msg, "get_appl_timestamp : Selecting timestamp from APPLICATION failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

#ifdef DEBUG
	userlog("get_appl_timestamp : Appl timestamp - %s", appl_timestamp);
#endif

	if(appl_timestamp_ind == 0)
		strcpy(leg_header_date, appl_timestamp);

	return SUCCESS;
}



/*****************************************************************************************/
/* Function Name	: upd_payment_flag													 */
/* Description		: This function updates the Payment update flag in PAYMENT_INFO table*/
/*                    to YES for given Payment serial no							     */
/* Input			: Appl id, Transaction serial no									 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/

int upd_payment_flag(char *application_id, int txn_serial_no,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		int txn_srno = 0;
	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	strcpy(appl_id, application_id);
	txn_srno = txn_serial_no;

	/* EXEC SQL UPDATE PAYMENT_INFO 
		SET LEGUPDFLAG = 'Y'
		WHERE APPLID = :appl_id
		AND PAYMSERNO IN (SELECT A.PAYMSERNO FROM APPL_TXN A, TXN_CODE B
							WHERE A.APPLID = :appl_id
							AND A.TXNCODE = B.TXNCODE
							AND B.TXNTYPE = (SELECT D.TXNTYPE FROM TXN_CODE D,
												APPL_TXN E
												WHERE E.APPLID = :appl_id
												AND E.TXNSERNO = :txn_srno
												AND D.TXNCODE = E.TXNCODE)); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update PAYMENT_INFO  set LEGUPDFLAG='Y' where (APPLID=:b0 an\
d PAYMSERNO in (select A.PAYMSERNO  from APPL_TXN A ,TXN_CODE B where ((A.APPL\
ID=:b0 and A.TXNCODE=B.TXNCODE) and B.TXNTYPE=(select D.TXNTYPE  from TXN_CODE\
 D ,APPL_TXN E where ((E.APPLID=:b0 and E.TXNSERNO=:b3) and D.TXNCODE=E.TXNCOD\
E)))))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3983;
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
 sqlstm.sqhstv[1] = (         void  *)appl_id;
 sqlstm.sqhstl[1] = (unsigned int  )20;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
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
 sqlstm.sqhstv[3] = (         void  *)&txn_srno;
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




		
	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("upd_payment_flag : Updating Payment update flag in PAYMENT_INFO failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"upd_payment_flag : Updating Payment update flag in PAYMENT_INFO failed");
		sprintf(excep_log.error_msg, "upd_payment_flag : Updating Payment update flag in PAYMENT_INFO failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return UPDATE_ERROR;
	}

#ifdef DEBUG
	userlog("upd_payment_flag : Payment update flag in PAYMENT_INFO updated successfully");
#endif

	return SUCCESS;

	
}

/*****************************************************************************************/
/* Function Name	: check_issue_payment												 */
/* Description		: This function checks whether Payment info is to be sent at the time*/
/*                    of issuance														 */
/* Input			: Appl id, Payment serial no, Payment indicator    					 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/
int check_issue_payment(char *application_id, char *pay_ind,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		int rec_cnt = 0;
		int pay_sr = 0;
		char issue_pay_txncode[TRANSACTION_CODE_SIZE] = {0};
		
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(appl_id, application_id);
	strcpy(issue_pay_txncode, ISSUE_PAY_TXNCODE);

	/* EXEC SQL SELECT COUNT(*) INTO :rec_cnt
		FROM PAYMENT_INFO 
		WHERE APPLID = :appl_id
		AND PAYMSERNO IN (SELECT A.PAYMSERNO FROM APPL_TXN A
							WHERE A.APPLID = :appl_id
							AND A.TXNCODE = :issue_pay_txncode)
		AND NVL(LEGUPDFLAG, 'N') = 'N'; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from PAYMENT_INFO where ((APPLID=\
:b1 and PAYMSERNO in (select A.PAYMSERNO  from APPL_TXN A where (A.APPLID=:b1 \
and A.TXNCODE=:b3))) and NVL(LEGUPDFLAG,'N')='N')";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4014;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&rec_cnt;
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
 sqlstm.sqhstv[2] = (         void  *)appl_id;
 sqlstm.sqhstl[2] = (unsigned int  )20;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)issue_pay_txncode;
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



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("check_issue_payment : Selection from PAYMENT_INFO failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"check_issue_payment : Selection from PAYMENT_INFO failed");
		sprintf(excep_log.error_msg, "check_issue_payment : Selection from PAYMENT_INFO failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	if (rec_cnt > 0)
		*pay_ind = YES;
	else
		*pay_ind = NO;

	return SUCCESS;
}


int payment_info_count(char *applid, int *pcnt, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06

	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE]={0};
	int pcount=0;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	strcpy(applid,appl_id);

	userlog("payment_info_count: applid : %s",applid);
	userlog("payment_info_count: appl_id : %s",appl_id);

	pcount = 0;
	/* EXEC SQL SELECT COUNT(*) INTO :pcount FROM PAYMENT_INFO
		WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from PAYMENT_INFO where APPLID=:b\
1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4045;
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
		userlog("update_payment : Select from PAYMENT_INFO failed : %s", SQLMSG); 
	 #endif
		strcpy(prog_log.remarks,"upd_payment : Select from PAYMENT_INFO failed");
		sprintf(excep_log.error_msg,"upd_payment : Select from PAYMENT_INFO failed :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);

		return SELECT_ERROR;
	}

	userlog("payment_info_count : PAYMENT_INFO count : %d for applid : %s",pcount,appl_id);

	*pcnt = pcount;

	return SUCCESS;

}


/*****************************************************************************************/
/* Function Name	: check_addr_updated												 */
/* Description		: This function checks whether Address is already being updated at   */
/*                    the Legacy													     */
/* Input			: Appl id   														 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/

int check_addr_updated(char *application_id,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		int rec_cnt = 0;
		char req_flag = 0;
		char agency = 0;
		int service_id = 0;
		int req_stat1 = 0;
		int req_stat2 = 0;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(appl_id, application_id);
	agency = JPN_ID;
	req_flag = ADDRESS_UPD;
	service_id = JPN_UPDATE_ID;
	req_stat1 = REQ_SENT;
	req_stat2 = REPLY_RECEIVED;

	/* EXEC SQL SELECT COUNT(*) INTO :rec_cnt
		FROM IJPN_LEGACY_REQUEST 
 		WHERE APPLID = :appl_id
		AND LEGREQFLAG = :req_flag
		AND CHECKAGENCY = :agency
		AND SERVICEID = :service_id
		AND LEGREQSTAT IN (:req_stat1, :req_stat2); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from IJPN_LEGACY_REQUEST where ((\
((APPLID=:b1 and LEGREQFLAG=:b2) and CHECKAGENCY=:b3) and SERVICEID=:b4) and L\
EGREQSTAT in (:b5,:b6))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4068;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&rec_cnt;
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
 sqlstm.sqhstv[2] = (         void  *)&req_flag;
 sqlstm.sqhstl[2] = (unsigned int  )1;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&agency;
 sqlstm.sqhstl[3] = (unsigned int  )1;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&service_id;
 sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&req_stat1;
 sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&req_stat2;
 sqlstm.sqhstl[6] = (unsigned int  )sizeof(int);
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



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("check_addr_updated : Selection from IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"check_addr_updated : Selection from IJPN_LEGACY_REQUEST failed");
		sprintf(excep_log.error_msg, "check_addr_updated : Selection from IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

#ifdef DEBUG
	userlog("check_addr_updated : Record count - %d", rec_cnt);
#endif

	if (rec_cnt > 0)
		return GMPC_WARN;

	return SUCCESS;
	
}

/*****************************************************************************************/
/* Function Name	: update_leg_application_stat										 */
/* Description		: This function fires the GMPC application status message when the   */
/*                    application is being referred to SSC/GQD or terminated by SSC/GQD  */
/* Input			: Request buffer, Application status, Txn seial no					 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/

int update_leg_application_stat(JPN_UPDATE_REQ_T *req, char application_stat, int txn_srno,LI_P_HEADER_T hdr,void * ctx) //LI_P_HEADER_T hdr added by kasi on 11/08/06 to remove global scope.
{
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		int msg_id = 0;
		char appl_id[APP_ID_SIZE] = {0};
		/* varchar user_id[USER_ID_SIZE]  = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id
 = {0};

		char branch_code[BRANCH_CODE_SIZE]  = {0};
		int req_stat1 = 0;
		int req_stat2 = 0;
		int req_stat = 0;
		char check_agency = 0;
		char service_id[PROG_ID_SIZE] = {0};
		int txn_sr_no = 0;
		char request_flag = ' ';
		short req_stat_ind = -1;
		char apprv_status = ' '; //Added by Salmi, Date 19th June 2020 CRAPPL-  SKP002/CR/2020
		short apprv_status_ind = -1;  //Added by Salmi, Date 19th June 2020 CRAPPL-  SKP002/CR/2020
		int apprv_count = 0;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 

	
	int msgid = 0;
	int ret_code = 0;
	
	int dlkp_flag = 0; //Added by Salmi, Date 19th June 2020 CRAPPL-  SKP002/CR/2020
	int ret = 0;
	int rec_cnt = 0;
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	strcpy(appl_id, req->header.application_id);
	req_stat1 = REQ_NOT_SENT;
	req_stat2 = REPLY_NOT_RECIEVED;
	
	strcpy(user_id.arr, req->header.user_id);
	setlen(user_id);
	strcpy(branch_code, req->header.branch_code);
	check_agency = JPN_ID;
	itoa(JPN_UPDATE_ID, service_id, 10);
	
#ifdef DEBUG
	userlog("update_leg_application_stat : Appl id  - %s", appl_id);
	userlog("update_leg_application_stat : Txn ser no  - %d", txn_srno );
#endif


	//Added by Salmi, Date 19th June 2020 CRAPPL-  SKP002/CR/2020
	if(GMPC_GOOD != (ret = check_dlkp_trans(req->header.application_id, &dlkp_flag,ctx)))
	{

	#ifdef DEBUG
	userlog("update_leg_application_stat : Selecting Request status from IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
	#endif
		strcpy(prog_log.remarks,"update_leg_application_stat : Selecting Request status from IJPN_LEGACY_REQUEST failed");
		sprintf(excep_log.error_msg, "update_leg_application_stat : Selecting Request status from IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
					
		return SELECT_ERROR;
	}


	/* EXEC SQL SELECT COUNT(*) INTO :apprv_count FROM DLEWAT_APPRV_HISTORY WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from DLEWAT_APPRV_HISTORY where A\
PPLID=:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4111;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&apprv_count;
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
		userlog("update_leg_application_stat: Select from DLEWAT_APPRV_HISTORY failed : %s", SQLMSG); 
	#endif	
	}
	if(apprv_count == 0)
	{	dlkp_flag = 0;	} //Create applicant 

	#ifdef DEBUG
	userlog("update_leg_application_stat :apprv_count [%d]", apprv_count);
	userlog("update_leg_application_stat :dlkp_flag [%d]", dlkp_flag);
	userlog("update_leg_application_stat :application_stat [%c]", application_stat);
	#endif
	//Added by Salmi, Date 19th June 2020 CRAPPL-  SKP002/CR/2020

	//if (application_stat == TERMINATED_GSC)  //Remark by Salmi Date 12th June 2020, CRAPPL-  SKP002/CR/2020
	if ((application_stat == TERMINATED_GSC) || (dlkp_flag == 1))
	{

		/* Check if request is already sent */
		if (dlkp_flag == 1)
		{
			/* EXEC SQL SELECT DECODE(STATUS, 'S','5','T','6','B','7','L','8', '0') INTO :apprv_status:apprv_status_ind 
				FROM DLEWAT_APPRV_HISTORY
				where APPLID =:appl_id and datetimestamp = 
				(SELECT max(DATETIMESTAMP) from DLEWAT_APPRV_HISTORY where APPLID =:appl_id); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 47;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select DECODE(STATUS,'S','5','T','6','B','7','L','8','0') \
into :b0:b1  from DLEWAT_APPRV_HISTORY where (APPLID=:b2 and datetimestamp=(se\
lect max(DATETIMESTAMP)  from DLEWAT_APPRV_HISTORY where APPLID=:b2))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )4134;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&apprv_status;
   sqlstm.sqhstl[0] = (unsigned int  )1;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&apprv_status_ind;
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
			userlog("update_leg_application_stat :  DLEWAT_APPRV_HISTORY.status : %c", apprv_status); 
			#endif	
			}

			request_flag = apprv_status;

			/* EXEC SQL SELECT COUNT(*) INTO :rec_cnt
				FROM IJPN_LEGACY_REQUEST 
 				WHERE APPLID = :appl_id
				AND LEGREQFLAG = :request_flag
				AND CHECKAGENCY = :check_agency; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 47;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select count(*)  into :b0  from IJPN_LEGACY_REQUEST where \
((APPLID=:b1 and LEGREQFLAG=:b2) and CHECKAGENCY=:b3)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )4161;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&rec_cnt;
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
   sqlstm.sqhstv[2] = (         void  *)&request_flag;
   sqlstm.sqhstl[2] = (unsigned int  )1;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&check_agency;
   sqlstm.sqhstl[3] = (unsigned int  )1;
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

	

			if(rec_cnt > 0 && apprv_status == '5')
			{
				request_flag = rec_cnt + '0';  //Cast int to char
			}

			#ifdef DEBUG
			userlog("update_leg_application_stat :  IJPN_LEGACY_REQUEST rec_cnt : %d", rec_cnt); 
			userlog("update_leg_application_stat :  request_flag : %c", request_flag);
			userlog("update_leg_application_stat :  apprv_status : %c", apprv_status);
			#endif
		}
		else
			request_flag = APPL_TERMINATE;


		/* EXEC SQL SELECT LEGREQSTAT INTO :req_stat:req_stat_ind
				FROM IJPN_LEGACY_REQUEST
			WHERE APPLID = :appl_id
			AND CHECKAGENCY = :check_agency
			AND LEGREQFLAG = :request_flag; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select LEGREQSTAT into :b0:b1  from IJPN_LEGACY_REQUEST whe\
re ((APPLID=:b2 and CHECKAGENCY=:b3) and LEGREQFLAG=:b4)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )4192;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&req_stat;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&req_stat_ind;
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
  sqlstm.sqhstv[2] = (         void  *)&check_agency;
  sqlstm.sqhstl[2] = (unsigned int  )1;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&request_flag;
  sqlstm.sqhstl[3] = (unsigned int  )1;
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



		if (SQLCODE != 0 && !NO_DATA_FOUND)
		{
#ifdef DEBUG
			userlog("update_leg_application_stat : Selecting Request status from IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"update_leg_application_stat : Selecting Request status from IJPN_LEGACY_REQUEST failed");
			sprintf(excep_log.error_msg, "update_leg_application_stat : Selecting Request status from IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
					
			return SELECT_ERROR;
		}

		if (req_stat_ind == 0)
		{
			if (req_stat == REQ_SENT || req_stat == REPLY_RECEIVED)
			{
#ifdef DEBUG
				userlog("update_leg_application_stat : Request is already sent");
#endif

				return SUCCESS;

			}
		}

		/* Delete all the records from LEGACY_REQUEST */

		/* EXEC SQL DELETE FROM IJPN_LEGACY_REQUEST
			WHERE APPLID = :appl_id
			AND LEGREQSTAT IN (:req_stat1, :req_stat2); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "delete  from IJPN_LEGACY_REQUEST  where (APPLID=:b0 and LEG\
REQSTAT in (:b1,:b2))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )4223;
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
  sqlstm.sqhstv[1] = (         void  *)&req_stat1;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&req_stat2;
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



		if (SQLCODE != 0 && !NO_DATA_FOUND)
		{
#ifdef DEBUG
			userlog("update_leg_application_stat : Delete from IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"update_leg_application_stat : Delete from IJPN_LEGACY_REQUEST failed");
			sprintf(excep_log.error_msg, "update_leg_application_stat : Delete from IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
					
			return DELETE_ERROR;
		}

		/* Retrieve the minimum txn sr no */

		/* EXEC SQL SELECT MIN(TXNSERNO) INTO :txn_sr_no
				FROM APPL_TXN
			WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select min(TXNSERNO) into :b0  from APPL_TXN where APPLID=:\
b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )4250;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&txn_sr_no;
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
			userlog("update_leg_application_stat : Selecting minimum Transaction Srno from APPL_TXN failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"update_leg_application_stat : Selection from APPL_TXN failed");
			sprintf(excep_log.error_msg, "update_leg_application_stat : Selecting minimum Transaction Srno from APPL_TXN failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
					
			return SELECT_ERROR;
		}

	}
	else
	{
		request_flag = APPL_IN_PROG;
		txn_sr_no = txn_srno;
	}

#ifdef DEBUG
	userlog("update_leg_application_stat : Transaction Srno - %d", txn_sr_no);
	userlog("update_leg_application_stat : Req flag - %c", request_flag);
#endif

	/* Select the Next value for the sequence MESSAGEID */	

	/* EXEC SQL SELECT MESSAGEID.NEXTVAL INTO :msg_id FROM DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select MESSAGEID.nextval  into :b0  from DUAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4273;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&msg_id;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
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
		msgid = 0;
#ifdef DEBUG
		userlog("update_leg_application_stat : Message id can not be selected from sequence : %s", SQLMSG); 
#endif
		strcpy(prog_log.remarks,"update_leg_application_stat : Select message id from DUAL failed");
		sprintf(excep_log.error_msg,"update_leg_application_stat : Select message id from DUAL failed  :%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

/* Copy the value of the message id into the msgid which will be used while updating */

	msgid = msg_id;

#ifdef DEBUG
	userlog("update_leg_application_stat : Message id - %d", msg_id);
#endif
	
	/* Insert a record into LEGACY_REQUEST */

	/* EXEC SQL INSERT INTO IJPN_LEGACY_REQUEST	(LEGREQMSGID, APPLID, BRANCHCODE, 
							USERID, SERVICEID, LEGREQSTAT, LEGREQDATETIME, 
							CHECKAGENCY, TXNSERNO, LEGREQFLAG)
							VALUES (:msg_id, :appl_id, :branch_code, :user_id, :service_id,
			:req_stat1, SYSDATE, :check_agency, :txn_sr_no, :request_flag); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into IJPN_LEGACY_REQUEST (LEGREQMSGID,APPLID,BRANCHCO\
DE,USERID,SERVICEID,LEGREQSTAT,LEGREQDATETIME,CHECKAGENCY,TXNSERNO,LEGREQFLAG)\
 values (:b0,:b1,:b2,:b3,:b4,:b5,SYSDATE,:b6,:b7,:b8)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4292;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&msg_id;
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
 sqlstm.sqhstv[2] = (         void  *)branch_code;
 sqlstm.sqhstl[2] = (unsigned int  )7;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&user_id;
 sqlstm.sqhstl[3] = (unsigned int  )11;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)service_id;
 sqlstm.sqhstl[4] = (unsigned int  )9;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&req_stat1;
 sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&check_agency;
 sqlstm.sqhstl[6] = (unsigned int  )1;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&txn_sr_no;
 sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)0;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&request_flag;
 sqlstm.sqhstl[8] = (unsigned int  )1;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)0;
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



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("update_leg_application_stat : Insert into IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"update_leg_application_stat : Insert into IJPN_LEGACY_REQUEST failed ");
		sprintf(excep_log.error_msg, "update_leg_application_stat : Insert into IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return INSERT_ERROR;
	}

#ifdef DEBUG
		userlog("update_leg_application_stat : Record inserted into IJPN_LEGACY_REQUEST");
#endif

	
	/* Commit the insertion into LEGACY_REQUEST */

	if(SUCCESS != (ret_code = gscbcommit_trans(ctx)))
	{
		userlog("update_leg_application_stat : Commit transaction failed!!");

		return END_TRAN_ERROR;
	}

	/* Update the application status to legacy */

	if (SUCCESS !=  upd_card_details(req, msgid, request_flag,hdr,ctx)) //hdr added by kasi on 11/08/06 to remove global scope.
	{
#ifdef DEBUG
		userlog("update_leg_application_stat : upd_card_details() failed with return code %d", ret_code);
#endif

		/* Delete the record from LEGACY_REQUEST for message fired for */
		/* application being referred to SSC/GQD, as we don't want to  */
		/* refire the message										   */
/* commented for IJPN temporarly on 13/09/05, to be removed soon
  		if (application_stat == REFFERED_SSC || application_stat == REFFERED_GQD)
		{
			EXEC SQL DELETE FROM IJPN_LEGACY_REQUEST
				WHERE APPLID = :appl_id
				AND CHECKAGENCY = :check_agency
				AND LEGREQFLAG = :request_flag;

			if (SQLCODE != 0)
			{
#ifdef DEBUG
				userlog("update_leg_application_stat : Delete from IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"update_leg_application_stat : Delete from IJPN_LEGACY_REQUEST failed ");
				sprintf(excep_log.error_msg, "update_leg_application_stat : Delete from IJPN_LEGACY_REQUEST failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
						
				return DELETE_ERROR;
			}
#ifdef DEBUG
			userlog("update_leg_application_stat : Record deleted from IJPN_LEGACY_REQUEST");
#endif

		}
end ijpn */
	}

		return SUCCESS;
}

/*****************************************************************************************/
/* Function Name	: get_appl_machine													 */
/* Description		: This function retrieves the workstation id and User id at the      */
/*                    application time from APPL_PROC table								 */
/* Input			: Appl id, Txn type													 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/

int get_appl_machine(char *application_id, char *appl_ws_id, char *appl_user_id, int txn_type,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 01/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		/* varchar ws_id[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } ws_id
 = {0};

		/* varchar user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id
 = {0};

		short ws_id_ind = -1;
		short user_id_ind = -1;

		char ssc_branch_code[BRANCH_CODE_SIZE] = {0};
		int i=0;

sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(appl_id, application_id);

	#ifdef DEBUG
		userlog("get_appl_machine : Txn type - %d", txn_type);
	#endif

	for(i=0;i<BRANCH_CODE_SIZE;i++)
		ssc_branch_code[i] = '\0';

	if (txn_type == TXN_12YO || txn_type == TXN_FT
		|| txn_type == TXN_CONV || txn_type == TXN_REPL)
	{
		/* EXEC SQL SELECT USERID, SSCBRANCHCODE
				INTO :user_id:user_id_ind,ssc_branch_code
			FROM APPLICATION
			WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select USERID ,SSCBRANCHCODE into :b0:b1,:b2  from APPLICAT\
ION where APPLID=:b3";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )4343;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&user_id;
  sqlstm.sqhstl[0] = (unsigned int  )11;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&user_id_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)ssc_branch_code;
  sqlstm.sqhstl[1] = (unsigned int  )7;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
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


	
	}
	else
	{
		/*
		EXEC SQL SELECT USERID
				INTO :user_id:user_id_ind
			FROM APPL_PROC
			WHERE APPLID = :appl_id
			AND PROCSERNO = (SELECT MAX(PROCSERNO) FROM APPL_PROC
								WHERE APPLID = :appl_id);
		*/ //commeneted on 26/10/05 for IJPN as we copying it from the header directly.
	}
		
	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("get_appl_machine : Selecting User Id from APPLICATION failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_appl_machine : Selecting User Id from APPLICATION failed ");
		sprintf(excep_log.error_msg, "get_appl_machine : Selecting User Id from APPLICATION failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	// Added this code on 07/08/2007 for Release 3.10
	// This user_id is from application, we copy this if value exists.
	if (user_id_ind == 0)
	{
		setnull(user_id);
		strcpy(appl_user_id, user_id.arr);
	}

	#ifdef DEBUG
	     userlog("get_appl_machine : Before Selecting userid from APPL_HISTORY userid:%s:,sqlcode:%d:", user_id.arr,sqlca.sqlcode);
    #endif

	#ifdef DEBUG
		 userlog("get_appl_machine : Before Selecting userid from APPL_HISTORY txn_type:%d:", txn_type);
		 userlog("get_appl_machine : Before Selecting userid from ssc_branch_code :%s:", ssc_branch_code);
    #endif

	if ((txn_type == TXN_CONV || txn_type == TXN_REPL) && (ssc_branch_code[0] == '\0'))
	{
		/* EXEC SQL SELECT USERID
				INTO :user_id:user_id_ind
			FROM APPL_HISTORY
			WHERE APPLID = :appl_id
			AND APPLSTAT = 'I'
			AND ROWNUM = 1; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select USERID into :b0:b1  from APPL_HISTORY where ((APPLID\
=:b2 and APPLSTAT='I') and ROWNUM=1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )4370;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&user_id;
  sqlstm.sqhstl[0] = (unsigned int  )11;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&user_id_ind;
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



		user_id.arr[user_id.len] = '\0';

		#ifdef DEBUG
		    userlog("get_appl_machine : Selecting userid from APPL_HISTORY userid:%s:,sqlcode:%d:", user_id.arr,sqlca.sqlcode);
        #endif

	}

	// This user_id is from appl_history, we copy this if value exists. otherwise the application userid will be used

	if (user_id_ind == 0)
	{
		//setnull(user_id);
		strcpy(appl_user_id, user_id.arr);
	}

	#ifdef DEBUG
	    userlog("get_appl_machine : Final userid to message:%s:", user_id.arr);
		//userlog("get_appl_machine : Final appl_user_id to message:%s:", appl_user_id);
    #endif
    // end of code for Release 3.10

	/* EXEC SQL SELECT LITXNWSID.NEXTVAL 	INTO :ws_id:ws_id_ind
		FROM  DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select LITXNWSID.nextval  into :b0:b1  from DUAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4393;
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


	
	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("get_appl_machine : Selecting WS Id from LI_TXNWSID sequence failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_appl_machine : Selecting WS Id from LI_TXNWSID sequence failed ");
		sprintf(excep_log.error_msg, "get_appl_machine : Selecting WS Id from LI_TXNWSID sequence failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	if (ws_id_ind == 0)
	{
		setnull(ws_id);
		strcpy(appl_ws_id, ws_id.arr);
	}

#ifdef DEBUG
	userlog("get_appl_machine : WS Id - %s", appl_ws_id);
	userlog("get_appl_machine : User Id - %s", appl_user_id);
#endif

	return SUCCESS;
}

/**********************************************************************************/
/* Function Name: upd_unclaimed_card_details()         							  */
/* Description	: This function sends the Surrender update request to JPN legacy  */
/* Input		: Request buffer												  */
/* Return Values: SUCCESS/Error code											  */
/* Limitations	: None															  */
/**********************************************************************************/	

int upd_unclaimed_card_details(JPN_UPDATE_REQ_T *req, char *jpn_branch_code, int msgid,LI_P_HEADER_T hdr,void * ctx) //LI_P_HEADER_T hdr added by kasi on 11/08/06 to remove global scope.
{
	struct sqlca sqlca = {0}; // added on 01/03/06
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char appl_id[APP_ID_SIZE] = {0};
	char kpt_number[KPT_SIZE] = {0};
	int gmpc_version = 0;
	char surrender_date[DATE_SIZE] = {0};
	char surrender_code = 0;
	char surrender_stat = 0;
	char pol_army_join_date[DATE_SIZE] = {0};
	char pol_army_code = 0;
	/* varchar id_no[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } id_no
 = {0};

	char id_type[ID_TYPE_SIZE] = {0};
	/* varchar passport_no[PASSPORT_NO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } passport_no
 = {0};

	char country_migrate_date[DATE_SIZE] = {0};
	char kp15_issue_date[DATE_SIZE] = {0};
	char new_migration_country[COUNTRY_CODE_SIZE] = {0};
	/* varchar ws_id[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } ws_id
 = {0};

	char appl_ws_id[WS_ID_SIZE] = {"\0"};
	
	short kpt_number_ind = -1;
	short gmpc_version_ind = -1;
	short surrender_date_ind = -1;
	short surrender_code_ind = -1;
	short surrender_stat_ind = -1;
	short pol_army_join_date_ind = -1;
	short pol_army_code_ind = -1;
	short id_no_ind = -1;
	short id_type_ind = -1;
	short passport_no_ind = -1;
	short country_migrate_date_ind = -1;
	short kp15_issue_date_ind = -1;
	short new_migration_country_ind = -1;
	short ws_id_ind = -1;

	char branch_code[7] = {0};
	/* varchar reason_desc[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } reason_desc
 = {0};

	short reason_desc_ind = -1;
	/* varchar reject_code[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } reject_code
 = {0};

	short reject_code_ind = -1;	

	char user_id[9] = {0};
	char leg_msgid[MSG_ID_SIZE] = {0};

	char   leg_header_date[DATE_TIME_SIZE] = {0};
	short  leg_header_date_ind = -1;
	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	LI_JPN_GMPC_SURRENDER_REQ_T surrend_req;
	unsigned char leg_msg_id[MSG_ID_SIZE];
	int error_code = 0;
	int ret_code = 0;
	int count = 0;

	unsigned char pReplyMsg[LI_REPLY_MSG_SIZE];
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE];
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	
	


	memset(&hdr, 0, sizeof(LI_P_HEADER_T));
	memset(&surrend_req, 0, sizeof(LI_JPN_GMPC_SURRENDER_REQ_T));
	
	strcpy(appl_id, req->header.application_id);

	/* EXEC SQL SELECT KPTNO,CARDVERSIONNO,TO_CHAR(SURRENDERDATE,'DDMMYYYY'),
					SURRENDERCODE,SURRENDERSTAT,TO_CHAR(POLMILITARYJOINDATE,'DDMMYYYY'),
					POLMILITARYCODE,IDNO,IDTYPE, PASSPORTNO,TO_CHAR(MIGRATEDATE,'DDMMYYYY'),
					TO_CHAR(KPISSUEDATE,'DDMMYYYY'),MIGRATECOUNTRY
			 INTO	:kpt_number:kpt_number_ind,:gmpc_version:gmpc_version_ind,
					:surrender_date:surrender_date_ind,
					:surrender_code:surrender_code_ind, :surrender_stat:surrender_stat_ind,
					:pol_army_join_date:pol_army_join_date_ind,
					:pol_army_code:pol_army_code_ind, :id_no:id_no_ind,:id_type:id_type_ind ,
					:passport_no:passport_no_ind,
					:country_migrate_date:country_migrate_date_ind, 
					:kp15_issue_date:kp15_issue_date_ind,
					:new_migration_country:new_migration_country_ind 
			FROM APPNT_SURREND_DETAILS
			WHERE APPLID=:appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select KPTNO ,CARDVERSIONNO ,TO_CHAR(SURRENDERDATE,'DDMMYYYY\
') ,SURRENDERCODE ,SURRENDERSTAT ,TO_CHAR(POLMILITARYJOINDATE,'DDMMYYYY') ,POL\
MILITARYCODE ,IDNO ,IDTYPE ,PASSPORTNO ,TO_CHAR(MIGRATEDATE,'DDMMYYYY') ,TO_CH\
AR(KPISSUEDATE,'DDMMYYYY') ,MIGRATECOUNTRY into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b\
8:b9,:b10:b11,:b12:b13,:b14:b15,:b16:b17,:b18:b19,:b20:b21,:b22:b23,:b24:b25  \
from APPNT_SURREND_DETAILS where APPLID=:b26";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4412;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)kpt_number;
 sqlstm.sqhstl[0] = (unsigned int  )13;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&kpt_number_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&gmpc_version;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&gmpc_version_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)surrender_date;
 sqlstm.sqhstl[2] = (unsigned int  )9;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&surrender_date_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&surrender_code;
 sqlstm.sqhstl[3] = (unsigned int  )1;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&surrender_code_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&surrender_stat;
 sqlstm.sqhstl[4] = (unsigned int  )1;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&surrender_stat_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)pol_army_join_date;
 sqlstm.sqhstl[5] = (unsigned int  )9;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&pol_army_join_date_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&pol_army_code;
 sqlstm.sqhstl[6] = (unsigned int  )1;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&pol_army_code_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&id_no;
 sqlstm.sqhstl[7] = (unsigned int  )18;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&id_no_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)id_type;
 sqlstm.sqhstl[8] = (unsigned int  )3;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&id_type_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&passport_no;
 sqlstm.sqhstl[9] = (unsigned int  )18;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&passport_no_ind;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)country_migrate_date;
 sqlstm.sqhstl[10] = (unsigned int  )9;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)&country_migrate_date_ind;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)kp15_issue_date;
 sqlstm.sqhstl[11] = (unsigned int  )9;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)&kp15_issue_date_ind;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)new_migration_country;
 sqlstm.sqhstl[12] = (unsigned int  )5;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)&new_migration_country_ind;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)appl_id;
 sqlstm.sqhstl[13] = (unsigned int  )20;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)0;
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



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("upd_unclaimed_card_details : Select from APPNT_SURREND_DETAILS failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"Upd_Unclaimed_details : Select from APPNT_SURREND_DETAILS failed ");
		sprintf(excep_log.error_msg, "Upd_Unclaimed_details : Select from APPNT_SURREND_DETAILS failed:%s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	setlen(passport_no);
	setnull(passport_no);

#ifdef DEBUG
	userlog("upd_unclaimed_card_details : KPT - %s", kpt_number);
	userlog("upd_unclaimed_card_details : GMPC version - %d", gmpc_version);
	userlog("upd_unclaimed_card_details : Surrend date - %s", surrender_date);
	userlog("upd_unclaimed_card_details : Surrend code - %c", surrender_code);
	userlog("upd_unclaimed_card_details : Surrend stat - %c", surrender_stat);
	userlog("upd_unclaimed_card_details : Police join date - %s", pol_army_join_date);
	userlog("upd_unclaimed_card_details : Pol/Army code - %c", pol_army_code);
	userlog("upd_unclaimed_card_details : Id no - %s", id_no.arr);
	userlog("upd_unclaimed_card_details : Id Type - %s", id_type);
	userlog("upd_unclaimed_card_details : Passport no - %s", passport_no.arr);
	userlog("upd_unclaimed_card_details : Country migrate date - %s", country_migrate_date);
	userlog("upd_unclaimed_card_details : KP15 issue date - %s", kp15_issue_date);
	userlog("upd_unclaimed_card_details : Migration country - %s", new_migration_country);
#endif

/* Commented for IJPN as we are not using this anymore 
	/* Call interface function to open connection with MQSeries 

	ret_code = li_init(LI_UPD_GMPC_SURRENDER_INFO);

	if (ret_code != GMPC_GOOD)
	{
#ifdef DEBUG
		userlog("upd_unclaimed_card_details : li_init failed");
#endif
		strcpy(prog_log.remarks,"upd_unclaimed_card_details : Unable to connect to MQSeries interface");
		strcpy(excep_log.error_msg, "upd_unclaimed_card_details : Unable to connect to MQSeries interface");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		return ret_code;
	}

#ifdef DEBUG
	userlog("upd_unclaimed_card_details : li init successfull");  
#endif
end IJPN */

	/* get the legacy transaction date and time */
	
	/* EXEC SQL SELECT TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') 
			INTO :leg_header_date:leg_header_date_ind FROM DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') into :b0:b1  fro\
m DUAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4483;
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


	
	userlog("leg_header_date_ind : %d",leg_header_date_ind);
	userlog("leg_header_date : %s",leg_header_date);


	if(leg_header_date_ind == 0)
	{
		strncpy(hdr.trans_date, leg_header_date, 8);
		hdr.trans_date[DATE_SIZE - 1] = '\0';

		strncpy(hdr.trans_time, leg_header_date + 9, 6);
		hdr.trans_time[TIME_SIZE - 1] = '\0';
	}



	/* EXEC SQL SELECT LITXNWSID.NEXTVAL 	INTO :ws_id:ws_id_ind
	FROM  DUAL ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select LITXNWSID.nextval  into :b0:b1  from DUAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4502;
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


	
	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("upd_unclaimed_card_details : Selecting WS Id from LI_TXNWSID sequence failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"upd_unclaimed_card_details : Selecting WS Id from LI_TXNWSID sequence failed ");
		sprintf(excep_log.error_msg, "upd_unclaimed_card_details : Selecting WS Id from LI_TXNWSID sequence failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	if (ws_id_ind == 0)
	{
		setnull(ws_id);
		strcpy(appl_ws_id, ws_id.arr);
		strcpy(hdr.workstation_id,ws_id.arr);
	}

	/* Populate the buffer to be sent to legacy interface	*/
	/* commented on 04/06/2004 by shiva.p due to workstation id duplicate key */
	/* strcpy(hdr.workstation_id, req->header.workstation_id); */
	
	strcpy(hdr.user_id, req->header.user_id);
	strcpy(hdr.gsc_no, jpn_branch_code);
	
	/* Copy the surrender details */
	if(kpt_number_ind==0)
	{
		strcpy(surrend_req.kpt_number,kpt_number);
	}
	if(gmpc_version_ind==0)
	{
		surrend_req.gmpc_version = gmpc_version;
	}
	if(surrender_date_ind == 0)
	{
		strcpy(surrend_req.surrender_date, surrender_date);
	}
	if(surrender_code_ind == 0)
	{
		surrend_req.surrender_code = surrender_code;
	}
	if(pol_army_join_date_ind == 0)
	{
		strcpy(surrend_req.pol_army_join_date,pol_army_join_date);
	}
	if(pol_army_code_ind == 0 )
	{
		surrend_req.pol_army_code = pol_army_code;
	}
	if(id_no_ind == 0 )
	{
		setnull(id_no);
		strcpy(surrend_req.police_army_no, id_no.arr);
	}
	if(passport_no_ind == 0)
	{
		strcpy(surrend_req.passport_no, passport_no.arr);
	}
	if(country_migrate_date_ind == 0)
	{
		strcpy(surrend_req.country_migrate_date, country_migrate_date);
	}
	if(kp15_issue_date_ind == 0 )
	{
		strcpy(surrend_req.kp15_issue_date, kp15_issue_date);
	}
	if(new_migration_country_ind == 0)
	{
		strcpy(surrend_req.new_migration_country,new_migration_country);
	}

	sErrMessage[0] = '\0';
	reject_code.arr[0] = '\0';
	reason_desc.arr[0] = '\0';
	leg_msg_id[0] = '\0';

	/* if ((ret_code = li_jpn_gmpc_surrender_p(hdr, surrend_req, leg_msg_id, &error_code)) != GMPC_GOOD) */
	ret_code = li_jpn_gmpc_surrender_p(hdr, surrend_req, leg_msg_id, &error_code, pReplyMsg, &iReplyMsgLen, sErrMessage);

	userlog("upd_unclaimed_card_details (li_jpn_gmpc_surrender_p) : ret_code : %d",ret_code);

	if(ret_code != GMPC_GOOD)
	{
#ifdef DEBUG
		userlog("upd_unclaimed_card_details : Unable to put the GMPC surrender update request to JPN: %d", error_code);
#endif
		strcpy(prog_log.remarks,"upd_unclaimed_card_details : Unable to put the GMPC surrender update request to JPN");
		sprintf(excep_log.error_msg, "upd_unclaimed_card_details : Unable to put the GMPC surrender update request to JPN: Error code - %d", error_code);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);

		if(leg_msg_id != NULL && strlen(leg_msg_id) > 20)
		strcpy(leg_msgid, leg_msg_id);

	
		strncpy(reject_code.arr,sErrMessage,8);
		setlen(reject_code);

		userlog("reject_code : %s",reject_code.arr);

		if(reject_code.arr[0] != '\0')
			reject_code_ind = 0;

		strcpy(reason_desc.arr,sErrMessage);
		setlen(reason_desc);

		userlog("reason_desc : %s",reason_desc.arr);

		if(reason_desc.arr[0] != '\0')
			reason_desc_ind = 0;

		strcpy(user_id, req->header.user_id);
		strcpy(branch_code, req->header.branch_code);
	
		/* update with LEGREQSTAT = -2, rejectcode and reason desc value when li_put failed*/
		/* EXEC SQL UPDATE IJPN_LEGACY_REQUEST 
		SET BRANCHCODE     = :branch_code,
			LEGMSGID       = :leg_msgid,
			LEGREJCODE     = :reject_code:reject_code_ind,
			LEGREJREASON   = :reason_desc:reason_desc_ind,
			LEGREQDATETIME =  SYSDATE,
			LEGREQSTAT     = -2,			
			USERID         = :user_id,			
			TXNWSID        = :appl_ws_id
			WHERE APPLID   = :appl_id 
			AND LEGREQMSGID= :msgid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update IJPN_LEGACY_REQUEST  set BRANCHCODE=:b0,LEGMSGID=:b1\
,LEGREJCODE=:b2:b3,LEGREJREASON=:b4:b5,LEGREQDATETIME=SYSDATE,LEGREQSTAT=(-2),\
USERID=:b6,TXNWSID=:b7 where (APPLID=:b8 and LEGREQMSGID=:b9)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )4521;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)branch_code;
  sqlstm.sqhstl[0] = (unsigned int  )7;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)leg_msgid;
  sqlstm.sqhstl[1] = (unsigned int  )25;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&reject_code;
  sqlstm.sqhstl[2] = (unsigned int  )11;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&reject_code_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&reason_desc;
  sqlstm.sqhstl[3] = (unsigned int  )163;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&reason_desc_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)user_id;
  sqlstm.sqhstl[4] = (unsigned int  )9;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)appl_ws_id;
  sqlstm.sqhstl[5] = (unsigned int  )16;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)appl_id;
  sqlstm.sqhstl[6] = (unsigned int  )20;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&msgid;
  sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
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


			
			if (SQLCODE != 0 && SQLCODE != 1403)
			{
			#ifdef DEBUG
				userlog("upd_card_details : Updateing IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON failed : %s", SQLMSG);
			#endif
				strcpy(prog_log.remarks,"upd_appnt_demo_info : Updateing IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON failed ");
				sprintf(excep_log.error_msg, "upd_appnt_demo_info : Updateing IJPN_LEGACY_REQUEST failed with LEGREJCODE and LEGREJREASON : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);				
			}

			#ifdef DEBUG
				userlog("upd_card_details : Updated IJPN_LEGACY_REQUEST with LEGREJCODE and LEGREJREASON : %s", SQLMSG);
			#endif


		return error_code;

	}

/*	strcpy(leg_msgid, leg_msg_id); */
		
#ifdef DEBUG
	userlog("upd_unclaimed_card_details : Legecy mesg id - %s", leg_msg_id);
#endif 

	if((ret_code = update_legacy_req(req, msgid, leg_msg_id, appl_ws_id,ctx)) != SUCCESS)
	{
#ifdef DEBUG
		userlog("upd_unclaimed_card_details: update_legacy_req() failed with %d", ret_code);
#endif 

		return ret_code;
	}

	return SUCCESS;
}


/********************************************************************/
/* Function Name:get_appnt_jpn_info_data		 					*/
/* Description	:gets data to send to NRS update message            */
/* Input		:Header, LI_NRS_UPDATE_REQ_T struct				    */   
/* Return Values:SUCCESS OR FAILURE									*/
/********************************************************************/
int get_appnt_jpn_info_data(HEADER_T header, LI_NRS_UPDATE_REQ_T *nrs_data,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 10/03/06
	char sqlmsg[SQL_MSG_SIZE] = {"\0"}; // added on 01/08/06

	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char applid[APP_ID_SIZE] = {0};           
	
	/* varchar idno[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } idno
 = {0};

	char    idtype[ID_TYPE_SIZE]={0};
	char	txncode[LEGTXNCODE_SIZE]={0}; 
	/* varchar	kpp_no[KPP_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } kpp_no
 = {0};
 
	/* varchar	current_long_name[LONG_NAME_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[151]; } current_long_name
 = {0};

	/* varchar	gmpc_short_name1[GMPC_SNAME1_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[31]; } gmpc_short_name1
 = {0};

	/* varchar	gmpc_short_name2[GMPC_SNAME2_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[31]; } gmpc_short_name2
 = {0};

	/* varchar	gmpc_short_name3[GMPC_SNAME3_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[21]; } gmpc_short_name3
 = {0};

	/* varchar address1[ADDRESS_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[41]; } address1
 = {0};

	/* varchar address2[ADDRESS_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[41]; } address2
 = {0};

	/* varchar address3[ADDRESS_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[41]; } address3
 = {0};

	char    post_code[POST_CODE_SIZE]={0};
	int     city_code=0;
	char    state_code[STATE_CODE_SIZE]={0};
	/* varchar dob[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } dob
 = {0};

	char	unknown_birth_ind='\0';
	char	birth_place_code[BIRTH_PLACE_CODE_SIZE]={0};
	char    gender = '\0';
	char	religion='\0';
	char	race[RACE_CODE_SIZE]={0};
	char	hk_ind='\0';
	/* varchar	gmpc_remarks1[REMARK_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[61]; } gmpc_remarks1
 = {0};

	/* varchar	gmpc_remarks2[REMARK_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[61]; } gmpc_remarks2
 = {0};

	char	kt_ind[KT_CODE_SIZE]={0};
	char	resi_status='\0';
	char	art_color_code[ARTICLE_COLOR_CODE_SIZE]={0};
	char	pol_army_id='\0';	
	//varchar	police_army_no[ID_SIZE]={0};
	/* varchar	retire_date[DATE_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } retire_date
 = {0};

	char	citizen_nation_code[COUNTRY_CODE_SIZE]={0};
	char	birth_country_code[COUNTRY_CODE_SIZE]={0}; 
	/* varchar	appl_no[LEGAPPLID_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[25]; } appl_no
 = {0};


	char	father_idtype[ID_TYPE_SIZE]={0};
	/* varchar	father_idno[ID_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[16]; } father_idno
 = {0};

	char	mother_idtype[ID_TYPE_SIZE]={0};
	/* varchar	mother_idno[ID_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[16]; } mother_idno
 = {0};
 
	char	sponsor_idtype[ID_TYPE_SIZE]={0};
	/* varchar	sponsor_idno[ID_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[16]; } sponsor_idno
 = {0};
 
	/* varchar	sponsor_name[CURRLONGNAME_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[151]; } sponsor_name
 = {0};

	char	sponsor_relcode[RELATIONCODE_SIZE]={0};

	/* varchar	apply_place_cd[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } apply_place_cd
 = {0};
 
	/* varchar	reg_date[DATE_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } reg_date
 = {0};
	

	/* varchar imm_refer_no[IMM_REFER_NO_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[31]; } imm_refer_no
 = {0};

	/* varchar imm_refer_date[DATE_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } imm_refer_date
 = {0};

	/* varchar passport_no[PASSPORT_NO_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[16]; } passport_no
 = {0};

	/* varchar passort_issue_date[DATE_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } passort_issue_date
 = {0};

	/* varchar passort_issue_country[COUNTRY_CODE_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[5]; } passort_issue_country
 = {0};
		
	/* varchar malaysia_arrival_date[DATE_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } malaysia_arrival_date
 = {0};

	/* varchar passort_expiry_date[DATE_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } passort_expiry_date
 = {0};

	/* varchar entry_permit_no[ENTRY_PERMIT_NO_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[11]; } entry_permit_no
 = {0};

	int		nDocTypeCode=0;
	/* varchar military_id[MILITARY_ID_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[12]; } military_id
 = {0};

	/* varchar police_id[POLICE_ID_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[12]; } police_id
 = {0};

	/* varchar branch_code[7] = {0}; */ 
struct { unsigned short len; unsigned char arr[7]; } branch_code
 = {0};

	/* varchar  telephone_no[CONTACTNO_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[31]; } telephone_no
 = {0};
   // added on 18/04/06 for IJPN

	// added the following columns on 21/09/06 as per the new requirement
	char kptno[KPT_SIZE]={0};
	/* varchar status_date[DATE_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } status_date
 = {0};

	/* varchar operator_id[USER_ID_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } operator_id
 = {0};

	int  gmpc_version=-1;
	//char jpn_remarks1[REMARK_SIZE];
	//char jpn_remarks2[REMARK_SIZE];
	/* varchar probl_reason_code[REASON_CODE_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[6]; } probl_reason_code
 = {0};

	char indicator2='\0';
	int i=0,k=0,sflag=0;
	int txn_type = 0;  //Added by Salmi, Date 18th June 2020, CRAPPL-  SKP002/CR/2020 
	char txn_code = ' '; //Added by Salmi, Date 18th June 2020, CRAPPL-  SKP002/CR/2020

	short idno_ind = -1;
	short idtype_ind = -1;
	short txncode_ind = -1;
	short kpp_no_ind = -1;
	short current_long_name_ind = -1;
	short gmpc_short_name1_ind = -1;
	short gmpc_short_name2_ind = -1;
	short gmpc_short_name3_ind = -1;
	short address1_ind = -1;
	short address2_ind = -1;
	short address3_ind = -1;
	short post_code_ind = -1;
	short city_code_ind = -1;
	short state_code_ind = -1;
	short dob_ind = -1;
	short unknown_birth_ind_ind = -1;
	short birth_place_code_ind = -1;
	short gender_ind = -1;
	short religion_ind = -1;
	short race_ind = -1;
	short hk_ind_ind = -1;
	short gmpc_remarks1_ind = -1;
	short gmpc_remarks2_ind = -1;
	short kt_ind_ind = -1;
	short resi_status_ind = -1;
	short art_color_code_ind = -1;
	short pol_army_id_ind = -1;
	//short police_army_no_ind = -1;
	short retire_date_ind = -1;
	short citizen_nation_code_ind = -1;
	short birth_country_code_ind = -1;
	short appl_no_ind = -1;
	short father_idtype_ind = -1;
	short father_idno_ind = -1;
	short mother_idtype_ind  = -1;
	short mother_idno_ind = -1;
	short sponsor_idtype_ind = -1;
	short sponsor_idno_ind = -1;
	short sponsor_name_ind = -1;
	short sponsor_relcode_ind = -1;
	short apply_place_cd_ind = -1;
	short reg_date_ind = -1;	
	short imm_refer_no_ind = -1;
	short imm_refer_date_ind = -1;
	short passport_no_ind = -1;
	short passort_issue_date_ind = -1;
	short passort_issue_country_ind = -1;		
	short malaysia_arrival_date_ind = -1;
	short passort_expiry_date_ind = -1;
	short entry_permit_no_ind = -1;
	short nDocTypeCode_ind = -1;
	short military_id_ind = -1;
	short police_id_ind = -1;
	short branch_code_ind = -1;
	short telephone_no_ind = -1;   // added on 18/04/06 for IJPN

	// added the following columns on 21/09/06 as per the new requirement

	short kptno_ind = -1;
	short status_date_ind=-1;
	short operator_id_ind=-1;
	short gmpc_version_ind=-1;
	short jpn_remarks1_ind=-1;
	short jpn_remarks2_ind=-1;
	short probl_reason_code_ind=-1;
	short indicator2_ind=-1;
    short txn_type_ind = -1; //Added by Salmi, Date 18th June 2020, CRAPPL-  SKP002/CR/2020
	short txn_code_ind = -1; //Added by Salmi, Date 18th June 2020, CRAPPL-  SKP002/CR/2020

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	char idtype1[3]={0};
	int  len_idtype=0;
	int  dlkp_flag = 0;
	int  ret = 0;
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(applid, header.application_id);

	/*
	EXEC SQL
		SELECT KPTNO, RTRIM(IDTYPE), IDNUMBER, CURRLONGNAME, GMPCSHORTNAME1, 
		GMPCSHORTNAME2, ADDRESS1, ADDRESS2, ADDRESS3, POSTCODE, 
		CITYCODE, STATECODE, TO_CHAR(BIRTHDATE, 'DDMMYYYY'), 
		UNKNOWNBIRTHIND, RELIGIONCODE, RACECODE, GENDER, HKIND, 
		KTINDCODE, RESIDENTSTAT,  //COLOURARTICLECODE, FATHERIDTYPE, FATHERIDNO, MOTHERIDTYPE, MOTHERIDNO, 
		PERMITNO,	IMMREFNO, 
		TO_CHAR(IMMREFDATE,'DDMMYYYY'), TO_CHAR(IMMEXPIRYDATE,'DDMMYYYY'),
		PASSPORTNO, TO_CHAR(PASSPORTISSUEDATE,'DDMMYYYY'), 
		PASSPORTISSUECOUNTRY, TO_CHAR(RETIREMENTDATE,'DDMMYYYY'), //MILITARYID, POLICEID, 
		KPPNO,  //POLMILITARYCODE, RELATIONCODE, SPONSORIDTYPE, 
		//SPONSORIDNO, SPONSORCURRLONGNAME, BIRTHPLACECODE, 
		CITIZENNATIONCODE
		//PTWNO 
        INTO  :kptno:kptno_ind:idtype:idtype_ind,:idno:idno_ind,:current_long_name:current_long_name_ind,
			  :gmpc_short_name1:gmpc_short_name1_ind,:gmpc_short_name2:gmpc_short_name2_ind,
			  :address1:address1_ind,:address2:address2_ind,:address3:address3_ind,
			  :post_code:post_code_ind,:city_code:city_code_ind,
			  :state_code:state_code_ind,:dob:dob_ind,:unknown_birth_ind:unknown_birth_ind_ind,
			  :religion:religion_ind,:race:race_ind,:gender:gender_ind,
			  :hk_ind:hk_ind_ind,:kt_ind:kt_ind_ind,:resi_status:resi_status_ind,
			  //:art_color_code:art_color_code_ind,:father_idtype:father_idtype_ind,
			  //:father_idno:father_idno_ind,:mother_idtype:mother_idtype_ind,
			  //:mother_idno:mother_idno_ind,
			  :entry_permit_no:entry_permit_no_ind,
			  :imm_refer_no:imm_refer_no_ind,:imm_refer_date:imm_refer_date_ind,
			  :passort_expiry_date:passort_expiry_date_ind,
			  :passport_no:passport_no_ind,:passort_issue_date:passort_issue_date_ind,
			  :passort_issue_country:passort_issue_country_ind,
			  :retire_date:retire_date_ind,//:military_id:military_id_ind,
			  //:police_id:police_id_ind,
			  :kpp_no:kpp_no_ind,//:pol_army_id:pol_army_id_ind,
			  //:sponsor_relcode:sponsor_relcode_ind,:sponsor_idtype:sponsor_idtype_ind,
			  //:sponsor_idno:sponsor_idno_ind,:sponsor_name:sponsor_name_ind,
			  //:birth_place_code:birth_place_code_ind,
			  :citizen_nation_code:citizen_nation_code_ind
			  //:nDocTypeCode:nDocTypeCode_ind 
		FROM APPNT_JPN_INFO //APPL_MISSED_OPEX 
		WHERE APPLID = :applid;
	*/

		for(i=0;i<31;i++)
			imm_refer_no.arr[i] = '\0';

		for(i=0;i<16;i++)
		passport_no.arr[i] = '\0';

		/* EXEC SQL
		SELECT KPTNO, CURRLONGNAME, GMPCSHORTNAME1, 
		GMPCSHORTNAME2, GMPCSHORTNAME3, ADDRESS1, ADDRESS2, ADDRESS3, POSTCODE, 
		CITYCODE, STATECODE, TO_CHAR(BIRTHDATE, 'DDMMYYYY'), 
		UNKNOWNBIRTHIND, RELIGIONCODE, RACECODE, GENDER, HKIND, 
		KTINDCODE, RESIDENTSTAT,
		PERMITNO,	IMMREFNO, 
		TO_CHAR(IMMREFDATE,'DDMMYYYY'), TO_CHAR(IMMEXPDATE,'DDMMYYYY'),
		PASSPORTNO, TO_CHAR(PASSPORTISSUEDDATE,'DDMMYYYY'), 
		PASSPORTISSUECOUNTRY, TO_CHAR(RETIREMENTDATE,'DDMMYYYY'), 
		KPPNO, CITIZENNATIONCODE		
        INTO  :kptno:kptno_ind,:current_long_name:current_long_name_ind,
			  :gmpc_short_name1:gmpc_short_name1_ind,:gmpc_short_name2:gmpc_short_name2_ind,
              :gmpc_short_name3:gmpc_short_name3_ind,
			  :address1:address1_ind,:address2:address2_ind,:address3:address3_ind,
			  :post_code:post_code_ind,:city_code:city_code_ind,
			  :state_code:state_code_ind,:dob:dob_ind,:unknown_birth_ind:unknown_birth_ind_ind,
			  :religion:religion_ind,:race:race_ind,:gender:gender_ind,
			  :hk_ind:hk_ind_ind,:kt_ind:kt_ind_ind,:resi_status:resi_status_ind,			  
			  :entry_permit_no:entry_permit_no_ind,
			  :imm_refer_no:imm_refer_no_ind,:imm_refer_date:imm_refer_date_ind,
			  :passort_expiry_date:passort_expiry_date_ind,
			  :passport_no:passport_no_ind,:passort_issue_date:passort_issue_date_ind,
			  :passort_issue_country:passort_issue_country_ind,
			  :retire_date:retire_date_ind,			  
			  :kpp_no:kpp_no_ind,			  			  
			  :citizen_nation_code:citizen_nation_code_ind			   
		FROM APPNT_JPN_INFO 
		WHERE APPLID = :applid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select KPTNO ,CURRLONGNAME ,GMPCSHORTNAME1 ,GMPCSHORTNAME2 \
,GMPCSHORTNAME3 ,ADDRESS1 ,ADDRESS2 ,ADDRESS3 ,POSTCODE ,CITYCODE ,STATECODE ,\
TO_CHAR(BIRTHDATE,'DDMMYYYY') ,UNKNOWNBIRTHIND ,RELIGIONCODE ,RACECODE ,GENDER\
 ,HKIND ,KTINDCODE ,RESIDENTSTAT ,PERMITNO ,IMMREFNO ,TO_CHAR(IMMREFDATE,'DDMM\
YYYY') ,TO_CHAR(IMMEXPDATE,'DDMMYYYY') ,PASSPORTNO ,TO_CHAR(PASSPORTISSUEDDATE\
,'DDMMYYYY') ,PASSPORTISSUECOUNTRY ,TO_CHAR(RETIREMENTDATE,'DDMMYYYY') ,KPPNO \
,CITIZENNATIONCODE into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11,:b12:b13,:\
b14:b15,:b16:b17,:b18:b19,:b20:b21,:b22:b23,:b24:b25,:b26:b27,:b28:b29,:b30:b3\
1,:b32:b33,:b34:b35,:b36:b37,:b38:b39,:b40:b41,:b42:b43,:b44:b45,:b46:b47,:b48\
:b49,:b50:b51,:b52:b53,:b54:b55,:b56:b57  from APPNT_JPN_INFO where APPLID=:b5\
8";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )4568;
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
  sqlstm.sqhstv[1] = (         void  *)&current_long_name;
  sqlstm.sqhstl[1] = (unsigned int  )153;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&current_long_name_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&gmpc_short_name1;
  sqlstm.sqhstl[2] = (unsigned int  )33;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&gmpc_short_name1_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&gmpc_short_name2;
  sqlstm.sqhstl[3] = (unsigned int  )33;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&gmpc_short_name2_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&gmpc_short_name3;
  sqlstm.sqhstl[4] = (unsigned int  )23;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&gmpc_short_name3_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&address1;
  sqlstm.sqhstl[5] = (unsigned int  )43;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&address1_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&address2;
  sqlstm.sqhstl[6] = (unsigned int  )43;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&address2_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&address3;
  sqlstm.sqhstl[7] = (unsigned int  )43;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&address3_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)post_code;
  sqlstm.sqhstl[8] = (unsigned int  )6;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&post_code_ind;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&city_code;
  sqlstm.sqhstl[9] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)&city_code_ind;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)state_code;
  sqlstm.sqhstl[10] = (unsigned int  )3;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)&state_code_ind;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)&dob;
  sqlstm.sqhstl[11] = (unsigned int  )11;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)&dob_ind;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqhstv[12] = (         void  *)&unknown_birth_ind;
  sqlstm.sqhstl[12] = (unsigned int  )1;
  sqlstm.sqhsts[12] = (         int  )0;
  sqlstm.sqindv[12] = (         void  *)&unknown_birth_ind_ind;
  sqlstm.sqinds[12] = (         int  )0;
  sqlstm.sqharm[12] = (unsigned int  )0;
  sqlstm.sqadto[12] = (unsigned short )0;
  sqlstm.sqtdso[12] = (unsigned short )0;
  sqlstm.sqhstv[13] = (         void  *)&religion;
  sqlstm.sqhstl[13] = (unsigned int  )1;
  sqlstm.sqhsts[13] = (         int  )0;
  sqlstm.sqindv[13] = (         void  *)&religion_ind;
  sqlstm.sqinds[13] = (         int  )0;
  sqlstm.sqharm[13] = (unsigned int  )0;
  sqlstm.sqadto[13] = (unsigned short )0;
  sqlstm.sqtdso[13] = (unsigned short )0;
  sqlstm.sqhstv[14] = (         void  *)race;
  sqlstm.sqhstl[14] = (unsigned int  )5;
  sqlstm.sqhsts[14] = (         int  )0;
  sqlstm.sqindv[14] = (         void  *)&race_ind;
  sqlstm.sqinds[14] = (         int  )0;
  sqlstm.sqharm[14] = (unsigned int  )0;
  sqlstm.sqadto[14] = (unsigned short )0;
  sqlstm.sqtdso[14] = (unsigned short )0;
  sqlstm.sqhstv[15] = (         void  *)&gender;
  sqlstm.sqhstl[15] = (unsigned int  )1;
  sqlstm.sqhsts[15] = (         int  )0;
  sqlstm.sqindv[15] = (         void  *)&gender_ind;
  sqlstm.sqinds[15] = (         int  )0;
  sqlstm.sqharm[15] = (unsigned int  )0;
  sqlstm.sqadto[15] = (unsigned short )0;
  sqlstm.sqtdso[15] = (unsigned short )0;
  sqlstm.sqhstv[16] = (         void  *)&hk_ind;
  sqlstm.sqhstl[16] = (unsigned int  )1;
  sqlstm.sqhsts[16] = (         int  )0;
  sqlstm.sqindv[16] = (         void  *)&hk_ind_ind;
  sqlstm.sqinds[16] = (         int  )0;
  sqlstm.sqharm[16] = (unsigned int  )0;
  sqlstm.sqadto[16] = (unsigned short )0;
  sqlstm.sqtdso[16] = (unsigned short )0;
  sqlstm.sqhstv[17] = (         void  *)kt_ind;
  sqlstm.sqhstl[17] = (unsigned int  )3;
  sqlstm.sqhsts[17] = (         int  )0;
  sqlstm.sqindv[17] = (         void  *)&kt_ind_ind;
  sqlstm.sqinds[17] = (         int  )0;
  sqlstm.sqharm[17] = (unsigned int  )0;
  sqlstm.sqadto[17] = (unsigned short )0;
  sqlstm.sqtdso[17] = (unsigned short )0;
  sqlstm.sqhstv[18] = (         void  *)&resi_status;
  sqlstm.sqhstl[18] = (unsigned int  )1;
  sqlstm.sqhsts[18] = (         int  )0;
  sqlstm.sqindv[18] = (         void  *)&resi_status_ind;
  sqlstm.sqinds[18] = (         int  )0;
  sqlstm.sqharm[18] = (unsigned int  )0;
  sqlstm.sqadto[18] = (unsigned short )0;
  sqlstm.sqtdso[18] = (unsigned short )0;
  sqlstm.sqhstv[19] = (         void  *)&entry_permit_no;
  sqlstm.sqhstl[19] = (unsigned int  )13;
  sqlstm.sqhsts[19] = (         int  )0;
  sqlstm.sqindv[19] = (         void  *)&entry_permit_no_ind;
  sqlstm.sqinds[19] = (         int  )0;
  sqlstm.sqharm[19] = (unsigned int  )0;
  sqlstm.sqadto[19] = (unsigned short )0;
  sqlstm.sqtdso[19] = (unsigned short )0;
  sqlstm.sqhstv[20] = (         void  *)&imm_refer_no;
  sqlstm.sqhstl[20] = (unsigned int  )33;
  sqlstm.sqhsts[20] = (         int  )0;
  sqlstm.sqindv[20] = (         void  *)&imm_refer_no_ind;
  sqlstm.sqinds[20] = (         int  )0;
  sqlstm.sqharm[20] = (unsigned int  )0;
  sqlstm.sqadto[20] = (unsigned short )0;
  sqlstm.sqtdso[20] = (unsigned short )0;
  sqlstm.sqhstv[21] = (         void  *)&imm_refer_date;
  sqlstm.sqhstl[21] = (unsigned int  )11;
  sqlstm.sqhsts[21] = (         int  )0;
  sqlstm.sqindv[21] = (         void  *)&imm_refer_date_ind;
  sqlstm.sqinds[21] = (         int  )0;
  sqlstm.sqharm[21] = (unsigned int  )0;
  sqlstm.sqadto[21] = (unsigned short )0;
  sqlstm.sqtdso[21] = (unsigned short )0;
  sqlstm.sqhstv[22] = (         void  *)&passort_expiry_date;
  sqlstm.sqhstl[22] = (unsigned int  )11;
  sqlstm.sqhsts[22] = (         int  )0;
  sqlstm.sqindv[22] = (         void  *)&passort_expiry_date_ind;
  sqlstm.sqinds[22] = (         int  )0;
  sqlstm.sqharm[22] = (unsigned int  )0;
  sqlstm.sqadto[22] = (unsigned short )0;
  sqlstm.sqtdso[22] = (unsigned short )0;
  sqlstm.sqhstv[23] = (         void  *)&passport_no;
  sqlstm.sqhstl[23] = (unsigned int  )18;
  sqlstm.sqhsts[23] = (         int  )0;
  sqlstm.sqindv[23] = (         void  *)&passport_no_ind;
  sqlstm.sqinds[23] = (         int  )0;
  sqlstm.sqharm[23] = (unsigned int  )0;
  sqlstm.sqadto[23] = (unsigned short )0;
  sqlstm.sqtdso[23] = (unsigned short )0;
  sqlstm.sqhstv[24] = (         void  *)&passort_issue_date;
  sqlstm.sqhstl[24] = (unsigned int  )11;
  sqlstm.sqhsts[24] = (         int  )0;
  sqlstm.sqindv[24] = (         void  *)&passort_issue_date_ind;
  sqlstm.sqinds[24] = (         int  )0;
  sqlstm.sqharm[24] = (unsigned int  )0;
  sqlstm.sqadto[24] = (unsigned short )0;
  sqlstm.sqtdso[24] = (unsigned short )0;
  sqlstm.sqhstv[25] = (         void  *)&passort_issue_country;
  sqlstm.sqhstl[25] = (unsigned int  )7;
  sqlstm.sqhsts[25] = (         int  )0;
  sqlstm.sqindv[25] = (         void  *)&passort_issue_country_ind;
  sqlstm.sqinds[25] = (         int  )0;
  sqlstm.sqharm[25] = (unsigned int  )0;
  sqlstm.sqadto[25] = (unsigned short )0;
  sqlstm.sqtdso[25] = (unsigned short )0;
  sqlstm.sqhstv[26] = (         void  *)&retire_date;
  sqlstm.sqhstl[26] = (unsigned int  )11;
  sqlstm.sqhsts[26] = (         int  )0;
  sqlstm.sqindv[26] = (         void  *)&retire_date_ind;
  sqlstm.sqinds[26] = (         int  )0;
  sqlstm.sqharm[26] = (unsigned int  )0;
  sqlstm.sqadto[26] = (unsigned short )0;
  sqlstm.sqtdso[26] = (unsigned short )0;
  sqlstm.sqhstv[27] = (         void  *)&kpp_no;
  sqlstm.sqhstl[27] = (unsigned int  )11;
  sqlstm.sqhsts[27] = (         int  )0;
  sqlstm.sqindv[27] = (         void  *)&kpp_no_ind;
  sqlstm.sqinds[27] = (         int  )0;
  sqlstm.sqharm[27] = (unsigned int  )0;
  sqlstm.sqadto[27] = (unsigned short )0;
  sqlstm.sqtdso[27] = (unsigned short )0;
  sqlstm.sqhstv[28] = (         void  *)citizen_nation_code;
  sqlstm.sqhstl[28] = (unsigned int  )5;
  sqlstm.sqhsts[28] = (         int  )0;
  sqlstm.sqindv[28] = (         void  *)&citizen_nation_code_ind;
  sqlstm.sqinds[28] = (         int  )0;
  sqlstm.sqharm[28] = (unsigned int  )0;
  sqlstm.sqadto[28] = (unsigned short )0;
  sqlstm.sqtdso[28] = (unsigned short )0;
  sqlstm.sqhstv[29] = (         void  *)applid;
  sqlstm.sqhstl[29] = (unsigned int  )20;
  sqlstm.sqhsts[29] = (         int  )0;
  sqlstm.sqindv[29] = (         void  *)0;
  sqlstm.sqinds[29] = (         int  )0;
  sqlstm.sqharm[29] = (unsigned int  )0;
  sqlstm.sqadto[29] = (unsigned short )0;
  sqlstm.sqtdso[29] = (unsigned short )0;
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

	userlog("get_appnt_jpn_info_data : sqlca.sqlcode,sqlmsg : %d, :%s",sqlca.sqlcode,sqlmsg);

	if(SQLCODE)
	{
		userlog("get_appnt_jpn_info_data : SELECT from APPL_MISSED_OPEX failed : %s",sqlmsg);
		strcpy(prog_log.remarks,"get_appnt_jpn_info_data : SELECT from APPL_MISSED_OPEX failed");
		sprintf(excep_log.error_msg,"get_kptchg_data : SELECT from APPL_MISSED_OPEX failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;
		log_error(ctx);

   	    return SELECT_ERROR;
	}


	/* EXEC SQL SELECT RTRIM(IDTYPE), IDNO, TO_CHAR(APPLDATE,'DDMMYYYY'),CONTACTNO, LEGAPPLID, BRANCHCODE, 
		USERID,APPLPRIORITY
        INTO :idtype:idtype_ind,:idno:idno_ind,:reg_date:reg_date_ind,:telephone_no:telephone_no_ind,:appl_no:appl_no_ind,
			  :branch_code:branch_code_ind,operator_id:operator_id_ind,:indicator2:indicator2_ind
		FROM APPLICATION
		WHERE APPLID = :applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select RTRIM(IDTYPE) ,IDNO ,TO_CHAR(APPLDATE,'DDMMYYYY') ,CO\
NTACTNO ,LEGAPPLID ,BRANCHCODE ,USERID ,APPLPRIORITY into :b0:b1,:b2:b3,:b4:b5\
,:b6:b7,:b8:b9,:b10:b11,:b12:b13,:b14:b15  from APPLICATION where APPLID=:b16";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4703;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
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
 sqlstm.sqhstv[2] = (         void  *)&reg_date;
 sqlstm.sqhstl[2] = (unsigned int  )11;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&reg_date_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&telephone_no;
 sqlstm.sqhstl[3] = (unsigned int  )33;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&telephone_no_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&appl_no;
 sqlstm.sqhstl[4] = (unsigned int  )27;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&appl_no_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&branch_code;
 sqlstm.sqhstl[5] = (unsigned int  )9;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&branch_code_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&operator_id;
 sqlstm.sqhstl[6] = (unsigned int  )11;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&operator_id_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&indicator2;
 sqlstm.sqhstl[7] = (unsigned int  )1;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&indicator2_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)applid;
 sqlstm.sqhstl[8] = (unsigned int  )20;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)0;
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



	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	userlog("get_appnt_jpn_info_data : SELECT FROM APPLICATION sqlca.sqlcode,sqlmsg : %d, :%s",sqlca.sqlcode,sqlmsg);

	if((SQLCODE != 0) && (SQLCODE != 1403))
	{
		userlog("get_appnt_jpn_info_data : SELECT from APPLICATION failed : %s",sqlmsg);
		strcpy(prog_log.remarks,"get_appnt_jpn_info_data : SELECT from APPLICATION failed");
		sprintf(excep_log.error_msg,"get_kptchg_data : SELECT from APPLICATION failed : %s", SQLMSG);		
	}


	setnull(idno);
	setnull(current_long_name);
	setnull(gmpc_short_name1);
	setnull(gmpc_short_name2);
	setnull(gmpc_short_name3);
	setnull(address1);
	setnull(address2);
	setnull(address3);
	setnull(dob);
	setnull(military_id);
	setnull(police_id);
	setnull(father_idno);
	setnull(mother_idno);
	setnull(sponsor_idno);
	setnull(sponsor_name);
	setnull(entry_permit_no);
	setnull(imm_refer_no);
	setnull(imm_refer_date);
	setnull(passort_expiry_date);
	setnull(passport_no);
	setnull(passort_issue_date);
	setnull(passort_issue_country);
	setnull(retire_date);
	setnull(kpp_no);	
	setnull(reg_date);	
	setnull(telephone_no);
	//setnull(police_army_no);
	setnull(appl_no);
	setnull(branch_code);
	setnull(operator_id);
	

	#ifdef DEBUG
		userlog("get_appnt_jpn_info_data : kptno : %s",kptno);
		userlog("get_appnt_jpn_info_data : idtype : %s",idtype);
		userlog("get_appnt_jpn_info_data : idno : %s",idno.arr);
		userlog("get_appnt_jpn_info_data : current_long_name : %s",current_long_name.arr);
		userlog("get_appnt_jpn_info_data : gmpc_short_name1 : %s",gmpc_short_name1.arr);
		userlog("get_appnt_jpn_info_data : gmpc_short_name2 : %s",gmpc_short_name2.arr);
		userlog("get_appnt_jpn_info_data : gmpc_short_name3 : %s",gmpc_short_name3.arr);
		userlog("get_appnt_jpn_info_data : kpp_no : %s",kpp_no.arr);
		userlog("get_appnt_jpn_info_data : address1 : %s",address1.arr);
		userlog("get_appnt_jpn_info_data : address2 : %s",address2.arr);
		userlog("get_appnt_jpn_info_data : address3 : %s",address2.arr);
		userlog("get_appnt_jpn_info_data : post_code : %s",post_code);
		userlog("get_appnt_jpn_info_data : city_code : %d",city_code);
		userlog("get_appnt_jpn_info_data : state_code : %s",state_code);
		userlog("get_appnt_jpn_info_data : date of birth : %s",dob.arr);
		userlog("get_appnt_jpn_info_data : unknown birth ind : %c",unknown_birth_ind);
		userlog("get_appnt_jpn_info_data : religion : %c",religion);
		userlog("get_appnt_jpn_info_data : race code : %s",race);
		userlog("get_appnt_jpn_info_data : gender : %c",gender);
		userlog("get_appnt_jpn_info_data : hk_ind : %c",hk_ind);
		userlog("get_appnt_jpn_info_data : gmpc_remarks1 : %s",gmpc_remarks1.arr);
		userlog("get_appnt_jpn_info_data : gmpc_remarks2 : %s",gmpc_remarks2.arr);
		userlog("get_appnt_jpn_info_data : kt_ind : %s",kt_ind);
		userlog("get_appnt_jpn_info_data : resi_status : %c",resi_status);
		userlog("get_appnt_jpn_info_data : art_color_code : %s",art_color_code);
		userlog("get_appnt_jpn_info_data : pol_army_id : %c",pol_army_id);
		userlog("get_appnt_jpn_info_data : police_id : %s",police_id.arr);
		userlog("get_appnt_jpn_info_data : military_id : %s",military_id.arr);
		userlog("get_appnt_jpn_info_data : retire_date : %s",retire_date.arr);
		userlog("get_appnt_jpn_info_data : citizen_nation_code : %s",citizen_nation_code);
		userlog("get_appnt_jpn_info_data : birth_country_code : %s",birth_country_code);		
		userlog("get_appnt_jpn_info_data : father_idtype : %s",father_idtype);
		userlog("get_appnt_jpn_info_data : father_idno : %s",father_idno.arr);
		userlog("get_appnt_jpn_info_data : mother_idtype : %s",mother_idtype);
		userlog("get_appnt_jpn_info_data : mother_idno : %s",mother_idno.arr);
		userlog("get_appnt_jpn_info_data : sponsor_idtype : %s",sponsor_idtype);
		userlog("get_appnt_jpn_info_data : sponsor_idno : %s",sponsor_idno.arr);
		userlog("get_appnt_jpn_info_data : sponsor_name : %s",sponsor_name.arr);
		userlog("get_appnt_jpn_info_data : sponsor_relcode : %s",sponsor_relcode);
		userlog("get_appnt_jpn_info_data : apply_place_cd : %s",apply_place_cd.arr);
		userlog("get_appnt_jpn_info_data : reg_date : %s",reg_date.arr);
		userlog("get_appnt_jpn_info_data : imm_refer_no : %s",imm_refer_no.arr);
		userlog("get_appnt_jpn_info_data : imm_refer_date : %s",imm_refer_date.arr);
		userlog("get_appnt_jpn_info_data : passport_no : %s",passport_no.arr);
		userlog("get_appnt_jpn_info_data : passort_issue_date : %s",passort_issue_date.arr);
		userlog("get_appnt_jpn_info_data : passort_issue_country : %s",passort_issue_country.arr);
		userlog("get_appnt_jpn_info_data : malaysia_arrival_date : %s",malaysia_arrival_date.arr);
		userlog("get_appnt_jpn_info_data : passort_expiry_date : %s",passort_expiry_date.arr);
		userlog("get_appnt_jpn_info_data : entry_permit_no : %s",entry_permit_no.arr);
		userlog("get_appnt_jpn_info_data : nDocTypeCode : %d",nDocTypeCode);
		userlog("get_appnt_jpn_info_data : reg_date : %s",reg_date.arr);
		userlog("get_appnt_jpn_info_data : telephone_no : %s",telephone_no.arr);
		userlog("get_appnt_jpn_info_data : appl_no : %s",appl_no.arr);
		userlog("get_appnt_jpn_info_data : branch_code : %s",branch_code.arr);
		userlog("get_appnt_jpn_info_data : operator_id : %s",operator_id.arr);
		userlog("get_appnt_jpn_info_data : indicator2 : %c",indicator2);
	#endif

	
	if((kptno_ind == 0) && (kptno[0] != ' '))
		strcpy(nrs_data->misc.kptno,kptno);


	if((idtype_ind == 0) && (idtype[0] != ' '))
	{
		if(idtype[1] == ' ')
			idtype[1] = '\0';

		len_idtype = strlen(idtype);
		userlog("strlen(idtype) : %d",len_idtype);

		if(len_idtype == 1)
		{
			//strcpy(idtype1,"0");
			//strncat(idtype1,idtype[0],1);
			idtype1[0] = '0';
			idtype1[1] = idtype[0];
			idtype1[2] = '\0';
			strcpy(nrs_data->misc.idtype,idtype1);
			userlog("idtype1 : %s",idtype1);
		}
		else
			strcpy(nrs_data->misc.idtype,idtype);
	}

	if((idno_ind == 0) && (idno.arr[0] != ' '))
		strcpy(nrs_data->misc.idno,idno.arr);

	if((current_long_name_ind == 0) && (current_long_name.arr[0] != ' '))
		strcpy(nrs_data->misc.current_long_name,current_long_name.arr);

	if((gmpc_short_name1_ind == 0) && (gmpc_short_name1.arr[0] != ' '))
		strcpy(nrs_data->misc.gmpc_short_name1,gmpc_short_name1.arr);

	if((gmpc_short_name2_ind == 0) && (gmpc_short_name2.arr[0] != ' '))
		strcpy(nrs_data->misc.gmpc_short_name2,gmpc_short_name2.arr);

	if((gmpc_short_name3_ind == 0) && (gmpc_short_name3.arr[0] != ' '))
		strcpy(nrs_data->misc.gmpc_short_name3,gmpc_short_name3.arr);

	if(address1_ind == 0)
		strcpy(nrs_data->new_address.address1,address1.arr);

	if(address2_ind == 0)
		strcpy(nrs_data->new_address.address2,address2.arr);

	if(address3_ind == 0)
		strcpy(nrs_data->new_address.address3,address3.arr);

	if(post_code_ind == 0)
		strcpy(nrs_data->new_address.post_code,post_code);

	if(city_code_ind == 0)
		nrs_data->new_address.city_code = city_code;
	else
		nrs_data->new_address.city_code = 9999;  // Added this part if city code is null we update it to 9999 as part of JRS 103
	                                             // Release 3.17 22/07/2009

	if(state_code_ind == 0)
		strcpy(nrs_data->new_address.state_code,state_code);

	if((dob_ind == 0) && (dob.arr[0] != ' '))
		strcpy(nrs_data->misc.dob, dob.arr);

	if(unknown_birth_ind_ind == 0)
		nrs_data->misc.unknown_birth_ind = unknown_birth_ind;

	if((religion_ind == 0) && (religion != ' '))
		nrs_data->misc.religion = religion;

	if((race_ind == 0) && (race[0] != ' '))
		strcpy(nrs_data->misc.race, race);

	if((gender_ind == 0) && (gender != ' '))
		nrs_data->misc.gender = gender;

	if((hk_ind_ind == 0) && (hk_ind != ' '))
		nrs_data->misc.hk_ind = hk_ind;

	if((kt_ind_ind == 0) && (kt_ind[0] != ' '))
		strcpy(nrs_data->misc.kt_ind,kt_ind);

	if((resi_status_ind == 0) && (resi_status != ' '))
		nrs_data->misc.resi_status = resi_status;
	
	if((art_color_code_ind == 0) && (art_color_code[0] != ' '))
		strcpy(nrs_data->misc.art_color_code,art_color_code);

	if(pol_army_id != '\0')
	{
		if(pol_army_id == 'P')
		{
			nrs_data->misc.pol_army_id = 'P';
			strcpy(nrs_data->misc.police_army_no,police_id.arr);
		}
		else if(pol_army_id == 'T')
		{
			nrs_data->misc.pol_army_id = 'T';
			strcpy(nrs_data->misc.police_army_no,military_id.arr);
		}
	}

	if((father_idtype_ind == 0) && (father_idtype[0] != ' '))
		strcpy(nrs_data->misc.father_idtype,father_idtype);

	if((father_idno_ind == 0) && (father_idno.arr[0] != ' '))
		strcpy(nrs_data->misc.father_idno,father_idno.arr);

	if((mother_idtype_ind == 0) && (mother_idtype[0] != ' '))
		strcpy(nrs_data->misc.mother_idtype,mother_idtype);

	if((mother_idno_ind == 0) && (mother_idno.arr[0] != ' '))
		strcpy(nrs_data->misc.mother_idno,mother_idno.arr);

	if((sponsor_idtype_ind == 0) && (sponsor_idtype[0] != ' '))
		strcpy(nrs_data->misc.sponsor_idtype,sponsor_idtype);

	if((sponsor_idno_ind == 0) && (sponsor_idno.arr[0] != ' '))
		strcpy(nrs_data->misc.sponsor_idno,sponsor_idno.arr);

	if((entry_permit_no_ind == 0) && (entry_permit_no.arr[0] != ' '))
		strcpy(nrs_data->pp_info.entry_permit_no,entry_permit_no.arr);

	//if((imm_refer_no_ind == 0) && (imm_refer_no.arr[0] != ' '))
	//	strcpy(nrs_data->pp_info.imm_refer_no,imm_refer_no.arr);


	// added this code on 21/02/07 to trim the null spaces for imm_refer_no at the end
	if((imm_refer_no_ind == 0) && ((imm_refer_no.arr[0] != '\0') && (imm_refer_no.arr[0] != ' ')))
	{
		sflag=0;
		for(k=0;k<31;k++)
		{
			if(imm_refer_no.arr[k] == ' ')
			{
				if((imm_refer_no.arr[k] == ' ') && (sflag == 1))
				{
					sflag=0;
					break;
				}
				else
				{					
					sflag=1;
				}
			}
			nrs_data->pp_info.imm_refer_no[k] = imm_refer_no.arr[k];
		}
		nrs_data->pp_info.imm_refer_no[k-1] = '\0';
	}


	if((imm_refer_date_ind == 0) && (imm_refer_date.arr[0] != ' '))
		strcpy(nrs_data->pp_info.imm_refer_date,imm_refer_date.arr);

	if((passort_expiry_date_ind == 0) && (passort_expiry_date.arr[0] != ' '))
		strcpy(nrs_data->pp_info.passort_expiry_date,passort_expiry_date.arr);

	//if((passport_no_ind == 0) && (passort_issue_date.arr[0] != ' '))
	//	strcpy(nrs_data->pp_info.passport_no,passport_no.arr);

	// added this code on 21/02/07 to trim the null spaces for passport_no at the end
	if((passport_no_ind == 0) && ((passport_no.arr[0] != '\0') && (passport_no.arr[0] != ' ')))
	{
		sflag=0;
		for(k=0;k<16;k++)
		{
			if(passport_no.arr[k] == ' ')
			{
				if((passport_no.arr[k] == ' ') && (sflag == 1))
				{
					sflag=0;
					break;
				}
				else
				{					
					sflag=1;
				}
			}
			nrs_data->pp_info.passport_no[k] = passport_no.arr[k];
		}
		nrs_data->pp_info.passport_no[k-1] = '\0';
	}

	if(passort_issue_date_ind == 0)
		strcpy(nrs_data->pp_info.passort_issue_date,passort_issue_date.arr);

	if((passort_issue_country_ind == 0) && (passort_issue_country.arr[0] != ' '))
		strcpy(nrs_data->pp_info.passort_issue_country,passort_issue_country.arr);

	if((retire_date_ind == 0) && (retire_date.arr[0] != ' '))
		strcpy(nrs_data->misc.retire_date,retire_date.arr);
	
	if((kpp_no_ind == 0) && (kpp_no.arr[0] != ' '))
		strcpy(nrs_data->misc.kpp_no,kpp_no.arr);

	if((sponsor_relcode_ind == 0) && (sponsor_relcode[0] != ' '))
		strcpy(nrs_data->misc.sponsor_relcode,sponsor_relcode);

	if((sponsor_name_ind == 0) && (sponsor_name.arr[0] != ' '))
		strcpy(nrs_data->misc.sponsor_name,sponsor_name.arr);

	if((birth_place_code_ind == 0) && (birth_place_code[0] != ' '))
		strcpy(nrs_data->misc.birth_place_code,birth_place_code);

	if((citizen_nation_code_ind == 0) && (citizen_nation_code[0] != ' '))
		strcpy(nrs_data->misc.citizen_nation_code,citizen_nation_code);

	if(nDocTypeCode_ind == 0)
		nrs_data->pp_info.nDocTypeCode = nDocTypeCode;

	if((reg_date_ind == 0) && (reg_date.arr[0] != ' '))
		strcpy(nrs_data->misc.reg_date,reg_date.arr);

	if((appl_no_ind == 0) && (appl_no.arr[0] != ' '))
		strcpy(nrs_data->misc.appl_no,appl_no.arr);

	if((telephone_no_ind == 0) && (telephone_no.arr[0] != ' '))
		strcpy(nrs_data->misc.telephone_no,telephone_no.arr);

	// new columns added from here on 21/09/06
	if((reg_date_ind == 0) && (reg_date.arr[0] != ' '))
		strcpy(nrs_data->misc.status_date,reg_date.arr);

	if((operator_id_ind == 0) && (operator_id.arr[0] != ' '))
		strcpy(nrs_data->misc.operator_id,operator_id.arr);

	if((indicator2_ind == 0) && (indicator2 != ' '))
		nrs_data->misc.indicator2 = indicator2;

		userlog("applid[14] : %c",applid[14]);
		userlog("indicator2 : %c",indicator2);

		if((applid[14] == '4') || (applid[14] == '5'))
		{
			if(indicator2 == '0')
				nrs_data->misc.indicator2 = '3';
			else if(indicator2 == '1')
				nrs_data->misc.indicator2 = '4';
			else if(indicator2 == '2')
				nrs_data->misc.indicator2 = '5';
		}


	// for the branch_code get the BRANCHCODEJPN for apply_place_cd

	/* EXEC SQL SELECT BRANCHCODEJPN
			INTO :apply_place_cd:apply_place_cd_ind
			FROM BRANCH_INFO 
			WHERE BRANCHCODE = :branch_code; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select BRANCHCODEJPN into :b0:b1  from BRANCH_INFO where BRA\
NCHCODE=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4754;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&apply_place_cd;
 sqlstm.sqhstl[0] = (unsigned int  )11;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&apply_place_cd_ind;
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



	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	userlog("get_appnt_jpn_info_data : SELECT FROM BRANCH_INFO sqlca.sqlcode,sqlmsg : %d, :%s",sqlca.sqlcode,sqlmsg);

	if(SQLCODE)
	{
		userlog("get_appnt_jpn_info_data : SELECT from BRANCH_INFO failed : %s",sqlmsg);
		strcpy(prog_log.remarks,"get_appnt_jpn_info_data : SELECT from BRANCH_INFO failed");
		sprintf(excep_log.error_msg,"get_kptchg_data : SELECT from BRANCH_INFO failed : %s", SQLMSG);
		//excep_log.termination_flag = YES;
		//excep_log.severity = FATAL;
		//log_error(ctx);

   	    //return SELECT_ERROR;
	}

	setnull(apply_place_cd);

	#ifdef DEBUG		
		userlog("get_appnt_jpn_info_data : apply_place_cd(branchcodejpn) : %s",apply_place_cd.arr);
	#endif

	if((apply_place_cd_ind == 0) && (apply_place_cd.arr[0] != ' '))
		strcpy(nrs_data->misc.apply_place_cd,apply_place_cd.arr);
	

	/* EXEC SQL SELECT JPNREMARKS1, JPNREMARKS2 INTO :gmpc_remarks1:gmpc_remarks1_ind,
		:gmpc_remarks2:gmpc_remarks2_ind
		FROM APPNT_JPN_INFO 
		WHERE APPLID = :applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select JPNREMARKS1 ,JPNREMARKS2 into :b0:b1,:b2:b3  from APP\
NT_JPN_INFO where APPLID=:b4";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4777;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&gmpc_remarks1;
 sqlstm.sqhstl[0] = (unsigned int  )63;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&gmpc_remarks1_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&gmpc_remarks2;
 sqlstm.sqhstl[1] = (unsigned int  )63;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&gmpc_remarks2_ind;
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



	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	userlog("get_appnt_jpn_info_data : FROM APPNT_JPN_INFO sqlca.sqlcode,sqlmsg : %d, :%s",sqlca.sqlcode,sqlmsg);

	if(SQLCODE)
	{
		userlog("get_appnt_jpn_info_data : SELECT from APPNT_JPN_INFO failed : %s",sqlmsg);
		strcpy(prog_log.remarks,"get_appnt_jpn_info_data : SELECT from APPNT_JPN_INFO failed");
		sprintf(excep_log.error_msg,"get_kptchg_data : SELECT from APPNT_JPN_INFO failed : %s", SQLMSG);
		//excep_log.termination_flag = YES;
		//excep_log.severity = FATAL;
		//log_error(ctx);

   	    //return SELECT_ERROR;
	}

	setnull(gmpc_remarks1);
	setnull(gmpc_remarks2);

	#ifdef DEBUG
		userlog("get_appnt_jpn_info_data : gmpc_remarks1 : %s",gmpc_remarks1.arr);
		userlog("get_appnt_jpn_info_data : gmpc_remarks2 : %s",gmpc_remarks2.arr);
	#endif

	if((gmpc_remarks1_ind == 0) && (gmpc_remarks1.arr[0] != ' '))
		strcpy(nrs_data->misc.gmpc_remarks1,gmpc_remarks1.arr);

	if((gmpc_remarks2_ind == 0) && (gmpc_remarks2.arr[0] != ' '))
		strcpy(nrs_data->misc.gmpc_remarks2,gmpc_remarks2.arr);

	if((gmpc_remarks1_ind == 0) && (gmpc_remarks1.arr[0] != ' '))
		strcpy(nrs_data->misc.jpn_remarks1,gmpc_remarks1.arr);

	if((gmpc_remarks2_ind == 0) && (gmpc_remarks2.arr[0] != ' '))
		strcpy(nrs_data->misc.jpn_remarks2,gmpc_remarks2.arr);

	txncode[0] = '\0';
	/* EXEC SQL SELECT LTRIM(RTRIM(LEGTXNCODE)) INTO :txncode:txncode_ind 
		FROM APPL_TXN
		WHERE APPLID = :applid
		AND TXNSERNO = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select LTRIM(RTRIM(LEGTXNCODE)) into :b0:b1  from APPL_TXN w\
here (APPLID=:b2 and TXNSERNO=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4804;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)txncode;
 sqlstm.sqhstl[0] = (unsigned int  )5;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&txncode_ind;
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



		sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);
	userlog("get_appnt_jpn_info_data : FROM APPL_TXN sqlca.sqlcode,sqlmsg : %d, :%s",sqlca.sqlcode,sqlmsg);

	if(SQLCODE)
	{
		userlog("get_appnt_jpn_info_data : SELECT from APPL_TXN failed : %s",sqlmsg);
		strcpy(prog_log.remarks,"get_appnt_jpn_info_data : SELECT from APPL_TXN failed");
		sprintf(excep_log.error_msg,"get_kptchg_data : SELECT from APPL_TXN failed : %s", SQLMSG);
		//excep_log.termination_flag = YES;
		//excep_log.severity = FATAL;
		//log_error(ctx);

   	    //return SELECT_ERROR;
	}

	#ifdef DEBUG
		userlog("get_appnt_jpn_info_data : txncode,txncode_ind : %s, %d",txncode,txncode_ind);		
	#endif

	//if((txncode_ind == 0) && (txncode[0] != ' '))
		  strncpy(nrs_data->misc.txncode,txncode,4);

	/* EXEC SQL SELECT CARDVERSIONNO INTO :gmpc_version:gmpc_version_ind
		FROM CARD_STATUS
		WHERE APPLID = :applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select CARDVERSIONNO into :b0:b1  from CARD_STATUS where APP\
LID=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4827;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&gmpc_version;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&gmpc_version_ind;
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



	if(SQLCODE)
	{
		userlog("get_appnt_jpn_info_data : SELECT from CARD_STATUS failed : %s",sqlmsg);
		strcpy(prog_log.remarks,"get_appnt_jpn_info_data : SELECT from CARD_STATUS failed");
		sprintf(excep_log.error_msg,"get_kptchg_data : SELECT from CARD_STATUS failed : %s", SQLMSG);
	}

	#ifdef DEBUG
		userlog("get_appnt_jpn_info_data : gmpc_version,gmpc_version_ind : %d, %d",gmpc_version,gmpc_version_ind);		
	#endif

	nrs_data->misc.gmpc_version = gmpc_version;

	/* EXEC SQL SELECT PROBLREASONCODE INTO :probl_reason_code:probl_reason_code_ind
		FROM PROBL_RECORD
		WHERE APPLID = :applid
		AND ROWNUM = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select PROBLREASONCODE into :b0:b1  from PROBL_RECORD where \
(APPLID=:b2 and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4850;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&probl_reason_code;
 sqlstm.sqhstl[0] = (unsigned int  )8;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&probl_reason_code_ind;
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



	if(SQLCODE)
	{

	}

	#ifdef DEBUG
		userlog("get_appnt_jpn_info_data : probl_reason_code,probl_reason_code_ind : %s, %d",probl_reason_code.arr,probl_reason_code_ind);		
	#endif

	if((probl_reason_code_ind == 0) && (probl_reason_code.arr[0] != ' '))
		  strcpy(nrs_data->misc.probl_reason_code,probl_reason_code.arr);

	//Added by Salmi, Date 18th June 2020, CRAPPL-  SKP002/CR/2020
	if(GMPC_GOOD != (ret = check_dlkp_trans(header.application_id, &dlkp_flag,ctx)))
	{
		userlog("get_appnt_jpn_info_data : check_dlkp_trans failed : %s",sqlmsg);
		strcpy(prog_log.remarks,"get_appnt_jpn_info_data : check_dlkp_trans failed");
		sprintf(excep_log.error_msg,"get_appnt_jpn_info_data : check_dlkp_trans failed failed : %s", SQLMSG);
	}

	if(dlkp_flag == 1)
	{
		/* EXEC SQL SELECT DECODE(A.TXNCODE,'128','Y','129','Y','N'), DECODE(SUBSTR(C.TXNDESC, 1, 12), 'KALI PERTAMA',1,'RAYUAN',2, 0)
			into :txn_code:txn_code_ind, txn_type:txn_type_ind 
			FROM APPL_TXN A, TXN_CODE B, LEG_TXNCODE_REL C
			WHERE A.APPLID = :applid
			AND A.TXNSERNO = 1
			AND B.TXNCODE = A.TXNCODE 
			AND A.TXNCODE = C.TXNCODE
			AND A.TXNCANCELCODE IS NULL; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 47;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select DECODE(A.TXNCODE,'128','Y','129','Y','N') ,DECODE(SU\
BSTR(C.TXNDESC,1,12),'KALI PERTAMA',1,'RAYUAN',2,0) into :b0:b1,:b2:b3  from A\
PPL_TXN A ,TXN_CODE B ,LEG_TXNCODE_REL C where ((((A.APPLID=:b4 and A.TXNSERNO\
=1) and B.TXNCODE=A.TXNCODE) and A.TXNCODE=C.TXNCODE) and A.TXNCANCELCODE is n\
ull )";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )4873;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&txn_code;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&txn_code_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&txn_type;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&txn_type_ind;
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



		if(SQLCODE)
		{
			userlog("get_appnt_jpn_info_data : SELECT from APPL_TXN, LEG_TXNCODE_REL failed : %s",sqlmsg);
			strcpy(prog_log.remarks,"get_appnt_jpn_info_data : SELECT from APPL_TXN, LEG_TXNCODE_REL failed");
			sprintf(excep_log.error_msg,"get_kptchg_data : SELECT from APPL_TXN, LEG_TXNCODE_REL failed : %s", SQLMSG);
		}

		if(txn_code == 'Y') //DllSabah
			nrs_data->misc.trans_type = 3;
		else
			nrs_data->misc.trans_type = txn_type;

	}
	else
	{
		nrs_data->misc.trans_type = 0;
	}

	#ifdef DEBUG
		userlog(" ");
		userlog("get_appnt_jpn_info_data : dlkp_flag %d", dlkp_flag);
		userlog("get_appnt_jpn_info_data : txn_code %c", txn_code);
		userlog("get_appnt_jpn_info_data : txn_type %d", txn_type);
	#endif

	
	//Added by Salmi, Date 18th June 2020, CRAPPL-  SKP002/CR/2020-End 

	#ifdef DEBUG
		userlog(" ");
		userlog("get_appnt_jpn_info_data : nrs_data->misc.idtype : %s",nrs_data->misc.idtype);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.idno : %s",nrs_data->misc.idno);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.txncode : %s",nrs_data->misc.txncode);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.current_long_name : %s",nrs_data->misc.current_long_name);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.gmpc_short_name1 : %s",nrs_data->misc.gmpc_short_name1);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.gmpc_short_name2 : %s",nrs_data->misc.gmpc_short_name2);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.kpp_no : %s",nrs_data->misc.kpp_no);
		userlog("get_appnt_jpn_info_data : nrs_data->new_address.address1 : %s",nrs_data->new_address.address1);
		userlog("get_appnt_jpn_info_data : nrs_data->new_address.address2 : %s",nrs_data->new_address.address2);
		userlog("get_appnt_jpn_info_data : nrs_data->new_address.address3 : %s",nrs_data->new_address.address2);
		userlog("get_appnt_jpn_info_data : nrs_data->new_address.post_code : %s",nrs_data->new_address.post_code);
		userlog("get_appnt_jpn_info_data : nrs_data->new_address.city_code : %d",nrs_data->new_address.city_code);
		userlog("get_appnt_jpn_info_data : nrs_data->new_address.state_code : %s",nrs_data->new_address.state_code);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.dob : %s",nrs_data->misc.dob);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.unknown_birth_ind : %c",nrs_data->misc.unknown_birth_ind);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.religion : %c",nrs_data->misc.religion);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.race : %s",nrs_data->misc.race);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.gender : %c",nrs_data->misc.gender);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.hk_ind : %c",nrs_data->misc.hk_ind);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.gmpc_remarks1 : %s",nrs_data->misc.gmpc_remarks1);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.gmpc_remarks2 : %s",nrs_data->misc.gmpc_remarks2);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.kt_ind : %s",nrs_data->misc.kt_ind);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.resi_status : %c",nrs_data->misc.resi_status);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.art_color_code : %s",nrs_data->misc.art_color_code);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.pol_army_id : %c",nrs_data->misc.pol_army_id);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.police_army_no : %s",nrs_data->misc.police_army_no);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.retire_date : %s",nrs_data->misc.retire_date);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.citizen_nation_code : %s",nrs_data->misc.citizen_nation_code);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.birth_country_code : %s",nrs_data->misc.birth_country_code);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.appl_no : %s",nrs_data->misc.appl_no);		
		userlog("get_appnt_jpn_info_data : nrs_data->misc.father_idtype : %s",nrs_data->misc.father_idtype);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.father_idno : %s",nrs_data->misc.father_idno);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.mother_idtype : %s",nrs_data->misc.mother_idtype);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.mother_idno : %s",nrs_data->misc.mother_idno);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.sponsor_idtype : %s",nrs_data->misc.sponsor_idtype);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.sponsor_idno : %s",nrs_data->misc.sponsor_idno);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.sponsor_name : %s",nrs_data->misc.sponsor_name);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.sponsor_relcode : %s",nrs_data->misc.sponsor_relcode);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.apply_place_cd : %s",nrs_data->misc.apply_place_cd);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.reg_date : %s",nrs_data->misc.reg_date);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.telephone_no : %s",nrs_data->misc.telephone_no);

		userlog("get_appnt_jpn_info_data : nrs_data->misc.kptno : %s",nrs_data->misc.kptno);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.status_date : %s",nrs_data->misc.status_date);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.operator_id : %s",nrs_data->misc.operator_id);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.gmpc_version : %d",nrs_data->misc.gmpc_version);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.jpn_remarks1 : %s",nrs_data->misc.jpn_remarks1);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.jpn_remarks2 : %s",nrs_data->misc.jpn_remarks2);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.probl_reason_code : %s",nrs_data->misc.probl_reason_code);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.indicator2 : %c",nrs_data->misc.indicator2);
		userlog("get_appnt_jpn_info_data : nrs_data->misc.trans_type : %d",nrs_data->misc.trans_type); //Added by Salmi, Date 18th June 2020, CRAPPL-  SKP002/CR/2020

		userlog("get_appnt_jpn_info_data : nrs_data->pp_info.imm_refer_no : %s",nrs_data->pp_info.imm_refer_no);
		userlog("get_appnt_jpn_info_data : nrs_data->pp_info.imm_refer_date : %s",nrs_data->pp_info.imm_refer_date);
		userlog("get_appnt_jpn_info_data : nrs_data->pp_info.passport_no : %s",nrs_data->pp_info.passport_no);
		userlog("get_appnt_jpn_info_data : nrs_data->pp_info.passort_issue_date : %s",nrs_data->pp_info.passort_issue_date);
		userlog("get_appnt_jpn_info_data : nrs_data->pp_info.passort_issue_country : %s",nrs_data->pp_info.passort_issue_country);
		userlog("get_appnt_jpn_info_data : nrs_data->pp_info.malaysia_arrival_date : %s",nrs_data->pp_info.malaysia_arrival_date);
		userlog("get_appnt_jpn_info_data : nrs_data->pp_info.passort_expiry_date : %s",nrs_data->pp_info.passort_expiry_date);
		userlog("get_appnt_jpn_info_data : nrs_data->pp_info.entry_permit_no : %s",nrs_data->pp_info.entry_permit_no);
		userlog("get_appnt_jpn_info_data : nrs_data->pp_info.nDocTypeCode : %d",nrs_data->pp_info.nDocTypeCode);
	#endif


	return SUCCESS;

}

/*************************************************************************************/
/* Function Name	: get_minutiae_info												 */
/* Description		: This function updates the JPN legacy system with data of the	 */
/*				      applicant's demographics 										 */
/* Input			: Request buffer of the service, Oracle message id, Txn ser no	 */
/* Return values    : SUCCESS / Error code											 */
/* Limitations		: None															 */
/*************************************************************************************/
int get_minutiae_info(JPN_UPDATE_REQ_T *req, LI_NRS_UPDATE_REQ_T *nrs_data,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 10/03/06
	char sqlmsg[SQL_MSG_SIZE] = {"\0"}; // added on 01/08/06

	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	
	typedef struct
	{
	 int len;
	 unsigned char arr[LOW_RES_PHOTO_SIZE];
	} lowres;

	/* EXEC SQL TYPE lowres IS LONG varraw(LOW_RES_PHOTO_SIZE); */ 

	

	typedef struct
	{
	 int len;
	 unsigned char arr[MINUTIAE_SIZE];
	} lforg;

	/* EXEC SQL TYPE lforg IS LONG varraw(MINUTIAE_SIZE); */ 


	typedef struct
	{
	 int len;
	 unsigned char arr[MINUTIAE_SIZE];
	} lfnorm;

	/* EXEC SQL TYPE lfnorm IS LONG varraw(MINUTIAE_SIZE); */ 



	typedef struct
	{
	 int len;
	 unsigned char arr[MINUTIAE_SIZE];
	} rforg;

	/* EXEC SQL TYPE rforg IS LONG varraw(MINUTIAE_SIZE); */ 


	typedef struct
	{
	 int len;
	 unsigned char arr[MINUTIAE_SIZE];
	} rfnorm;

	/* EXEC SQL TYPE rfnorm IS LONG varraw(MINUTIAE_SIZE); */ 


	char appl_id[APP_ID_SIZE];
	char read_ind = '\0';
	char kptno[KPT_SIZE] = {0};
	short kptno_ind = -1;
	char kppno[KPP_SIZE] = {0};
	short kppno_ind = -1;
	char identitytype[ID_TYPE_SIZE] = {0};
	short identitytype_ind = -1;
	/* varchar identityno[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } identityno
 = {0};

	short identityno_ind = -1;
	
	char finger_acq_src = 0;
	short finger_acq_src_ind = -1;
	int quality_stat = 0;
	short quality_stat_ind = -1;
	/* varchar lf_ind[FINGER_IND_SIZE]= {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } lf_ind
 = {0};

	short lf_ind_ind = -1;
	int lfquality = 0;
	short lfquality_ind = -1;
	/* varchar rf_ind[FINGER_IND_SIZE]= {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } rf_ind
 = {0};

	short rf_ind_ind = -1;
	int rfquality = 0;
	short rfquality_ind = -1;
	char lf_thstat = 0;
	short lf_thstat_ind=-1;
	int lf_pattern = 0;
	short lf_pattern_ind = -1;
	char rf_thstat = 0;
	short rf_thstat_ind = -1;
	int rf_pattern = 0;
	short rf_pattern_ind = -1;
	char sysdate[DATE_SIZE]= {0};

	lowres lowres_buf;
	short lowres_buf_ind = -1;

	lforg lforg_buf;
	short lforg_buf_ind= -1;
	lfnorm lfnorm_buf;
	short lfnorm_buf_ind= -1;

	rforg rforg_buf;
	short rforg_buf_ind= -1;
	rfnorm rfnorm_buf;
	short rfnorm_buf_ind= -1;


	char updateprintsind;
	short updateprintsind_ind= -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int i = 0;
	char imageremark[PROB_REMARK_SIZE];
	int error_code = 0;
	int count = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	/* Initialise all the raw buufers types to null and set there lengths to 0 */
	memset(lowres_buf.arr, '\0', LOW_RES_PHOTO_SIZE);
	lowres_buf.len = 0;

	memset(lforg_buf.arr, '\0', MINUTIAE_SIZE);
	lforg_buf.len = 0;
	memset(lfnorm_buf.arr, '\0', MINUTIAE_SIZE);
	lfnorm_buf.len = 0;

	memset(rforg_buf.arr, '\0', MINUTIAE_SIZE);
	rforg_buf.len = 0;
	memset(rfnorm_buf.arr, '\0', MINUTIAE_SIZE);
	rfnorm_buf.len = 0;

	/* Populate the host variables */

	strcpy(appl_id, req->header.application_id);
	
#ifdef DEBUG
	userlog("get_minutiae_info : Appl id - %s", appl_id);
#endif
	
	/* Get the applicant minutiae */

	/* EXEC SQL EXECUTE
		BEGIN
		GET_APPNT_MINUTIAE(:appl_id, :finger_acq_src:finger_acq_src_ind,
		:quality_stat:quality_stat_ind, :updateprintsind:updateprintsind_ind,
		:lowres_buf:lowres_buf_ind,
		:lforg_buf:lforg_buf_ind, :lfnorm_buf:lfnorm_buf_ind,		
		:rforg_buf:rforg_buf_ind, :rfnorm_buf:rfnorm_buf_ind,		
		:read_ind);
		END;
	END-EXEC; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "begin GET_APPNT_MINUTIAE ( :appl_id , :finger_acq_src:finger\
_acq_src_ind , :quality_stat:quality_stat_ind , :updateprintsind:updateprintsi\
nd_ind , :lowres_buf:lowres_buf_ind , :lforg_buf:lforg_buf_ind , :lfnorm_buf:l\
fnorm_buf_ind , :rforg_buf:rforg_buf_ind , :rfnorm_buf:rfnorm_buf_ind , :read_\
ind ) ; END ;";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4900;
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
 sqlstm.sqhstv[1] = (         void  *)&finger_acq_src;
 sqlstm.sqhstl[1] = (unsigned int  )1;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&finger_acq_src_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&quality_stat;
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&quality_stat_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&updateprintsind;
 sqlstm.sqhstl[3] = (unsigned int  )1;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&updateprintsind_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&lowres_buf;
 sqlstm.sqhstl[4] = (unsigned int  )5004;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&lowres_buf_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&lforg_buf;
 sqlstm.sqhstl[5] = (unsigned int  )604;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&lforg_buf_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&lfnorm_buf;
 sqlstm.sqhstl[6] = (unsigned int  )604;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&lfnorm_buf_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&rforg_buf;
 sqlstm.sqhstl[7] = (unsigned int  )604;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&rforg_buf_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&rfnorm_buf;
 sqlstm.sqhstl[8] = (unsigned int  )604;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&rfnorm_buf_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&read_ind;
 sqlstm.sqhstl[9] = (unsigned int  )1;
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



		if(SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog("get_minutiae_info : Failed to call stored procedure GET_APPNT_MINUTIAE : %s", SQLMSG);
		#endif
			strcpy(prog_log.remarks,"get_minutiae_info: Failed to call stored procedure GET_APPNT_MINUTIAE ");
			sprintf(excep_log.error_msg, "get_minutiae_info: Failed to call stored procedure GET_APPNT_MINUTIAE : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return STORED_PROC_ERROR;
		}

	#ifdef DEBUG
		userlog("get_minutiae_info : Call to stored procedure GET_APPNT_MINUTIAE succesfull");
		userlog("get_minutiae_info : Read indicator - %c",read_ind);
	#endif

	#ifdef DEBUG
		userlog("get_minutiae_info : Select from APPNT_JPN_IMG successfull");
	#endif

	if(quality_stat_ind == -1)
	{
		nrs_data->misc.quality_status = quality_stat = '\0';
	}
	else
	{
		nrs_data->misc.quality_status = quality_stat + '0';
	}

	nrs_data->misc.finger_acquision_source = '0'; // hard coded as per vasanth on 20/10/05

	if(lfnorm_buf_ind != -1)
	{
		/* Check for the exact minutia length */

		if (lfnorm_buf.len != 0 && lfnorm_buf.len != EXACT_MINUTIAE_SIZE)
		{
		#ifdef DEBUG
			userlog("upd_appnt_img_info : Wrong Left finger normalised minutia size - %d", lfnorm_buf.len);
		#endif
			strcpy(prog_log.remarks,"upd_appnt_img_info : Left finger normalised minutia size is wrong");
			sprintf(excep_log.error_msg, "upd_appnt_img_info : Left finger normalised minutia size is wrong - %d", lfnorm_buf.len);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
							
			return WRONG_MINUT_SIZE;
		}

		nrs_data->lfinger.normalized_minutiae_size = lfnorm_buf.len;
	}
	else
	{
		lfnorm_buf.len = 0;
		nrs_data->lfinger.normalized_minutiae_size = EXACT_MINUTIAE_SIZE;
	}

	if(rfnorm_buf_ind != -1)
	{
		/* Check for the exact minutia length */

		if (rfnorm_buf.len != 0 && rfnorm_buf.len != EXACT_MINUTIAE_SIZE)
		{
		#ifdef DEBUG
			userlog("upd_appnt_img_info : Wrong Right finger normalised minutia size - %d", rfnorm_buf.len);
		#endif
			strcpy(prog_log.remarks,"upd_appnt_img_info : Right finger normalised minutia size is wrong");
			sprintf(excep_log.error_msg, "upd_appnt_img_info : Right finger normalised minutia size is wrong - %d", rfnorm_buf.len);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
							
			return WRONG_MINUT_SIZE;
		}

		nrs_data->rfinger.normalized_minutiae_size = rfnorm_buf.len;
	}
	else
	{
		rfnorm_buf.len = 0;
		nrs_data->rfinger.normalized_minutiae_size = EXACT_MINUTIAE_SIZE;
	}

	/*Left Finger Normalised Minutiae*/
	if(lfnorm_buf.len != 0)
	{
		nrs_data->lfinger.norm_minutiae_buff = (unsigned char *)malloc(lfnorm_buf.len);

		if(nrs_data->lfinger.norm_minutiae_buff == NULL)
		{
			strcpy(imageremark,"get_minutiae_info : Error in allocating memory for normal minu buffer");
			error_log_for_malloc(imageremark,ctx);
			return MALLOC_ERROR;
		}
		memcpy(nrs_data->lfinger.norm_minutiae_buff, lfnorm_buf.arr, lfnorm_buf.len);
	}
	else
	{
		nrs_data->lfinger.norm_minutiae_buff = (unsigned char *)malloc(EXACT_MINUTIAE_SIZE);

		if(nrs_data->lfinger.norm_minutiae_buff == NULL)
		{
			strcpy(imageremark,"get_minutiae_info : Error in allocating memory for normal minu buffer");
			error_log_for_malloc(imageremark,ctx);
			return MALLOC_ERROR;
		}
		memset(nrs_data->lfinger.norm_minutiae_buff, ' ', EXACT_MINUTIAE_SIZE);
	}

	/*Right Finger Normalised Minutiae*/
	if(rfnorm_buf.len != 0)
	{
		nrs_data->rfinger.norm_minutiae_buff = (unsigned char *)malloc(rfnorm_buf.len);

		if(nrs_data->rfinger.norm_minutiae_buff == NULL)
		{
			strcpy(imageremark,"get_minutiae_info : Error in allocating memory for right finger normalised image");
			error_log_for_malloc(imageremark,ctx);
			return MALLOC_ERROR;
		}

		memcpy(nrs_data->rfinger.norm_minutiae_buff, rfnorm_buf.arr, rfnorm_buf.len);
	}
	else
	{
		nrs_data->rfinger.norm_minutiae_buff = (unsigned char *)malloc(EXACT_MINUTIAE_SIZE);
		if(nrs_data->rfinger.norm_minutiae_buff == NULL)
		{
			strcpy(imageremark,"get_minutiae_info : Error in allocating memory for right finger normalised image");
			error_log_for_malloc(imageremark,ctx);
			return MALLOC_ERROR;
		}

		memset(nrs_data->rfinger.norm_minutiae_buff, ' ', EXACT_MINUTIAE_SIZE);
	}


#ifdef DEBUG
	userlog("upd_appnt_img_info : LF norm min size - %ld", nrs_data->lfinger.normalized_minutiae_size);
	userlog("upd_appnt_img_info : RF norm min size - %ld", nrs_data->rfinger.normalized_minutiae_size);
	userlog("upd_appnt_img_info : finger_acquision_source - %c",nrs_data->misc.finger_acquision_source);
#endif


	return SUCCESS;
}


/********************************************************************/
/* Function name: check_dlkp_trans				     				*/
/* Description	: This function 									*/
/* Input		: Application Id									*/
/* Return values: GMPC_GOOD,										*/
/* Limitations	:													*/
/********************************************************************/
int check_dlkp_trans(char *applid, int * dlkp_flag,void * ctx)
{
	struct sqlca sqlca = {0}; 
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char application_id[APP_ID_SIZE];
		int dlkp = 0;
		short dlkp_ind = 0;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(application_id, applid);

	/* EXEC SQL
		SELECT DECODE(SUBSTR(b.txncode,1,2),'12',1,0) 
		INTO :dlkp:dlkp_ind
		from APPL_TXN a, TXN_CODE b
		WHERE APPLID = :application_id
		AND a.txnserno = 1
		AND a.txncode = b.txncode; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select DECODE(SUBSTR(b.txncode,1,2),'12',1,0) into :b0:b1  f\
rom APPL_TXN a ,TXN_CODE b where ((APPLID=:b2 and a.txnserno=1) and a.txncode=\
b.txncode)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4955;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&dlkp;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&dlkp_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)application_id;
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



	if((SQLCODE) != 0 && (SQLCODE != 1403))
	{
		strcpy(prog_log.remarks,"check_dlkp_trans : check_dlkp_trans failed");
		sprintf(excep_log.error_msg,"check_dlkp_trans : check_dlkp_trans failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}

	if (dlkp_ind == 0)
		*dlkp_flag = dlkp;
	else
		*dlkp_flag = 0;

#ifdef DEBUG
	userlog("check_dlkp_trans :dlkp_flag %d", *dlkp_flag);
#endif

	return GMPC_GOOD;
}

/********************************************************************/
/* Function name: get_dlewat_apprv_hist			     				*/
/* Description	: This function 									*/
/* Input		: Application Id, userid							*/
/* Return values: GMPC_GOOD,										*/
/* Limitations	:													*/
/********************************************************************/
int get_dlewat_apprv_hist(char *applid, char *userid, char *user_remark, char *user_kptno, void * ctx)
{
	struct sqlca sqlca = {0}; 
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char application_id[APP_ID_SIZE];
		char user_id[USER_ID_SIZE];
		char remark[201] = {0};
		char kptno[KPT_SIZE] = {0};
		short remark_ind = 0;
		short kptno_ind = 0;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(application_id, applid);
	strcpy(user_id, userid);

	/* EXEC SQL
		SELECT REMARK, USERKPTNO
		INTO :remark:remark_ind, kptno:kptno_ind
		FROM DLEWAT_APPRV_HISTORY
		WHERE APPLID = :application_id
		AND UPPER(OPERID) = UPPER(:user_id)
		AND DATETIMESTAMP = 
				(SELECT max(DATETIMESTAMP) from DLEWAT_APPRV_HISTORY where APPLID =:application_id); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 47;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select REMARK ,USERKPTNO into :b0:b1,:b2:b3  from DLEWAT_APP\
RV_HISTORY where ((APPLID=:b4 and UPPER(OPERID)=UPPER(:b5)) and DATETIMESTAMP=\
(select max(DATETIMESTAMP)  from DLEWAT_APPRV_HISTORY where APPLID=:b4))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4978;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)remark;
 sqlstm.sqhstl[0] = (unsigned int  )201;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&remark_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)kptno;
 sqlstm.sqhstl[1] = (unsigned int  )13;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&kptno_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)application_id;
 sqlstm.sqhstl[2] = (unsigned int  )20;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)user_id;
 sqlstm.sqhstl[3] = (unsigned int  )9;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)application_id;
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



	if((SQLCODE) != 0 && (SQLCODE != 1403))
	{
		strcpy(prog_log.remarks,"get_dlewat_apprv_hist : get_dlewat_apprv_hist failed");
		sprintf(excep_log.error_msg,"get_dlewat_apprv_hist : get_dlewat_apprv_hist failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}

	if (remark_ind == 0)
		strcpy(user_remark,remark );
	if (kptno_ind == 0)
		strcpy(user_kptno, kptno);

#ifdef DEBUG
	userlog("get_dlewat_apprv_hist :application_id %s", application_id);
	userlog("get_dlewat_apprv_hist :user_id %s", user_id);
	userlog("get_dlewat_apprv_hist :remark %s remark_ind %d", remark, remark_ind);
	userlog("get_dlewat_apprv_hist :user_remark %s", user_remark);
	userlog("get_dlewat_apprv_hist :user_kptno %s kptno_ind %d", user_kptno, kptno_ind);
#endif

	return GMPC_GOOD;
}
