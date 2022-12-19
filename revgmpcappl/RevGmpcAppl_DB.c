
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
    ".\\RevGmpcAppl_DB.pc"
};


static unsigned int sqlctx = 34364619;


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
            void  *sqhstv[18];
   unsigned int   sqhstl[18];
            int   sqhsts[18];
            void  *sqindv[18];
            int   sqinds[18];
   unsigned int   sqharm[18];
   unsigned int   *sqharc[18];
   unsigned short  sqadto[18];
   unsigned short  sqtdso[18];
} sqlstm = {12,18};

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

 static const char *sq0002 = 
"select L.LEGREQFLAG ,L.CHECKAGENCY ,L.LEGMSGID ,L.TXNSERNO ,L.TXNWSID  from \
IJPN_LEGACY_REQUEST L where ((L.APPLID=:b0 and L.LEGREQSTAT in (:b1,:b2)) and \
(L.REVMSGID is null  or (L.REVMSGID is  not null  and exists (select 'X'  from\
 LEGACY_REVERSAL R where (L.REVMSGID=R.LEGMSGID and R.LEGREQSTAT=(-2)))))) ord\
er by L.TXNSERNO            ";

 static const char *sq0035 = 
"select LICCLASS ,LICUSAGECODE  from APPNT_LIC_INFO where (APPLID=:b0 and LIC\
TYPE=:b1)           ";

 static const char *sq0036 = 
"select LICCLASS ,LICUSAGECODE  from JPJ_LIC_INFO B where ((B.LICIDNO=:b0 and\
 B.OWNERCAT=:b1) and B.LICTYPE=:b2) order by B.RECORDSERNO            ";

 static const char *sq0068 = 
"select TO_CHAR((A.FEEAMT* 100)) ,TO_CHAR(A.AGENCYREVNCODE) ,B.PAYMMODE  from\
 APPL_TXN_FEE A ,PAYMENT_INFO B ,APPL_TXN C where (((((A.APPLID=C.APPLID and A\
.TXNSERNO=C.TXNSERNO) and B.APPLID=C.APPLID) and B.PAYMSERNO=C.PAYMSERNO) and \
C.APPLID=:b0) and A.TXNSERNO=:b1)           ";

 static const char *sq0070 = 
"select TO_CHAR((A.SUMMAMT* 100)) ,TO_CHAR(A.AGENCYREVNCODE) ,B.PAYMMODE  fro\
m APPL_TXN_SUMMONS A ,PAYMENT_INFO B ,APPL_TXN C where (((((A.APPLID=C.APPLID \
and A.TXNSERNO=C.TXNSERNO) and B.APPLID=C.APPLID) and B.PAYMSERNO=C.PAYMSERNO)\
 and C.APPLID=:b0) and A.TXNSERNO=:b1)           ";

 static const char *sq0077 = 
"select SUMMNO ,SUMMTYPE ,SUMMDISTRICT ,DEVICE ,PDRMRECEIPTNO  from APPL_TXN_\
SUMMONS where ((APPLID=:b0 and SUMMBYAGENT='4') and PDRMRECEIPTNO is  not null\
 )           ";

 static const char *sq0089 = 
"select LICCLASS ,LICUSAGECODE  from APPL_TXN A where ((A.APPLID=:b0 and A.TX\
NCODE=:b1) and A.TXNCANCELCODE is null ) order by A.TXNSERNO            ";

 static const char *sq0088 = 
"select LICCLASS ,LICUSAGECODE  from APPNT_LIC_INFO B where (B.APPLID=:b0 and\
 B.LICTYPE=:b1) order by B.RECORDSERNO            ";

 static const char *sq0090 = 
"select LICCLASS ,LICUSAGECODE  from JPJ_LIC_INFO B where ((B.LICIDNO=:b0 and\
 B.OWNERCAT=:b1) and B.LICTYPE=:b2) order by B.RECORDSERNO            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4274,178,0,0,
5,0,0,1,262,0,4,960,0,0,4,3,0,1,0,2,3,0,0,1,97,0,0,1,3,0,0,1,3,0,0,
36,0,0,2,338,0,9,1046,0,0,3,3,0,1,0,1,97,0,0,1,3,0,0,1,3,0,0,
63,0,0,2,0,0,13,1070,0,0,5,0,0,1,0,2,1,0,0,2,1,0,0,2,9,0,0,2,3,0,0,2,3,0,0,
98,0,0,2,0,0,15,1168,0,0,0,0,0,1,0,
113,0,0,3,130,0,4,1220,0,0,5,4,0,1,0,2,3,0,0,1,3,0,0,1,97,0,0,1,1,0,0,1,1,0,0,
148,0,0,4,79,0,4,1276,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
171,0,0,5,104,0,4,1329,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,97,0,0,
198,0,0,6,89,0,2,1387,0,0,3,3,0,1,0,1,97,0,0,1,1,0,0,1,1,0,0,
225,0,0,7,108,0,2,1399,0,0,4,4,0,1,0,1,97,0,0,1,1,0,0,1,1,0,0,1,3,0,0,
256,0,0,8,67,0,2,1410,0,0,2,2,0,1,0,1,97,0,0,1,1,0,0,
279,0,0,9,202,0,4,1501,0,0,8,2,0,1,0,2,1,0,0,2,1,0,0,2,97,0,0,2,3,0,0,2,9,0,0,
2,97,0,0,1,9,0,0,1,1,0,0,
326,0,0,10,160,0,4,1517,0,0,6,2,0,1,0,2,1,0,0,2,3,0,0,2,9,0,0,2,97,0,0,1,97,0,
0,1,1,0,0,
365,0,0,11,46,0,4,1560,0,0,1,0,0,1,0,2,3,0,0,
384,0,0,12,229,0,3,1585,0,0,11,11,0,1,0,1,3,0,0,1,3,0,0,1,9,0,0,1,3,0,0,1,3,0,
0,1,1,0,0,1,1,0,0,1,97,0,0,1,3,0,0,1,9,0,0,1,97,0,0,
443,0,0,13,63,0,5,1612,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
466,0,0,14,83,0,5,1618,0,0,3,3,0,1,0,1,3,0,0,1,97,0,0,1,1,0,0,
493,0,0,15,231,0,3,1721,0,0,7,7,0,1,0,1,1,0,0,1,1,0,0,1,97,0,0,1,9,0,0,1,97,0,
0,1,9,0,0,1,9,0,0,
536,0,0,16,231,0,3,1752,0,0,7,7,0,1,0,1,1,0,0,1,1,0,0,1,97,0,0,1,9,0,0,1,97,0,
0,1,9,0,0,1,9,0,0,
579,0,0,17,231,0,3,1782,0,0,7,7,0,1,0,1,1,0,0,1,1,0,0,1,97,0,0,1,9,0,0,1,97,0,
0,1,9,0,0,1,9,0,0,
622,0,0,18,286,0,4,1907,0,0,12,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,97,0,0,2,3,0,
0,2,1,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,97,0,0,1,97,0,0,
685,0,0,19,301,0,4,2046,0,0,13,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,97,0,0,2,3,0,
0,2,1,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,97,0,0,1,9,0,0,1,1,0,0,
752,0,0,20,105,0,4,2121,0,0,3,2,0,1,0,2,1,0,0,1,9,0,0,1,1,0,0,
779,0,0,21,204,0,4,2177,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
802,0,0,22,49,0,4,2213,0,0,1,0,0,1,0,2,9,0,0,
821,0,0,23,64,0,4,2244,0,0,1,0,0,1,0,2,97,0,0,
840,0,0,24,207,0,4,2415,0,0,8,3,0,1,0,2,97,0,0,2,97,0,0,2,9,0,0,2,9,0,0,2,1,0,
0,1,97,0,0,1,3,0,0,1,1,0,0,
887,0,0,25,204,0,4,2520,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
910,0,0,26,49,0,4,2555,0,0,1,0,0,1,0,2,9,0,0,
929,0,0,27,64,0,4,2583,0,0,1,0,0,1,0,2,97,0,0,
948,0,0,28,208,0,4,2790,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
971,0,0,29,49,0,4,2825,0,0,1,0,0,1,0,2,9,0,0,
990,0,0,30,64,0,4,2853,0,0,1,0,0,1,0,2,97,0,0,
1009,0,0,31,301,0,4,3617,0,0,13,2,0,1,0,2,1,0,0,2,97,0,0,2,9,0,0,2,9,0,0,2,9,0,
0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,97,0,0,1,9,0,0,1,1,0,0,
1076,0,0,32,93,0,4,3642,0,0,4,2,0,1,0,2,97,0,0,2,97,0,0,1,97,0,0,1,3,0,0,
1107,0,0,33,252,0,4,3662,0,0,7,2,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,2,1,0,0,2,1,
0,0,1,97,0,0,1,97,0,0,
1150,0,0,34,246,0,4,3689,0,0,7,3,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,2,1,0,0,1,9,
0,0,1,1,0,0,1,97,0,0,
1193,0,0,35,96,0,9,3793,0,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
1216,0,0,35,0,0,13,3813,0,0,2,0,0,1,0,2,97,0,0,2,97,0,0,
1239,0,0,35,0,0,15,3866,0,0,0,0,0,1,0,
1254,0,0,36,146,0,9,3894,0,0,3,3,0,1,0,1,9,0,0,1,1,0,0,1,97,0,0,
1281,0,0,36,0,0,13,3916,0,0,2,0,0,1,0,2,97,0,0,2,97,0,0,
1304,0,0,36,0,0,15,3981,0,0,0,0,0,1,0,
1319,0,0,37,467,0,4,4007,0,0,18,3,0,1,0,2,1,0,0,2,9,0,0,2,9,0,0,2,1,0,0,2,1,0,
0,2,9,0,0,2,1,0,0,2,97,0,0,2,1,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,97,0,0,2,97,0,0,2,
1,0,0,1,9,0,0,1,1,0,0,1,97,0,0,
1406,0,0,38,167,0,4,4047,0,0,5,2,0,1,0,2,97,0,0,2,1,0,0,2,1,0,0,1,9,0,0,1,1,0,
0,
1441,0,0,39,204,0,4,4153,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
1464,0,0,40,49,0,4,4188,0,0,1,0,0,1,0,2,9,0,0,
1483,0,0,41,64,0,4,4216,0,0,1,0,0,1,0,2,97,0,0,
1502,0,0,42,93,0,4,4442,0,0,4,2,0,1,0,2,97,0,0,2,97,0,0,1,97,0,0,1,3,0,0,
1533,0,0,43,137,0,4,4463,0,0,4,2,0,1,0,2,97,0,0,2,1,0,0,1,97,0,0,1,97,0,0,
1564,0,0,44,130,0,4,4484,0,0,4,3,0,1,0,2,9,0,0,1,9,0,0,1,1,0,0,1,97,0,0,
1595,0,0,45,204,0,4,4565,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
1618,0,0,46,49,0,4,4600,0,0,1,0,0,1,0,2,9,0,0,
1637,0,0,47,64,0,4,4628,0,0,1,0,0,1,0,2,97,0,0,
1656,0,0,48,93,0,4,4797,0,0,4,2,0,1,0,2,97,0,0,2,97,0,0,1,97,0,0,1,3,0,0,
1687,0,0,49,130,0,4,4818,0,0,4,3,0,1,0,2,9,0,0,1,9,0,0,1,1,0,0,1,97,0,0,
1718,0,0,50,204,0,4,4890,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
1741,0,0,51,49,0,4,4925,0,0,1,0,0,1,0,2,9,0,0,
1760,0,0,52,64,0,4,4953,0,0,1,0,0,1,0,2,97,0,0,
1779,0,0,53,161,0,4,5074,0,0,8,1,0,1,0,2,97,0,0,2,9,0,0,2,97,0,0,2,9,0,0,2,1,0,
0,2,97,0,0,2,1,0,0,1,97,0,0,
1826,0,0,54,69,0,4,5090,0,0,2,1,0,1,0,2,1,0,0,1,97,0,0,
1849,0,0,55,62,0,4,5102,0,0,2,1,0,1,0,2,1,0,0,1,97,0,0,
1872,0,0,56,62,0,4,5160,0,0,2,1,0,1,0,2,1,0,0,1,97,0,0,
1895,0,0,57,77,0,4,5353,0,0,3,1,0,1,0,2,97,0,0,2,97,0,0,1,97,0,0,
1922,0,0,58,208,0,4,5407,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
1945,0,0,59,64,0,4,5470,0,0,1,0,0,1,0,2,97,0,0,
1964,0,0,60,303,0,4,5646,0,0,12,1,0,1,0,2,97,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,
0,2,3,0,0,2,97,0,0,2,3,0,0,2,97,0,0,2,3,0,0,2,97,0,0,1,97,0,0,
2027,0,0,61,100,0,4,5752,0,0,3,1,0,1,0,2,97,0,0,2,97,0,0,1,97,0,0,
2054,0,0,62,119,0,4,5778,0,0,4,1,0,1,0,2,3,0,0,2,3,0,0,2,3,0,0,1,97,0,0,
2085,0,0,63,205,0,4,5943,0,0,3,2,0,1,0,2,97,0,0,1,9,0,0,1,3,0,0,
2112,0,0,64,67,0,4,5988,0,0,1,0,0,1,0,2,97,0,0,
2131,0,0,65,165,0,4,6009,0,0,3,2,0,1,0,2,97,0,0,1,9,0,0,1,9,0,0,
2158,0,0,66,165,0,4,6034,0,0,3,2,0,1,0,2,97,0,0,1,9,0,0,1,9,0,0,
2185,0,0,67,220,0,4,6115,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,3,0,0,
2212,0,0,68,276,0,9,6186,0,0,2,2,0,1,0,1,97,0,0,1,3,0,0,
2235,0,0,68,0,0,13,6201,0,0,3,0,0,1,0,2,9,0,0,2,97,0,0,2,97,0,0,
2262,0,0,68,0,0,15,6221,0,0,0,0,0,1,0,
2277,0,0,68,0,0,15,6244,0,0,0,0,0,1,0,
2292,0,0,69,224,0,4,6291,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,3,0,0,
2319,0,0,70,281,0,9,6362,0,0,2,2,0,1,0,1,97,0,0,1,3,0,0,
2342,0,0,70,0,0,13,6377,0,0,3,0,0,1,0,2,9,0,0,2,97,0,0,2,97,0,0,
2369,0,0,70,0,0,15,6397,0,0,0,0,0,1,0,
2384,0,0,70,0,0,15,6420,0,0,0,0,0,1,0,
2399,0,0,71,94,0,4,6454,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
2422,0,0,72,123,0,4,6603,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,3,0,0,
2449,0,0,73,292,0,4,6634,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,3,0,0,
2476,0,0,74,252,0,4,6666,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,3,0,0,
2503,0,0,75,0,0,17,6749,0,0,1,1,0,1,0,1,9,0,0,
2522,0,0,75,0,0,45,6751,0,0,2,2,0,1,0,1,97,0,0,1,3,0,0,
2545,0,0,75,0,0,13,6774,0,0,3,0,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,
2572,0,0,75,0,0,15,6784,0,0,0,0,0,1,0,
2587,0,0,75,0,0,15,6847,0,0,0,0,0,1,0,
2602,0,0,75,0,0,15,6923,0,0,0,0,0,1,0,
2617,0,0,76,121,0,4,6997,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
2640,0,0,77,167,0,9,7087,0,0,1,1,0,1,0,1,97,0,0,
2659,0,0,77,0,0,13,7097,0,0,5,0,0,1,0,2,9,0,0,2,1,0,0,2,9,0,0,2,9,0,0,2,97,0,0,
2694,0,0,77,0,0,15,7108,0,0,0,0,0,1,0,
2709,0,0,77,0,0,15,7150,0,0,0,0,0,1,0,
2724,0,0,78,144,0,4,7217,0,0,4,2,0,1,0,2,9,0,0,2,9,0,0,1,97,0,0,1,97,0,0,
2755,0,0,79,144,0,4,7243,0,0,4,2,0,1,0,2,9,0,0,2,9,0,0,1,97,0,0,1,97,0,0,
2786,0,0,80,77,0,4,7343,0,0,3,1,0,1,0,2,97,0,0,2,97,0,0,1,97,0,0,
2813,0,0,81,139,0,4,7370,0,0,3,1,0,1,0,2,97,0,0,2,3,0,0,1,97,0,0,
2840,0,0,82,55,0,4,7448,0,0,1,0,0,1,0,2,97,0,0,
2859,0,0,83,154,0,4,7621,0,0,7,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,
2,97,0,0,1,97,0,0,
2902,0,0,84,169,0,4,7703,0,0,8,2,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,
2,97,0,0,1,9,0,0,1,1,0,0,
2949,0,0,85,154,0,4,7928,0,0,7,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,
2,97,0,0,1,97,0,0,
2992,0,0,86,147,0,4,8022,0,0,7,1,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,
2,97,0,0,1,9,0,0,
3035,0,0,87,55,0,4,21,1,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
3058,0,0,89,148,0,9,266,1,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
3081,0,0,89,0,0,13,284,1,0,2,0,0,1,0,2,97,0,0,2,97,0,0,
3104,0,0,88,126,0,9,330,1,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
3127,0,0,88,0,0,13,351,1,0,2,0,0,1,0,2,97,0,0,2,97,0,0,
3150,0,0,88,0,0,15,394,1,0,0,0,0,1,0,
3165,0,0,89,0,0,15,426,1,0,0,0,0,1,0,
3180,0,0,90,146,0,9,502,1,0,3,3,0,1,0,1,9,0,0,1,1,0,0,1,97,0,0,
3207,0,0,90,0,0,13,521,1,0,2,0,0,1,0,2,97,0,0,2,97,0,0,
3230,0,0,90,0,0,15,589,1,0,0,0,0,1,0,
};


/* $Header: $ */
/****************************************************************************/
/* Filename    : rev_gmpc_appl.pc											*/
/* Author      : Brijesh Patil												*/
/* Description : This file contains the database access functions for the	*/
/*				 service REV_GMPC_APPL.										*/
/****************************************************************************/

/* Include files	*/
#include<stdio.h>
#include<string.h>
#include<atmi.h>
#include <errno.h>
#include <stdlib.h>
#include <sqlca.h>

#include "KPPdef.h"
#include "gscbdef.h"
#include "gscbio.h"
#include "gscblog.h"
#include "gscblookupdef.h"
#include "KPPstruct.h"
#include "KPPproto.h"



#include "li_cancel_gmpc_update.h"
#include "li_jpn_rev_upd_payment.h"
#include "li_jpj_rev_upd_payment.h"
#include "li_rev_upd_id_to_kpt.h"
#include "li_rev_upd_summons.h"
#include "li_rev_update_lic_new.h"
#include "li_rev_lic_renewal.h"
#include "li_rev_lic_replacement.h"
#include "li_rev_add_new_class.h"
#include "li_update_gmpc_stat.h"
#include "li_update_jpj_addr.h"
#include "li_upd_new_owner_cat.h"
#include "rev_gmpc_appl_io.h"
#include "rev_gmpc_appl.h"
#include "gsc_reverse_pay.h"
//#include "Jpj_upd_Sp_Caller_io.h"

APPL_EXCEP_LOG_T excep_log = { {""},{""},{""},{""},{""},{""}, 0,{""}} ;
PROG_ACCESS_LOG_T prog_log = { {""},{""},{""},{""},{""},{""},{""},{""} };

TXN_LOG_T tran_log;

//EXEC SQL INCLUDE SQLCA;

char sqlmsg[SQL_MSG_SIZE];

extern void userlog(char* szFormatString, ...);

//extern "C" int Call_Jpj_Upd_Caller(HEADER_T header , void * ctx);   // added this on 20/04/2015 for JPJ WEBSERVICE
 
int Rev_Gmpc_Appl(REV_GMPC_APPL_REQ_T  *pReq, 
					REV_GMPC_APPL_RESP_T  **pResp, long *pRespSize, void * ctx)
{

	REV_GMPC_APPL_REQ_T *req;
	REV_GMPC_APPL_RESP_T *resp;
	char curr_date_time[DATE_TIME_SIZE];
	int ret = 0;
	char program_id[PROG_ID_SIZE];
	long len = 0;
	int ret_val = 0;
	MESSAGE_DETAILS_T *messages = NULL;
	MESSAGE_DETAILS_T *temp_messages = NULL;

#ifdef DEBUG
	/* print input data to be used for debugging */
	userlog("REV_GMPC_APPL: Entered the service");
#endif
	/* Initialize the variables used for logging	*/
	/* Get current date-time for logging			*/
	strcpy(curr_date_time, get_date_time());

	/* Assign request buffer	*/
	req = (REV_GMPC_APPL_REQ_T *) pReq;

	/* Program access log variable */
	itoa(REV_GMPC_APPL_ID, program_id, 10);
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

	strcpy(prog_log.remarks,"REV_GMPC_APPL: Initiated");

	prog_access_log(ctx);

	resp = (REV_GMPC_APPL_RESP_T *)
	  malloc( sizeof(REV_GMPC_APPL_RESP_T));
	if(resp == NULL)
	{
#ifdef DEBUG
	/* print input data to be used for debugging */
	userlog("REV_GMPC_APPL: Allocation of memory Failed");
#endif
		strcpy(prog_log.remarks,"REV_GMPC_APPL : Service failed due to RESP_BUF_ERR");
		sprintf(excep_log.error_msg,"REV_GMPC_APPL :Service failed due to RESP_BUF_ERR ");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		//tpreturn(TPFAIL, RESP_BUF_ERR, 0, 0, 0);
		return RESP_BUF_ERR;
	}
	
#ifdef DEBUG
	/* print input data to be used for debugging */
	userlog("REV_GMPC_APPL: Calling check_header()");
#endif

#ifdef DEBUG
	userlog("REV_GMPC_APPL: before check_header: workstation id: %s\n", req->header.workstation_id);
#endif

	resp->header = req->header;

	if((ret_val = check_header(req->header,ctx))!= GMPC_GOOD)
	{
	
#ifdef DEBUG
		userlog("REV_GMPC_APPL: After Check header Failed");
#endif
	    //tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof (REV_GMPC_APPL_RESP_T), 0);
			*pRespSize = sizeof (REV_GMPC_APPL_RESP_T);
			//memcpy(*pResp, resp, sizeof (REV_GMPC_APPL_RESP_T));
			*pResp = resp;
		return ret_val;
	}

	/* Begin a transaction	*/
	if(GMPC_GOOD != (ret = gscbbegin_trans(ctx)))
	{
		strcpy(prog_log.remarks,"REV_GMPC_APPL : gscbbegin_trans failed");
		sprintf(excep_log.error_msg,"REV_GMPC_APPL : gscbbegin_trans failed");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		//tpreturn(TPSUCCESS, BEGIN_TRAN_ERROR, (char *) resp, sizeof(REV_GMPC_APPL_RESP_T), 0);
	*pRespSize = sizeof (REV_GMPC_APPL_RESP_T);
			//memcpy(*pResp, resp, sizeof (REV_GMPC_APPL_RESP_T));
			*pResp = resp;
		return BEGIN_TRAN_ERROR;
	}

	ret_val = 0;
	ret_val = check_application_status(req->header.application_id,ctx);
	if(ret_val != GMPC_GOOD && ret_val != NO_DATA)
	{
#ifdef DEBUG
		userlog("REV_GMPC_APPL: After check_application_status Failed");
#endif
		//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof (REV_GMPC_APPL_RESP_T), 0);
			*pRespSize = sizeof (REV_GMPC_APPL_RESP_T);
			//memcpy(*pResp, resp, sizeof (REV_GMPC_APPL_RESP_T));
			*pResp = resp;
		return ret_val;

	}
	else if(ret_val == NO_DATA)
	{
#ifdef DEBUG
		userlog("REV_GMPC_APPL: No application with status 'H' found");
#endif
		strcpy(prog_log.remarks,"REV_GMPC_APPL : No application with status 'H' found");
		sprintf(excep_log.error_msg,"REV_GMPC_APPL :No application with status 'H' found");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof (REV_GMPC_APPL_RESP_T), 0);
			*pRespSize = sizeof (REV_GMPC_APPL_RESP_T);
			//memcpy(*pResp, resp, sizeof (REV_GMPC_APPL_RESP_T));
			*pResp = resp;
		return ret_val;

	}

	ret_val = 0;
	ret_val = check_appl_txn(req->header.application_id,ctx);
	if(ret_val != GMPC_GOOD && ret_val != DATA_FOUND)
	{
#ifdef DEBUG
		userlog("REV_GMPC_APPL: After check_appl_txn Failed");
#endif
		//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof (REV_GMPC_APPL_RESP_T), 0);
			*pRespSize = sizeof (REV_GMPC_APPL_RESP_T);
			//memcpy(*pResp, resp, sizeof (REV_GMPC_APPL_RESP_T));
			*pResp = resp;
		return ret_val;

	}
	else if(ret_val == DATA_FOUND)
	{
#ifdef DEBUG
		userlog("REV_GMPC_APPL: Cannot be cancelled, Issuance record present");
#endif
		strcpy(prog_log.remarks,"REV_GMPC_APPL : Cannot be cancelled, Issuance record present");
		sprintf(excep_log.error_msg,"REV_GMPC_APPL :Cannot be cancelled, Issuance record present");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof (REV_GMPC_APPL_RESP_T), 0);
			*pRespSize = sizeof (REV_GMPC_APPL_RESP_T);
			//memcpy(*pResp, resp, sizeof (REV_GMPC_APPL_RESP_T));
			*pResp = resp;
		return ret_val;
	}


	/* Get the linked list of messages to be reversed */
	ret_val = 0;
	//if((ret_val = get_msg_details(req->header.application_id, &messages,ctx)) != GMPC_GOOD)
	if((ret_val = get_msg_details(req->header, &messages,ctx)) != GMPC_GOOD)
	{
#ifdef DEBUG
		userlog("REV_GMPC_APPL: After get_msg_details Failed");
#endif

		//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof (REV_GMPC_APPL_RESP_T), 0);
			*pRespSize = sizeof (REV_GMPC_APPL_RESP_T);
			//memcpy(*pResp, resp, sizeof (REV_GMPC_APPL_RESP_T));
			*pResp = resp;
		return ret_val;

	}

	if (messages == NULL)
	{
#ifdef DEBUG
		userlog("REV_GMPC_APPL: No messages to process");
#endif
		//tpreturn(TPSUCCESS, GMPC_GOOD, (char *)resp, sizeof (REV_GMPC_APPL_RESP_T), 0);
			*pRespSize = sizeof (REV_GMPC_APPL_RESP_T);
			//memcpy(*pResp, resp, sizeof (REV_GMPC_APPL_RESP_T));
			*pResp = resp;
		return GMPC_GOOD ;

	}

	/* Send the reversal Messages */
	ret_val = 0;
	if((ret_val = send_rev_messages(req->header.application_id, req->header, messages,ctx)) != GMPC_GOOD)
	{
#ifdef DEBUG
		userlog("REV_GMPC_APPL: After send_rev_messages Failed");
#endif

		//tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof (REV_GMPC_APPL_RESP_T), 0);
			*pRespSize = sizeof (REV_GMPC_APPL_RESP_T);
			//memcpy(*pResp, resp, sizeof (REV_GMPC_APPL_RESP_T));
			*pResp = resp;
		return ret_val;

	}

	temp_messages = messages;
#ifdef DEBUG
		userlog("REV_GMPC_APPL: About to free the messages linked list");
#endif
	while(messages != NULL)
	{
		temp_messages = messages->next_msg;
		//free((void *)messages);
		messages = temp_messages;
	}


		userlog("REV_GMPC_APPL: Checking Renewal license available to cancel");

		
		/* Get the JPJ branch code 
		if (GMPC_GOOD != (ret = get_legacy_branchcode(header.branch_code, JPJ_ID, jpj_branch_code,ctx)))
		{

			strcpy(prog_log.remarks,"send_rev_messages : Failed to retrieve legacy branch code");
			sprintf(excep_log.error_msg,"send_rev_messages : Failed to retrieve legacy branch code");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;

			log_error(ctx);
			return ret;
		} */

		// Conversion,replacement transactions license renew reversal
		//strcpy(li_header.gsc_no, jpj_branch_code);
		
		/* SAMSURI REMARKED BELOW CODE ON 25 AUG 2022
		ret_val = 0;		
		if((ret_val = Call_Jpj_Upd_Caller(req->header, ctx))!= GMPC_GOOD)
		{
			#ifdef DEBUG
					userlog("REV_GMPC_APPL: After Checking Renewal license available to cancel");
			#endif			
		}
		*/
	
	/* Begin a transaction	*/
	if(GMPC_GOOD != (ret = gscbbegin_trans(ctx)))
	{
		strcpy(prog_log.remarks,"REV_GMPC_APPL : gscbbegin_trans failed");
		sprintf(excep_log.error_msg,"REV_GMPC_APPL : gscbbegin_trans failed");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		//tpreturn(TPSUCCESS, BEGIN_TRAN_ERROR, (char *) resp, sizeof (REV_GMPC_APPL_RESP_T), 0);
			*pRespSize = sizeof (REV_GMPC_APPL_RESP_T);
			//memcpy(*pResp, resp, sizeof (REV_GMPC_APPL_RESP_T));
			*pResp = resp;
		return BEGIN_TRAN_ERROR;
	}

		strcpy(prog_log.remarks,"REV_GMPC_APPL: Completed Successfully");
		prog_access_log(ctx);

	/* Commit	*/
	if(GMPC_GOOD != (ret = gscbcommit_trans(ctx)))
	{
		strcpy(prog_log.remarks,"REV_GMPC_APPL : Function gscbcommit_trans failed");
		strcpy(excep_log.error_msg,"REV_GMPC_APPL : Function gscbcommit_trans failed");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		//tpreturn(TPSUCCESS, ret, (char *) resp, sizeof (REV_GMPC_APPL_RESP_T), 0);
			*pRespSize = sizeof (REV_GMPC_APPL_RESP_T);
			//memcpy(*pResp, resp, sizeof (REV_GMPC_APPL_RESP_T));
			*pResp = resp;
		return ret;
	}

#ifdef DEBUG
	userlog("REV_GMPC_APPL :Service Completed");
#endif

	//tpreturn(TPSUCCESS, GMPC_GOOD, (char *) resp, sizeof (REV_GMPC_APPL_RESP_T), 0);
		*pRespSize = sizeof (REV_GMPC_APPL_RESP_T);
			//memcpy(*pResp, resp, sizeof (REV_GMPC_APPL_RESP_T));
		*pResp = resp;
	return GMPC_GOOD;


}

int send_rev_messages(char * applid, HEADER_T header, MESSAGE_DETAILS_T *msg,void * ctx)
{

	char legreqflag;
	char checkagency;
	char legmsgid[MSG_ID_SIZE]; 
	char appl_id[APP_ID_SIZE];
	int txnserno;
	int txnwsid;
	int req_sent = REQ_SENT;
	int reply_received = REPLY_RECEIVED;
	int rec_nos = 0;
	char revmsgid[MSG_ID_SIZE];
	int error_flag_jpn = FALSE;
	int error_flag_jpj = FALSE;
	int error_flag_pdrm = FALSE;
	int upd_flag = TRUE;
	char rev_req_flag = '\0';
	LI_P_HEADER_T li_header;
	char jpn_branch_code[LEGACY_BRANCH_CODE_SIZE];
	char jpj_branch_code[LEGACY_BRANCH_CODE_SIZE];
	char pdrm_branch_code[LEGACY_BRANCH_CODE_SIZE];
	int ret = 0, i = 0, ret_val = 0;
	APPL_INFO_T appl_info = {0};

	char reject_code[9]={0};
	char reject_reason[161]={0};

	MESSAGE_DETAILS_T *curr_msg = NULL;

	strcpy(appl_id, applid);


	/* Get the JPN branch code */
	if (GMPC_GOOD != (ret = get_legacy_branchcode(header.branch_code, JPN_ID, jpn_branch_code,ctx)))
	{

		strcpy(prog_log.remarks,"send_rev_messages : Failed to retrieve legacy branch code");
		sprintf(excep_log.error_msg,"send_rev_messages : Failed to retrieve legacy branch code");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);
		return ret;
	}

	/* Get the JPJ branch code */
	if (GMPC_GOOD != (ret = get_legacy_branchcode(header.branch_code, JPJ_ID, jpj_branch_code,ctx)))
	{

		strcpy(prog_log.remarks,"send_rev_messages : Failed to retrieve legacy branch code");
		sprintf(excep_log.error_msg,"send_rev_messages : Failed to retrieve legacy branch code");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);
		return ret;
	}

	/* Get the PDRM branch code */
	if (GMPC_GOOD != (ret = get_legacy_branchcode(header.branch_code, PDRM_ID, pdrm_branch_code,ctx)))
	{
		strcpy(prog_log.remarks,"send_rev_messages : Failed to retrieve legacy branch code");
		sprintf(excep_log.error_msg,"send_rev_messages : Failed to retrieve legacy branch code");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);
		return ret;
	}

	if((ret = get_appl_info(applid, &appl_info,ctx)) != GMPC_GOOD)
	{
#ifdef DEBUG
		userlog("send_rev_messages: function get_appl_info failed ");
#endif
		return ret;

	}

	memset(&li_header, 0, sizeof(LI_P_HEADER_T));

	/* Populate the header to be sent to legacy	with initial values	*/
	strcpy(li_header.user_id, header.user_id);
	strcpy(li_header.workstation_id, header.workstation_id);
	strcpy(li_header.trans_date, "\0");
	strcpy(li_header.trans_time, "\0");


	curr_msg = msg;
//		for(i = 1;i <= rec_nos;i++)
	while(curr_msg != NULL)
	{
		upd_flag = FALSE;
		rev_req_flag = '\0';
		strcpy(revmsgid,"");

		legreqflag = curr_msg->legreqflag;

 		if(legreqflag == '\0')
		{
			strcpy(prog_log.remarks,"send_rev_messages :Select legreqflag failed ");
			sprintf(excep_log.error_msg,"send_rev_messages : Select legreqflag failed ");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
			curr_msg = curr_msg->next_msg;
			continue;
		}

		checkagency = curr_msg->checkagency;
 		if(checkagency == '\0')
		{
			strcpy(prog_log.remarks,"send_rev_messages :Select checkagency failed ");
			sprintf(excep_log.error_msg,"send_rev_messages : Select checkagency failed ");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
			curr_msg = curr_msg->next_msg;
			continue;
		}
		
		strcpy(legmsgid, curr_msg->legmsgid);

 		if((!strcmp(legmsgid,"")) && (checkagency != PDRM_ID))
		{
			strcpy(prog_log.remarks,"send_rev_messages :Select legmsgid failed ");
			sprintf(excep_log.error_msg,"send_rev_messages : Select legmsgid failed ");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
			curr_msg = curr_msg->next_msg;
			continue;
		}

		txnserno = curr_msg->txnserno;
		txnwsid = curr_msg->txnwsid;

		ret_val = 0;
		if((ret_val = get_user_ws_id(header.application_id, legreqflag, li_header.user_id, li_header.workstation_id,ctx)) != GMPC_GOOD)
		{
			#ifdef DEBUG
					userlog("send_rev_messages: After get_user_ws_id Failed");
			#endif

		}

		if (txnwsid > 0)
			sprintf(li_header.workstation_id, "%d", txnwsid);

	#ifdef DEBUG
		userlog("About to send reversal message for -");
		userlog("legmsgid - %s", legmsgid);
		userlog("legreqflag - %c",legreqflag);
		userlog("checkagency - %c", checkagency);
		userlog("txnserno - %d", txnserno);
		userlog("txnwsid - %d", txnwsid);
	#endif

		upd_flag = TRUE;

		switch(legreqflag)
		{
		case PAYMENT_UPD:
			userlog("Executing payment_upd");
			if(checkagency == JPN_ID)
			{
				strcpy(li_header.gsc_no, jpn_branch_code);
				ret_val = 0;
					if((ret_val = send_payment_rev_jpn(header.application_id, txnserno, revmsgid, li_header,reject_code,reject_reason,ctx)) != GMPC_GOOD)
				{
			#ifdef DEBUG
					userlog("send_rev_messages: After send_payment_rev_jpn Failed");
			#endif

					error_flag_jpn = TRUE;
					upd_flag = FALSE;
					break;
				}


			}/*
			else if(checkagency == JPJ_ID)
			{
				userlog("Executing jpj payment_upd");
				strcpy(li_header.gsc_no, jpj_branch_code);
				ret_val = 0;
				/* commented on 21/02/2007 to stop sending the reversal
				if((ret_val = send_payment_rev_jpj(header.application_id, revmsgid, txnserno, &appl_info, li_header,reject_code,reject_reason,ctx)) != GMPC_GOOD)
				{
			#ifdef DEBUG
					userlog("send_rev_messages: After send_payment_rev_jpj Failed");
			#endif

					error_flag_jpj = TRUE;
					upd_flag = FALSE;
					break;
				}
				

			}*/

			break;

		case ADDRESS_UPD:
			userlog("Executing Address_upd");

			if(checkagency == JPN_ID)
			{
				strcpy(li_header.gsc_no, jpn_branch_code);
				ret_val = 0;
				if((ret_val = send_address_upd_jpn(header.application_id, revmsgid, &appl_info, li_header,reject_code,reject_reason,ctx)) != GMPC_GOOD)
				{
			#ifdef DEBUG
					userlog("send_rev_messages: After send_address_upd_jpn Failed");
			#endif

					error_flag_jpn = TRUE;
					upd_flag = FALSE;
					break;
				}


			}/*
			else if(checkagency == JPJ_ID)
			{
				userlog("Executing jpj Address_upd");
				strcpy(li_header.gsc_no, jpj_branch_code);
				ret_val = 0;
				if((ret_val = send_address_upd_jpj(header.application_id, revmsgid, &appl_info, li_header,reject_code,reject_reason,ctx)) != GMPC_GOOD)
				{
			#ifdef DEBUG
					userlog("send_rev_messages: After send_address_upd_jpn Failed");
			#endif

					error_flag_jpj = TRUE;
					upd_flag = FALSE;
					break;
				}

			}*/

			break;		

		case ID_TO_KPT:
			userlog("Executing Id to Kpt");
			strcpy(li_header.gsc_no, jpj_branch_code);
			ret_val = 0;
			/* commented on 21/02/2007 to stop the idtokpt reversal
			if((ret_val = send_idtokpt_rev(header.application_id, revmsgid, &appl_info, li_header,reject_code,reject_reason,ctx)) != GMPC_GOOD)
			{
		#ifdef DEBUG
				userlog("send_rev_messages: After send_idtokpt_rev Failed");
		#endif

					error_flag_jpj = TRUE;
					upd_flag = FALSE;
					break;
			}
             */

			break;

		case OWNER_UPD:
			userlog("Executing OWner_upd");
			strcpy(li_header.gsc_no, jpj_branch_code);
			ret_val = 0;
			/* commented on 21/02/2007 to stop sending the reversal
			if((ret_val = send_owner_cat_rev(header.application_id, revmsgid, &appl_info, li_header,reject_code,reject_reason,ctx)) != GMPC_GOOD)
			{
		#ifdef DEBUG
				userlog("send_rev_messages: After send_owner_cat_rev Failed");
		#endif

					error_flag_jpj = TRUE;
					upd_flag = FALSE;
					break;
			}
			*/

			userlog("Before break statement...");
			break;

		case DEMO_UPD:

			/* Ignore AFIS Messages */
			if(checkagency == AFIS_ID)
			{
		#ifdef DEBUG
				userlog("send_rev_messages: Afis message - No need to reverse");
		#endif
				upd_flag = FALSE;
				break;

			}

			strcpy(li_header.gsc_no, jpn_branch_code);
			ret_val = 0;
			if((ret_val = send_jpn_cancel_appl(header.application_id, txnserno, revmsgid, li_header,reject_code,reject_reason,ctx)) != GMPC_GOOD)
			{
		#ifdef DEBUG
				userlog("send_rev_messages: After send_jpn_cancel_appl Failed");
		#endif

					error_flag_jpn = TRUE;
					upd_flag = FALSE;
					break;
			}


			break;

		case APPL_IN_PROG:
			strcpy(li_header.gsc_no, jpn_branch_code);
			ret_val = 0;
			if((ret_val = send_rev_appl_in_prog(header.application_id, txnserno, revmsgid, li_header,reject_code,reject_reason,ctx)) != GMPC_GOOD)
			{
		#ifdef DEBUG
				userlog("send_rev_messages: After send_rev_appl_in_prog Failed");
		#endif

					error_flag_jpn = TRUE;
					upd_flag = FALSE;
					break;
			}

			break;

		case NEW_LIC:
			strcpy(li_header.gsc_no, jpj_branch_code);
			ret_val = 0;
			/* commented on 21/02/2007 to stop sending the reversal
			if((ret_val = send_new_lic_cancel(header.application_id, txnserno, revmsgid, &appl_info, li_header,reject_code,reject_reason,ctx)) != GMPC_GOOD)
			{
		#ifdef DEBUG
				userlog("send_rev_messages: After send_new_lic_cancel Failed");
		#endif
					error_flag_jpj = TRUE;
				upd_flag = FALSE;
				break;
			}
			*/

			break;

		case RENEW_LIC:
			/*userlog("Executing Renew lic Cancel");
			strcpy(li_header.gsc_no, jpj_branch_code);
			ret_val = 0;
			//if((ret_val = send_renew_lic_cancel(header.application_id, txnserno, revmsgid, &appl_info, li_header,reject_code,reject_reason,ctx)) != GMPC_GOOD)
			if((ret_val = Call_Jpj_Upd_Caller(header, ctx))!= GMPC_GOOD)
			{
			#ifdef DEBUG
				userlog("send_rev_messages: After send_renew_lic_cancel Failed");
			#endif

				error_flag_jpj = TRUE;
				upd_flag = FALSE;
				break;
			}*/

			break;

		case ADD_CLASS:
			strcpy(li_header.gsc_no, jpj_branch_code);
			ret_val = 0;
			/* commented on 21/02/2007 to stop sending the reversal
			if((ret_val = send_addnew_class_cancel(header.application_id, txnserno, revmsgid, &appl_info, li_header,reject_code,reject_reason,ctx)) != GMPC_GOOD)
			{
		#ifdef DEBUG
				userlog("send_rev_messages: After send_addnew_class_cancel Failed");
		#endif

				error_flag_jpj = TRUE;
				upd_flag = FALSE;
				break;
			}
			*/
			break;

		case ADD_SUMMONS:

			strcpy(li_header.gsc_no, jpj_branch_code);
			ret_val = 0;
			/* commented on 21/02/2007 to stop sending the reversal
			if((ret_val = send_summons_cancel(applid, txnserno, &appl_info, li_header, revmsgid,reject_code,reject_reason,ctx)) != GMPC_GOOD)
			{
		#ifdef DEBUG
				userlog("send_rev_messages: After send_summons_cancel Failed");
		#endif

				error_flag_jpj = TRUE;
				upd_flag = FALSE;
				break;
			}
			*/
	
			break;

		case UPD_PDRM_SUMM:

			ret_val = 0;
			/* commented on 21/02/2007 to stop sending the reversal
			if((ret_val = send_pdrm_reverse(header, appl_info.kpt_number,ctx)) != GMPC_GOOD)
			{
		#ifdef DEBUG
				userlog("send_rev_messages: After send_summons_cancel Failed");
		#endif

				error_flag_pdrm = TRUE;
				upd_flag = FALSE;
				break;
			}
			*/
			break;

		case REPLACE_LIC:
			strcpy(li_header.gsc_no, jpj_branch_code);
			ret_val = 0;
			/* commented on 21/02/2007 to stop sending the reversal
			if((ret_val = send_licrepl_cancel(applid, txnserno, revmsgid, &appl_info, li_header,reject_code,reject_reason,ctx)) != GMPC_GOOD)
			{
		#ifdef DEBUG
				userlog("send_rev_messages: After send_licrepl_cancel Failed");
		#endif

				error_flag_jpj = TRUE;
				upd_flag = FALSE;
				break;
			}
			*/

			break;

		default:

	#ifdef DEBUG
			userlog("send_rev_messages: Message not meant to be reversed ");
	#endif
			curr_msg = curr_msg->next_msg;
			continue;
		}

		
		if(upd_flag == TRUE)
		{
		
			userlog("upd_flag : TRUE");
			ret_val = 0;
			if((ret_val = update_rev_msgid(legmsgid, revmsgid, REQ_SENT, checkagency, applid,ctx)) != GMPC_GOOD)
			{
			#ifdef DEBUG
				userlog("send_rev_messages: After update_rev_msgid Failed");
			#endif
				strcpy(prog_log.remarks,"send_rev_messages : update_rev_msgid() Failed");
				sprintf(excep_log.error_msg,"send_rev_messages :update_rev_msgid() Failed");
				excep_log.termination_flag = 'Y';
				excep_log.severity = FATAL;
				log_error(ctx);
				if (checkagency == JPJ_ID)
					error_flag_jpj = TRUE;
				if (checkagency == JPN_ID)
					error_flag_jpn = TRUE;
				if (checkagency == PDRM_ID)
					error_flag_pdrm = TRUE;

			}		
		}
		else if(upd_flag == FALSE)
		{
			/* Delete any previous entry from legacy_reversal with reqflag 'X' 
			ret_val = 0;
			if((ret_val = delete_from_legacy_reversal(applid, 0, '\0', UNKNOWN,ctx)) != GMPC_GOOD)
			{
				#ifdef DEBUG
					userlog("REV_GMPC_APPL: After delete_from_legacy_request Failed");
				#endif
				return ret_val;
			}
			*/
			userlog("reject_code, reject_reason before insert() call: %s, %s",reject_code,reject_reason);

			/* If any of the reversal message had an error while sending, then insert */
			/* a requset in legacy_reversal with reqflag 'X'.						  */
			if(error_flag_jpn == TRUE || error_flag_jpj == TRUE || error_flag_pdrm == TRUE)
			{
				ret_val = 0;
				if((ret_val = insert_into_legacy_revarsal(header, error_flag_jpn, error_flag_jpj, error_flag_pdrm, reject_code, reject_reason,revmsgid, legreqflag, ctx)) != GMPC_GOOD)
				{
				#ifdef DEBUG
					userlog("send_rev_messages: After insert_into_legacy_revarsal Failed");
				#endif

				return ret_val;
			}
		}

		}

		/* Commit a transaction	*/
		if(GMPC_GOOD != (ret = gscbcommit_trans(ctx)))
		{
			strcpy(prog_log.remarks,"REV_GMPC_APPL : gscbcommit_trans failed");
			sprintf(excep_log.error_msg,"REV_GMPC_APPL : gscbcommit_trans failed");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			return ret;
		}

		/* GO to next message */
		curr_msg = curr_msg->next_msg;

	} // for (i = 1;i <= rec_nos;i++)

/* commented for IJPN and included this in the while loop for each record
		/* Delete any previous entry from legacy_reversal with reqflag 'X' 
		ret_val = 0;
		if((ret_val = delete_from_legacy_reversal(applid, 0, '\0', UNKNOWN,ctx)) != GMPC_GOOD)
		{
	#ifdef DEBUG
			userlog("REV_GMPC_APPL: After delete_from_legacy_request Failed");
	#endif
			return ret_val;

		}

		userlog("reject_code, reject_reason before insert() call: %s, %s",reject_code,reject_reason);

		/* If any of the reversal message had an error while sending, then insert 
		/* a requset in legacy_reversal with reqflag 'X'.						  
		if(error_flag_jpn == TRUE || error_flag_jpj == TRUE || error_flag_pdrm == TRUE)
		{
			ret_val = 0;
			if((ret_val = insert_into_legacy_revarsal(header, error_flag_jpn, error_flag_jpj, error_flag_pdrm, reject_code, reject_reason,ctx)) != GMPC_GOOD)
			{
		#ifdef DEBUG
				userlog("send_rev_messages: After insert_into_legacy_revarsal Failed");
		#endif

				return ret_val;
			}

		}
end IJPN */

	return GMPC_GOOD;
}

/****************************************************************************/
/* Function name: send_rev_messages											*/
/* Description	: This function												*/
/* Input		: char appl_id[APP_ID_SIZE]									*/
/* Return values: GMPC_GOOD													*/
/* Limitations	:															*/
/****************************************************************************/
int get_msg_details(HEADER_T header, MESSAGE_DETAILS_T **msg_det,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


		char legreqflag;
		char checkagency;
		/* varchar legmsgid[MSG_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[25]; } legmsgid;
 
		char appl_id[APP_ID_SIZE];
		int txnserno;
		int txnwsid;

		short int legreqflag_ind = 0;
		short int checkagency_ind = 0;
		short int legmsgid_ind = 0;
		short int applid_ind = 0;
		short int txnserno_ind = 0;
		short int txnwsid_ind = 0;

		int req_sent = REQ_SENT;
		int reply_received = REPLY_RECEIVED;
		int rec_nos = 0;


	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 



	int ret = 0, i = 0, ret_val = 0;
	MESSAGE_DETAILS_T *first_node = NULL;
	MESSAGE_DETAILS_T *curr_node = NULL;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(appl_id, header.application_id);

	/* EXEC SQL SELECT COUNT(*) INTO :rec_nos 
		FROM IJPN_LEGACY_REQUEST L 
		WHERE L.APPLID = :appl_id
		AND L.LEGREQSTAT IN (:req_sent, :reply_received)
		AND (L.REVMSGID IS NULL OR (L.REVMSGID IS NOT NULL 
									AND EXISTS (SELECT 'X' FROM LEGACY_REVERSAL R 
												WHERE L.REVMSGID = R.LEGMSGID
												AND R.LEGREQSTAT = -2))); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from IJPN_LEGACY_REQUEST L where \
((L.APPLID=:b1 and L.LEGREQSTAT in (:b2,:b3)) and (L.REVMSGID is null  or (L.R\
EVMSGID is  not null  and exists (select 'X'  from LEGACY_REVERSAL R where (L.\
REVMSGID=R.LEGMSGID and R.LEGREQSTAT=(-2))))))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )5;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&rec_nos;
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
 sqlstm.sqhstv[2] = (         void  *)&req_sent;
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&reply_received;
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



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE)
		{
#ifdef DEBUG
			userlog("get_msg_details: Select count(*) from legacy_request failed ");	
#endif
			strcpy(prog_log.remarks,"get_msg_details :Select count(*) from legacy_request failed");
			sprintf(excep_log.error_msg,"get_msg_details : Select count(*) from ijpn_legacy_request failed :%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
			return SELECT_ERROR;
		}

		if(rec_nos <= 0)
		{
#ifdef DEBUG
			userlog("get_msg_details: No records found for JPNID");	
#endif

			// Chipupdate transactions license renew reversal
			//strcpy(li_header.gsc_no, jpj_branch_code);

			/* SAMSURI REMARKED BELOW CODE ON 25 AUG 2022
			ret_val = 0;		
			if((ret_val = Call_Jpj_Upd_Caller(header, ctx))!= GMPC_GOOD)
			{
				#ifdef DEBUG
						userlog("REV_GMPC_APPL: After Checking Renewal license available to cancel");
				#endif			
			}
			*/

			strcpy(prog_log.remarks,"get_msg_details :No records found");
			sprintf(excep_log.error_msg,"get_msg_details : No records found");
			//excep_log.termination_flag = 'Y';
			//excep_log.severity = FATAL;
			//log_error(ctx);
			return GMPC_GOOD;
		}
#ifdef DEBUG
			userlog("get_msg_details: number of records:%d:", rec_nos);	
#endif

	/* EXEC SQL
		DECLARE REV_CURR CURSOR FOR
		SELECT L.LEGREQFLAG, L.CHECKAGENCY, L.LEGMSGID,
		L.TXNSERNO, L.TXNWSID 
		FROM IJPN_LEGACY_REQUEST L 
		WHERE L.APPLID = :appl_id
		AND L.LEGREQSTAT IN (:req_sent, :reply_received)
		AND (L.REVMSGID IS NULL OR (L.REVMSGID IS NOT NULL 
									AND EXISTS (SELECT 'X' FROM LEGACY_REVERSAL R 
												WHERE L.REVMSGID = R.LEGMSGID
												AND R.LEGREQSTAT = -2)))
		ORDER BY L.TXNSERNO; */ 


		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE)
		{
#ifdef DEBUG
			userlog("get_msg_details: Declare cur_cardid cursor failed ");	
#endif
			strcpy(prog_log.remarks,"get_msg_details :Declare REV_CURR cursor failed");
			sprintf(excep_log.error_msg,"get_msg_details : Declare REV_CURR cursor failed :%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
			return SELECT_ERROR;
		}
#ifdef DEBUG
			userlog("get_msg_details: Cursor Declare Success ");
#endif


		/* EXEC SQL 
			OPEN REV_CURR; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = sq0002;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )36;
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
  sqlstm.sqhstv[1] = (         void  *)&req_sent;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&reply_received;
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



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE)
		{
#ifdef DEBUG
			userlog("get_msg_details: Open REV_CURR cursor failed ");
#endif
			strcpy(prog_log.remarks,"get_msg_details :Open REV_CURR cursor failed");
			sprintf(excep_log.error_msg,"get_msg_details : Open REV_CURR cursor failed :%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

		   return CURSOR_OPEN_ERROR;
		}


//		while(1)
		for(i = 1;i <= rec_nos;i++)
		{

			/* EXEC SQL
				FETCH REV_CURR INTO :legreqflag:legreqflag_ind,
				:checkagency:checkagency_ind, :legmsgid:legmsgid_ind,
				:txnserno:txnserno_ind, :txnwsid:txnwsid_ind; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )63;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqfoff = (           int )0;
   sqlstm.sqfmod = (unsigned int )2;
   sqlstm.sqhstv[0] = (         void  *)&legreqflag;
   sqlstm.sqhstl[0] = (unsigned int  )1;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&legreqflag_ind;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&checkagency;
   sqlstm.sqhstl[1] = (unsigned int  )1;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)&checkagency_ind;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&legmsgid;
   sqlstm.sqhstl[2] = (unsigned int  )27;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&legmsgid_ind;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&txnserno;
   sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)&txnserno_ind;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)&txnwsid;
   sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)&txnwsid_ind;
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



			sqlmsg[0] = '\0';
			strcpy(sqlmsg, SQLMSG);

			if(SQLCODE)
			{
				strcpy(prog_log.remarks,"get_msg_details :Fetch REV_CURR cursor failed");
				sprintf(excep_log.error_msg,"get_msg_details : Fetch REV_CURR cursor failed :%s ",sqlmsg);
				excep_log.termination_flag = 'Y';
				excep_log.severity = FATAL;
				log_error(ctx);
#ifdef DEBUG
			userlog("get_msg_details: Fetch REV_CURR cursor failed ");
#endif
				break;
			}
			setnull(legmsgid);

#ifdef DEBUG
			userlog("Selected record to be reversed -");
			userlog("legmsgid - %s", legmsgid.arr);
			userlog("legreqflag - %c",legreqflag);
			userlog("checkagency - %c", checkagency);
			userlog("txnserno - %d", txnserno);
			userlog("txnwsid - %d", txnwsid);
#endif
			if (first_node == NULL)
			{
				first_node = (MESSAGE_DETAILS_T *)malloc(sizeof(MESSAGE_DETAILS_T));
				if (first_node == NULL)
				{
			#ifdef DEBUG
				userlog("get_msg_details : unable to malloc first_node ");
			#endif
				strcpy(prog_log.remarks,"get_msg_details :Allocation of first_node failed");
					sprintf(excep_log.error_msg,"get_msg_details : Allocation of first_node failed ");
					excep_log.termination_flag = 'Y';
					excep_log.severity = FATAL;
					log_error(ctx);
					return MALLOC_ERROR;
	
				}
				memset(first_node, '\0', sizeof(MESSAGE_DETAILS_T));
				curr_node = first_node;
				*msg_det = first_node;
				curr_node->next_msg = NULL;
			#ifdef DEBUG
						userlog("Messages first_node is %X", first_node);
			#endif

			}
			else
			{
				curr_node->next_msg = (MESSAGE_DETAILS_T *)malloc(sizeof(MESSAGE_DETAILS_T));
				if (curr_node->next_msg == NULL)
				{
			#ifdef DEBUG
				userlog("get_msg_details : unable to malloc curr_node ");
			#endif
				strcpy(prog_log.remarks,"get_msg_details :Allocation of curr_node failed");
					sprintf(excep_log.error_msg,"get_msg_details : Allocation of curr_node failed ");
					excep_log.termination_flag = 'Y';
					excep_log.severity = FATAL;
					log_error(ctx);
					return MALLOC_ERROR;
	
				}
				curr_node = curr_node->next_msg;
				memset(curr_node, '\0', sizeof(MESSAGE_DETAILS_T));
				curr_node->next_msg = NULL;
			#ifdef DEBUG
				userlog("Messages curr_node is %X", curr_node);
			#endif

			}

			/* Populate Message Details */
			if (legreqflag_ind == 0)
				curr_node->legreqflag = legreqflag;
			
			if (legmsgid_ind == 0)
				strcpy(curr_node->legmsgid, (char *)legmsgid.arr);

			if (checkagency_ind == 0)
				curr_node->checkagency = checkagency;

			if (txnserno_ind == 0)
				curr_node->txnserno = txnserno;

			if (txnwsid_ind == 0)
				curr_node->txnwsid = txnwsid;

		} // for (i = 1;i <= rec_nos;i++)

		/* EXEC SQL CLOSE REV_CURR; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )98;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);
		if(SQLCODE)
		{
#ifdef DEBUG
			userlog("send_rev_messages: Close REV_CURR cursor failed ");
#endif
			strcpy(prog_log.remarks,"send_rev_messages :Close REV_CURR cursor failed");
			sprintf(excep_log.error_msg,"send_rev_messages : Close REV_CURR cursor failed :%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

		   return CURSOR_CLOSE_ERROR;
		}


	return GMPC_GOOD;
}


/****************************************************************************/
/* Function name: check_payment_rec											*/
/* Description	: This function												*/
/* Input		: char appl_id[APP_ID_SIZE]									*/
/* Return values: GMPC_GOOD, ret,INSERT_ERROR								*/
/* Limitations	:															*/
/****************************************************************************/
int check_payment_rec(char *applid, int txn_serno, char ag,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		int txnserno = 0;
		char agency = 0;
		int rec_nos = 0;
		char reqflag = 0;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN



	strcpy(appl_id,applid);
	txnserno = txn_serno;
	agency = ag;
	reqflag = PAYMENT_UPD;

	/* EXEC SQL
		SELECT COUNT(*) INTO :rec_nos 
		FROM IJPN_LEGACY_REQUEST 
		WHERE TXNSERNO = :txnserno 
		AND APPLID = :appl_id 
		AND CHECKAGENCY = :agency 
		AND LEGREQFLAG = :reqflag; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 5;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from IJPN_LEGACY_REQUEST where ((\
(TXNSERNO=:b1 and APPLID=:b2) and CHECKAGENCY=:b3) and LEGREQFLAG=:b4)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )113;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&rec_nos;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&txnserno;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
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
 sqlstm.sqhstv[3] = (         void  *)&agency;
 sqlstm.sqhstl[3] = (unsigned int  )1;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&reqflag;
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



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);

		if(SQLCODE)
		{
#ifdef DEBUG
			userlog("check_payment_rec: Select count(*) from legacy_request failed ");	
#endif
			strcpy(prog_log.remarks,"check_payment_rec :Select count(*) from legacy_request failed");
			sprintf(excep_log.error_msg,"check_payment_rec : Select count(*) from legacy_request failed :%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
			return SELECT_ERROR;
		}

		if(rec_nos <= 0)
		{
			return NO_DATA;
		}
		
		return GMPC_GOOD;
}

/****************************************************************************/
/* Function name: check_application_status											*/
/* Description	: This function												*/
/* Input		: char appl_id[APP_ID_SIZE]									*/
/* Return values: GMPC_GOOD, ret,INSERT_ERROR								*/
/* Limitations	:															*/
/****************************************************************************/
int check_application_status(char *applid,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		int rec_nos = 0;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	strcpy(appl_id, applid);

	/* EXEC SQL
		SELECT COUNT(*) INTO :rec_nos FROM APPLICATION WHERE 
		APPLID = :appl_id AND APPLSTAT = 'H'; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 5;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from APPLICATION where (APPLID=:b\
1 and APPLSTAT='H')";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )148;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&rec_nos;
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



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);

		if(SQLCODE)
		{
#ifdef DEBUG
			userlog("check_application_status: Select count(*) from legacy_request failed ");	
#endif
			strcpy(prog_log.remarks,"check_application_status :Select count(*) from legacy_request failed");
			sprintf(excep_log.error_msg,"check_application_status : Select count(*) from legacy_request failed :%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
			return SELECT_ERROR;
		}

		if(rec_nos <= 0)
		{
			return NO_DATA;
		}
		
		return GMPC_GOOD;
}

/****************************************************************************/
/* Function name: check_appl_txn											*/
/* Description	: This function												*/
/* Input		: char appl_id[APP_ID_SIZE]									*/
/* Return values: GMPC_GOOD, ret,INSERT_ERROR								*/
/* Limitations	:															*/
/****************************************************************************/
int check_appl_txn(char *applid,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		int rec_nos = 0;
		char txncode[TRANSACTION_CODE_SIZE];
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	strcpy(appl_id, applid);
	itoa(TXN_ISSUANCE, txncode, 10);

	/* EXEC SQL
		SELECT COUNT(*) INTO :rec_nos 
		FROM APPL_TXN 
		WHERE APPLID = :appl_id 
		AND TXNCODE = :txncode 
		AND TXNCANCELCODE IS NULL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 5;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN where ((APPLID=:b1 \
and TXNCODE=:b2) and TXNCANCELCODE is null )";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )171;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&rec_nos;
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
 sqlstm.sqhstv[2] = (         void  *)txncode;
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



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);

		if(SQLCODE)
		{
#ifdef DEBUG
			userlog("check_appl_txn: Select count(*) from legacy_request failed ");	
#endif
			strcpy(prog_log.remarks,"check_appl_txn :Select count(*) from legacy_request failed");
			sprintf(excep_log.error_msg,"check_appl_txn : Select count(*) from legacy_request failed :%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
			return SELECT_ERROR;
		}

		if(rec_nos >= 1)
		{
			return DATA_FOUND;
		}
		
		return GMPC_GOOD;
}


/****************************************************************************/
/* Function name: delete_from_legacy_reversal								*/
/* Description	: This function												*/
/* Input		: char appl_id[APP_ID_SIZE]									*/
/* Return values: GMPC_GOOD, ret,INSERT_ERROR								*/
/* Limitations	:															*/
/****************************************************************************/
int delete_from_legacy_reversal(char *applid, int txnserno, char agency, char legreqflag,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		int rec_nos = 0;

sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	strcpy(appl_id, applid);

	if(txnserno == 0 && agency != '\0')
	{
		/* EXEC SQL
			DELETE FROM LEGACY_REVERSAL WHERE
			APPLID = :appl_id AND CHECKAGENCY = :agency
			AND LEGREQFLAG = :legreqflag; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "delete  from LEGACY_REVERSAL  where ((APPLID=:b0 and CHECKA\
GENCY=:b1) and LEGREQFLAG=:b2)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )198;
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
  sqlstm.sqhstv[1] = (         void  *)&agency;
  sqlstm.sqhstl[1] = (unsigned int  )1;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&legreqflag;
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



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);


	}
	else if(agency != '\0')
	{
		/* EXEC SQL
			DELETE FROM LEGACY_REVERSAL WHERE
			APPLID = :appl_id AND CHECKAGENCY = :agency
			AND LEGREQFLAG = :legreqflag AND TXNSERNO = :txnserno; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "delete  from LEGACY_REVERSAL  where (((APPLID=:b0 and CHECK\
AGENCY=:b1) and LEGREQFLAG=:b2) and TXNSERNO=:b3)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )225;
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
  sqlstm.sqhstv[1] = (         void  *)&agency;
  sqlstm.sqhstl[1] = (unsigned int  )1;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&legreqflag;
  sqlstm.sqhstl[2] = (unsigned int  )1;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&txnserno;
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



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);

	}
	else
	{
		/* EXEC SQL
			DELETE FROM LEGACY_REVERSAL WHERE
			APPLID = :appl_id AND LEGREQFLAG = :legreqflag; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "delete  from LEGACY_REVERSAL  where (APPLID=:b0 and LEGREQF\
LAG=:b1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )256;
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
  sqlstm.sqhstv[1] = (         void  *)&legreqflag;
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



		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);

	}
	if((SQLCODE) && !(NO_DATA_FOUND))
	{
#ifdef DEBUG
		userlog("delete_from_legacy_reversal: Delete from legacy_reversal failed ");	
#endif
		strcpy(prog_log.remarks,"delete_from_legacy_reversal :Delete from legacy_reversal failed ");
		sprintf(excep_log.error_msg,"delete_from_legacy_reversal : Delete from legacy_reversal failed  :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return DELETE_ERROR;
	}

	return GMPC_GOOD;
}


/****************************************************************************/
/* Function name: update_rev_msgid											*/
/* Description	: This function												*/
/* Input		: char appl_id[APP_ID_SIZE]									*/
/* Return values: GMPC_GOOD, ret,INSERT_ERROR								*/
/* Limitations	:															*/
/****************************************************************************/
int update_rev_msgid(char *legmsgid, char *revmsgid, int revreqstat, char agencyid, char *appl_id,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char legreqflag;
		char checkagency;
		char applid[APP_ID_SIZE] = {0};
		int txnserno;
		/* varchar userid[USER_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } userid;

		char branchcode[BRANCH_CODE_SIZE];
		/* varchar leg_msgid[MSG_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[25]; } leg_msgid;

		/* varchar rev_msg_id[MSG_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[25]; } rev_msg_id;

		int revreq_stat;
		int rec_nos = 0;
		char afis_agency = AFIS_ID;
		long reqid = 0;

		short int leg_msgid_ind = -1;
		short int rev_msg_id_ind = -1;
		short int legreqflag_ind = 0;
		short int checkagency_ind = 0;
		short int applid_ind = 0;
		short int txnserno_ind = 0;
		short int userid_ind = 0;
		short int branchcode_ind = 0;
sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	int ret_val = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

#ifdef DEBUG
	userlog("Inside function update_rev_msgid()");
	userlog("legmsgid = %s",legmsgid);
	userlog("revmsgid = %s",revmsgid);
	userlog("revreqstat = %d",revreqstat);
#endif

	if (legmsgid[0] != '\0')
	{
		strcpy((char *)leg_msgid.arr, legmsgid);
		setlen(leg_msgid);
		leg_msgid_ind = 0;
	}

	if (revmsgid[0] != '\0')
	{
		strcpy((char *)rev_msg_id.arr, revmsgid);
		setlen(rev_msg_id);
		rev_msg_id_ind = 0;
	}

	revreq_stat = revreqstat;

	if (agencyid != PDRM_ID)
	{
		/* EXEC SQL
			SELECT LEGREQFLAG, CHECKAGENCY, APPLID, 
			TXNSERNO, USERID, BRANCHCODE 
			INTO :legreqflag:legreqflag_ind, :checkagency:checkagency_ind, 
			   :applid:applid_ind, :txnserno:txnserno_ind,
			   :userid:userid_ind, :branchcode:branchcode_ind
			FROM IJPN_LEGACY_REQUEST
			WHERE LEGMSGID = :leg_msgid
			AND CHECKAGENCY <> :afis_agency
			AND ROWNUM = 1; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select LEGREQFLAG ,CHECKAGENCY ,APPLID ,TXNSERNO ,USERID ,B\
RANCHCODE into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11  from IJPN_LEGACY_R\
EQUEST where ((LEGMSGID=:b12 and CHECKAGENCY<>:b13) and ROWNUM=1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )279;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&legreqflag;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&legreqflag_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&checkagency;
  sqlstm.sqhstl[1] = (unsigned int  )1;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&checkagency_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)applid;
  sqlstm.sqhstl[2] = (unsigned int  )20;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&applid_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&txnserno;
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&txnserno_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&userid;
  sqlstm.sqhstl[4] = (unsigned int  )11;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&userid_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)branchcode;
  sqlstm.sqhstl[5] = (unsigned int  )7;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&branchcode_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&leg_msgid;
  sqlstm.sqhstl[6] = (unsigned int  )27;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&afis_agency;
  sqlstm.sqhstl[7] = (unsigned int  )1;
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


	}
	else
	{
		strcpy(applid, appl_id);
		checkagency = agencyid;

		/* EXEC SQL
			SELECT LEGREQFLAG, TXNSERNO, USERID, BRANCHCODE 
			INTO :legreqflag:legreqflag_ind, :txnserno:txnserno_ind,
			   :userid:userid_ind, :branchcode:branchcode_ind
			FROM IJPN_LEGACY_REQUEST
			WHERE APPLID = :applid
			AND CHECKAGENCY = :checkagency
			AND ROWNUM = 1; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 8;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select LEGREQFLAG ,TXNSERNO ,USERID ,BRANCHCODE into :b0:b1\
,:b2:b3,:b4:b5,:b6:b7  from IJPN_LEGACY_REQUEST where ((APPLID=:b8 and CHECKAG\
ENCY=:b9) and ROWNUM=1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )326;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&legreqflag;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&legreqflag_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&txnserno;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&txnserno_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&userid;
  sqlstm.sqhstl[2] = (unsigned int  )11;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&userid_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)branchcode;
  sqlstm.sqhstl[3] = (unsigned int  )7;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&branchcode_ind;
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
  sqlstm.sqhstv[5] = (         void  *)&checkagency;
  sqlstm.sqhstl[5] = (unsigned int  )1;
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

	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);

	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("update_rev_msgid: Select from LEGACY_REQUEST failed ");	
#endif
		strcpy(prog_log.remarks,"update_rev_msgid :Select from LEGACY_REQUEST failed ");
		sprintf(excep_log.error_msg,"update_rev_msgid : Select from LEGACY_REQUEST failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}

	setnull(userid);

	ret_val = 0;
	if((ret_val = delete_from_legacy_reversal(applid, txnserno, checkagency, legreqflag,ctx)) != GMPC_GOOD)
	{
#ifdef DEBUG
		userlog("REV_GMPC_APPL: After delete_from_legacy_request Failed");
#endif
		strcpy(prog_log.remarks,"REV_GMPC_APPL : delete_from_legacy_request() Failed");
		sprintf(excep_log.error_msg,"REV_GMPC_APPL :delete_from_legacy_request() Failed");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		return ret_val;
	}
	
	/* EXEC SQL SELECT MESSAGEID.NEXTVAL
			 INTO :reqid
			 FROM DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 8;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select MESSAGEID.nextval  into :b0  from DUAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )365;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&reqid;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(long);
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


		sqlmsg[0] = '\0';
		strcpy(sqlmsg, SQLMSG);

	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("update_rev_msgid: Select MESSAGEID failed ");	
#endif
		strcpy(prog_log.remarks,"update_rev_msgid :Select MESSAGEID failed ");
		sprintf(excep_log.error_msg,"update_rev_msgid : Select MESSAGEID failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}

#ifdef DEBUG
		userlog("update_rev_msgid: reqid :%d:",reqid);
		userlog("update_rev_msgid: rev_msg_id_ind :%d:",rev_msg_id_ind);
		userlog("update_rev_msgid: rev_msg_id :%s:",rev_msg_id.arr);
#endif

	/* EXEC SQL
		INSERT INTO LEGACY_REVERSAL(LEGREQMSGID, LEGMSGID, LEGREQSTAT, 
		LEGREQDATETIME, LEGREQFLAG, CHECKAGENCY, APPLID, 
		TXNSERNO, USERID, BRANCHCODE)
		VALUES(:reqid, DECODE(:rev_msg_id_ind, 0, :rev_msg_id, :reqid), :revreq_stat, sysdate, 
		:legreqflag:legreqflag_ind, :checkagency:checkagency_ind, 
		:applid:applid_ind, :txnserno:txnserno_ind,
		:userid:userid_ind, :branchcode:branchcode_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 11;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into LEGACY_REVERSAL (LEGREQMSGID,LEGMSGID,LEGREQSTAT\
,LEGREQDATETIME,LEGREQFLAG,CHECKAGENCY,APPLID,TXNSERNO,USERID,BRANCHCODE) valu\
es (:b0,DECODE(:b1,0,:b2,:b0),:b4,sysdate,:b5:b6,:b7:b8,:b9:b10,:b11:b12,:b13:\
b14,:b15:b16)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )384;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&reqid;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(long);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&rev_msg_id_ind;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(short);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&rev_msg_id;
 sqlstm.sqhstl[2] = (unsigned int  )27;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&reqid;
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(long);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&revreq_stat;
 sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&legreqflag;
 sqlstm.sqhstl[5] = (unsigned int  )1;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&legreqflag_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&checkagency;
 sqlstm.sqhstl[6] = (unsigned int  )1;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&checkagency_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)applid;
 sqlstm.sqhstl[7] = (unsigned int  )20;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&applid_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&txnserno;
 sqlstm.sqhstl[8] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&txnserno_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&userid;
 sqlstm.sqhstl[9] = (unsigned int  )11;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&userid_ind;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)branchcode;
 sqlstm.sqhstl[10] = (unsigned int  )7;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)&branchcode_ind;
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


	
	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);

	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("update_rev_msgid: Insert into legacy_reversal failed ");	
#endif
		strcpy(prog_log.remarks,"update_rev_msgid :Insert into legacy_reversal failed failed ");
		sprintf(excep_log.error_msg,"update_rev_msgid : Insert into legacy_reversal failed failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return INSERT_ERROR;
	}

	if (agencyid != PDRM_ID)
	{
		/* EXEC SQL
			UPDATE IJPN_LEGACY_REQUEST SET REVMSGID = :rev_msg_id
			WHERE LEGMSGID = :leg_msgid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 11;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update IJPN_LEGACY_REQUEST  set REVMSGID=:b0 where LEGMSGID\
=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )443;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&rev_msg_id;
  sqlstm.sqhstl[0] = (unsigned int  )27;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&leg_msgid;
  sqlstm.sqhstl[1] = (unsigned int  )27;
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
		/* EXEC SQL
			UPDATE IJPN_LEGACY_REQUEST SET REVMSGID = :reqid
			WHERE APPLID = :applid
			AND CHECKAGENCY = :checkagency; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 11;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update IJPN_LEGACY_REQUEST  set REVMSGID=:b0 where (APPLID=\
:b1 and CHECKAGENCY=:b2)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )466;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&reqid;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(long);
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
  sqlstm.sqhstv[2] = (         void  *)&checkagency;
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


	}

	sqlmsg[0] = '\0';
	strcpy(sqlmsg, SQLMSG);

	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("update_rev_msgid: Update legacy_reversal failed ");	
#endif
		strcpy(prog_log.remarks,"update_rev_msgid :Update legacy_reversal failed ");
		sprintf(excep_log.error_msg,"update_rev_msgid : Update legacy_reversal failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return UPDATE_ERROR;
	}

	return GMPC_GOOD;
}


/****************************************************************************/
/* Function name: insert_into_legacy_revarsal											*/
/* Description	: This function												*/
/* Input		: char appl_id[APP_ID_SIZE]									*/
/* Return values: GMPC_GOOD, ret,INSERT_ERROR								*/
/* Limitations	:															*/
/****************************************************************************/
int insert_into_legacy_revarsal(HEADER_T header, int jpn_flag, int jpj_flag, int pdrm_flag, char *reject_code, char *reject_reason, char *revmsgid, char lrflag,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char legreqflag;
		char checkagency_jpn = JPN_ID;
		char checkagency_jpj = JPJ_ID;
		char checkagency_pdrm = PDRM_ID;
		char applid[APP_ID_SIZE] = {0};
		/* varchar userid[USER_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } userid;

		char branchcode[BRANCH_CODE_SIZE];
		int rec_nos = 0;

		short int legreqflag_ind = -1;
		short int checkagency_ind = 0;
		short int applid_ind = 0;
		short int userid_ind = 0;
		short int branchcode_ind = 0;

		/* varchar  rej_code[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } rej_code
 = {0};

		short    rej_code_ind = -1;
		/* varchar  rej_reason[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } rej_reason
 = {0};

		short    rej_reason_ind = -1;
		/* varchar leg_msgid[MSG_ID_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[25]; } leg_msgid
 = {0};

		short   leg_msgid_ind = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN



	strcpy(applid, header.application_id);
	strcpy((char *)userid.arr, header.user_id);
	setlen(userid);
	strcpy(branchcode, header.branch_code);
	//legreqflag = UNKNOWN;
	legreqflag = lrflag;

	if(legreqflag != '\0')
		legreqflag_ind = 0;

	userlog("1. reject_code, reject_reason : %s, %s",reject_code,reject_reason);

	strcpy(rej_code.arr, reject_code);
	setlen(rej_code);
	
	strcpy(rej_reason.arr, reject_reason);
	setlen(rej_reason);

	strcpy(leg_msgid.arr, revmsgid);
	setlen(leg_msgid);	

	userlog("2. reject_code, reject_reason : %s, %s", rej_code.arr, rej_reason.arr);

	if(rej_code.arr[0] != '\0')
		rej_code_ind = 0;

	if(rej_reason.arr[0] != '\0')
		rej_reason_ind = 0;

	if(leg_msgid.arr[0] != '\0')
		leg_msgid_ind = 0;


	if(jpn_flag == TRUE)
	{
		/* EXEC SQL
			INSERT INTO LEGACY_REVERSAL(LEGREQMSGID, 
			LEGREQDATETIME, LEGREQFLAG, CHECKAGENCY, APPLID, 
			USERID, BRANCHCODE,LEGREJREASON,LEGMSGID,LEGREQSTAT)
			VALUES(MESSAGEID.NEXTVAL, sysdate, 
			:legreqflag:legreqflag_ind, :checkagency_jpn:checkagency_ind, 
			:applid:applid_ind, :userid:userid_ind, 
			:branchcode:branchcode_ind,
			:rej_reason:rej_reason_ind,
			:leg_msgid:leg_msgid_ind,-2); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 11;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into LEGACY_REVERSAL (LEGREQMSGID,LEGREQDATETIME,LEG\
REQFLAG,CHECKAGENCY,APPLID,USERID,BRANCHCODE,LEGREJREASON,LEGMSGID,LEGREQSTAT)\
 values (MESSAGEID.nextval ,sysdate,:b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b1\
1,:b12:b13,(-2))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )493;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&legreqflag;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&legreqflag_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&checkagency_jpn;
  sqlstm.sqhstl[1] = (unsigned int  )1;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&checkagency_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)applid;
  sqlstm.sqhstl[2] = (unsigned int  )20;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&applid_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&userid;
  sqlstm.sqhstl[3] = (unsigned int  )11;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&userid_ind;
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
  sqlstm.sqhstv[5] = (         void  *)&rej_reason;
  sqlstm.sqhstl[5] = (unsigned int  )163;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&rej_reason_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&leg_msgid;
  sqlstm.sqhstl[6] = (unsigned int  )27;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&leg_msgid_ind;
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



		
			sqlmsg[0] = '\0';
			strcpy(sqlmsg, SQLMSG);

			if(SQLCODE)
			{
	#ifdef DEBUG
				userlog("insert_into_legacy_revarsal: Insert into legacy_reversal failed ");	
	#endif
				strcpy(prog_log.remarks,"update_rev_msgid :Insert into legacy_reversal failed failed ");
				sprintf(excep_log.error_msg,"update_rev_msgid : Insert into legacy_reversal failed failed :%s ",sqlmsg);
				excep_log.termination_flag = 'Y';
				excep_log.severity = FATAL;
				log_error(ctx);
				return INSERT_ERROR;
			}
	}

	if(jpj_flag == TRUE)
	{
		/* EXEC SQL
			INSERT INTO LEGACY_REVERSAL(LEGREQMSGID, 
			LEGREQDATETIME, LEGREQFLAG, CHECKAGENCY, APPLID, 
			USERID, BRANCHCODE,LEGREJREASON,LEGMSGID,LEGREQSTAT)
			VALUES(MESSAGEID.NEXTVAL, sysdate, 
			:legreqflag:legreqflag_ind, :checkagency_jpj:checkagency_ind, 
			:applid:applid_ind, :userid:userid_ind, 
			:branchcode:branchcode_ind,
			:rej_reason:rej_reason_ind,
			:leg_msgid:leg_msgid_ind,-2); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 11;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into LEGACY_REVERSAL (LEGREQMSGID,LEGREQDATETIME,LEG\
REQFLAG,CHECKAGENCY,APPLID,USERID,BRANCHCODE,LEGREJREASON,LEGMSGID,LEGREQSTAT)\
 values (MESSAGEID.nextval ,sysdate,:b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b1\
1,:b12:b13,(-2))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )536;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&legreqflag;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&legreqflag_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&checkagency_jpj;
  sqlstm.sqhstl[1] = (unsigned int  )1;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&checkagency_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)applid;
  sqlstm.sqhstl[2] = (unsigned int  )20;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&applid_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&userid;
  sqlstm.sqhstl[3] = (unsigned int  )11;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&userid_ind;
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
  sqlstm.sqhstv[5] = (         void  *)&rej_reason;
  sqlstm.sqhstl[5] = (unsigned int  )163;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&rej_reason_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&leg_msgid;
  sqlstm.sqhstl[6] = (unsigned int  )27;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&leg_msgid_ind;
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


		
			sqlmsg[0] = '\0';
			strcpy(sqlmsg, SQLMSG);

			if(SQLCODE)
			{
	#ifdef DEBUG
				userlog("update_rev_msgid: Insert into legacy_reversal failed ");	
	#endif
				strcpy(prog_log.remarks,"update_rev_msgid :Insert into legacy_reversal failed failed ");
				sprintf(excep_log.error_msg,"update_rev_msgid : Insert into legacy_reversal failed failed :%s ",sqlmsg);
				excep_log.termination_flag = 'Y';
				excep_log.severity = FATAL;
				log_error(ctx);
				return INSERT_ERROR;
			}
	}

	if(pdrm_flag == TRUE)
	{
		/* EXEC SQL
			INSERT INTO LEGACY_REVERSAL(LEGREQMSGID, 
			LEGREQDATETIME, LEGREQFLAG, CHECKAGENCY, APPLID, 
			USERID, BRANCHCODE,LEGREJREASON,LEGMSGID,LEGREQSTAT)
			VALUES(MESSAGEID.NEXTVAL, sysdate, 
			:legreqflag:legreqflag_ind, :checkagency_pdrm:checkagency_ind, 
			:applid:applid_ind, :userid:userid_ind, 
			:branchcode:branchcode_ind,
			:rej_reason:rej_reason_ind,
			:leg_msgid:leg_msgid_ind,-2); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 11;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into LEGACY_REVERSAL (LEGREQMSGID,LEGREQDATETIME,LEG\
REQFLAG,CHECKAGENCY,APPLID,USERID,BRANCHCODE,LEGREJREASON,LEGMSGID,LEGREQSTAT)\
 values (MESSAGEID.nextval ,sysdate,:b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b1\
1,:b12:b13,(-2))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )579;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&legreqflag;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&legreqflag_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&checkagency_pdrm;
  sqlstm.sqhstl[1] = (unsigned int  )1;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&checkagency_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)applid;
  sqlstm.sqhstl[2] = (unsigned int  )20;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&applid_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&userid;
  sqlstm.sqhstl[3] = (unsigned int  )11;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&userid_ind;
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
  sqlstm.sqhstv[5] = (         void  *)&rej_reason;
  sqlstm.sqhstl[5] = (unsigned int  )163;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&rej_reason_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&leg_msgid;
  sqlstm.sqhstl[6] = (unsigned int  )27;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&leg_msgid_ind;
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


		
			sqlmsg[0] = '\0';
			strcpy(sqlmsg, SQLMSG);

			if(SQLCODE)
			{
	#ifdef DEBUG
				userlog("update_rev_msgid: Insert into legacy_reversal failed ");	
	#endif
				strcpy(prog_log.remarks,"update_rev_msgid :Insert into legacy_reversal failed failed ");
				sprintf(excep_log.error_msg,"update_rev_msgid : Insert into legacy_reversal failed failed :%s ",sqlmsg);
				excep_log.termination_flag = 'Y';
				excep_log.severity = FATAL;
				log_error(ctx);
				return INSERT_ERROR;
			}
	}

	return GMPC_GOOD;
}

/****************************************************************************/
/* Function name: send_idtokpt_rev											*/
/* Description	: This function												*/
/* Input		: appl_id[APP_ID_SIZE]									*/
/* Return values: GMPC_GOOD												*/
/* Limitations	:															*/
/****************************************************************************/
int send_idtokpt_rev(char *applid, char *rev_msg_id, APPL_INFO_T* appl_info, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar hv_address1[ADDRESS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } hv_address1
 = {0};

	short int hv_address1_ind = 0;
	/* varchar hv_address2[ADDRESS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } hv_address2
 = {0};

	short int hv_address2_ind = 0;
	/* varchar hv_address3[ADDRESS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } hv_address3
 = {0};

	short int hv_address3_ind = 0;
	char hv_applid[APP_ID_SIZE];
	short int hv_applid_ind = 0;
	char hv_kptno[KPT_SIZE];
	char hv_birthdate[DATE_SIZE];
	short int hv_birthdate_ind = 0;
	int hv_citycode;
	short int hv_citycode_ind = 0;
	char hv_gender;
	short int hv_gender_ind = 0;
	/* varchar hv_gmpcshortname1[GMPC_SNAME1_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } hv_gmpcshortname1
 = {0};

	short int hv_gmpcshortname1_ind = 0;
	/* varchar hv_gmpcshortname2[GMPC_SNAME1_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } hv_gmpcshortname2
 = {0};

	short int hv_gmpcshortname2_ind = 0;
	/* varchar hv_gmpcshortname3[GMPC_SNAME3_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } hv_gmpcshortname3
 = {0};

	short int hv_gmpcshortname3_ind = 0;
	/* varchar hv_postcode[POST_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[6]; } hv_postcode
 = {0};

	short int hv_postcode_ind = 0;
	char hv_statecode[STATE_CODE_SIZE];
	short int hv_statecode_ind = 0;
	/* varchar hv_licidno[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_licidno
 = {0};

	short int hv_licidno_ind = 0;
	char hv_ownercat = 0;
	short int hv_ownercat_ind = 0;
	char hv_gmpc_stat = 0;
	short int hv_gmpc_stat_ind = -1;

	/* Added for IJPN */
	/* varchar reason_desc[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } reason_desc
 = {0};

	short reason_desc_ind = -1;
	/* varchar rejectcode[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } rejectcode
 = {0};

	short rejectcode_ind = -1;	
	char branch_code[7] = {0};
	/* End for IJPN */

	char  tstamp[DATE_TIME_SIZE]= {0};
	short tstamp_ind = -1;

	/* varchar wsid[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } wsid
 = {0};

	short wsid_ind = -1;

	/* varchar  txnwsid[WS_ID_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[16]; } txnwsid
 = {0};

	short txnwsid_ind = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int ret_val = 0;
	int error_code = 0;
	unsigned char msg_id[MSG_ID_SIZE] = {0};
	LI_REV_UPD_ID_TO_KPT_REQ_T rev_id_to_kpt_req;
	
	LI_REFER_TIMESTAMP_T refer_timestamp;

	/* Added for IJPN */
	char pReplyMsg[LI_REPLY_MSG_SIZE] = {0};
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE] = {0};
    /* End for IJPN */
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	#ifdef DEBUG
		userlog(" In update_id_to_kpt_rev() function ");
		userlog(" update_id_to_kpt_rev : Input Application Id is %s", applid);
		userlog(" update_id_to_kpt_rev : Input KPT Number is %s", appl_info->kpt_number);
		userlog(" update_id_to_kpt_rev : Input LICID Number is %s", appl_info->lic_id_no);
		userlog(" update_id_to_kpt_rev : Input ownercat is %c", appl_info->ownercat);
	#endif

	strcpy(hv_applid, applid);
	strcpy(hv_kptno, appl_info->kpt_number);
	strcpy((char *)hv_licidno.arr, appl_info->lic_id_no);
	setlen(hv_licidno);
	hv_ownercat = appl_info->ownercat;


	/* EXEC SQL 
		SELECT ADDRESS1, ADDRESS2, ADDRESS3, TO_CHAR(BIRTHDATE, 'DDMMYYYY'), 
		CITYCODE, GENDER, GMPCSHORTNAME1, GMPCSHORTNAME2, GMPCSHORTNAME3, 
		POSTCODE, STATECODE  
		INTO :hv_address1:hv_address1_ind, :hv_address2:hv_address2_ind, 
		:hv_address3:hv_address3_ind, :hv_birthdate:hv_birthdate_ind, 
		:hv_citycode:hv_citycode_ind, :hv_gender:hv_gender_ind, 
		:hv_gmpcshortname1:hv_gmpcshortname1_ind, :hv_gmpcshortname2:hv_gmpcshortname2_ind, 
		:hv_gmpcshortname3:hv_gmpcshortname3_ind, 
		:hv_postcode:hv_postcode_ind, :hv_statecode:hv_statecode_ind  
		FROM APPNT_JPN_INFO WHERE  APPLID = :hv_applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 12;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select ADDRESS1 ,ADDRESS2 ,ADDRESS3 ,TO_CHAR(BIRTHDATE,'DDMM\
YYYY') ,CITYCODE ,GENDER ,GMPCSHORTNAME1 ,GMPCSHORTNAME2 ,GMPCSHORTNAME3 ,POST\
CODE ,STATECODE into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11,:b12:b13,:b14\
:b15,:b16:b17,:b18:b19,:b20:b21  from APPNT_JPN_INFO where APPLID=:b22";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )622;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_address1;
 sqlstm.sqhstl[0] = (unsigned int  )43;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&hv_address1_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&hv_address2;
 sqlstm.sqhstl[1] = (unsigned int  )43;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&hv_address2_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&hv_address3;
 sqlstm.sqhstl[2] = (unsigned int  )43;
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
 sqlstm.sqhstv[4] = (         void  *)&hv_citycode;
 sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&hv_citycode_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&hv_gender;
 sqlstm.sqhstl[5] = (unsigned int  )1;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&hv_gender_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&hv_gmpcshortname1;
 sqlstm.sqhstl[6] = (unsigned int  )33;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&hv_gmpcshortname1_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&hv_gmpcshortname2;
 sqlstm.sqhstl[7] = (unsigned int  )33;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&hv_gmpcshortname2_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&hv_gmpcshortname3;
 sqlstm.sqhstl[8] = (unsigned int  )23;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&hv_gmpcshortname3_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&hv_postcode;
 sqlstm.sqhstl[9] = (unsigned int  )8;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&hv_postcode_ind;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)hv_statecode;
 sqlstm.sqhstl[10] = (unsigned int  )3;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)&hv_statecode_ind;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)hv_applid;
 sqlstm.sqhstl[11] = (unsigned int  )20;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)0;
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




	setnull(hv_address1);
	setnull(hv_address2);
	setnull(hv_address3);
	setnull(hv_gmpcshortname1);
	setnull(hv_gmpcshortname2);
	setnull(hv_gmpcshortname3);
	setnull(hv_postcode);


	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog(" update_id_to_kpt_rev : error while selecting from table APPNT_JPN_INFO : %s", SQLMSG);
	#endif

		sprintf(excep_log.error_msg, "update_id_to_kpt_rev : error while selecting from table APPNT_JPN_INFO : %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'N';

		strcpy(prog_log.remarks, "update_id_to_kpt_rev : error while selecting from table APPNT_JPN_INFO");
		log_error(ctx);

		return SELECT_ERROR;
	}

	/* fill the actual data in LI_REV_UPD_ID_TO_KPT_REQ_T type structure*/
	memset(&rev_id_to_kpt_req, 0, sizeof(LI_REV_UPD_ID_TO_KPT_REQ_T));

	if((appl_info->kpt_number[0] != '\0') && (appl_info->kpt_number[0] != ' '))
		strcpy(rev_id_to_kpt_req.kpt_number, appl_info->kpt_number);

	if((appl_info->lic_id_no[0] != '\0') && (appl_info->lic_id_no[0] != ' '))
		strcpy(rev_id_to_kpt_req.license_id, appl_info->lic_id_no);

	/* Added on 10/10/2001 - Now KPP will be sent in license Id field */
	if((ret_val = get_applicant_kpp(appl_info->kpt_number, rev_id_to_kpt_req.license_id,ctx)) != GMPC_GOOD)
	{
		/* Skip sending this message, go for next */
		return ret_val;
	}
	rev_id_to_kpt_req.new_category_of_owner = appl_info->newownercat;
	rev_id_to_kpt_req.category_of_owner = appl_info->ownercat;

	if (hv_gmpcshortname1_ind != -1)
		strcpy(rev_id_to_kpt_req.gmpc_short_name1, (char *)hv_gmpcshortname1.arr);
	
	if (hv_gmpcshortname2_ind != -1)
		strcpy(rev_id_to_kpt_req.gmpc_short_name2, (char *)hv_gmpcshortname2.arr);
	
	if (hv_gmpcshortname3_ind != -1)
		strcpy(rev_id_to_kpt_req.gmpc_short_name3, (char *)hv_gmpcshortname3.arr);

	if (hv_address1_ind != -1)
		strcpy(rev_id_to_kpt_req.address.address1, (char *)hv_address1.arr);

	if (hv_address2_ind != -1)
		strcpy(rev_id_to_kpt_req.address.address2, (char *)hv_address2.arr);

	if (hv_address3_ind != -1)
		strcpy(rev_id_to_kpt_req.address.address3, (char *)hv_address3.arr);

	if (hv_postcode_ind != -1)
		strcpy(rev_id_to_kpt_req.address.post_code, (char *)hv_postcode.arr);
		
	if (hv_citycode_ind != -1)
		rev_id_to_kpt_req.address.city_code = hv_citycode;

	if (hv_statecode_ind != -1)
		strcpy(rev_id_to_kpt_req.address.state_code, hv_statecode);

	if (hv_birthdate_ind != -1)
		strcpy(rev_id_to_kpt_req.dob, hv_birthdate);

	if (hv_gender_ind != -1)
		rev_id_to_kpt_req.gender = hv_gender;



	#ifdef DEBUG
		userlog(" rev_id_to_kpt_req.license_id %s", rev_id_to_kpt_req.license_id);
		userlog(" rev_id_to_kpt_req.new_category_of_owner %c", rev_id_to_kpt_req.new_category_of_owner);
		userlog(" rev_id_to_kpt_req.category_of_owner %c", rev_id_to_kpt_req.category_of_owner);
		userlog(" rev_id_to_kpt_req.kpt_number %s", rev_id_to_kpt_req.kpt_number);
		userlog(" rev_id_to_kpt_req.gmpc_short_name1 %s", rev_id_to_kpt_req.gmpc_short_name1);
		userlog(" rev_id_to_kpt_req.gmpc_short_name2 %s", rev_id_to_kpt_req.gmpc_short_name2);
		userlog(" rev_id_to_kpt_req.gmpc_short_name3 %s", rev_id_to_kpt_req.gmpc_short_name3);
		userlog(" rev_id_to_kpt_req.address.address1 %s", rev_id_to_kpt_req.address.address1);
		userlog(" rev_id_to_kpt_req.address.address2 %s", rev_id_to_kpt_req.address.address2);
		userlog(" rev_id_to_kpt_req.address.address3 %s", rev_id_to_kpt_req.address.address3);
		userlog(" rev_id_to_kpt_req.address.post_code %s", rev_id_to_kpt_req.address.post_code);
		userlog(" rev_id_to_kpt_req.address.city_code %d", rev_id_to_kpt_req.address.city_code);
		userlog(" rev_id_to_kpt_req.address.state_code %s", rev_id_to_kpt_req.address.state_code);
		userlog(" rev_id_to_kpt_req.dob %s", rev_id_to_kpt_req.dob);
		userlog(" rev_id_to_kpt_req.gender %c", rev_id_to_kpt_req.gender);
	#endif

	hv_address1.arr[0] = '\0';
	hv_address1.len = 0;
	hv_address1_ind = 0;
	hv_address2.arr[0] = '\0';
	hv_address2.len = 0;
	hv_address2_ind = 0;
	hv_address3.arr[0] = '\0';
	hv_address3.len = 0;
	hv_address3_ind = 0;
	hv_birthdate[0] = '\0';
	hv_birthdate_ind = 0;
	hv_citycode = 0;
	hv_citycode_ind = 0;
	hv_gender = '\0';
	hv_gender_ind = 0;
	hv_gmpcshortname1.arr[0] = '\0';
	hv_gmpcshortname1.len = 0;
	hv_gmpcshortname1_ind = 0;
	hv_gmpcshortname2.arr[0] = '\0';
	hv_gmpcshortname2.len = 0;
	hv_gmpcshortname2_ind = 0;
	hv_gmpcshortname3.arr[0] = '\0';
	hv_gmpcshortname3.len = 0;
	hv_gmpcshortname3_ind = 0;
	hv_postcode.arr[0] = '\0';
	hv_postcode.len = 0;
	hv_postcode_ind = 0;
	hv_statecode[0] = '\0';
	hv_statecode_ind = 0;

	/* EXEC SQL 
		SELECT ADDRESS1, ADDRESS2, ADDRESS3, TO_CHAR(BIRTHDATE, 'DDMMYYYY'), 
		CITYCODE, GENDER, GMPCSHORTNAME1, GMPCSHORTNAME2, GMPCSHORTNAME3, 
		POSTCODE, STATECODE  
		INTO :hv_address1:hv_address1_ind, :hv_address2:hv_address2_ind, 
		:hv_address3:hv_address3_ind, :hv_birthdate:hv_birthdate_ind, 
		:hv_citycode:hv_citycode_ind, :hv_gender:hv_gender_ind, 
		:hv_gmpcshortname1:hv_gmpcshortname1_ind, :hv_gmpcshortname2:hv_gmpcshortname2_ind, 
		:hv_gmpcshortname3:hv_gmpcshortname3_ind, 
		:hv_postcode:hv_postcode_ind, :hv_statecode:hv_statecode_ind  
		FROM JPJ_INFO 
		WHERE LICIDNO = :hv_licidno
		AND OWNERCAT = :hv_ownercat; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select ADDRESS1 ,ADDRESS2 ,ADDRESS3 ,TO_CHAR(BIRTHDATE,'DDMM\
YYYY') ,CITYCODE ,GENDER ,GMPCSHORTNAME1 ,GMPCSHORTNAME2 ,GMPCSHORTNAME3 ,POST\
CODE ,STATECODE into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11,:b12:b13,:b14\
:b15,:b16:b17,:b18:b19,:b20:b21  from JPJ_INFO where (LICIDNO=:b22 and OWNERCA\
T=:b23)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )685;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_address1;
 sqlstm.sqhstl[0] = (unsigned int  )43;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&hv_address1_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&hv_address2;
 sqlstm.sqhstl[1] = (unsigned int  )43;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&hv_address2_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&hv_address3;
 sqlstm.sqhstl[2] = (unsigned int  )43;
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
 sqlstm.sqhstv[4] = (         void  *)&hv_citycode;
 sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&hv_citycode_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&hv_gender;
 sqlstm.sqhstl[5] = (unsigned int  )1;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&hv_gender_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&hv_gmpcshortname1;
 sqlstm.sqhstl[6] = (unsigned int  )33;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&hv_gmpcshortname1_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&hv_gmpcshortname2;
 sqlstm.sqhstl[7] = (unsigned int  )33;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&hv_gmpcshortname2_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&hv_gmpcshortname3;
 sqlstm.sqhstl[8] = (unsigned int  )23;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&hv_gmpcshortname3_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&hv_postcode;
 sqlstm.sqhstl[9] = (unsigned int  )8;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&hv_postcode_ind;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)hv_statecode;
 sqlstm.sqhstl[10] = (unsigned int  )3;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)&hv_statecode_ind;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&hv_licidno;
 sqlstm.sqhstl[11] = (unsigned int  )18;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)0;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&hv_ownercat;
 sqlstm.sqhstl[12] = (unsigned int  )1;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)0;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
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
	setnull(hv_gmpcshortname1);
	setnull(hv_gmpcshortname2);
	setnull(hv_gmpcshortname3);
	setnull(hv_postcode);


	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog(" update_id_to_kpt_rev : error while selecting from table JPN_INFO : %s", SQLMSG);
	#endif

		sprintf(excep_log.error_msg, "update_id_to_kpt_rev : error while selecting from table JPN_INFO : %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'N';

		strcpy(prog_log.remarks, "update_id_to_kpt_rev : error while selecting from table JPN_INFO");
		log_error(ctx);

		return SELECT_ERROR;
	}

	/* fill the remaining actual data in LI_REV_UPD_ID_TO_KPT_REQ_T type structure*/

	if (hv_gmpcshortname1_ind != -1)
		strcpy(rev_id_to_kpt_req.old_gmpc_short_name1, (char *)hv_gmpcshortname1.arr);
	
	if (hv_gmpcshortname2_ind != -1)
		strcpy(rev_id_to_kpt_req.old_gmpc_short_name2, (char *)hv_gmpcshortname2.arr);
	
	if (hv_gmpcshortname3_ind != -1)
		strcpy(rev_id_to_kpt_req.old_gmpc_short_name3, (char *)hv_gmpcshortname3.arr);

	if (hv_address1_ind != -1)
		strcpy(rev_id_to_kpt_req.old_address.address1, (char *)hv_address1.arr);

	if (hv_address2_ind != -1)
		strcpy(rev_id_to_kpt_req.old_address.address2, (char *)hv_address2.arr);

	if (hv_address3_ind != -1)
		strcpy(rev_id_to_kpt_req.old_address.address3, (char *)hv_address3.arr);

	if (hv_postcode_ind != -1)
		strcpy(rev_id_to_kpt_req.old_address.post_code, (char *)hv_postcode.arr);
		
	if (hv_citycode_ind != -1)
		rev_id_to_kpt_req.old_address.city_code = hv_citycode;

	if (hv_statecode_ind != -1)
		strcpy(rev_id_to_kpt_req.old_address.state_code, hv_statecode);

	if (hv_birthdate_ind != -1)
		strcpy(rev_id_to_kpt_req.old_dob, hv_birthdate);

	if (hv_gender_ind != -1)
		rev_id_to_kpt_req.old_gender = hv_gender;

	/* EXEC SQL SELECT GMPCSTATUS
			 INTO :hv_gmpc_stat:hv_gmpc_stat_ind
			 FROM JPJ_REVERSAL_INFO
			 WHERE LICIDNO = :hv_licidno
			 AND OWNERCAT = :hv_ownercat
			 AND ROWNUM = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select GMPCSTATUS into :b0:b1  from JPJ_REVERSAL_INFO where \
((LICIDNO=:b2 and OWNERCAT=:b3) and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )752;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_gmpc_stat;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&hv_gmpc_stat_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&hv_licidno;
 sqlstm.sqhstl[1] = (unsigned int  )18;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&hv_ownercat;
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



	if((SQLCODE != 0) && !(NO_DATA_FOUND))
	{
	#ifdef DEBUG
		userlog(" update_id_to_kpt_rev : error while selecting from table JPJ_REVERSAL_INFO : %s", SQLMSG);
	#endif

		sprintf(excep_log.error_msg, "update_id_to_kpt_rev : error while selecting from table JPJ_REVERSAL_INFO : %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'N';

		strcpy(prog_log.remarks, "update_id_to_kpt_rev : error while selecting from table JPJ_REVERSAL_INFO");
		log_error(ctx);

		return SELECT_ERROR;
	}

	if (hv_gmpc_stat_ind == 0)
		rev_id_to_kpt_req.old_gmpc_stat = hv_gmpc_stat;

	/*get the revesal description for the application*/
	ret_val = 0;
	ret_val = get_appl_remarks(applid, rev_id_to_kpt_req.rev_desc,ctx);
	if (ret_val != GMPC_GOOD) return ret_val;

	#ifdef DEBUG
		userlog(" rev_id_to_kpt_req.old_gmpc_short_name1 %s", rev_id_to_kpt_req.old_gmpc_short_name1);
		userlog(" rev_id_to_kpt_req.old_gmpc_short_name2 %s", rev_id_to_kpt_req.old_gmpc_short_name2);
		userlog(" rev_id_to_kpt_req.old_gmpc_short_name3 %s", rev_id_to_kpt_req.old_gmpc_short_name3);
		userlog(" rev_id_to_kpt_req.old_address.address1 %s", rev_id_to_kpt_req.old_address.address1);
		userlog(" rev_id_to_kpt_req.old_address.address2 %s", rev_id_to_kpt_req.old_address.address2);
		userlog(" rev_id_to_kpt_req.old_address.address3 %s", rev_id_to_kpt_req.old_address.address3);
		userlog(" rev_id_to_kpt_req.old_address.post_code %s", rev_id_to_kpt_req.old_address.post_code);
		userlog(" rev_id_to_kpt_req.old_address.city_code %d", rev_id_to_kpt_req.old_address.city_code);
		userlog(" rev_id_to_kpt_req.old_address.state_code %s", rev_id_to_kpt_req.old_address.state_code);
		userlog(" rev_id_to_kpt_req.old_dob %s", rev_id_to_kpt_req.old_dob);
		userlog(" rev_id_to_kpt_req.old_gender %c", rev_id_to_kpt_req.old_gender);
		userlog(" rev_id_to_kpt_req.old_gmpc_stat %c", rev_id_to_kpt_req.old_gmpc_stat);
		userlog(" rev_id_to_kpt_req.rev_desc %s", rev_id_to_kpt_req.rev_desc);
	#endif

	ret_val = 0;
	if (GMPC_GOOD != (ret_val = get_trans_date_time(applid, 0, ID_TO_KPT, refer_timestamp.refer_date, refer_timestamp.refer_time,ctx)))
		return ret_val;

	userlog("refer_timestamp.refer_date : %s",refer_timestamp.refer_date);
	userlog("refer_timestamp.refer_time : %s",refer_timestamp.refer_time);

	/* get the same ws id for reversal which is used for the payment on the same day only */

	/* EXEC SQL SELECT TRIM(TXNWSID) INTO :txnwsid:txnwsid_ind 
			FROM IJPN_LEGACY_REQUEST 
			WHERE APPLID = :applid
			AND TO_CHAR(LEGREQDATETIME,'DDMMYYYY') = TO_CHAR(SYSDATE,'DDMMYYYY')
			AND LEGREQSTAT = 0 
			AND LEGREQFLAG IN ('K') 
			AND ROWNUM = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select trim(TXNWSID) into :b0:b1  from IJPN_LEGACY_REQUEST w\
here ((((APPLID=:b2 and TO_CHAR(LEGREQDATETIME,'DDMMYYYY')=TO_CHAR(SYSDATE,'DD\
MMYYYY')) and LEGREQSTAT=0) and LEGREQFLAG in ('K')) and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )779;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&txnwsid;
 sqlstm.sqhstl[0] = (unsigned int  )18;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&txnwsid_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)applid;
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
		userlog("update_id_to_kpt_rev : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID : %s", SQLMSG);
	#endif

		sprintf(excep_log.error_msg, "update_id_to_kpt_rev : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID: %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';

		strcpy(prog_log.remarks, "update_id_to_kpt_rev : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID");
		log_error(ctx);
		
		return SELECT_ERROR; // stop the process if there is no record for update
	}

	setlen(txnwsid);
	setnull(txnwsid);

	userlog("update_id_to_kpt_rev : txnwsid : %s",txnwsid.arr);

	if(txnwsid_ind == 0)
	{
		li_p_header.workstation_id[0] = '\0';
		strcpy(li_p_header.workstation_id,txnwsid.arr);
	}
	

		/* EXEC SQL SELECT JPJUPDSEQ.NEXTVAL 
				INTO :wsid:wsid_ind
				FROM DUAL; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 13;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select JPJUPDSEQ.nextval  into :b0:b1  from DUAL ";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )802;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&wsid;
  sqlstm.sqhstl[0] = (unsigned int  )18;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&wsid_ind;
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
		userlog("update_id_to_kpt_rev : Selecting WS id from sequence LI_TXNWSID failed : %s", SQLMSG);
	#endif
		strcpy(prog_log.remarks,"send_payment_rev_jpj : Selecting WS id from sequence LI_TXNWSID failed ");
		sprintf(excep_log.error_msg, "send_payment_rev_jpj : Selecting WS id from sequence LI_TXNWSID failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}
	

	if(wsid_ind == 0)
	{
		setnull(wsid);
		strcat(li_p_header.workstation_id,":");
		strcat(li_p_header.workstation_id,wsid.arr);
	}

    
	userlog("update_id_to_kpt_rev : li_p_header.workstation_id : %s",li_p_header.workstation_id);

    
	/* EXEC SQL SELECT TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') INTO :tstamp
		FROM DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') into :b0  from D\
UAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )821;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)tstamp;
 sqlstm.sqhstl[0] = (unsigned int  )16;
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




	strncpy(li_p_header.trans_date, tstamp, 8);
	li_p_header.trans_date[DATE_SIZE - 1] = '\0';


	strncpy(li_p_header.trans_time, tstamp + 9, 6);
	li_p_header.trans_time[TIME_SIZE - 1] = '\0';

	userlog("update_id_to_kpt_rev : tstamp : %s",tstamp);
	userlog("update_id_to_kpt_rev : li_p_header.trans_date : %s",li_p_header.trans_date);
	userlog("update_id_to_kpt_rev : li_p_header.trans_time : %s",li_p_header.trans_time);


	/* Do li_init */
	/*if ( (ret_val = li_init(LI_JPJ_REV_ID_TO_KPT_UPD)) != GMPC_GOOD)
	{
		#ifdef DEBUG
			userlog("li_init LI_JPJ_REV_ID_TO_KPT_UPD function returned error: %d", ret_val);
		#endif

		excep_log.severity = FATAL;
		sprintf(excep_log.error_msg, "li_init LI_JPJ_REV_ID_TO_KPT_UPD function returned : %d", ret_val);
		excep_log.termination_flag = 'N';
		strcpy(prog_log.remarks, "li_init LI_JPJ_REV_ID_TO_KPT_UPD function returned");
		log_error(ctx);

		return ret_val;
	} Commented for IJPN */

	/* Putting the reversal ID to KPT Update request*/
	
	sErrMessage[0] = '\0';
	//ret_val = li_rev_upd_id_to_kpt_p(li_p_header, refer_timestamp, rev_id_to_kpt_req, msg_id, &error_code);
	ret_val = li_rev_upd_id_to_kpt_p(li_p_header, refer_timestamp, rev_id_to_kpt_req, msg_id, &error_code,pReplyMsg, &iReplyMsgLen, sErrMessage);

	if(ret_val != GMPC_GOOD)
	{	
	#ifdef DEBUG
			userlog(" li_rev_upd_id_to_kpt_p function returned error: %d", error_code);
			userlog(" li_rev_upd_id_to_kpt_p function returned sErrMessage: %s", sErrMessage);
	#endif

		strcpy(rev_msg_id, (char *)msg_id);

		if(sErrMessage[0] != '\0')
		{
		strncpy(rejectcode.arr,sErrMessage,8);
		setlen(rejectcode);

		strcpy(reason_desc.arr,sErrMessage);
		setlen(reason_desc);
		}

		userlog("rejectcode : %s",rejectcode.arr);
		userlog("reason_desc : %s",reason_desc.arr);
		
		strcpy(reject_code, (char *)rejectcode.arr);
		strcpy(reject_reason, (char *)reason_desc.arr);

		userlog("reject_code, reject_reason after copying: %s, %s",reject_code,reject_reason);


		excep_log.severity = FATAL;
		sprintf(excep_log.error_msg, "li_rev_upd_id_to_kpt_p returned error : %d", error_code);
		excep_log.termination_flag = 'Y';
		strcpy(prog_log.remarks, "li_rev_upd_id_to_kpt_p returned error");
		log_error(ctx);

	
			if (error_code == 0)
				return ret_val;
			else
				return error_code;
	
		
	}
	else
	{
		#ifdef DEBUG
			userlog(" li_rev_upd_id_to_kpt_p successfull");
		#endif
		
	}

	strcpy(rev_msg_id, (char *)msg_id);
	//li_end();
	return GMPC_GOOD;
}

/****************************************************************************/
/* Function name: send_summons_cancel											*/
/* Description	: This function												*/
/* Input		: appl_id[APP_ID_SIZE]									*/
/* Return values: GMPC_GOOD												*/
/* Limitations	:															*/
/****************************************************************************/
int send_summons_cancel(char *applid, int txnserno, APPL_INFO_T* appl_info, LI_P_HEADER_T li_p_header,  char *reject_code, char *reject_reason, char *revmsgid,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE];
	short int hv_applid_ind = 0;
	char hv_issuedbranchcode[BRANCH_CODE_SIZE];
	short int hv_issuedbranchcode_ind = 0;
	char hv_summdate[SUMMON_ISSUE_YEAR_SIZE];
	short int hv_summdate_ind = 0;
	/* varchar hv_summissuedcode[SUMMON_ISSUE_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } hv_summissuedcode
 = {0};

	short int hv_summissuedcode_ind = 0;
	/* varchar hv_summno[SUMMON_NO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[11]; } hv_summno
 = {0};

	short int hv_summno_ind = 0;
	char hv_summtype;
	short int hv_summtype_ind = 0;
	int hv_txnserno;
	short int hv_txnserno_ind = 0;
	/* varchar hv_appl_remarks[REMARK_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[61]; } hv_appl_remarks
 = {0};

	char agency = 0;

	/* Added for IJPN */
	/* varchar reason_desc[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } reason_desc
 = {0};

	short reason_desc_ind = -1;
	/* varchar rejectcode[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } rejectcode
 = {0};

	short rejectcode_ind = -1;	
	char branch_code[7] = {0};
	/* End for IJPN */

	char  tstamp[DATE_TIME_SIZE]= {0};
	short tstamp_ind = -1;

	/* varchar wsid[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } wsid
 = {0};

	short wsid_ind = -1;

	/* varchar  txnwsid[WS_ID_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[16]; } txnwsid
 = {0};

	short txnwsid_ind = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int ret_val = 0;
	int fin_count = 0;
	int error_code = 0;
	unsigned char msg_id[MSG_ID_SIZE] = {0};
	LI_REV_UPD_SUMMONS_REQ_T rev_summons_req;
	FIN_DATA_T *fin_data;
	LI_PUT_FIN_DATA_T li_fin_data;
	LI_REFER_TIMESTAMP_T refer_timestamp;


		
	/* Added for IJPN */
	char pReplyMsg[LI_REPLY_MSG_SIZE] = {0};
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE] = {0};
    /* End for IJPN */


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	#ifdef DEBUG
		userlog("  In update_summons_payment_info_rev() function ");
		userlog(" Input Application Id is %s", applid);
	#endif

	strcpy(hv_applid, applid);
	hv_txnserno = txnserno;
	agency = JPJ_ID;

	/* EXEC SQL SELECT ISSUEDBRANCHCODE, TO_CHAR(SUMMDATE, 'YYYY'), 
					SUMMISSUEDCODE, SUMMNO, SUMMTYPE 
			 INTO	:hv_issuedbranchcode:hv_issuedbranchcode_ind, 
					:hv_summdate:hv_summdate_ind, 
					:hv_summissuedcode:hv_summissuedcode_ind, 
					:hv_summno:hv_summno_ind, :hv_summtype:hv_summtype_ind
			FROM APPL_TXN_SUMMONS 
			WHERE  APPLID = :hv_applid
			AND TXNSERNO = :hv_txnserno
			AND SUMMBYAGENT = :agency; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select ISSUEDBRANCHCODE ,TO_CHAR(SUMMDATE,'YYYY') ,SUMMISSUE\
DCODE ,SUMMNO ,SUMMTYPE into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9  from APPL_TXN\
_SUMMONS where ((APPLID=:b10 and TXNSERNO=:b11) and SUMMBYAGENT=:b12)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )840;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)hv_issuedbranchcode;
 sqlstm.sqhstl[0] = (unsigned int  )7;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&hv_issuedbranchcode_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hv_summdate;
 sqlstm.sqhstl[1] = (unsigned int  )5;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&hv_summdate_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&hv_summissuedcode;
 sqlstm.sqhstl[2] = (unsigned int  )11;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&hv_summissuedcode_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&hv_summno;
 sqlstm.sqhstl[3] = (unsigned int  )13;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&hv_summno_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&hv_summtype;
 sqlstm.sqhstl[4] = (unsigned int  )1;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&hv_summtype_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)hv_applid;
 sqlstm.sqhstl[5] = (unsigned int  )20;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&hv_txnserno;
 sqlstm.sqhstl[6] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&agency;
 sqlstm.sqhstl[7] = (unsigned int  )1;
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
		userlog(" send_summons_cancel : error while selecting from appl_txn_summons : %s", SQLMSG);
	#endif

		sprintf(excep_log.error_msg, "send_summons_cancel : error while selecting from appl_txn_summons : %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'N';

		strcpy(prog_log.remarks, "send_summons_cancel : error while selecting from appl_txn_summons");
		log_error(ctx);

		return SELECT_ERROR;
	}



	/*fill the financial daat for summons*/
	memset(&li_fin_data, '\0', sizeof(LI_PUT_FIN_DATA_T));
	ret_val = get_fin_info_summons(hv_applid, hv_txnserno, &fin_data, &fin_count,ctx);
	if (ret_val != GMPC_GOOD) return ret_val;

	li_fin_data.counter = fin_count;
	li_fin_data.len = fin_count * sizeof(FIN_DATA_T);
	if(fin_count > 0) li_fin_data.fin_data = fin_data;

	/*get the revesal description for the application*/
	ret_val = get_appl_remarks(hv_applid, (char *)hv_appl_remarks.arr,ctx);
	if (ret_val != GMPC_GOOD) return ret_val;
	

	/* fill the actual data in LI_REV_UPD_SUMMONS_REQ_T type structure*/
	memset(&rev_summons_req, '\0', sizeof(LI_REV_UPD_SUMMONS_REQ_T));

	strcpy(rev_summons_req.kpt_number, appl_info->kpt_number);
	strcpy(rev_summons_req.license_id, appl_info->lic_id_no);

	/* Added on 10/10/2001 - Now KPP will be sent in license Id field */
	if((ret_val = get_applicant_kpp(appl_info->kpt_number, rev_summons_req.license_id,ctx)) != GMPC_GOOD)
	{
		/* Skip sending this message, go for next	*/
		return ret_val;
	}

	if(appl_info->newownercat != '\0')
		rev_summons_req.category_of_owner = appl_info->newownercat;
	else
		rev_summons_req.category_of_owner = appl_info->ownercat;

	if (hv_summno_ind != -1)
	{
		setnull(hv_summno);
		strcpy(rev_summons_req.summons_no, (char *)hv_summno.arr);
	}

	if (hv_issuedbranchcode_ind != -1)
		strcpy(rev_summons_req.issue_branch_code, hv_issuedbranchcode);

	if (hv_summdate_ind != -1)
		strcpy(rev_summons_req.issue_date, hv_summdate);
		
	if (hv_summtype_ind != -1)
		rev_summons_req.summon_type = hv_summtype;

	if (hv_summissuedcode_ind != -1)
	{
		setnull(hv_summissuedcode);
		strcpy(rev_summons_req.summon_issue_code, (char *)hv_summissuedcode.arr);
	}

	strcpy(rev_summons_req.rev_desc, (char *)hv_appl_remarks.arr);

	#ifdef DEBUG
		userlog(" rev_summons_req.kpt_number %s", rev_summons_req.kpt_number);
		userlog(" rev_summons_req.license_id %s", rev_summons_req.license_id);
		userlog(" rev_summons_req.category_of_owner %c", rev_summons_req.category_of_owner);
		userlog(" rev_summons_req.summons_no %s", rev_summons_req.summons_no);
		userlog(" rev_summons_req.issue_branch_code %s", rev_summons_req.issue_branch_code);
		userlog(" rev_summons_req.issue_date %s", rev_summons_req.issue_date);
		userlog(" rev_summons_req.summon_type %c", rev_summons_req.summon_type);
		userlog(" rev_summons_req.summon_issue_code %s", rev_summons_req.summon_issue_code);
		userlog(" rev_summons_req.rev_desc %s", rev_summons_req.rev_desc);
	#endif

	ret_val = 0;
	if (GMPC_GOOD != (ret_val = get_trans_date_time(applid, txnserno, ADD_SUMMONS, refer_timestamp.refer_date, refer_timestamp.refer_time,ctx)))
		return ret_val;

		userlog("refer_timestamp.refer_date : %s",refer_timestamp.refer_date);
	userlog("refer_timestamp.refer_time : %s",refer_timestamp.refer_time);

	/* get the same ws id for reversal which is used for the payment on the same day only */

	/* EXEC SQL SELECT TRIM(TXNWSID) INTO :txnwsid:txnwsid_ind 
			FROM IJPN_LEGACY_REQUEST 
			WHERE APPLID = :applid
			AND TO_CHAR(LEGREQDATETIME,'DDMMYYYY') = TO_CHAR(SYSDATE,'DDMMYYYY')
			AND LEGREQSTAT = 0 
			AND LEGREQFLAG IN ('S') 
			AND ROWNUM = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select trim(TXNWSID) into :b0:b1  from IJPN_LEGACY_REQUEST w\
here ((((APPLID=:b2 and TO_CHAR(LEGREQDATETIME,'DDMMYYYY')=TO_CHAR(SYSDATE,'DD\
MMYYYY')) and LEGREQSTAT=0) and LEGREQFLAG in ('S')) and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )887;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&txnwsid;
 sqlstm.sqhstl[0] = (unsigned int  )18;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&txnwsid_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)applid;
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
		userlog("send_summons_cancel : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID : %s", SQLMSG);
	#endif

		sprintf(excep_log.error_msg, "send_summons_cancel : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID: %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';

		strcpy(prog_log.remarks, "send_summons_cancel : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID");
		log_error(ctx);
		
		return SELECT_ERROR; // stop the process if there is no record for update
	}

	setlen(txnwsid);
	setnull(txnwsid);

	userlog("send_summons_cancel : txnwsid : %s",txnwsid.arr);

	if(txnwsid_ind == 0)
	{
		li_p_header.workstation_id[0] = '\0';
		strcpy(li_p_header.workstation_id,txnwsid.arr);
	}

		/* EXEC SQL SELECT JPJUPDSEQ.NEXTVAL 
				INTO :wsid:wsid_ind
				FROM DUAL; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 13;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select JPJUPDSEQ.nextval  into :b0:b1  from DUAL ";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )910;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&wsid;
  sqlstm.sqhstl[0] = (unsigned int  )18;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&wsid_ind;
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
		userlog("send_summons_cancel : Selecting WS id from sequence LI_TXNWSID failed : %s", SQLMSG);
	#endif
		strcpy(prog_log.remarks,"send_payment_rev_jpj : Selecting WS id from sequence LI_TXNWSID failed ");
		sprintf(excep_log.error_msg, "send_payment_rev_jpj : Selecting WS id from sequence LI_TXNWSID failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	if(wsid_ind == 0)
	{
		setnull(wsid);
		strcat(li_p_header.workstation_id,":");
		strcat(li_p_header.workstation_id,wsid.arr);
	}

	userlog("send_summons_cancel : li_p_header.workstation_id : %s",li_p_header.workstation_id);

	/* EXEC SQL SELECT TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') INTO :tstamp
		FROM DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') into :b0  from D\
UAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )929;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)tstamp;
 sqlstm.sqhstl[0] = (unsigned int  )16;
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




	strncpy(li_p_header.trans_date, tstamp, 8);
	li_p_header.trans_date[DATE_SIZE - 1] = '\0';


	strncpy(li_p_header.trans_time, tstamp + 9, 6);
	li_p_header.trans_time[TIME_SIZE - 1] = '\0';

	userlog("send_summons_cancel : tstamp : %s",tstamp);
	userlog("send_summons_cancel : li_p_header.trans_date : %s",li_p_header.trans_date);
	userlog("send_summons_cancel : li_p_header.trans_time : %s",li_p_header.trans_time);


	/* Do li_init */
	/*if ( (ret_val = li_init(LI_JPJ_REV_UPDATE_PAYMENT)) != GMPC_GOOD)
	{
		#ifdef DEBUG
			userlog("li_init LI_JPJ_REV_UPDATE_PAYMENT function returned error: %d", ret_val);
		#endif

		excep_log.severity = FATAL;
		sprintf(excep_log.error_msg, "li_init LI_JPJ_REV_UPDATE_PAYMENT function returned : %d", ret_val);
		excep_log.termination_flag = 'N';
		strcpy(prog_log.remarks, "li_init LI_JPJ_REV_UPDATE_PAYMENT function returned");
		log_error(ctx);

		return ret_val;
	}Commented for IJPN*/

	/* Putting the reversal summons update request*/
	//ret_val = li_rev_upd_summons_p(li_p_header,refer_timestamp, li_fin_data, rev_summons_req, msg_id, &error_code);
	sErrMessage[0] = '\0';
	ret_val = li_rev_upd_summons_p(li_p_header,refer_timestamp, li_fin_data, rev_summons_req, msg_id, &error_code, pReplyMsg, &iReplyMsgLen, sErrMessage);

	if(ret_val != GMPC_GOOD)
	{
		
		#ifdef DEBUG
			userlog(" li_rev_upd_summons_p function returned error: %d", error_code);
			userlog(" li_rev_upd_summons_p function returned sErrMessage: %s", sErrMessage);
		#endif
		
		strcpy(revmsgid, (char *)msg_id);

		if(sErrMessage[0] != '\0')
		{
		strncpy(rejectcode.arr,sErrMessage,8);
		setlen(rejectcode);

		strcpy(reason_desc.arr,sErrMessage);
		setlen(reason_desc);
		}

		userlog("rejectcode : %s",rejectcode.arr);
		userlog("reason_desc : %s",reason_desc.arr);
		
		strcpy(reject_code, (char *)rejectcode.arr);
		strcpy(reject_reason, (char *)reason_desc.arr);

		userlog("reject_code, reject_reason after copying: %s, %s",reject_code,reject_reason);


		excep_log.severity = FATAL;
		sprintf(excep_log.error_msg, "li_rev_upd_summons_p returned error : %d", error_code);
		excep_log.termination_flag = 'Y';
		strcpy(prog_log.remarks, "li_rev_upd_summons_p returned error");
		log_error(ctx);
		
		if (error_code == 0)
			return ret_val;
		else
			return error_code;	

	}
	else
	{
		#ifdef DEBUG
			userlog(" li_rev_upd_summons_p successfull");
		#endif
		
	}

	strcpy(revmsgid, (char *)msg_id);
	//li_end();
	return GMPC_GOOD;
}

/****************************************************************************/
/* Function name: send_payment_rev_jpj											*/
/* Description	: This function												*/
/* Input		: appl_id[APP_ID_SIZE]									*/
/* Return values: GMPC_GOOD												*/
/* Limitations	:															*/
/****************************************************************************/
int send_payment_rev_jpj(char *applid, char *rev_msg_id, int txn_ser_no, APPL_INFO_T* appl_info, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE];
	char hv_kptno[KPT_SIZE];
	int hv_txn_ser_no = 0;
	/* varchar hv_appl_remarks[REMARK_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[61]; } hv_appl_remarks
 = {0};

	
	/* Added for IJPN */
	/* varchar reason_desc[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } reason_desc
 = {0};

	short reason_desc_ind = -1;
	/* varchar rejectcode[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } rejectcode
 = {0};

	short rejectcode_ind = -1;	
	char branch_code[7] = {0};
	/* End for IJPN */

	char  tstamp[DATE_TIME_SIZE]= {0};
	short tstamp_ind = -1;

	/* varchar wsid[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } wsid
 = {0};

	short wsid_ind = -1;

	/* varchar  txnwsid[WS_ID_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[16]; } txnwsid
 = {0};

	short txnwsid_ind = -1;

	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


		int fin_count = 0;
	FIN_DATA_T *fin_data;
	LI_PUT_FIN_DATA_T li_fin_data;
	int ret_val = 0;
	int error_code = 0;
	unsigned char msg_id[MSG_ID_SIZE] = {0};
	LI_JPJ_REV_UPDATE_PAYMENT_REQ_T rev_upd_pay_info_req;
	LI_REFER_TIMESTAMP_T refer_timestamp;

	/* Added for IJPN */
	char pReplyMsg[LI_REPLY_MSG_SIZE]={0};
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE]={0};
    /* End for IJPN */
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	strcpy(hv_applid, applid);
	strcpy(hv_kptno, appl_info->kpt_number);
	hv_txn_ser_no =  txn_ser_no;

	#ifdef DEBUG
		userlog("  In send_payment_rev_jpj() function ");
		userlog(" send_payment_rev_jpj : Input Application Id is %s", hv_applid);
		userlog(" send_payment_rev_jpj : Input KPT Number is %s", hv_kptno);
		userlog(" send_payment_rev_jpj : Input Txn Serial No is %d", hv_txn_ser_no);
	#endif

	/* fill the actual data in LI_JPJ_REV_UPDATE_PAYMENT_REQ_T type structure*/
	memset(&rev_upd_pay_info_req, 0, sizeof(LI_JPJ_REV_UPDATE_PAYMENT_REQ_T));

	strcpy(rev_upd_pay_info_req.kpt_number, appl_info->kpt_number);
	strcpy(rev_upd_pay_info_req.license_id, appl_info->lic_id_no);

	/* Added on 10/10/2001 - Now KPP will be sent in license Id field */
	if((ret_val = get_applicant_kpp(appl_info->kpt_number, rev_upd_pay_info_req.license_id,ctx)) != GMPC_GOOD)
	{
		/* Skip sending this message, go for next	*/
		return ret_val;
	}

	if(appl_info->newownercat != '\0')
		rev_upd_pay_info_req.category_of_owner = appl_info->newownercat;
	else
		rev_upd_pay_info_req.category_of_owner = appl_info->ownercat;

	/*get the revesal description for the application*/
	ret_val = get_appl_remarks(hv_applid, (char *)hv_appl_remarks.arr,ctx);
	if (ret_val != GMPC_GOOD) return ret_val;
	
	setlen(hv_appl_remarks);

	strcpy(rev_upd_pay_info_req.rev_desc, (char *)hv_appl_remarks.arr);
	#ifdef DEBUG
		userlog(" rev_upd_pay_info_req.license_id %s", rev_upd_pay_info_req.license_id);
		userlog(" rev_upd_pay_info_req.category_of_owner %c", rev_upd_pay_info_req.category_of_owner);
		userlog(" rev_upd_pay_info_req.kpt_number %s", rev_upd_pay_info_req.kpt_number);
		userlog(" rev_upd_pay_info_req.rev_desc %s", rev_upd_pay_info_req.rev_desc);
	#endif

	/*fill the financial data for summons*/
	memset(&li_fin_data, '\0', sizeof(LI_PUT_FIN_DATA_T));
	ret_val = get_fin_info(hv_applid, hv_txn_ser_no, &fin_data, &fin_count,ctx);
	if (ret_val != GMPC_GOOD) return ret_val;

	li_fin_data.counter = fin_count;
	li_fin_data.len = fin_count * sizeof(FIN_DATA_T);
	if(fin_count > 0) li_fin_data.fin_data = fin_data;

	ret_val = 0;
	if (GMPC_GOOD != (ret_val = get_trans_date_time(applid, txn_ser_no, PAYMENT_UPD, refer_timestamp.refer_date, refer_timestamp.refer_time,ctx)))
		return ret_val;

	userlog("refer_timestamp.refer_date : %s",refer_timestamp.refer_date);
	userlog("refer_timestamp.refer_time : %s",refer_timestamp.refer_time);

	/* get the same ws id for reversal which is used for the payment on the same day only */

	/* EXEC SQL SELECT TRIM(TXNWSID) INTO :txnwsid:txnwsid_ind 
			FROM IJPN_LEGACY_REQUEST 
			WHERE APPLID = :applid
			AND TO_CHAR(LEGREQDATETIME,'DDMMYYYY') = TO_CHAR(SYSDATE,'DDMMYYYY')
			AND LEGREQSTAT = 0 
			AND LEGREQFLAG IN ('P','D') 
			AND ROWNUM = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select trim(TXNWSID) into :b0:b1  from IJPN_LEGACY_REQUEST w\
here ((((APPLID=:b2 and TO_CHAR(LEGREQDATETIME,'DDMMYYYY')=TO_CHAR(SYSDATE,'DD\
MMYYYY')) and LEGREQSTAT=0) and LEGREQFLAG in ('P','D')) and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )948;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&txnwsid;
 sqlstm.sqhstl[0] = (unsigned int  )18;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&txnwsid_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)applid;
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
		userlog("send_payment_rev_jpj : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID : %s", SQLMSG);
	#endif

		sprintf(excep_log.error_msg, "send_payment_rev_jpj : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID: %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';

		strcpy(prog_log.remarks, "send_payment_rev_jpj : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID");
		log_error(ctx);
		
	//	return SELECT_ERROR;
	}

	setlen(txnwsid);
	setnull(txnwsid);

	userlog("send_payment_rev_jpj : txnwsid : %s",txnwsid.arr);

	if(txnwsid_ind == 0)
	{
		li_p_header.workstation_id[0] = '\0';
		strcpy(li_p_header.workstation_id,txnwsid.arr);
	}

		/* EXEC SQL SELECT JPJUPDSEQ.NEXTVAL 
				INTO :wsid:wsid_ind
				FROM DUAL; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 13;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select JPJUPDSEQ.nextval  into :b0:b1  from DUAL ";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )971;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&wsid;
  sqlstm.sqhstl[0] = (unsigned int  )18;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&wsid_ind;
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
		userlog("send_payment_rev_jpj : Selecting WS id from sequence LI_TXNWSID failed : %s", SQLMSG);
	#endif
		strcpy(prog_log.remarks,"send_payment_rev_jpj : Selecting WS id from sequence LI_TXNWSID failed ");
		sprintf(excep_log.error_msg, "send_payment_rev_jpj : Selecting WS id from sequence LI_TXNWSID failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	if(wsid_ind == 0)
	{
		setnull(wsid);
		strcat(li_p_header.workstation_id,":");
		strcat(li_p_header.workstation_id,wsid.arr);
	}

	userlog("send_payment_rev_jpj : li_p_header.workstation_id : %s",li_p_header.workstation_id);

	/* EXEC SQL SELECT TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') INTO :tstamp
		FROM DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') into :b0  from D\
UAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )990;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)tstamp;
 sqlstm.sqhstl[0] = (unsigned int  )16;
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




	strncpy(li_p_header.trans_date, tstamp, 8);
	li_p_header.trans_date[DATE_SIZE - 1] = '\0';


	strncpy(li_p_header.trans_time, tstamp + 9, 6);
	li_p_header.trans_time[TIME_SIZE - 1] = '\0';

	userlog("send_payment_rev_jpj : tstamp : %s",tstamp);
	userlog("send_payment_rev_jpj : li_p_header.trans_date : %s",li_p_header.trans_date);
	userlog("send_payment_rev_jpj : li_p_header.trans_time : %s",li_p_header.trans_time);


	/* Do li_init */
	/*if ( (ret_val = li_init(LI_JPJ_REV_UPDATE_PAYMENT)) != GMPC_GOOD)
	{
		#ifdef DEBUG
			userlog("li_init LI_JPJ_REV_UPDATE_PAYMENT function returned error: %d", ret_val);
		#endif

		excep_log.severity = FATAL;
		sprintf(excep_log.error_msg, "li_init LI_JPJ_REV_UPDATE_PAYMENT function returned : %d", ret_val);
		excep_log.termination_flag = 'N';
		strcpy(prog_log.remarks, "li_init LI_JPJ_REV_UPDATE_PAYMENT function returned");
		log_error(ctx);

		return ret_val;
	}Commented for IJPN*/

	/* Putting the reversal ID to KPT Update request*/
	//ret_val = li_jpj_rev_update_payment_p(li_p_header, refer_timestamp, li_fin_data, rev_upd_pay_info_req, msg_id, &error_code);
	sErrMessage[0] = '\0';
	ret_val = li_jpj_rev_update_payment_p(li_p_header, refer_timestamp, li_fin_data, rev_upd_pay_info_req, msg_id, &error_code, pReplyMsg, &iReplyMsgLen, sErrMessage);
	if(ret_val != GMPC_GOOD)
	{
		#ifdef DEBUG
			userlog(" li_jpj_rev_update_payment_p function returned error: %d", error_code);
			userlog(" li_jpj_rev_update_payment_p function returned sErrMessage: %s", sErrMessage);
		#endif

		strcpy(rev_msg_id, (char *)msg_id);

		if(sErrMessage[0] != '\0')
		{
		strncpy(rejectcode.arr,sErrMessage,8);
		setlen(rejectcode);

		strcpy(reason_desc.arr,sErrMessage);
		setlen(reason_desc);
		}

		userlog("rejectcode : %s",rejectcode.arr);
		userlog("reason_desc : %s",reason_desc.arr);
		
		strcpy(reject_code, (char *)rejectcode.arr);
		strcpy(reject_reason, (char *)reason_desc.arr);

		userlog("reject_code, reject_reason after copying: %s, %s",reject_code,reject_reason);

		excep_log.severity = FATAL;
		sprintf(excep_log.error_msg, "li_jpj_rev_update_payment_p returned error : %d", error_code);
		excep_log.termination_flag = 'N';
		strcpy(prog_log.remarks, "li_jpj_rev_update_payment_p returned error");
		log_error(ctx);

		//li_end();
		return error_code;
	}
	else
	{
		#ifdef DEBUG
			userlog(" li_jpj_rev_update_payment_p successfull");
		#endif
		
	}

	strcpy(rev_msg_id, (char *)msg_id);
	//li_end();
	return GMPC_GOOD;
}

/****************************************************************************/
/* Function name: send_renew_lic_cancel										*/
/* Description	: This function												*/
/* Input		: appl_id[APP_ID_SIZE]										*/
/* Return values: GMPC_GOOD													*/
/* Limitations	:															*/
/****************************************************************************/
/*
int send_renew_lic_cancel(char *application_id, int txn_serno, char *revmsgid, APPL_INFO_T *appl_info, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	EXEC SQL BEGIN DECLARE SECTION;
		char applid[APP_ID_SIZE] = {0};

		varchar license_id[LIC_ID_SIZE] = {0};
		char category_of_owner = '\0';
		char kpt_number[KPT_SIZE] = {0};
		char license_type[LIC_TYPE_SIZE] = {0};
		char validity_start_date[DATE_SIZE] = {0};
		char validity_end_date[DATE_SIZE] = {0};
		char old_start_date[DATE_SIZE] = {0};
		char old_end_date[DATE_SIZE] = {0};
		char prb_status = '\0'; /* for PRB & CDL only 
//		char rev_desc[JPJ_REVERSAL_DESC_SIZE] = {0};
		varchar lic_sr_no[SERIAL_NO_SIZE] = {0};
		char handicapped_reg_no[HANDICAPPED_REG_NO_SIZE];
		char physical_restrict_cd;

		int txnserno = 0;
		char txncode[TRANSACTION_CODE_SIZE] = {0};
				
		char prb_stat_date[DATE_SIZE]; /* added on 04/01/2002 
		char prb_rev_stat;             /* added on 04/01/2002 
		char prb_prev_stat;            /* added on 04/01/2002 

		short int license_id_ind = 0;
		short int category_of_owner_ind = 0;
		short int kpt_number_ind = 0;
		short int license_type_ind = 0;
		short int validity_start_date_ind = 0;
		short int validity_end_date_ind = 0;
		short int old_start_date_ind = 0;
		short int old_end_date_ind = 0;
		short int prb_status_ind = 0;
//		short int rev_desc_ind = 0;
		short int lic_sr_no_ind = 0;
		short int handicapped_reg_no_ind = 0;
		short int physical_restrict_cd_ind = 0;

		short int txncode_ind = 0;

	/* added on 04/01/2002 
		short prb_stat_date_ind = -1;
		short prb_rev_stat_ind = -1;
		short prb_prev_stat_ind = -1;

		/* Added for IJPN 
	varchar reason_desc[161] = {0};
	short reason_desc_ind = -1;
	varchar rejectcode[9]={0};
	short rejectcode_ind = -1;	
	char branch_code[7] = {0};
	/* End for IJPN 

	char  tstamp[DATE_TIME_SIZE]= {0};
	short tstamp_ind = -1;

	varchar wsid[WS_ID_SIZE] = {0};
	short wsid_ind = -1;

	varchar  txnwsid[WS_ID_SIZE]={0};
	short txnwsid_ind = -1;

	// Added on 29/11/2011 for CR 242 Rel 3.23
	char ladjind;
	char ladjamt[10];
	char ladjperiod[4];
	char lbirthdate[9];
	//


	sql_context pcCtx; // Modification for IJPN
	EXEC SQL END DECLARE SECTION;

	LI_REV_LIC_RENEWAL_REQ_T req = {0};

	int fin_count = 0;
	FIN_DATA_T *fin_data;
	LI_PUT_FIN_DATA_T li_fin_data;
	int ret_val = 0;
	unsigned char msg_id[MSG_ID_SIZE] = {0};
	LI_REFER_TIMESTAMP_T refer_timestamp;	
	int error_code;
	int ret = 0;

	
	/* Added for IJPN 
	char pReplyMsg[LI_REPLY_MSG_SIZE]={0};
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE]={0};
    /* End for IJPN 


	pcCtx = ctx; // Modification for IJPN
	EXEC SQL CONTEXT USE :pcCtx;// Modification for IJPN
	
	memset(&req, 0, sizeof(LI_REV_LIC_RENEWAL_REQ_T));
	strcpy(applid, application_id);
	txnserno = txn_serno;
	if (appl_info->lic_id_no[0] != '\0')
	{
		strcpy((char *)license_id.arr, appl_info->lic_id_no);
		setlen(license_id);
	}
	category_of_owner = appl_info->ownercat;
	prb_status = appl_info->prb_status;
	strcpy(kpt_number, appl_info->kpt_number);


	EXEC SQL
		SELECT TXNCODE, LICTYPE
		INTO :txncode:txncode_ind, :license_type:license_type_ind
		FROM APPL_TXN WHERE 
		APPLID = :applid 
		AND TXNSERNO = :txnserno;

	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("send_renew_lic_cancel: Select from appl_txn failed ");	
#endif
		strcpy(prog_log.remarks,"send_renew_lic_cancel :Select from appl_txn failed ");
		sprintf(excep_log.error_msg,"send_renew_lic_cancel : Select from appl_txn failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}


	/* Select new license validity dates 
	EXEC SQL 
		SELECT DISTINCT TO_CHAR(LICVALIDSTARTDATE, 'DDMMYYYY'), TO_CHAR(LICVALIDENDDATE, 'DDMMYYYY'),
						HANDICVEHREGNO, PHYRESTRICTCODE
		INTO :validity_start_date:validity_start_date_ind, 
			:validity_end_date:validity_end_date_ind,
			:handicapped_reg_no:handicapped_reg_no_ind,
			:physical_restrict_cd:physical_restrict_cd_ind
		FROM APPNT_LIC_INFO
		WHERE APPLID = :applid AND LICTYPE = :license_type
		AND ROWNUM = 1;

	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("send_renew_lic_cancel: Select from APPNT_LIC_INFO failed ");	
#endif
		strcpy(prog_log.remarks,"send_renew_lic_cancel :Select from APPNT_LIC_INFO failed ");
		sprintf(excep_log.error_msg,"send_renew_lic_cancel : Select from APPNT_LIC_INFO failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}

	/* Select old license validity dates 
	EXEC SQL 
		SELECT DISTINCT TO_CHAR(LICVALIDSTARTDATE, 'DDMMYYYY'), TO_CHAR(LICVALIDENDDATE, 'DDMMYYYY')
		INTO :old_start_date:old_start_date_ind, 
			 :old_end_date:old_end_date_ind
		FROM JPJ_LIC_INFO
		WHERE LICIDNO = :license_id:license_id_ind 
		AND OWNERCAT = :category_of_owner:category_of_owner_ind 
		AND LICTYPE = :license_type
		AND ROWNUM = 1;

	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("send_renew_lic_cancel: Select from JPJ_LIC_INFO failed ");	
#endif
		strcpy(prog_log.remarks,"send_renew_lic_cancel :Select from JPJ_LIC_INFO failed ");
		sprintf(excep_log.error_msg,"send_renew_lic_cancel : Select from JPJ_LIC_INFO failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}

	/* Select License Serial Number 
	EXEC SQL 
		SELECT SERIALNO 
		INTO :lic_sr_no:lic_sr_no_ind
		FROM JPJ_LIC_REVERSAL_TXN
		WHERE LICIDNO = :license_id:license_id_ind
		AND OWNERCAT = :category_of_owner:category_of_owner_ind 
		AND LICTYPE = :license_type
		AND ROWNUM = 1;

	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("send_renew_lic_cancel: Select from JPJ_LIC_REVERSAL_TXN failed ");	
#endif
		strcpy(prog_log.remarks,"send_renew_lic_cancel :Select from JPJ_LIC_REVERSAL_TXN failed ");
		sprintf(excep_log.error_msg,"send_renew_lic_cancel : Select from JPJ_LIC_REVERSAL_TXN failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}

	// Added this code to send following values to host on 29/11/2011 for CR 242 and Rel 3.23
	
	ladjind = '\0';		
	EXEC SQL SELECT ADJIND INTO :ladjind FROM JPJ_INFO WHERE 
		LICIDNO = :license_id:license_id_ind
		AND OWNERCAT = :category_of_owner:category_of_owner_ind;


	EXEC SQL SELECT TO_CHAR(FEEADJAMT*100), FEEADJPERIOD, TO_CHAR(BIRTHDATE,'DDMMYYYY')
		INTO :ladjamt, :ladjperiod, :lbirthdate
		FROM  APPNT_JPJ_LICSYNC
		WHERE APPLID = :applid;


	if (SQLCODE)
	{
		excep_log.severity = FATAL;
		sprintf(excep_log.error_msg, "JPJ_UPDATE : SELECT FROM APPNT_JPJ_LICSYNC failed to get info, %s", sqlmsg);
		excep_log.termination_flag = 'Y';
		strcpy(prog_log.remarks, "JPJ_UPDATE : SELECT FROM APPNT_JPJ_LICSYNC returned error");
		log_error(ctx);
		
		return SELECT_ERROR;
	}


	req.lic_adj_ind = ladjind;
	strcpy(req.feeadjamt, ladjamt);
	strcpy(req.feeadjperiod, ladjperiod);
	strcpy(req.birthdate, lbirthdate);

	// END OF CR 242


	/*get the revesal description for the application
	ret_val = get_appl_remarks(applid, req.rev_desc,ctx);
	if (ret_val != GMPC_GOOD) return ret_val;

	if (lic_sr_no_ind == 0)
	{
		setnull(lic_sr_no);
		strcpy(req.lic_sr_no, (char *)lic_sr_no.arr);
	}

	strcpy(req.license_id, (char *)license_id.arr);

	/* Added on 10/10/2001 - Now KPP will be sent in license Id field 
	if((ret_val = get_applicant_kpp(appl_info->kpt_number, req.license_id,ctx)) != GMPC_GOOD)
	{
		/* Skip sending this message, go for next	
		return ret_val;
	}
#ifdef DEBUG
	userlog("send_renewal_lic_cancel:Checking for PRB DATA");
#endif

	/* Added on 04/01/2002 - Now Prb_stat_date,prb_prev_stat & prb_reversal_stat added 
	EXEC SQL SELECT TO_CHAR(STATUSDATE,'DDMMYYYY'), STATUS, PREVSTATUS
			 INTO :prb_stat_date:prb_stat_date_ind,
				  :prb_rev_stat:prb_rev_stat_ind,
				  :prb_prev_stat:prb_prev_stat_ind
			 FROM JPJ_LIC_REVERSAL_TXN
			WHERE LICIDNO = :license_id
			AND OWNERCAT = :category_of_owner
			AND LICTYPE = 'PRB';

	if((SQLCODE) && !(NO_DATA_FOUND) )
	{
#ifdef DEBUG
		userlog("send_renewal_lic_cancel: Select from PRB info JPJ_LIC_REVERSAL_TXN failed :%s ",sqlmsg);	
#endif
		strcpy(prog_log.remarks,"send_renew_lic_cancel :Select PRB info from JPJ_LIC_REVERSAL_TXN failed ");
		sprintf(excep_log.error_msg,"send_renew_lic_cancel : Select PRB info from JPJ_LIC_REVERSAL_TXN failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}
#ifdef DEBUG
	userlog("send_renewal_lic_cancel: Found the data");

#endif

	req.category_of_owner = category_of_owner;
	strcpy(req.kpt_number, kpt_number);
	strcpy(req.license_type, license_type);
	
	if(validity_start_date_ind == 0)
		strcpy(req.validity_start_date, validity_start_date);
	
	if (validity_end_date_ind == 0)
		strcpy(req.validity_end_date, validity_end_date);

	if(old_start_date_ind == 0)
		strcpy(req.old_start_date, old_start_date);

	if(old_end_date_ind == 0)
		strcpy(req.old_end_date, old_end_date);

	req.prb_status = prb_status;

	if(handicapped_reg_no_ind == 0)
		strcpy(req.handicap_reg_no, handicapped_reg_no);
	
	if(physical_restrict_cd_ind == 0)
		req.physiacl_restrict_code = physical_restrict_cd;
	/*added on 04/01/2002 
	if(prb_stat_date_ind == 0)
	{
		strcpy(req.prb_stat_date,prb_stat_date);
	}

	if(prb_prev_stat_ind == 0)
		req.prb_prev_stat = prb_prev_stat;

	if(prb_rev_stat_ind == 0)
		req.prb_reversal_stat = prb_rev_stat;


	/*fill the financial daat for summons
	memset(&li_fin_data, '\0', sizeof(LI_PUT_FIN_DATA_T));
	ret = get_fin_info(applid, txn_serno, &fin_data, &fin_count,ctx);
	if (ret != GMPC_GOOD) return ret;

	li_fin_data.counter = fin_count;
	li_fin_data.len = fin_count * sizeof(FIN_DATA_T);
	if(fin_count > 0) li_fin_data.fin_data = fin_data;

	ret_val = 0;
	if (GMPC_GOOD != (ret_val = get_trans_date_time(application_id, txn_serno, RENEW_LIC, refer_timestamp.refer_date, refer_timestamp.refer_time,ctx)))
		return ret_val;

	userlog("refer_timestamp.refer_date : %s",refer_timestamp.refer_date);
	userlog("refer_timestamp.refer_time : %s",refer_timestamp.refer_time);

	/* get the same ws id for reversal which is used for the payment on the same day only 

	EXEC SQL SELECT TRIM(TXNWSID) INTO :txnwsid:txnwsid_ind 
			FROM IJPN_LEGACY_REQUEST 
			WHERE APPLID = :applid
			AND TO_CHAR(LEGREQDATETIME,'DDMMYYYY') = TO_CHAR(SYSDATE,'DDMMYYYY')
			AND LEGREQSTAT = 0 
			AND LEGREQFLAG IN ('R') 
			AND ROWNUM = 1;

	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog("send_renewal_lic_cancel : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID : %s", SQLMSG);
	#endif

		sprintf(excep_log.error_msg, "send_renewal_lic_cancel : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID: %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';

		strcpy(prog_log.remarks, "send_renewal_lic_cancel : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID");
		log_error(ctx);
		
		return SELECT_ERROR;  // stop the process if there is no record for update
	}

	setlen(txnwsid);
	setnull(txnwsid);

	userlog("send_renewal_lic_cancel : txnwsid : %s",txnwsid.arr);

	if(txnwsid_ind == 0)
	{
		li_p_header.workstation_id[0] = '\0';
		strcpy(li_p_header.workstation_id,txnwsid.arr);
	}

		EXEC SQL SELECT JPJUPDSEQ.NEXTVAL 
				INTO :wsid:wsid_ind
				FROM DUAL;

	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog("send_renewal_lic_cancel : Selecting WS id from sequence LI_TXNWSID failed : %s", SQLMSG);
	#endif
		strcpy(prog_log.remarks,"send_renewal_lic_cancel : Selecting WS id from sequence LI_TXNWSID failed ");
		sprintf(excep_log.error_msg, "send_renewal_lic_cancel : Selecting WS id from sequence LI_TXNWSID failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	if(wsid_ind == 0)
	{
		setnull(wsid);
		strcat(li_p_header.workstation_id,":");
		strcat(li_p_header.workstation_id,wsid.arr);
	}

	userlog("send_renewal_lic_cancel : li_p_header.workstation_id : %s",li_p_header.workstation_id);

	EXEC SQL SELECT TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') INTO :tstamp
		FROM DUAL;


	strncpy(li_p_header.trans_date, tstamp, 8);
	li_p_header.trans_date[DATE_SIZE - 1] = '\0';


	strncpy(li_p_header.trans_time, tstamp + 9, 6);
	li_p_header.trans_time[TIME_SIZE - 1] = '\0';

	userlog("send_renewal_lic_cancel : tstamp : %s",tstamp);
	userlog("send_renewal_lic_cancel : li_p_header.trans_date : %s",li_p_header.trans_date);
	userlog("send_renewal_lic_cancel : li_p_header.trans_time : %s",li_p_header.trans_time);


	/*	if(GMPC_GOOD != (ret = li_init(LI_JPJ_REV_RENEWAL)))
		{
	#ifdef DEBUG
			userlog("send_renew_lic_cancel:li_init failed with ret = %d", ret);
	#endif
			strcpy(prog_log.remarks,"send_renew_lic_cancel : li_init failed");
			sprintf(excep_log.error_msg,"send_renew_lic_cancel : li_init failed with ret = %d", ret);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;

			log_error(ctx);
			return ret_val;
		} ///////

		sErrMessage[0] = '\0';
	if (GMPC_GOOD != (ret = li_rev_lic_renewal_p(li_p_header, refer_timestamp, li_fin_data, req, msg_id, &error_code, pReplyMsg, &iReplyMsgLen, sErrMessage)))
	{

		#ifdef DEBUG
			userlog(" send_renew_lic_cancel:li_rev_lic_renewal_p function returned error: %d", error_code);
			userlog(" send_renew_lic_cancel:li_rev_lic_renewal_p function returned sErrMessage: %s", sErrMessage);
		#endif

		strcpy(revmsgid, (char *)msg_id);

		if(sErrMessage[0] != '\0')
		{
		strncpy(rejectcode.arr,sErrMessage,8);
		setlen(rejectcode);

		strcpy(reason_desc.arr,sErrMessage);
		setlen(reason_desc);
		}

		userlog("rejectcode : %s",rejectcode.arr);
		userlog("reason_desc : %s",reason_desc.arr);
		
		strcpy(reject_code, (char *)rejectcode.arr);
		strcpy(reject_reason, (char *)reason_desc.arr);

		userlog("reject_code, reject_reason after copying: %s, %s",reject_code,reject_reason);

		excep_log.severity = FATAL;
		sprintf(excep_log.error_msg, "send_renew_lic_cancel:li_rev_lic_renewal_p returned error : %d", error_code);
		excep_log.termination_flag = 'N';
		strcpy(prog_log.remarks, "send_renew_lic_cancel:li_rev_lic_renewal_p returned error");
		log_error(ctx);

		//log_error();
		//li_end();
		return ret;
	}

	//li_end();
	strcpy(revmsgid, (char *)msg_id);
	return GMPC_GOOD;

}
*/

/****************************************************************************/
/* Function name: send_new_lic_cancel											*/
/* Description	: This function												*/
/* Input		: appl_id[APP_ID_SIZE]									*/
/* Return values: GMPC_GOOD												*/
/* Limitations	:															*/
/****************************************************************************/
int send_new_lic_cancel(char *application_id, int txn_serno, char *revmsgid, APPL_INFO_T *appl_info, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char applid[APP_ID_SIZE] = {0};

		/* varchar license_id[LIC_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } license_id;

		char category_of_owner;
		char kpt_number[KPT_SIZE];
		char new_category_of_owner;
		/* varchar gmpc_short_name1[GMPC_SNAME1_SIZE]; */ 
struct { unsigned short len; unsigned char arr[31]; } gmpc_short_name1;

		/* varchar gmpc_short_name2[GMPC_SNAME2_SIZE]; */ 
struct { unsigned short len; unsigned char arr[31]; } gmpc_short_name2;

		/* varchar gmpc_short_name3[GMPC_SNAME3_SIZE]; */ 
struct { unsigned short len; unsigned char arr[21]; } gmpc_short_name3;

		/* varchar address1[ADDRESS_SIZE]; */ 
struct { unsigned short len; unsigned char arr[41]; } address1;

		/* varchar address2[ADDRESS_SIZE]; */ 
struct { unsigned short len; unsigned char arr[41]; } address2;

		/* varchar address3[ADDRESS_SIZE]; */ 
struct { unsigned short len; unsigned char arr[41]; } address3;

		/* varchar post_code[POST_CODE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[6]; } post_code;

		int city_code;
		char state_code[STATE_CODE_SIZE];
		char dob[DATE_SIZE];
		char gender;

		char license_type[LIC_TYPE_SIZE];
		char validity_start_date[DATE_SIZE];
		char validity_end_date[DATE_SIZE];
		char handicapped_reg_no[HANDICAPPED_REG_NO_SIZE];
		char physical_restrict_cd;
		char status; /* for PRB & CDL only */
//		char rev_desc[JPJ_REVERSAL_DESC_SIZE];
		char prb_status;

		char license_class[LIC_CLS_SIZE];
		char license_class_usage[CLASS_USAGE_SIZE];

		char verified_status;
		/* varchar no_blacklist_ctr[BLACKLIST_CENTRE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[3]; } no_blacklist_ctr;

		/* varchar o_blacklist_ctr[BLACKLIST_CENTRE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[3]; } o_blacklist_ctr;

		char susp_ctr;
		char class_susp_ctr;
		/* varchar serial_no[SERIAL_NO_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } serial_no;

		char exemption_code;
		char first_issue_date[DATE_SIZE];
		char endorse_ind;
		/* varchar badge_no[SERIAL_NO_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } badge_no;

		/* varchar offence_point[OFFENCE_POINT_SIZE]; */ 
struct { unsigned short len; unsigned char arr[10]; } offence_point;

		int generation;
		char prb_stat_date[DATE_SIZE];
		char prb_rev_stat;
		char prb_prev_stat;
		char pdl_part1_eff_date[DATE_SIZE];
		char pdl_part1_exp_date[DATE_SIZE];
		char cdl_ind;

		char old_validity_start_date[DATE_SIZE];
		char old_validity_end_date[DATE_SIZE];

		char old_licclass[LIC_CLS_SIZE] = {0};
		char old_licusage[CLASS_USAGE_SIZE] = {0};

		char old_handicapped_reg_no[HANDICAPPED_REG_NO_SIZE];
		char old_physical_restrict_cd;

		int txnserno = 0;
		char txncode[TRANSACTION_CODE_SIZE] = {0};

		short int license_id_ind = 0;
		short int category_of_owner_ind = 0;
		short int kpt_number_ind = 0;
		short int new_category_of_owner_ind = 0;
		short int gmpc_short_name1_ind = 0;
		short int gmpc_short_name2_ind = 0;
		short int gmpc_short_name3_ind = 0;
		short int address1_ind = 0;
		short int address2_ind = 0;
		short int address3_ind = 0;
		short int post_code_ind = 0;
		short int city_code_ind = 0;
		short int state_code_ind = 0;
		short int dob_ind = 0;
		short int gender_ind = 0;
		short int license_type_ind = 0;
		short int validity_start_date_ind = 0;
		short int validity_end_date_ind = 0;
		short int handicapped_reg_no_ind = 0;
		short int physical_restrict_cd_ind = 0;
		short int status_ind = 0;
//		short int rev_desc_ind = 0;
		short int prb_status_ind = 0;

		short int license_class_ind = 0;
		short int license_class_usage_ind = 0;

		short int txncode_ind = 0;

		short verified_status_ind = -1;
		short no_blacklist_ctr_ind = -1;
		short o_blacklist_ctr_ind = -1;
		short susp_ctr_ind = -1;
		short class_susp_ctr_ind = -1;
		short serial_no_ind = -1;
		short exemption_code_ind = -1;
		short first_issue_date_ind = -1;
		short endorse_ind_ind = -1;
		short badge_no_ind = -1;
		short offence_point_ind = -1;
		short generation_ind = -1;
		short prb_stat_date_ind = -1;
		short prb_rev_stat_ind = -1;
		short prb_prev_stat_ind = -1;
		short pdl_part1_eff_date_ind = -1;
		short pdl_part1_exp_date_ind = -1;
		short cdl_ind_ind = -1;

		short int old_validity_start_date_ind = -1;
		short int old_validity_end_date_ind = -1;
	
		short old_licclass_ind = -1;
		short old_licusage_ind = -1;

		short int old_handicapped_reg_no_ind = -1;
		short int old_physical_restrict_cd_ind = -1;

		/* Added for IJPN */
	/* varchar reason_desc[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } reason_desc
 = {0};

	short reason_desc_ind = -1;
	/* varchar rejectcode[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } rejectcode
 = {0};

	short rejectcode_ind = -1;	
	char branch_code[7] = {0};
	/* End for IJPN */

	char  tstamp[DATE_TIME_SIZE]= {0};
	short tstamp_ind = -1;

	/* varchar wsid[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } wsid
 = {0};

	short wsid_ind = -1;

	/* varchar  txnwsid[WS_ID_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[16]; } txnwsid
 = {0};

	short txnwsid_ind = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	LI_REV_UPDATE_LIC_NEW_REQ_T req = {0};
	LI_LIC_CLASS_T *usage_info = NULL, *temp_usage_info = NULL;
	LI_LIC_CLASS_T *curr_class = NULL;
	LI_LIC_CLASS_T *prev_class = NULL;

	int i_cnt = 0;
	int fin_count = 0;
	FIN_DATA_T *fin_data;
	LI_PUT_FIN_DATA_T li_fin_data;
	LI_REFER_TIMESTAMP_T refer_timestamp;

	char rev_msgid[MSG_ID_SIZE];
	int error_code;
	int ret = 0;
	int exist_count = 0;

	/* Added for IJPN */
	char pReplyMsg[LI_REPLY_MSG_SIZE]={0};
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE]={0};
    /* End for IJPN */

	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN



	
	memset(&req, 0, sizeof(LI_REV_UPDATE_LIC_NEW_REQ_T));
	strcpy(applid, application_id);
	txnserno = txn_serno;
	if (appl_info->lic_id_no[0] != '\0')
	{
		strcpy((char *)license_id.arr, appl_info->lic_id_no);
		setlen(license_id);
	}

	category_of_owner = appl_info->ownercat;
	new_category_of_owner = appl_info->newownercat;
	prb_status = appl_info->prb_status;
	strcpy(kpt_number, appl_info->kpt_number);

	/* EXEC SQL
		SELECT GENDER, TO_CHAR(BIRTHDATE, 'DDMMYYYY'), GMPCSHORTNAME1, 
		GMPCSHORTNAME2, GMPCSHORTNAME3, ADDRESS1, 
		ADDRESS2, ADDRESS3, POSTCODE, CITYCODE, STATECODE INTO
		:gender:gender_ind, :dob:dob_ind, :gmpc_short_name1:gmpc_short_name1_ind, 
		:gmpc_short_name2:gmpc_short_name2_ind, :gmpc_short_name3:gmpc_short_name3_ind,
		:address1:address1_ind, :address2:address2_ind, :address3:address3_ind,
		:post_code:post_code_ind, :city_code:city_code_ind, :state_code:state_code_ind
		FROM JPJ_INFO 
		WHERE LICIDNO = :license_id
		AND OWNERCAT = :category_of_owner; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select GENDER ,TO_CHAR(BIRTHDATE,'DDMMYYYY') ,GMPCSHORTNAME1\
 ,GMPCSHORTNAME2 ,GMPCSHORTNAME3 ,ADDRESS1 ,ADDRESS2 ,ADDRESS3 ,POSTCODE ,CITY\
CODE ,STATECODE into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11,:b12:b13,:b14\
:b15,:b16:b17,:b18:b19,:b20:b21  from JPJ_INFO where (LICIDNO=:b22 and OWNERCA\
T=:b23)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1009;
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
 sqlstm.sqhstv[1] = (         void  *)dob;
 sqlstm.sqhstl[1] = (unsigned int  )9;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&dob_ind;
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
 sqlstm.sqhstv[8] = (         void  *)&post_code;
 sqlstm.sqhstl[8] = (unsigned int  )8;
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
 sqlstm.sqhstv[11] = (         void  *)&license_id;
 sqlstm.sqhstl[11] = (unsigned int  )18;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)0;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&category_of_owner;
 sqlstm.sqhstl[12] = (unsigned int  )1;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)0;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
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
		userlog("send_new_lic_cancel: Select from JPJ_INFO failed ");	
#endif
		strcpy(prog_log.remarks,"send_new_lic_cancel :Select from JPJ_INFO failed ");
		sprintf(excep_log.error_msg,"send_new_lic_cancel : Select from JPJ_INFO failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}

	/* EXEC SQL
		SELECT TXNCODE, LICTYPE 
		INTO :txncode:txncode_ind, license_type:license_type_ind 
		FROM APPL_TXN WHERE 
		APPLID = :applid 
		AND TXNSERNO = :txnserno; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TXNCODE ,LICTYPE into :b0:b1,:b2:b3  from APPL_TXN wh\
ere (APPLID=:b4 and TXNSERNO=:b5)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1076;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)txncode;
 sqlstm.sqhstl[0] = (unsigned int  )4;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&txncode_ind;
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
 sqlstm.sqhstv[2] = (         void  *)applid;
 sqlstm.sqhstl[2] = (unsigned int  )20;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&txnserno;
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



	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("send_new_lic_cancel: Select from appl_txn failed ");	
#endif
		strcpy(prog_log.remarks,"send_new_lic_cancel :Select from appl_txn failed ");
		sprintf(excep_log.error_msg,"send_new_lic_cancel : Select from appl_txn failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}

	/* EXEC SQL 
		SELECT DISTINCT TO_CHAR(LICVALIDSTARTDATE, 'DDMMYYYY'),
		TO_CHAR(LICVALIDENDDATE, 'DDMMYYYY'), 
		HANDICVEHREGNO, VERIFIEDSTATUS, PHYRESTRICTCODE 
		INTO :validity_start_date:validity_start_date_ind, 
		 	 :validity_end_date:validity_end_date_ind, 
			 :handicapped_reg_no:handicapped_reg_no_ind,
			 :status:status_ind,
			 :physical_restrict_cd:physical_restrict_cd_ind
		FROM APPNT_LIC_INFO
		WHERE APPLID = :applid AND LICTYPE = :license_type
		AND ROWNUM = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select distinct TO_CHAR(LICVALIDSTARTDATE,'DDMMYYYY') ,TO_CH\
AR(LICVALIDENDDATE,'DDMMYYYY') ,HANDICVEHREGNO ,VERIFIEDSTATUS ,PHYRESTRICTCOD\
E into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9  from APPNT_LIC_INFO where ((APPLID=\
:b10 and LICTYPE=:b11) and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1107;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)validity_start_date;
 sqlstm.sqhstl[0] = (unsigned int  )9;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&validity_start_date_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)validity_end_date;
 sqlstm.sqhstl[1] = (unsigned int  )9;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&validity_end_date_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)handicapped_reg_no;
 sqlstm.sqhstl[2] = (unsigned int  )11;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&handicapped_reg_no_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&status;
 sqlstm.sqhstl[3] = (unsigned int  )1;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&status_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&physical_restrict_cd;
 sqlstm.sqhstl[4] = (unsigned int  )1;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&physical_restrict_cd_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)applid;
 sqlstm.sqhstl[5] = (unsigned int  )20;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)license_type;
 sqlstm.sqhstl[6] = (unsigned int  )4;
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



	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("send_new_lic_cancel: Select from APPNT_LIC_INFO failed ");	
#endif
		strcpy(prog_log.remarks,"send_new_lic_cancel :Select from APPNT_LIC_INFO failed ");
		sprintf(excep_log.error_msg,"send_new_lic_cancel : Select from APPNT_LIC_INFO failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}

	/* Get the old validity start and end dates	*/
	/* EXEC SQL 
		SELECT DISTINCT TO_CHAR(LICVALIDSTARTDATE, 'DDMMYYYY'),
		TO_CHAR(LICVALIDENDDATE, 'DDMMYYYY'),
		HANDICVEHREGNO, PHYRESTRICTCODE
		INTO :old_validity_start_date:old_validity_start_date_ind, 
			 :old_validity_end_date:old_validity_end_date_ind,
			 :old_handicapped_reg_no:old_handicapped_reg_no_ind,
			 :old_physical_restrict_cd:old_physical_restrict_cd_ind
		FROM JPJ_LIC_INFO
		WHERE LICIDNO = :license_id
		AND OWNERCAT = :category_of_owner
		AND LICTYPE = :license_type
		AND ROWNUM = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select distinct TO_CHAR(LICVALIDSTARTDATE,'DDMMYYYY') ,TO_CH\
AR(LICVALIDENDDATE,'DDMMYYYY') ,HANDICVEHREGNO ,PHYRESTRICTCODE into :b0:b1,:b\
2:b3,:b4:b5,:b6:b7  from JPJ_LIC_INFO where (((LICIDNO=:b8 and OWNERCAT=:b9) a\
nd LICTYPE=:b10) and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1150;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)old_validity_start_date;
 sqlstm.sqhstl[0] = (unsigned int  )9;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&old_validity_start_date_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)old_validity_end_date;
 sqlstm.sqhstl[1] = (unsigned int  )9;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&old_validity_end_date_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)old_handicapped_reg_no;
 sqlstm.sqhstl[2] = (unsigned int  )11;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&old_handicapped_reg_no_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&old_physical_restrict_cd;
 sqlstm.sqhstl[3] = (unsigned int  )1;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&old_physical_restrict_cd_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&license_id;
 sqlstm.sqhstl[4] = (unsigned int  )18;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&category_of_owner;
 sqlstm.sqhstl[5] = (unsigned int  )1;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)license_type;
 sqlstm.sqhstl[6] = (unsigned int  )4;
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



	if((SQLCODE) && !(NO_DATA_FOUND) )
	{
#ifdef DEBUG
		userlog("send_new_lic_cancel: Select from JPJ_LIC_INFO failed ");	
#endif
		strcpy(prog_log.remarks,"send_new_lic_cancel :Select from JPJ_LIC_INFO failed ");
		sprintf(excep_log.error_msg,"send_new_lic_cancel : Select from JPJ_LIC_INFO failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}


	setnull(gmpc_short_name1);
	setnull(gmpc_short_name2);
	setnull(gmpc_short_name3);
	setnull(address1);
	setnull(address2);
	setnull(address3);
	setnull(post_code);

	strcpy(req.license_id, (char *)license_id.arr);

	/* Added on 10/10/2001 - Now KPP will be sent in license Id field */
	if((ret = get_applicant_kpp(appl_info->kpt_number, req.license_id,ctx)) != GMPC_GOOD)
	{
		/* Skip sending this message, go for next	*/
		return ret;
	}
	
	req.new_category_of_owner = new_category_of_owner;
	req.category_of_owner = category_of_owner;
	strcpy(req.kpt_number, kpt_number);
	strcpy(req.license_type, license_type);

	strcpy(req.validity_start_date, validity_start_date);
	strcpy(req.validity_end_date, validity_end_date);
	if (handicapped_reg_no_ind == 0)
		strcpy(req.handicapped_reg_no, handicapped_reg_no);
	req.prb_status = prb_status;
	if (physical_restrict_cd_ind == 0)
		req.physical_restrict_cd = physical_restrict_cd;

	if (old_handicapped_reg_no_ind == 0)
		strcpy(req.rev_handicapped_reg_no, old_handicapped_reg_no);
	if (old_physical_restrict_cd_ind == 0)
		req.rev_physical_restrict_cd = old_physical_restrict_cd;

	strcpy(req.gmpc_short_name1, (char *)gmpc_short_name1.arr);
	strcpy(req.gmpc_short_name2, (char *)gmpc_short_name2.arr);
	strcpy(req.gmpc_short_name3, (char *)gmpc_short_name3.arr);
	strcpy(req.address.address1, (char *)address1.arr);
	strcpy(req.address.address2, (char *)address2.arr);
	strcpy(req.address.address3, (char *)address3.arr);
	strcpy(req.address.post_code, (char *)post_code.arr);
	req.address.city_code = city_code;
	strcpy(req.address.state_code, state_code);
	strcpy(req.dob, dob);
	req.gender = gender;

	if(old_validity_start_date_ind == 0)
		strcpy(req.old_effective_date, old_validity_start_date);

	if(old_validity_end_date_ind == 0)
		strcpy(req.expiry_date, old_validity_end_date);

	/*get the revesal description for the application*/
	ret = get_appl_remarks(application_id, req.rev_desc,ctx);
	if (ret != GMPC_GOOD) return ret;

	/* Get the new license class details	*/
	/* EXEC SQL 
		DECLARE LIC_CLS_USAGE_CURR CURSOR FOR 
		SELECT LICCLASS, LICUSAGECODE FROM APPNT_LIC_INFO
		WHERE APPLID = :applid AND LICTYPE = :license_type; */ 


	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("send_new_lic_cancel:Declare LIC_CLS_USAGE_CURR failed ");	
#endif
		strcpy(prog_log.remarks,"send_new_lic_cancel :Declare LIC_CLS_USAGE_CURR failed ");
		sprintf(excep_log.error_msg,"send_new_lic_cancel : Declare LIC_CLS_USAGE_CURR failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}

	/* EXEC SQL OPEN LIC_CLS_USAGE_CURR; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0035;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1193;
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
 sqlstm.sqhstv[1] = (         void  *)license_type;
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



	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("send_new_lic_cancel: Open LIC_CLS_USAGE_CURR failed ");	
#endif
		strcpy(prog_log.remarks,"send_new_lic_cancel :Open LIC_CLS_USAGE_CURR failed ");
		sprintf(excep_log.error_msg,"send_new_lic_cancel : Open LIC_CLS_USAGE_CURR failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return CURSOR_OPEN_ERROR;
	}

	i_cnt = 0;
	req.first_class = NULL;
	while(1)
	{
		i_cnt = i_cnt + 1;
		/* EXEC SQL FETCH LIC_CLS_USAGE_CURR INTO :license_class:license_class_ind,
			:license_class_usage:license_class_usage_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 13;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1216;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)license_class;
  sqlstm.sqhstl[0] = (unsigned int  )3;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&license_class_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)license_class_usage;
  sqlstm.sqhstl[1] = (unsigned int  )3;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&license_class_usage_ind;
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



		if(NO_DATA_FOUND)
		{
			break;
		}

		if(SQLCODE)
		{
	#ifdef DEBUG
			userlog("send_new_lic_cancel: Fetch LIC_CLS_USAGE_CURR failed ");	
	#endif
			strcpy(prog_log.remarks,"send_new_lic_cancel :Fetch LIC_CLS_USAGE_CURR failed ");
			sprintf(excep_log.error_msg,"send_new_lic_cancel : Fetch LIC_CLS_USAGE_CURR failed :%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
			return CURSOR_FETCH_ERROR;
		}

		usage_info = (LI_LIC_CLASS_T *)malloc(sizeof(LI_LIC_CLASS_T));

		if(usage_info == NULL)
		{
	#ifdef DEBUG
			userlog("send_new_lic_cancel: malloc LI_LIC_CLASS_T failed ");	
	#endif
			strcpy(prog_log.remarks,"send_new_lic_cancel :malloc LI_LIC_CLASS_T failed ");
			sprintf(excep_log.error_msg,"send_new_lic_cancel : malloc LI_LIC_CLASS_T failed :%s ",sqlmsg);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
			return MALLOC_ERROR;
		}
		
		strcpy(usage_info->license_class, license_class);
		strcpy(usage_info->license_class_usage, license_class_usage);
		usage_info->next_class = NULL;


		if(i_cnt == 1)
		{
			req.first_class = usage_info;
			temp_usage_info = usage_info;
		}
		else
		{
			temp_usage_info->next_class = usage_info;
			temp_usage_info = usage_info;
		}
	}

	/* EXEC SQL
		CLOSE LIC_CLS_USAGE_CURR; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1239;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("send_new_lic_cancel: Close LIC_CLS_USAGE_CURR failed ");	
#endif
		strcpy(prog_log.remarks,"send_new_lic_cancel :Close LIC_CLS_USAGE_CURR failed ");
		sprintf(excep_log.error_msg,"send_new_lic_cancel : Close LIC_CLS_USAGE_CURR failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return CURSOR_CLOSE_ERROR;
	}

	/* Get the existing license class list for the new license type			*/
	/* Usually, as this is a new license txn, there won't be any existing	*/
	/* records except in the case where the same lic exists and is expired	*/
	
	/* EXEC SQL DECLARE OLD_CLASS_USAGE CURSOR FOR
		SELECT LICCLASS, LICUSAGECODE
			FROM JPJ_LIC_INFO B
			WHERE B.LICIDNO = :license_id
			AND B.OWNERCAT = :category_of_owner
			AND B.LICTYPE = :license_type
			ORDER BY B.RECORDSERNO; */ 


	/* EXEC SQL OPEN OLD_CLASS_USAGE; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0036;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1254;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (         void  *)&license_id;
 sqlstm.sqhstl[0] = (unsigned int  )18;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&category_of_owner;
 sqlstm.sqhstl[1] = (unsigned int  )1;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)license_type;
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



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("send_new_lic_cancel : Opening cursor OLD_CLASS_USAGE failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"send_new_lic_cancel : Opening cursor OLD_CLASS_USAGE failed ");
		sprintf(excep_log.error_msg, "send_new_lic_cancel : Opening cursor OLD_CLASS_USAGE failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return CURSOR_OPEN_ERROR;
	}
	
	exist_count = 0;
	req.prev_class = NULL;
	
	while(1)
	{
		/* EXEC SQL FETCH OLD_CLASS_USAGE
				 INTO :old_licclass:old_licclass_ind, 
					  :old_licusage:old_licusage_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 13;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1281;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)old_licclass;
  sqlstm.sqhstl[0] = (unsigned int  )3;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&old_licclass_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)old_licusage;
  sqlstm.sqhstl[1] = (unsigned int  )3;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&old_licusage_ind;
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



		if(NO_DATA_FOUND)
		{
			break;
		}
		else if (SQLCODE != 0)
		{
	#ifdef DEBUG
			userlog("send_new_lic_cancel : Fetching cursor OLD_CLASS_USAGE failed : %s", SQLMSG);
	#endif
			strcpy(prog_log.remarks,"send_new_lic_cancel : Fetching cursor OLD_CLASS_USAGE failed ");
			sprintf(excep_log.error_msg, "send_new_lic_cancel : Fetching cursor OLD_CLASS_USAGE failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
					
			return CURSOR_FETCH_ERROR;
		}

		curr_class = (LI_LIC_CLASS_T *)malloc(sizeof(LI_LIC_CLASS_T));
		if (curr_class == NULL)
		{
	#ifdef DEBUG
			userlog("send_new_lic_cancel : cannot allocate memory !!");
	#endif
			excep_log.severity = FATAL;
			sprintf(excep_log.error_msg, "send_new_lic_cancel : cannot allocate memory !!");
			excep_log.termination_flag = 'Y';
			sprintf(prog_log.remarks, "send_new_lic_cancel : cannot allocate memory !!");
			log_error(ctx);
			return MALLOC_ERROR;
		}

		memset(curr_class, 0, sizeof(LI_LIC_CLASS_T));

		if(old_licclass_ind == 0)
			strcpy(curr_class->license_class, old_licclass);
		if(old_licusage_ind == 0)
			strcpy(curr_class->license_class_usage, old_licusage);


	#ifdef DEBUG
			userlog("send_new_lic_cancel : class %s", curr_class->license_class);
			userlog("send_new_lic_cancel : usage %s", curr_class->license_class_usage);
			userlog("send_new_lic_cancel : curr class node %X", curr_class);
	#endif

		if (exist_count == 0)
		{
			req.prev_class = curr_class;
		}
		else
		{
			prev_class->next_class = curr_class;
		}
			
		prev_class = curr_class;

		exist_count++;
	}

	/* EXEC SQL CLOSE OLD_CLASS_USAGE; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 13;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1304;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("send_new_lic_cancel : Closing cursor OLD_CLASS_USAGE failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"send_new_lic_cancel : Closing cursor OLD_CLASS_USAGE failed ");
		sprintf(excep_log.error_msg, "send_new_lic_cancel : Closing cursor OLD_CLASS_USAGE failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return CURSOR_CLOSE_ERROR;
	}

	if(exist_count == 0)
	{
		/* No existing classes */
#ifdef DEBUG
		userlog("send_new_lic_cancel :No existing classes for license type %s", license_type);
#endif
	}


	/* EXEC SQL SELECT VERIFIEDSTAT, NOBLACKLISTCTR, 
			 OBLACKLISTCTR, SUSPCTR, CLASSSUSPCTR, 
			 SERIALNO,EXEMPTCODE, TO_CHAR(FIRSTISSDATE,'DDMMYYYY'),
			 ENDORSEIND,BADGENO, OFFENCEPOINT, GENERATION, 
			 TO_CHAR(PART1EFFDATE,'DDMMYYYY'), TO_CHAR(PART1EXPDATE,'DDMMYYYY'), 
			 CDLIND 
		INTO :verified_status:verified_status_ind,
			:no_blacklist_ctr:no_blacklist_ctr_ind,
			:o_blacklist_ctr:o_blacklist_ctr_ind,
			:susp_ctr:susp_ctr_ind,
			:class_susp_ctr:class_susp_ctr_ind,
			:serial_no:serial_no_ind,
			:exemption_code:exemption_code_ind,
			:first_issue_date:first_issue_date_ind,
			:endorse_ind:endorse_ind_ind,
			:badge_no:badge_no_ind,
			:offence_point:offence_point_ind,
			:generation:generation_ind,
			:pdl_part1_eff_date:pdl_part1_eff_date_ind,
			:pdl_part1_exp_date:pdl_part1_exp_date_ind,
			:cdl_ind:cdl_ind_ind
		FROM JPJ_LIC_REVERSAL_TXN
		WHERE LICIDNO = :license_id
		AND OWNERCAT = :category_of_owner
		AND LICTYPE = :license_type; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select VERIFIEDSTAT ,NOBLACKLISTCTR ,OBLACKLISTCTR ,SUSPCTR \
,CLASSSUSPCTR ,SERIALNO ,EXEMPTCODE ,TO_CHAR(FIRSTISSDATE,'DDMMYYYY') ,ENDORSE\
IND ,BADGENO ,OFFENCEPOINT ,GENERATION ,TO_CHAR(PART1EFFDATE,'DDMMYYYY') ,TO_C\
HAR(PART1EXPDATE,'DDMMYYYY') ,CDLIND into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:\
b10:b11,:b12:b13,:b14:b15,:b16:b17,:b18:b19,:b20:b21,:b22:b23,:b24:b25,:b26:b2\
7,:b28:b29  from JPJ_LIC_REVERSAL_TXN where ((LICIDNO=:b30 and OWNERCAT=:b31) \
and LICTYPE=:b32)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1319;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&verified_status;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&verified_status_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&no_blacklist_ctr;
 sqlstm.sqhstl[1] = (unsigned int  )5;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&no_blacklist_ctr_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&o_blacklist_ctr;
 sqlstm.sqhstl[2] = (unsigned int  )5;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&o_blacklist_ctr_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&susp_ctr;
 sqlstm.sqhstl[3] = (unsigned int  )1;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&susp_ctr_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&class_susp_ctr;
 sqlstm.sqhstl[4] = (unsigned int  )1;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&class_susp_ctr_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&serial_no;
 sqlstm.sqhstl[5] = (unsigned int  )11;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&serial_no_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&exemption_code;
 sqlstm.sqhstl[6] = (unsigned int  )1;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&exemption_code_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)first_issue_date;
 sqlstm.sqhstl[7] = (unsigned int  )9;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&first_issue_date_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&endorse_ind;
 sqlstm.sqhstl[8] = (unsigned int  )1;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&endorse_ind_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&badge_no;
 sqlstm.sqhstl[9] = (unsigned int  )11;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&badge_no_ind;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&offence_point;
 sqlstm.sqhstl[10] = (unsigned int  )12;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)&offence_point_ind;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&generation;
 sqlstm.sqhstl[11] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)&generation_ind;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)pdl_part1_eff_date;
 sqlstm.sqhstl[12] = (unsigned int  )9;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)&pdl_part1_eff_date_ind;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)pdl_part1_exp_date;
 sqlstm.sqhstl[13] = (unsigned int  )9;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)&pdl_part1_exp_date_ind;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
 sqlstm.sqhstv[14] = (         void  *)&cdl_ind;
 sqlstm.sqhstl[14] = (unsigned int  )1;
 sqlstm.sqhsts[14] = (         int  )0;
 sqlstm.sqindv[14] = (         void  *)&cdl_ind_ind;
 sqlstm.sqinds[14] = (         int  )0;
 sqlstm.sqharm[14] = (unsigned int  )0;
 sqlstm.sqadto[14] = (unsigned short )0;
 sqlstm.sqtdso[14] = (unsigned short )0;
 sqlstm.sqhstv[15] = (         void  *)&license_id;
 sqlstm.sqhstl[15] = (unsigned int  )18;
 sqlstm.sqhsts[15] = (         int  )0;
 sqlstm.sqindv[15] = (         void  *)0;
 sqlstm.sqinds[15] = (         int  )0;
 sqlstm.sqharm[15] = (unsigned int  )0;
 sqlstm.sqadto[15] = (unsigned short )0;
 sqlstm.sqtdso[15] = (unsigned short )0;
 sqlstm.sqhstv[16] = (         void  *)&category_of_owner;
 sqlstm.sqhstl[16] = (unsigned int  )1;
 sqlstm.sqhsts[16] = (         int  )0;
 sqlstm.sqindv[16] = (         void  *)0;
 sqlstm.sqinds[16] = (         int  )0;
 sqlstm.sqharm[16] = (unsigned int  )0;
 sqlstm.sqadto[16] = (unsigned short )0;
 sqlstm.sqtdso[16] = (unsigned short )0;
 sqlstm.sqhstv[17] = (         void  *)license_type;
 sqlstm.sqhstl[17] = (unsigned int  )4;
 sqlstm.sqhsts[17] = (         int  )0;
 sqlstm.sqindv[17] = (         void  *)0;
 sqlstm.sqinds[17] = (         int  )0;
 sqlstm.sqharm[17] = (unsigned int  )0;
 sqlstm.sqadto[17] = (unsigned short )0;
 sqlstm.sqtdso[17] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



	if((SQLCODE) && !(NO_DATA_FOUND) )
	{
#ifdef DEBUG
		userlog("send_new_lic_cancel: Select from JPJ_LIC_REVERSAL_TXN failed :%s ",sqlmsg);	
#endif
		strcpy(prog_log.remarks,"send_new_lic_cancel :Select from JPJ_LIC_REVERSAL_TXN failed ");
		sprintf(excep_log.error_msg,"send_new_lic_cancel : Select from JPJ_LIC_REVERSAL_TXN failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}


	/* EXEC SQL SELECT TO_CHAR(STATUSDATE,'DDMMYYYY'), STATUS, PREVSTATUS
			 INTO :prb_stat_date:prb_stat_date_ind,
				  :prb_rev_stat:prb_rev_stat_ind,
				  :prb_prev_stat:prb_prev_stat_ind
			 FROM JPJ_LIC_REVERSAL_TXN
			WHERE LICIDNO = :license_id
			AND OWNERCAT = :category_of_owner
			AND LICTYPE = 'PRB'; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(STATUSDATE,'DDMMYYYY') ,STATUS ,PREVSTATUS in\
to :b0:b1,:b2:b3,:b4:b5  from JPJ_LIC_REVERSAL_TXN where ((LICIDNO=:b6 and OWN\
ERCAT=:b7) and LICTYPE='PRB')";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1406;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)prb_stat_date;
 sqlstm.sqhstl[0] = (unsigned int  )9;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&prb_stat_date_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&prb_rev_stat;
 sqlstm.sqhstl[1] = (unsigned int  )1;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&prb_rev_stat_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&prb_prev_stat;
 sqlstm.sqhstl[2] = (unsigned int  )1;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&prb_prev_stat_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&license_id;
 sqlstm.sqhstl[3] = (unsigned int  )18;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&category_of_owner;
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



	if((SQLCODE) && !(NO_DATA_FOUND) )
	{
#ifdef DEBUG
		userlog("send_new_lic_cancel: Select from PRB info JPJ_LIC_REVERSAL_TXN failed :%s ",sqlmsg);	
#endif
		strcpy(prog_log.remarks,"send_new_lic_cancel :Select PRB info from JPJ_LIC_REVERSAL_TXN failed ");
		sprintf(excep_log.error_msg,"send_new_lic_cancel : Select PRB info from JPJ_LIC_REVERSAL_TXN failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}

	if(verified_status_ind == 0)
		req.verified_status = verified_status;
	if(no_blacklist_ctr_ind == 0)
	{
		setnull(no_blacklist_ctr);
		strcpy(req.no_blacklist_ctr,(char *)no_blacklist_ctr.arr);
	}
	if(o_blacklist_ctr_ind == 0)
	{
		setnull(o_blacklist_ctr);
		strcpy(req.o_blacklist_ctr,(char *)o_blacklist_ctr.arr);
	}

	if(susp_ctr_ind == 0)
		req.susp_ctr = susp_ctr;

	if(class_susp_ctr_ind == 0)
		req.class_susp_ctr = class_susp_ctr;

	if(serial_no_ind == 0)
	{
		setnull(serial_no);
		strcpy(req.serial_no,(char *)serial_no.arr);
	}
	if(exemption_code_ind == 0)
		req.exemption_code = exemption_code;
	if(first_issue_date_ind == 0)
	{
		strcpy(req.first_issue_date,first_issue_date);
	}
	if(endorse_ind_ind == 0)
		req.endorse_ind = endorse_ind;
	if(badge_no_ind == 0)
	{
		setnull(badge_no);
		strcpy(req.badge_no,(char *)badge_no.arr);
	}
	if(offence_point_ind == 0)
	{
		setnull(offence_point);
		strcpy(req.offence_point,(char *)offence_point.arr);
	}
	if(generation_ind == 0)
		req.generation = generation;
	if(prb_stat_date_ind == 0)
	{
		strcpy(req.prb_stat_date,prb_stat_date);
	}
	if(prb_prev_stat_ind == 0)
		req.prb_prev_stat = prb_prev_stat;

	if(prb_rev_stat_ind == 0)
		req.prb_reversal_stat = prb_rev_stat;

	if(pdl_part1_eff_date_ind == 0)
	{
		strcpy(req.pdl_part1_eff_date,pdl_part1_eff_date);
	}
	if(pdl_part1_exp_date_ind == 0)
	{
		strcpy(req.pdl_part1_exp_date,pdl_part1_exp_date);
	}
	if(cdl_ind_ind == 0)
		req.cdl_ind = cdl_ind;


	//fill the financial data for summons
	memset(&li_fin_data, '\0', sizeof(LI_PUT_FIN_DATA_T));
	ret = get_fin_info(application_id, txnserno, &fin_data, &fin_count,ctx);
	if (ret != GMPC_GOOD) return ret;

	li_fin_data.counter = fin_count;
	li_fin_data.len = fin_count * sizeof(FIN_DATA_T);
	if(fin_count > 0) li_fin_data.fin_data = fin_data;

	ret = 0;
	if (GMPC_GOOD != (ret = get_trans_date_time(application_id, txn_serno, NEW_LIC, refer_timestamp.refer_date, refer_timestamp.refer_time,ctx)))
		return ret;

		userlog("refer_timestamp.refer_date : %s",refer_timestamp.refer_date);
	userlog("refer_timestamp.refer_time : %s",refer_timestamp.refer_time);

	/* get the same ws id for reversal which is used for the payment on the same day only */

	/* EXEC SQL SELECT TRIM(TXNWSID) INTO :txnwsid:txnwsid_ind 
			FROM IJPN_LEGACY_REQUEST 
			WHERE APPLID = :applid
			AND TO_CHAR(LEGREQDATETIME,'DDMMYYYY') = TO_CHAR(SYSDATE,'DDMMYYYY')
			AND LEGREQSTAT = 0 
			AND LEGREQFLAG IN ('N') 
			AND ROWNUM = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select trim(TXNWSID) into :b0:b1  from IJPN_LEGACY_REQUEST w\
here ((((APPLID=:b2 and TO_CHAR(LEGREQDATETIME,'DDMMYYYY')=TO_CHAR(SYSDATE,'DD\
MMYYYY')) and LEGREQSTAT=0) and LEGREQFLAG in ('N')) and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1441;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&txnwsid;
 sqlstm.sqhstl[0] = (unsigned int  )18;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&txnwsid_ind;
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
		userlog("send_new_lic_cancel : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID : %s", SQLMSG);
	#endif

		sprintf(excep_log.error_msg, "send_new_lic_cancel : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID: %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';

		strcpy(prog_log.remarks, "send_new_lic_cancel : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID");
		log_error(ctx);
		
	//	return SELECT_ERROR;
	}

	setlen(txnwsid);
	setnull(txnwsid);

	userlog("send_new_lic_cancel : txnwsid : %s",txnwsid.arr);

	if(txnwsid_ind == 0)
	{
		li_p_header.workstation_id[0] = '\0';
		strcpy(li_p_header.workstation_id,txnwsid.arr);
	}

		/* EXEC SQL SELECT JPJUPDSEQ.NEXTVAL 
				INTO :wsid:wsid_ind
				FROM DUAL; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select JPJUPDSEQ.nextval  into :b0:b1  from DUAL ";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1464;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&wsid;
  sqlstm.sqhstl[0] = (unsigned int  )18;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&wsid_ind;
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
		userlog("send_new_lic_cancel : Selecting WS id from sequence LI_TXNWSID failed : %s", SQLMSG);
	#endif
		strcpy(prog_log.remarks,"send_new_lic_cancel : Selecting WS id from sequence LI_TXNWSID failed ");
		sprintf(excep_log.error_msg, "send_new_lic_cancel : Selecting WS id from sequence LI_TXNWSID failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	if(wsid_ind == 0)
	{
		setnull(wsid);
		strcat(li_p_header.workstation_id,":");
		strcat(li_p_header.workstation_id,wsid.arr);
	}

	userlog("send_new_lic_cancel : li_p_header.workstation_id : %s",li_p_header.workstation_id);

	/* EXEC SQL SELECT TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') INTO :tstamp
		FROM DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') into :b0  from D\
UAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1483;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)tstamp;
 sqlstm.sqhstl[0] = (unsigned int  )16;
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




	strncpy(li_p_header.trans_date, tstamp, 8);
	li_p_header.trans_date[DATE_SIZE - 1] = '\0';


	strncpy(li_p_header.trans_time, tstamp + 9, 6);
	li_p_header.trans_time[TIME_SIZE - 1] = '\0';

	userlog("send_new_lic_cancel : tstamp : %s",tstamp);
	userlog("send_new_lic_cancel : li_p_header.trans_date : %s",li_p_header.trans_date);
	userlog("send_new_lic_cancel : li_p_header.trans_time : %s",li_p_header.trans_time);



	/*if(GMPC_GOOD != (ret = li_init(LI_JPJ_REV_NEW_LICENSE)))
	{
#ifdef DEBUG
		userlog("send_new_lic_cancel:li_init LI_JPJ_REV_NEW_LICENSE failed with ret = %d", ret);
#endif
		strcpy(prog_log.remarks,"send_new_lic_cancel : li_init LI_JPJ_REV_NEW_LICENSE failed");
		sprintf(excep_log.error_msg,"send_new_lic_cancel : li_init LI_JPJ_REV_NEW_LICENSE failed with ret = %d", ret);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);
		return ret;
	}Commented for IJPN*/

#ifdef DEBUG
	userlog("send_new_lic_cancel:li init o.k.");   
	userlog("license_id %s",req.license_id);
	userlog("category_of_owner %c",req.category_of_owner);
	userlog("kpt_number %s",req.kpt_number);
	userlog("new_category_of_owner %c",req.new_category_of_owner);
	userlog("gmpc_short_name1 %s",req.gmpc_short_name1);
	userlog("gmpc_short_name2 %s",req.gmpc_short_name2);
	userlog("gmpc_short_name3 %s",req.gmpc_short_name3);
	userlog("Address1 - %s", req.address.address1);
	userlog("Address2 - %s", req.address.address2);
	userlog("Address3 - %s", req.address.address3);
	userlog("Post code - %s", req.address.post_code);
	userlog("City code - %d", req.address.city_code);
	userlog("State code - %s", req.address.state_code);
	userlog("dob %s",req.dob);
	userlog("gender %c",req.gender);
	userlog("license_type %s",req.license_type);
	userlog("validity_start_date %s",req.validity_start_date);
	userlog("validity_end_date %s",req.validity_end_date);
	userlog("handicapped_reg_no %s",req.handicapped_reg_no);
	userlog("physical_restrict_cd %c",req.physical_restrict_cd);
	userlog("rev_desc %s",req.rev_desc);
	userlog("prb_status %c",req.prb_status);

	userlog("old_effective_date %s",req.old_effective_date);
	userlog("expiry_date %s",req.expiry_date);
	userlog("verified_status = %c", req.verified_status);
	userlog("req.no_blacklist_ctr = %s",req.no_blacklist_ctr);
	userlog("req.o_blacklist_ctr = %s",req.o_blacklist_ctr);
	userlog("susp_ctr = %c", req.susp_ctr);
	userlog("class_susp_ctr = %c",req.class_susp_ctr);
	userlog("req.serial_no = %s",req.serial_no);
	userlog("exemption_code = %c",req.exemption_code);
	userlog("req.first_issue_date = %s",req.first_issue_date);
	userlog("endorse_ind = %c", req.endorse_ind);
	userlog("req.badge_no = %s",req.badge_no);
	userlog("req.offence_point = %s",req.offence_point);
	userlog("generation = %d", req.generation);
	userlog("req.prb_stat_date = %s",req.prb_stat_date);
	userlog("prb_prev_stat = %c", req.prb_prev_stat);
	userlog("req.pdl_part1_eff_date = %s",req.pdl_part1_eff_date);
	userlog("req.pdl_part1_exp_date = %s",req.pdl_part1_exp_date);
	userlog("cdl_ind = %c", req.cdl_ind);
	userlog("old handicapped_reg_no %s",req.rev_handicapped_reg_no);
	userlog("old physical_restrict_cd %c",req.rev_physical_restrict_cd);
	userlog("prb_rev_stat = %c", req.prb_reversal_stat);
#endif

	//if (GMPC_GOOD != (ret = li_rev_update_lic_new_p(li_p_header, refer_timestamp, li_fin_data, req, (unsigned char *)rev_msgid, &error_code)))
	sErrMessage[0] = '\0';
	if (GMPC_GOOD != (ret = li_rev_update_lic_new_p(li_p_header, refer_timestamp, li_fin_data, req, (unsigned char *)rev_msgid, &error_code,pReplyMsg, &iReplyMsgLen, sErrMessage)))
	{

		#ifdef DEBUG
			userlog("send_new_lic_cancel:li_rev_update_lic_new_p function returned error: %d", error_code);
			userlog("send_new_lic_cancel:li_rev_update_lic_new_p function returned sErrMessage: %s", sErrMessage);
		#endif

		strcpy(revmsgid, rev_msgid);

		if(sErrMessage[0] != '\0')
		{
		strncpy(rejectcode.arr,sErrMessage,8);
		setlen(rejectcode);

		strcpy(reason_desc.arr,sErrMessage);
		setlen(reason_desc);
		}

		userlog("rejectcode : %s",rejectcode.arr);
		userlog("reason_desc : %s",reason_desc.arr);
		
		strcpy(reject_code, (char *)rejectcode.arr);
		strcpy(reject_reason, (char *)reason_desc.arr);

		userlog("reject_code, reject_reason after copying: %s, %s",reject_code,reject_reason);

		excep_log.severity = FATAL;
		sprintf(excep_log.error_msg, "send_new_lic_cancel:li_rev_update_lic_new_p returned error : %d", error_code);
		excep_log.termination_flag = 'N';
		strcpy(prog_log.remarks, "send_new_lic_cancel:li_rev_update_lic_new_p returned error");
		log_error(ctx);

		//li_end();
		return ret;
	}

	//li_end();
	strcpy(revmsgid, rev_msgid);

	
	return GMPC_GOOD;

}

/****************************************************************************/
/* Function name: send_addnew_class_cancel											*/
/* Description	: This function												*/
/* Input		: appl_id[APP_ID_SIZE]									*/
/* Return values: GMPC_GOOD												*/
/* Limitations	:															*/
/****************************************************************************/
int send_addnew_class_cancel(char *application_id, int txn_serno, char *revmsgid, APPL_INFO_T *appl_info, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char applid[APP_ID_SIZE] = {0};

		/* varchar license_id[LIC_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } license_id;

		char category_of_owner;
		char kpt_number[KPT_SIZE];

		char license_type[LIC_TYPE_SIZE];
		char handicapped_reg_no[HANDICAPPED_REG_NO_SIZE] = {0};
		char physical_restrict_cd = '\0';
//		char rev_desc[JPJ_REVERSAL_DESC_SIZE];
		char prb_status;

		char license_class[LIC_CLS_SIZE]={0};
		char license_class_usage[CLASS_USAGE_SIZE]={0};
		/* varchar lic_sr_no[SERIAL_NO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } lic_sr_no
 = {0};


		int txnserno = 0;
		char txncode[TRANSACTION_CODE_SIZE] = {0};

		short int license_id_ind = 0;
		short int category_of_owner_ind = 0;
		short int kpt_number_ind = 0;
		short int license_type_ind = 0;
		short int handicapped_reg_no_ind = 0;
		short int physical_restrict_cd_ind = 0;
//		short int rev_desc_ind = 0;
		short int prb_status_ind = 0;

		short int license_class_ind = 0;
		short int license_class_usage_ind = 0;
		short int lic_sr_no_ind = 0;

		short int txncode_ind = 0;

		/* Added for IJPN */
	/* varchar reason_desc[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } reason_desc
 = {0};

	short reason_desc_ind = -1;
	/* varchar rejectcode[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } rejectcode
 = {0};

	short rejectcode_ind = -1;	
	char branch_code[7] = {0};
	/* End for IJPN */

	char  tstamp[DATE_TIME_SIZE]= {0};
	short tstamp_ind = -1;

	/* varchar wsid[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } wsid
 = {0};

	short wsid_ind = -1;

	/* varchar  txnwsid[WS_ID_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[16]; } txnwsid
 = {0};

	short txnwsid_ind = -1;

		sql_context pcCtx; // Modification for IJPN
		/* EXEC SQL END DECLARE SECTION; */ 

		
		LI_REV_ADD_CLASS_REQ_T req = {0};
		LI_REFER_TIMESTAMP_T refer_timestamp;

		int i_cnt = 0;
		int fin_count = 0;
		FIN_DATA_T *fin_data;
		LI_PUT_FIN_DATA_T li_fin_data;

		char rev_msgid[MSG_ID_SIZE];
		int error_code;
		int ret = 0;
	
	/* Added for IJPN */
	char pReplyMsg[LI_REPLY_MSG_SIZE]={0};
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE]={0};
    /* End for IJPN */

		pcCtx = ctx; // Modification for IJPN
		/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	memset(&req, 0, sizeof(LI_REV_ADD_CLASS_REQ_T));
	strcpy(applid, application_id);
	txnserno = txn_serno;
	if (appl_info->lic_id_no[0] != '\0')
	{
		strcpy((char *)license_id.arr, appl_info->lic_id_no);
		setlen(license_id);
	}

	category_of_owner = appl_info->ownercat;
	prb_status = appl_info->prb_status;
	strcpy(kpt_number, appl_info->kpt_number);

	/* EXEC SQL
		SELECT TXNCODE, LICTYPE 
		INTO :txncode:txncode_ind, license_type:license_type_ind 
		FROM APPL_TXN WHERE 
		APPLID = :applid 
		AND TXNSERNO = :txnserno; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TXNCODE ,LICTYPE into :b0:b1,:b2:b3  from APPL_TXN wh\
ere (APPLID=:b4 and TXNSERNO=:b5)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1502;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)txncode;
 sqlstm.sqhstl[0] = (unsigned int  )4;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&txncode_ind;
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
 sqlstm.sqhstv[2] = (         void  *)applid;
 sqlstm.sqhstl[2] = (unsigned int  )20;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&txnserno;
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




	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("send_addnew_class_cancel: Select from appl_txn failed ");	
#endif
		strcpy(prog_log.remarks,"send_addnew_class_cancel :Select from appl_txn failed ");
		sprintf(excep_log.error_msg,"send_addnew_class_cancel : Select from appl_txn failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}

	/* EXEC SQL 
		SELECT DISTINCT HANDICVEHREGNO, PHYRESTRICTCODE
		INTO :handicapped_reg_no:handicapped_reg_no_ind,
			 :physical_restrict_cd:physical_restrict_cd_ind
		FROM APPNT_LIC_INFO
		WHERE APPLID = :applid AND LICTYPE = :license_type
		AND ROWNUM = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select distinct HANDICVEHREGNO ,PHYRESTRICTCODE into :b0:b1,\
:b2:b3  from APPNT_LIC_INFO where ((APPLID=:b4 and LICTYPE=:b5) and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1533;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)handicapped_reg_no;
 sqlstm.sqhstl[0] = (unsigned int  )11;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&handicapped_reg_no_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&physical_restrict_cd;
 sqlstm.sqhstl[1] = (unsigned int  )1;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&physical_restrict_cd_ind;
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
 sqlstm.sqhstv[3] = (         void  *)license_type;
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



	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("send_addnew_class_cancel: Select from APPNT_LIC_INFO failed ");	
#endif
		strcpy(prog_log.remarks,"send_addnew_class_cancel :Select from APPNT_LIC_INFO failed ");
		sprintf(excep_log.error_msg,"send_addnew_class_cancel : Select from APPNT_LIC_INFO failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}

	/* EXEC SQL 
		SELECT SERIALNO 
		INTO :lic_sr_no:lic_sr_no_ind
		FROM JPJ_LIC_REVERSAL_TXN
		WHERE LICIDNO = :license_id:license_id_ind
		AND OWNERCAT = :category_of_owner:category_of_owner_ind 
		AND LICTYPE = :license_type
		AND ROWNUM = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select SERIALNO into :b0:b1  from JPJ_LIC_REVERSAL_TXN where\
 (((LICIDNO=:b2:b3 and OWNERCAT=:b4:b5) and LICTYPE=:b6) and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1564;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&lic_sr_no;
 sqlstm.sqhstl[0] = (unsigned int  )11;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&lic_sr_no_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&license_id;
 sqlstm.sqhstl[1] = (unsigned int  )18;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&license_id_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&category_of_owner;
 sqlstm.sqhstl[2] = (unsigned int  )1;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&category_of_owner_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)license_type;
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



	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("send_addnew_class_cancel: Select from JPJ_LIC_REVERSAL_TXN failed ");	
#endif
		strcpy(prog_log.remarks,"send_addnew_class_cancel :Select from JPJ_LIC_REVERSAL_TXN failed ");
		sprintf(excep_log.error_msg,"send_addnew_class_cancel : Select from JPJ_LIC_REVERSAL_TXN failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}

	if (lic_sr_no_ind == 0)
	{
		setnull(lic_sr_no);
		strcpy(req.lic_sr_no, (char *)lic_sr_no.arr);
	}

	strcpy(req.license_id, (char *)license_id.arr);

	/* Added on 10/10/2001 - Now KPP will be sent in license Id field */
	if((ret = get_applicant_kpp(appl_info->kpt_number, req.license_id,ctx)) != GMPC_GOOD)
	{
		/* Skip sending this message, go for next	*/
		return ret;
	}
	
	req.category_of_owner = category_of_owner;
	strcpy(req.kpt_number, kpt_number);
	if (handicapped_reg_no_ind == 0)
		strcpy(req.handicapped_reg_no, handicapped_reg_no);
	if (physical_restrict_cd_ind == 0)
		req.physical_restrict_cd = physical_restrict_cd;
	strcpy(req.license_type, license_type);

	/*get the revesal description for the application*/
	ret = get_appl_remarks(application_id, req.rev_desc,ctx);
	if (ret != GMPC_GOOD) return ret;

	if ((ret = get_existing_classes(application_id, appl_info->lic_id_no, appl_info->ownercat, license_type, &(req.existing_class),ctx)) != GMPC_GOOD)
	{
		/* cannot continue sending this message */
		return GMPC_GOOD;

	}

	if ((ret = get_new_class(applid, appl_info->lic_id_no, appl_info->ownercat, txncode, license_type, &(req.new_class),ctx)) != GMPC_GOOD)
	{
		/* cannot continue sending this message */
		return GMPC_GOOD;

	}

	// fill the financial data for summons
	memset(&li_fin_data, '\0', sizeof(LI_PUT_FIN_DATA_T));
	ret = get_fin_info(application_id, txnserno, &fin_data, &fin_count,ctx);
	if (ret != GMPC_GOOD) return ret;

	li_fin_data.counter = fin_count;
	li_fin_data.len = fin_count * sizeof(FIN_DATA_T);
	if(fin_count > 0) li_fin_data.fin_data = fin_data;

	ret = 0;
	if (GMPC_GOOD != (ret = get_trans_date_time(application_id, txn_serno, ADD_CLASS, refer_timestamp.refer_date, refer_timestamp.refer_time,ctx)))
		return ret;

	userlog("refer_timestamp.refer_date : %s",refer_timestamp.refer_date);
	userlog("refer_timestamp.refer_time : %s",refer_timestamp.refer_time);

	/* get the same ws id for reversal which is used for the payment on the same day only */

	/* EXEC SQL SELECT TRIM(TXNWSID) INTO :txnwsid:txnwsid_ind 
			FROM IJPN_LEGACY_REQUEST 
			WHERE APPLID = :applid
			AND TO_CHAR(LEGREQDATETIME,'DDMMYYYY') = TO_CHAR(SYSDATE,'DDMMYYYY')
			AND LEGREQSTAT = 0 
			AND LEGREQFLAG IN ('L') 
			AND ROWNUM = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select trim(TXNWSID) into :b0:b1  from IJPN_LEGACY_REQUEST w\
here ((((APPLID=:b2 and TO_CHAR(LEGREQDATETIME,'DDMMYYYY')=TO_CHAR(SYSDATE,'DD\
MMYYYY')) and LEGREQSTAT=0) and LEGREQFLAG in ('L')) and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1595;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&txnwsid;
 sqlstm.sqhstl[0] = (unsigned int  )18;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&txnwsid_ind;
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
		userlog("send_addnew_class_cancel : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID : %s", SQLMSG);
	#endif

		sprintf(excep_log.error_msg, "send_addnew_class_cancel : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID: %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';

		strcpy(prog_log.remarks, "send_addnew_class_cancel : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID");
		log_error(ctx);
		
	//	return SELECT_ERROR;
	}

	setlen(txnwsid);
	setnull(txnwsid);

	userlog("send_addnew_class_cancel : txnwsid : %s",txnwsid.arr);

	if(txnwsid_ind == 0)
	{
		li_p_header.workstation_id[0] = '\0';
		strcpy(li_p_header.workstation_id,txnwsid.arr);
	}

		/* EXEC SQL SELECT JPJUPDSEQ.NEXTVAL 
				INTO :wsid:wsid_ind
				FROM DUAL; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select JPJUPDSEQ.nextval  into :b0:b1  from DUAL ";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1618;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&wsid;
  sqlstm.sqhstl[0] = (unsigned int  )18;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&wsid_ind;
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
		userlog("send_addnew_class_cancel : Selecting WS id from sequence LI_TXNWSID failed : %s", SQLMSG);
	#endif
		strcpy(prog_log.remarks,"send_addnew_class_cancel : Selecting WS id from sequence LI_TXNWSID failed ");
		sprintf(excep_log.error_msg, "send_addnew_class_cancel : Selecting WS id from sequence LI_TXNWSID failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	if(wsid_ind == 0)
	{
		setnull(wsid);
		strcat(li_p_header.workstation_id,":");
		strcat(li_p_header.workstation_id,wsid.arr);
	}

	userlog("send_addnew_class_cancel : li_p_header.workstation_id : %s",li_p_header.workstation_id);

	/* EXEC SQL SELECT TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') INTO :tstamp
		FROM DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') into :b0  from D\
UAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1637;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)tstamp;
 sqlstm.sqhstl[0] = (unsigned int  )16;
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




	strncpy(li_p_header.trans_date, tstamp, 8);
	li_p_header.trans_date[DATE_SIZE - 1] = '\0';


	strncpy(li_p_header.trans_time, tstamp + 9, 6);
	li_p_header.trans_time[TIME_SIZE - 1] = '\0';

	userlog("send_addnew_class_cancel : tstamp : %s",tstamp);
	userlog("send_addnew_class_cancel : li_p_header.trans_date : %s",li_p_header.trans_date);
	userlog("send_addnew_class_cancel : li_p_header.trans_time : %s",li_p_header.trans_time);



	/*if(GMPC_GOOD != (ret = li_init(LI_JPJ_REV_ADD_CLASS)))
	{
#ifdef DEBUG
		userlog("send_addnew_class_cancel:li_init failed with ret = %d", ret);
#endif
		strcpy(prog_log.remarks,"send_addnew_class_cancel : li_init failed");
		sprintf(excep_log.error_msg,"send_addnew_class_cancel : li_init failed with ret = %d", ret);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);
		return ret;
	}Commented for IJPN*/

#ifdef DEBUG
	userlog("send_addnew_class_cancel:li init o.k.");   
#endif

	//if (GMPC_GOOD != (ret = li_rev_add_new_class_p(li_p_header, refer_timestamp, li_fin_data, req,(unsigned char *) rev_msgid, &error_code)))
	sErrMessage[0] = '\0';
	if (GMPC_GOOD != (ret = li_rev_add_new_class_p(li_p_header, refer_timestamp, li_fin_data, req,(unsigned char *) rev_msgid, &error_code, pReplyMsg, &iReplyMsgLen, sErrMessage)))
	{

		#ifdef DEBUG
			userlog("send_addnew_class_cancel: li_rev_add_new_class_p function returned error: %d", error_code);
			userlog("send_addnew_class_cancel: li_rev_add_new_class_p function returned sErrMessage: %s", sErrMessage);
		#endif

		strcpy(revmsgid, rev_msgid);

		if(sErrMessage[0] != '\0')
		{
		strncpy(rejectcode.arr,sErrMessage,8);
		setlen(rejectcode);

		strcpy(reason_desc.arr,sErrMessage);
		setlen(reason_desc);
		}

		userlog("rejectcode : %s",rejectcode.arr);
		userlog("reason_desc : %s",reason_desc.arr);
		
		strcpy(reject_code, (char *)rejectcode.arr);
		strcpy(reject_reason, (char *)reason_desc.arr);

		userlog("reject_code, reject_reason after copying: %s, %s",reject_code,reject_reason);

		excep_log.severity = FATAL;
		sprintf(excep_log.error_msg, "send_addnew_class_cancel: li_rev_add_new_class_p returned error : %d", error_code);
		excep_log.termination_flag = 'N';
		strcpy(prog_log.remarks, "send_addnew_class_cancel: li_rev_add_new_class_p returned error");
		log_error(ctx);

		//li_end();
		//log_error();
		return ret;
	}

	//li_end();
	strcpy(revmsgid, rev_msgid);

	return GMPC_GOOD;

}


/****************************************************************************/
/* Function name: send_licrepl_cancel											*/
/* Description	: This function												*/
/* Input		: appl_id[APP_ID_SIZE]									*/
/* Return values: GMPC_GOOD												*/
/* Limitations	:															*/
/****************************************************************************/
int send_licrepl_cancel(char *application_id, int txn_serno, char *revmsgid, APPL_INFO_T *appl_info, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char applid[APP_ID_SIZE] = {0};

		/* varchar license_id[LIC_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } license_id
 = {0};

		char category_of_owner = '\0';
		char kpt_number[KPT_SIZE] = {0};
		char license_type[LIC_TYPE_SIZE] = {0};
		/* varchar lic_sr_no[SERIAL_NO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } lic_sr_no
 = {0};


		int txnserno = 0;
		char txncode[TRANSACTION_CODE_SIZE] = {0};

		short int license_id_ind = 0;
		short int category_of_owner_ind = 0;
		short int kpt_number_ind = 0;
		short int license_type_ind = 0;
		short int lic_sr_no_ind = 0;

		short int txncode_ind = 0;

	/* Added for IJPN */
	/* varchar reason_desc[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } reason_desc
 = {0};

	short reason_desc_ind = -1;
	/* varchar rejectcode[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } rejectcode
 = {0};

	short rejectcode_ind = -1;	
	char branch_code[7] = {0};
	/* End for IJPN */

	char  tstamp[DATE_TIME_SIZE]= {0};
	short tstamp_ind = -1;

	/* varchar wsid[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } wsid
 = {0};

	short wsid_ind = -1;

	/* varchar  txnwsid[WS_ID_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[16]; } txnwsid
 = {0};

	short txnwsid_ind = -1;


	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	LI_REV_LIC_REPLACEMENT_REQ_T req = {0};
	LI_REFER_TIMESTAMP_T refer_timestamp;

	int fin_count = 0;
	FIN_DATA_T *fin_data;
	LI_PUT_FIN_DATA_T li_fin_data;

	char rev_msgid[MSG_ID_SIZE];
	int error_code;
	int ret = 0;

	/* Added for IJPN */
	char pReplyMsg[LI_REPLY_MSG_SIZE]={0};
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE]={0};
    /* End for IJPN */


	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	

	memset(&req, 0, sizeof(LI_REV_LIC_REPLACEMENT_REQ_T));
	strcpy(applid, application_id);
	txnserno = txn_serno;
	if (appl_info->lic_id_no[0] != '\0')
	{
		strcpy((char *)license_id.arr, appl_info->lic_id_no);
		setlen(license_id);
	}

	category_of_owner = appl_info->ownercat;
	strcpy(kpt_number, appl_info->kpt_number);

	/* EXEC SQL
		SELECT TXNCODE, LICTYPE 
		INTO :txncode:txncode_ind, license_type:license_type_ind 
		FROM APPL_TXN WHERE 
		APPLID = :applid 
		AND TXNSERNO = :txnserno; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TXNCODE ,LICTYPE into :b0:b1,:b2:b3  from APPL_TXN wh\
ere (APPLID=:b4 and TXNSERNO=:b5)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1656;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)txncode;
 sqlstm.sqhstl[0] = (unsigned int  )4;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&txncode_ind;
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
 sqlstm.sqhstv[2] = (         void  *)applid;
 sqlstm.sqhstl[2] = (unsigned int  )20;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&txnserno;
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



	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("send_licrepl_cancel: Select from appl_txn failed ");	
#endif
		strcpy(prog_log.remarks,"send_licrepl_cancel :Select from appl_txn failed ");
		sprintf(excep_log.error_msg,"send_licrepl_cancel : Select from appl_txn failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}


	/* EXEC SQL 
		SELECT SERIALNO 
		INTO :lic_sr_no:lic_sr_no_ind
		FROM JPJ_LIC_REVERSAL_TXN
		WHERE LICIDNO = :license_id:license_id_ind
		AND OWNERCAT = :category_of_owner:category_of_owner_ind 
		AND LICTYPE = :license_type
		AND ROWNUM = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select SERIALNO into :b0:b1  from JPJ_LIC_REVERSAL_TXN where\
 (((LICIDNO=:b2:b3 and OWNERCAT=:b4:b5) and LICTYPE=:b6) and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1687;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&lic_sr_no;
 sqlstm.sqhstl[0] = (unsigned int  )11;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&lic_sr_no_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&license_id;
 sqlstm.sqhstl[1] = (unsigned int  )18;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&license_id_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&category_of_owner;
 sqlstm.sqhstl[2] = (unsigned int  )1;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&category_of_owner_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)license_type;
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



	if(SQLCODE)
	{
#ifdef DEBUG
		userlog("send_licrepl_cancel: Select from JPJ_LIC_REVERSAL_TXN failed :%s ",sqlmsg);
#endif
		strcpy(prog_log.remarks,"send_licrepl_cancel :Select from JPJ_LIC_REVERSAL_TXN failed ");
		sprintf(excep_log.error_msg,"send_licrepl_cancel : Select from JPJ_LIC_REVERSAL_TXN failed :%s ",sqlmsg);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
		return SELECT_ERROR;
	}

	if (lic_sr_no_ind == 0)
	{
		setnull(lic_sr_no);
		strcpy(req.lic_sr_no, (char *)lic_sr_no.arr);
	}
	strcpy(req.license_id, (char *)license_id.arr);

	/* Added on 10/10/2001 - Now KPP will be sent in license Id field */
	if((ret = get_applicant_kpp(appl_info->kpt_number, req.license_id,ctx)) != GMPC_GOOD)
	{
		/* Skip sending this message, go for next	*/
		return ret;
	}
	
	req.category_of_owner = category_of_owner;
	strcpy(req.kpt_number, kpt_number);
	
	if(!strcmp(license_type, PDL_LIC))
		strcpy(req.pdl_lic , PDL_LIC);
	else if(!strcmp(license_type, PRB_LIC))
		strcpy(req.prb_lic , PRB_LIC);
	else if(!strcmp(license_type, CDL_LIC))
		strcpy(req.cdl_lic , CDL_LIC);
	else if(!strcmp(license_type, PSV_LIC))
		strcpy(req.psv_lic , PSV_LIC);
	else if(!strcmp(license_type, GDL_LIC))
		strcpy(req.gdl_lic , GDL_LIC);

	// Added this check on 03/05/06 to replace PDL with LDL while sending message to host
	//if(strncmp(req.pdl_lic ,PDL_LIC,3) == 0);
	//	strcpy(req.pdl_lic , LDL_LIC);

	// fill the financial daat for summons
	memset(&li_fin_data, '\0', sizeof(LI_PUT_FIN_DATA_T));
	ret = get_fin_info(applid, txnserno, &fin_data, &fin_count,ctx);
	if (ret != GMPC_GOOD) return ret;

	li_fin_data.counter = fin_count;
	li_fin_data.len = fin_count * sizeof(FIN_DATA_T);
	if(fin_count > 0) li_fin_data.fin_data = fin_data;

	ret = 0;
	if (GMPC_GOOD != (ret = get_trans_date_time(application_id, txn_serno, REPLACE_LIC, refer_timestamp.refer_date, refer_timestamp.refer_time,ctx)))
		return ret;

	userlog("refer_timestamp.refer_date : %s",refer_timestamp.refer_date);
	userlog("refer_timestamp.refer_time : %s",refer_timestamp.refer_time);

	/* get the same ws id for reversal which is used for the payment on the same day only */

	/* EXEC SQL SELECT TRIM(TXNWSID) INTO :txnwsid:txnwsid_ind 
			FROM IJPN_LEGACY_REQUEST 
			WHERE APPLID = :applid
			AND TO_CHAR(LEGREQDATETIME,'DDMMYYYY') = TO_CHAR(SYSDATE,'DDMMYYYY')
			AND LEGREQSTAT = 0 
			AND LEGREQFLAG IN ('E') 
			AND ROWNUM = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select trim(TXNWSID) into :b0:b1  from IJPN_LEGACY_REQUEST w\
here ((((APPLID=:b2 and TO_CHAR(LEGREQDATETIME,'DDMMYYYY')=TO_CHAR(SYSDATE,'DD\
MMYYYY')) and LEGREQSTAT=0) and LEGREQFLAG in ('E')) and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1718;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&txnwsid;
 sqlstm.sqhstl[0] = (unsigned int  )18;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&txnwsid_ind;
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
		userlog("send_licrepl_cancel : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID : %s", SQLMSG);
	#endif

		sprintf(excep_log.error_msg, "send_licrepl_cancel : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID: %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';

		strcpy(prog_log.remarks, "send_licrepl_cancel : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID");
		log_error(ctx);
		
	//	return SELECT_ERROR;
	}

	setlen(txnwsid);
	setnull(txnwsid);

	userlog("send_licrepl_cancel : txnwsid : %s",txnwsid.arr);

	if(txnwsid_ind == 0)
	{
		li_p_header.workstation_id[0] = '\0';
		strcpy(li_p_header.workstation_id,txnwsid.arr);
	}

		/* EXEC SQL SELECT JPJUPDSEQ.NEXTVAL 
				INTO :wsid:wsid_ind
				FROM DUAL; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select JPJUPDSEQ.nextval  into :b0:b1  from DUAL ";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1741;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&wsid;
  sqlstm.sqhstl[0] = (unsigned int  )18;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&wsid_ind;
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
		userlog("send_payment_rev_jpj : Selecting WS id from sequence LI_TXNWSID failed : %s", SQLMSG);
	#endif
		strcpy(prog_log.remarks,"send_payment_rev_jpj : Selecting WS id from sequence LI_TXNWSID failed ");
		sprintf(excep_log.error_msg, "send_payment_rev_jpj : Selecting WS id from sequence LI_TXNWSID failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	if(wsid_ind == 0)
	{
		setnull(wsid);
		strcat(li_p_header.workstation_id,":");
		strcat(li_p_header.workstation_id,wsid.arr);
	}

	userlog("send_licrepl_cancel : li_p_header.workstation_id : %s",li_p_header.workstation_id);

	/* EXEC SQL SELECT TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') INTO :tstamp
		FROM DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') into :b0  from D\
UAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1760;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)tstamp;
 sqlstm.sqhstl[0] = (unsigned int  )16;
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




	strncpy(li_p_header.trans_date, tstamp, 8);
	li_p_header.trans_date[DATE_SIZE - 1] = '\0';


	strncpy(li_p_header.trans_time, tstamp + 9, 6);
	li_p_header.trans_time[TIME_SIZE - 1] = '\0';

	userlog("send_licrepl_cancel : tstamp : %s",tstamp);
	userlog("send_licrepl_cancel : li_p_header.trans_date : %s",li_p_header.trans_date);
	userlog("send_licrepl_cancel : li_p_header.trans_time : %s",li_p_header.trans_time);



	/*if(GMPC_GOOD != (ret = li_init(LI_JPJ_REV_LIC_REPL)))
	{
#ifdef DEBUG
		userlog("send_licrepl_cancel:li_init LI_JPJ_REV_LIC_REPL failed with ret = %d", ret);
#endif
		strcpy(prog_log.remarks,"send_licrepl_cancel : li_init LI_JPJ_REV_LIC_REPL failed");
		sprintf(excep_log.error_msg,"send_licrepl_cancel : li_init LI_JPJ_REV_LIC_REPL failed with ret = %d", ret);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);
		return ret;
	} 

#ifdef DEBUG
	userlog("send_licrepl_cancel:li init o.k.");   
#endif Commented for IJPN*/

	// Get the JPN branch code 02.	
	//if (GMPC_GOOD != (ret = li_rev_lic_replacement_p(li_p_header, refer_timestamp, li_fin_data, req, (unsigned char *)rev_msgid, &error_code)))
	sErrMessage[0] = '\0';
	if (GMPC_GOOD != (ret = li_rev_lic_replacement_p(li_p_header, refer_timestamp, li_fin_data, req, (unsigned char *)rev_msgid, &error_code,pReplyMsg, &iReplyMsgLen, sErrMessage)))
	{

		#ifdef DEBUG
			userlog("send_licrepl_cancel: li_rev_lic_replacement_p function returned error: %d", error_code);
			userlog("send_licrepl_cancel: li_rev_lic_replacement_p function returned sErrMessage: %s", sErrMessage);
		#endif
		
		strcpy(revmsgid, rev_msgid);

		if(sErrMessage[0] != '\0')
		{
		strncpy(rejectcode.arr,sErrMessage,8);
		setlen(rejectcode);

		strcpy(reason_desc.arr,sErrMessage);
		setlen(reason_desc);
		}

		userlog("rejectcode : %s",rejectcode.arr);
		userlog("reason_desc : %s",reason_desc.arr);
		
		strcpy(reject_code, (char *)rejectcode.arr);
		strcpy(reject_reason, (char *)reason_desc.arr);

		userlog("reject_code, reject_reason after copying: %s, %s",reject_code,reject_reason);

		excep_log.severity = FATAL;
		sprintf(excep_log.error_msg, "send_licrepl_cancel:li_rev_lic_replacement_p returned error : %d", error_code);
		excep_log.termination_flag = 'N';
		strcpy(prog_log.remarks, "send_licrepl_cancel:li_rev_lic_replacement_p returned error");
		log_error(ctx);

		//li_end();
		return ret;
	}

	//li_end();
	strcpy(revmsgid, rev_msgid);

	return GMPC_GOOD;

}


int get_appl_info(char *applid, APPL_INFO_T *appl_info,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		char id_type[ID_TYPE_SIZE] = {0};
		/* varchar id_number[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } id_number
 = {0};

		char lic_id_type[ID_TYPE_SIZE] = {0};
		/* varchar lic_id_no[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } lic_id_no
 = {0};

		char ownercat = '\0';
		char newownercat = '\0';
		char kpt_number[KPT_SIZE] = {0};
		char prb_status = '\0';

		short int id_type_ind = 0;
		short int id_number_ind = 0;
		short int lic_id_type_ind = 0;
		short int lic_id_no_ind = 0;
		short int ownercat_ind = 0;
		short int newownercat_ind = 0;
		short int kpt_number_ind = 0;
		short int prb_status_ind = 0;

		char hv_residentstat='\0';
		short hv_residentstat_ind=0;

		int hv_count =0;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	strcpy(appl_id, applid);


	/* EXEC SQL
		SELECT IDTYPE, IDNO, 
		LICIDTYPE,LICIDNO, OWNERCAT, KPTNO, PRBSTATUS
		INTO :id_type:id_type_ind, 
		:id_number:id_number_ind, lic_id_type:lic_id_type_ind, 
		:lic_id_no:lic_id_no_ind, :ownercat:ownercat_ind, 
		:kpt_number:kpt_number_ind,
		:prb_status:prb_status_ind
		FROM APPLICATION
		WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select IDTYPE ,IDNO ,LICIDTYPE ,LICIDNO ,OWNERCAT ,KPTNO ,PR\
BSTATUS into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11,:b12:b13  from APPLIC\
ATION where APPLID=:b14";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1779;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)id_type;
 sqlstm.sqhstl[0] = (unsigned int  )3;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&id_type_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&id_number;
 sqlstm.sqhstl[1] = (unsigned int  )18;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&id_number_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)lic_id_type;
 sqlstm.sqhstl[2] = (unsigned int  )3;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&lic_id_type_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&lic_id_no;
 sqlstm.sqhstl[3] = (unsigned int  )18;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&lic_id_no_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&ownercat;
 sqlstm.sqhstl[4] = (unsigned int  )1;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&ownercat_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)kpt_number;
 sqlstm.sqhstl[5] = (unsigned int  )13;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&kpt_number_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&prb_status;
 sqlstm.sqhstl[6] = (unsigned int  )1;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&prb_status_ind;
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




	/* Included the same logic here also like jpjupdate to determine 
		the owner category */

	/* Added on 13082003 according to JRS-99 by shiva.p */
	/* EXEC SQL SELECT RESIDENTSTAT into :hv_residentstat:hv_residentstat_ind
		FROM APPNT_JPN_INFO 
		WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select RESIDENTSTAT into :b0:b1  from APPNT_JPN_INFO where A\
PPLID=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1826;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_residentstat;
 sqlstm.sqhstl[0] = (unsigned int  )1;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&hv_residentstat_ind;
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



	#ifdef DEBUG
		userlog("Resident status from jpn_info is %c", hv_residentstat);
	#endif

	if (NO_DATA_FOUND)
	{
		hv_residentstat_ind=0;

		/* EXEC SQL SELECT RESIDENTSTAT into :hv_residentstat:hv_residentstat_ind
		FROM JPN_INFO 
		WHERE KPTNO =:kpt_number; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select RESIDENTSTAT into :b0:b1  from JPN_INFO where KPTNO=\
:b2";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1849;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&hv_residentstat;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&hv_residentstat_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)kpt_number;
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



	#ifdef DEBUG
		userlog("Resident status from jpn_info is %c", hv_residentstat);
	#endif
		
	}

	
	if (SQLCODE != 0 )
	{
		sprintf(excep_log.error_msg, "get_appl_rec : error while selecting resident status in appnt_jpn_info, %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';
		
		strcpy(prog_log.remarks, "get_appl_rec : error while selecting appnt_jpn_info");
		log_error(ctx);

		return SELECT_ERROR;
	}

		setnull(id_number);
		setnull(lic_id_no);

	#ifdef DEBUG
		userlog("get_appl_info: data from Application table");
		userlog("get_appl_info: Applid :%s:", applid);
		userlog("get_appl_info: id_type :%s:", id_type);
		userlog("get_appl_info: id_number :%s:", id_number.arr);
		userlog("get_appl_info: lic_id_type :%s:", lic_id_type);
		userlog("get_appl_info: lic_id_no :%s:", lic_id_no.arr);
		userlog("get_appl_info: ownercat :%c:", ownercat);
		userlog("get_appl_info: kpt_number :%s:", kpt_number);
		userlog("get_appl_info: prb_status :%c:", prb_status);
		userlog("get_appl_info: Resident status from appnt_jpn_info is %c", hv_residentstat);
	#endif
	
	if(hv_residentstat_ind ==0)
	{
		if(hv_residentstat =='C' || hv_residentstat =='B')
		{
			newownercat='1';
		}
		else if(hv_residentstat =='M' || hv_residentstat =='P')
		{
			newownercat='0';
		}
		else if(hv_residentstat =='H')
		{
			newownercat='9';
		}
	}
	else
	{
		hv_residentstat_ind=0;

		/* EXEC SQL SELECT RESIDENTSTAT into :hv_residentstat:hv_residentstat_ind
		FROM JPN_INFO 
		WHERE KPTNO =:kpt_number; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select RESIDENTSTAT into :b0:b1  from JPN_INFO where KPTNO=\
:b2";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1872;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&hv_residentstat;
  sqlstm.sqhstl[0] = (unsigned int  )1;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&hv_residentstat_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)kpt_number;
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



	#ifdef DEBUG
		userlog("Resident status from jpn_info is %c", hv_residentstat);
	#endif
		if (SQLCODE != 0)
		{
			sprintf(excep_log.error_msg, "get_appl_rec : error while selecting resident status in jpn_info, %s", SQLMSG);
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';
			
			strcpy(prog_log.remarks, "get_appl_rec : error while selecting jpn_info");
			log_error(ctx);

			return SELECT_ERROR;
		}

		if(hv_residentstat_ind ==0)
		{
			if(hv_residentstat =='C' || hv_residentstat =='B')
			{
				newownercat='1';
			}
			else if(hv_residentstat =='M' || hv_residentstat =='P')
			{
				newownercat='0';
			}
			else if(hv_residentstat =='H')
			{
				newownercat='9';
			}
		}
		else newownercat = ownercat;

	}


	/******NEW CODE END HERE********/

		if(id_type_ind != -1)
		{
			strcpy(appl_info->id_type, id_type);
		}

		if(id_number_ind != -1)
		{
			setnull(id_number);
			strcpy(appl_info->id_number, (char *)id_number.arr);
		}

		if(lic_id_type_ind != -1)
		{
			strcpy(appl_info->lic_id_type, lic_id_type);
		}

		if(lic_id_no_ind != -1)
		{
			setnull(lic_id_no);
			strcpy(appl_info->lic_id_no, (char *)lic_id_no.arr);
		}


		if(kpt_number_ind != -1)
		{
			strcpy(appl_info->kpt_number, kpt_number);
		}

		if(prb_status_ind != -1)
		{
			appl_info->prb_status = prb_status;
		}

		if(ownercat_ind != -1)
		{
			appl_info->ownercat = ownercat;
		}

		if(newownercat_ind != -1)
		{
			appl_info->newownercat = newownercat;
		}

	#ifdef DEBUG
		userlog("appl_info->id_type :%s:", appl_info->id_type);
		userlog("appl_info->id_number :%s:", appl_info->id_number);
		userlog("appl_info->lic_id_type :%s:", appl_info->lic_id_type);
		userlog("appl_info->lic_id_no :%s:", appl_info->lic_id_no);
		userlog("appl_info->ownercat :%c:", appl_info->ownercat);
		userlog("appl_info->kpt_number :%s:", appl_info->kpt_number);
		userlog("appl_info->prb_status :%c:", appl_info->prb_status);
		userlog("appl_info->newownercat %c", appl_info->newownercat);
	#endif


		return GMPC_GOOD;

}


/* Function to send payment reversal message to JPN legacy */
int send_payment_rev_jpn(char *applid, int txnserno, char *rev_msg_id, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


		char appl_id[APP_ID_SIZE] = {0};
		int txn_srno = 0;
		int max_fee_txn_srno = 0;
		short max_fee_txn_srno_ind  = -1;
		char paymode[PAY_MODE_SIZE] = {0};
		short paymode_ind= -1;
		unsigned char pay_mode = 0;
		unsigned char amt_type = 0;
		char revenue_code[AG_REV_CODE_SIZE]= {0};
		short revenue_code_ind = -1;
		char amt_value[REVENUE_AMT_SIZE]= {0};
		short amt_value_ind = -1;
		int pay_cnt = 0;
		int txn_type = 0;
		short txn_type_ind = -1;
		/* varchar appl_remarks[REMARK_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[61]; } appl_remarks
 = {0};

		short int appl_remarks_ind = 0;
		char kpt_no[KPT_SIZE];
		short kpt_no_ind = 0;
		char  legapplid[25] = {0};
		short legapplid_ind = -1;

		/* Added for IJPN */
		/* varchar reason_desc[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } reason_desc
 = {0};

		short reason_desc_ind = -1;
		/* varchar rejectcode[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } rejectcode
 = {0};

		short rejectcode_ind = -1;	
		char branch_code[7] = {0};
		/* End for IJPN */

		char  tstamp[DATE_TIME_SIZE]= {0};
		short tstamp_ind = -1;

		/* varchar wsid[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } wsid
 = {0};

		short wsid_ind = -1;

		/* varchar  txnwsid[WS_ID_SIZE]={0}; */ 
struct { unsigned short len; unsigned char arr[16]; } txnwsid
 = {0};

		short txnwsid_ind = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 

	
	int count= 0;
	FIN_DATA_T *fin_data = NULL;	
	LI_JPN_REV_UPDATE_PAYMENT_REQ_T rev_upd_pay_info_req;

	LI_PUT_FIN_DATA_T jpn_fin_data = {0};
	int ret_val = 0;
	int error_code = 0;
	unsigned char msg_id[MSG_ID_SIZE] = {0};
	LI_REFER_TIMESTAMP_T refer_timestamp;

	/* Added for IJPN */
	char pReplyMsg[LI_REPLY_MSG_SIZE] = {0};
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE] = {0};
    /* End for IJPN */
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	
	strcpy(appl_id, applid);
	txn_srno = txnserno;

#ifdef DEBUG
	userlog("send_payment_rev_jpn : Appl id - %s", appl_id);
	userlog("send_payment_rev_jpn : Transaction srno - %d", txn_srno);
#endif

	/* fill the actual data in LI_JPN_REV_UPDATE_PAYMENT_REQ_T type structure*/
	memset(&rev_upd_pay_info_req, 0, sizeof(LI_JPN_REV_UPDATE_PAYMENT_REQ_T));

	memset(&refer_timestamp, '\0', sizeof(LI_REFER_TIMESTAMP_T));

	/*get the kptnumber and revesal description for the application*/

	appl_remarks.arr[0] = '\0';
/*
	EXEC SQL 
		SELECT KPTNO, APPLREMARKS  
		INTO :kpt_no:kpt_no_ind, :appl_remarks:appl_remarks_ind  
		FROM APPLICATION 
		WHERE  APPLID = :appl_id;
*/

	/* EXEC SQL 
		SELECT KPTNO, LEGAPPLID  
		INTO :kpt_no:kpt_no_ind, :legapplid:legapplid_ind  
		FROM APPLICATION 
		WHERE  APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select KPTNO ,LEGAPPLID into :b0:b1,:b2:b3  from APPLICATION\
 where APPLID=:b4";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1895;
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
 sqlstm.sqhstv[1] = (         void  *)legapplid;
 sqlstm.sqhstl[1] = (unsigned int  )25;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&legapplid_ind;
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
		userlog("send_payment_rev_jpn : error while selecting from APPLICATION : %s", SQLMSG);
	#endif

		sprintf(excep_log.error_msg, "send_payment_rev_jpn : error while selecting from APPLICATION: %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';

		strcpy(prog_log.remarks, "send_payment_rev_jpn : error while selecting from APPLICATION");
		log_error(ctx);
		
		return SELECT_ERROR;
	}

	if(appl_remarks_ind == 0)
		setnull(appl_remarks);

	strcpy(rev_upd_pay_info_req.kpt_number, kpt_no);
//	strcpy(rev_upd_pay_info_req.rev_desc, (char *)appl_remarks.arr);
	strcpy(rev_upd_pay_info_req.appl_id, legapplid);

#ifdef DEBUG
		userlog("rev_upd_pay_info_req.kpt_number %s", rev_upd_pay_info_req.kpt_number);
//		userlog("rev_upd_pay_info_req.rev_desc %s", rev_upd_pay_info_req.rev_desc);
#endif

	ret_val = 0;
	ret_val = get_financial_data(applid, txnserno, &jpn_fin_data,ctx);

	if (GMPC_GOOD != ret_val)
	{
#ifdef DEBUG
		userlog("send_payment_rev_jpn : function get_financial_data failed");
#endif
		return ret_val;
	}

	ret_val = 0;
	if (GMPC_GOOD != (ret_val = get_trans_date_time(applid, txnserno, PAYMENT_UPD, refer_timestamp.refer_date, refer_timestamp.refer_time,ctx)))
		return ret_val;

	userlog("refer_timestamp.refer_date : %s",refer_timestamp.refer_date);
	userlog("refer_timestamp.refer_time : %s",refer_timestamp.refer_time);

	/* get the same ws id for reversal which is used for the payment on the same day only */

	/* EXEC SQL SELECT TRIM(TXNWSID) INTO :txnwsid:txnwsid_ind 
			FROM IJPN_LEGACY_REQUEST 
			WHERE APPLID = :appl_id
			AND TO_CHAR(LEGREQDATETIME,'DDMMYYYY') = TO_CHAR(SYSDATE,'DDMMYYYY')
			AND LEGREQSTAT = 0 
			AND LEGREQFLAG IN ('P','D') 
			AND ROWNUM = 1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select trim(TXNWSID) into :b0:b1  from IJPN_LEGACY_REQUEST w\
here ((((APPLID=:b2 and TO_CHAR(LEGREQDATETIME,'DDMMYYYY')=TO_CHAR(SYSDATE,'DD\
MMYYYY')) and LEGREQSTAT=0) and LEGREQFLAG in ('P','D')) and ROWNUM=1)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1922;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&txnwsid;
 sqlstm.sqhstl[0] = (unsigned int  )18;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&txnwsid_ind;
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
		userlog("send_payment_rev_jpn : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID : %s", SQLMSG);
	#endif

		sprintf(excep_log.error_msg, "send_payment_rev_jpn : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID: %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';

		strcpy(prog_log.remarks, "send_payment_rev_jpn : error while selecting from IJPN_LEGACY_REQUEST for TXNWSID");
		log_error(ctx);
		
		return SELECT_ERROR; // stop the process if there is no record for update
	}

	setlen(txnwsid);
	setnull(txnwsid);

	userlog("send_payment_rev_jpn : txnwsid : %s",txnwsid.arr);

	if(txnwsid_ind == 0)
	{
		li_p_header.workstation_id[0] = '\0';
		strcpy(li_p_header.workstation_id,txnwsid.arr);
	}
/*
		EXEC SQL SELECT JPJUPDSEQ.NEXTVAL 
				INTO :wsid:wsid_ind
				FROM DUAL;

	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog("get_user_ws_id_br_code : Selecting WS id from sequence LI_TXNWSID failed : %s", SQLMSG);
	#endif
		strcpy(prog_log.remarks,"get_user_ws_id_br_code : Selecting WS id from sequence LI_TXNWSID failed ");
		sprintf(excep_log.error_msg, "get_user_ws_id_br_code : Selecting WS id from sequence LI_TXNWSID failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;
	}

	if(wsid_ind == 0)
	{
		setnull(wsid);
		strcat(li_p_header.workstation_id,":");
		strcat(li_p_header.workstation_id,wsid.arr);
	}
*/
	userlog("send_payment_rev_jpn : li_p_header.workstation_id : %s",li_p_header.workstation_id);

	/* EXEC SQL SELECT TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') INTO :tstamp
		FROM DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') into :b0  from D\
UAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1945;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)tstamp;
 sqlstm.sqhstl[0] = (unsigned int  )16;
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




	strncpy(li_p_header.trans_date, tstamp, 8);
	li_p_header.trans_date[DATE_SIZE - 1] = '\0';


	strncpy(li_p_header.trans_time, tstamp + 9, 6);
	li_p_header.trans_time[TIME_SIZE - 1] = '\0';

	userlog("send_payment_rev_jpn : tstamp : %s",tstamp);
	userlog("send_payment_rev_jpn : li_p_header.trans_date : %s",li_p_header.trans_date);
	userlog("send_payment_rev_jpn : li_p_header.trans_time : %s",li_p_header.trans_time);


	/* Do li_init */
	/*if ( (ret_val = li_init(LI_JPN_REV_UPDATE_PAYMENT)) != GMPC_GOOD)
	{
		#ifdef DEBUG
			userlog("li_init LI_JPN_REV_UPDATE_PAYMENT function returned error: %d", ret_val);
		#endif

		excep_log.severity = FATAL;
		sprintf(excep_log.error_msg, "li_init LI_JPN_REV_UPDATE_PAYMENT function returned : %d", ret_val);
		excep_log.termination_flag = 'N';
		strcpy(prog_log.remarks, "li_init LI_JPN_REV_UPDATE_PAYMENT function returned");
		log_error(ctx);

		return ret_val;
	}Commented for IJPN*/

	/* Putting the li_jpn_rev_update_payment_p request*/
	//ret_val = li_jpn_rev_update_payment_p(li_p_header, refer_timestamp, jpn_fin_data, rev_upd_pay_info_req, msg_id, &error_code);

	sErrMessage[0] = '\0';
	ret_val = li_jpn_rev_update_payment_p(li_p_header, refer_timestamp, jpn_fin_data, rev_upd_pay_info_req, msg_id, &error_code, pReplyMsg, &iReplyMsgLen, sErrMessage);

	if(ret_val != GMPC_GOOD)
	{
		#ifdef DEBUG
			userlog(" li_jpn_rev_update_payment_p function returned error: %d", error_code);
			userlog(" li_jpn_rev_update_payment_p function returned sErrMessage: %s", sErrMessage);
		#endif

		strcpy(rev_msg_id, (char *)msg_id);

		if(sErrMessage[0] != '\0')
		{
		strncpy(rejectcode.arr,sErrMessage,8);
		setlen(rejectcode);

		strcpy(reason_desc.arr,sErrMessage);
		setlen(reason_desc);
		}

		userlog("rejectcode : %s",rejectcode.arr);
		userlog("reason_desc : %s",reason_desc.arr);
		
		strcpy(reject_code, (char *)rejectcode.arr);
		strcpy(reject_reason, (char *)reason_desc.arr);

		userlog("reject_code, reject_reason after copying: %s, %s",reject_code,reject_reason);


		excep_log.severity = FATAL;
		sprintf(excep_log.error_msg, "li_jpn_rev_update_payment_p returned error : %d", error_code);
		excep_log.termination_flag = 'N';
		strcpy(prog_log.remarks, "li_jpn_rev_update_payment_p returned error");
		log_error(ctx);

		//li_end();
		return error_code;
	}
	else
	{
		#ifdef DEBUG
			userlog(" li_jpn_rev_update_payment_p successfull");
		#endif
	}

	strcpy(rev_msg_id, (char *)msg_id);

	
	//li_end();
	return GMPC_GOOD;

}


int send_jpn_cancel_appl(char *applid, int txnserno, char *rev_msg_id, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


		char appl_id[APP_ID_SIZE] = {0};
		int txn_srno = 0;
		int txn_type = 0;
		short txn_type_ind = -1;
		/* varchar appl_remarks[REMARK_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[61]; } appl_remarks
 = {0};

		short int appl_remarks_ind = 0;
		char kpt_no[KPT_SIZE];
		short kpt_no_ind = 0;
		int gmpc_version_no = 0;
		short gmpc_version_no_ind = -1;
		int card_lost_count = 0;
		short card_lost_count_ind = -1;
		char last_changed_date[DATE_SIZE] = {0};
		short last_changed_date_ind = -1;
		char cancel_txn_date[DATE_SIZE] = {0};
		short cancel_txn_date_ind = -1;

		/* varchar address1[ADDRESS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } address1
 = {0};

		short address1_ind = -1;

		/* varchar address2[ADDRESS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } address2
 = {0};

		short address2_ind = -1;

		/* varchar address3[ADDRESS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } address3
 = {0};

		short address3_ind = -1;

		/* varchar postalcode[POST_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[6]; } postalcode
 = {0};

		short postalcode_ind = -1;

		int city_code;
		short city_code_ind = -1;

		char state_code[STATE_CODE_SIZE] = {0};
		short state_code_ind = -1;

		char  lapplid[25] = {0};
		short lapplid_ind = -1;

		/* Added for IJPN */
		/* varchar reason_desc[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } reason_desc
 = {0};

		short reason_desc_ind = -1;
		/* varchar rejectcode[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } rejectcode
 = {0};

		short rejectcode_ind = -1;	
		char branch_code[7] = {0};
		/* End for IJPN */

		// CR 284
		char ltxncode[3+1] = {0};
		char llclass[2+1] = {0};
		int  llneg = 0;
		int  llcrime = 0;
		int  lldis = 0;
		int  lclcnt = 0;
		int  lostcnt = 0;
		// CR 284

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	LI_PUT_FIN_DATA_T jpn_fin_data = {0};
	int ret_val = 0;
	int error_code = 0;
	unsigned char msg_id[MSG_ID_SIZE] = {0};
	LI_REFER_TIMESTAMP_T refer_timestamp;
	LI_CANCEL_GMPC_UPDATE_REQ_T cancel_req;

	/* Added for IJPN */
	char pReplyMsg[LI_REPLY_MSG_SIZE] = {0};
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE]={0};
    /* End for IJPN */

		
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	
	strcpy(appl_id, applid);

	/* Select Old data from JPN_INFO */
	/* EXEC SQL SELECT B.KPTNO, ADDRESS1, ADDRESS2, ADDRESS3, 
				POSTCODE, CITYCODE, STATECODE, B.CARDLOSTCNT, 
				LASTADDCHANGEDATE, CARDVERSIONNO,A.LEGAPPLID
		 INTO :kpt_no:kpt_no_ind,:address1:address1_ind,
			  :address2:address2_ind,:address3:address3_ind,
			  :postalcode:postalcode_ind,:city_code:city_code_ind,
			  :state_code:state_code_ind,:card_lost_count:card_lost_count_ind,
			  :last_changed_date:last_changed_date_ind, :gmpc_version_no:gmpc_version_no_ind,
			  :lapplid:lapplid_ind
		 FROM  APPLICATION A, JPN_INFO B
		 WHERE APPLID = :appl_id
		 AND B.KPTNO = A.KPTNO; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select B.KPTNO ,ADDRESS1 ,ADDRESS2 ,ADDRESS3 ,POSTCODE ,CITY\
CODE ,STATECODE ,B.CARDLOSTCNT ,LASTADDCHANGEDATE ,CARDVERSIONNO ,A.LEGAPPLID \
into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11,:b12:b13,:b14:b15,:b16:b17,:b\
18:b19,:b20:b21  from APPLICATION A ,JPN_INFO B where (APPLID=:b22 and B.KPTNO\
=A.KPTNO)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1964;
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
 sqlstm.sqindv[1] = (         void  *)&address1_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&address2;
 sqlstm.sqhstl[2] = (unsigned int  )43;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&address2_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&address3;
 sqlstm.sqhstl[3] = (unsigned int  )43;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&address3_ind;
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
 sqlstm.sqhstv[7] = (         void  *)&card_lost_count;
 sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&card_lost_count_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)last_changed_date;
 sqlstm.sqhstl[8] = (unsigned int  )9;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&last_changed_date_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&gmpc_version_no;
 sqlstm.sqhstl[9] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&gmpc_version_no_ind;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)lapplid;
 sqlstm.sqhstl[10] = (unsigned int  )25;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)&lapplid_ind;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)appl_id;
 sqlstm.sqhstl[11] = (unsigned int  )20;
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)0;
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



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("send_jpn_cancel_appl : Selecting old data from JPN_INFO failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"send_jpn_cancel_appl: Selecting old data from JPN_INFO failed ");
		sprintf(excep_log.error_msg, "send_jpn_cancel_appl: Selecting old data from JPN_INFO failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}

	ret_val = 0;
	ret_val = check_payment_rec(applid, txnserno, JPN_ID,ctx);
	if(ret_val != GMPC_GOOD && ret_val != NO_DATA)
	{
#ifdef DEBUG
		userlog("send_jpn_cancel_appl: After check_payment_rec Failed");
#endif

		return ret_val;
	}
	else if(ret_val == NO_DATA)
	{
		ret_val = 0;
		ret_val = get_financial_data(applid, txnserno, &jpn_fin_data,ctx);

		if (GMPC_GOOD != ret_val)
		{
	#ifdef DEBUG
			userlog("send_jpn_cancel_appl : function get_financial_data failed");
	#endif
			return ret_val;
		}

	}

	/* Get the date and time when transaction was performed */
	ret_val = 0;
	if (GMPC_GOOD != (ret_val = get_trans_date_time(applid, txnserno, DEMO_UPD, refer_timestamp.refer_date, refer_timestamp.refer_time,ctx)))
		return ret_val;


	/* Populate the data in the cancellation request structure */
	memset(&cancel_req, 0, sizeof(LI_CANCEL_GMPC_UPDATE_REQ_T));

	if(kpt_no_ind == 0)
		strcpy(cancel_req.appnt_kpt,kpt_no);

	if(gmpc_version_no_ind == 0)
		cancel_req.gmpc_version_no = gmpc_version_no;
	
	if(card_lost_count_ind == 0)
		itoa(card_lost_count, cancel_req.card_lost_count, 10);
	
	if(last_changed_date_ind == 0)
		strcpy(cancel_req.last_changed_date,last_changed_date);

	if(address1_ind == 0)
	{
		setnull(address1);
		strcpy(cancel_req.address.address1,(char *)address1.arr);
	}
	if(address2_ind == 0)
	{
		setnull(address2);
		strcpy(cancel_req.address.address2,(char *)address2.arr);
	}
	if(address3_ind == 0)
	{
		setnull(address3);
		strcpy(cancel_req.address.address3,(char *)address3.arr);
	}
	if(postalcode_ind == 0)
	{
		setnull(postalcode);
		strcpy(cancel_req.address.post_code,(char *)postalcode.arr);
	}
	if(city_code_ind == 0)
		cancel_req.address.city_code  = city_code;

	if(state_code_ind == 0)
		strcpy(cancel_req.address.state_code,state_code);

	if(lapplid_ind == 0)
		strcpy(cancel_req.appl_no,lapplid);


	// Added this code on 27/02/2014 for CR 284, to send lostcntneg,lostcntdis,lostcntcrime to host

	/* EXEC SQL SELECT TXNCODE,LICCLASS INTO :ltxncode, :llclass
		FROM APPL_TXN WHERE APPLID = :appl_id
		AND TXNCODE IN ('303','403'); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TXNCODE ,LICCLASS into :b0,:b1  from APPL_TXN where (\
APPLID=:b2 and TXNCODE in ('303','403'))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2027;
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
			userlog("send_jpn_cancel_appl : Select from APPL_TXN of TXNCODE,LICCLASS failed : %s", SQLMSG); 
		#endif
			strcpy(prog_log.remarks,"send_jpn_cancel_appl : Select from APPL_TXN of TXNCODE,LICCLASS failed");
			sprintf(excep_log.error_msg,"send_jpn_cancel_appl : Select from APPL_TXN of TXNCODE,LICCLASS failed  :%s", SQLMSG);
			//excep_log.termination_flag = YES;
			//excep_log.severity = FATAL;
			//log_error(ctx);				
			//return SELECT_ERROR;
		}
		
		#ifdef DEBUG
			userlog("send_jpn_cancel_appl : Release 3.27");
			userlog("send_jpn_cancel_appl : ltxncode : %s",ltxncode);
			userlog("send_jpn_cancel_appl : licclass : %s",llclass);
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
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select NVL(LOSTCNTNEG,0) ,NVL(LOSTCNTCRIME,0) ,NVL(LOSTCNTD\
IS,0) into :b0,:b1,:b2  from APPNT_JPN_INFO where APPLID=:b3";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2054;
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
			userlog("send_jpn_cancel_appl : Select from APPNT_JPN_INFO of LOSTCNTNEG failed : %s", SQLMSG); 
		#endif
			strcpy(prog_log.remarks,"send_jpn_cancel_appl : Select from APPNT_JPN_INFO of LOSTCNTNEG failed");
			sprintf(excep_log.error_msg,"send_jpn_cancel_appl : Select from APPNT_JPN_INFO of LOSTCNTNEG failed  :%s", SQLMSG);
			//excep_log.termination_flag = YES;
			//excep_log.severity = FATAL;
			//log_error(ctx);				
			//return SELECT_ERROR;
		}
		

		#ifdef DEBUG			
			userlog("send_jpn_cancel_appl : llneg : %d",llneg);	
			userlog("send_jpn_cancel_appl : llcrime : %d",llcrime);	
			userlog("send_jpn_cancel_appl : lldis : %d",lldis);	
		#endif



		if(strcmp(llclass,"01") == 0)
		{			
			cancel_req.lostcntneg = llneg;
			cancel_req.lostcntcrime = -1;
			cancel_req.lostcntdis = -1;
		}
		else if(strcmp(llclass,"02") == 0)
		{		
			cancel_req.lostcntcrime = llcrime;
			cancel_req.lostcntneg = -1;
			cancel_req.lostcntdis = -1;
		}
		else if(strcmp(llclass,"03") == 0)
		{			
			cancel_req.lostcntdis = lldis;
			cancel_req.lostcntcrime = -1;
			cancel_req.lostcntneg = -1;
		}
		

	}

	// end of CR 284

	//strcpy(cancel_req.cancel_trx_date, refer_timestamp.refer_date);

	/* Do li_init */
	/*if ( (ret_val = li_init(LI_JPN_CANCEL_GMPC_UPD)) != GMPC_GOOD)
	{
		#ifdef DEBUG
			userlog("li_init LI_JPN_CANCEL_GMPC_UPD function returned error: %d", ret_val);
		#endif

		excep_log.severity = FATAL;
		sprintf(excep_log.error_msg, "li_init LI_JPN_CANCEL_GMPC_UPD function returned : %d", ret_val);
		excep_log.termination_flag = 'N';
		strcpy(prog_log.remarks, "li_init LI_JPN_CANCEL_GMPC_UPD function returned");
		log_error(ctx);

		return ret_val;
	} 

	
	ret_val = 0; Commented for IJPN */
	//ret_val = li_cancel_gmpc_update_p(li_p_header, jpn_fin_data, refer_timestamp, cancel_req,msg_id, &error_code);  /* Commented for IJPN */
	/* Added for IJPN */
	sErrMessage[0] = '\0';
	ret_val = li_cancel_gmpc_update_p(li_p_header, jpn_fin_data, refer_timestamp, cancel_req,msg_id, &error_code,pReplyMsg, &iReplyMsgLen, sErrMessage);
	/* End IJPN*/
	if(ret_val != GMPC_GOOD)
	{
		#ifdef DEBUG
			userlog(" li_cancel_gmpc_update_p function returned error: %d", error_code);
			userlog(" li_cancel_gmpc_update_p function returned sErrMessage: %s", sErrMessage);
		#endif

		strcpy(rev_msg_id, (char *)msg_id);

		if(sErrMessage[0] != '\0')
		{
		strncpy(rejectcode.arr,sErrMessage,8);
		setlen(rejectcode);

		strcpy(reason_desc.arr,sErrMessage);
		setlen(reason_desc);
		}

		userlog("rejectcode : %s",rejectcode.arr);
		userlog("reason_desc : %s",reason_desc.arr);
		
		strcpy(reject_code, (char *)rejectcode.arr);
		strcpy(reject_reason, (char *)reason_desc.arr);

		userlog("reject_code, reject_reason after copying: %s, %s",reject_code,reject_reason);


		excep_log.severity = FATAL;
		sprintf(excep_log.error_msg, "li_cancel_gmpc_update_p returned error : %d", error_code);
		excep_log.termination_flag = 'N';
		strcpy(prog_log.remarks, "li_cancel_gmpc_update_p returned error");
		log_error(ctx);

			if (error_code == 0)
				return ret_val;
			else
				return error_code;

	}
	else
	{
		#ifdef DEBUG
			userlog(" li_cancel_gmpc_update_p successfull");
		#endif
	}

	strcpy(rev_msg_id, (char *)msg_id);
	//li_end();
	return GMPC_GOOD;
}

int get_trans_date_time(char *applid, int txnserno, char legreqflag, char *trans_date, char *trans_time,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


		/* varchar appl_id[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } appl_id
 = {0};

		int txn_srno = 0;
		char leg_req_flag = 0;
		char leg_date[DATE_TIME_SIZE]= {0};
		short leg_date_ind = -1;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN



	strcpy(appl_id.arr, applid);
	setlen(appl_id);
	setnull(appl_id);
	userlog("get_trans_date_time :appl_id : %s",appl_id.arr);
	txn_srno = txnserno;
	leg_req_flag = legreqflag;

	strcpy(trans_date,"\0");
	strcpy(trans_time,"\0");

	switch(legreqflag)
	{
	case PAYMENT_UPD:
	case ADD_SUMMONS:
	case UPD_PDRM_SUMM:

	userlog("get_trans_date_time : txn_srno :%d",txn_srno);
	
		leg_date[0] = '\0';
		/* EXEC SQL SELECT TO_CHAR(RECEIPTDATETIME, 'DDMMYYYY HH24MISS')
					 INTO :leg_date:leg_date_ind
				FROM PAYMENT_INFO A, APPL_TXN B
				WHERE A.APPLID = :appl_id
				AND B.APPLID = A.APPLID
				AND B.TXNSERNO = :txn_srno
				AND A.PAYMSERNO = B.PAYMSERNO
				AND ROWNUM = 1; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select TO_CHAR(RECEIPTDATETIME,'DDMMYYYY HH24MISS') into :b\
0:b1  from PAYMENT_INFO A ,APPL_TXN B where ((((A.APPLID=:b2 and B.APPLID=A.AP\
PLID) and B.TXNSERNO=:b3) and A.PAYMSERNO=B.PAYMSERNO) and ROWNUM=1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2085;
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
  sqlstm.sqhstv[1] = (         void  *)&appl_id;
  sqlstm.sqhstl[1] = (unsigned int  )22;
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


	/*

	EXEC SQL SELECT TO_CHAR(RECEIPTDATETIME, 'DDMMYYYY HH24MISS')
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
				AND ROWNUM = 1;
	*/
		userlog("get_trans_date_time : sqlca.sqlcode : %d",sqlca.sqlcode);

		if (SQLCODE != 0)
		{
#ifdef DEBUG
			userlog(" get_trans_date_time : Error in selecting Receipt date time: %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"get_trans_date_time : Error in selecting Receipt date time");
			sprintf(excep_log.error_msg, "get_trans_date_time : Error in selecting Receipt date time : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
							
		//	return SELECT_ERROR;
		}

		if(leg_date_ind == -1)
		{
		userlog("Selecting SYSDATE as leg trans date and time, since no receipt date");

		/* EXEC SQL SELECT TO_CHAR(SYSDATE, 'DDMMYYYY HH24MISS')
					 INTO :leg_date:leg_date_ind
				FROM DUAL; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS') into :b0:b1  fr\
om DUAL ";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2112;
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


		break;

	case ID_TO_KPT:
	case DEMO_UPD:
	case RENEW_LIC:
	case NEW_LIC:
	case ADDRESS_UPD:
	case APPL_IN_PROG:
	case REPLACE_LIC:
	case ADD_CLASS:
	case NAME_CHANGE:
	case ADD_SUSP:
	case ADD_REVOK:
	case IMM_UPD:

		/* EXEC SQL SELECT TO_CHAR(TIMESTAMP, 'DDMMYYYY HH24MISS') 
				INTO :leg_date:leg_date_ind
			FROM APPL_PROC
			WHERE APPLID = :appl_id
			AND PROCSERNO = (SELECT MIN(PROCSERNO) FROM APPL_PROC
								WHERE APPLID = :appl_id); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select TO_CHAR( timestamp ,'DDMMYYYY HH24MISS') into :b0:b1\
  from APPL_PROC where (APPLID=:b2 and PROCSERNO=(select min(PROCSERNO)  from \
APPL_PROC where APPLID=:b2))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2131;
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
  sqlstm.sqhstv[1] = (         void  *)&appl_id;
  sqlstm.sqhstl[1] = (unsigned int  )22;
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
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
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
			userlog(" get_trans_date_time : Error in selecting min timestamp from APPL_PROC: %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"get_trans_date_time : Error in selecting min timestamp from APPL_PROC");
			sprintf(excep_log.error_msg, "get_trans_date_time : Error in selecting min timestamp from APPL_PROC : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
							
			return SELECT_ERROR;
		}

		break;

	case GMPC_STAT_UPD:

		/* EXEC SQL SELECT TO_CHAR(TIMESTAMP, 'DDMMYYYY HH24MISS') 
				INTO :leg_date:leg_date_ind
			FROM APPL_PROC
			WHERE APPLID = :appl_id
			AND PROCSERNO = (SELECT MAX(PROCSERNO) FROM APPL_PROC
								WHERE APPLID = :appl_id); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select TO_CHAR( timestamp ,'DDMMYYYY HH24MISS') into :b0:b1\
  from APPL_PROC where (APPLID=:b2 and PROCSERNO=(select max(PROCSERNO)  from \
APPL_PROC where APPLID=:b2))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2158;
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
  sqlstm.sqhstv[1] = (         void  *)&appl_id;
  sqlstm.sqhstl[1] = (unsigned int  )22;
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
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
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
			userlog(" get_trans_date_time : Error in selecting max timestamp from APPL_PROC: %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"get_trans_date_time : Error in selecting max timestamp from APPL_PROC");
			sprintf(excep_log.error_msg, "get_trans_date_time : Error in selecting max timestamp from APPL_PROC : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
							
			return SELECT_ERROR;
		}
		break;

	default:
		break;

	}

	if (leg_date_ind == 0)
	{
		strncpy(trans_date, leg_date, DATE_SIZE - 1);
		trans_date[DATE_SIZE - 1] = '\0';
		strncpy(trans_time, leg_date + 9, TIME_SIZE - 1);
		trans_time[TIME_SIZE - 1] = '\0';
	}
#ifdef DEBUG
	userlog ("get_trans_date_time :leg date %s", leg_date);
	userlog ("get_trans_date_time :refer date %s", trans_date);
	userlog ("get_trans_date_time :refer time %s", trans_time);
#endif
	return GMPC_GOOD;

}

int get_fin_info(char *appid, int txn_ser_no, FIN_DATA_T **payment_info, int *count,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE];
	int hv_txn_ser_no = 0;

	char hv_pay_mode[PAY_MODE_SIZE];
	short int hv_pay_mode_ind;
	/* varchar hv_amt[REVENUE_AMT_SIZE]; */ 
struct { unsigned short len; unsigned char arr[8]; } hv_amt;

	short int hv_amt_ind;
	char hv_agency_rev_code[AG_REV_CODE_SIZE];
	short hv_agency_rev_code_ind;

	int hv_fin_count;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 

	
	FIN_DATA_T *ptr;
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	

	strcpy(hv_applid, appid);
	hv_txn_ser_no = txn_ser_no;

#ifdef DEBUG
	userlog("  in get_fin_info() function");
	userlog(" get_fin_info : input applid %s", hv_applid);
	userlog(" get_fin_info : input Txn Sr No %d", hv_txn_ser_no);
#endif

	*payment_info = NULL;


	/* EXEC SQL
		SELECT COUNT (*) INTO :hv_fin_count
		FROM APPL_TXN_FEE A, PAYMENT_INFO B, APPL_TXN C
		WHERE A.APPLID = C.APPLID
		AND A.TXNSERNO = C.TXNSERNO
		AND B.APPLID = C.APPLID
		AND B.PAYMSERNO = C.PAYMSERNO
		AND C.APPLID = :hv_applid
		AND A.TXNSERNO = :hv_txn_ser_no; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN_FEE A ,PAYMENT_INFO\
 B ,APPL_TXN C where (((((A.APPLID=C.APPLID and A.TXNSERNO=C.TXNSERNO) and B.A\
PPLID=C.APPLID) and B.PAYMSERNO=C.PAYMSERNO) and C.APPLID=:b1) and A.TXNSERNO=\
:b2)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2185;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_fin_count;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
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
 sqlstm.sqhstv[2] = (         void  *)&hv_txn_ser_no;
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


	
	if (SQLCODE)
	{
	#ifdef DEBUG
		userlog(" get_fin_info : oracle errror while getting record count %s", SQLMSG);
	#endif
		excep_log.severity = NON_FATAL;
		sprintf(excep_log.error_msg, "get_fin_info : oracle errror while getting record count %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		sprintf(prog_log.remarks, "get_fin_info : oracle errror while getting record count");
		log_error(ctx);
		return SELECT_ERROR;
	}


#ifdef DEBUG
	userlog(" get_fin_info : total fin records %d", hv_fin_count);
#endif

	*count = hv_fin_count;

	if (*count == 0)
	{
	#ifdef DEBUG
		userlog(" get_fin_info : No fin data, returning good");
	#endif
		return GMPC_GOOD;
	}

	/* allocate those many financial records */
	*payment_info = (FIN_DATA_T *) malloc(hv_fin_count * sizeof(FIN_DATA_T));
	if (*payment_info == NULL)
	{
	#ifdef DEBUG
		userlog(" get_fin_info : No fin data, returning good");
	#endif
		excep_log.severity = FATAL;
		sprintf(excep_log.error_msg, "get_fin_info : cannot allocate memory !!");
		excep_log.termination_flag = 'Y';
		sprintf(prog_log.remarks, "get_fin_info : cannot allocate memory !!");
		log_error(ctx);
		return MALLOC_ERROR;
	}

	memset(*payment_info, '\0', (hv_fin_count * sizeof(FIN_DATA_T)));

	ptr = *payment_info;


	/* EXEC SQL DECLARE cursor_payment CURSOR FOR
		SELECT TO_CHAR(A.FEEAMT*100),
		TO_CHAR(A.AGENCYREVNCODE), B.PAYMMODE
		FROM APPL_TXN_FEE A, PAYMENT_INFO B, APPL_TXN C
		WHERE A.APPLID = C.APPLID
		AND A.TXNSERNO = C.TXNSERNO
		AND B.APPLID = C.APPLID
		AND B.PAYMSERNO = C.PAYMSERNO
		AND C.APPLID = :hv_applid
		AND A.TXNSERNO = :hv_txn_ser_no; */ 


	/* find out how many records */

	/* EXEC SQL OPEN cursor_payment; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0068;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2212;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (         void  *)hv_applid;
 sqlstm.sqhstl[0] = (unsigned int  )20;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&hv_txn_ser_no;
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
		userlog("get_fin_info : oracle errror while opening cursor_payment %ld %s", SQLMSG);
		excep_log.severity = NON_FATAL;
		sprintf(excep_log.error_msg, "get_fin_info : oracle errror while opening cursor_payment %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		sprintf(prog_log.remarks, "get_fin_info : oracle errror while opening cursor_payment");
		log_error(ctx);
		return CURSOR_OPEN_ERROR;
	}

	while (1)
	{
		/* EXEC SQL FETCH cursor_payment 
			INTO :hv_amt:hv_amt_ind,
			:hv_agency_rev_code:hv_agency_rev_code_ind,
			:hv_pay_mode:hv_pay_mode_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2235;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&hv_amt;
  sqlstm.sqhstl[0] = (unsigned int  )10;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&hv_amt_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_agency_rev_code;
  sqlstm.sqhstl[1] = (unsigned int  )8;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&hv_agency_rev_code_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)hv_pay_mode;
  sqlstm.sqhstl[2] = (unsigned int  )3;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&hv_pay_mode_ind;
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



		if (NO_DATA_FOUND) break;
		
		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog(" get_fin_info : error while fetching cursor_payment : %s", SQLMSG);
		#endif

			sprintf(excep_log.error_msg, "get_fin_info : error while fetching cursor_payment: %s", SQLMSG);
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';

			strcpy(prog_log.remarks, "get_fin_info : error while fetching cursor");
			log_error(ctx);
			
			/* EXEC SQL CLOSE cursor_payment; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 18;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2262;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


			
			return CURSOR_FETCH_ERROR;
		}


		if (hv_amt_ind != -1)
		{
			setnull(hv_amt);
			strcpy(ptr->amt_value, (char *)hv_amt.arr);
		}

		if (hv_pay_mode_ind != -1)
			ptr->pay_mode = get_pay_mode(hv_pay_mode,ctx);

		if (hv_agency_rev_code_ind != -1)
			strcpy(ptr->revenue_code, hv_agency_rev_code);

		ptr->amt_type = CREDIT;

		ptr++;
	}

	/* EXEC SQL CLOSE cursor_payment; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2277;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



#ifdef DEBUG
	userlog("get_fin_info : returning good");
	userlog("get_fin_info : %d", *count);
#endif //DEBUG

	return GMPC_GOOD;
}

int get_fin_info_summons(char *appid, int txn_ser_no, FIN_DATA_T **payment_info, int *count,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE];
	int hv_txn_ser_no = 0;

	char hv_pay_mode[PAY_MODE_SIZE];
	short int hv_pay_mode_ind;
	/* varchar hv_amt[REVENUE_AMT_SIZE]; */ 
struct { unsigned short len; unsigned char arr[8]; } hv_amt;

	short int hv_amt_ind;
	char hv_agency_rev_code[AG_REV_CODE_SIZE];
	short hv_agency_rev_code_ind;

	int hv_fin_count;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 

	
	FIN_DATA_T *ptr;
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	

	strcpy(hv_applid, appid);
	hv_txn_ser_no = txn_ser_no;

#ifdef DEBUG
	userlog("  in get_fin_info_summons() function");
	userlog(" get_fin_info_summons : input applid %s", hv_applid);
	userlog(" get_fin_info_summons : input Txn Sr No %d", hv_txn_ser_no);
#endif

	*payment_info = NULL;


	/* EXEC SQL
		SELECT COUNT (*) INTO :hv_fin_count
		FROM APPL_TXN_SUMMONS A, PAYMENT_INFO B, APPL_TXN C
		WHERE A.APPLID = C.APPLID
		AND A.TXNSERNO = C.TXNSERNO
		AND B.APPLID = C.APPLID
		AND B.PAYMSERNO = C.PAYMSERNO
		AND C.APPLID = :hv_applid
		AND A.TXNSERNO = :hv_txn_ser_no; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN_SUMMONS A ,PAYMENT_\
INFO B ,APPL_TXN C where (((((A.APPLID=C.APPLID and A.TXNSERNO=C.TXNSERNO) and\
 B.APPLID=C.APPLID) and B.PAYMSERNO=C.PAYMSERNO) and C.APPLID=:b1) and A.TXNSE\
RNO=:b2)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2292;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_fin_count;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
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
 sqlstm.sqhstv[2] = (         void  *)&hv_txn_ser_no;
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


	
	if (SQLCODE)
	{
	#ifdef DEBUG
		userlog(" get_fin_info_summons : oracle errror while getting record count %s", SQLMSG);
	#endif
		excep_log.severity = NON_FATAL;
		sprintf(excep_log.error_msg, "get_fin_info_summons : oracle errror while getting record count %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		sprintf(prog_log.remarks, "get_fin_info_summons : oracle errror while getting record count");
		log_error(ctx);
		return SELECT_ERROR;
	}


#ifdef DEBUG
	userlog(" get_fin_info_summons : total fin records %d", hv_fin_count);
#endif

	*count = hv_fin_count;

	if (*count == 0)
	{
	#ifdef DEBUG
		userlog(" get_fin_info_summons : No fin data, returning good");
	#endif
		return GMPC_GOOD;
	}

	/* allocate those many financial records */
	*payment_info = (FIN_DATA_T *) malloc(hv_fin_count * sizeof(FIN_DATA_T));
	if (*payment_info == NULL)
	{
	#ifdef DEBUG
		userlog(" get_fin_info_summons : No fin data, returning good");
	#endif
		excep_log.severity = FATAL;
		sprintf(excep_log.error_msg, "get_fin_info_summons : cannot allocate memory !!");
		excep_log.termination_flag = 'Y';
		sprintf(prog_log.remarks, "get_fin_info_summons : cannot allocate memory !!");
		log_error(ctx);
		return MALLOC_ERROR;
	}

	memset(*payment_info, '\0', hv_fin_count * sizeof(FIN_DATA_T));

	ptr = *payment_info;


	/* EXEC SQL DECLARE cursor_payment_summons CURSOR FOR
		SELECT TO_CHAR(A.SUMMAMT*100),
		TO_CHAR(A.AGENCYREVNCODE), B.PAYMMODE
		FROM APPL_TXN_SUMMONS A, PAYMENT_INFO B, APPL_TXN C
		WHERE A.APPLID = C.APPLID
		AND A.TXNSERNO = C.TXNSERNO
		AND B.APPLID = C.APPLID
		AND B.PAYMSERNO = C.PAYMSERNO
		AND C.APPLID = :hv_applid
		AND A.TXNSERNO = :hv_txn_ser_no; */ 


	/* find out how many records */

	/* EXEC SQL OPEN cursor_payment_summons; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0070;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2319;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (         void  *)hv_applid;
 sqlstm.sqhstl[0] = (unsigned int  )20;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&hv_txn_ser_no;
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
		userlog("get_fin_info_summons : oracle errror while opening cursor_payment_summons %ld %s", SQLMSG);
		excep_log.severity = NON_FATAL;
		sprintf(excep_log.error_msg, "get_fin_info_summons : oracle errror while opening cursor_payment_summons %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		sprintf(prog_log.remarks, "get_fin_info_summons : oracle errror while opening cursor_payment_summons");
		log_error(ctx);
		return CURSOR_OPEN_ERROR;
	}

	while (1)
	{
		/* EXEC SQL FETCH cursor_payment_summons 
			INTO :hv_amt:hv_amt_ind,
			:hv_agency_rev_code:hv_agency_rev_code_ind,
			:hv_pay_mode:hv_pay_mode_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2342;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&hv_amt;
  sqlstm.sqhstl[0] = (unsigned int  )10;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&hv_amt_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_agency_rev_code;
  sqlstm.sqhstl[1] = (unsigned int  )8;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&hv_agency_rev_code_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)hv_pay_mode;
  sqlstm.sqhstl[2] = (unsigned int  )3;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&hv_pay_mode_ind;
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



		if (NO_DATA_FOUND) break;
		
		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog(" get_fin_info_summons : error while fetching cursor_payment_summons : %s", SQLMSG);
		#endif

			sprintf(excep_log.error_msg, "get_fin_info_summons : error while fetching cursor_payment_summons: %s", SQLMSG);
			excep_log.severity = FATAL;
			excep_log.termination_flag = 'Y';

			strcpy(prog_log.remarks, "get_fin_info_summons : error while fetching cursor");
			log_error(ctx);
			
			/* EXEC SQL CLOSE cursor_payment_summons; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 18;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2369;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


			
			return CURSOR_FETCH_ERROR;
		}


		if (hv_amt_ind != -1)
		{
			setnull(hv_amt);
			strcpy(ptr->amt_value, (char *)hv_amt.arr);
		}

		if (hv_pay_mode_ind != -1)
			ptr->pay_mode = get_pay_mode(hv_pay_mode,ctx);

		if (hv_agency_rev_code_ind != -1)
			strcpy(ptr->revenue_code, hv_agency_rev_code);

		ptr->amt_type = DEBIT;

		ptr++;
	}

	/* EXEC SQL CLOSE cursor_payment_summons; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2384;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



#ifdef DEBUG
	userlog("get_fin_info_summons : returning good");
	userlog("get_fin_info_summons : %d", *count);
#endif //DEBUG

	return GMPC_GOOD;
}

int get_appl_remarks(char* applid, char* appl_remarks,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE];
	short int hv_applid_ind = 0;
	/* varchar hv_applremarks[REMARK_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[61]; } hv_applremarks
 = {0};

	short int hv_applremarks_ind = 0;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	strcpy(hv_applid, applid);
	strcpy(appl_remarks,"");

	#ifdef DEBUG
		userlog("  in get_appl_remarks() function");
		userlog(" get_appl_remarks : input applid %s", hv_applid);
	#endif

	/* EXEC SQL 
		SELECT NVL(APPLREMARKS, 'Application Cancelled')  INTO :hv_applremarks:hv_applremarks_ind  
		FROM APPLICATION WHERE  APPLID = :hv_applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select NVL(APPLREMARKS,'Application Cancelled') into :b0:b1 \
 from APPLICATION where APPLID=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2399;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_applremarks;
 sqlstm.sqhstl[0] = (unsigned int  )63;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&hv_applremarks_ind;
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
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
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
		userlog(" get_appl_remarks : error while selecting from APPLICATION : %s", SQLMSG);
	#endif

		sprintf(excep_log.error_msg, "get_appl_remarks : error while selecting from APPLICATION: %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';

		strcpy(prog_log.remarks, "get_appl_remarks : error while selecting from APPLICATION");
		log_error(ctx);
		
		return SELECT_ERROR;
	}
	
	if(hv_applremarks_ind == 0)
	{
		setnull(hv_applremarks);
		strcpy(appl_remarks, (char *)hv_applremarks.arr);
	}
	
	#ifdef DEBUG
		userlog(" get_appl_remarks : appl_remarks : %s", appl_remarks);
	#endif

	return GMPC_GOOD;
}

unsigned char get_pay_mode(char *mode,void * ctx)
{

	if(strcmp(mode, "CA") == 0)
	{
		return 1;
	}
	else if(strcmp(mode, "CH") == 0)
	{
		return 2;
	}
	else if(strcmp(mode, "MO") == 0)
	{
		return 3;
	}
	else if(strcmp(mode, "PO") == 0)
	{
		return 4;
	}
	else if(strcmp(mode, "BD") == 0)
	{
		return 5;
	}
	else if(strcmp(mode, "FC") == 0)
	{
		return '0';
	}
	else
		return 0;
}

/*********************************************************************************************/
/* Function Name	:	rtrim																 */
/* Description		:   trims the spaces on the right for the given string.					 */
/* Input			:   string																 */
/* Return Values	:   right trimed string													 */
/* Limitations		:   None															     */
/*********************************************************************************************/
char * rtrim(char *amt,void * ctx)
{
	char trimed_amount[REVENUE_AMT_SIZE];


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

/* Function to get JPN financial data */
int get_financial_data(char *applid, int txnserno, LI_PUT_FIN_DATA_T *findata,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


		/* varchar dynstmt[1000]; */ 
struct { unsigned short len; unsigned char arr[1000]; } dynstmt;

		char appl_id[APP_ID_SIZE] = {0};
		int txn_srno = 0;
		int max_fee_txn_srno = 0;
		short max_fee_txn_srno_ind  = -1;
		char paymode[PAY_MODE_SIZE] = {0};
		short paymode_ind= -1;
		unsigned char pay_mode = 0;
		unsigned char amt_type = 0;
		char revenue_code[AG_REV_CODE_SIZE]= {0};
		short revenue_code_ind = -1;
		char amt_value[REVENUE_AMT_SIZE]= {0};
		short amt_value_ind = -1;
		int pay_cnt = 0;
		int txn_type = 0;
		short txn_type_ind = -1;
		/* varchar appl_remarks[REMARK_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[61]; } appl_remarks
 = {0};

		short int appl_remarks_ind = 0;
		int dynpara = 0; /* Parameter to the dynamic statement */

    sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 

	
	int count= 0;
	unsigned char unsignedpaymode;
	FIN_DATA_T *fin_data = NULL;	

	LI_PUT_FIN_DATA_T jpn_fin_data;
	int ret_val = 0;
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	

	strcpy(appl_id, applid);
	txn_srno = txnserno;

#ifdef DEBUG
	userlog("get_financial_data : Appl id - %s", appl_id);
	userlog("get_financial_data : Transaction srno - %d", txn_srno);
#endif

	/* Initialise fin data */
		findata->counter = 0;
		findata->len = 0;
		findata->fin_data = NULL;

	/* Get Txn type for the txnserno */
	/* EXEC SQL SELECT A.TXNTYPE INTO :txn_type:txn_type_ind FROM TXN_CODE A,
		APPL_TXN B 
		WHERE B.APPLID = :appl_id
		AND B.TXNSERNO = :txn_srno
		AND A.TXNCODE = B.TXNCODE; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select A.TXNTYPE into :b0:b1  from TXN_CODE A ,APPL_TXN B wh\
ere ((B.APPLID=:b2 and B.TXNSERNO=:b3) and A.TXNCODE=B.TXNCODE)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2422;
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



	if ((SQLCODE != 0) || (0 != txn_type_ind))
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


#ifdef DEBUG
	userlog(" get_financial_data : Transaction type - %d", txn_type);
#endif

	if (TXN_12YO == txn_type || TXN_FT == txn_type
		|| TXN_CONV == txn_type || TXN_REPL == txn_type)
	{
		/* Get the number of payment records for the given Appl id */
		/* For txn types 1,2,3 and 4, select all fee records of that txn type */
			/* EXEC SQL SELECT COUNT(*) INTO :pay_cnt
				FROM APPL_TXN_FEE A, PAYMENT_INFO B, APPL_TXN C, TXN_CODE D
				WHERE C.APPLID = :appl_id
				AND B.APPLID = C.APPLID
				AND B.PAYMSERNO = C.PAYMSERNO
				AND NVL(B.LEGUPDFLAG, 'Y') = 'Y'
				AND A.APPLID = C.APPLID
				AND A.TXNSERNO = C.TXNSERNO
				AND D.TXNCODE = C.TXNCODE
				AND D.TXNTYPE = :txn_type:txn_type_ind; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 18;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN_FEE A ,PAYMENT_IN\
FO B ,APPL_TXN C ,TXN_CODE D where (((((((C.APPLID=:b1 and B.APPLID=C.APPLID) \
and B.PAYMSERNO=C.PAYMSERNO) and NVL(B.LEGUPDFLAG,'Y')='Y') and A.APPLID=C.APP\
LID) and A.TXNSERNO=C.TXNSERNO) and D.TXNCODE=C.TXNCODE) and D.TXNTYPE=:b2:b3)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2449;
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
   sqlstm.sqindv[2] = (         void  *)&txn_type_ind;
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
			userlog(" get_financial_data : Select from APPL_TXN_FEE failed : %s", SQLMSG);
	#endif
			strcpy(prog_log.remarks,"get_financial_data: Select from APPL_TXN_FEE failed");
			sprintf(excep_log.error_msg, "get_financial_data : Select from APPL_TXN_FEE failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);

			return SELECT_ERROR;
		}

	}
	else
	{
		/* Get the number of payment records for the given Appl id */
		/* For misc and chip update txns, select fee records individually by txn serno */

		/* EXEC SQL SELECT COUNT(*) INTO :pay_cnt
				FROM APPL_TXN_FEE A, PAYMENT_INFO B, APPL_TXN C
				WHERE C.APPLID = :appl_id
				AND C.TXNSERNO = :txn_srno
				AND B.APPLID = C.APPLID
				AND B.PAYMSERNO = C.PAYMSERNO
				AND NVL(B.LEGUPDFLAG, 'Y') = 'Y'
				AND A.APPLID = C.APPLID
				AND A.TXNSERNO = C.TXNSERNO	; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN_FEE A ,PAYMENT_INF\
O B ,APPL_TXN C where ((((((C.APPLID=:b1 and C.TXNSERNO=:b2) and B.APPLID=C.AP\
PLID) and B.PAYMSERNO=C.PAYMSERNO) and NVL(B.LEGUPDFLAG,'Y')='Y') and A.APPLID\
=C.APPLID) and A.TXNSERNO=C.TXNSERNO)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2476;
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
			userlog(" get_financial_data : Select from APPL_TXN_FEE failed : %s", SQLMSG);
	#endif
			strcpy(prog_log.remarks,"get_financial_data: Select from APPL_TXN_FEE failed");
			sprintf(excep_log.error_msg, "get_financial_data : Select from APPL_TXN_FEE failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);

			return SELECT_ERROR;
		}
	}

#ifdef DEBUG
		userlog(" get_financial_data : Payment count - %d", pay_cnt);
#endif

	if (pay_cnt == 0)
	{
		jpn_fin_data.counter = 0;
		jpn_fin_data.len = 0;
		jpn_fin_data.fin_data = NULL;
		
	}
	else	/* Pay count > 0 */
	{
		jpn_fin_data.counter = pay_cnt;
		jpn_fin_data.len = (jpn_fin_data.counter)*(sizeof(FIN_DATA_T));
		
		/* Get Financial Data for the application id from payment_info table */
		/* For txn types 1,2,3 and 4, select all fee records of that txn type */
		if (TXN_12YO == txn_type || TXN_FT == txn_type
			|| TXN_CONV == txn_type || TXN_REPL == txn_type)
		{

			/*	SELECT TO_CHAR(A.FEEAMT*100),TO_CHAR(A.AGENCYREVNCODE), B.PAYMMODE 
				FROM APPL_TXN_FEE A, PAYMENT_INFO B, APPL_TXN C, TXN_CODE D
				WHERE C.APPLID = :appl_id
				AND B.APPLID = C.APPLID
				AND B.PAYMSERNO = C.PAYMSERNO
				AND NVL(B.LEGUPDFLAG, 'Y') = 'Y'
				AND A.APPLID = C.APPLID
				AND A.TXNSERNO = C.TXNSERNO
				AND D.TXNCODE = C.TXNCODE
				AND D.TXNTYPE = :txn_type:txn_type_ind;
			*/
			strcpy((char *)dynstmt.arr, "SELECT TO_CHAR(A.FEEAMT*100),TO_CHAR(A.AGENCYREVNCODE), B.PAYMMODE FROM APPL_TXN_FEE A, PAYMENT_INFO B, APPL_TXN C, TXN_CODE D WHERE C.APPLID = :appl_id AND B.APPLID = C.APPLID AND B.PAYMSERNO = C.PAYMSERNO AND NVL(B.LEGUPDFLAG, 'Y') = 'Y' AND A.APPLID = C.APPLID AND A.TXNSERNO = C.TXNSERNO AND D.TXNCODE = C.TXNCODE AND D.TXNTYPE = :txn_type");
			setlen(dynstmt);
			dynpara = txn_type;
		}
		else
		{
			/* For misc and chip update txns, select fee records individually by txn serno */

			/*		SELECT TO_CHAR(A.FEEAMT*100),TO_CHAR(A.AGENCYREVNCODE),
					   B.PAYMMODE
					FROM APPL_TXN_FEE A, PAYMENT_INFO B, APPL_TXN C
					WHERE C.APPLID = :appl_id
					AND C.TXNSERNO = :txn_srno
					AND B.APPLID = C.APPLID
					AND B.PAYMSERNO = C.PAYMSERNO
					AND NVL(B.LEGUPDFLAG, 'Y') = 'Y'
					AND A.APPLID = C.APPLID
					AND A.TXNSERNO = :txn_srno:txn_srno	;
			*/
			strcpy((char *)dynstmt.arr, "SELECT TO_CHAR(A.FEEAMT*100),TO_CHAR(A.AGENCYREVNCODE), B.PAYMMODE FROM APPL_TXN_FEE A, PAYMENT_INFO B, APPL_TXN C WHERE C.APPLID = :appl_id AND C.TXNSERNO = :txn_srno AND B.APPLID = C.APPLID AND B.PAYMSERNO = C.PAYMSERNO AND NVL(B.LEGUPDFLAG, 'Y') = 'Y' AND A.APPLID = C.APPLID AND A.TXNSERNO = C.TXNSERNO");
			setlen(dynstmt);
			dynpara = txn_srno;
		}

		/* EXEC SQL PREPARE S FROM :dynstmt; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2503;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&dynstmt;
  sqlstm.sqhstl[0] = (unsigned int  )1002;
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


		/* EXEC SQL DECLARE pay_info CURSOR FOR S; */ 

		/* EXEC SQL OPEN pay_info USING :appl_id, :dynpara; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2522;
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
  sqlstm.sqhstv[1] = (         void  *)&dynpara;
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
			/* EXEC SQL FETCH pay_info
				INTO :amt_value:amt_value_ind, :revenue_code:revenue_code_ind, 
					 :paymode:paymode_ind; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 18;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2545;
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



			if (NO_DATA_FOUND)
			{
				break;
			}
			else if (SQLCODE != 0)
			{
				/* EXEC SQL CLOSE pay_info; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 18;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2572;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
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
				if(strcmp(paymode, "FC") == 0)
				{
					/* Reset the values */

					jpn_fin_data.counter = 0;
					jpn_fin_data.len = 0;
					jpn_fin_data.fin_data = NULL;

					break;
				}
				else
					unsignedpaymode = get_pay_mode(paymode,ctx);
			}
			else
				unsignedpaymode = '\0';

			/* Payment mode is other than 'Free of Cost' , so allocate */
			/* the memory for payment details to be sent			   */

			if ( count == 0)
			{
				jpn_fin_data.fin_data = (FIN_DATA_T*)malloc(pay_cnt*sizeof(FIN_DATA_T));

				if (jpn_fin_data.fin_data == NULL)
				{
					/* EXEC SQL CLOSE pay_info; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 18;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )2587;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
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

				memset(jpn_fin_data.fin_data, '\0', pay_cnt*sizeof(FIN_DATA_T));
				fin_data = jpn_fin_data.fin_data;

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
			else if (amt_value_ind == 0)
			{
				strcpy(fin_data->amt_value, rtrim(amt_value,ctx));
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
			jpn_fin_data.counter = 0;
			jpn_fin_data.len = 0;
			jpn_fin_data.fin_data = NULL;

		}

		/* EXEC SQL CLOSE pay_info; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2602;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
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

	if (count > 0)
	{
		*findata = jpn_fin_data;
	}

	return GMPC_GOOD;
}


/* Function to send PDRM summons reversal */
int send_pdrm_reverse(HEADER_T header, char *kptno,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_applid[APP_ID_SIZE] = {'\0'};
	int hv_rev_count = 0;
	/* varchar hv_summno[SUMMONS_NUMBER_LEN]; */ 
struct { unsigned short len; unsigned char arr[11]; } hv_summno;

	char hv_summtype;
	/* varchar hv_summdistrict[SUMM_DIST_SIZE]; */ 
struct { unsigned short len; unsigned char arr[7]; } hv_summdistrict;

	/* varchar hv_device[DEVICE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[7]; } hv_device;

	char hv_pdrmreceiptno[RECEIPT_SIZE];
	char hv_receipt_ind = 'C';
/* commented on 25/07/2002 becoz not used - by shiva.p */
/*	varchar hv_receiptdistrict[SUMM_DIST_SIZE]; */

	short int hv_summno_ind = 0;
	short int hv_summdate_ind = 0;
	short int hv_summtype_ind = 0;
	short int hv_summdistrict_ind = 0;
	short int hv_device_ind = 0;
	short int hv_pdrmreceiptno_ind = 0;
/* commented on 25/07/2002 becoz not used - by shiva.p */
/*	short int hv_receiptdistrict_ind = 0; */
	short int hv_receipt_ind_ind = 0;
	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	GSC_REVERSE_PAY_REQ_T *gsc_rev_pay_req;
	GSC_REVERSE_PAY_RESP_T *gsc_rev_pay_resp;
	GSC_REVERSE_PAY_T *gsc_rev_pay;

	long gsc_rev_pay_req_len = 0;
	long gsc_rev_pay_resp_len = 0;
	int ret = 0;
	char branch_code[LEGACY_BRANCH_CODE_SIZE] = {0};

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPNEXEC SQL END DECLARE SECTION;


	strcpy(hv_applid, header.application_id);

	/* EXEC SQL
		SELECT COUNT(*) INTO :hv_rev_count
		FROM APPL_TXN_SUMMONS
		WHERE APPLID = :hv_applid
		AND SUMMBYAGENT = '4'
		AND PDRMRECEIPTNO IS NOT NULL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN_SUMMONS where ((APP\
LID=:b1 and SUMMBYAGENT='4') and PDRMRECEIPTNO is  not null )";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2617;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_rev_count;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
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
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
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
		userlog("send_pdrm_reverse : error while selecting count from APPL_TXN_SUMMONS %ld %s", SQLCODE, SQLMSG);
		sprintf(excep_log.error_msg, "send_pdrm_reverse : error while selecting count from APPL_TXN_SUMMONS %s", SQLMSG);
		return SELECT_ERROR;
	}

	if(hv_rev_count <= 0)
	{
		userlog("send_pdrm_reverse : no summons for reversal !");
		return GMPC_GOOD;
	}

	gsc_rev_pay_req_len = sizeof(GSC_REVERSE_PAY_REQ_T) + hv_rev_count*sizeof(GSC_REVERSE_PAY_T);
	gsc_rev_pay_resp_len = sizeof(GSC_REVERSE_PAY_RESP_T);

	gsc_rev_pay_req = (GSC_REVERSE_PAY_REQ_T *)malloc( gsc_rev_pay_req_len);
	if(gsc_rev_pay_req == NULL)
	{
		userlog("send_pdrm_reverse : error while allocating request buffer ");
		sprintf(excep_log.error_msg, "send_pdrm_reverse : error while allocating request buffer ");
		return REQ_BUF_ERR;
	}

	gsc_rev_pay_resp = (GSC_REVERSE_PAY_RESP_T *)malloc( gsc_rev_pay_resp_len);
	if(gsc_rev_pay_resp == NULL)
	{
		userlog("send_pdrm_reverse : error while allocating response buffer ");
		sprintf(excep_log.error_msg, "send_pdrm_reverse : error while allocating response buffer ");
		free((char *)gsc_rev_pay_req);
		return RESP_BUF_ERR;
	}

	memset(gsc_rev_pay_req, 0, gsc_rev_pay_req_len);
	memset(gsc_rev_pay_resp, 0, gsc_rev_pay_resp_len);

	gsc_rev_pay = (GSC_REVERSE_PAY_T *)(gsc_rev_pay_req + 1);

	ret = get_legacy_branchcode(header.branch_code, PDRM_ID, branch_code,ctx);

	if (ret != SUCCESS)
	{
		strcpy(prog_log.remarks,"send_pdrm_reverse: Unable to retrieve PDRM branch code");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);

		return ret;
	}

	/* Initialise defaults of user and ws id */
	strcpy(gsc_rev_pay_req->pdrm_header.workstation_id, header.workstation_id);
	strcpy(gsc_rev_pay_req->pdrm_header.user_id, header.user_id);

	ret = get_user_ws_id(header.application_id, UPD_PDRM_SUMM, gsc_rev_pay_req->pdrm_header.user_id, gsc_rev_pay_req->pdrm_header.workstation_id,ctx);

	if (ret != SUCCESS)
	{
#ifdef DEBUG
		userlog("send_pdrm_reverse: Unable to retrieve userid and ws id - using header user id and ws id");
#endif
	}

	#ifdef DEBUG
		userlog("send_pdrm_reverse : gsc_rev_pay_req->pdrm_header.workstation_id - %s", gsc_rev_pay_req->pdrm_header.workstation_id);
		userlog("send_pdrm_reverse : gsc_rev_pay_req->pdrm_header.user_id - %s", gsc_rev_pay_req->pdrm_header.user_id);		
	#endif

	strncpy(gsc_rev_pay_req->pdrm_header.branch_code, branch_code, BRANCH_CODE_SIZE - 1);	/* As the PDRM branch code has size 6 */
	gsc_rev_pay_req->pdrm_header.branch_code[BRANCH_CODE_SIZE] = '\0';

	itoa(hv_rev_count, gsc_rev_pay_req->no_summons, 10);

	/* EXEC SQL
		DECLARE PDRM_REV_CUR CURSOR FOR
		SELECT SUMMNO, SUMMTYPE, SUMMDISTRICT, 
			DEVICE, PDRMRECEIPTNO
		FROM APPL_TXN_SUMMONS
		WHERE APPLID = :hv_applid
		AND SUMMBYAGENT = '4'
		AND PDRMRECEIPTNO IS NOT NULL; */ 


	/* EXEC SQL OPEN PDRM_REV_CUR; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0077;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2640;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (         void  *)hv_applid;
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
		userlog("send_pdrm_reverse : error while opening cursor %ld %s", SQLCODE, SQLMSG);
		sprintf(excep_log.error_msg, "send_pdrm_reverse : error while opening cursor %s", SQLMSG);
		return CURSOR_OPEN_ERROR;
	}

	while(1)
	{
		/* EXEC SQL FETCH PDRM_REV_CUR INTO :hv_summno:hv_summno_ind,
			:hv_summtype:hv_summtype_ind, :hv_summdistrict:hv_summdistrict_ind,
			:hv_device:hv_device_ind, :hv_pdrmreceiptno:hv_pdrmreceiptno_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2659;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&hv_summno;
  sqlstm.sqhstl[0] = (unsigned int  )13;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&hv_summno_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&hv_summtype;
  sqlstm.sqhstl[1] = (unsigned int  )1;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&hv_summtype_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&hv_summdistrict;
  sqlstm.sqhstl[2] = (unsigned int  )9;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&hv_summdistrict_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&hv_device;
  sqlstm.sqhstl[3] = (unsigned int  )9;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&hv_device_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)hv_pdrmreceiptno;
  sqlstm.sqhstl[4] = (unsigned int  )11;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&hv_pdrmreceiptno_ind;
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



		if(NO_DATA_FOUND)
			break;

		if(SQLCODE != 0)
		{
			userlog("send_pdrm_reverse : error while fetching cursor %ld %s", SQLCODE, SQLMSG);
			sprintf(excep_log.error_msg, "send_pdrm_reverse : error while fetching cursor %s", SQLMSG);
			/* EXEC SQL CLOSE PDRM_REV_CUR; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 18;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2694;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


			return CURSOR_FETCH_ERROR;
		}

		if(hv_summno_ind == -1)
			strcpy((char *)hv_summno.arr, 0);
		else
		{
			setnull(hv_summno);
		}

		if(hv_summtype_ind == -1)
			hv_summtype = '\0';

		if(hv_summdistrict_ind == -1)
			strcpy((char *)hv_summdistrict.arr, 0);
		else
		{
			setnull(hv_summdistrict);
		}

		if(hv_device_ind == -1)
			strcpy((char *)hv_device.arr, 0);
		else
		{
			setnull(hv_device);
		}

		if(hv_pdrmreceiptno_ind == -1)
			strcpy(hv_pdrmreceiptno, 0);

		strcpy(gsc_rev_pay->summons_district, (char *)hv_summdistrict.arr);
		strcpy(gsc_rev_pay->summons_device, (char *)hv_device.arr);
		gsc_rev_pay->summon_type = hv_summtype;
		strcpy(gsc_rev_pay->summon_serial, (char *)hv_summno.arr);
		strcpy(gsc_rev_pay->kpt_no, kptno);
		strcpy(gsc_rev_pay->receipt_serial, hv_pdrmreceiptno);
		strcpy(gsc_rev_pay->receipt_district, gsc_rev_pay_req->pdrm_header.branch_code);
		gsc_rev_pay->receipt_ind = hv_receipt_ind;
		gsc_rev_pay++;
	}

	/* EXEC SQL CLOSE PDRM_REV_CUR; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2709;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


    
	/* SAMSURI REMARKED BELOW CODE ON 25 AUG 2022
	if(-1 == tpcall("GSC_REVERSE_PAY", (char *)gsc_rev_pay_req, gsc_rev_pay_req_len,
		(char **)&gsc_rev_pay_resp, &gsc_rev_pay_resp_len, 0))
	{
		userlog("send_pdrm_reverse : tpcall to srevice GSC_REVERSE_PAYMENT failed ");
		sprintf(excep_log.error_msg, "send_pdrm_reverse : tpcall to srevice GSC_REVERSE_PAYMENT failed ");

		free((char *)gsc_rev_pay_req);
		free((char *)gsc_rev_pay_resp);
		return TPCALL_ERROR;
	}
	----------------------*/

	/* SAMSURI REMARKED BELOW CODE ON 25 AUG 2022
	if(tpurcode != GMPC_GOOD)
	{
		userlog("send_pdrm_reverse : service GSC_REVERSE_PAYMENT returned tpurcode %d", tpurcode);
		userlog("send_pdrm_reverse : service GSC_REVERSE_PAYMENT returned service specific error code %s", gsc_rev_pay_resp->error_code);
		sprintf(excep_log.error_msg, "send_pdrm_reverse : service GSC_REVERSE_PAYMENT returned service specific error code %d %s", tpurcode, gsc_rev_pay_resp->error_code);

	    free((char *)gsc_rev_pay_req);
		free((char *)gsc_rev_pay_resp);

		return atol(gsc_rev_pay_resp->error_code);
	}
	---------------------*/

	free((char *)gsc_rev_pay_req);
	free((char *)gsc_rev_pay_resp);
	return GMPC_GOOD;
}

/*****************************************************************************************/
/* Function Name	: get_user_ws_id														 */
/* Description		: This function retrieves USER and WS IDs from APPL_PROC table   */
/* Input			: Appl id															 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/

int get_user_ws_id(char *application_id, char leg_msg_type, char *user_id, char *ws_id,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		char appl_date[DATE_TIME_SIZE] = {0};
		short appl_date_ind = -1;
		/* varchar userid[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } userid
 = {0};

		short userid_ind = -1;
		/* varchar wsid[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } wsid
 = {0};

		short wsid_ind = -1;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	strcpy(appl_id, application_id);

	switch(leg_msg_type)
	{
	case GMPC_STAT_UPD:
	case APPL_TERMINATE:
			/* EXEC SQL SELECT USERID, WSID 
				INTO :userid:userid_ind,:wsid:wsid_ind
				FROM APPL_PROC
				WHERE APPLID = :appl_id
				AND PROCSERNO = (SELECT MAX(PROCSERNO) FROM APPL_PROC
									WHERE APPLID = :appl_id); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 18;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select USERID ,WSID into :b0:b1,:b2:b3  from APPL_PROC whe\
re (APPLID=:b4 and PROCSERNO=(select max(PROCSERNO)  from APPL_PROC where APPL\
ID=:b4))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2724;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&userid;
   sqlstm.sqhstl[0] = (unsigned int  )11;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&userid_ind;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&wsid;
   sqlstm.sqhstl[1] = (unsigned int  )18;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)&wsid_ind;
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


				
			if (SQLCODE != 0)
			{
		#ifdef DEBUG
				userlog("get_user_ws_id : Selecting Issuance userid and wsid from APPL_PROC failed : %s", SQLMSG);
		#endif
				strcpy(prog_log.remarks,"get_user_ws_id : Selecting Issuance userid and wsid from APPL_PROC failed ");
				sprintf(excep_log.error_msg, "get_user_ws_id : Selecting Issuance userid and wsid from APPL_PROC failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
						
				return SELECT_ERROR;
			}
			break;


	default:
		
			/* EXEC SQL SELECT USERID, WSID  
						INTO :userid:userid_ind,:wsid:wsid_ind
					FROM APPL_PROC
					WHERE APPLID = :appl_id
					AND PROCSERNO = (SELECT MIN(PROCSERNO) FROM APPL_PROC
										WHERE APPLID = :appl_id); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 18;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select USERID ,WSID into :b0:b1,:b2:b3  from APPL_PROC whe\
re (APPLID=:b4 and PROCSERNO=(select min(PROCSERNO)  from APPL_PROC where APPL\
ID=:b4))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2755;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&userid;
   sqlstm.sqhstl[0] = (unsigned int  )11;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&userid_ind;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&wsid;
   sqlstm.sqhstl[1] = (unsigned int  )18;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)&wsid_ind;
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


			if (SQLCODE != 0)
			{
		#ifdef DEBUG
				userlog("get_user_ws_id : Selecting Appl userid and wsid from APPL_PROC failed : %s", SQLMSG);
		#endif
				strcpy(prog_log.remarks,"get_user_ws_id : Selecting Appl userid and wsid from APPL_PROC failed ");
				sprintf(excep_log.error_msg, "get_user_ws_id : Selecting Appl userid and wsid from APPL_PROC failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
						
				return SELECT_ERROR;
			}

			break;

	}


	if(userid_ind == 0)
	{
		setnull(userid);
		strcpy(user_id, (char *)userid.arr);
	}

	if(wsid_ind == 0)
	{
		setnull(wsid);
		strcpy(ws_id, (char *)wsid.arr);
	}

	#ifdef DEBUG
		userlog("get_user_ws_id : userid - %s", userid.arr);
		userlog("get_user_ws_id : wsid - %s", wsid.arr);		
	#endif


	return GMPC_GOOD;
}


int send_rev_appl_in_prog(char *applid, int txnserno, char *rev_msg_id, LI_P_HEADER_T li_p_header,char *reject_code, char *reject_reason,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


		char appl_id[APP_ID_SIZE] = {0};
		int txn_srno = 0;
		char kpt_no[KPT_SIZE];
		short kpt_no_ind = 0;
		char txn_code[TRANSACTION_CODE_SIZE] = {0};
		short txn_code_ind = -1;
		int txn_type = 0;
		short txn_type_ind = -1;
		char  legapplid[25] = {0};
		short legapplid_ind = -1;

		char  cdate[DATE_SIZE] = {0};


		/* Added for IJPN */
		/* varchar reason_desc[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } reason_desc
 = {0};

		short reason_desc_ind = -1;
		/* varchar rejectcode[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } rejectcode
 = {0};

		short rejectcode_ind = -1;	
		char branch_code[7] = {0};
		/* End for IJPN */


	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	/* Added for IJPN */
	char pReplyMsg[LI_REPLY_MSG_SIZE] = {0};
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE] = {0};
    /* End for IJPN */


	int ret_val = 0;
	int error_code = 0;
	unsigned char msg_id[MSG_ID_SIZE] = {0};
	char appln_type[APPLN_TYPE_SIZE];
	LI_REFER_TIMESTAMP_T refer_timestamp;
	LI_UPDATE_GMPC_STAT_REQ_T terminate_req = {0};
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	
	strcpy(appl_id, applid);

	// included legapplid selection on 22/08/2005
	/* EXEC SQL SELECT KPTNO,LEGAPPLID 
			 INTO :kpt_no:kpt_no_ind,:legapplid:legapplid_ind
			 FROM APPLICATION
			 WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select KPTNO ,LEGAPPLID into :b0:b1,:b2:b3  from APPLICATION\
 where APPLID=:b4";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2786;
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
 sqlstm.sqhstv[1] = (         void  *)legapplid;
 sqlstm.sqhstl[1] = (unsigned int  )25;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&legapplid_ind;
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
		userlog("send_rev_appl_in_prog : Selecting old data from JPN_INFO failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"send_rev_appl_in_prog: Selecting old data from JPN_INFO failed ");
		sprintf(excep_log.error_msg, "send_rev_appl_in_prog: Selecting old data from JPN_INFO failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);

		return SELECT_ERROR;
	}

	/* Get the date and time when transaction was performed */
	ret_val = 0;
	if (GMPC_GOOD != (ret_val = get_trans_date_time(applid, txnserno, DEMO_UPD, refer_timestamp.refer_date, refer_timestamp.refer_time,ctx)))
		return ret_val;

	/* Application type has to be converted in the format in which the legacy accepts */

	/* EXEC SQL SELECT A.TXNCODE, B.TXNTYPE 
			INTO :txn_code:txn_code_ind,
				  :txn_type:txn_type_ind 
			FROM APPL_TXN A, TXN_CODE B
			WHERE A.APPLID = :appl_id
			AND A.TXNSERNO = 1
			AND B.TXNCODE = A.TXNCODE; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select A.TXNCODE ,B.TXNTYPE into :b0:b1,:b2:b3  from APPL_TX\
N A ,TXN_CODE B where ((A.APPLID=:b4 and A.TXNSERNO=1) and B.TXNCODE=A.TXNCODE\
)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2813;
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
		userlog("send_rev_appl_in_prog : Selecting Transaction code and Transaction type failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"send_rev_appl_in_prog : Selecting Transaction code and Transaction type failed ");
		sprintf(excep_log.error_msg, "send_rev_appl_in_prog : Selecting Transaction code and Transaction type failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}


#ifdef DEBUG
	userlog("send_rev_appl_in_prog : Txn code - %s", txn_code);
	userlog("send_rev_appl_in_prog : Txn type - %d", txn_type);
#endif

	switch(txn_type)
	{
		case TXN_12YO	:
		{
			strcpy(appln_type, TWELVE_YO);
			break;			
		}
		case TXN_FT		:
		{
			strcpy(appln_type, FIRST_TIME);
			break;
		}
		case TXN_CONV	:
		{
			strcpy(appln_type, CONVERSION);
			break;
		}
		case TXN_REPL	:
		{
			if (atoi(txn_code) == TXN_REPL_RULE18)
			{
				strcpy(appln_type, RENEW);
				break;
			}
			else if (atoi(txn_code) == TXN_REPL_LOSS)
			{
				strcpy(appln_type, REPL_LOST);
				break;
			}
			else if (atoi(txn_code) == TXN_REPL_CARD_ERR)
			{
				strcpy(appln_type, REPL_ERROR);
				break;
			}
			else
			{
				strcpy(appln_type, REPL_DAMAGE);
				break;
			}
		}
		default :
		{
			strcpy(appln_type, "\0");
			break;
		}
	}

	// copy this date as cancel date into terminate_req.appln_date
	/* EXEC SQL SELECT TO_CHAR(SYSDATE,'DDMMYYYY') INTO :cdate FROM DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(SYSDATE,'DDMMYYYY') into :b0  from DUAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2840;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)cdate;
 sqlstm.sqhstl[0] = (unsigned int  )9;
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



	/* Populate the Application termination request */
	memset(&terminate_req, 0, sizeof(LI_UPDATE_GMPC_STAT_REQ_T));

	strcpy(terminate_req.appnt_kpt, kpt_no);
	strcpy(terminate_req.appl_no,legapplid);
	terminate_req.appln_stat = 'C'; /* 'C' for terminate application */
	//strcpy(terminate_req.appln_type, appln_type);
	//strcpy(terminate_req.appln_date, refer_timestamp.refer_date); commneted on 30/08/05 to copy the sysdate as cancel date
	strcpy(terminate_req.appln_date, cdate);
	strcpy(terminate_req.appln_gsc_no, li_p_header.gsc_no);
	strcpy(terminate_req.appln_staff_id, li_p_header.user_id);

#ifdef DEBUG
	userlog("send_rev_appl_in_prog : KPT - %s", terminate_req.appnt_kpt);
	//userlog("send_rev_appl_in_prog : Appl type - %s", terminate_req.appln_type);
	userlog("send_rev_appl_in_prog : Appl date - %s", terminate_req.appln_date);
	userlog("send_rev_appl_in_prog : Branch code - %s", terminate_req.appln_gsc_no);
	userlog("send_rev_appl_in_prog : User id - %s", terminate_req.appln_staff_id);
	userlog("send_rev_appl_in_prog : Appl status - %c", terminate_req.appln_stat);
#endif

	/* Call interface function to open connection with MQSeries  */

	ret_val = 0;
	/*ret_val = li_init(LI_GMPC_STATUS_UPDATE);

	if (ret_val != GMPC_GOOD)
	{
#ifdef DEBUG
		userlog("send_rev_appl_in_prog : li_init failed ret_code %d", ret_val);
#endif
		strcpy(prog_log.remarks,"send_rev_appl_in_prog : Unable to connect to MQSeries interface");
		strcpy(excep_log.error_msg, "send_rev_appl_in_prog : Unable to connect to MQSeries interface");
		excep_log.termination_flag = 'N';
		excep_log.severity = FATAL;

		log_error(ctx);
						
		return ret_val;
	}

#ifdef DEBUG
	userlog("send_rev_appl_in_prog : li init successfull");  
#endif Commented for IJPN*/

	/* Put the request */

	ret_val = 0;
	//if ((ret_val = li_update_gmpc_stat_p(li_p_header, terminate_req, msg_id, &error_code)) != GMPC_GOOD)
	sErrMessage[0] = '\0';
	if ((ret_val = li_update_gmpc_stat_p(li_p_header, terminate_req, msg_id, &error_code, pReplyMsg, &iReplyMsgLen, sErrMessage)) != GMPC_GOOD)
	{
		//li_end();

	#ifdef DEBUG
		userlog("send_rev_appl_in_prog : Unable to put the GMPC status update request error_code: %d", error_code);
		userlog("send_rev_appl_in_prog : Unable to put the GMPC status update request sErrMessage: %s", sErrMessage);
	#endif


		strcpy(rev_msg_id, (char *)msg_id);

		if(sErrMessage[0] != '\0')
		{
		strncpy(rejectcode.arr,sErrMessage,8);
		setlen(rejectcode);

		strcpy(reason_desc.arr,sErrMessage);
		setlen(reason_desc);
		}

		userlog("rejectcode : %s",rejectcode.arr);
		userlog("reason_desc : %s",reason_desc.arr);
		
		strcpy(reject_code, (char *)rejectcode.arr);
		strcpy(reject_reason, (char *)reason_desc.arr);

		userlog("reject_code, reject_reason after copying: %s, %s",reject_code,reject_reason);


		strcpy(prog_log.remarks,"send_rev_appl_in_prog : Unable to put the GMPC status update request");
		sprintf(excep_log.error_msg, "send_rev_appl_in_prog : Unable to put the GMPC status update request : Error code - %d", error_code);
		excep_log.termination_flag = 'N';
		excep_log.severity = FATAL;

		log_error(ctx);
			
		return error_code;

	}
	else
	{
		#ifdef DEBUG
			userlog(" li_update_gmpc_stat_p successfull");
		#endif
	}

	strcpy(rev_msg_id, (char *)msg_id);
	//li_end();
	return GMPC_GOOD;
}

int send_address_upd_jpj(char *applid, char *rev_msg_id, APPL_INFO_T* appl_info, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* Variable declaration */
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	/* varchar hv_address1[ADDRESS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } hv_address1
 = {0};

	short int hv_address1_ind = 0;
	/* varchar hv_address2[ADDRESS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } hv_address2
 = {0};

	short int hv_address2_ind = 0;
	/* varchar hv_address3[ADDRESS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } hv_address3
 = {0};

	short int hv_address3_ind = 0;
	char hv_applid[APP_ID_SIZE];
	short int hv_applid_ind = 0;
	char hv_kptno[KPT_SIZE];
	int hv_citycode;
	short int hv_citycode_ind = 0;
	/* varchar hv_postcode[POST_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[6]; } hv_postcode
 = {0};

	short int hv_postcode_ind = 0;
	char hv_statecode[STATE_CODE_SIZE];
	short int hv_statecode_ind = 0;
	/* varchar hv_licidno[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_licidno
 = {0};

	short int hv_licidno_ind = 0;
	char hv_ownercat = 0;
	short int hv_ownercat_ind = 0;

	/* Added for IJPN */
	/* varchar reason_desc[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } reason_desc
 = {0};

	short reason_desc_ind = -1;
	/* varchar rejectcode[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } rejectcode
 = {0};

	short rejectcode_ind = -1;	
	char branch_code[7] = {0};
	/* End for IJPN */

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int ret_val = 0;
	LI_UPDATE_JPJ_ADDR_REQ_T li_upd_jpj_addr_req = {0};

	/* Variables required for legacy functions */
	unsigned char msgid[MSG_ID_SIZE] = {0};
	int error_code = {0};

	LI_REFER_TIMESTAMP_T refer_timestamp;

	/* Added for IJPN */
	char pReplyMsg[LI_REPLY_MSG_SIZE] = {0};
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE] = {0};
    /* End for IJPN */

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	#ifdef DEBUG
		userlog("  In send_address_upd_jpj() function ");
		userlog(" send_address_upd_jpj : Input Application Id is %s", applid);
		userlog(" send_address_upd_jpj : Input KPT Number is %s", appl_info->kpt_number);
	#endif

	strcpy(hv_applid, applid);
	strcpy(hv_kptno, appl_info->kpt_number);
	strcpy((char *)hv_licidno.arr, appl_info->lic_id_no);
	setlen(hv_licidno);
	hv_ownercat = appl_info->ownercat;


	/* EXEC SQL 
		SELECT ADDRESS1, ADDRESS2, ADDRESS3, CITYCODE, 
		POSTCODE, STATECODE  
		INTO :hv_address1:hv_address1_ind, :hv_address2:hv_address2_ind, 
			 :hv_address3:hv_address3_ind, :hv_citycode:hv_citycode_ind, 
			 :hv_postcode:hv_postcode_ind, :hv_statecode:hv_statecode_ind  
		FROM APPNT_JPN_INFO WHERE  APPLID = :hv_applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select ADDRESS1 ,ADDRESS2 ,ADDRESS3 ,CITYCODE ,POSTCODE ,STA\
TECODE into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11  from APPNT_JPN_INFO w\
here APPLID=:b12";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2859;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_address1;
 sqlstm.sqhstl[0] = (unsigned int  )43;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&hv_address1_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&hv_address2;
 sqlstm.sqhstl[1] = (unsigned int  )43;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&hv_address2_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&hv_address3;
 sqlstm.sqhstl[2] = (unsigned int  )43;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&hv_address3_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&hv_citycode;
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&hv_citycode_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&hv_postcode;
 sqlstm.sqhstl[4] = (unsigned int  )8;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&hv_postcode_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)hv_statecode;
 sqlstm.sqhstl[5] = (unsigned int  )3;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&hv_statecode_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)hv_applid;
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



	setnull(hv_address1);
	setnull(hv_address2);
	setnull(hv_address3);
	setnull(hv_postcode);


	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog(" send_address_upd_jpj : error while selecting from table APPNT_JPN_INFO : %s", SQLMSG);
	#endif

		sprintf(excep_log.error_msg, "send_address_upd_jpj : error while selecting from table APPNT_JPN_INFO : %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'N';

		strcpy(prog_log.remarks, "send_address_upd_jpj : error while selecting from table APPNT_JPN_INFO");
		log_error(ctx);

		return SELECT_ERROR;
	}

	/* fill the actual data in LI_REV_UPD_ID_TO_KPT_REQ_T type structure*/
	memset(&li_upd_jpj_addr_req, 0, sizeof(LI_UPDATE_JPJ_ADDR_REQ_T));

	strcpy(li_upd_jpj_addr_req.appnt_kpt, appl_info->kpt_number);
	strcpy(li_upd_jpj_addr_req.license_id, appl_info->lic_id_no);

	/* Added on 10/10/2001 - Now KPP will be sent in license Id field */
	if((ret_val = get_applicant_kpp(appl_info->kpt_number, li_upd_jpj_addr_req.license_id,ctx)) != GMPC_GOOD)
	{
		/* Skip sending this message, go for next	*/
		return ret_val;
	}
	
	li_upd_jpj_addr_req.category_of_owner = appl_info->ownercat;

	if (hv_address1_ind != -1)
		strcpy(li_upd_jpj_addr_req.old_address.address1, (char *)hv_address1.arr);

	if (hv_address2_ind != -1)
		strcpy(li_upd_jpj_addr_req.old_address.address2, (char *)hv_address2.arr);

	if (hv_address3_ind != -1)
		strcpy(li_upd_jpj_addr_req.old_address.address3, (char *)hv_address3.arr);

	if (hv_postcode_ind != -1)
		strcpy(li_upd_jpj_addr_req.old_address.post_code, (char *)hv_postcode.arr);
		
	if (hv_citycode_ind != -1)
		li_upd_jpj_addr_req.old_address.city_code = hv_citycode;

	if (hv_statecode_ind != -1)
		strcpy(li_upd_jpj_addr_req.old_address.state_code, hv_statecode);

	/* Initialize host variables */
	hv_address1.arr[0] = '\0';
	hv_address1.len = 0;
	hv_address1_ind = 0;
	hv_address2.arr[0] = '\0';
	hv_address2.len = 0;
	hv_address2_ind = 0;
	hv_address3.arr[0] = '\0';
	hv_address3.len = 0;
	hv_address3_ind = 0;
	hv_citycode = 0;
	hv_citycode_ind = 0;
	hv_postcode.arr[0] = '\0';
	hv_postcode.len = 0;
	hv_postcode_ind = 0;
	hv_statecode[0] = '\0';
	hv_statecode_ind = 0;

	/* Select Old Address from JPJ_INFO table */
	/* EXEC SQL 
		SELECT ADDRESS1, ADDRESS2, ADDRESS3, CITYCODE, 
		POSTCODE, STATECODE  
		INTO :hv_address1:hv_address1_ind, :hv_address2:hv_address2_ind, 
		:hv_address3:hv_address3_ind, :hv_citycode:hv_citycode_ind, 
		:hv_postcode:hv_postcode_ind, :hv_statecode:hv_statecode_ind  
		FROM JPJ_INFO 
		WHERE LICIDNO = :hv_licidno
		AND OWNERCAT = :hv_ownercat; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select ADDRESS1 ,ADDRESS2 ,ADDRESS3 ,CITYCODE ,POSTCODE ,STA\
TECODE into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11  from JPJ_INFO where (\
LICIDNO=:b12 and OWNERCAT=:b13)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2902;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_address1;
 sqlstm.sqhstl[0] = (unsigned int  )43;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&hv_address1_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&hv_address2;
 sqlstm.sqhstl[1] = (unsigned int  )43;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&hv_address2_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&hv_address3;
 sqlstm.sqhstl[2] = (unsigned int  )43;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&hv_address3_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&hv_citycode;
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&hv_citycode_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&hv_postcode;
 sqlstm.sqhstl[4] = (unsigned int  )8;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&hv_postcode_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)hv_statecode;
 sqlstm.sqhstl[5] = (unsigned int  )3;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&hv_statecode_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&hv_licidno;
 sqlstm.sqhstl[6] = (unsigned int  )18;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)0;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&hv_ownercat;
 sqlstm.sqhstl[7] = (unsigned int  )1;
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




	setnull(hv_address1);
	setnull(hv_address2);
	setnull(hv_address3);
	setnull(hv_postcode);


	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog(" send_address_upd_jpj : error while selecting from table JPJ_INFO : %s", SQLMSG);
	#endif

		sprintf(excep_log.error_msg, "send_address_upd_jpj : error while selecting from table JPJ_INFO : %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'N';

		strcpy(prog_log.remarks, "send_address_upd_jpj : error while selecting from table JPJ_INFO");
		log_error(ctx);

		return SELECT_ERROR;
	}

	/* fill the remaining actual data in LI_REV_UPD_ID_TO_KPT_REQ_T type structure*/

	if (hv_address1_ind != -1)
		strcpy(li_upd_jpj_addr_req.new_address.address1, (char *)hv_address1.arr);

	if (hv_address2_ind != -1)
		strcpy(li_upd_jpj_addr_req.new_address.address2, (char *)hv_address2.arr);

	if (hv_address3_ind != -1)
		strcpy(li_upd_jpj_addr_req.new_address.address3, (char *)hv_address3.arr);

	if (hv_postcode_ind != -1)
		strcpy(li_upd_jpj_addr_req.new_address.post_code, (char *)hv_postcode.arr);
		
	if (hv_citycode_ind != -1)
		li_upd_jpj_addr_req.new_address.city_code = hv_citycode;

	if (hv_statecode_ind != -1)
		strcpy(li_upd_jpj_addr_req.new_address.state_code, hv_statecode);

	/* Get the date and time when transaction was performed */
	ret_val = 0;
	if (GMPC_GOOD != (ret_val = get_trans_date_time(applid, 0, ADDRESS_UPD, refer_timestamp.refer_date, refer_timestamp.refer_time,ctx)))
		return ret_val;

	strcpy(li_p_header.trans_date,refer_timestamp.refer_date);
	strcpy(li_p_header.trans_time,refer_timestamp.refer_time);

	/* call li_init now */
	/*if ((ret_val = li_init(LI_JPJ_ADDRESS_UPDATE)) != GMPC_GOOD)
	{
		sprintf(excep_log.error_msg, "send_address_upd_jpj : li_init LI_JPJ_ADDRESS_UPDATE failed, %d", ret_val);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';

		strcpy(prog_log.remarks, "send_address_upd_jpj : li_init LI_JPJ_ADDRESS_UPDATE failed");

		log_error(ctx);
		return ret_val;
	}

#ifdef DEBUG
			userlog("send_address_upd_jpj : li_init(LI_JPJ_ADDRESS_UPDATE) successfull");
#endif Commented for IJPN*/

	
#ifdef DEBUG
		userlog("kpt number is %s", li_upd_jpj_addr_req.appnt_kpt);
		userlog("lic id is %s", li_upd_jpj_addr_req.license_id);
		userlog("category_of_owner %c", li_upd_jpj_addr_req.category_of_owner);

		userlog("old post code is %s", li_upd_jpj_addr_req.old_address.post_code);
		userlog("old state code is %s", li_upd_jpj_addr_req.old_address.state_code);
		userlog("old city code  is %d", li_upd_jpj_addr_req.old_address.city_code);

		userlog("old add 1  is %s", li_upd_jpj_addr_req.old_address.address1);
		userlog("old add 2  is %s", li_upd_jpj_addr_req.old_address.address2);
		userlog("old add 3  is %s", li_upd_jpj_addr_req.old_address.address3);

		userlog("post code is %s", li_upd_jpj_addr_req.new_address.post_code);
		userlog("state code is %s", li_upd_jpj_addr_req.new_address.state_code);
		userlog("city code  is %d", li_upd_jpj_addr_req.new_address.city_code);

		userlog("add 1  is %s", li_upd_jpj_addr_req.new_address.address1);
		userlog("add 2  is %s", li_upd_jpj_addr_req.new_address.address2);
		userlog("add 3  is %s", li_upd_jpj_addr_req.new_address.address3);
	

		userlog("send_address_upd_jpj : About to call li_update_jpj_addr_p");
#endif

		/* Call legacy function to update address in the Legacy */
		//if((ret_val = li_update_jpj_addr_p(li_p_header, li_upd_jpj_addr_req, msgid, &error_code)) != GMPC_GOOD)
		if((ret_val = li_update_jpj_addr_p(li_p_header, li_upd_jpj_addr_req, msgid, &error_code, pReplyMsg, &iReplyMsgLen, sErrMessage)) != GMPC_GOOD)
		{
		#ifdef DEBUG
			userlog("send_address_upd_jpj : li_update_jpj_addr function returned error %d", error_code);
			userlog("send_address_upd_jpj : li_update_jpj_addr function returned sErrMessage %s", sErrMessage);
		#endif

			strcpy(rev_msg_id, (char *)msgid);

			if(sErrMessage[0] != '\0')
			{
			strncpy(rejectcode.arr,sErrMessage,8);
			setlen(rejectcode);

			strcpy(reason_desc.arr,sErrMessage);
			setlen(reason_desc);
			}

			userlog("rejectcode : %s",rejectcode.arr);
			userlog("reason_desc : %s",reason_desc.arr);
			
			strcpy(reject_code, (char *)rejectcode.arr);
			strcpy(reject_reason, (char *)reason_desc.arr);

			userlog("reject_code, reject_reason after copying: %s, %s",reject_code,reject_reason);


			excep_log.severity = FATAL;
			sprintf(excep_log.error_msg, "send_address_upd_jpj : li_upd_jpj_addr returned error %d", error_code);
			excep_log.termination_flag = 'Y';
			strcpy(prog_log.remarks, "send_address_upd_jpj : li_upd_jpj_addr returned error");
			log_error(ctx);

			//return error_code; don't know?? whether to return error here or not ask vasanth
	
		}
		else
		{
#ifdef DEBUG
			userlog("send_address_upd_jpj : li_update_jpj_addr_p successfull");
#endif
		}
		
	//li_end();
	strcpy(rev_msg_id, (char *)msgid);
	return GMPC_GOOD;

}


int send_address_upd_jpn(char *applid, char *rev_msg_id, APPL_INFO_T* appl_info, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* Variable declaration */
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	/* varchar hv_address1[ADDRESS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } hv_address1
 = {0};

	short int hv_address1_ind = 0;
	/* varchar hv_address2[ADDRESS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } hv_address2
 = {0};

	short int hv_address2_ind = 0;
	/* varchar hv_address3[ADDRESS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } hv_address3
 = {0};

	short int hv_address3_ind = 0;
	char hv_applid[APP_ID_SIZE];
	short int hv_applid_ind = 0;
	/* varchar hv_kptno[KPT_SIZE]; */ 
struct { unsigned short len; unsigned char arr[13]; } hv_kptno;

	int hv_citycode;
	short int hv_citycode_ind = 0;
	/* varchar hv_postcode[POST_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[6]; } hv_postcode
 = {0};

	short int hv_postcode_ind = 0;
	char hv_statecode[STATE_CODE_SIZE];
	short int hv_statecode_ind = 0;
	/* varchar hv_licidno[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_licidno
 = {0};

	short int hv_licidno_ind = 0;
	char hv_ownercat = 0;
	short int hv_ownercat_ind = 0;

	/* Added for IJPN */
	/* varchar reason_desc[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } reason_desc
 = {0};

	short reason_desc_ind = -1;
	/* varchar rejectcode[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } rejectcode
 = {0};

	short rejectcode_ind = -1;	
	char branch_code[7] = {0};
	/* End for IJPN */

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int ret_val = 0;
	LI_JPN_UPDATE_ADDRESS_REQ_T li_upd_jpn_addr_req = {0};
	
	/* Variables required for legacy functions */
	unsigned char msgid[MSG_ID_SIZE] = {0};
	int error_code = {0};

	LI_REFER_TIMESTAMP_T refer_timestamp;

	/* Added for IJPN */
	char pReplyMsg[LI_REPLY_MSG_SIZE] = {0};
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE] = {0};
    /* End for IJPN */

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	#ifdef DEBUG
		userlog("  In send_address_upd_jpn() function 1");
		userlog(" send_address_upd_jpn : Input Application Id is %s", applid);
		userlog(" send_address_upd_jpn : Input KPT Number is %s", appl_info->kpt_number);
	#endif

	strcpy(hv_applid, applid);
	strcpy((char *)hv_kptno.arr, appl_info->kpt_number);
	setlen(hv_kptno);
//	strcpy(hv_licidno.arr, appl_info->lic_id_no);
//	setlen(hv_licidno);
//	hv_ownercat = appl_info->ownercat;

	/* EXEC SQL 
		SELECT ADDRESS1, ADDRESS2, ADDRESS3, CITYCODE, 
		POSTCODE, STATECODE  
		INTO :hv_address1:hv_address1_ind, :hv_address2:hv_address2_ind, 
			 :hv_address3:hv_address3_ind, :hv_citycode:hv_citycode_ind, 
			 :hv_postcode:hv_postcode_ind, :hv_statecode:hv_statecode_ind  
		FROM APPNT_JPN_INFO WHERE  APPLID = :hv_applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select ADDRESS1 ,ADDRESS2 ,ADDRESS3 ,CITYCODE ,POSTCODE ,STA\
TECODE into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11  from APPNT_JPN_INFO w\
here APPLID=:b12";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2949;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_address1;
 sqlstm.sqhstl[0] = (unsigned int  )43;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&hv_address1_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&hv_address2;
 sqlstm.sqhstl[1] = (unsigned int  )43;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&hv_address2_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&hv_address3;
 sqlstm.sqhstl[2] = (unsigned int  )43;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&hv_address3_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&hv_citycode;
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&hv_citycode_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&hv_postcode;
 sqlstm.sqhstl[4] = (unsigned int  )8;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&hv_postcode_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)hv_statecode;
 sqlstm.sqhstl[5] = (unsigned int  )3;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&hv_statecode_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)hv_applid;
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



	setnull(hv_address1);
	setnull(hv_address2);
	setnull(hv_address3);
	setnull(hv_postcode);


	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog(" send_address_upd_jpn : error while selecting from table APPNT_JPN_INFO : %s", SQLMSG);
	#endif

		sprintf(excep_log.error_msg, "send_address_upd_jpn : error while selecting from table APPNT_JPN_INFO : %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'N';

		strcpy(prog_log.remarks, "send_address_upd_jpn : error while selecting from table APPNT_JPN_INFO");
		log_error(ctx);

		return SELECT_ERROR;
	}

	/* fill the actual data in LI_REV_UPD_ID_TO_KPT_REQ_T type structure*/
	memset(&li_upd_jpn_addr_req, 0, sizeof(LI_JPN_UPDATE_ADDRESS_REQ_T));
	
	li_upd_jpn_addr_req.old_address = (ADDRESS_T *)malloc(sizeof(ADDRESS_T));
	li_upd_jpn_addr_req.new_address = (ADDRESS_T *)malloc(sizeof(ADDRESS_T));

	strcpy(li_upd_jpn_addr_req.appnt_kpt, appl_info->kpt_number);
//	strcpy(li_upd_jpn_addr_req.license_id, appl_info->lic_id_no);

	/* Added on 10/10/2001 - Now KPP will be sent in license Id field */
//	if((ret_val = get_applicant_kpp(appl_info->kpt_number, li_upd_jpj_addr_req.license_id)) != GMPC_GOOD)
//	{
		/* Skip sending this message, go for next	*/
//		return ret_val;
//	}
	
//	li_upd_jpj_addr_req.category_of_owner = appl_info->ownercat;

	#ifdef DEBUG
		userlog("  In send_address_upd_jpn():old address restored.");
	#endif
	

	if (hv_address1_ind != -1)
		strcpy(li_upd_jpn_addr_req.old_address->address1, (char *)hv_address1.arr);

	if (hv_address2_ind != -1)
		strcpy(li_upd_jpn_addr_req.old_address->address2, (char *)hv_address2.arr);

	if (hv_address3_ind != -1)
		strcpy(li_upd_jpn_addr_req.old_address->address3, (char *)hv_address3.arr);

	if (hv_postcode_ind != -1)
		strcpy(li_upd_jpn_addr_req.old_address->post_code, (char *)hv_postcode.arr);
		
	if (hv_citycode_ind != -1)
		li_upd_jpn_addr_req.old_address->city_code = hv_citycode;

	if (hv_statecode_ind != -1)
		strcpy(li_upd_jpn_addr_req.old_address->state_code, hv_statecode);

	#ifdef DEBUG
		userlog("  In send_address_upd_jpn():old address copied.");
	#endif

	/* Initialize host variables */
	hv_address1.arr[0] = '\0';
	hv_address1.len = 0;
	hv_address1_ind = 0;
	hv_address2.arr[0] = '\0';
	hv_address2.len = 0;
	hv_address2_ind = 0;
	hv_address3.arr[0] = '\0';
	hv_address3.len = 0;
	hv_address3_ind = 0;
	hv_citycode = 0;
	hv_citycode_ind = 0;
	hv_postcode.arr[0] = '\0';
	hv_postcode.len = 0;
	hv_postcode_ind = 0;
	hv_statecode[0] = '\0';
	hv_statecode_ind = 0;

	/* Select Old Address from JPN_INFO table */
	/* EXEC SQL 
		SELECT ADDRESS1, ADDRESS2, ADDRESS3, CITYCODE, 
		POSTCODE, STATECODE  
		INTO :hv_address1:hv_address1_ind, :hv_address2:hv_address2_ind, 
		:hv_address3:hv_address3_ind, :hv_citycode:hv_citycode_ind, 
		:hv_postcode:hv_postcode_ind, :hv_statecode:hv_statecode_ind  
		FROM JPN_INFO 
		WHERE KPTNO = :hv_kptno; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select ADDRESS1 ,ADDRESS2 ,ADDRESS3 ,CITYCODE ,POSTCODE ,STA\
TECODE into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11  from JPN_INFO where K\
PTNO=:b12";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2992;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_address1;
 sqlstm.sqhstl[0] = (unsigned int  )43;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&hv_address1_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&hv_address2;
 sqlstm.sqhstl[1] = (unsigned int  )43;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&hv_address2_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&hv_address3;
 sqlstm.sqhstl[2] = (unsigned int  )43;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&hv_address3_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&hv_citycode;
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&hv_citycode_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&hv_postcode;
 sqlstm.sqhstl[4] = (unsigned int  )8;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&hv_postcode_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)hv_statecode;
 sqlstm.sqhstl[5] = (unsigned int  )3;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&hv_statecode_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&hv_kptno;
 sqlstm.sqhstl[6] = (unsigned int  )15;
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


//		AND OWNERCAT = :hv_ownercat;


	setnull(hv_address1);
	setnull(hv_address2);
	setnull(hv_address3);
	setnull(hv_postcode);


	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog(" send_address_upd_jpn : error while selecting from table JPN_INFO : %s", SQLMSG);
	#endif

		sprintf(excep_log.error_msg, "send_address_upd_jpn : error while selecting from table JPN_INFO : %s", SQLMSG);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'N';

		strcpy(prog_log.remarks, "send_address_upd_jpn : error while selecting from table JPN_INFO");
		log_error(ctx);

		return SELECT_ERROR;
	}
	#ifdef DEBUG
		userlog("  In send_address_upd_jpn():new address restored.");
	#endif

	/* fill the remaining actual data in LI_REV_UPD_ID_TO_KPT_REQ_T type structure*/

	if (hv_address1_ind != -1)
		strcpy(li_upd_jpn_addr_req.new_address->address1, (char *)hv_address1.arr);

	if (hv_address2_ind != -1)
		strcpy(li_upd_jpn_addr_req.new_address->address2, (char *)hv_address2.arr);

	if (hv_address3_ind != -1)
		strcpy(li_upd_jpn_addr_req.new_address->address3, (char *)hv_address3.arr);

	if (hv_postcode_ind != -1)
		strcpy(li_upd_jpn_addr_req.new_address->post_code, (char *)hv_postcode.arr);
		
	if (hv_citycode_ind != -1)
		li_upd_jpn_addr_req.new_address->city_code = hv_citycode;

	if (hv_statecode_ind != -1)
		strcpy(li_upd_jpn_addr_req.new_address->state_code, hv_statecode);

	#ifdef DEBUG
		userlog("  In send_address_upd_jpn():new address copied.");
	#endif

	/* Get the date and time when transaction was performed */
	ret_val = 0;
	if (GMPC_GOOD != (ret_val = get_trans_date_time(applid, 0, ADDRESS_UPD, refer_timestamp.refer_date, refer_timestamp.refer_time,ctx)))
		return ret_val;

	strcpy(li_p_header.trans_date,refer_timestamp.refer_date);
	strcpy(li_p_header.trans_time,refer_timestamp.refer_time);
	li_p_header.transaction_type=TXN_REVERSAL;

	#ifdef DEBUG
		userlog("  In send_address_upd_jpn():trans_date_time & transaction type copied.");
	#endif

	/* call li_init now */
/*	if ((ret_val = li_init(LI_JPN_ADDRESS_REVERSAL)) != GMPC_GOOD)
	{
		sprintf(excep_log.error_msg, "send_address_upd_jpn : li_init LI_JPN_ADDRESS_REVERSAL failed, %d", ret_val);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';

		strcpy(prog_log.remarks, "send_address_upd_jpn : li_init LI_JPN_ADDRESS_REVERSAL failed");

		log_error(ctx);
		return ret_val;
	}

#ifdef DEBUG
			userlog("send_address_upd_jpn : li_init(LI_JPN_ADDRESS_REVERSAL) successfull");
#endif Commented for IJPN */

	
#ifdef DEBUG
		userlog("kpt number is %s", li_upd_jpn_addr_req.appnt_kpt);
//		userlog("lic id is %s", li_upd_jpn_addr_req.license_id);
//		userlog("category_of_owner %c", li_upd_jpn_addr_req.category_of_owner);

		userlog("old post code is %s", li_upd_jpn_addr_req.old_address->post_code);
		userlog("old state code is %s", li_upd_jpn_addr_req.old_address->state_code);
		userlog("old city code  is %d", li_upd_jpn_addr_req.old_address->city_code);

		userlog("old add 1  is %s", li_upd_jpn_addr_req.old_address->address1);
		userlog("old add 2  is %s", li_upd_jpn_addr_req.old_address->address2);
		userlog("old add 3  is %s", li_upd_jpn_addr_req.old_address->address3);

		userlog("post code is %s", li_upd_jpn_addr_req.new_address->post_code);
		userlog("state code is %s", li_upd_jpn_addr_req.new_address->state_code);
		userlog("city code  is %d", li_upd_jpn_addr_req.new_address->city_code);

		userlog("add 1  is %s", li_upd_jpn_addr_req.new_address->address1);
		userlog("add 2  is %s", li_upd_jpn_addr_req.new_address->address2);
		userlog("add 3  is %s", li_upd_jpn_addr_req.new_address->address3);
	

		userlog("send_address_upd_jpn : About to call li_update_jpn_addr_p");
#endif

		/* Call legacy function to update address in the Legacy */
		//if((ret_val = li_update_jpn_addr_p(li_p_header, li_upd_jpn_addr_req, msgid, &error_code)) != GMPC_GOOD)
		if((ret_val = li_update_jpn_addr_p(li_p_header, li_upd_jpn_addr_req, msgid, &error_code, pReplyMsg, &iReplyMsgLen, sErrMessage)) != GMPC_GOOD)
		{
		#ifdef DEBUG
			userlog("send_address_upd_jpn : li_update_jpn_addr function returned error %d", error_code);
			userlog("send_address_upd_jpn : li_update_jpn_addr function returned sErrMessage %s", sErrMessage);
		#endif

			strcpy(rev_msg_id, (char *)msgid);

			if(sErrMessage[0] != '\0')
			{
			strncpy(rejectcode.arr,sErrMessage,8);
			setlen(rejectcode);

			strcpy(reason_desc.arr,sErrMessage);
			setlen(reason_desc);
			}

			userlog("rejectcode : %s",rejectcode.arr);
			userlog("reason_desc : %s",reason_desc.arr);
			
			strcpy(reject_code, (char *)rejectcode.arr);
			strcpy(reject_reason, (char *)reason_desc.arr);

			userlog("reject_code, reject_reason after copying: %s, %s",reject_code,reject_reason);


			excep_log.severity = FATAL;
			sprintf(excep_log.error_msg, "send_address_upd_jpn : li_upd_jpn_addr returned error %d", error_code);
			excep_log.termination_flag = 'Y';
			strcpy(prog_log.remarks, "send_address_upd_jpn : li_upd_jpn_addr returned error");
			log_error(ctx);
			free(li_upd_jpn_addr_req.old_address);
			free(li_upd_jpn_addr_req.new_address);
		}
		else
		{
#ifdef DEBUG
			userlog("send_address_upd_jpn : li_update_jpn_addr_p successfull");
#endif
			free(li_upd_jpn_addr_req.old_address);
			free(li_upd_jpn_addr_req.new_address);

		}
		
	//li_end();
	strcpy(rev_msg_id, (char *)msgid);
	return GMPC_GOOD;
}

/* Added on 10/10/2001	*/
/* Function retrieves Applicant's KPP Number from JPN_INFO table */
int get_applicant_kpp(char *kptno, char *kppno,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char hv_kptno[KPT_SIZE] = {0};
	/* varchar hv_kppno[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_kppno
 = {0};

	short hv_kppno_ind = -1;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	strcpy(hv_kptno, kptno);

#ifdef DEBUG
	userlog("Inside get_applicant_kpp() kptno is %s", hv_kptno);
#endif

	/* EXEC SQL SELECT KPPNO 
			 INTO :hv_kppno:hv_kppno_ind
			 FROM JPN_INFO
			 WHERE KPTNO = :hv_kptno; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select KPPNO into :b0:b1  from JPN_INFO where KPTNO=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3035;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_kppno;
 sqlstm.sqhstl[0] = (unsigned int  )18;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&hv_kppno_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hv_kptno;
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



	if((SQLCODE) && !(NO_DATA_FOUND))
	{
#ifdef DEBUG
		userlog("get_applicant_kpp : Select KPPNO from JPN_INFO failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_applicant_kpp : Select KPPNO from JPN_INFO failed ");
		sprintf(excep_log.error_msg, "get_applicant_kpp : Select KPPNO from JPN_INFO failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return SELECT_ERROR;

	}
	else if (NO_DATA_FOUND)
	{
#ifdef DEBUG
		userlog("get_applicant_kpp : Select KPPNO from JPN_INFO failed : %s", SQLMSG);
#endif
		return GMPC_GOOD;
	}
     
	// included this checking NULL here on 12/07/06
	//if (hv_kppno_ind == 0)
	if ((hv_kppno_ind == 0) && ((hv_kppno.arr[0] != ' ') && (hv_kppno.arr[0] != '\0')))
	{
#ifdef DEBUG
		userlog("Controll returns here ... before kptno");
		userlog("get_applicant_kpp : KPP number found %s", kppno);
#endif
		setnull(hv_kppno);
		strcpy(kppno, (char *)hv_kppno.arr);
	}

	userlog("Controll returns here ... After KPTNO");

	return GMPC_GOOD;
}

/* Function sends a 'New Owner Category Update' message with reversed values */
/* to reverse out the previous same update message							 */
int send_owner_cat_rev(char *applid, char *rev_msg_id, APPL_INFO_T *appl_info_ptr, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	/* Added for IJPN */
	/* varchar reason_desc[161] = {0}; */ 
struct { unsigned short len; unsigned char arr[161]; } reason_desc
 = {0};

	short reason_desc_ind = -1;
	/* varchar rejectcode[9]={0}; */ 
struct { unsigned short len; unsigned char arr[9]; } rejectcode
 = {0};

	short rejectcode_ind = -1;	
	char branch_code[7] = {0};
	/* End for IJPN */

	/* EXEC SQL END DECLARE SECTION; */ 


	/* Variable declaration */
	int ret_val;

	LI_UPD_NEW_OWNER_CAT_REQ_T li_upd_owner_cat_req = {0};
	APPL_INFO_T appl_info;

	/* Variables required for legacy functions */
	unsigned char msgid[MSG_ID_SIZE] = {0};
	int error_code = {0};


	/* Added for IJPN */
	char pReplyMsg[LI_REPLY_MSG_SIZE] = {0};
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE] = {0};
    /* End for IJPN */



	/* Copy the data from respective structures using the pointers passed */
	memcpy(&appl_info, appl_info_ptr, sizeof(APPL_INFO_T));

	/* call li_init now */
	/*if ((ret_val = li_init(LI_UPDATE_NEW_OWNER_CAT)) != GMPC_GOOD)
	{
		sprintf(excep_log.error_msg, "send_owner_cat_rev : li_init LI_UPDATE_NEW_OWNER_CAT failed, %d", ret_val);
		excep_log.severity = FATAL;
		excep_log.termination_flag = 'Y';

		strcpy(prog_log.remarks, "send_owner_cat_rev : li_init LI_UPDATE_NEW_OWNER_CAT failed");

		log_error(ctx);
		
		
		return ret_val;
	}*/

	/* fill the legacy request buffer */
	strcpy(li_upd_owner_cat_req.kpt_no, appl_info.kpt_number);
	strcpy(li_upd_owner_cat_req.id_number, appl_info.lic_id_no);

	/* Added on 10/10/2001 - Now KPP will be sent in license Id field */
	if((ret_val = get_applicant_kpp(appl_info.kpt_number, li_upd_owner_cat_req.id_number,ctx)) != GMPC_GOOD)
	{
		/* Skip sending this message, go for next	*/
		userlog("Control Returns here : GMPC_GOOD");
		return GMPC_GOOD;
	}

	/* As this is a reversal message, reverse the values of owner categories	*/
	/* i.e. New owner in current owner field and current owner in new owner		*/
	/* field. For Reverse Id to Kpt message this revresal is done in			*/
	/* legacy interface function. Since this legacy interface function			*/
	/* (li_upd_new_owner_cat_p) is shared by both forward and reverse message,	*/
	/* this reversal is done here in the service								*/
	

	li_upd_owner_cat_req.current_cat_of_owner = appl_info.newownercat;
	li_upd_owner_cat_req.new_cat_of_owner = appl_info.ownercat;
	li_upd_owner_cat_req.reason = OWNER_CAT_CANCEL;

	/* Call legacy function to update address in the Legacy */
	//if((ret_val = li_upd_new_owner_cat_p(li_p_header, li_upd_owner_cat_req, msgid, &error_code)) != GMPC_GOOD)
	userlog("Before li_upd_new_owner_cat_p()........");
	if((ret_val = li_upd_new_owner_cat_p(li_p_header, li_upd_owner_cat_req, msgid, &error_code, pReplyMsg, &iReplyMsgLen, sErrMessage)) != GMPC_GOOD)
	{
	#ifdef DEBUG
		userlog("send_owner_cat_rev : li_upd_new_owner_cat_p function returned error %d", error_code);
		userlog("send_owner_cat_rev : li_upd_new_owner_cat_p function returned sErrMessage %s", sErrMessage);
	#endif

		strcpy(rev_msg_id, (char *)msgid);

		if(sErrMessage[0] != '\0')
		{
		strncpy(rejectcode.arr,sErrMessage,8);
		setlen(rejectcode);

		strcpy(reason_desc.arr,sErrMessage);
		setlen(reason_desc);
		}

		userlog("rejectcode : %s",rejectcode.arr);
		userlog("reason_desc : %s",reason_desc.arr);
		
		strcpy(reject_code, (char *)rejectcode.arr);
		strcpy(reject_reason, (char *)reason_desc.arr);

		userlog("reject_code, reject_reason after copying: %s, %s",reject_code,reject_reason);


		excep_log.severity = FATAL;
		sprintf(excep_log.error_msg, "send_owner_cat_rev : li_upd_new_owner_cat_p returned error %d", error_code);
		excep_log.termination_flag = 'Y';
		strcpy(prog_log.remarks, "send_owner_cat_rev : li_upd_new_owner_cat_p returned error");
		log_error(ctx);

		//li_end();
		return error_code;
	
	}
	else
	{
#ifdef DEBUG
		userlog("send_owner_cat_rev : li_upd_new_owner_cat_p successfull");
#endif
	}

	//li_end();
	strcpy(rev_msg_id, (char *)msgid);
	return GMPC_GOOD;
}

/********************************************************************************************/
/* Function Name	: get_new_class															*/
/* Description		: This function returns the position at which the new class/usage		*/
/*						is supposed to be for PSV/GDL licenses only. For new class txn		*/
/*						the postion of new class is at the end of all the existing classes	*/
/*						of that license type. But for update usage txn, function returns 	*/
/*						position of the class whose usage is being updated					*/
/* Input			: Appl id, license id, owner catg, License type							*/
/* Return values    : SUCCESS / Error code													*/
/* Limitations		: None																	*/
/********************************************************************************************/

int get_new_class(char *applid, char *licidno, char ownercat, char *txncode, char *lictype,  LI_REV_CLASS_T **new_class_ptr,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char hv_applid[APP_ID_SIZE] = {0};
		/* varchar hv_licidno[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_licidno
 = {0};

		char hv_ownercat = 0;
		char hv_lictype[LIC_TYPE_SIZE] = {0};
		char hv_licclass[LIC_CLS_SIZE] = {0};
		char hv_licusage[CLASS_USAGE_SIZE] = {0};
		char hv_new_added_class[LIC_CLS_SIZE] = {0};
		char hv_new_added_usage[CLASS_USAGE_SIZE] = {0};
		char hv_txncode[TRANSACTION_CODE_SIZE] = {0};

		short hv_licclass_ind = -1;
		short hv_licusage_ind = -1;
		short hv_new_added_class_ind = -1;
		short hv_new_added_usage_ind = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	LI_REV_CLASS_T *curr_class = NULL;
	LI_REV_CLASS_T *prev_class = NULL;

	int position_count = 0;
	int new_class_count = 0;

	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN



	strcpy(hv_applid, applid);
	strcpy((char *)hv_licidno.arr, licidno);
	setlen(hv_licidno);
	hv_ownercat = ownercat;
	strcpy(hv_txncode, txncode);
	strcpy(hv_lictype, lictype);

	/* Cursor for all classes of the license type */
	/* EXEC SQL DECLARE NEW_CLASS_USAGE CURSOR FOR
		SELECT LICCLASS, LICUSAGECODE
			FROM APPNT_LIC_INFO B
			WHERE B.APPLID = :hv_applid
			AND B.LICTYPE = :hv_lictype
			ORDER BY B.RECORDSERNO; */ 


	/* Cursor for new classes applied for */
	/* EXEC SQL DECLARE ADD_CLASS_TXN CURSOR FOR
		SELECT LICCLASS, LICUSAGECODE
			FROM APPL_TXN A
			WHERE A.APPLID = :hv_applid
			AND A.TXNCODE = :hv_txncode
			AND A.TXNCANCELCODE IS NULL
			ORDER BY A.TXNSERNO; */ 


	/* EXEC SQL OPEN ADD_CLASS_TXN; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0089;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3058;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (         void  *)hv_applid;
 sqlstm.sqhstl[0] = (unsigned int  )20;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)hv_txncode;
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
		userlog("get_new_class : Opening cursor ADD_CLASS_TXN failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_new_class : Opening cursor ADD_CLASS_TXN failed ");
		sprintf(excep_log.error_msg, "get_new_class : Opening cursor ADD_CLASS_TXN failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return CURSOR_OPEN_ERROR;
	}

	while (1)
	{
		/* EXEC SQL FETCH ADD_CLASS_TXN 
				 INTO :hv_new_added_class:hv_new_added_class_ind,
					   :hv_new_added_usage:hv_new_added_usage_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3081;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)hv_new_added_class;
  sqlstm.sqhstl[0] = (unsigned int  )3;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&hv_new_added_class_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_new_added_usage;
  sqlstm.sqhstl[1] = (unsigned int  )3;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&hv_new_added_usage_ind;
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



		if(NO_DATA_FOUND)
		{
			break;
		}
		else if (SQLCODE)
		{
		#ifdef DEBUG
				userlog("get_new_class : Fetching cursor ADD_CLASS_TXN failed : %s", SQLMSG);
		#endif
				strcpy(prog_log.remarks,"get_new_class : Fetching cursor ADD_CLASS_TXN failed ");
				sprintf(excep_log.error_msg, "get_new_class : Fetching cursor ADD_CLASS_TXN failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
						
				return CURSOR_FETCH_ERROR;
		}

		curr_class = (LI_REV_CLASS_T *)malloc(sizeof(LI_REV_CLASS_T));
		if (curr_class == NULL)
		{
	#ifdef DEBUG
			userlog("get_new_class : cannot allocate memory !!");
	#endif
			excep_log.severity = FATAL;
			sprintf(excep_log.error_msg, "get_new_class : cannot allocate memory !!");
			excep_log.termination_flag = 'Y';
			sprintf(prog_log.remarks, "get_new_class : cannot allocate memory !!");
			log_error(ctx);
			return MALLOC_ERROR;
		}

		memset(curr_class, 0, sizeof(LI_REV_CLASS_T));

		if (hv_new_added_class_ind == 0)
			strcpy(curr_class->license_class, hv_new_added_class);
		
		if (hv_new_added_usage_ind == 0)
			strcpy(curr_class->license_class_usage, hv_new_added_usage);


		/* EXEC SQL OPEN NEW_CLASS_USAGE; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = sq0088;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3104;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqcmod = (unsigned int )0;
  sqlstm.sqhstv[0] = (         void  *)hv_applid;
  sqlstm.sqhstl[0] = (unsigned int  )20;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_lictype;
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
			userlog("get_new_class : Opening cursor NEW_CLASS_USAGE failed : %s", SQLMSG);
	#endif
			strcpy(prog_log.remarks,"get_new_class : Opening cursor NEW_CLASS_USAGE failed ");
			sprintf(excep_log.error_msg, "get_new_class : Opening cursor NEW_CLASS_USAGE failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
					
			return CURSOR_OPEN_ERROR;
		}

		position_count = 1;

		while(1)
		{
			/* EXEC SQL FETCH NEW_CLASS_USAGE
					 INTO :hv_licclass:hv_licclass_ind, 
						  :hv_licusage:hv_licusage_ind; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 18;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3127;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqfoff = (           int )0;
   sqlstm.sqfmod = (unsigned int )2;
   sqlstm.sqhstv[0] = (         void  *)hv_licclass;
   sqlstm.sqhstl[0] = (unsigned int  )3;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&hv_licclass_ind;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)hv_licusage;
   sqlstm.sqhstl[1] = (unsigned int  )3;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)&hv_licusage_ind;
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



			if(NO_DATA_FOUND)
			{
				break;
			}
			else if (SQLCODE != 0)
			{
		#ifdef DEBUG
				userlog("get_new_class : Fetching cursor NEW_CLASS_USAGE failed : %s", SQLMSG);
		#endif
				strcpy(prog_log.remarks,"get_new_class : Fetching cursor NEW_CLASS_USAGE failed ");
				sprintf(excep_log.error_msg, "get_new_class : Fetching cursor NEW_CLASS_USAGE failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
						
				return CURSOR_FETCH_ERROR;
			}

			if ((strcmp(hv_new_added_class, hv_licclass)) == 0)
			{
				/* Match found, so break out of inner loop to note the position		*/
				break;

			}

			position_count++;
		}

		/* class_index indicates whether it is CLASS 1 or 2 or 3 for PSV/GDL licenses	*/
		curr_class->class_index = position_count;

	#ifdef DEBUG
			userlog("get_new_class : class %s", curr_class->license_class);
			userlog("get_new_class : usage %s", curr_class->license_class_usage);
			userlog("get_new_class : position %d", curr_class->class_index);
			userlog("get_new_class : curr class node %X", curr_class);
	#endif

		/* EXEC SQL CLOSE NEW_CLASS_USAGE; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3150;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



		if (SQLCODE != 0)
		{
	#ifdef DEBUG
			userlog("get_new_class : Closing cursor NEW_CLASS_USAGE failed : %s", SQLMSG);
	#endif
			strcpy(prog_log.remarks,"get_new_class : Closing cursor NEW_CLASS_USAGE failed ");
			sprintf(excep_log.error_msg, "get_new_class : Closing cursor NEW_CLASS_USAGE failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
					
			return CURSOR_CLOSE_ERROR;
		}
			
		if (new_class_count == 0)
		{
			*new_class_ptr = curr_class;
		}
		else
		{
			prev_class->next_class = curr_class;
		}
			
		prev_class = curr_class;

		new_class_count++;

	}

	/* EXEC SQL CLOSE ADD_CLASS_TXN; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3165;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("get_new_class : Closing cursor ADD_CLASS_TXN failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_new_class : Closing cursor ADD_CLASS_TXN failed ");
		sprintf(excep_log.error_msg, "get_new_class : Closing cursor ADD_CLASS_TXN failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return CURSOR_CLOSE_ERROR;
	}

#ifdef DEBUG
		userlog("get_new_class : Starting node of new class list returned is %X", *new_class_ptr);
#endif

	return GMPC_GOOD;

}

/*****************************************************************************************/
/* Function Name	: get_existing_classes												 */
/* Description		: This function retrieves all the classes for given license type	 */
/*						and returns a linked list of the same							 */
/* Input			: Appl id, license id, owner catg, License type						 */
/* Return values    : SUCCESS / Error code												 */
/* Limitations		: None															     */
/*****************************************************************************************/

int get_existing_classes(char *applid, char *licidno, char ownercat, char *lictype, LI_REV_CLASS_T **class_ptr,void * ctx)
{
	struct sqlca sqlca = {0}; // added on 13/03/06
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char hv_applid[APP_ID_SIZE] = {0};
		/* varchar hv_licidno[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } hv_licidno
 = {0};

		char hv_ownercat = 0;
		char hv_lictype[LIC_TYPE_SIZE] = {0};
		char hv_licclass[LIC_CLS_SIZE] = {0};
		char hv_licusage[CLASS_USAGE_SIZE] = {0};

		short hv_licclass_ind = -1;
		short hv_licusage_ind = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	LI_REV_CLASS_T *curr_class = NULL;
	LI_REV_CLASS_T *prev_class = NULL;

	int count = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN




	strcpy(hv_applid, applid);
	strcpy((char *)hv_licidno.arr, licidno);
	setlen(hv_licidno);
	hv_ownercat = ownercat;
	strcpy(hv_lictype, lictype);

	/* EXEC SQL DECLARE EXIST_CLASS_USAGE CURSOR FOR
		SELECT LICCLASS, LICUSAGECODE
			FROM JPJ_LIC_INFO B
			WHERE B.LICIDNO = :hv_licidno
			AND B.OWNERCAT = :hv_ownercat
			AND B.LICTYPE = :hv_lictype
			ORDER BY B.RECORDSERNO; */ 


	/* EXEC SQL OPEN EXIST_CLASS_USAGE; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0090;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3180;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (         void  *)&hv_licidno;
 sqlstm.sqhstl[0] = (unsigned int  )18;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&hv_ownercat;
 sqlstm.sqhstl[1] = (unsigned int  )1;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)hv_lictype;
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



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("get_existing_classes : Opening cursor EXIST_CLASS_USAGE failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_existing_classes : Opening cursor EXIST_CLASS_USAGE failed ");
		sprintf(excep_log.error_msg, "get_existing_classes : Opening cursor EXIST_CLASS_USAGE failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return CURSOR_OPEN_ERROR;
	}
	
	while(1)
	{
		/* EXEC SQL FETCH EXIST_CLASS_USAGE
				 INTO :hv_licclass:hv_licclass_ind, 
					  :hv_licusage:hv_licusage_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 18;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3207;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)hv_licclass;
  sqlstm.sqhstl[0] = (unsigned int  )3;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&hv_licclass_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)hv_licusage;
  sqlstm.sqhstl[1] = (unsigned int  )3;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&hv_licusage_ind;
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



		if(NO_DATA_FOUND)
		{
			break;
		}
		else if (SQLCODE != 0)
		{
	#ifdef DEBUG
			userlog("get_existing_classes : Fetching cursor EXIST_CLASS_USAGE failed : %s", SQLMSG);
	#endif
			strcpy(prog_log.remarks,"get_existing_classes : Fetching cursor EXIST_CLASS_USAGE failed ");
			sprintf(excep_log.error_msg, "get_existing_classes : Fetching cursor EXIST_CLASS_USAGE failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
					
			return CURSOR_FETCH_ERROR;
		}

		curr_class = (LI_REV_CLASS_T *)malloc(sizeof(LI_REV_CLASS_T));
		if (curr_class == NULL)
		{
	#ifdef DEBUG
			userlog("get_existing_classes : cannot allocate memory !!");
	#endif
			excep_log.severity = FATAL;
			sprintf(excep_log.error_msg, "get_existing_classes : cannot allocate memory !!");
			excep_log.termination_flag = 'Y';
			sprintf(prog_log.remarks, "get_existing_classes : cannot allocate memory !!");
			log_error(ctx);
			return MALLOC_ERROR;
		}

		memset(curr_class, 0, sizeof(LI_REV_CLASS_T));

		if(hv_licclass_ind == 0)
			strcpy(curr_class->license_class, hv_licclass);
		if(hv_licusage_ind == 0)
			strcpy(curr_class->license_class_usage, hv_licusage);

		/* class_index indicates whether it is CLASS 1 or 2 or 3 for PSV/GDL licenses	*/
		curr_class->class_index = count + 1;

	#ifdef DEBUG
			userlog("get_existing_classes : class %s", curr_class->license_class);
			userlog("get_existing_classes : usage %s", curr_class->license_class_usage);
			userlog("get_existing_classes : class_index %d", curr_class->class_index);
			userlog("get_existing_classes : curr class node %X", curr_class);
	#endif

		if (count == 0)
		{
			*class_ptr = curr_class;
		}
		else
		{
			prev_class->next_class = curr_class;
		}
			
		prev_class = curr_class;

		count++;
	}

	/* EXEC SQL CLOSE EXIST_CLASS_USAGE; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 18;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3230;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog("get_existing_classes : Closing cursor EXIST_CLASS_USAGE failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"get_existing_classes : Closing cursor EXIST_CLASS_USAGE failed ");
		sprintf(excep_log.error_msg, "get_existing_classes : Closing cursor EXIST_CLASS_USAGE failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
				
		return CURSOR_CLOSE_ERROR;
	}

	if(count == 0)
	{
		/* No existing classes */
#ifdef DEBUG
		userlog("get_existing_classes :No existing classes for license type %s, new one is the first one", hv_lictype);
#endif
	}

#ifdef DEBUG
		userlog("get_existing_classes : Starting node of class list returned is %X", *class_ptr);
#endif

	return GMPC_GOOD;

}