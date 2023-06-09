
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
           char  filnam[22];
};
static const struct sqlcxp sqlfpn =
{
    21,
    ".\\CreateAapplnt_DB.pc"
};


static unsigned int sqlctx = 133936075;


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
            void  *sqhstv[74];
   unsigned int   sqhstl[74];
            int   sqhsts[74];
            void  *sqindv[74];
            int   sqinds[74];
   unsigned int   sqharm[74];
   unsigned int   *sqharc[74];
   unsigned short  sqadto[74];
   unsigned short  sqtdso[74];
} sqlstm = {12,74};

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

 static const char *sq0040 = 
"select LICTYPE ,LICCLASS ,LICUSAGECODE ,TO_CHAR(LICVALIDSTARTDATE,'DDMMYYYY'\
) ,TO_CHAR(LICVALIDENDDATE,'DDMMYYYY') ,BLFLAG ,HANDICVEHREGNO ,VERIFIEDSTATUS\
 ,PHYRESTRICTCODE ,RECORDSERNO  from JPJ_LIC_INFO where (LICIDNO=:b0:b1 and OW\
NERCAT=:b2:b3)           ";

 static const char *sq0059 = 
"select PASSPORTDOCTYPE ,PASSPORTNO ,TO_CHAR(PASSPORTEXPDATE,'DDMMYYYY') ,PAS\
SPORTNAME ,PASSPORTIDTYPE ,IDNO ,TO_CHAR(BIRTHDATE,'DDMMYYYY') ,GENDER  from I\
MM_INFO where KPTNO=:b0:b1           ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4274,178,0,0,
5,0,0,1,164,0,4,190,0,0,7,1,0,1,0,2,97,0,0,2,3,0,0,2,97,0,0,2,97,0,0,2,9,0,0,2,
9,0,0,1,97,0,0,
48,0,0,2,219,0,3,235,0,0,9,9,0,1,0,1,97,0,0,1,3,0,0,1,97,0,0,1,1,0,0,1,97,0,0,
1,9,0,0,1,97,0,0,1,9,0,0,1,9,0,0,
99,0,0,3,676,0,3,557,0,0,29,29,0,1,0,1,97,0,0,1,3,0,0,1,3,0,0,1,9,0,0,1,97,0,0,
1,1,0,0,1,97,0,0,1,97,0,0,1,9,0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,3,0,0,1,97,0,0,1,
97,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,97,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,97,0,
0,1,1,0,0,1,1,0,0,1,97,0,0,1,1,0,0,1,1,0,0,
230,0,0,4,639,0,5,582,0,0,28,28,0,1,0,1,3,0,0,1,3,0,0,1,9,0,0,1,97,0,0,1,1,0,0,
1,97,0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,1,0,0,1,
1,0,0,1,1,0,0,1,1,0,0,1,97,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,97,0,0,1,1,0,0,1,97,0,
0,1,1,0,0,1,1,0,0,1,97,0,0,1,97,0,0,
357,0,0,5,101,0,3,668,0,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
380,0,0,6,180,0,3,829,0,0,8,8,0,1,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,97,0,0,
427,0,0,7,259,0,3,1014,0,0,11,11,0,1,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,
0,0,1,97,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,1,0,0,1,97,0,0,
486,0,0,8,62,0,4,1054,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
509,0,0,9,97,0,5,1164,0,0,4,4,0,1,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,
540,0,0,10,104,0,5,1303,0,0,3,3,0,1,0,1,4,0,0,1,3,0,0,1,97,0,0,
567,0,0,11,113,0,3,1312,0,0,5,5,0,1,0,1,97,0,0,1,3,0,0,1,97,0,0,1,4,0,0,1,3,0,
0,
602,0,0,12,88,0,4,1363,0,0,3,2,0,1,0,2,4,0,0,1,97,0,0,1,3,0,0,
629,0,0,13,221,0,3,1607,0,0,9,9,0,1,0,1,97,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,9,0,
0,1,9,0,0,1,9,0,0,1,9,0,0,1,97,0,0,
680,0,0,14,281,0,3,1809,0,0,12,12,0,1,0,1,97,0,0,1,3,0,0,1,9,0,0,1,97,0,0,1,4,
0,0,1,1,0,0,1,3,0,0,1,1,0,0,1,9,0,0,1,97,0,0,1,9,0,0,1,9,0,0,
743,0,0,15,864,0,3,2293,0,0,37,37,0,1,0,1,97,0,0,1,9,0,0,1,9,0,0,1,97,0,0,1,1,
0,0,1,9,0,0,1,97,0,0,1,97,0,0,1,9,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,9,0,0,1,3,0,
0,1,97,0,0,1,97,0,0,1,9,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,9,0,0,1,3,0,0,1,3,0,0,
1,3,0,0,1,97,0,0,1,9,0,0,1,97,0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,1,9,0,0,1,9,0,0,1,1,0,0,1,1,0,0,
906,0,0,16,593,0,3,2649,0,0,24,24,0,1,0,1,97,0,0,1,9,0,0,1,97,0,0,1,9,0,0,1,1,
0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,3,0,0,1,9,0,0,1,3,0,0,1,9,0,0,1,
3,0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,97,0,0,1,97,0,0,1,1,0,0,1,1,0,0,1,97,0,0,1,3,
0,0,
1017,0,0,17,233,0,3,2812,0,0,8,8,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,
97,0,0,1,97,0,0,1,1,0,0,1,9,0,0,
1064,0,0,18,195,0,3,2947,0,0,6,6,0,1,0,1,97,0,0,1,97,0,0,1,9,0,0,1,97,0,0,1,97,
0,0,1,1,0,0,
1103,0,0,19,66,0,4,3040,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
1126,0,0,20,74,0,4,3063,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
1149,0,0,21,221,0,3,3153,0,0,7,7,0,1,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,9,
0,0,1,97,0,0,1,9,0,0,
1192,0,0,22,146,0,3,3267,0,0,4,4,0,1,0,1,97,0,0,1,3,0,0,1,9,0,0,1,9,0,0,
1223,0,0,23,706,0,4,3516,0,0,26,1,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,2,1,0,0,2,1,
0,0,2,97,0,0,2,1,0,0,2,1,0,0,2,97,0,0,2,1,0,0,2,1,0,0,2,9,0,0,2,9,0,0,2,1,0,0,
2,97,0,0,2,3,0,0,2,1,0,0,2,97,0,0,2,97,0,0,2,9,0,0,2,97,0,0,2,97,0,0,2,97,0,0,
2,97,0,0,2,1,0,0,1,97,0,0,
1342,0,0,24,76,0,4,3563,0,0,3,1,0,1,0,2,97,0,0,2,97,0,0,1,97,0,0,
1369,0,0,25,117,0,4,4007,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
1392,0,0,26,117,0,4,4059,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
1415,0,0,27,100,0,4,4107,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
1438,0,0,28,140,0,4,4135,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
1461,0,0,29,83,0,4,4144,0,0,2,1,0,1,0,1,97,0,0,2,97,0,0,
1484,0,0,30,83,0,4,4152,0,0,2,1,0,1,0,1,97,0,0,2,97,0,0,
1507,0,0,31,1758,0,3,4289,0,0,68,68,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,1,0,0,1,
97,0,0,1,1,0,0,1,1,0,0,1,97,0,0,1,1,0,0,1,1,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,3,0,0,1,97,0,0,1,9,
0,0,1,9,0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,1,0,0,1,97,0,0,1,97,0,0,1,1,0,0,1,1,0,0,
1,97,0,0,1,1,0,0,1,3,0,0,1,97,0,0,1,1,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,
1,97,0,0,1,9,0,0,1,97,0,0,1,97,0,0,1,9,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,
1,3,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,1,0,0,1,97,0,0,1,1,0,0,1,
1,0,0,1,1,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,97,0,0,
1794,0,0,32,61,0,5,4359,0,0,2,2,0,1,0,1,3,0,0,1,97,0,0,
1817,0,0,33,113,0,4,4391,0,0,4,3,0,1,0,2,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,
1848,0,0,34,76,0,5,4456,0,0,3,3,0,1,0,1,97,0,0,1,1,0,0,1,97,0,0,
1875,0,0,35,72,0,5,4465,0,0,3,3,0,1,0,1,97,0,0,1,1,0,0,1,97,0,0,
1902,0,0,36,671,0,6,5029,0,0,33,33,0,1,0,1,97,0,0,1,97,0,0,1,95,0,0,1,3,0,0,1,
95,0,0,1,3,0,0,1,95,0,0,1,3,0,0,1,95,0,0,1,3,0,0,1,95,0,0,1,3,0,0,1,95,0,0,1,3,
0,0,1,95,0,0,1,3,0,0,1,95,0,0,1,3,0,0,1,95,0,0,1,3,0,0,1,95,0,0,1,3,0,0,1,95,0,
0,1,3,0,0,1,95,0,0,1,3,0,0,1,95,0,0,1,3,0,0,1,95,0,0,1,3,0,0,2,1,0,0,2,3,0,0,2,
9,0,0,
2049,0,0,37,404,0,5,5254,0,0,19,19,0,1,0,1,3,0,0,1,9,0,0,1,3,0,0,1,3,0,0,1,1,0,
0,1,3,0,0,1,9,0,0,1,3,0,0,1,3,0,0,1,1,0,0,1,3,0,0,1,3,0,0,1,9,0,0,1,3,0,0,1,9,
0,0,1,9,0,0,1,1,0,0,1,9,0,0,1,97,0,0,
2140,0,0,38,214,0,4,5375,0,0,8,2,0,1,0,2,97,0,0,2,3,0,0,2,3,0,0,2,97,0,0,2,1,0,
0,2,9,0,0,1,9,0,0,1,1,0,0,
2187,0,0,39,253,0,3,5419,0,0,11,11,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,9,0,0,1,
1,0,0,1,3,0,0,1,3,0,0,1,97,0,0,1,1,0,0,1,1,0,0,1,9,0,0,
2246,0,0,40,257,0,9,5538,0,0,2,2,0,1,0,1,9,0,0,1,1,0,0,
2269,0,0,40,0,0,13,5562,0,0,10,0,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,
97,0,0,2,1,0,0,2,97,0,0,2,1,0,0,2,1,0,0,2,3,0,0,
2324,0,0,40,0,0,15,5576,0,0,0,0,0,1,0,
2339,0,0,41,321,0,3,5628,0,0,12,12,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,
97,0,0,1,97,0,0,1,1,0,0,1,97,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,3,0,0,
2402,0,0,40,0,0,15,5643,0,0,0,0,0,1,0,
2417,0,0,40,0,0,15,5675,0,0,0,0,0,1,0,
2432,0,0,42,87,0,4,5695,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
2455,0,0,43,85,0,5,5702,0,0,1,1,0,1,0,1,97,0,0,
2474,0,0,44,87,0,4,5739,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
2497,0,0,45,73,0,4,5866,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
2520,0,0,46,189,0,4,5913,0,0,4,2,0,1,0,2,97,0,0,2,97,0,0,1,97,0,0,1,97,0,0,
2551,0,0,47,92,0,4,5942,0,0,3,2,0,1,0,1,97,0,0,1,97,0,0,2,3,0,0,
2578,0,0,48,81,0,4,5967,0,0,2,1,0,1,0,1,97,0,0,2,97,0,0,
2601,0,0,49,66,0,2,6010,0,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
2624,0,0,50,191,0,4,6045,0,0,5,2,0,1,0,2,97,0,0,2,97,0,0,2,1,0,0,1,97,0,0,1,97,
0,0,
2659,0,0,51,172,0,4,6086,0,0,5,3,0,1,0,1,97,0,0,2,3,0,0,2,97,0,0,1,97,0,0,1,97,
0,0,
2694,0,0,52,106,0,4,6124,0,0,4,3,0,1,0,2,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,
2725,0,0,53,106,0,5,6156,0,0,4,4,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,
2756,0,0,54,256,0,3,6206,0,0,9,9,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,
97,0,0,1,97,0,0,1,1,0,0,1,1,0,0,1,3,0,0,
2807,0,0,55,172,0,5,6240,0,0,5,5,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,
0,0,
2842,0,0,56,157,0,5,6250,0,0,4,4,0,1,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,
2873,0,0,57,66,0,4,6286,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
2896,0,0,58,184,0,5,6299,0,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
2919,0,0,59,191,0,9,6386,0,0,1,1,0,1,0,1,97,0,0,
2938,0,0,59,0,0,13,6410,0,0,8,0,0,1,0,2,3,0,0,2,9,0,0,2,97,0,0,2,9,0,0,2,97,0,
0,2,9,0,0,2,97,0,0,2,1,0,0,
2985,0,0,59,0,0,15,6422,0,0,0,0,0,1,0,
3000,0,0,60,112,0,3,6484,0,0,4,4,0,1,0,1,97,0,0,1,97,0,0,1,1,0,0,1,97,0,0,
3031,0,0,59,0,0,15,6491,0,0,0,0,0,1,0,
3046,0,0,61,219,0,3,6551,0,0,8,8,0,1,0,1,97,0,0,1,3,0,0,1,9,0,0,1,97,0,0,1,9,0,
0,1,9,0,0,1,97,0,0,1,1,0,0,
3093,0,0,59,0,0,15,6561,0,0,0,0,0,1,0,
3108,0,0,59,0,0,15,6598,0,0,0,0,0,1,0,
3123,0,0,62,65,0,4,6675,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
3146,0,0,63,255,0,3,6795,0,0,5,5,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,1,9,0,0,1,9,
0,0,
3181,0,0,64,249,0,3,6814,0,0,10,10,0,1,0,1,97,0,0,1,3,0,0,1,97,0,0,1,1,0,0,1,
97,0,0,1,9,0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,97,0,0,
3236,0,0,65,64,0,4,6908,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
3259,0,0,66,130,0,3,6974,0,0,6,6,0,1,0,1,97,0,0,1,3,0,0,1,97,0,0,1,4,0,0,1,3,0,
0,1,1,0,0,
3298,0,0,67,88,0,4,7027,0,0,3,2,0,1,0,2,4,0,0,1,97,0,0,1,3,0,0,
3325,0,0,68,92,0,4,7064,0,0,3,2,0,1,0,2,4,0,0,1,97,0,0,1,3,0,0,
3352,0,0,69,161,0,3,7247,0,0,7,7,0,1,0,1,97,0,0,1,3,0,0,1,97,0,0,1,4,0,0,1,4,0,
0,1,3,0,0,1,1,0,0,
3395,0,0,70,196,0,3,7405,0,0,8,8,0,1,0,1,97,0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,1,0,
0,1,9,0,0,1,97,0,0,1,97,0,0,
3442,0,0,71,1582,0,3,66,1,0,62,62,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,3,0,0,1,9,
0,0,1,9,0,0,1,1,0,0,1,3,0,0,1,1,0,0,1,9,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,9,0,0,1,
1,0,0,1,3,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,1,0,0,1,9,0,0,1,9,0,
0,1,9,0,0,1,9,0,0,1,1,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
3705,0,0,72,48,0,4,409,1,0,2,1,0,1,0,2,3,0,0,1,9,0,0,
3728,0,0,73,38,0,2,414,1,0,1,1,0,1,0,1,9,0,0,
3747,0,0,74,2036,0,3,1220,1,0,74,74,0,1,0,1,9,0,0,1,3,0,0,1,9,0,0,1,9,0,0,1,9,
0,0,1,1,0,0,1,1,0,0,1,9,0,0,1,1,0,0,1,1,0,0,1,9,0,0,1,1,0,0,1,1,0,0,1,9,0,0,1,
1,0,0,1,1,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
1,9,0,0,1,9,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,1,0,0,1,3,
0,0,1,1,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,9,0,0,1,1,0,0,1,3,0,0,1,9,0,
0,1,97,0,0,1,97,0,0,1,3,0,0,1,9,0,0,1,9,0,0,1,1,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,1,0,0,1,9,0,0,1,9,0,0,
1,3,0,0,1,3,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,1,0,0,1,97,0,0,1,9,0,0,1,1,0,
0,1,97,0,0,1,97,0,0,
4058,0,0,75,51,0,4,1545,1,0,2,1,0,1,0,2,3,0,0,1,9,0,0,
4081,0,0,76,41,0,2,1549,1,0,1,1,0,1,0,1,9,0,0,
4100,0,0,77,537,0,3,1685,1,0,25,25,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,97,
0,0,1,3,0,0,1,9,0,0,1,1,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,1,0,0,1,1,0,0,1,9,0,0,1,
97,0,0,1,9,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,1,0,0,1,97,0,0,1,97,0,0,1,9,0,0,1,
9,0,0,1,9,0,0,
4215,0,0,78,111,0,3,1801,1,0,5,5,0,1,0,1,97,0,0,1,3,0,0,1,97,0,0,1,4,0,0,1,3,0,
0,
4250,0,0,79,201,0,3,1968,1,0,9,9,0,1,0,1,97,0,0,1,97,0,0,1,9,0,0,1,1,0,0,1,97,
0,0,1,97,0,0,1,9,0,0,1,9,0,0,1,9,0,0,
4301,0,0,80,260,0,3,2165,1,0,10,10,0,1,0,1,97,0,0,1,3,0,0,1,4,0,0,1,4,0,0,1,4,
0,0,1,1,0,0,1,1,0,0,1,97,0,0,1,9,0,0,1,9,0,0,
4356,0,0,81,63,0,4,5234,1,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
4379,0,0,82,64,0,4,5247,1,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
4402,0,0,83,301,0,3,5256,1,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
4425,0,0,84,380,0,3,5277,1,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
4448,0,0,85,63,0,4,5300,1,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
4471,0,0,86,57,0,5,5321,1,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
4494,0,0,87,62,0,4,5655,1,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
4517,0,0,88,241,0,3,5680,1,0,1,1,0,1,0,1,97,0,0,
};


/* $Header$ */
/********************************************************************************/
/* Filename    : create_applnt.pc												*/
/* Author      : Amit Sangrulkar												*/
/* Description : This file contains database routines for the service           */
/*               CREATE_APPLNT. 												*/
/********************************************************************************/

/* Include files */

#include <stdio.h>
#include <string.h>


#include <time.h>
#include <string.h>
#include <stdlib.h>


#define LOG_DEFINED
#include "gscbdef.h"
#include "gscbio.h"
#include "gscblog.h"
#include "gscblookupdef.h"
#include "KPPdef.h"
#include "KPPstruct.h"
#include "KPPproto.h"
#include "jpn_update_io.h"
#include "pdrm_update_io.h"
#include "jpj_update_io.h"
#include "imm_update_io.h"
#include "AfisUpdate_IO.h"
#include "generate_kpt_io.h"
#include "create_applnt_io.h"
#define LOG_DEFINED 
//#include "create_applnt.h"
//#include "userlog.h"
#define SQLCA_STORAGE_CLASS extern

extern "C" void userlog(char* szFormatString, ...);
#include <sqlca.h>

int call_jpn_update(CREATE_APPLNT_REQ_T *,void * ctx);
int call_jpj_update(CREATE_APPLNT_REQ_T *,void * ctx);
int call_imm_update(CREATE_APPLNT_REQ_T *,void * ctx);
int call_pdrm_summon_upd(CREATE_APPLNT_REQ_T *,void * ctx);
int call_afis_update(CREATE_APPLNT_REQ_T *,void * ctx);
int call_generate_kpt(CREATE_APPLNT_REQ_T *,void * ctx);

int insert_appl_history (char *application_id, char *,void * ctx);
int update_appl_info(CREATE_APPLNT_REQ_T *, int,void * ctx);
int insert_appl_proc_recs(APPL_PROC_T *, char *, int ,void * ctx);
int insert_txn_recs(APPL_TXN_T *, char *, int, int *,void * ctx);
int insert_txn_fees(APPL_TXN_FEE_T *, HEADER_T , int ,void * ctx);
int insert_outstand_fee_info(APPL_OUTSTAND_TXN_FEE_T *, HEADER_T, int, char *,void * ctx);
int insert_fee_reduce_info(APPL_FEE_REDUCTION_T *, char *, int ,void * ctx);
int insert_doc_srno_info(APPL_DOC_SRNO_T *, char *, int, char *,void * ctx);
int insert_sup_remarks(SUP_REMARKS_T *, char *, int ,void * ctx);
//int insert_sup_remarks(SUP_REMARKS_T *, char *, int );
int insert_sponsor_details(SPONSOR_DETAILS_T *, char *, int,void * ctx );
int insert_txn_summons(APPL_TXN_SUMMONS_T *, char *, int ,void * ctx);
int insert_card_status(CREATE_APPLNT_REQ_T *, char *, APPNT_JPN_INFO_T *,int *lcard_version,void * ctx);
int insert_into_appnt_info(APPNT_JPN_INFO_T *, CREATE_APPLNT_REQ_T *, int, int,void * ctx);
int insert_into_appnt_image(APPNT_JPN_IMG_T *, CREATE_APPLNT_REQ_T *,void * ctx);
int insert_into_appnt_jpj_info(CREATE_APPLNT_REQ_T *,void * ctx);
int insert_into_appnt_jpj_lic_info(char *, CREATE_APPLNT_REQ_T *,void * ctx);
int change_jpj_update_flag_for_lic_info(char *, void * ctx);
int insert_new_lic_info(char *, TXN_DETAILS_T *,void * ctx);
int insert_imm_info(CREATE_APPLNT_REQ_T *, APPNT_PP_INFO_T *,void * ctx);
int update_card_status(CREATE_APPLNT_REQ_T *,void * ctx);
int get_license_date_info(char *, char *, char , char *,LICENSE_DATE_INFO_T *,void * ctx);
int update_disputed_info(char *,void * ctx);
int insert_jpj_summons(APPNT_JPJ_SUMMONS_T *, char *, int,void * ctx);
int insert_lic_revok_info(APPNT_LIC_REVOKE_T *, char *, int,void * ctx);
int insert_lic_susp_info(APPNT_LIC_SUSP_T *, char *, int,void * ctx);
int insert_pdrm_summons(APPNT_PDRM_SUMMONS_T *, char *, char *, int,void * ctx);
int upd_old_txn_pay_info(APPL_OLD_TXN_PAY_T *, char *, int,void * ctx);
int insert_abt_list(ABT_LIST_T abt_lst,void * ctx);

int insert_appl_missed_opex(APPL_MISSED_OPEX_T *, char * ,void * ctx);
int insert_jpn_info(JPN_INFO_T *,void * ctx);
int insert_jpn_sb_info(JPN_SB_INFO_T *,void * ctx);
int insert_into_outstand_txn_fee_table(OUTSTAND_TXN_FEE_T *, char *, int,void * ctx );

int insert_for_clms(CREATE_APPLNT_REQ_T *, int lcversion,void * ctx); // included for IJPN on 10/8/2005

void print_request(CREATE_APPLNT_REQ_T *req);

int  appnt_jpj_and_lic_info(CREATE_APPLNT_REQ_T *,void * ctx); // added this on 21/12/2006


extern "C" int calculate_lic_validity_date(int , char *, char *,void * ctx);
extern "C" int get_summons_agency(char *, char *, char *,void * ctx);
extern "C" int update_appl_stat(char *, char ,void * ctx);
extern "C" int perform_common_jpj_checks(CREATE_APPLNT_REQ_T *,int , char *,void * ctx);
extern "C" int check_problem_record(char *, int *,void * ctx);
extern "C" int insert_into_legacy_request(LEGACY_REQUEST_T ,void * ctx);
extern "C" int insert_into_legacy_request_jpn(LEGACY_REQUEST_T , char applstat,void * ctx);
extern "C" int update_agency_on_chip(char *, char *, HEADER_T,void * ctx);
extern "C" int fetch_txncode(char *, TXN_DETAILS_T** , int *,void * ctx);
extern "C" int check_dl_info(char *, char *,void * ctx );
extern "C" int check_pp_info(char *, char*,void * ctx );
extern "C" int get_afis_flag(char *, char *,void * ctx);
extern "C" int insert_into_afis_refire(char *, char *,void * ctx);
extern "C" int insert_into_card_blacklist(CREATE_APPLNT_REQ_T *, APPNT_JPN_INFO_T *,void * ctx);
extern "C" int get_agency_on_chip(char *, char *,void * ctx);
extern "C" int insert_old_appl_history(APPL_HISTORY_T *, char *, char *, int , char *, char,void * ctx);
extern "C" int delete_old_class(char *, TXN_DETAILS_T *, int*,void * ctx);
extern "C" int set_card_expiry_date(char *, char *, int, char *,void * ctx);
extern "C" int chk_appl_status(char *kptno, char* applid,void * ctx);
extern "C" int get_appl_status(char *, char *,char *,void * ctx);

// added this function on 17/10/2006 to avoid reprocessing of already issued applications
extern "C" int check_appl_card_status(char *applid,int *appl_proc,void * ctx);

extern "C" int update_cardstatus_to_retained(CREATE_APPLNT_REQ_T *,void * ctx); //JRS-108 added this on 18/12/2007

#import  "JpnUpdate.tlb" no_namespace
//#import  "JpjUpdate.tlb" no_namespace
#import  "ImmUpdate.tlb" no_namespace
#import  "PdrmUpdate.tlb" no_namespace
#import  "GenerateKpt.tlb" no_namespace


/*#import  "AfisUpdate.tlb" no_namespace */

//extern char lic_delete_flag;
/* As per com+ requirement */
char lic_delete_flag = '\0';

//PROG_ACCESS_LOG_T prog_log;
//APPL_EXCEP_LOG_T excep_log;
//TXN_LOG_T tran_log;

//EXEC SQL INCLUDE SQLCA;

/********************************************************************************/
/* Function name: insert_appl_history											*/
/* Description	: This function inserts old application info into				*/
/*				  APPL_HISTORY table											*/
/* Input		: Application id												*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_appl_history (char *application_id, char *current_long_name,void * ctx)
{	
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		char kpt_no[KPT_SIZE] = {0};
		short kpt_no_ind = -1;
		/* varchar user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id
 = {0};

		short user_id_ind = -1;
		/* varchar ws_id[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } ws_id
 = {0};

		short ws_id_ind = -1;
		char branch_code[BRANCH_CODE_SIZE] = {0};
		short branch_code_ind = -1;
		int proc_sr_no = 0 ;
		short proc_sr_no_ind = -1;
		char appl_date[DATE_SIZE] = {0};
		short appl_date_ind = -1;
		char appl_stat = 0;
		short appl_stat_ind = -1;
		/* varchar curr_long_name[LONG_NAME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[151]; } curr_long_name
 = {0};

		short curr_long_name_ind = -1;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	/* Populate the variables	*/

	strcpy(appl_id, application_id);
	appl_stat = COMPLETED_GSC;
	appl_stat_ind = 0;

	if (0 != strcmp(current_long_name, ""))
	{
		strcpy((char*)curr_long_name.arr, current_long_name);
		curr_long_name_ind = 0;
		setlen(curr_long_name);
	}

#ifdef DEBUG
	userlog("insert_appl_history : Appl id - %s", appl_id);
#endif

	/* EXEC SQL SELECT TO_CHAR(APPLDATE, 'DDMMYYYY'), PROCSERNO,
				KPTNO, BRANCHCODE, USERID, WSID
			 INTO :appl_date:appl_date_ind, :proc_sr_no:proc_sr_no_ind,
				  :kpt_no:kpt_no_ind, :branch_code:branch_code_ind, :user_id:user_id_ind,
				  :ws_id:ws_id_ind
			 FROM APPLICATION
			 WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 7;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select TO_CHAR(APPLDATE,'DDMMYYYY') ,PROCSERNO ,KPTNO ,BRANC\
HCODE ,USERID ,WSID into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11  from APP\
LICATION where APPLID=:b12";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )5;
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
 sqlstm.sqhstv[1] = (         void  *)&proc_sr_no;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&proc_sr_no_ind;
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
 sqlstm.sqhstv[3] = (         void  *)branch_code;
 sqlstm.sqhstl[3] = (unsigned int  )7;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&branch_code_ind;
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
 sqlstm.sqhstv[5] = (         void  *)&ws_id;
 sqlstm.sqhstl[5] = (unsigned int  )18;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&ws_id_ind;
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



	if(SQLCODE != 0)
	{
#ifdef DEBUG
		userlog(" insert_appl_history : Select from APPLICATION failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"insert_appl_history: Select from APPLICATION failed");
		sprintf(excep_log.error_msg, "insert_appl_history: Select from APPLICATION failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}

#ifdef DEBUG
	userlog("insert_appl_history : KPT no - %s", kpt_no);
	userlog("insert_appl_history : KPT no ind - %d", kpt_no_ind);
#endif
	

	if (0 ==  user_id_ind)
		setnull(user_id);

	if (0 ==  ws_id_ind)
		setnull(ws_id);

#ifdef DEBUG
	userlog(" insert_appl_history : User id - %s", user_id.arr);
	userlog(" insert_appl_history : WS id - %s", ws_id.arr);
	userlog(" insert_appl_history : Branch code - %s", branch_code);
	userlog(" insert_appl_history : Process sr no - %d", proc_sr_no);
	userlog(" insert_appl_history : Appl date - %s", appl_date);
	userlog(" insert_appl_history : Appl stat - %c", appl_stat);
	userlog(" insert_appl_history : Current long name - %s", curr_long_name.arr);
#endif

	/* EXEC SQL INSERT INTO APPL_HISTORY(APPLID, PROCSERNO, APPLDATE,
							APPLSTAT, KPTNO, CURRLONGNAME, BRANCHCODE,
							USERID, WSID, TIMESTAMP)
				VALUES (:appl_id, :proc_sr_no:proc_sr_no_ind,
					TO_DATE(:appl_date:appl_date_ind, 'DDMMYYYY'), :appl_stat:appl_stat_ind,
					:kpt_no:kpt_no_ind, :curr_long_name:curr_long_name_ind, :branch_code:branch_code_ind,
					:user_id:user_id_ind, :ws_id:ws_id_ind, SYSDATE); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into APPL_HISTORY (APPLID,PROCSERNO,APPLDATE,APPLSTAT\
,KPTNO,CURRLONGNAME,BRANCHCODE,USERID,WSID, timestamp ) values (:b0,:b1:b2,TO_\
DATE(:b3:b4,'DDMMYYYY'),:b5:b6,:b7:b8,:b9:b10,:b11:b12,:b13:b14,:b15:b16,SYSDA\
TE)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )48;
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
 sqlstm.sqhstv[1] = (         void  *)&proc_sr_no;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&proc_sr_no_ind;
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
 sqlstm.sqhstv[3] = (         void  *)&appl_stat;
 sqlstm.sqhstl[3] = (unsigned int  )1;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&appl_stat_ind;
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
 sqlstm.sqhstv[5] = (         void  *)&curr_long_name;
 sqlstm.sqhstl[5] = (unsigned int  )153;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&curr_long_name_ind;
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
 sqlstm.sqhstv[8] = (         void  *)&ws_id;
 sqlstm.sqhstl[8] = (unsigned int  )18;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&ws_id_ind;
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
		userlog(" insert_appl_history : Insert into APPL_HISTORY failed : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"insert_appl_history: Insert into APPL_HISTORY failed");
		sprintf(excep_log.error_msg, "insert_appl_history: Insert into APPL_HISTORY failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return INSERT_ERROR;
	}

#ifdef DEBUG
	userlog(" insert_appl_history : Inserted into APPL_HISTORY successfully");
#endif

	return SUCCESS;

}
/********************************************************************************/
/* Function name: update_appl_info												*/
/* Description	: This function updates the application info into APPLICATION   */
/*				  table															*/
/* Input		: Request buffer of the service, Transaction type				*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int update_appl_info(CREATE_APPLNT_REQ_T *req, int transaction_type,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		char kpt_no[KPT_SIZE] = {0};
		short kpt_no_ind = -1;
		char owner_cat = 0;
		short owner_cat_ind = -1;
		int curr_proc_sr_no = 0;
		short curr_proc_sr_no_ind = -1;
		char appl_stage[APPL_STAGE_SIZE];
		short appl_stage_ind = -1;
		int appl_priority = 0;
		short appl_priority_ind = -1;
		/* varchar appl_remarks[REMARK_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[61]; } appl_remarks
 = {0};

		short appl_remarks_ind = -1;
		char collection_centre[BRANCH_CODE_SIZE] = {0};
		short collection_centre_ind = -1;
		char collector_kpt[KPT_SIZE] = {0};
		short collector_kpt_ind = -1;
		char collection_date[DATE_TIME_SIZE] = {0};
		short collection_date_ind  = -1;
		/* varchar temp_id[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } temp_id
 = {0};

		short temp_id_ind = -1;
		char lost_receipt_flag = 0;
		short lost_receipt_flag_ind  = -1;
		char qc_flag = 0;
		short qc_flag_ind = -1;
		char missed_opex_flag = 0;
		short missed_opex_flag_ind = -1;
		char summons_flag = 0;
		short summons_flag_ind = -1;
		char ssc_code[BRANCH_CODE_SIZE] = {0};
		short ssc_code_ind = -1;
		char summons_pay_flag = 0;
		short summons_pay_flag_ind  = -1;
		char photo_capture_flag = 0;
		short photo_capture_flag_ind  = -1;
		char card_lost_flag = 0;
		short card_lost_flag_ind = -1;
		/* varchar create_user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } create_user_id
 = {0};

		short create_user_id_ind = -1;
		/* varchar create_ws_id[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } create_ws_id
 = {0};

		short create_ws_id_ind = -1;
		char create_timestamp[DATE_TIME_SIZE] = {0};
		short create_timestamp_ind = -1;
		char prb_status = 0;
		short prb_status_ind  = -1;
		char appl_stat = 0;
		char branch_code[BRANCH_CODE_SIZE] = {0};
		short branch_code_ind = -1;
		char imm_expiry_date[DATE_SIZE] = {0};
		short imm_expiry_date_ind  = -1;
		char load_dl = 0;
		short load_dl_ind = -1;
		char pdl_renew_type = 0;
		short pdl_renew_type_ind = -1;

//Added by Amarjith on 9th Aug '04. JRS 144

		char contact_no[PHONE_SIZE] = {0};
		short contact_no_ind = -1;

//JRS 144
		

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	/* Populate the variables	*/

	strcpy(appl_id, req->header.application_id);

	if (0 != req->kpt_no[0])
	{
		strcpy(kpt_no, req->kpt_no);
		kpt_no_ind = 0;
	}

	if (0 != req->owner_cat)
	{
		owner_cat = req->owner_cat;
		owner_cat_ind = 0;
	}
	
	if (0 < req->curr_proc_sr_no)
	{
		curr_proc_sr_no = req->curr_proc_sr_no;
		curr_proc_sr_no_ind = 0;
	}
	
	if (0 != req->appl_stage[0])
	{
		strcpy(appl_stage, req->appl_stage);
		appl_stage_ind = 0;
	}
	
	
		appl_priority = req->appl_nature;
		appl_priority_ind = 0;

	
	if (0 != req->appl_remarks[0])
	{
		strcpy((char*)appl_remarks.arr, req->appl_remarks);
		appl_remarks_ind = 0;
		setlen(appl_remarks);
	}
	
	if (0 != req->collection_centre[0])
	{
		strcpy(collection_centre, req->collection_centre);
		collection_centre_ind = 0;
	}
	
	if (0 != req->collector_kpt[0])
	{
		strcpy(collector_kpt, req->collector_kpt);
		collector_kpt_ind = 0;
	}
	
	if (0 != req->collection_date[0])
	{
		strcpy(collection_date, req->collection_date);
		collection_date_ind = 0;
	}
	
	if (0 != req->temp_id[0])
	{
		strcpy((char*)temp_id.arr, req->temp_id);
		temp_id_ind = 0;
		setlen(temp_id);
	}
	
	if (0 != req->lost_receipt_flag)
	{
		lost_receipt_flag = req->lost_receipt_flag;
		lost_receipt_flag_ind = 0;
	}
	
	if (0 != req->qc_flag)
	{
		qc_flag = req->qc_flag;
		qc_flag_ind = 0;
	}
	
	if (0 != req->missed_opex_flag)
	{
		missed_opex_flag = req->missed_opex_flag;
		missed_opex_flag_ind = 0;
	}
	
	if (0 != req->summons_ind)
	{
		summons_flag = req->summons_ind;
		summons_flag_ind = 0;
	}
	
	if (0 != req->ssc_code[0])
	{
		strcpy(ssc_code, req->ssc_code);
		ssc_code_ind = 0;
	}

	if (0 != req->summons_pay_ind)
	{
		summons_pay_flag = req->summons_pay_ind;
		summons_pay_flag_ind = 0;
	}

	if (0 != req->photo_capture_flag)
	{
		photo_capture_flag = req->photo_capture_flag;
		photo_capture_flag_ind = 0;
	}

	if (0 != req->card_lost_ind)
	{
		card_lost_flag = req->card_lost_ind;
		card_lost_flag_ind = 0;
	}

	if (0 != req->create_user_id[0])
	{
		strcpy((char*)create_user_id.arr, req->create_user_id);
		create_user_id_ind = 0;
		setlen(create_user_id);
	}
	
	if (0 != req->create_ws_id[0])
	{
		strcpy((char*)create_ws_id.arr, req->create_ws_id);
		create_ws_id_ind = 0;
		setlen(create_ws_id);
	}
	
	if (0 != req->create_timestamp[0])
	{
		strcpy(create_timestamp, req->create_timestamp);
		create_timestamp_ind = 0;
	}

	if ('\0' != req->prb_status)
	{
		prb_status = req->prb_status;
		prb_status_ind = 0;
	}

	if ('\0' != req->imm_expiry_date[0])
	{
		strcpy(imm_expiry_date, req->imm_expiry_date);
		imm_expiry_date_ind = 0;
	}
	
	if ('\0' != req->load_dl_flag)
	{
		load_dl = req->load_dl_flag;
		load_dl_ind = 0;
	}
	
	if ('\0' != req->pdl_renew_type)
	{
		pdl_renew_type = req->pdl_renew_type;
		pdl_renew_type_ind = 0;
	}

//Added by Amarjith on 9th Aug '04. JRS 144.

	if(req->contact_no != '\0')
	{
		strcpy(contact_no, req->contact_no);
		contact_no_ind = 0;
	}

//JRS 144
	
#ifdef DEBUG
	userlog("update_appl_info : Application id - %s", appl_id);
	userlog("update_appl_info : KPT - %s", kpt_no);
	userlog("update_appl_info : Owner category - %c", owner_cat);
	userlog("update_appl_info : Current proc ser no - %d", curr_proc_sr_no);
	userlog("update_appl_info : Appl stage - %s", appl_stage);
	userlog("update_appl_info : Appl priority - %d", appl_priority);
	userlog("update_appl_info : Appl remarks - %s", appl_remarks.arr);
	userlog("update_appl_info : Collection centre - %s", collection_centre);
	userlog("update_appl_info : Collector KPT - %s", collector_kpt);
	userlog("update_appl_info : Collection date - %s", collection_date);
	userlog("update_appl_info : Temp id - %s", temp_id.arr);
	userlog("update_appl_info : Lost receipt flag - %c", lost_receipt_flag);
	userlog("update_appl_info : QC flag - %c", qc_flag);
	userlog("update_appl_info : Missed opex flag - %c", missed_opex_flag);
	userlog("update_appl_info : Summons flag - %c", summons_flag);
	userlog("update_appl_info : SSC code - %s", ssc_code);
	userlog("update_appl_info : Summons pay ind - %c", summons_pay_flag);
	userlog("update_appl_info : Photo capture flag - %c", photo_capture_flag);
	userlog("update_appl_info : Card lost ind - %c", card_lost_flag);
	userlog("update_appl_info : User id - %s", create_user_id.arr);
	userlog("update_appl_info : WS id - %s", create_ws_id.arr);
	userlog("update_appl_info : create_timestamp_ind - %d", create_timestamp_ind);
	userlog("update_appl_info : Timestamp - %s", create_timestamp);
	userlog("update_appl_info : PRB status - %c", prb_status);
	userlog("update_appl_info : Transaction type - %d", transaction_type);
	userlog("update_appl_info : IMM expiry date - %s", imm_expiry_date);
	userlog("update_appl_info : Load DL flag - %c", load_dl);
	userlog("update_appl_info : PDL renew type - %c", pdl_renew_type);
	userlog("update_appl_info : Contact Number is: %s", contact_no);
	
#endif

	if (transaction_type == TXN_MISC && req->photo_capture_flag == NO)
	{
		appl_stat = INITIATED;

		if (0 != req->header.branch_code[0])
		{
			strcpy(branch_code, req->header.branch_code);
			branch_code_ind = 0;
		}

		/* EXEC SQL INSERT INTO APPLICATION (APPLID, APPLDATE, APPLPRIORITY, PROCSERNO, TEMPORARYID,
			KPTNO, OWNERCAT, COLLCENTER, COLLKPTNO, APPLREMARKS, BRANCHCODE, USERID, WSID, 
			TIMESTAMP, APPLSTAGE, LOSTRECEIPTFLAG, QCFLAG, MISSEDOPEXFLAG, SUMMIND, 
			SSCBRANCHCODE, PHOTOCAPTURE, SUMMPAYMIND, LOSSCARDIND, CARDCOLLDATE, 
			PRBSTATUS, APPLSTAT, IMMEXPIRYDATE, LOADDL, PDLRENEWTYPE)
			VALUES (:appl_id, SYSDATE, :appl_priority:appl_priority_ind, :curr_proc_sr_no:curr_proc_sr_no_ind,
					:temp_id:temp_id_ind, :kpt_no:kpt_no_ind, :owner_cat:owner_cat_ind, 
					:collection_centre:collection_centre_ind, :collector_kpt:collector_kpt_ind,
					:appl_remarks:appl_remarks_ind, :branch_code:branch_code_ind, :create_user_id:create_user_id_ind, 
					:create_ws_id:create_ws_id_ind, DECODE(:create_timestamp_ind,0,TO_DATE(:create_timestamp, 'DDMMYYYY HH24MISS'),-1,SYSDATE),
					:appl_stage:appl_stage_ind, :lost_receipt_flag:lost_receipt_flag_ind, :qc_flag:qc_flag_ind,
					:missed_opex_flag:missed_opex_flag_ind, :summons_flag:summons_flag_ind,
					:ssc_code:ssc_code_ind, :photo_capture_flag:photo_capture_flag_ind, 
					:summons_pay_flag:summons_pay_flag_ind, :card_lost_flag:card_lost_flag_ind,
					TO_DATE(:collection_date:collection_date_ind, 'DDMMYYYY'), :prb_status:prb_status_ind,
					:appl_stat, TO_DATE(:imm_expiry_date:imm_expiry_date_ind, 'DDMMYYYY'),
					:load_dl:load_dl_ind, :pdl_renew_type:pdl_renew_type_ind); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 29;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPLICATION (APPLID,APPLDATE,APPLPRIORITY,PROCS\
ERNO,TEMPORARYID,KPTNO,OWNERCAT,COLLCENTER,COLLKPTNO,APPLREMARKS,BRANCHCODE,US\
ERID,WSID, timestamp ,APPLSTAGE,LOSTRECEIPTFLAG,QCFLAG,MISSEDOPEXFLAG,SUMMIND,\
SSCBRANCHCODE,PHOTOCAPTURE,SUMMPAYMIND,LOSSCARDIND,CARDCOLLDATE,PRBSTATUS,APPL\
STAT,IMMEXPIRYDATE,LOADDL,PDLRENEWTYPE) values (:b0,SYSDATE,:b1:b2,:b3:b4,:b5:\
b6,:b7:b8,:b9:b10,:b11:b12,:b13:b14,:b15:b16,:b17:b18,:b19:b20,:b21:b22,DECODE\
(:b23,0,TO_DATE(:b24,'DDMMYYYY HH24MISS'),(-1),SYSDATE),:b25:b26,:b27:b28,:b29\
:b30,:b31:b32,:b33:b34,:b35:b36,:b37:b38,:b39:b40,:b41:b42,TO_DATE(:b43:b44,'D\
DMMYYYY'),:b45:b46,:b47,TO_DATE(:b48:b49,'DDMMYYYY'),:b50:b51,:b52:b53)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )99;
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
  sqlstm.sqhstv[1] = (         void  *)&appl_priority;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&appl_priority_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&curr_proc_sr_no;
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&curr_proc_sr_no_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&temp_id;
  sqlstm.sqhstl[3] = (unsigned int  )18;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&temp_id_ind;
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
  sqlstm.sqhstv[5] = (         void  *)&owner_cat;
  sqlstm.sqhstl[5] = (unsigned int  )1;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&owner_cat_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)collection_centre;
  sqlstm.sqhstl[6] = (unsigned int  )7;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&collection_centre_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)collector_kpt;
  sqlstm.sqhstl[7] = (unsigned int  )13;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&collector_kpt_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&appl_remarks;
  sqlstm.sqhstl[8] = (unsigned int  )63;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&appl_remarks_ind;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)branch_code;
  sqlstm.sqhstl[9] = (unsigned int  )7;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)&branch_code_ind;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&create_user_id;
  sqlstm.sqhstl[10] = (unsigned int  )11;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)&create_user_id_ind;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)&create_ws_id;
  sqlstm.sqhstl[11] = (unsigned int  )18;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)&create_ws_id_ind;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqhstv[12] = (         void  *)&create_timestamp_ind;
  sqlstm.sqhstl[12] = (unsigned int  )sizeof(short);
  sqlstm.sqhsts[12] = (         int  )0;
  sqlstm.sqindv[12] = (         void  *)0;
  sqlstm.sqinds[12] = (         int  )0;
  sqlstm.sqharm[12] = (unsigned int  )0;
  sqlstm.sqadto[12] = (unsigned short )0;
  sqlstm.sqtdso[12] = (unsigned short )0;
  sqlstm.sqhstv[13] = (         void  *)create_timestamp;
  sqlstm.sqhstl[13] = (unsigned int  )16;
  sqlstm.sqhsts[13] = (         int  )0;
  sqlstm.sqindv[13] = (         void  *)0;
  sqlstm.sqinds[13] = (         int  )0;
  sqlstm.sqharm[13] = (unsigned int  )0;
  sqlstm.sqadto[13] = (unsigned short )0;
  sqlstm.sqtdso[13] = (unsigned short )0;
  sqlstm.sqhstv[14] = (         void  *)appl_stage;
  sqlstm.sqhstl[14] = (unsigned int  )4;
  sqlstm.sqhsts[14] = (         int  )0;
  sqlstm.sqindv[14] = (         void  *)&appl_stage_ind;
  sqlstm.sqinds[14] = (         int  )0;
  sqlstm.sqharm[14] = (unsigned int  )0;
  sqlstm.sqadto[14] = (unsigned short )0;
  sqlstm.sqtdso[14] = (unsigned short )0;
  sqlstm.sqhstv[15] = (         void  *)&lost_receipt_flag;
  sqlstm.sqhstl[15] = (unsigned int  )1;
  sqlstm.sqhsts[15] = (         int  )0;
  sqlstm.sqindv[15] = (         void  *)&lost_receipt_flag_ind;
  sqlstm.sqinds[15] = (         int  )0;
  sqlstm.sqharm[15] = (unsigned int  )0;
  sqlstm.sqadto[15] = (unsigned short )0;
  sqlstm.sqtdso[15] = (unsigned short )0;
  sqlstm.sqhstv[16] = (         void  *)&qc_flag;
  sqlstm.sqhstl[16] = (unsigned int  )1;
  sqlstm.sqhsts[16] = (         int  )0;
  sqlstm.sqindv[16] = (         void  *)&qc_flag_ind;
  sqlstm.sqinds[16] = (         int  )0;
  sqlstm.sqharm[16] = (unsigned int  )0;
  sqlstm.sqadto[16] = (unsigned short )0;
  sqlstm.sqtdso[16] = (unsigned short )0;
  sqlstm.sqhstv[17] = (         void  *)&missed_opex_flag;
  sqlstm.sqhstl[17] = (unsigned int  )1;
  sqlstm.sqhsts[17] = (         int  )0;
  sqlstm.sqindv[17] = (         void  *)&missed_opex_flag_ind;
  sqlstm.sqinds[17] = (         int  )0;
  sqlstm.sqharm[17] = (unsigned int  )0;
  sqlstm.sqadto[17] = (unsigned short )0;
  sqlstm.sqtdso[17] = (unsigned short )0;
  sqlstm.sqhstv[18] = (         void  *)&summons_flag;
  sqlstm.sqhstl[18] = (unsigned int  )1;
  sqlstm.sqhsts[18] = (         int  )0;
  sqlstm.sqindv[18] = (         void  *)&summons_flag_ind;
  sqlstm.sqinds[18] = (         int  )0;
  sqlstm.sqharm[18] = (unsigned int  )0;
  sqlstm.sqadto[18] = (unsigned short )0;
  sqlstm.sqtdso[18] = (unsigned short )0;
  sqlstm.sqhstv[19] = (         void  *)ssc_code;
  sqlstm.sqhstl[19] = (unsigned int  )7;
  sqlstm.sqhsts[19] = (         int  )0;
  sqlstm.sqindv[19] = (         void  *)&ssc_code_ind;
  sqlstm.sqinds[19] = (         int  )0;
  sqlstm.sqharm[19] = (unsigned int  )0;
  sqlstm.sqadto[19] = (unsigned short )0;
  sqlstm.sqtdso[19] = (unsigned short )0;
  sqlstm.sqhstv[20] = (         void  *)&photo_capture_flag;
  sqlstm.sqhstl[20] = (unsigned int  )1;
  sqlstm.sqhsts[20] = (         int  )0;
  sqlstm.sqindv[20] = (         void  *)&photo_capture_flag_ind;
  sqlstm.sqinds[20] = (         int  )0;
  sqlstm.sqharm[20] = (unsigned int  )0;
  sqlstm.sqadto[20] = (unsigned short )0;
  sqlstm.sqtdso[20] = (unsigned short )0;
  sqlstm.sqhstv[21] = (         void  *)&summons_pay_flag;
  sqlstm.sqhstl[21] = (unsigned int  )1;
  sqlstm.sqhsts[21] = (         int  )0;
  sqlstm.sqindv[21] = (         void  *)&summons_pay_flag_ind;
  sqlstm.sqinds[21] = (         int  )0;
  sqlstm.sqharm[21] = (unsigned int  )0;
  sqlstm.sqadto[21] = (unsigned short )0;
  sqlstm.sqtdso[21] = (unsigned short )0;
  sqlstm.sqhstv[22] = (         void  *)&card_lost_flag;
  sqlstm.sqhstl[22] = (unsigned int  )1;
  sqlstm.sqhsts[22] = (         int  )0;
  sqlstm.sqindv[22] = (         void  *)&card_lost_flag_ind;
  sqlstm.sqinds[22] = (         int  )0;
  sqlstm.sqharm[22] = (unsigned int  )0;
  sqlstm.sqadto[22] = (unsigned short )0;
  sqlstm.sqtdso[22] = (unsigned short )0;
  sqlstm.sqhstv[23] = (         void  *)collection_date;
  sqlstm.sqhstl[23] = (unsigned int  )16;
  sqlstm.sqhsts[23] = (         int  )0;
  sqlstm.sqindv[23] = (         void  *)&collection_date_ind;
  sqlstm.sqinds[23] = (         int  )0;
  sqlstm.sqharm[23] = (unsigned int  )0;
  sqlstm.sqadto[23] = (unsigned short )0;
  sqlstm.sqtdso[23] = (unsigned short )0;
  sqlstm.sqhstv[24] = (         void  *)&prb_status;
  sqlstm.sqhstl[24] = (unsigned int  )1;
  sqlstm.sqhsts[24] = (         int  )0;
  sqlstm.sqindv[24] = (         void  *)&prb_status_ind;
  sqlstm.sqinds[24] = (         int  )0;
  sqlstm.sqharm[24] = (unsigned int  )0;
  sqlstm.sqadto[24] = (unsigned short )0;
  sqlstm.sqtdso[24] = (unsigned short )0;
  sqlstm.sqhstv[25] = (         void  *)&appl_stat;
  sqlstm.sqhstl[25] = (unsigned int  )1;
  sqlstm.sqhsts[25] = (         int  )0;
  sqlstm.sqindv[25] = (         void  *)0;
  sqlstm.sqinds[25] = (         int  )0;
  sqlstm.sqharm[25] = (unsigned int  )0;
  sqlstm.sqadto[25] = (unsigned short )0;
  sqlstm.sqtdso[25] = (unsigned short )0;
  sqlstm.sqhstv[26] = (         void  *)imm_expiry_date;
  sqlstm.sqhstl[26] = (unsigned int  )9;
  sqlstm.sqhsts[26] = (         int  )0;
  sqlstm.sqindv[26] = (         void  *)&imm_expiry_date_ind;
  sqlstm.sqinds[26] = (         int  )0;
  sqlstm.sqharm[26] = (unsigned int  )0;
  sqlstm.sqadto[26] = (unsigned short )0;
  sqlstm.sqtdso[26] = (unsigned short )0;
  sqlstm.sqhstv[27] = (         void  *)&load_dl;
  sqlstm.sqhstl[27] = (unsigned int  )1;
  sqlstm.sqhsts[27] = (         int  )0;
  sqlstm.sqindv[27] = (         void  *)&load_dl_ind;
  sqlstm.sqinds[27] = (         int  )0;
  sqlstm.sqharm[27] = (unsigned int  )0;
  sqlstm.sqadto[27] = (unsigned short )0;
  sqlstm.sqtdso[27] = (unsigned short )0;
  sqlstm.sqhstv[28] = (         void  *)&pdl_renew_type;
  sqlstm.sqhstl[28] = (unsigned int  )1;
  sqlstm.sqhsts[28] = (         int  )0;
  sqlstm.sqindv[28] = (         void  *)&pdl_renew_type_ind;
  sqlstm.sqinds[28] = (         int  )0;
  sqlstm.sqharm[28] = (unsigned int  )0;
  sqlstm.sqadto[28] = (unsigned short )0;
  sqlstm.sqtdso[28] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
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
	userlog("Before update");
	userlog("update_appl_info : create_timestamp_ind - %d", create_timestamp_ind);
	userlog("update_appl_info : create_timestamp - %s", create_timestamp);
	
		/* EXEC SQL UPDATE APPLICATION 
			SET	APPLPRIORITY = :appl_priority:appl_priority_ind ,
				PROCSERNO = :curr_proc_sr_no:curr_proc_sr_no_ind ,
				TEMPORARYID = :temp_id:temp_id_ind ,
				KPTNO = :kpt_no:kpt_no_ind ,
				OWNERCAT = :owner_cat:owner_cat_ind , 
				COLLCENTER = :collection_centre:collection_centre_ind ,
				COLLKPTNO = :collector_kpt:collector_kpt_ind ,
				APPLREMARKS = :appl_remarks:appl_remarks_ind ,
				USERID = :create_user_id:create_user_id_ind ,
				WSID = :create_ws_id:create_ws_id_ind ,
				TIMESTAMP = DECODE(:create_timestamp_ind,0,TO_DATE(:create_timestamp, 'DDMMYYYY HH24MISS'),-1,SYSDATE) ,
				APPLSTAGE = :appl_stage:appl_stage_ind ,
				LOSTRECEIPTFLAG = :lost_receipt_flag:lost_receipt_flag_ind ,
				QCFLAG = :qc_flag:qc_flag_ind ,
				MISSEDOPEXFLAG = :missed_opex_flag:missed_opex_flag_ind ,
				SUMMIND = :summons_flag:summons_flag_ind ,
				SSCBRANCHCODE = :ssc_code:ssc_code_ind ,
				PHOTOCAPTURE = :photo_capture_flag:photo_capture_flag_ind ,
				SUMMPAYMIND = :summons_pay_flag:summons_pay_flag_ind ,
				LOSSCARDIND = :card_lost_flag:card_lost_flag_ind,
				CARDCOLLDATE = TO_DATE(:collection_date:collection_date_ind, 'DDMMYYYY'),
				PRBSTATUS = :prb_status:prb_status_ind,
				IMMEXPIRYDATE = TO_DATE(:imm_expiry_date:imm_expiry_date_ind, 'DDMMYYYY'),
				LOADDL = :load_dl:load_dl_ind,
				PDLRENEWTYPE = :pdl_renew_type:pdl_renew_type_ind,
				CONTACTNO = :contact_no:contact_no_ind
			WHERE APPLID = :appl_id ; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 29;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPLICATION  set APPLPRIORITY=:b0:b1,PROCSERNO=:b2:b\
3,TEMPORARYID=:b4:b5,KPTNO=:b6:b7,OWNERCAT=:b8:b9,COLLCENTER=:b10:b11,COLLKPTN\
O=:b12:b13,APPLREMARKS=:b14:b15,USERID=:b16:b17,WSID=:b18:b19, timestamp =DECO\
DE(:b20,0,TO_DATE(:b21,'DDMMYYYY HH24MISS'),(-1),SYSDATE),APPLSTAGE=:b22:b23,L\
OSTRECEIPTFLAG=:b24:b25,QCFLAG=:b26:b27,MISSEDOPEXFLAG=:b28:b29,SUMMIND=:b30:b\
31,SSCBRANCHCODE=:b32:b33,PHOTOCAPTURE=:b34:b35,SUMMPAYMIND=:b36:b37,LOSSCARDI\
ND=:b38:b39,CARDCOLLDATE=TO_DATE(:b40:b41,'DDMMYYYY'),PRBSTATUS=:b42:b43,IMMEX\
PIRYDATE=TO_DATE(:b44:b45,'DDMMYYYY'),LOADDL=:b46:b47,PDLRENEWTYPE=:b48:b49,CO\
NTACTNO=:b50:b51 where APPLID=:b52";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )230;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&appl_priority;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&appl_priority_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&curr_proc_sr_no;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&curr_proc_sr_no_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&temp_id;
  sqlstm.sqhstl[2] = (unsigned int  )18;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&temp_id_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)kpt_no;
  sqlstm.sqhstl[3] = (unsigned int  )13;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&kpt_no_ind;
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
  sqlstm.sqhstv[5] = (         void  *)collection_centre;
  sqlstm.sqhstl[5] = (unsigned int  )7;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&collection_centre_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)collector_kpt;
  sqlstm.sqhstl[6] = (unsigned int  )13;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&collector_kpt_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&appl_remarks;
  sqlstm.sqhstl[7] = (unsigned int  )63;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&appl_remarks_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&create_user_id;
  sqlstm.sqhstl[8] = (unsigned int  )11;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&create_user_id_ind;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&create_ws_id;
  sqlstm.sqhstl[9] = (unsigned int  )18;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)&create_ws_id_ind;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&create_timestamp_ind;
  sqlstm.sqhstl[10] = (unsigned int  )sizeof(short);
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)0;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)create_timestamp;
  sqlstm.sqhstl[11] = (unsigned int  )16;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)0;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqhstv[12] = (         void  *)appl_stage;
  sqlstm.sqhstl[12] = (unsigned int  )4;
  sqlstm.sqhsts[12] = (         int  )0;
  sqlstm.sqindv[12] = (         void  *)&appl_stage_ind;
  sqlstm.sqinds[12] = (         int  )0;
  sqlstm.sqharm[12] = (unsigned int  )0;
  sqlstm.sqadto[12] = (unsigned short )0;
  sqlstm.sqtdso[12] = (unsigned short )0;
  sqlstm.sqhstv[13] = (         void  *)&lost_receipt_flag;
  sqlstm.sqhstl[13] = (unsigned int  )1;
  sqlstm.sqhsts[13] = (         int  )0;
  sqlstm.sqindv[13] = (         void  *)&lost_receipt_flag_ind;
  sqlstm.sqinds[13] = (         int  )0;
  sqlstm.sqharm[13] = (unsigned int  )0;
  sqlstm.sqadto[13] = (unsigned short )0;
  sqlstm.sqtdso[13] = (unsigned short )0;
  sqlstm.sqhstv[14] = (         void  *)&qc_flag;
  sqlstm.sqhstl[14] = (unsigned int  )1;
  sqlstm.sqhsts[14] = (         int  )0;
  sqlstm.sqindv[14] = (         void  *)&qc_flag_ind;
  sqlstm.sqinds[14] = (         int  )0;
  sqlstm.sqharm[14] = (unsigned int  )0;
  sqlstm.sqadto[14] = (unsigned short )0;
  sqlstm.sqtdso[14] = (unsigned short )0;
  sqlstm.sqhstv[15] = (         void  *)&missed_opex_flag;
  sqlstm.sqhstl[15] = (unsigned int  )1;
  sqlstm.sqhsts[15] = (         int  )0;
  sqlstm.sqindv[15] = (         void  *)&missed_opex_flag_ind;
  sqlstm.sqinds[15] = (         int  )0;
  sqlstm.sqharm[15] = (unsigned int  )0;
  sqlstm.sqadto[15] = (unsigned short )0;
  sqlstm.sqtdso[15] = (unsigned short )0;
  sqlstm.sqhstv[16] = (         void  *)&summons_flag;
  sqlstm.sqhstl[16] = (unsigned int  )1;
  sqlstm.sqhsts[16] = (         int  )0;
  sqlstm.sqindv[16] = (         void  *)&summons_flag_ind;
  sqlstm.sqinds[16] = (         int  )0;
  sqlstm.sqharm[16] = (unsigned int  )0;
  sqlstm.sqadto[16] = (unsigned short )0;
  sqlstm.sqtdso[16] = (unsigned short )0;
  sqlstm.sqhstv[17] = (         void  *)ssc_code;
  sqlstm.sqhstl[17] = (unsigned int  )7;
  sqlstm.sqhsts[17] = (         int  )0;
  sqlstm.sqindv[17] = (         void  *)&ssc_code_ind;
  sqlstm.sqinds[17] = (         int  )0;
  sqlstm.sqharm[17] = (unsigned int  )0;
  sqlstm.sqadto[17] = (unsigned short )0;
  sqlstm.sqtdso[17] = (unsigned short )0;
  sqlstm.sqhstv[18] = (         void  *)&photo_capture_flag;
  sqlstm.sqhstl[18] = (unsigned int  )1;
  sqlstm.sqhsts[18] = (         int  )0;
  sqlstm.sqindv[18] = (         void  *)&photo_capture_flag_ind;
  sqlstm.sqinds[18] = (         int  )0;
  sqlstm.sqharm[18] = (unsigned int  )0;
  sqlstm.sqadto[18] = (unsigned short )0;
  sqlstm.sqtdso[18] = (unsigned short )0;
  sqlstm.sqhstv[19] = (         void  *)&summons_pay_flag;
  sqlstm.sqhstl[19] = (unsigned int  )1;
  sqlstm.sqhsts[19] = (         int  )0;
  sqlstm.sqindv[19] = (         void  *)&summons_pay_flag_ind;
  sqlstm.sqinds[19] = (         int  )0;
  sqlstm.sqharm[19] = (unsigned int  )0;
  sqlstm.sqadto[19] = (unsigned short )0;
  sqlstm.sqtdso[19] = (unsigned short )0;
  sqlstm.sqhstv[20] = (         void  *)&card_lost_flag;
  sqlstm.sqhstl[20] = (unsigned int  )1;
  sqlstm.sqhsts[20] = (         int  )0;
  sqlstm.sqindv[20] = (         void  *)&card_lost_flag_ind;
  sqlstm.sqinds[20] = (         int  )0;
  sqlstm.sqharm[20] = (unsigned int  )0;
  sqlstm.sqadto[20] = (unsigned short )0;
  sqlstm.sqtdso[20] = (unsigned short )0;
  sqlstm.sqhstv[21] = (         void  *)collection_date;
  sqlstm.sqhstl[21] = (unsigned int  )16;
  sqlstm.sqhsts[21] = (         int  )0;
  sqlstm.sqindv[21] = (         void  *)&collection_date_ind;
  sqlstm.sqinds[21] = (         int  )0;
  sqlstm.sqharm[21] = (unsigned int  )0;
  sqlstm.sqadto[21] = (unsigned short )0;
  sqlstm.sqtdso[21] = (unsigned short )0;
  sqlstm.sqhstv[22] = (         void  *)&prb_status;
  sqlstm.sqhstl[22] = (unsigned int  )1;
  sqlstm.sqhsts[22] = (         int  )0;
  sqlstm.sqindv[22] = (         void  *)&prb_status_ind;
  sqlstm.sqinds[22] = (         int  )0;
  sqlstm.sqharm[22] = (unsigned int  )0;
  sqlstm.sqadto[22] = (unsigned short )0;
  sqlstm.sqtdso[22] = (unsigned short )0;
  sqlstm.sqhstv[23] = (         void  *)imm_expiry_date;
  sqlstm.sqhstl[23] = (unsigned int  )9;
  sqlstm.sqhsts[23] = (         int  )0;
  sqlstm.sqindv[23] = (         void  *)&imm_expiry_date_ind;
  sqlstm.sqinds[23] = (         int  )0;
  sqlstm.sqharm[23] = (unsigned int  )0;
  sqlstm.sqadto[23] = (unsigned short )0;
  sqlstm.sqtdso[23] = (unsigned short )0;
  sqlstm.sqhstv[24] = (         void  *)&load_dl;
  sqlstm.sqhstl[24] = (unsigned int  )1;
  sqlstm.sqhsts[24] = (         int  )0;
  sqlstm.sqindv[24] = (         void  *)&load_dl_ind;
  sqlstm.sqinds[24] = (         int  )0;
  sqlstm.sqharm[24] = (unsigned int  )0;
  sqlstm.sqadto[24] = (unsigned short )0;
  sqlstm.sqtdso[24] = (unsigned short )0;
  sqlstm.sqhstv[25] = (         void  *)&pdl_renew_type;
  sqlstm.sqhstl[25] = (unsigned int  )1;
  sqlstm.sqhsts[25] = (         int  )0;
  sqlstm.sqindv[25] = (         void  *)&pdl_renew_type_ind;
  sqlstm.sqinds[25] = (         int  )0;
  sqlstm.sqharm[25] = (unsigned int  )0;
  sqlstm.sqadto[25] = (unsigned short )0;
  sqlstm.sqtdso[25] = (unsigned short )0;
  sqlstm.sqhstv[26] = (         void  *)contact_no;
  sqlstm.sqhstl[26] = (unsigned int  )31;
  sqlstm.sqhsts[26] = (         int  )0;
  sqlstm.sqindv[26] = (         void  *)&contact_no_ind;
  sqlstm.sqinds[26] = (         int  )0;
  sqlstm.sqharm[26] = (unsigned int  )0;
  sqlstm.sqadto[26] = (unsigned short )0;
  sqlstm.sqtdso[26] = (unsigned short )0;
  sqlstm.sqhstv[27] = (         void  *)appl_id;
  sqlstm.sqhstl[27] = (unsigned int  )20;
  sqlstm.sqhsts[27] = (         int  )0;
  sqlstm.sqindv[27] = (         void  *)0;
  sqlstm.sqinds[27] = (         int  )0;
  sqlstm.sqharm[27] = (unsigned int  )0;
  sqlstm.sqadto[27] = (unsigned short )0;
  sqlstm.sqtdso[27] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
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
	if(SQLCODE != 0)
	{
#ifdef DEBUG
		if (transaction_type == TXN_MISC)
		{
			userlog(" update_appl_info : Insert into APPLICATION table failed: %s", SQLMSG);
		}
		else
		{
			userlog(" update_appl_info : Updation on APPLICATION table failed: %s", SQLMSG);	
		}
#endif
		if (transaction_type == TXN_MISC)
		{
			strcpy(prog_log.remarks,"update_appl_info: Insert into APPLICATION table failed");
			sprintf(excep_log.error_msg, "update_appl_info: Insert into APPLICATION table failed : %s", SQLMSG);
		}
		else
		{
			strcpy(prog_log.remarks,"update_appl_info: Updation on APPLICATION table failed");
			sprintf(excep_log.error_msg, "update_appl_info: Updation on APPLICATION table : %s", SQLMSG);
			
		}

		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		if (transaction_type == TXN_MISC)
		{
			return INSERT_ERROR;
		}
		else
		{
			return UPDATE_ERROR;
		}
	}

	/* The following code is included for IJPN on 12/04/05 to insert data
		into APPNT_PROBL_DATA to improve performance */

	if (0 != req->header.branch_code[0])
		{
			strcpy(branch_code, req->header.branch_code);
			branch_code_ind = 0;
		}

#ifdef DEBUG
	userlog("update_appl_info : ssc_code_ind : %d",ssc_code_ind);
	userlog("update_appl_info : ssc_code : %s",ssc_code);
	userlog("update_appl_info : req->header.branch_code : %s",req->header.branch_code);
#endif

	if((ssc_code_ind == 0 ) && strcmp(ssc_code,req->header.branch_code) != 0)
	{
		/* EXEC SQL INSERT INTO APPNT_PROBL_DATA(
			APPLID, SSCBRANCHCODE, SENDFLAG, TIMESTAMP)
			VALUES(:appl_id,:ssc_code,'N',SYSDATE); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 29;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPNT_PROBL_DATA (APPLID,SSCBRANCHCODE,SENDFLAG\
, timestamp ) values (:b0,:b1,'N',SYSDATE)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )357;
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
  sqlstm.sqhstv[1] = (         void  *)ssc_code;
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




		if(SQLCODE != 0 && SQLCODE != -1)
		{
		#ifdef DEBUG
			userlog(" update_appl_info : Insert into APPNT_PROBL_DATA failed : %s", SQLMSG);
		#endif
			strcpy(prog_log.remarks,"update_appl_info: Insert into APPNT_PROBL_DATA failed ");
			sprintf(excep_log.error_msg, "update_appl_info: Insert into APPNT_PROBL_DATA failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		}
	}
	/* end IJPN */

#ifdef DEBUG
	userlog("update_appl_info : Successfull");
#endif

	return SUCCESS;

}

/********************************************************************************/
/* Function name: insert_appl_proc_recs											*/
/* Description	: This function inserts the application info into APPL_PROC		*/
/*				  table															*/
/* Input		: Pointer to Application process info structure, Structure count*/
/*                Application id												*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_appl_proc_recs(APPL_PROC_T *appl_proc, char *application_id, int appl_proc_cnt,void * ctx)
{

	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char appl_id[APP_ID_SIZE] = {0};
	int proc_sr_no = 0;
	char proc_flag[PROCESS_IND_SIZE] = {0};
	char id_type[ID_TYPE_SIZE] = {0};
	/* varchar id_no[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } id_no
 = {0};

	/* varchar user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id
 = {0};

	/* varchar ws_id[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } ws_id
 = {0};

	char timestamp[DATE_TIME_SIZE] = {0};

	short proc_sr_no_ind = -1;
	short proc_flag_ind = -1;
	short id_type_ind = -1;
	short id_no_ind = -1;
	short user_id_ind = -1;
	short ws_id_ind = -1;
	short timestamp_ind = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 

	
	int count = 0;
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	

	/* Populate the variables	*/

	strcpy(appl_id, application_id);

#ifdef DEBUG
	userlog("insert_appl_proc_recs : Appl id - %s", appl_id);
	userlog("insert_appl_proc_recs : Appl process count - %d", appl_proc_cnt);
#endif

	for (count = 0; count < appl_proc_cnt; count++, appl_proc++)
	{
	
		if (0 < appl_proc->proc_sr_no)
		{
			proc_sr_no = appl_proc->proc_sr_no;
			proc_sr_no_ind = 0;
		}
		else
			proc_sr_no_ind = -1;
	
		if (0 != appl_proc->proc_ind[0])
		{
			strcpy(proc_flag, appl_proc->proc_ind);
			proc_flag_ind = 0;
		}
		else
			proc_flag_ind = -1;


		if (0 != appl_proc->id_type[0])
		{
			strcpy(id_type, appl_proc->id_type);
			id_type_ind = 0;
		}
		else 
			id_type_ind = -1;

		if (0 != appl_proc->id_no[0])
		{
			strcpy((char*)id_no.arr, appl_proc->id_no);
			id_no_ind = 0;
			setlen(id_no);
		}
		else 
			id_no_ind = -1;


		if (0 != appl_proc->user_id[0])
		{
			strcpy((char*)user_id.arr, appl_proc->user_id);
			user_id_ind = 0;
			setlen(user_id);
		}
		else 
			user_id_ind = -1;


		if (0 != appl_proc->ws_id[0])
		{
			strcpy((char*)ws_id.arr, appl_proc->ws_id);
			ws_id_ind = 0;
			setlen(ws_id);
		}
		else 
			ws_id_ind = -1;



		if (0 != appl_proc->timestamp[0])
		{
			strcpy(timestamp, appl_proc->timestamp);
			timestamp_ind = 0;
		}
		else 
			timestamp_ind = -1;

	
#ifdef DEBUG
		userlog("insert_appl_proc_recs : Appl id - %s", appl_id);
		userlog("insert_appl_proc_recs : Process ser no - %d", proc_sr_no);
		userlog("insert_appl_proc_recs : Process ind - %s", proc_flag);
		userlog("insert_appl_proc_recs : Id type - %s", id_type);
		userlog("insert_appl_proc_recs : Id no - %s", id_no.arr);
		userlog("insert_appl_proc_recs : User id - %s", user_id.arr);
		userlog("insert_appl_proc_recs : WS id - %s", ws_id.arr);
		userlog("insert_appl_proc_recs : Timestamp - %s", timestamp);
		
#endif

	
		/* EXEC SQL INSERT INTO APPL_PROC (APPLID, PROCSERNO, PROCIND, IDTYPE, 
									IDNO, WSID, USERID, TIMESTAMP)
			VALUES (:appl_id, :proc_sr_no:proc_sr_no_ind,
				:proc_flag:proc_flag_ind, :id_type:id_type_ind, :id_no:id_no_ind,
				:ws_id:ws_id_ind, :user_id:user_id_ind, 
				TO_DATE(:timestamp:timestamp_ind, 'DDMMYYYY HH24MISS')); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 29;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPL_PROC (APPLID,PROCSERNO,PROCIND,IDTYPE,IDNO\
,WSID,USERID, timestamp ) values (:b0,:b1:b2,:b3:b4,:b5:b6,:b7:b8,:b9:b10,:b11\
:b12,TO_DATE(:b13:b14,'DDMMYYYY HH24MISS'))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )380;
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
  sqlstm.sqhstv[1] = (         void  *)&proc_sr_no;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&proc_sr_no_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)proc_flag;
  sqlstm.sqhstl[2] = (unsigned int  )3;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&proc_flag_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)id_type;
  sqlstm.sqhstl[3] = (unsigned int  )3;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&id_type_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&id_no;
  sqlstm.sqhstl[4] = (unsigned int  )18;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&id_no_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&ws_id;
  sqlstm.sqhstl[5] = (unsigned int  )18;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&ws_id_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&user_id;
  sqlstm.sqhstl[6] = (unsigned int  )11;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&user_id_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)timestamp;
  sqlstm.sqhstl[7] = (unsigned int  )16;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&timestamp_ind;
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


			 
		if(SQLCODE != 0 && SQLCODE != -1)
		{
		#ifdef DEBUG
			userlog(" insert_appl_proc_recs : Insert into APPL_PROC failed : %s", SQLMSG);
		#endif
			strcpy(prog_log.remarks,"insert_appl_proc_recs: Insert into APPL_PROC failed ");
			sprintf(excep_log.error_msg, "insert_appl_proc_recs: Insert into APPL_PROC failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		}

#ifdef DEBUG
		userlog("insert_appl_proc_recs : Record %d inserted successfully", count + 1);
#endif

	}

	return SUCCESS;

}

/********************************************************************************/
/* Function name: insert_txn_recs												*/
/* Description	: This function inserts the transaction info into APPL_TXN		*/
/*				  table															*/
/* Input		: Pointer to Application transaction info struture, Structure   */
/*                count, Application id, Pointer to Transaction type			*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_txn_recs(APPL_TXN_T *appl_txn, char *application_id, int txn_cnt, int *transaction_type,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char appl_id[APP_ID_SIZE] = {0};
	int txn_sr_no = 0;
	char txn_code[TRANSACTION_CODE_SIZE] = {0};
	char txn_date[DATE_SIZE] = {0};
	char txn_cancel_code[CANCEL_CODE_SIZE] = {0};
	char lic_type[LIC_TYPE_SIZE] = {0};
	char lic_class[LIC_CLS_SIZE] = {0};
	char lic_usage[LIC_USAGE_SIZE] = {0};
	int lic_validity = 0;
	int pay_sr_no = 0;
	char qc_flag = 0 ;
	int txn_type = 0;

	short txn_sr_no_ind = -1;
	short txn_code_ind = -1;
	short txn_date_ind = -1;
	short txn_cancel_code_ind = -1;
	short lic_type_ind = -1;
	short lic_class_ind = -1;
	short lic_usage_ind = -1;
	short lic_validity_ind = -1;
	short pay_sr_no_ind = -1;
	short qc_flag_ind = -1;
	short txn_type_ind = -1;
	
sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int count = 0;
	int txn_code_numeric = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN



	/* Populate the variables	*/

	strcpy(appl_id, application_id);

#ifdef DEBUG
	userlog("insert_txn_recs : Appl id - %s", appl_id);
	userlog("insert_txn_recs : Txn count - %d", txn_cnt);
#endif

	for (count = 0; count < txn_cnt; count++, appl_txn++)
	{
	
		if (0 < appl_txn->txn_sr_no)
		{
			txn_sr_no = appl_txn->txn_sr_no;
			txn_sr_no_ind = 0;
		}
		else
			txn_sr_no_ind = -1;

			lic_validity = appl_txn->lic_validity;
			lic_validity_ind = 0;
		

		if (0 != appl_txn->qc_flag)
		{
			qc_flag = appl_txn->qc_flag;
			qc_flag_ind = 0;
		}
		else
			qc_flag_ind = -1;

		if (0 < appl_txn->pay_sr_no)
		{
			pay_sr_no = appl_txn->pay_sr_no;
			pay_sr_no_ind = 0;
		}
		else
			pay_sr_no_ind = -1;

		if (0 != appl_txn->txn_code[0])
		{
			strcpy(txn_code, appl_txn->txn_code);
			txn_code_ind = 0;
		}
		else
			txn_code_ind = -1;

		if (0 != appl_txn->txn_date[0])
		{
			strcpy(txn_date, appl_txn->txn_date);
			txn_date_ind = 0;
		}
		else
			txn_date_ind = -1;

		if (0 != appl_txn->txn_cancel_code[0])
		{
			strcpy(txn_cancel_code, appl_txn->txn_cancel_code);
			txn_cancel_code_ind = 0;
		}
		else
			txn_cancel_code_ind = -1;

		if (0 != appl_txn->lic_type[0])
		{
			strcpy(lic_type, appl_txn->lic_type);
			lic_type_ind = 0;
		}
		else
			lic_type_ind = -1;

		if (0 != appl_txn->lic_class[0])
		{
			strcpy(lic_class, appl_txn->lic_class);
			lic_class_ind = 0;
		}
		else
			lic_class_ind = -1;

		if (0 != appl_txn->lic_usage[0])
		{
			strcpy(lic_usage, appl_txn->lic_usage);
			lic_usage_ind = 0;
		}
		else
			lic_usage_ind = -1;

#ifdef DEBUG
		userlog("insert_txn_recs : Txn ser no - %d", txn_sr_no);
		userlog("insert_txn_recs : Txn code - %s", txn_code);
		userlog("insert_txn_recs : Txn cancel code - %s", txn_cancel_code);
		userlog("insert_txn_recs : Lic type - %s", lic_type);
		userlog("insert_txn_recs : Lic class - %s", lic_class);
		userlog("insert_txn_recs : Lic usage - %s", lic_usage);
		userlog("insert_txn_recs : Lic validity - %d", lic_validity);
		userlog("insert_txn_recs : Payment ser no - %d", pay_sr_no);
		userlog("insert_txn_recs : QC flag - %c", qc_flag);
		userlog("insert_txn_recs : Txn date - %s", txn_date);
		
#endif

	
		/* EXEC SQL INSERT INTO APPL_TXN (APPLID, TXNSERNO, TXNCODE, 
								TXNCANCELCODE, LICTYPE, LICCLASS, 
								LICUSAGECODE, LICVALIDPERIOD, PAYMSERNO,
								QCFLAG, TXNDATE, LEGUPDFLAG )
			VALUES (:appl_id, :txn_sr_no:txn_sr_no_ind, 
				:txn_code:txn_code_ind, :txn_cancel_code:txn_cancel_code_ind,
				:lic_type:lic_type_ind, :lic_class:lic_class_ind, :lic_usage:lic_usage_ind, 
				:lic_validity:lic_validity_ind,  :pay_sr_no:pay_sr_no_ind, 
				:qc_flag:qc_flag_ind, TO_DATE(:txn_date:txn_date_ind, 'DDMMYYYY'), 'N'); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 29;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPL_TXN (APPLID,TXNSERNO,TXNCODE,TXNCANCELCODE\
,LICTYPE,LICCLASS,LICUSAGECODE,LICVALIDPERIOD,PAYMSERNO,QCFLAG,TXNDATE,LEGUPDF\
LAG) values (:b0,:b1:b2,:b3:b4,:b5:b6,:b7:b8,:b9:b10,:b11:b12,:b13:b14,:b15:b1\
6,:b17:b18,TO_DATE(:b19:b20,'DDMMYYYY'),'N')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )427;
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
  sqlstm.sqhstv[1] = (         void  *)&txn_sr_no;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&txn_sr_no_ind;
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
  sqlstm.sqhstv[3] = (         void  *)txn_cancel_code;
  sqlstm.sqhstl[3] = (unsigned int  )3;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&txn_cancel_code_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)lic_type;
  sqlstm.sqhstl[4] = (unsigned int  )4;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&lic_type_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)lic_class;
  sqlstm.sqhstl[5] = (unsigned int  )3;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&lic_class_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)lic_usage;
  sqlstm.sqhstl[6] = (unsigned int  )3;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&lic_usage_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&lic_validity;
  sqlstm.sqhstl[7] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&lic_validity_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&pay_sr_no;
  sqlstm.sqhstl[8] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&pay_sr_no_ind;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&qc_flag;
  sqlstm.sqhstl[9] = (unsigned int  )1;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)&qc_flag_ind;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)txn_date;
  sqlstm.sqhstl[10] = (unsigned int  )9;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)&txn_date_ind;
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


				 
		if(SQLCODE != 0 && SQLCODE != -1)
		{
#ifdef DEBUG
			userlog(" insert_txn_recs : Insert into APPL_TXN failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_txn_recs: Insert into APPL_TXN failed ");
			sprintf(excep_log.error_msg, "insert_txn_recs: Insert into APPL_TXN failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		}

#ifdef DEBUG
		userlog("insert_txn_recs : Record %d inserted successfully", count + 1);
#endif

		txn_code_numeric = atoi(txn_code);

		if (txn_code_numeric == TXN_PRN_CHIP
			|| txn_code_numeric == TXN_TMP_ID_LOSS 
			|| txn_code_numeric == TXN_DISHONOURED_CHK_JPN
			|| txn_code_numeric == TXN_DISHONOURED_CHK_JPJ 
			|| txn_code_numeric == TXN_PRN_KP11)

		{
			/* Get the transaction type for the given transaction code */

			/* EXEC SQL SELECT TXNTYPE INTO :txn_type:txn_type_ind
				FROM TXN_CODE WHERE TXNCODE = :txn_code:txn_code_ind; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 29;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select TXNTYPE into :b0:b1  from TXN_CODE where TXNCODE=:b\
2:b3";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )486;
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
   sqlstm.sqhstv[1] = (         void  *)txn_code;
   sqlstm.sqhstl[1] = (unsigned int  )4;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)&txn_code_ind;
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
				userlog(" insert_txn_recs : Selecting transaction type from TXN_CODE failed : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"insert_txn_recs: Selecting transaction type from TXN_CODE failed");
				sprintf(excep_log.error_msg, "insert_txn_recs: Selecting transaction type from TXN_CODE failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return SELECT_ERROR;
			}

			if (txn_type_ind == 0)
			{
				*transaction_type = txn_type;
			}
			else
				return INVALID_TXN_TYPE;

#ifdef DEBUG
			userlog("insert_txn_recs : Transaction type - %d", *transaction_type);
#endif
		}

	}

	return SUCCESS;

}

/********************************************************************************/
/* Function name: upd_old_txn_pay_info											*/
/* Description	: This function updates the Payment serial no in APPL_TXN for   */
/*				  transactions which applicant has applied for during			*/
/*                registration 													*/
/* Input		: Pointer to Old transaction pay info struture, Structure		*/
/*                count, Application id											*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/
int upd_old_txn_pay_info(APPL_OLD_TXN_PAY_T *old_txn_pay, char *application_id, int pay_cnt,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char appl_id[APP_ID_SIZE] = {0};
	int txn_sr_no = 0;
	int pay_sr_no = 0;
	char txncancelcode[CANCEL_CODE_SIZE] = {0};

	short txn_sr_no_ind = -1;
	short pay_sr_no_ind = -1;	
	short txncancelcode_ind = -1;	

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int count = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	

	/* Populate the variables	*/

	strcpy(appl_id, application_id);

#ifdef DEBUG
	userlog("upd_old_txn_pay_info : Appl id - %s", appl_id);
	userlog("upd_old_txn_pay_info : Old pay count - %d", pay_cnt);
#endif

	for (count = 0; count < pay_cnt; count++, old_txn_pay++)
	{
	
		if (0 < old_txn_pay->txn_sr_no)
		{
			txn_sr_no = old_txn_pay->txn_sr_no;
			txn_sr_no_ind = 0;
		}
		else
			txn_sr_no_ind = -1;

		if (0 < old_txn_pay->pay_sr_no)
		{
			pay_sr_no = old_txn_pay->pay_sr_no;
			pay_sr_no_ind = 0;
		}
		else
			pay_sr_no_ind = -1;

		if (old_txn_pay->txn_cancel_code[0] != '\0')
		{
			strcpy(txncancelcode, old_txn_pay->txn_cancel_code);
			txncancelcode_ind = 0;
		}
		else
			txncancelcode_ind = -1;

#ifdef DEBUG
	userlog("upd_old_txn_pay_info : Txn ser no - %d", txn_sr_no);
	userlog("upd_old_txn_pay_info : Payment ser no - %d", pay_sr_no);
	userlog("upd_old_txn_pay_info : txncancelcode - %s", txncancelcode);
#endif

	/* EXEC SQL UPDATE APPL_TXN
		SET PAYMSERNO = :pay_sr_no:pay_sr_no_ind,
		TXNCANCELCODE = :txncancelcode:txncancelcode_ind
		WHERE APPLID = :appl_id
		AND TXNSERNO = :txn_sr_no:txn_sr_no_ind; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 29;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update APPL_TXN  set PAYMSERNO=:b0:b1,TXNCANCELCODE=:b2:b3 w\
here (APPLID=:b4 and TXNSERNO=:b5:b6)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )509;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&pay_sr_no;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&pay_sr_no_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)txncancelcode;
 sqlstm.sqhstl[1] = (unsigned int  )3;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&txncancelcode_ind;
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
 sqlstm.sqhstv[3] = (         void  *)&txn_sr_no;
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&txn_sr_no_ind;
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



		if(SQLCODE != 0)
		{
#ifdef DEBUG
			userlog(" upd_old_txn_pay_info : Updation of Payment serial no in APPL_TXN failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"upd_old_txn_pay_info: Updation of Payment serial no in APPL_TXN failed");
			sprintf(excep_log.error_msg, "upd_old_txn_pay_info: Updation of Payment serial no in APPL_TXN failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return UPDATE_ERROR;
		}

#ifdef DEBUG
		userlog("upd_old_txn_pay_info : Record %d updated successfully", count + 1);
#endif

	}

	return SUCCESS;
}

/********************************************************************************/
/* Function name: insert_txn_fees												*/
/* Description	: This function inserts the transaction fee info into			*/
/*				  APPL_TXN_FEE table											*/
/* Input		: Pointer to transaction fee info struture, Structure count     */
/*                Application id											    */
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_txn_fees(APPL_TXN_FEE_T *txn_fee, HEADER_T header, int txn_fee_cnt,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char appl_id[APP_ID_SIZE] = {0};
	int txn_sr_no = 0;
	char fee_type[FEE_TYPE_SIZE] = {0};
	float fee_amt = 0;
	long agency_rev_code = 0;

	short txn_sr_no_ind = -1;
	short fee_type_ind = -1;
	short fee_amt_ind = -1;
	short agency_rev_code_ind = -1;
	
	float feeamt = 0;
	short feeamt_ind = 0;
	int txn_sr_no_temp = 0;
	short txn_sr_no_temp_ind = 0;
	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 



		int ret_code = 0;
	APPL_TXN_FEE_T *txn_fee_temp;

	ABT_LIST_T abt_lst = {0};

	// above structure has following members
	/*	char applid[APP_ID_SIZE];
	float feeamt;
	float feecollectedamt;
	float outstandingamt;
	char outstandingfeetype;
	char feestat;
	char feecreationdate[DATE_TIME_SIZE];
	varchar userid[USER_ID_SIZE];
	varchar branchcode[BRANCH_CODE_SIZE];
*/

	int count = 0;

	txn_fee_temp = txn_fee;
	
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN



	/* Populate the variables	*/

	strcpy(appl_id, header.application_id);

#ifdef DEBUG
	userlog("insert_txn_fees : Appl id - %s", appl_id);
	userlog("insert_txn_fees : Fee count - %d", txn_fee_cnt);
#endif

	for (count = 0; count < txn_fee_cnt; count++, txn_fee++)
	{
	
		if (0 < txn_fee->txn_sr_no)
		{
			txn_sr_no = txn_fee->txn_sr_no;
			txn_sr_no_ind = 0;
		}
		else
			txn_sr_no_ind = -1;

			fee_amt = txn_fee->fee_amt;
			fee_amt_ind = 0;
		
			agency_rev_code = txn_fee->agency_rev_code;
			agency_rev_code_ind = 0;
		
		if (0 != txn_fee->fee_type[0] )
		{
			strcpy(fee_type, txn_fee->fee_type);
			fee_type_ind = 0;
		}
		else
			fee_type_ind = -1;

		#ifdef DEBUG
				userlog("insert_txn_fees : Txn ser no - %d", txn_sr_no);
				userlog("insert_txn_fees : Fee type - %s", fee_type);
				userlog("insert_txn_fees : Fee amount - %f", fee_amt);
				userlog("insert_txn_fees : Agency rev code - %ld", agency_rev_code);		
		#endif

		// This check is added on 08/11/2011 for CR 242 using SYNC FEE TO UPDATE  APPNT_JPJ_LICSYNC TABLE
		if(strncmp(fee_type,"SF",2)==0)
		{
			#ifdef DEBUG
				userlog(" insert_txn_fees : Release 3.23");
			#endif

			/* EXEC SQL UPDATE APPNT_JPJ_LICSYNC SET FEEADJAMT = :fee_amt:fee_amt_ind,
				AGENCYREVNCODE = :agency_rev_code:agency_rev_code_ind
				WHERE APPLID = :appl_id AND FEETYPE = 'SF'; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 29;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update APPNT_JPJ_LICSYNC  set FEEADJAMT=:b0:b1,AGENCYREVNC\
ODE=:b2:b3 where (APPLID=:b4 and FEETYPE='SF')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )540;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&fee_amt;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&fee_amt_ind;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&agency_rev_code;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(long);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)&agency_rev_code_ind;
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



			#ifdef DEBUG
				userlog(" insert_txn_fees : UPDATE APPNT_JPJ_LICSYNC : %s", SQLMSG);
			#endif
		}
	
		/* EXEC SQL INSERT INTO APPL_TXN_FEE 
			(APPLID, TXNSERNO, FEETYPE, FEEAMT, AGENCYREVNCODE)
			VALUES (:appl_id, :txn_sr_no:txn_sr_no_ind, :fee_type:fee_type_ind,
				:fee_amt:fee_amt_ind, :agency_rev_code:agency_rev_code_ind); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 29;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPL_TXN_FEE (APPLID,TXNSERNO,FEETYPE,FEEAMT,AG\
ENCYREVNCODE) values (:b0,:b1:b2,:b3:b4,:b5:b6,:b7:b8)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )567;
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
  sqlstm.sqhstv[1] = (         void  *)&txn_sr_no;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&txn_sr_no_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)fee_type;
  sqlstm.sqhstl[2] = (unsigned int  )4;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&fee_type_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&fee_amt;
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&fee_amt_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&agency_rev_code;
  sqlstm.sqhstl[4] = (unsigned int  )sizeof(long);
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&agency_rev_code_ind;
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



				 
		if(SQLCODE != 0 && SQLCODE != -1)
		{
#ifdef DEBUG
			userlog(" insert_txn_fees : Insert into APPL_TXN_FEE failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_txn_fees: Insert into APPL_TXN_FEE failed ");
			sprintf(excep_log.error_msg, "insert_txn_fees: Insert into APPL_TXN_FEE failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		}

#ifdef DEBUG
		userlog("insert_txn_fees : Record %d inserted successfully", count + 1);
#endif

	}

	#ifdef DEBUG
			userlog(" insert_txn_fees :Check if phonein application:%c:", header.application_id[14]);
	#endif

	/*Added on 5th march 2002 new change for ABT tracking*/
  if(header.application_id[14] == '4' || header.application_id[14] == '5') // check if phone in
  {

	for (count = 1; count <= txn_fee_cnt; count++, txn_fee_temp++)
	{

		if (0 < txn_fee_temp->txn_sr_no)
		{
			txn_sr_no = txn_fee_temp->txn_sr_no;
			txn_sr_no_ind = 0;
		}
		else
		{
			txn_sr_no_ind = -1;
		}
		
		if(txn_sr_no_temp != txn_fee_temp->txn_sr_no)
		{

			/* EXEC SQL
				SELECT SUM(FEEAMT) INTO :feeamt:feeamt_ind
				FROM APPL_TXN_FEE WHERE APPLID  = :appl_id AND 
				txnserno = :txn_sr_no:txn_sr_no_ind; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 29;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select sum(FEEAMT) into :b0:b1  from APPL_TXN_FEE where (A\
PPLID=:b2 and txnserno=:b3:b4)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )602;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&feeamt;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&feeamt_ind;
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
   sqlstm.sqhstv[2] = (         void  *)&txn_sr_no;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&txn_sr_no_ind;
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
				userlog(" insert_txn_fees : SELECT SUM(FEEAMT) failed : %s", SQLMSG);
		#endif
				strcpy(prog_log.remarks,"insert_txn_fees : SELECT SUM(FEEAMT) failed");
				sprintf(excep_log.error_msg, "insert_txn_fees : SELECT SUM(FEEAMT) failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return SELECT_ERROR;
			}

			if(feeamt_ind == -1)
			{
				abt_lst.feeamt = 0;
			}
			else
			{
				abt_lst.feeamt = feeamt;
			}

		#ifdef DEBUG
				userlog(" insert_txn_fees :Fee amount got successfully:%f:", feeamt);
		#endif

			strcpy(abt_lst.applid, header.application_id);
			abt_lst.txnserno = txn_sr_no;
			abt_lst.feecollectedamt = 0;
			abt_lst.outstandingamt = feeamt;
			abt_lst.outstandingfeetype = 'P';
			abt_lst.feestat = 'U';
			strcpy(abt_lst.feecreationdate, get_date_time());
			strcpy(abt_lst.userid, header.user_id);
			strcpy(abt_lst.branchcode, header.branch_code);

		#ifdef DEBUG
				userlog(" insert_txn_fees :Before calling the function insert_abt_list");
		#endif


/*** commented this on 09/02/06, as this is taken care by another service,
     req. from vasanth.

			if (SUCCESS != (ret_code = insert_abt_list(abt_lst,ctx)))
			{
#ifdef DEBUG
				userlog("insert_txn_fees : insert_abt_list() failed with %d", ret_code);
#endif		
				strcpy(prog_log.remarks,"insert_txn_fees: insert_abt_list() failed");
				sprintf(excep_log.error_msg, "insert_txn_fees: insert_abt_list() failed with : %d", ret_code);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return INSERT_ERROR;
			}
*/
			
		}


		if (0 < txn_fee_temp->txn_sr_no)
		{
			txn_sr_no_temp = txn_fee_temp->txn_sr_no;
			txn_sr_no_temp_ind = 0;
		}
		else
		{
			txn_sr_no_temp = 0;
			txn_sr_no_temp_ind = -1;
		}
	}
		
  }

	return SUCCESS;

}

/********************************************************************************/
/* Function name: insert_sup_remarks											*/
/* Description	: This function inserts the supervisor remarks and problem info	*/
/*				  related to the application, if any into SUPERVISOR_REMARKS    */
/*                table															*/
/* Input		: Pointer to supervisor remarks struture, Structure count		*/
/*                Application id												*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_sup_remarks(SUP_REMARKS_T *supervisor, char *application_id, int super_remarks_cnt,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	int txn_sr_no = 0;
	char prob_reason_code[REASON_CODE_SIZE] = {0};
	int prob_sr_no = 0;
	/* varchar form_name[FORM_NAME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[51]; } form_name
 = {0};

	/* varchar remarks[PROB_REMARK_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[151]; } remarks
 = {0};

	/* varchar user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id
 = {0};

	/* varchar ws_id[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } ws_id
 = {0};

	char timestamp[DATE_TIME_SIZE] = {0};

	short txn_sr_no_ind = -1;
	short prob_reason_code_ind = -1;
	short prob_sr_no_ind = -1;
	short form_name_ind = -1;
	short remarks_ind = -1;
	short user_id_ind = -1;
	short ws_id_ind = -1;
	short timestamp_ind = -1;
	

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int count = 0;
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	/* Populate the variables	*/

	strcpy(appl_id, application_id);

#ifdef DEBUG
	userlog("insert_sup_remarks : Appl id - %s", appl_id);
	userlog("insert_sup_remarks : Remark count - %d", super_remarks_cnt);
#endif

	for (count = 0; count < super_remarks_cnt; count++, supervisor++)
	{
	userlog("1. Inside the for loop");
		if (supervisor->txn_sr_no > 0)
		{
			txn_sr_no = supervisor->txn_sr_no;
			txn_sr_no_ind = 0;
		}
		else
			txn_sr_no_ind = -1;

		userlog("After copying the txn_sr_no");

		if (supervisor->prob_sr_no > 0)
		{
			prob_sr_no = supervisor->prob_sr_no;
			prob_sr_no_ind = 0;
		}
		else
			prob_sr_no_ind = -1;

		userlog("After copying the prob_sr_no");

		if (supervisor->prob_reason_code[0] != '\0' )
		{
			strcpy(prob_reason_code, supervisor->prob_reason_code);
			prob_reason_code_ind = 0;
		}
		else
			prob_reason_code_ind = -1;

		userlog("After copying the prob_reason_code");

		if (0 != supervisor->timestamp[0] )
		{
			strcpy(timestamp, supervisor->timestamp);
			timestamp_ind = 0;
		}
		else
			timestamp_ind = -1;

		userlog("After copying the timestamp");

		if (0 != supervisor->form_name[0] )
		{
			strcpy((char*)form_name.arr, supervisor->form_name);
			form_name_ind = 0;
			setlen(form_name);
		}
		else
			form_name_ind = -1;

		userlog("After copying the form_name");

		if (0 != supervisor->remarks[0] )
		{
			strcpy((char*)remarks.arr, supervisor->remarks);
			remarks_ind = 0;
			setlen(remarks);
		}
		else
			remarks_ind = -1;

		userlog("After copying the remarks");

		if (0 != supervisor->user_id[0] )
		{
			strcpy((char*)user_id.arr, supervisor->user_id);
			user_id_ind = 0;
			setlen(user_id);
		}
		else
			user_id_ind = -1;

		userlog("After copying the user_id");


		if (0 != supervisor->ws_id[0] )
		{
			strcpy((char*)ws_id.arr, supervisor->ws_id);
			ws_id_ind = 0;
			setlen(ws_id);
		}
		else
			ws_id_ind = -1;

		userlog("After copying the ws_id");


#ifdef DEBUG
		userlog("insert_sup_remarks : Txn ser no - %d", txn_sr_no);
		userlog("insert_sup_remarks : Problem reason code - %s", prob_reason_code);
		userlog("insert_sup_remarks : Problem sr no - %d", prob_sr_no);
		userlog("insert_sup_remarks : Form name - %s", form_name.arr);
		userlog("insert_sup_remarks : Reamrks - %s", remarks.arr);
		userlog("insert_sup_remarks : User id - %s", user_id.arr);
		userlog("insert_sup_remarks : WS id - %s", ws_id.arr);
		userlog("insert_sup_remarks : Timestamp - %s", timestamp);
#endif

	userlog("Before inserting");

		/* EXEC SQL INSERT INTO SUPERVISOR_REMARKS (APPLID, TXNSERNO, PROBLSERNO, 
										PROBLREASONCODE, FORMNAME, REMARKS, 
										USERID, WSID, TIMESTAMP)
			VALUES (:appl_id, :txn_sr_no:txn_sr_no_ind, :prob_sr_no:prob_sr_no_ind,
			:prob_reason_code:prob_reason_code_ind, :form_name:form_name_ind, 
			:remarks:remarks_ind, :user_id:user_id_ind, :ws_id:ws_id_ind, 
			TO_DATE(:timestamp:timestamp_ind, 'DDMMYYYY HH24MISS')); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 29;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into SUPERVISOR_REMARKS (APPLID,TXNSERNO,PROBLSERNO,\
PROBLREASONCODE,FORMNAME,REMARKS,USERID,WSID, timestamp ) values (:b0,:b1:b2,:\
b3:b4,:b5:b6,:b7:b8,:b9:b10,:b11:b12,:b13:b14,TO_DATE(:b15:b16,'DDMMYYYY HH24M\
ISS'))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )629;
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
  sqlstm.sqhstv[1] = (         void  *)&txn_sr_no;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&txn_sr_no_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&prob_sr_no;
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&prob_sr_no_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)prob_reason_code;
  sqlstm.sqhstl[3] = (unsigned int  )6;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&prob_reason_code_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&form_name;
  sqlstm.sqhstl[4] = (unsigned int  )53;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&form_name_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&remarks;
  sqlstm.sqhstl[5] = (unsigned int  )153;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&remarks_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&user_id;
  sqlstm.sqhstl[6] = (unsigned int  )11;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&user_id_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&ws_id;
  sqlstm.sqhstl[7] = (unsigned int  )18;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&ws_id_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)timestamp;
  sqlstm.sqhstl[8] = (unsigned int  )16;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&timestamp_ind;
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



		userlog("sqlca.sqlcode after the insert : %d",sqlca.sqlcode);

		if(SQLCODE != 0 && SQLCODE != -1)
		{
#ifdef DEBUG
			userlog(" insert_sup_remarks : Insert into SUPERVISOR_REMARKS failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_sup_remarks: Insert into SUPERVISOR_REMARKS failed");
			sprintf(excep_log.error_msg, "insert_sup_remarks: Insert into SUPERVISOR_REMARKS failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		}

#ifdef DEBUG
		userlog("insert_sup_remarks : Record %d inserted successfully", count + 1);
#endif

	}

#ifdef DEBUG
		userlog("insert_sup_remarks : outside the for loop");
#endif
	return SUCCESS;

}

/********************************************************************************/
/* Function name: insert_txn_summons											*/
/* Description	: This function inserts the Summons info related to the         */
/*                application, if any into APPL_TXN_SUMMONS table				*/
/* Input		: Pointer to summons info struture, Structure count				*/
/*                Application id												*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_txn_summons(APPL_TXN_SUMMONS_T *summons, char *application_id, int summons_cnt,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	int txn_sr_no = 0;
	char agency = 0;
	/* varchar summons_number[SUMMON_NO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[11]; } summons_number
 = {0};

	char summons_date[DATE_SIZE] = {0};
	float summons_amt = 0;
	long agency_rev_code = 0;
	char issue_branch_code[ISSUE_BRANCH_CODE_SIZE] = {0};
	char summons_type = 0;
	/* varchar summons_issue_code[SUMMON_ISSUE_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } summons_issue_code
 = {0};

	/* varchar summ_district[SUMM_DIST_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[7]; } summ_district
 = {0};

	/* varchar device[DEVICE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[7]; } device
 = {0};

	

	short txn_sr_no_ind = -1;
	short agency_ind = -1;
	short summons_number_ind = -1;
	short summons_date_ind = -1;
	short summons_amt_ind = -1;
	short agency_rev_code_ind = -1;
	short issue_branch_code_ind = -1;
	short summons_type_ind = -1;
	short summons_issue_code_ind = -1;
	short summ_district_ind = -1;
	short device_ind  = -1;
	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


		int count = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	/* Populate the variables	*/

	strcpy(appl_id, application_id);

#ifdef DEBUG
	userlog("insert_txn_summons : Appl id - %s", appl_id);
	userlog("insert_txn_summons : Summons count - %d", summons_cnt);
#endif

	for (count = 0; count < summons_cnt; count++, summons++)
	{
	
		if (0 < summons->txn_sr_no)
		{
			txn_sr_no = summons->txn_sr_no;
			txn_sr_no_ind = 0;
		}
		else
			txn_sr_no_ind = -1;

		if (0 != summons->agency)
		{
			agency = summons->agency;
			agency_ind = 0;
		}
		else
			agency_ind = -1;

			summons_amt = summons->summons_amt;
			summons_amt_ind = 0;
		

		if (0 != summons->summons_number[0] )
		{
			strcpy((char*)summons_number.arr, summons->summons_number);
			summons_number_ind = 0;
			setlen(summons_number);
		}
		else
			summons_number_ind = -1;

		if (0 != summons->summons_date[0] )
		{
			strcpy(summons_date, summons->summons_date);
			summons_date_ind = 0;
		}
		else
			summons_date_ind = -1;

		if (0 < summons->agency_rev_code)
		{
			agency_rev_code = summons->agency_rev_code;
			agency_rev_code_ind = 0;
		}
		else
			agency_rev_code_ind = -1;

		if (0 != summons->issue_branch_code[0] )
		{
			strcpy(issue_branch_code, summons->issue_branch_code);
			issue_branch_code_ind = 0;
		}
		else
			issue_branch_code_ind = -1;

		if (0 != summons->summons_issue_code[0] )
		{
			strcpy((char*)summons_issue_code.arr, summons->summons_issue_code);
			setlen(summons_issue_code);
			summons_issue_code_ind = 0;
		}
		else
			summons_issue_code_ind = -1;

		if (0 != summons->summons_type)
		{
			summons_type = summons->summons_type;
			summons_type_ind = 0;
		}
		else
			summons_type_ind = -1;

		if (0 != summons->summ_district[0] )
		{
			strcpy((char*)summ_district.arr, summons->summ_district);
			setlen(summ_district);
			summ_district_ind = 0;
		}
		else
			summ_district_ind = -1;

		if (0 != summons->device[0] )
		{
			strcpy((char*)device.arr, summons->device);
			setlen(device);
			device_ind = 0;
		}
		else
			device_ind = -1;

#ifdef DEBUG
		userlog("insert_txn_summons : Txn ser no - %d", txn_sr_no);
		userlog("insert_txn_summons : Agency - %c", agency);
		userlog("insert_txn_summons : Sumons no - %s", summons_number.arr);
		userlog("insert_txn_summons : Summons date - %s", summons_date);
		userlog("insert_txn_summons : Summons amount - %f", summons_amt);
		userlog("insert_txn_summons : Agency rev code - %ld", agency_rev_code);
		userlog("insert_txn_summons : Issue branch code - %s", issue_branch_code);
		userlog("insert_txn_summons : Summons issue code - %s", summons_issue_code.arr);
		userlog("insert_txn_summons : Summons type - %c", summons_type);
		userlog("insert_txn_summons : Summons district - %s", summ_district.arr);
		userlog("insert_txn_summons : Summons device - %s", device.arr);
#endif

	
		/* EXEC SQL INSERT INTO APPL_TXN_SUMMONS (APPLID, TXNSERNO, SUMMNO, 
										SUMMDATE, SUMMAMT, SUMMBYAGENT, AGENCYREVNCODE, 
										SUMMTYPE, SUMMISSUEDCODE, ISSUEDBRANCHCODE,
										SUMMDISTRICT, DEVICE)
			VALUES (:appl_id, :txn_sr_no:txn_sr_no_ind,:summons_number:summons_number_ind, 
				TO_DATE(:summons_date:summons_date_ind, 'DDMMYYYY'), :summons_amt:summons_amt_ind,
				:agency:agency_ind, :agency_rev_code:agency_rev_code_ind,
				:summons_type:summons_type_ind, :summons_issue_code:summons_issue_code_ind,
				:issue_branch_code:issue_branch_code_ind, :summ_district:summ_district_ind,
				:device:device_ind); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 29;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPL_TXN_SUMMONS (APPLID,TXNSERNO,SUMMNO,SUMMDA\
TE,SUMMAMT,SUMMBYAGENT,AGENCYREVNCODE,SUMMTYPE,SUMMISSUEDCODE,ISSUEDBRANCHCODE\
,SUMMDISTRICT,DEVICE) values (:b0,:b1:b2,:b3:b4,TO_DATE(:b5:b6,'DDMMYYYY'),:b7\
:b8,:b9:b10,:b11:b12,:b13:b14,:b15:b16,:b17:b18,:b19:b20,:b21:b22)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )680;
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
  sqlstm.sqhstv[1] = (         void  *)&txn_sr_no;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&txn_sr_no_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&summons_number;
  sqlstm.sqhstl[2] = (unsigned int  )13;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&summons_number_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)summons_date;
  sqlstm.sqhstl[3] = (unsigned int  )9;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&summons_date_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&summons_amt;
  sqlstm.sqhstl[4] = (unsigned int  )sizeof(float);
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&summons_amt_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&agency;
  sqlstm.sqhstl[5] = (unsigned int  )1;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&agency_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&agency_rev_code;
  sqlstm.sqhstl[6] = (unsigned int  )sizeof(long);
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&agency_rev_code_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&summons_type;
  sqlstm.sqhstl[7] = (unsigned int  )1;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&summons_type_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&summons_issue_code;
  sqlstm.sqhstl[8] = (unsigned int  )11;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&summons_issue_code_ind;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)issue_branch_code;
  sqlstm.sqhstl[9] = (unsigned int  )7;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)&issue_branch_code_ind;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&summ_district;
  sqlstm.sqhstl[10] = (unsigned int  )9;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)&summ_district_ind;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)&device;
  sqlstm.sqhstl[11] = (unsigned int  )9;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)&device_ind;
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



		if(SQLCODE != 0 && SQLCODE != -1)
		{
#ifdef DEBUG
			userlog(" insert_txn_summons : Insert into APPL_TXN_SUMMONS failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_txn_summons: Insert into APPL_TXN_SUMMONS failed");
			sprintf(excep_log.error_msg, "insert_txn_summons: Insert into APPL_TXN_SUMMONS failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		}

#ifdef DEBUG
		userlog("insert_txn_summons : Record %d inserted successfully", count + 1);
#endif

	}

	return SUCCESS;

}

/********************************************************************************/
/* Function name: insert_jpj_summons											*/
/* Description	: This function inserts the Summons info related to the         */
/*                application, if any into APPNT_JPJ_SUMMONS table				*/
/* Input		: Pointer to summons info struture, Structure count				*/
/*                Application id												*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_jpj_summons(APPNT_JPJ_SUMMONS_T *jpj_summons, char *application_id, int unsettled_jpj_summons_cnt,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	/* varchar summons_number[SUMMON_NO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[11]; } summons_number
 = {0};

	short summons_number_ind = -1;
	/* varchar issuing_branch_code[JPJ_BRANCH_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[7]; } issuing_branch_code
 = {0};

	short issuing_branch_code_ind = -1;
	char issued_date[DATE_SIZE] = {0};
	short issued_date_ind = -1;
	char summons_type = 0;
	short summons_type_ind = -1;
	/* varchar summons_issue_code[SUMMON_ISSUE_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } summons_issue_code
 = {0};

	short summons_issue_code_ind = -1;
	char offence_category1[OFFENCE_CATEGORY_LEN] = {0};
	short offence_category1_ind = -1;
	char offence_code1[OFFENCE_CODE_SIZE] = {0};
	short offence_code1_ind = -1;
	/* varchar offence_status1[OFFENCE_STATUS_LEN] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } offence_status1
 = {0};

	short offence_status1_ind = -1;
	long offence_amount1 = 0;
	short offence_amount1_ind = -1;
	char offence_category2[OFFENCE_CATEGORY_LEN] = {0};
	short offence_category2_ind = -1;
	char offence_code2[OFFENCE_CODE_SIZE] = {0};
	short offence_code2_ind = -1;
	/* varchar offence_status2[OFFENCE_STATUS_LEN] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } offence_status2
 = {0};

	short offence_status2_ind = -1;
	long offence_amount2 = 0;
	short offence_amount2_ind = -1;
	char offence_category3[OFFENCE_CATEGORY_LEN] = {0};
	short offence_category3_ind = -1;
	char offence_code3[OFFENCE_CODE_SIZE] = {0};
	short offence_code3_ind = -1;
	/* varchar offence_status3[OFFENCE_STATUS_LEN] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } offence_status3
 = {0};

	short offence_status3_ind = -1;
	long offence_amount3 = 0;
	short offence_amount3_ind = -1;
	char offence_category4[OFFENCE_CATEGORY_LEN] = {0};
	short offence_category4_ind = -1;
	char offence_code4[OFFENCE_CODE_SIZE] = {0};
	short offence_code4_ind = -1;
	/* varchar offence_status4[OFFENCE_STATUS_LEN] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } offence_status4
 = {0};

	short offence_status4_ind = -1;
	long offence_amount4 = 0;
	short offence_amount4_ind = -1;
	int  total_number_of_unpaid_fines = 0;
	short total_number_of_unpaid_fines_ind = -1;
	long total_offence_amt = 0;
	short total_offence_amt_ind = -1;
	char last_payable_date[DATE_SIZE] = {0};
	short last_payable_date_ind = -1;
	/* varchar court_code[COURT_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[7]; } court_code
 = {0};

	short court_code_ind = -1;
	char trial_date[DATE_TIME_SIZE] = {0};
	short trial_date_ind = -1;
	char location_code[ISSUED_PLACE_CODE_LEN] = {0};
	short location_code_ind = -1;
	/* varchar officer_id[OFFICER_ID_LEN] = {0}; */ 
struct { unsigned short len; unsigned char arr[14]; } officer_id
 = {0};

	short officer_id_ind = -1;
	/* varchar officer_name[OFFICER_NAME_LEN] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } officer_name
 = {0};

	short officer_name_ind = -1;
	/* varchar e1_vehicle_type[VEHICLE_TYPE_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[4]; } e1_vehicle_type
 = {0};

	short e1_vehicle_type_ind = -1;
	/* varchar e1_vehicle_regn_no[REG_NO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[11]; } e1_vehicle_regn_no
 = {0};

	short e1_vehicle_regn_no_ind  = -1;
	/* varchar trailer_number[TRAILER_NUMBER_LEN] = {0}; */ 
struct { unsigned short len; unsigned char arr[11]; } trailer_number
 = {0};

	short trailer_number_ind = -1;
	/* varchar path_from[PATH_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[11]; } path_from
 = {0};

	short path_from_ind = -1;
	/* varchar path_to[PATH_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[11]; } path_to
 = {0};
	
	short path_to_ind = -1;
	char summ_legacy_flag = 0;
	short summ_legacy_flag_ind = 0;
	char load_on_chip_flag = 0;
	short load_on_chip_flag_ind = -1;

sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


		int count = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	/* Populate the variables	*/

	strcpy(appl_id, application_id);

#ifdef DEBUG
	userlog("insert_jpj_summons : Appl id - %s", appl_id);
	userlog("insert_jpj_summons : JPJ Summons count - %d", unsettled_jpj_summons_cnt);
#endif

	for (count = 0; count < unsettled_jpj_summons_cnt; count++, jpj_summons++)
	{

		if ('\0' != jpj_summons->summons_type)
		{
			summons_type = jpj_summons->summons_type ;
			summons_type_ind = 0;
		}
		else
			summons_type_ind = -1;

		if (0 < jpj_summons->offence_amount1)
		{
			offence_amount1 = jpj_summons->offence_amount1 ;
			offence_amount1_ind = 0;
		}
		else
			offence_amount1_ind = -1;

		if (0 < jpj_summons->offence_amount2)
		{
			offence_amount2 = jpj_summons->offence_amount2;
			offence_amount2_ind = 0;
		}
		else
			offence_amount2_ind = -1;

		if (0 < jpj_summons->offence_amount3)
		{
			offence_amount3 = jpj_summons->offence_amount3;
			offence_amount3_ind = 0;
		}
		else
			offence_amount3_ind = -1;

		if (0 < jpj_summons->offence_amount4)
		{
			offence_amount4 = jpj_summons->offence_amount4;
			offence_amount4_ind = 0;
		}
		else
			offence_amount4_ind = -1;

		if (0 < jpj_summons->total_number_of_unpaid_fines)
		{
			total_number_of_unpaid_fines = jpj_summons->total_number_of_unpaid_fines;
			total_number_of_unpaid_fines_ind = 0;
		}
		else
			total_number_of_unpaid_fines_ind = -1;

		if (0 < jpj_summons->total_offence_amt)
		{
			total_offence_amt = jpj_summons->total_offence_amt;
			total_offence_amt_ind = 0;
		}
		else
			total_offence_amt_ind = -1;

		if (0 < jpj_summons->summons_leg_flag)
		{
			summ_legacy_flag = jpj_summons->summons_leg_flag;
			summ_legacy_flag_ind = 0;
		}
		else
			summ_legacy_flag_ind = -1;

		load_on_chip_flag = YES;
		load_on_chip_flag_ind = 0;
		

		if (0 != jpj_summons->issued_date[0])
		{
			strcpy(issued_date, jpj_summons->issued_date);
			issued_date_ind = 0;
		}
		else
			issued_date_ind = -1;

		if (0 != jpj_summons->offence_category1[0])
		{
			strcpy(offence_category1, jpj_summons->offence_category1);
			offence_category1_ind = 0;
		}
		else
			offence_category1_ind = -1;

		if (0 != jpj_summons->offence_code1[0])
		{
			strcpy(offence_code1, jpj_summons->offence_code1);
			offence_code1_ind = 0;
		}
		else
			offence_code1_ind = -1;

		if (0 != jpj_summons->offence_category2[0])
		{
			strcpy(offence_category2, jpj_summons->offence_category2);
			offence_category2_ind = 0;
		}
		else
			offence_category2_ind = -1;

		if (0 != jpj_summons->offence_code2[0])
		{
			strcpy(offence_code2, jpj_summons->offence_code2);
			offence_code2_ind = 0;
		}
		else
			offence_code2_ind = -1;

		if (0 != jpj_summons->offence_category3[0])
		{
			strcpy(offence_category3, jpj_summons->offence_category3);
			offence_category3_ind = 0;
		}
		else
			offence_category3_ind = -1;

		if (0 != jpj_summons->offence_code3[0])
		{
			strcpy(offence_code3, jpj_summons->offence_code3);
			offence_code3_ind = 0;
		}	
		else
			offence_code3_ind = -1;

		if (0 != jpj_summons->offence_category4[0])
		{
			strcpy(offence_category4, jpj_summons->offence_category4);
			offence_category4_ind = 0;
		}
		else
			offence_category4_ind = -1;

		if (0 != jpj_summons->offence_code4[0])
		{
			strcpy(offence_code4, jpj_summons->offence_code4);
			offence_code4_ind = 0;
		}
		else
			offence_code4_ind = -1;

		if (0 != jpj_summons->last_payable_date[0])
		{
			strcpy(last_payable_date, jpj_summons->last_payable_date);
			last_payable_date_ind = 0;
		}
		else
			last_payable_date_ind = -1;

		if (0 != jpj_summons->trial_date[0])
		{
			strcpy(trial_date, jpj_summons->trial_date);
			trial_date_ind = 0;
		}
		else
			trial_date_ind = -1;

		if (0 != jpj_summons->location_code[0])
		{
			strcpy(location_code, jpj_summons->location_code);
			location_code_ind = 0;
		}
		else
			location_code_ind = -1;

		if (0 != jpj_summons->summons_number[0] )
		{
			strcpy((char*)summons_number.arr, jpj_summons->summons_number);
			summons_number_ind = 0;
			setlen(summons_number);
		}
		else
			summons_number_ind = -1;

		if (0 != jpj_summons->issuing_branch_code[0] )
		{
			strcpy((char*)issuing_branch_code.arr, jpj_summons->issuing_branch_code);
			issuing_branch_code_ind = 0;
			setlen(issuing_branch_code);
		}
		else
			issuing_branch_code_ind = -1;

		if (0 != jpj_summons->summons_issue_code[0] )
		{
			strcpy((char*)summons_issue_code.arr, jpj_summons->summons_issue_code);
			summons_issue_code_ind = 0;
			setlen(summons_issue_code);
		}
		else
			summons_issue_code_ind = -1;

		if (0 != jpj_summons->offence_status1[0] )
		{
			strcpy((char*)offence_status1.arr, jpj_summons->offence_status1);
			offence_status1_ind = 0;
			setlen(offence_status1);
		}
		else
			offence_status1_ind = -1;

		if (0 != jpj_summons->offence_status2[0] )
		{
			strcpy((char*)offence_status2.arr, jpj_summons->offence_status2);
			offence_status2_ind = 0;
			setlen(offence_status2);
		}
		else
			offence_status2_ind = -1;

		if (0 != jpj_summons->offence_status3[0] )
		{
			strcpy((char*)offence_status3.arr, jpj_summons->offence_status3);
			offence_status3_ind = 0;
			setlen(offence_status3);
		}
		else
			offence_status3_ind = -1;

		if (0 != jpj_summons->offence_status4[0] )
		{
			strcpy((char*)offence_status4.arr, jpj_summons->offence_status4);
			offence_status4_ind = 0;
			setlen(offence_status4);
		}
		else
			offence_status4_ind = -1;

		if (0 != jpj_summons->court_code[0] )
		{
			strcpy((char*)court_code.arr, jpj_summons->court_code);
			court_code_ind = 0;
			setlen(court_code);
		}
		else
			court_code_ind = -1;

		if (0 != jpj_summons->officer_id[0] )
		{
			strcpy((char*)officer_id.arr, jpj_summons->officer_id);
			officer_id_ind = 0;
			setlen(officer_id);
		}
		else
			officer_id_ind = -1;

		if (0 != jpj_summons->officer_name[0] )
		{
			strcpy((char*)officer_name.arr, jpj_summons->officer_name);
			officer_name_ind = 0;
			setlen(officer_name);
		}
		else
			officer_name_ind = -1;

		if (0 != jpj_summons->e1_vehicle_type[0] )
		{
			strcpy((char*)e1_vehicle_type.arr, jpj_summons->e1_vehicle_type);
			e1_vehicle_type_ind = 0;
			setlen(e1_vehicle_type);
		}
		else
			e1_vehicle_type_ind = -1;

		if (0 != jpj_summons->e1_vehicle_regn_no[0] )
		{
			strcpy((char*)e1_vehicle_regn_no.arr, jpj_summons->e1_vehicle_regn_no);
			e1_vehicle_regn_no_ind = 0;
			setlen(e1_vehicle_regn_no);
		}
		else
			e1_vehicle_regn_no_ind = -1;

		if (0 != jpj_summons->trailer_number[0] )
		{
			strcpy((char*)trailer_number.arr, jpj_summons->trailer_number);
			trailer_number_ind = 0;
			setlen(trailer_number);
		}
		else
			trailer_number_ind = -1;

		if (0 != jpj_summons->path_from[0] )
		{
			strcpy((char*)path_from.arr, jpj_summons->path_from);
			path_from_ind = 0;
			setlen(path_from);
		}
		else
			path_from_ind = -1;

		if (0 != jpj_summons->path_to[0] )
		{
			strcpy((char*)path_to.arr, jpj_summons->path_to);
			path_to_ind = 0;
			setlen(path_to);
		}
		else
			path_to_ind = -1;

#ifdef DEBUG
		userlog("insert_jpj_summons : Summons No - %s", summons_number.arr);
		userlog("insert_jpj_summons : Issuing branch code - %s", issuing_branch_code.arr);
		userlog("insert_jpj_summons : Issue date - %s", issued_date);
		userlog("insert_jpj_summons : Summons type- %c", summons_type);
		userlog("insert_jpj_summons : Summons issue code - %s", summons_issue_code.arr);
		userlog("insert_jpj_summons : Offence category1 - %s", offence_category1);
		userlog("insert_jpj_summons : Offence code1 - %s", offence_code1);
		userlog("insert_jpj_summons : Offence status1 - %s", offence_status1.arr);
		userlog("insert_jpj_summons : Offence amount1 - %ld", offence_amount1);
		userlog("insert_jpj_summons : Offence category2 - %s", offence_category2);
		userlog("insert_jpj_summons : Offence code2 - %s", offence_code2);
		userlog("insert_jpj_summons : Offence status2 - %s", offence_status2.arr);
		userlog("insert_jpj_summons : Offence amount2 - %ld", offence_amount2);
		userlog("insert_jpj_summons : Offence category3 - %s", offence_category3);
		userlog("insert_jpj_summons : Offence code3 - %s", offence_code3);
		userlog("insert_jpj_summons : Offence status3 - %s", offence_status3.arr);
		userlog("insert_jpj_summons : Offence amount3 - %ld", offence_amount3);
		userlog("insert_jpj_summons : Offence category4 - %s", offence_category4);
		userlog("insert_jpj_summons : Offence code4 - %s", offence_code4);
		userlog("insert_jpj_summons : Offence status4 - %s", offence_status4.arr);
		userlog("insert_jpj_summons : Offence amount4 - %ld", offence_amount4);
		userlog("insert_jpj_summons : Unpaid fines - %d", total_number_of_unpaid_fines);
		userlog("insert_jpj_summons : Total offence amt - %ld", total_offence_amt);
		userlog("insert_jpj_summons : Last payable date - %s", last_payable_date);
		userlog("insert_jpj_summons : Court code - %s", court_code.arr);
		userlog("insert_jpj_summons : Trial date - %s", trial_date);
		userlog("insert_jpj_summons : Location code - %s", location_code);
		userlog("insert_jpj_summons : Officer id - %s", officer_id.arr);
		userlog("insert_jpj_summons : Officer name - %s", officer_name.arr);
		userlog("insert_jpj_summons : E1 vehicle type - %s", e1_vehicle_type.arr);
		userlog("insert_jpj_summons : E1 vehicle reg no - %s", e1_vehicle_regn_no.arr);
		userlog("insert_jpj_summons : Trailer no - %s", trailer_number.arr);
		userlog("insert_jpj_summons : Path from - %s", path_from.arr);
		userlog("insert_jpj_summons : Path to - %s", path_to.arr);
		userlog("insert_jpj_summons : Summons legacy flag - %c", summ_legacy_flag);
		userlog("insert_jpj_summons : Load on chip flag - %c", load_on_chip_flag);
#endif

		/* EXEC SQL INSERT INTO APPNT_JPJ_SUMMONS (APPLID, SUMMNO, BRANCHCODEJPJ, ISSUEDDATE, 
									SUMMTYPE, SUMMISSUEDCODE, 
									OFFENCECAT1, OFFENCECODE1, OFFENCESTAT1, OFFENCEAMT1,
									OFFENCECAT2, OFFENCECODE2, OFFENCESTAT2, OFFENCEAMT2, 
									OFFENCECAT3, OFFENCECODE3, OFFENCESTAT3, OFFENCEAMT3, 
									OFFENCECAT4, OFFENCECODE4, OFFENCESTAT4, OFFENCEAMT4, 
									TOTNOUNPAIDFINE, TOTOFFENCEAMT, LASTPAYABLEDATE, COURTCODE, 
									TRIALDATE, 	LOCATIONCODE, OFFICERID, OFFICERNAME, E1VEHTYPE,
									E1VEHREGNNO, TRAILER, PATHFROM, PATHTO, SUMMLEGFLAG, LOADONCHIPIND)
									VALUES (:appl_id, :summons_number:summons_number_ind, 
				:issuing_branch_code:issuing_branch_code_ind,TO_DATE(:issued_date:issued_date_ind, 'DDMMYYYY'), 
				:summons_type:summons_type_ind,	:summons_issue_code:summons_issue_code_ind,
				:offence_category1:offence_category1_ind, :offence_code1:offence_code1_ind,
				:offence_status1:offence_status1_ind,:offence_amount1:offence_amount1_ind, :offence_category2:offence_category2_ind,
				:offence_code2:offence_code2_ind,:offence_status2:offence_status2_ind, :offence_amount2:offence_amount2_ind, 
				:offence_category3:offence_category3_ind,:offence_code3:offence_code3_ind, :offence_status3:offence_status3_ind,
				:offence_amount3:offence_amount3_ind, :offence_category4:offence_category4_ind, :offence_code4:offence_code4_ind, 
				:offence_status4:offence_status4_ind,:offence_amount4:offence_amount4_ind, 
				:total_number_of_unpaid_fines:total_number_of_unpaid_fines_ind,	:total_offence_amt:total_offence_amt_ind, 
				TO_DATE(:last_payable_date:last_payable_date_ind, 'DDMMYYYY'),
				:court_code:court_code_ind, TO_DATE(:trial_date:trial_date_ind, 'DDMMYYYY HH24MISS'), 
				:location_code:location_code_ind, :officer_id:officer_id_ind, :officer_name:officer_name_ind,
				:e1_vehicle_type:e1_vehicle_type_ind, :e1_vehicle_regn_no:e1_vehicle_regn_no_ind, :trailer_number:trailer_number_ind,
				:path_from:path_from_ind, :path_to:path_to_ind, :summ_legacy_flag:summ_legacy_flag_ind,
				:load_on_chip_flag:load_on_chip_flag_ind); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 37;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPNT_JPJ_SUMMONS (APPLID,SUMMNO,BRANCHCODEJPJ,\
ISSUEDDATE,SUMMTYPE,SUMMISSUEDCODE,OFFENCECAT1,OFFENCECODE1,OFFENCESTAT1,OFFEN\
CEAMT1,OFFENCECAT2,OFFENCECODE2,OFFENCESTAT2,OFFENCEAMT2,OFFENCECAT3,OFFENCECO\
DE3,OFFENCESTAT3,OFFENCEAMT3,OFFENCECAT4,OFFENCECODE4,OFFENCESTAT4,OFFENCEAMT4\
,TOTNOUNPAIDFINE,TOTOFFENCEAMT,LASTPAYABLEDATE,COURTCODE,TRIALDATE,LOCATIONCOD\
E,OFFICERID,OFFICERNAME,E1VEHTYPE,E1VEHREGNNO,TRAILER,PATHFROM,PATHTO,SUMMLEGF\
LAG,LOADONCHIPIND) values (:b0,:b1:b2,:b3:b4,TO_DATE(:b5:b6,'DDMMYYYY'),:b7:b8\
,:b9:b10,:b11:b12,:b13:b14,:b15:b16,:b17:b18,:b19:b20,:b21:b22,:b23:b24,:b25:b\
26,:b27:b28,:b29:b30,:b31:b32,:b33:b34,:b35:b36,:b37:b38,:b39:b40,:b41:b42,:b4\
3:b44,:b45:b46,TO_DATE(:b47:b48,'DDMMYYYY'),:b49:b50,TO_DATE(:b51:b52,'DDMMYYY\
Y HH24MISS'),:b53:b54,:b55:b56,:b57:b58,:b59:b60,:b61:b62,:b63:b64,:b65:b66,:b\
67:b68,:b69:b70,:b71:b72)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )743;
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
  sqlstm.sqhstv[1] = (         void  *)&summons_number;
  sqlstm.sqhstl[1] = (unsigned int  )13;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&summons_number_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&issuing_branch_code;
  sqlstm.sqhstl[2] = (unsigned int  )9;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&issuing_branch_code_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)issued_date;
  sqlstm.sqhstl[3] = (unsigned int  )9;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&issued_date_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&summons_type;
  sqlstm.sqhstl[4] = (unsigned int  )1;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&summons_type_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&summons_issue_code;
  sqlstm.sqhstl[5] = (unsigned int  )11;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&summons_issue_code_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)offence_category1;
  sqlstm.sqhstl[6] = (unsigned int  )6;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&offence_category1_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)offence_code1;
  sqlstm.sqhstl[7] = (unsigned int  )4;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&offence_code1_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&offence_status1;
  sqlstm.sqhstl[8] = (unsigned int  )5;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&offence_status1_ind;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&offence_amount1;
  sqlstm.sqhstl[9] = (unsigned int  )sizeof(long);
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)&offence_amount1_ind;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)offence_category2;
  sqlstm.sqhstl[10] = (unsigned int  )6;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)&offence_category2_ind;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)offence_code2;
  sqlstm.sqhstl[11] = (unsigned int  )4;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)&offence_code2_ind;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqhstv[12] = (         void  *)&offence_status2;
  sqlstm.sqhstl[12] = (unsigned int  )5;
  sqlstm.sqhsts[12] = (         int  )0;
  sqlstm.sqindv[12] = (         void  *)&offence_status2_ind;
  sqlstm.sqinds[12] = (         int  )0;
  sqlstm.sqharm[12] = (unsigned int  )0;
  sqlstm.sqadto[12] = (unsigned short )0;
  sqlstm.sqtdso[12] = (unsigned short )0;
  sqlstm.sqhstv[13] = (         void  *)&offence_amount2;
  sqlstm.sqhstl[13] = (unsigned int  )sizeof(long);
  sqlstm.sqhsts[13] = (         int  )0;
  sqlstm.sqindv[13] = (         void  *)&offence_amount2_ind;
  sqlstm.sqinds[13] = (         int  )0;
  sqlstm.sqharm[13] = (unsigned int  )0;
  sqlstm.sqadto[13] = (unsigned short )0;
  sqlstm.sqtdso[13] = (unsigned short )0;
  sqlstm.sqhstv[14] = (         void  *)offence_category3;
  sqlstm.sqhstl[14] = (unsigned int  )6;
  sqlstm.sqhsts[14] = (         int  )0;
  sqlstm.sqindv[14] = (         void  *)&offence_category3_ind;
  sqlstm.sqinds[14] = (         int  )0;
  sqlstm.sqharm[14] = (unsigned int  )0;
  sqlstm.sqadto[14] = (unsigned short )0;
  sqlstm.sqtdso[14] = (unsigned short )0;
  sqlstm.sqhstv[15] = (         void  *)offence_code3;
  sqlstm.sqhstl[15] = (unsigned int  )4;
  sqlstm.sqhsts[15] = (         int  )0;
  sqlstm.sqindv[15] = (         void  *)&offence_code3_ind;
  sqlstm.sqinds[15] = (         int  )0;
  sqlstm.sqharm[15] = (unsigned int  )0;
  sqlstm.sqadto[15] = (unsigned short )0;
  sqlstm.sqtdso[15] = (unsigned short )0;
  sqlstm.sqhstv[16] = (         void  *)&offence_status3;
  sqlstm.sqhstl[16] = (unsigned int  )5;
  sqlstm.sqhsts[16] = (         int  )0;
  sqlstm.sqindv[16] = (         void  *)&offence_status3_ind;
  sqlstm.sqinds[16] = (         int  )0;
  sqlstm.sqharm[16] = (unsigned int  )0;
  sqlstm.sqadto[16] = (unsigned short )0;
  sqlstm.sqtdso[16] = (unsigned short )0;
  sqlstm.sqhstv[17] = (         void  *)&offence_amount3;
  sqlstm.sqhstl[17] = (unsigned int  )sizeof(long);
  sqlstm.sqhsts[17] = (         int  )0;
  sqlstm.sqindv[17] = (         void  *)&offence_amount3_ind;
  sqlstm.sqinds[17] = (         int  )0;
  sqlstm.sqharm[17] = (unsigned int  )0;
  sqlstm.sqadto[17] = (unsigned short )0;
  sqlstm.sqtdso[17] = (unsigned short )0;
  sqlstm.sqhstv[18] = (         void  *)offence_category4;
  sqlstm.sqhstl[18] = (unsigned int  )6;
  sqlstm.sqhsts[18] = (         int  )0;
  sqlstm.sqindv[18] = (         void  *)&offence_category4_ind;
  sqlstm.sqinds[18] = (         int  )0;
  sqlstm.sqharm[18] = (unsigned int  )0;
  sqlstm.sqadto[18] = (unsigned short )0;
  sqlstm.sqtdso[18] = (unsigned short )0;
  sqlstm.sqhstv[19] = (         void  *)offence_code4;
  sqlstm.sqhstl[19] = (unsigned int  )4;
  sqlstm.sqhsts[19] = (         int  )0;
  sqlstm.sqindv[19] = (         void  *)&offence_code4_ind;
  sqlstm.sqinds[19] = (         int  )0;
  sqlstm.sqharm[19] = (unsigned int  )0;
  sqlstm.sqadto[19] = (unsigned short )0;
  sqlstm.sqtdso[19] = (unsigned short )0;
  sqlstm.sqhstv[20] = (         void  *)&offence_status4;
  sqlstm.sqhstl[20] = (unsigned int  )5;
  sqlstm.sqhsts[20] = (         int  )0;
  sqlstm.sqindv[20] = (         void  *)&offence_status4_ind;
  sqlstm.sqinds[20] = (         int  )0;
  sqlstm.sqharm[20] = (unsigned int  )0;
  sqlstm.sqadto[20] = (unsigned short )0;
  sqlstm.sqtdso[20] = (unsigned short )0;
  sqlstm.sqhstv[21] = (         void  *)&offence_amount4;
  sqlstm.sqhstl[21] = (unsigned int  )sizeof(long);
  sqlstm.sqhsts[21] = (         int  )0;
  sqlstm.sqindv[21] = (         void  *)&offence_amount4_ind;
  sqlstm.sqinds[21] = (         int  )0;
  sqlstm.sqharm[21] = (unsigned int  )0;
  sqlstm.sqadto[21] = (unsigned short )0;
  sqlstm.sqtdso[21] = (unsigned short )0;
  sqlstm.sqhstv[22] = (         void  *)&total_number_of_unpaid_fines;
  sqlstm.sqhstl[22] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[22] = (         int  )0;
  sqlstm.sqindv[22] = (         void  *)&total_number_of_unpaid_fines_ind;
  sqlstm.sqinds[22] = (         int  )0;
  sqlstm.sqharm[22] = (unsigned int  )0;
  sqlstm.sqadto[22] = (unsigned short )0;
  sqlstm.sqtdso[22] = (unsigned short )0;
  sqlstm.sqhstv[23] = (         void  *)&total_offence_amt;
  sqlstm.sqhstl[23] = (unsigned int  )sizeof(long);
  sqlstm.sqhsts[23] = (         int  )0;
  sqlstm.sqindv[23] = (         void  *)&total_offence_amt_ind;
  sqlstm.sqinds[23] = (         int  )0;
  sqlstm.sqharm[23] = (unsigned int  )0;
  sqlstm.sqadto[23] = (unsigned short )0;
  sqlstm.sqtdso[23] = (unsigned short )0;
  sqlstm.sqhstv[24] = (         void  *)last_payable_date;
  sqlstm.sqhstl[24] = (unsigned int  )9;
  sqlstm.sqhsts[24] = (         int  )0;
  sqlstm.sqindv[24] = (         void  *)&last_payable_date_ind;
  sqlstm.sqinds[24] = (         int  )0;
  sqlstm.sqharm[24] = (unsigned int  )0;
  sqlstm.sqadto[24] = (unsigned short )0;
  sqlstm.sqtdso[24] = (unsigned short )0;
  sqlstm.sqhstv[25] = (         void  *)&court_code;
  sqlstm.sqhstl[25] = (unsigned int  )9;
  sqlstm.sqhsts[25] = (         int  )0;
  sqlstm.sqindv[25] = (         void  *)&court_code_ind;
  sqlstm.sqinds[25] = (         int  )0;
  sqlstm.sqharm[25] = (unsigned int  )0;
  sqlstm.sqadto[25] = (unsigned short )0;
  sqlstm.sqtdso[25] = (unsigned short )0;
  sqlstm.sqhstv[26] = (         void  *)trial_date;
  sqlstm.sqhstl[26] = (unsigned int  )16;
  sqlstm.sqhsts[26] = (         int  )0;
  sqlstm.sqindv[26] = (         void  *)&trial_date_ind;
  sqlstm.sqinds[26] = (         int  )0;
  sqlstm.sqharm[26] = (unsigned int  )0;
  sqlstm.sqadto[26] = (unsigned short )0;
  sqlstm.sqtdso[26] = (unsigned short )0;
  sqlstm.sqhstv[27] = (         void  *)location_code;
  sqlstm.sqhstl[27] = (unsigned int  )6;
  sqlstm.sqhsts[27] = (         int  )0;
  sqlstm.sqindv[27] = (         void  *)&location_code_ind;
  sqlstm.sqinds[27] = (         int  )0;
  sqlstm.sqharm[27] = (unsigned int  )0;
  sqlstm.sqadto[27] = (unsigned short )0;
  sqlstm.sqtdso[27] = (unsigned short )0;
  sqlstm.sqhstv[28] = (         void  *)&officer_id;
  sqlstm.sqhstl[28] = (unsigned int  )16;
  sqlstm.sqhsts[28] = (         int  )0;
  sqlstm.sqindv[28] = (         void  *)&officer_id_ind;
  sqlstm.sqinds[28] = (         int  )0;
  sqlstm.sqharm[28] = (unsigned int  )0;
  sqlstm.sqadto[28] = (unsigned short )0;
  sqlstm.sqtdso[28] = (unsigned short )0;
  sqlstm.sqhstv[29] = (         void  *)&officer_name;
  sqlstm.sqhstl[29] = (unsigned int  )43;
  sqlstm.sqhsts[29] = (         int  )0;
  sqlstm.sqindv[29] = (         void  *)&officer_name_ind;
  sqlstm.sqinds[29] = (         int  )0;
  sqlstm.sqharm[29] = (unsigned int  )0;
  sqlstm.sqadto[29] = (unsigned short )0;
  sqlstm.sqtdso[29] = (unsigned short )0;
  sqlstm.sqhstv[30] = (         void  *)&e1_vehicle_type;
  sqlstm.sqhstl[30] = (unsigned int  )6;
  sqlstm.sqhsts[30] = (         int  )0;
  sqlstm.sqindv[30] = (         void  *)&e1_vehicle_type_ind;
  sqlstm.sqinds[30] = (         int  )0;
  sqlstm.sqharm[30] = (unsigned int  )0;
  sqlstm.sqadto[30] = (unsigned short )0;
  sqlstm.sqtdso[30] = (unsigned short )0;
  sqlstm.sqhstv[31] = (         void  *)&e1_vehicle_regn_no;
  sqlstm.sqhstl[31] = (unsigned int  )13;
  sqlstm.sqhsts[31] = (         int  )0;
  sqlstm.sqindv[31] = (         void  *)&e1_vehicle_regn_no_ind;
  sqlstm.sqinds[31] = (         int  )0;
  sqlstm.sqharm[31] = (unsigned int  )0;
  sqlstm.sqadto[31] = (unsigned short )0;
  sqlstm.sqtdso[31] = (unsigned short )0;
  sqlstm.sqhstv[32] = (         void  *)&trailer_number;
  sqlstm.sqhstl[32] = (unsigned int  )13;
  sqlstm.sqhsts[32] = (         int  )0;
  sqlstm.sqindv[32] = (         void  *)&trailer_number_ind;
  sqlstm.sqinds[32] = (         int  )0;
  sqlstm.sqharm[32] = (unsigned int  )0;
  sqlstm.sqadto[32] = (unsigned short )0;
  sqlstm.sqtdso[32] = (unsigned short )0;
  sqlstm.sqhstv[33] = (         void  *)&path_from;
  sqlstm.sqhstl[33] = (unsigned int  )13;
  sqlstm.sqhsts[33] = (         int  )0;
  sqlstm.sqindv[33] = (         void  *)&path_from_ind;
  sqlstm.sqinds[33] = (         int  )0;
  sqlstm.sqharm[33] = (unsigned int  )0;
  sqlstm.sqadto[33] = (unsigned short )0;
  sqlstm.sqtdso[33] = (unsigned short )0;
  sqlstm.sqhstv[34] = (         void  *)&path_to;
  sqlstm.sqhstl[34] = (unsigned int  )13;
  sqlstm.sqhsts[34] = (         int  )0;
  sqlstm.sqindv[34] = (         void  *)&path_to_ind;
  sqlstm.sqinds[34] = (         int  )0;
  sqlstm.sqharm[34] = (unsigned int  )0;
  sqlstm.sqadto[34] = (unsigned short )0;
  sqlstm.sqtdso[34] = (unsigned short )0;
  sqlstm.sqhstv[35] = (         void  *)&summ_legacy_flag;
  sqlstm.sqhstl[35] = (unsigned int  )1;
  sqlstm.sqhsts[35] = (         int  )0;
  sqlstm.sqindv[35] = (         void  *)&summ_legacy_flag_ind;
  sqlstm.sqinds[35] = (         int  )0;
  sqlstm.sqharm[35] = (unsigned int  )0;
  sqlstm.sqadto[35] = (unsigned short )0;
  sqlstm.sqtdso[35] = (unsigned short )0;
  sqlstm.sqhstv[36] = (         void  *)&load_on_chip_flag;
  sqlstm.sqhstl[36] = (unsigned int  )1;
  sqlstm.sqhsts[36] = (         int  )0;
  sqlstm.sqindv[36] = (         void  *)&load_on_chip_flag_ind;
  sqlstm.sqinds[36] = (         int  )0;
  sqlstm.sqharm[36] = (unsigned int  )0;
  sqlstm.sqadto[36] = (unsigned short )0;
  sqlstm.sqtdso[36] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
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
				userlog("insert_jpj_summons : Insert into in APPNT_JPJ_SUMMONS table  : %s", SQLMSG);
#endif

		if(SQLCODE != 0 && SQLCODE != -1)
		{
#ifdef DEBUG
				userlog("insert_jpj_summons : Insert into in APPNT_JPJ_SUMMONS table failed : %s", SQLMSG);
#endif
			/* Log the error */
			strcpy(prog_log.remarks,"insert_jpj_summons : Insert into in APPNT_JPJ_SUMMONS table failed");
			sprintf(excep_log.error_msg,"insert_jpj_summons : Insert into in APPNT_JPJ_SUMMONS table failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);

			return INSERT_ERROR;
		}
	
#ifdef DEBUG
		userlog("insert_jpj_summons : Record %d inserted successfully", count + 1);
#endif
	}

	return SUCCESS;

}

/********************************************************************************/
/* Function name: insert_pdrm_summons											*/
/* Description	: This function inserts the Summons info related to the         */
/*                application, if any into APPNT_PDRM_SUMMONS table				*/
/* Input		: Pointer to summons info struture, Structure count				*/
/*                Application id, KPT no										*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_pdrm_summons(APPNT_PDRM_SUMMONS_T *pdrm_summons, char *application_id, char *kptno, int unsettled_pdrm_summons_cnt,void * ctx)
{
struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	char kpt_no[KPT_SIZE] = {0};
	/* varchar summ_district[SUMM_DIST_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[7]; } summ_district
 = {0};

	/* varchar device[DEVICE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[7]; } device
 = {0};

	char summ_type = 0;
	/* varchar summons_number[SUMMON_NO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[11]; } summons_number
 = {0};

	char summons_date[DATE_TIME_SIZE] = {0};
	/* varchar vehicle_number[VEHICLE_NO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[11]; } vehicle_number
 = {0};

	int compound1 = 0;
	int compound2 = 0;
	int compound3 = 0;
	long total_compound = 0;
	/* varchar offender_name[OFFENDER_NAME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[51]; } offender_name
 = {0};

	/* varchar offence1[PDRM_OFFENCE_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[25]; } offence1
 = {0};

	/* varchar offence2[PDRM_OFFENCE_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[25]; } offence2
 = {0};

	/* varchar offence3[PDRM_OFFENCE_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[25]; } offence3
 = {0};

	/* varchar vehicle_type[VEHICLE_TYPE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } vehicle_type
 = {0};

	char offence_date[DATE_TIME_SIZE] = {0};
	/* varchar offence_place[PDRM_OFFENCE_PLACE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } offence_place
 = {0};

	char compound_date[DATE_SIZE] = {0};
	char court_date[DATE_SIZE] = {0};
	char cad_id[CAD_ID_SIZE] = {0};
	char summons_leg_flag = 0;
	char load_on_chip = 0;


	short kpt_no_ind  = -1;
	short summ_district_ind  = -1;
	short device_ind  = -1;
	short summ_type_ind  = -1;
	short summons_number_ind  = -1;
	short summons_date_ind  = -1;
	short vehicle_number_ind  = -1;
	short compound1_ind  = -1;
	short compound2_ind  = -1;
	short compound3_ind  = -1;
	short total_compound_ind  = -1;
	short offender_name_ind  = -1;
	short offence1_ind  = -1;
	short offence2_ind  = -1;
	short offence3_ind  = -1;
	short vehicle_type_ind  = -1;
	short offence_date_ind  = -1;
	short offence_place_ind  = -1;
	short compound_date_ind  = -1;
	short court_date_ind  = -1;
	short pdrm_branch_code_ind = -1;
	short cad_id_ind = -1;
	short summons_leg_flag_ind = -1;
	short load_on_chip_ind = -1;

	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 

	
	int count = 0;
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	

	/* Populate the variables	*/

	strcpy(appl_id, application_id);

	if (0 != kptno[0])
	{
		strcpy(kpt_no, kptno);
		kpt_no_ind = 0;
	}

#ifdef DEBUG
	userlog("insert_pdrm_summons : KPT no - %s", kpt_no);
	userlog("insert_pdrm_summons : PDRM Summons count - %d", unsettled_pdrm_summons_cnt);
#endif

	for (count = 0; count < unsettled_pdrm_summons_cnt; count++, pdrm_summons++)
	{
		if (0 != pdrm_summons->summ_type)
		{
			summ_type = pdrm_summons->summ_type;
			summ_type_ind = 0;
		}
		else
			summ_type_ind = -1;

		if (0 != pdrm_summons->summons_date[0])
		{
			strcpy(summons_date, pdrm_summons->summons_date);
			summons_date_ind = 0;
		}
		else
			summons_date_ind = -1;


		if (0 != pdrm_summons->offence_date[0])
		{
			strcpy(offence_date, pdrm_summons->offence_date);
			offence_date_ind = 0;
		}
		else
			offence_date_ind = -1;

		if (0 != pdrm_summons->compound_date[0])
		{
			strcpy(compound_date, pdrm_summons->compound_date);
			compound_date_ind = 0;
		}
		else
			compound_date_ind = -1;

		if (0 != pdrm_summons->court_date[0])
		{
			strcpy(court_date, pdrm_summons->court_date);
			court_date_ind = 0;
		}
		else
			court_date_ind = -1;

		if (0 != pdrm_summons->summ_district[0])
		{
			strcpy((char*)summ_district.arr, pdrm_summons->summ_district);
			summ_district_ind = 0;
			setlen(summ_district);
		}
		else
			summ_district_ind = -1;

		if (0 != pdrm_summons->device[0])
		{
			strcpy((char*)device.arr, pdrm_summons->device);
			device_ind = 0;
			setlen(device);
		}
		else
			device_ind = -1;

		if (0 != pdrm_summons->summons_number[0])
		{
			strcpy((char*)summons_number.arr, pdrm_summons->summons_number);
			summons_number_ind = 0;
			setlen(summons_number);
		}
		else
			summons_number_ind = -1;

		if (0 != pdrm_summons->vehicle_number[0])
		{
			strcpy((char*)vehicle_number.arr, pdrm_summons->vehicle_number);
			vehicle_number_ind = 0;
			setlen(vehicle_number);
		}
		else
			vehicle_number_ind = -1;

		if (0 != pdrm_summons->offender_name[0])
		{
			strcpy((char*)offender_name.arr, pdrm_summons->offender_name);
			offender_name_ind = 0;
			setlen(offender_name);
		}
		else
			offender_name_ind = -1;

		if (0 != pdrm_summons->offence1[0])
		{
			strcpy((char*)offence1.arr, pdrm_summons->offence1);
			offence1_ind = 0;
			setlen(offence1);
		}
		else
			offence1_ind = -1;

		if (0 != pdrm_summons->offence2[0])
		{
			strcpy((char*)offence2.arr, pdrm_summons->offence2);
			offence2_ind = 0;
			setlen(offence2);
		}
		else
			offence2_ind = -1;

		if (0 != pdrm_summons->offence3[0])
		{
			strcpy((char*)offence3.arr, pdrm_summons->offence3);
			offence3_ind = 0;
			setlen(offence3);
		}
		else
			offence3_ind = -1;

		if (0 != pdrm_summons->vehicle_type[0])
		{
			strcpy((char*)vehicle_type.arr, pdrm_summons->vehicle_type);
			vehicle_type_ind = 0;
			setlen(vehicle_type);
		}
		else
			vehicle_type_ind = -1;

		if (0 != pdrm_summons->offence_place[0])
		{
			strcpy((char*)offence_place.arr, pdrm_summons->offence_place);
			offence_place_ind = 0;
			setlen(offence_place);
		}
		else
			offence_place_ind = -1;

		if (0 < pdrm_summons->compound1)
		{
			compound1 = pdrm_summons->compound1;
			compound1_ind = 0;
		}
		else
			compound1_ind = -1;

		if (0 < pdrm_summons->compound2)
		{
			compound2 = pdrm_summons->compound2;
			compound2_ind = 0;
		}
		else
			compound2_ind = -1;

		if (0 < pdrm_summons->compound3)
		{
			compound3 = pdrm_summons->compound3;
			compound3_ind = 0;
		}
		else
			compound3_ind = -1;

		if (0 != pdrm_summons->total_compound)
		{
			total_compound = pdrm_summons->total_compound;
			total_compound_ind = 0;
		}
		else
			total_compound_ind = -1;

		if (0 != pdrm_summons->cad_id[0])
		{
			strcpy(cad_id, pdrm_summons->cad_id);
			cad_id_ind = 0;
		}
		else
			cad_id_ind = -1;

		if ('\0' != pdrm_summons->summons_leg_flag)
		{
			summons_leg_flag = pdrm_summons->summons_leg_flag;
			summons_leg_flag_ind = 0;
		}
		else
			summons_leg_flag_ind = -1;

		load_on_chip = YES;
		load_on_chip_ind = 0;

#ifdef DEBUG
		userlog("insert_pdrm_summons : Summons district - %s", summ_district.arr);
		userlog("insert_pdrm_summons : Device - %s", device.arr);
		userlog("insert_pdrm_summons : Summons no - %s", summons_number.arr);
		userlog("insert_pdrm_summons : Vehicle no - %s", vehicle_number.arr);
		userlog("insert_pdrm_summons : Compound1 - %d", compound1);
		userlog("insert_pdrm_summons : Compound2 - %d", compound2);
		userlog("insert_pdrm_summons : Compound3 - %d", compound3);
		userlog("insert_pdrm_summons : Total Compound - %ld", total_compound);
		userlog("insert_pdrm_summons : Offender name - %s", offender_name.arr);
		userlog("insert_pdrm_summons : Offence1 - %s", offence1.arr);
		userlog("insert_pdrm_summons : Offence2 - %s", offence2.arr);
		userlog("insert_pdrm_summons : Offence3 - %s", offence3.arr);
		userlog("insert_pdrm_summons : Vehicle type - %s", vehicle_type.arr);
		userlog("insert_pdrm_summons : Offence place - %s", offence_place.arr);
		userlog("insert_pdrm_summons : Summons date - %s", summons_date);
		userlog("insert_pdrm_summons : Offence date - %s", offence_date);
		userlog("insert_pdrm_summons : Compound date - %s", compound_date);
		userlog("insert_pdrm_summons : Court date - %s", court_date);
		userlog("insert_pdrm_summons : Summons type - %c", summ_type);
		userlog("insert_pdrm_summons : CAD Id - %s", cad_id);
		userlog("insert_pdrm_summons : Summonms legacy flag - %c", summons_leg_flag);
		userlog("insert_pdrm_summons : Load on chip flag - %c", load_on_chip);
#endif

		/* EXEC SQL INSERT INTO APPNT_PDRM_SUMMONS (APPLID, SUMMNO, KPTNO, SUMMDISTRICT, 
									SUMMTYPE, SUMMDATE, VEHNO, PDRMVEHTYPE,
									DEVICE, OFFENCECODE1, COMPOUND1, OFFENCECODE2, COMPOUND2, 
									OFFENCECODE3, COMPOUND3, OFFENCEDATE, OFFENCEPLACE, 
									OFFENDERNAME, COMPOUNDDATE, COURTDATE , SUMMLEGFLAG, 
									LOADONCHIPIND, CADID, TOTALCOMPOUND)
				VALUES (:appl_id, :summons_number:summons_number_ind,
						:kpt_no:kpt_no_ind, :summ_district:summ_district_ind,
						:summ_type:summ_type_ind, TO_DATE(:summons_date:summons_date_ind, 'DDMMYYYY HH24MISS'),
						:vehicle_number:vehicle_number_ind, :vehicle_type:vehicle_type_ind,
						:device:device_ind, :offence1:offence1_ind, :compound1:compound1_ind, 
						:offence2:offence2_ind, :compound2:compound2_ind, :offence3:offence3_ind,
						:compound3:compound3_ind, TO_DATE(:offence_date:offence_date_ind, 'DDMMYYYY HH24MISS'),
						:offence_place:offence_place_ind, :offender_name:offender_name_ind,
						TO_DATE(:compound_date:compound_date_ind, 'DDMMYYYY'), 
						TO_DATE(:court_date:court_date_ind, 'DDMMYYYY'), :summons_leg_flag:summons_leg_flag_ind,
						:load_on_chip:load_on_chip_ind, :cad_id:cad_id_ind, :total_compound:total_compound_ind); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 37;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPNT_PDRM_SUMMONS (APPLID,SUMMNO,KPTNO,SUMMDIS\
TRICT,SUMMTYPE,SUMMDATE,VEHNO,PDRMVEHTYPE,DEVICE,OFFENCECODE1,COMPOUND1,OFFENC\
ECODE2,COMPOUND2,OFFENCECODE3,COMPOUND3,OFFENCEDATE,OFFENCEPLACE,OFFENDERNAME,\
COMPOUNDDATE,COURTDATE,SUMMLEGFLAG,LOADONCHIPIND,CADID,TOTALCOMPOUND) values (\
:b0,:b1:b2,:b3:b4,:b5:b6,:b7:b8,TO_DATE(:b9:b10,'DDMMYYYY HH24MISS'),:b11:b12,\
:b13:b14,:b15:b16,:b17:b18,:b19:b20,:b21:b22,:b23:b24,:b25:b26,:b27:b28,TO_DAT\
E(:b29:b30,'DDMMYYYY HH24MISS'),:b31:b32,:b33:b34,TO_DATE(:b35:b36,'DDMMYYYY')\
,TO_DATE(:b37:b38,'DDMMYYYY'),:b39:b40,:b41:b42,:b43:b44,:b45:b46)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )906;
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
  sqlstm.sqhstv[1] = (         void  *)&summons_number;
  sqlstm.sqhstl[1] = (unsigned int  )13;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&summons_number_ind;
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
  sqlstm.sqhstv[3] = (         void  *)&summ_district;
  sqlstm.sqhstl[3] = (unsigned int  )9;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&summ_district_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&summ_type;
  sqlstm.sqhstl[4] = (unsigned int  )1;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&summ_type_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)summons_date;
  sqlstm.sqhstl[5] = (unsigned int  )16;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&summons_date_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&vehicle_number;
  sqlstm.sqhstl[6] = (unsigned int  )13;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&vehicle_number_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&vehicle_type;
  sqlstm.sqhstl[7] = (unsigned int  )23;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&vehicle_type_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&device;
  sqlstm.sqhstl[8] = (unsigned int  )9;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&device_ind;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&offence1;
  sqlstm.sqhstl[9] = (unsigned int  )27;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)&offence1_ind;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&compound1;
  sqlstm.sqhstl[10] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)&compound1_ind;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)&offence2;
  sqlstm.sqhstl[11] = (unsigned int  )27;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)&offence2_ind;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqhstv[12] = (         void  *)&compound2;
  sqlstm.sqhstl[12] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[12] = (         int  )0;
  sqlstm.sqindv[12] = (         void  *)&compound2_ind;
  sqlstm.sqinds[12] = (         int  )0;
  sqlstm.sqharm[12] = (unsigned int  )0;
  sqlstm.sqadto[12] = (unsigned short )0;
  sqlstm.sqtdso[12] = (unsigned short )0;
  sqlstm.sqhstv[13] = (         void  *)&offence3;
  sqlstm.sqhstl[13] = (unsigned int  )27;
  sqlstm.sqhsts[13] = (         int  )0;
  sqlstm.sqindv[13] = (         void  *)&offence3_ind;
  sqlstm.sqinds[13] = (         int  )0;
  sqlstm.sqharm[13] = (unsigned int  )0;
  sqlstm.sqadto[13] = (unsigned short )0;
  sqlstm.sqtdso[13] = (unsigned short )0;
  sqlstm.sqhstv[14] = (         void  *)&compound3;
  sqlstm.sqhstl[14] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[14] = (         int  )0;
  sqlstm.sqindv[14] = (         void  *)&compound3_ind;
  sqlstm.sqinds[14] = (         int  )0;
  sqlstm.sqharm[14] = (unsigned int  )0;
  sqlstm.sqadto[14] = (unsigned short )0;
  sqlstm.sqtdso[14] = (unsigned short )0;
  sqlstm.sqhstv[15] = (         void  *)offence_date;
  sqlstm.sqhstl[15] = (unsigned int  )16;
  sqlstm.sqhsts[15] = (         int  )0;
  sqlstm.sqindv[15] = (         void  *)&offence_date_ind;
  sqlstm.sqinds[15] = (         int  )0;
  sqlstm.sqharm[15] = (unsigned int  )0;
  sqlstm.sqadto[15] = (unsigned short )0;
  sqlstm.sqtdso[15] = (unsigned short )0;
  sqlstm.sqhstv[16] = (         void  *)&offence_place;
  sqlstm.sqhstl[16] = (unsigned int  )33;
  sqlstm.sqhsts[16] = (         int  )0;
  sqlstm.sqindv[16] = (         void  *)&offence_place_ind;
  sqlstm.sqinds[16] = (         int  )0;
  sqlstm.sqharm[16] = (unsigned int  )0;
  sqlstm.sqadto[16] = (unsigned short )0;
  sqlstm.sqtdso[16] = (unsigned short )0;
  sqlstm.sqhstv[17] = (         void  *)&offender_name;
  sqlstm.sqhstl[17] = (unsigned int  )53;
  sqlstm.sqhsts[17] = (         int  )0;
  sqlstm.sqindv[17] = (         void  *)&offender_name_ind;
  sqlstm.sqinds[17] = (         int  )0;
  sqlstm.sqharm[17] = (unsigned int  )0;
  sqlstm.sqadto[17] = (unsigned short )0;
  sqlstm.sqtdso[17] = (unsigned short )0;
  sqlstm.sqhstv[18] = (         void  *)compound_date;
  sqlstm.sqhstl[18] = (unsigned int  )9;
  sqlstm.sqhsts[18] = (         int  )0;
  sqlstm.sqindv[18] = (         void  *)&compound_date_ind;
  sqlstm.sqinds[18] = (         int  )0;
  sqlstm.sqharm[18] = (unsigned int  )0;
  sqlstm.sqadto[18] = (unsigned short )0;
  sqlstm.sqtdso[18] = (unsigned short )0;
  sqlstm.sqhstv[19] = (         void  *)court_date;
  sqlstm.sqhstl[19] = (unsigned int  )9;
  sqlstm.sqhsts[19] = (         int  )0;
  sqlstm.sqindv[19] = (         void  *)&court_date_ind;
  sqlstm.sqinds[19] = (         int  )0;
  sqlstm.sqharm[19] = (unsigned int  )0;
  sqlstm.sqadto[19] = (unsigned short )0;
  sqlstm.sqtdso[19] = (unsigned short )0;
  sqlstm.sqhstv[20] = (         void  *)&summons_leg_flag;
  sqlstm.sqhstl[20] = (unsigned int  )1;
  sqlstm.sqhsts[20] = (         int  )0;
  sqlstm.sqindv[20] = (         void  *)&summons_leg_flag_ind;
  sqlstm.sqinds[20] = (         int  )0;
  sqlstm.sqharm[20] = (unsigned int  )0;
  sqlstm.sqadto[20] = (unsigned short )0;
  sqlstm.sqtdso[20] = (unsigned short )0;
  sqlstm.sqhstv[21] = (         void  *)&load_on_chip;
  sqlstm.sqhstl[21] = (unsigned int  )1;
  sqlstm.sqhsts[21] = (         int  )0;
  sqlstm.sqindv[21] = (         void  *)&load_on_chip_ind;
  sqlstm.sqinds[21] = (         int  )0;
  sqlstm.sqharm[21] = (unsigned int  )0;
  sqlstm.sqadto[21] = (unsigned short )0;
  sqlstm.sqtdso[21] = (unsigned short )0;
  sqlstm.sqhstv[22] = (         void  *)cad_id;
  sqlstm.sqhstl[22] = (unsigned int  )9;
  sqlstm.sqhsts[22] = (         int  )0;
  sqlstm.sqindv[22] = (         void  *)&cad_id_ind;
  sqlstm.sqinds[22] = (         int  )0;
  sqlstm.sqharm[22] = (unsigned int  )0;
  sqlstm.sqadto[22] = (unsigned short )0;
  sqlstm.sqtdso[22] = (unsigned short )0;
  sqlstm.sqhstv[23] = (         void  *)&total_compound;
  sqlstm.sqhstl[23] = (unsigned int  )sizeof(long);
  sqlstm.sqhsts[23] = (         int  )0;
  sqlstm.sqindv[23] = (         void  *)&total_compound_ind;
  sqlstm.sqinds[23] = (         int  )0;
  sqlstm.sqharm[23] = (unsigned int  )0;
  sqlstm.sqadto[23] = (unsigned short )0;
  sqlstm.sqtdso[23] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


				
		if(SQLCODE != 0 && SQLCODE != -1)
		{
#ifdef DEBUG
				userlog("insert_pdrm_summons : Insert into in APPNT_PDRM_SUMMONS table failed : %s", SQLMSG);
#endif
			/* Log the error */
			strcpy(prog_log.remarks,"insert_pdrm_summons : Insert into in APPNT_PDRM_SUMMONS table failed");
			sprintf(excep_log.error_msg,"insert_pdrm_summons : Insert into in APPNT_PDRM_SUMMONS table failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);

			return INSERT_ERROR;
		}
	
#ifdef DEBUG
		userlog("insert_pdrm_summons : Record %d inserted successfully", count + 1);
#endif
	}

	return SUCCESS;

}

/********************************************************************************/
/* Function name: insert_lic_susp_info											*/
/* Description	: This function inserts the license suspension info related to  */
/*                application, if any into APPNT_LIC_SUSPEND table				*/
/* Input		: Pointer to suspension info struture, Structure count			*/
/*                Application id												*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_lic_susp_info(APPNT_LIC_SUSP_T *lic_susp, char *application_id, int susp_info_cnt,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	char lic_type[LIC_TYPE_SIZE] = {0};
	char lic_class[LIC_CLS_SIZE] = {0};
	char lic_class_usage[LIC_USAGE_SIZE] = {0};
	char susp_start_date[DATE_SIZE] = {0};
	char susp_end_date[DATE_SIZE] = {0};
	char load_on_chip_ind = 0;
	/* varchar susp_code[LIC_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[11]; } susp_code
 = {0};


	short lic_type_ind = -1;
	short lic_class_ind = -1;
	short lic_class_usage_ind = -1;
	short susp_start_date_ind = -1;
	short susp_end_date_ind = -1;
	short load_on_chip_ind_ind = -1;
	short susp_code_ind = -1;
	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int count = 0;
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN



	/* Populate the variables	*/

	strcpy(appl_id, application_id);

#ifdef DEBUG
	userlog("insert_lic_susp_info : Suspension records count - %d", susp_info_cnt);
#endif

	for (count = 0; count < susp_info_cnt; count++, lic_susp++)
	{

		if (0 != lic_susp->lic_type[0])
		{
			strcpy(lic_type, lic_susp->lic_type);
			lic_type_ind = 0;
		}
		else
			lic_type_ind = -1;

		if (0 != lic_susp->lic_class[0])
		{
			strcpy(lic_class, lic_susp->lic_class);
			lic_class_ind = 0;
		}
		else
			lic_class_ind = -1;

		if (0 != lic_susp->lic_class_usage[0])
		{
			strcpy(lic_class_usage, lic_susp->lic_class_usage);
			lic_class_usage_ind = 0;
		}
		else
			lic_class_usage_ind = -1;

		if (0 != lic_susp->susp_start_date[0])
		{
			strcpy(susp_start_date, lic_susp->susp_start_date);
			susp_start_date_ind = 0;
		}
		else
			susp_start_date_ind = -1;

		if (0 != lic_susp->susp_end_date[0])
		{
			strcpy(susp_end_date, lic_susp->susp_end_date);
			susp_end_date_ind = 0;
		}
		else
			susp_end_date_ind = -1;

		if (0 != lic_susp->susp_code[0])
		{
			strcpy((char*)susp_code.arr, lic_susp->susp_code);
			susp_code_ind = 0;
			setlen(susp_code);
		}
		else
			susp_code_ind = -1;

		if (0 != lic_susp->load_on_chip_ind)
		{
			load_on_chip_ind = lic_susp->load_on_chip_ind;
			load_on_chip_ind_ind = 0;
		}
		else
			load_on_chip_ind_ind = -1;

#ifdef DEBUG
		userlog("insert_lic_susp_info : Lic type - %s",lic_type);
		userlog("insert_lic_susp_info : Lic class - %s",lic_class);
		userlog("insert_lic_susp_info : Lic usage - %s",lic_class_usage);
		userlog("insert_lic_susp_info : Suspension start dt - %s",susp_start_date);
		userlog("insert_lic_susp_info : Suspension code - %s",susp_code.arr);
		userlog("insert_lic_susp_info : Suspension end dt - %s",susp_end_date);
		userlog("insert_lic_susp_info : Load on chip flag - %c", load_on_chip_ind);
#endif

		/* EXEC SQL INSERT INTO APPNT_LIC_SUSPEND (APPLID, LICTYPE, LICCLASS, 
											LICUSAGECODE, LICSUSPSTARTDATE, 
											LICSUSPENDDATE, LOADONCHIPIND, LICSUSPCODE)
											VALUES (:appl_id, :lic_type:lic_type_ind,
											:lic_class:lic_class_ind, :lic_class_usage:lic_class_usage_ind, 
											TO_DATE(:susp_start_date:susp_start_date_ind, 'DDMMYYYY'),
											TO_DATE(:susp_end_date:susp_end_date_ind, 'DDMMYYYY'),
											:load_on_chip_ind:load_on_chip_ind_ind, 
											:susp_code:susp_code_ind); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 37;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPNT_LIC_SUSPEND (APPLID,LICTYPE,LICCLASS,LICU\
SAGECODE,LICSUSPSTARTDATE,LICSUSPENDDATE,LOADONCHIPIND,LICSUSPCODE) values (:b\
0,:b1:b2,:b3:b4,:b5:b6,TO_DATE(:b7:b8,'DDMMYYYY'),TO_DATE(:b9:b10,'DDMMYYYY'),\
:b11:b12,:b13:b14)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1017;
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
  sqlstm.sqhstv[1] = (         void  *)lic_type;
  sqlstm.sqhstl[1] = (unsigned int  )4;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&lic_type_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)lic_class;
  sqlstm.sqhstl[2] = (unsigned int  )3;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&lic_class_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)lic_class_usage;
  sqlstm.sqhstl[3] = (unsigned int  )3;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&lic_class_usage_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)susp_start_date;
  sqlstm.sqhstl[4] = (unsigned int  )9;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&susp_start_date_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)susp_end_date;
  sqlstm.sqhstl[5] = (unsigned int  )9;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&susp_end_date_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&load_on_chip_ind;
  sqlstm.sqhstl[6] = (unsigned int  )1;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&load_on_chip_ind_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&susp_code;
  sqlstm.sqhstl[7] = (unsigned int  )13;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&susp_code_ind;
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



				
		if(SQLCODE != 0 && SQLCODE != -1)
		{
#ifdef DEBUG
				userlog("insert_lic_susp_info : Insert into in APPNT_LIC_SUSPEND table failed : %s", SQLMSG);
#endif
			/* Log the error */
			strcpy(prog_log.remarks,"insert_lic_susp_info : Insert into in APPNT_LIC_SUSPEND table failed");
			sprintf(excep_log.error_msg,"insert_lic_susp_info : Insert into in APPNT_LIC_SUSPEND table failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);

			return INSERT_ERROR;
		}
	
#ifdef DEBUG
		userlog("insert_lic_susp_info : Record %d inserted successfully", count + 1);
#endif
	}

	return SUCCESS;

}

/********************************************************************************/
/* Function name: insert_lic_revok_info											*/
/* Description	: This function inserts the license revocation info related to  */
/*                application, if any into APPNT_LIC_REVOK table				*/
/* Input		: Pointer to revocation info struture, Structure count			*/
/*                Application id												*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_lic_revok_info(APPNT_LIC_REVOKE_T *lic_revok, char *application_id, int revoke_info_cnt,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	char lic_type[LIC_TYPE_SIZE] = {0};
	char revok_start_date[DATE_SIZE] = {0};
	char revok_end_date[DATE_SIZE];
	char load_on_chip_ind = 0;
	/* varchar revok_code[LIC_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[11]; } revok_code
 = {0};



	short lic_type_ind = -1;
	short revok_start_date_ind = -1;
	short revok_end_date_ind = -1;
	short load_on_chip_ind_ind = -1;
	short revok_code_ind = -1;
	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int count = 0;
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	

	/* Populate the variables	*/

	strcpy(appl_id, application_id);

#ifdef DEBUG
	userlog("insert_lic_revok_info : Revocation records count - %d", revoke_info_cnt);
#endif

	for (count = 0; count < revoke_info_cnt; count++, lic_revok++)
	{

		if (0 != lic_revok->lic_type[0])
		{
			strcpy(lic_type, lic_revok->lic_type);
			lic_type_ind = 0;
		}
		else
			lic_type_ind = -1;

		if (0 != lic_revok->revok_start_date[0])
		{
			strcpy(revok_start_date, lic_revok->revok_start_date);
			revok_start_date_ind = 0;
		}
		else
			revok_start_date_ind = -1;

		if (0 != lic_revok->revok_end_date[0])
		{
			strcpy(revok_end_date, lic_revok->revok_end_date);
			revok_end_date_ind = 0;
		}
		else
			revok_end_date_ind = -1;

		if (0 != lic_revok->revok_code[0])
		{
			strcpy((char*)revok_code.arr, lic_revok->revok_code);
			revok_code_ind = 0;
			setlen(revok_code);
		}
		else
			revok_code_ind = -1;

		if (0 != lic_revok->load_on_chip_ind)
		{
			load_on_chip_ind = lic_revok->load_on_chip_ind;
			load_on_chip_ind_ind = 0;
		}
		else
			load_on_chip_ind_ind = -1;

#ifdef DEBUG
		userlog("insert_lic_revok_info : Lic type - %s",lic_type);
		userlog("insert_lic_revok_info : Revocation start dt - %s",revok_start_date);
		userlog("insert_lic_revok_info : Revocation code - %s",revok_code.arr);
		userlog("insert_lic_revok_info : Revocation end dt - %s",revok_end_date);
		userlog("insert_lic_revok_info : Load on chip flag - %c", load_on_chip_ind);
#endif

		/* EXEC SQL INSERT INTO APPNT_LIC_REVOKE (APPLID, LICTYPE, LICREVOKCODE,  
											LICREVOKSTARTDATE, LICREVOKENDDATE, LOADONCHIPIND)
							 	VALUES (:appl_id, :lic_type:lic_type_ind, :revok_code:revok_code_ind,
										TO_DATE(:revok_start_date:revok_start_date_ind, 'DDMMYYYY'),
										TO_DATE(:revok_end_date:revok_end_date_ind, 'DDMMYYYY'),
										:load_on_chip_ind:load_on_chip_ind_ind); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 37;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPNT_LIC_REVOKE (APPLID,LICTYPE,LICREVOKCODE,L\
ICREVOKSTARTDATE,LICREVOKENDDATE,LOADONCHIPIND) values (:b0,:b1:b2,:b3:b4,TO_D\
ATE(:b5:b6,'DDMMYYYY'),TO_DATE(:b7:b8,'DDMMYYYY'),:b9:b10)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1064;
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
  sqlstm.sqhstv[1] = (         void  *)lic_type;
  sqlstm.sqhstl[1] = (unsigned int  )4;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&lic_type_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&revok_code;
  sqlstm.sqhstl[2] = (unsigned int  )13;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&revok_code_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)revok_start_date;
  sqlstm.sqhstl[3] = (unsigned int  )9;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&revok_start_date_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)revok_end_date;
  sqlstm.sqhstl[4] = (unsigned int  )9;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&revok_end_date_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&load_on_chip_ind;
  sqlstm.sqhstl[5] = (unsigned int  )1;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&load_on_chip_ind_ind;
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


				
		if(SQLCODE != 0 && SQLCODE != -1)
		{
#ifdef DEBUG
			userlog("insert_lic_revok_info : Insert into in APPNT_LIC_REVOKE table failed : %s", SQLMSG);
#endif
			/* Log the error */
			strcpy(prog_log.remarks,"insert_lic_revok_info : Insert into in APPNT_LIC_REVOKE table failed");
			sprintf(excep_log.error_msg,"insert_lic_revok_info : Insert into in APPNT_LIC_REVOKE table failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);

			return INSERT_ERROR;
		}
	
#ifdef DEBUG
		userlog("insert_lic_revok_info : Record %d inserted successfully", count + 1);
#endif
	}

	return SUCCESS;

}


/********************************************************************************/
/* Function name: insert_card_status											*/
/* Description	: This function inserts the record with new Card version no into*/
/*                CARD_STATUS table												*/
/* Input		: Pointer to request buffer of the service, Txn code			*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_card_status(CREATE_APPLNT_REQ_T *req, char *txn_code, APPNT_JPN_INFO_T *appnt, int *lcard_version, void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	char kpt_no[KPT_SIZE] = {0};
	char collector_kpt[KPT_SIZE] = {0};
	int jpn_card_version = 0;
	int card_version = 0;
	/* varchar create_user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } create_user_id
 = {0};

	/* varchar create_ws_id[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } create_ws_id
 = {0};

	char branch_code[BRANCH_CODE_SIZE] = {0};
	int old_card_version = 0;
	int day_diff = 0;

	short collector_kpt_ind = -1;
	short create_user_id_ind = -1;
	short card_version_ind = -1;
	short create_ws_id_ind = -1;
	short branch_code_ind = -1;
	short kpt_no_ind = -1;
	short jpn_card_version_ind = -1;
	short old_card_version_ind = -1;
		
sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	/* Populate the variables	*/

	strcpy(appl_id, req->header.application_id);

	if (0 != req->kpt_no[0] )
	{
		strcpy(kpt_no, req->kpt_no);	
		kpt_no_ind  = 0;
	}
	

#ifdef DEBUG
	userlog("insert_card_status : Appl id - %s", appl_id);
	userlog("insert_card_status : KPT no - %s", kpt_no);
	userlog("insert_card_status : Missed opex flag - %c", req->missed_opex_flag);
#endif


	if (req->missed_opex_flag != YES)
	{
		/* EXEC SQL SELECT CARDVERSIONNO
				INTO  :jpn_card_version:jpn_card_version_ind
				FROM JPN_INFO 
			WHERE KPTNO = :kpt_no:kpt_no_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 37;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select CARDVERSIONNO into :b0:b1  from JPN_INFO where KPTNO\
=:b2:b3";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1103;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&jpn_card_version;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&jpn_card_version_ind;
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
			userlog("insert_card_status : Select from JPN_INFO failed for KPT %s: %s", kpt_no, SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_card_status: Select from JPN_INFO failed ");
			sprintf(excep_log.error_msg, "insert_card_status: Select from JPN_INFO failed for KPT %s : %s", kpt_no, SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
		//	return SELECT_ERROR;
		}
		

		/* Get the old card version from CARD_STATUS, if any */

		/* EXEC SQL SELECT MAX(CARDVERSIONNO) INTO :old_card_version:old_card_version_ind
			FROM CARD_STATUS 
			WHERE KPTNO = :kpt_no:kpt_no_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 37;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select max(CARDVERSIONNO) into :b0:b1  from CARD_STATUS whe\
re KPTNO=:b2:b3";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1126;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&old_card_version;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&old_card_version_ind;
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



		if (NO_DATA_FOUND)
		{
			old_card_version = 0;
			old_card_version_ind = 0;
		}
		else if (SQLCODE != 0)
		{
#ifdef DEBUG
			userlog("insert_card_status : Select from CARD_STATUS failed for KPT %s: %s", kpt_no, SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_card_status: Select from CARD_STATUS failed ");
			sprintf(excep_log.error_msg, "insert_card_status: Select from CARD_STATUS failed for KPT %s : %s", kpt_no, SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}
	}

	if (0 == jpn_card_version_ind)
	{
		jpn_card_version = jpn_card_version + 1;
	}
	else
	{
		jpn_card_version = 1;
		jpn_card_version_ind = 0;
	}

	if (0 == old_card_version_ind)
	{
		old_card_version = old_card_version + 1;
	}
	else
	{
		old_card_version = 1;
		old_card_version_ind = 0;
	}

	if (old_card_version > jpn_card_version)
		card_version = old_card_version;
	else
		card_version = jpn_card_version;

	card_version_ind = 0;

#ifdef DEBUG
	userlog("insert_card_status : card_version - %d", card_version);
#endif

	/* Populate the host variables */

	if (0 != req->collector_kpt[0] )
	{
		strcpy(collector_kpt, req->collector_kpt);
		collector_kpt_ind = 0;
	}
	
	if (0 != req->create_ws_id[0] )
	{
		strcpy((char*)create_ws_id.arr, req->create_ws_id);
		create_ws_id_ind = 0;
		setlen(create_ws_id);
	}
	
	if (0 != req->create_user_id[0] )
	{
		strcpy((char*)create_user_id.arr, req->create_user_id);
		create_user_id_ind = 0;
		setlen(create_user_id);
	}

	if (0 != req->header.branch_code[0] )
	{
		strcpy(branch_code, req->header.branch_code);
		branch_code_ind = 0;
	}

	*lcard_version = card_version;

	#ifdef DEBUG
		userlog("insert_card_status : lcard_version - %d", *lcard_version);
	#endif

		/* EXEC SQL INSERT INTO CARD_STATUS (KPTNO, CARDVERSIONNO, APPLID, COLLKPTNO, 
									USERID, TIMESTAMP, BRANCHCODE, WSID)
					VALUES (:kpt_no:kpt_no_ind, :card_version:card_version_ind, :appl_id, 
				:collector_kpt:collector_kpt_ind, :create_user_id:create_user_id_ind, 
				TO_DATE(TO_CHAR(SYSDATE, 'DDMMYYYY HH24MISS'), 'DDMMYYYY HH24MISS'),
				:branch_code:branch_code_ind, :create_ws_id:create_ws_id_ind); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 37;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into CARD_STATUS (KPTNO,CARDVERSIONNO,APPLID,COLLKPT\
NO,USERID, timestamp ,BRANCHCODE,WSID) values (:b0:b1,:b2:b3,:b4,:b5:b6,:b7:b8\
,TO_DATE(TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS'),:b9:b10,:b1\
1:b12)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1149;
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
  sqlstm.sqhstv[1] = (         void  *)&card_version;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&card_version_ind;
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
  sqlstm.sqhstv[3] = (         void  *)collector_kpt;
  sqlstm.sqhstl[3] = (unsigned int  )13;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&collector_kpt_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&create_user_id;
  sqlstm.sqhstl[4] = (unsigned int  )11;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&create_user_id_ind;
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
  sqlstm.sqhstv[6] = (         void  *)&create_ws_id;
  sqlstm.sqhstl[6] = (unsigned int  )18;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&create_ws_id_ind;
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
			userlog(" insert_card_status : Insert into CARD_STATUS failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_card_status: Insert into CARD_STATUS failed");
			sprintf(excep_log.error_msg, "insert_card_status: Insert into CARD_STATUS failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		}

#ifdef DEBUG
		userlog("insert_card_status : Record inserted successfully");
#endif

	return SUCCESS;

}


/********************************************************************************/
/* Function name: insert_for_clms											*/
/* Description	: This function inserts the record with new Card version no into*/
/*                CLMS_CARD_STAT_UPD table												*/
/* Input		: Pointer to request buffer of the service, Txn code			*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_for_clms(CREATE_APPLNT_REQ_T *req, int lcversion, void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	char kpt_no[KPT_SIZE] = {0};	
	int card_version = 0;
	/* varchar user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id
 = {0};

	/* varchar ws_id[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } ws_id
 = {0};

		
	short user_id_ind = -1;
	short card_version_ind = -1;
	short ws_id_ind = -1;	
	short kpt_no_ind = -1;
			
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	/* Populate the variables	*/


	#ifdef DEBUG
		userlog("insert_for_clms : req->header.application_id - %s", req->header.application_id);
		userlog("insert_for_clms : req->kpt_no - %s", req->kpt_no);
		userlog("insert_for_clms : lcversion - %d", lcversion);
		userlog("insert_for_clms : req->header.user_id - %s",req->header.user_id);
		userlog("insert_for_clms : req->header.workstation_id - %s",req->header.workstation_id);
	#endif

	strcpy(appl_id, req->header.application_id);

	if (req->kpt_no[0] != '\0')
	{
		strcpy(kpt_no, req->kpt_no);	
		kpt_no_ind  = 0;
	}
	
	strcpy((char*)user_id.arr,req->header.user_id);

	if(user_id.arr[0] != '\0')
		user_id_ind = 0;

	setlen(user_id);
	setnull(user_id);

	strcpy((char*)ws_id.arr,req->header.workstation_id);

	if(ws_id.arr[0] != '\0')
		ws_id_ind = 0;

	setlen(ws_id);
	setnull(ws_id);

	card_version = lcversion;

	if(card_version > 0)
		card_version_ind = 0;


#ifdef DEBUG
	userlog("insert_for_clms : Appl id - %s", appl_id);
	userlog("insert_for_clms : KPT no - %s", kpt_no);
	userlog("insert_for_clms : card_version - %d", card_version);
	userlog("insert_for_clms : user_id - %s",user_id.arr);
	userlog("insert_for_clms : user_id_ind - %d",user_id_ind);
	userlog("insert_for_clms : ws_id - %s",ws_id.arr);
	userlog("insert_for_clms : ws_id_ind - %d",ws_id_ind);
#endif


	/* EXEC SQL INSERT INTO CLMS_CARD_STAT_UPD(
		KPTNO, CARDVERSIONNO, CARDSTATUS, UPDFLAG, 
		TIMESTAMP, USERID, WSID)
		VALUES(:kpt_no:kpt_no_ind, :card_version:card_version_ind,
		0,'N',SYSDATE,:user_id:user_id_ind,:ws_id:ws_id_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 37;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into CLMS_CARD_STAT_UPD (KPTNO,CARDVERSIONNO,CARDSTAT\
US,UPDFLAG, timestamp ,USERID,WSID) values (:b0:b1,:b2:b3,0,'N',SYSDATE,:b4:b5\
,:b6:b7)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1192;
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
 sqlstm.sqhstv[1] = (         void  *)&card_version;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&card_version_ind;
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




		if(SQLCODE != 0)
		{
		 #ifdef DEBUG
			userlog(" insert_for_clms : Insert into CLMS_CARD_STAT_UPD failed : %s", SQLMSG);
		 #endif
			strcpy(prog_log.remarks,"insert_for_clms: Insert into CLMS_CARD_STAT_UPD failed");
			sprintf(excep_log.error_msg, "insert_for_clms: Insert into CLMS_CARD_STAT_UPD failed : %s", SQLMSG);
			//excep_log.termination_flag = YES;
			//excep_log.severity = FATAL;

			//log_error(ctx);
			
			//return INSERT_ERROR;
		}


	if(sqlca.sqlcode == 0)
	{
	#ifdef DEBUG
		userlog("insert_for_clms : Record inserted successfully");
	#endif
	}

	return SUCCESS;

}



/********************************************************************************/
/* Function name: insert_into_appnt_info										*/
/* Description	: This function inserts the Applicant's JPN(demographic)info    */          
/*                into APPNT_JPN_INFO table										*/
/* Input		: Pointer to demogrpahic buffer, Pointer to request buffer of   */
/*                the service, Transaction code									*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_into_appnt_info(APPNT_JPN_INFO_T *applnt, CREATE_APPLNT_REQ_T *req, int transaction_code,
						   int txn_type,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	char kpt_no[KPT_SIZE] = {0};

	char hsc_color_code = 0;
	char hk_flag = 0;
	/* varchar siren_short_name1[SIREN_SHORT_NAME] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } siren_short_name1
 = {0};

	/* varchar siren_short_name2[SIREN_SHORT_NAME] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } siren_short_name2
 = {0};

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

	/* varchar original_name[ORIG_NAME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[151]; } original_name
 = {0};

	/* varchar address1[ADDRESS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } address1
 = {0};

	/* varchar address2[ADDRESS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } address2
 = {0};

	/* varchar address3[ADDRESS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[41]; } address3
 = {0};

	/* varchar post_code[POST_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[6]; } post_code
 = {0};

	int city_code = 0;
	char state_code[STATE_CODE_SIZE] = {0};
		
	/* varchar id_no[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } id_no
 = {0};

	char id_type[ID_TYPE_SIZE] = {0};
	char police_id[POLICE_ID_SIZE] = {0};
	char military_id[MILITARY_ID_SIZE] = {0};
	char kpp_no[KPP_SIZE] = {0};
	char gender = 0;
	char person_stat = 0;
	char birth_date[DATE_SIZE] = {0};
	char unknown_bi = 0;
	char religion = 0;
	char race[RACE_CODE_SIZE] = {0};
	char resident_stat = 0;
	char citizen_stat = 0;
	/* varchar jpn_remarks1[REMARK_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[61]; } jpn_remarks1
 = {0};

	/* varchar jpn_remarks2[REMARK_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[61]; } jpn_remarks2
 = {0};

	char afis_flag = 0;
	int card_lost = 0;
	char kpt_appl_stat = 0;
	char last_addr_change[DATE_SIZE] = {0};
	char last_card_issued[DATE_SIZE] = {0};
	/* varchar birth_place[BIRTH_PLACE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[26]; } birth_place
 = {0};

	char rj_ind[RJ_SIZE] = {0};
	char restrict_resi_code[KT_CODE_SIZE] = {0};
	char join_date[DATE_SIZE] = {0};
	char retirement_date[DATE_SIZE] = {0};
	char txn_code1[TRANSACTION_CODE_SIZE] = {0};
	char txn_code2[TRANSACTION_CODE_SIZE] = {0};
	int count  = 0;
	char approval_date[DATE_SIZE] = {0};
	char green_card_expiry_date[DATE_SIZE] = {0};
	char txn_12yo_green[TRANSACTION_CODE_SIZE] = {0};
	char txn_ft_green[TRANSACTION_CODE_SIZE] = {0};
	char txn_conv_green[TRANSACTION_CODE_SIZE] = {0};
	char txn_repl_green[TRANSACTION_CODE_SIZE] = {0};
	char citizen_nation_code[CITIZEN_CODE_SIZE] = {0};
	
	/*Added on 24/09/2002 by brijesh*/
	/* varchar immrefno[IMM_REFER_NO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } immrefno
 = {0};

	char immrefdate[DATE_SIZE] = {0};
	char immexpdate[DATE_SIZE] = {0};
	/* varchar passportno[PASSPORT_NO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } passportno
 = {0};

	char passportissuedate[DATE_SIZE] = {0};
	char passportissuecountry[COUNTRY_CODE_SIZE] = {0};
//Added by Amarjith on 25th Aug 2004. JRS 147
	char szPermitNo[PERMIT_NO_SIZE + 1];
	char szPermitIssueDate[DATE_SIZE];
	int  nPermitType;
	int  nPRDocType;
//JRS 147
    /* Added on 17 FEB 2005 for IJPN */
	char rjstartdate[DATE_SIZE]= {0};
	char rjenddate[DATE_SIZE]= {0};
	char ktstartdate[DATE_SIZE]= {0};
	char ktenddate[DATE_SIZE] = {0};
	//char blklstind = '\0';
	char jkind= '\0';
	char blklstcode[BLKLIST_ACTIVITY_CODE_SIZE] = {0};
	char afisbypass = {0};
	char birth_date1[DATE_SIZE] = {0}; // added on 21/11/05
	short birth_date1_ind = -1;

	char  invserviceflag='\0';
	int   txncount=0,applcnt=0;

	short immrefno_ind = -1;
	short immrefdate_ind = -1;
	short immexpdate_ind = -1;
	short passportno_ind = -1;
	short passportissuedate_ind = -1;
	short passportissuecountry_ind = -1;

	short kpt_no_ind = -1;
	short hsc_color_code_ind = -1;
	short hk_flag_ind = -1;
	short siren_short_name1_ind = -1;
	short siren_short_name2_ind = -1;
	short gmpc_short_name1_ind = -1;
	short gmpc_short_name2_ind = -1;
	short gmpc_short_name3_ind = -1;
	short current_long_name_ind = -1;
	short original_name_ind = -1;
	short address1_ind = -1;
	short address2_ind = -1;
	short address3_ind = -1;
	short post_code_ind = -1;
	short city_code_ind = -1;
	short state_code_ind = -1;
	
	short id_no_ind = -1;
	short id_type_ind = -1;
	short police_id_ind = -1;
	short military_id_ind = -1;
	short kpp_no_ind = -1;
	short gender_ind = 0;
	short person_stat_ind = -1;
	short birth_date_ind = -1;
	short unknown_bi_ind = -1;
	short religion_ind = -1;
	short race_ind = -1;
	short resident_stat_ind = -1;
	short citizen_stat_ind = -1;
	short jpn_remarks1_ind = -1;
	short jpn_remarks2_ind = -1;
	short afis_flag_ind = -1;
	short card_lost_ind = -1;
	short kpt_appl_stat_ind = -1;
	short last_addr_change_ind = -1;
	short last_card_issued_ind = -1;
	short birth_place_ind = -1;
	short rj_ind_ind = -1;
	short restrict_resi_code_ind = -1;
	short join_date_ind = -1;
	short retirement_date_ind = -1;
	short approval_date_ind = -1;
	short green_card_expiry_date_ind = -1;
	short citizen_nation_code_ind  = -1;

	short rjstartdate_ind = -1;
	short rjenddate_ind = -1;
	short ktstartdate_ind = -1;
	short ktenddate_ind = -1;
	//short blklstind_ind = -1;
	short jkind_ind = -1;
	short blklstcode_ind = -1;
	// Added on 9th July for IJPN

	short afisbypass_ind = -1;

	char  orignameind = '\0';
	short orignameind_ind = -1;

	int  lostcntcrime = 0;
	short lostcntcrime_ind = -1;
	int  lostcntdis = 0;
	short lostcntdis_ind = -1;
	int  lostcntneg = 0;
	short lostcntneg_ind = -1;

	char ktareacode[6+1]= {0};
	short ktareacode_ind = -1;
	char apjareacode[8+1]= {0};
	short apjareacode_ind = -1;
	char ktind[3] = {0};
	char rjind[3] = {0};
	char isflag = '\0';
	
sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	char lc_immexpdate[DATE_SIZE] = {0};

	int ret_code = 0;


	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	
	/* Populate the variables	*/

	strcpy(appl_id, req->header.application_id);

	if (0 != req->kpt_no[0] )
	{
		strcpy(kpt_no, req->kpt_no);	
		kpt_no_ind  = 0;
	}
	
#ifdef DEBUG
	userlog("insert_into_appnt_info : Appl id - %s", appl_id);
	userlog("insert_into_appnt_info : KPT no - %s", kpt_no);
	userlog("insert_into_appnt_info : Transaction code - %d", transaction_code);
#endif

	if (req->missed_opex_flag != YES)
	{
	#ifdef DEBUG
		userlog("insert_into_appnt_info : Inside the missed_opex_flag loop, Before the select statement");		
	#endif
	  /* EXEC SQL SELECT POLICEID, MILITARYID, KPPNO, GENDER, PERSONSTATCODE, TO_CHAR(BIRTHDATE, 'DDMMYYYY'), 
		    	UNKNOWNBIRTHIND, RELIGIONCODE, RACECODE, RESIDENTSTAT, CITIZENSHIPSTATCODE,   
			 	JPNREMARKS1, JPNREMARKS2, AFISFLAG, KTINDCODE, 
				NVL(CARDLOSTCNT,0), KPTAPPLSTAT,  
				TO_CHAR(LASTADDCHANGEDATE, 'DDMMYYYY'), TO_CHAR(LASTCARDISSUEDATE, 'DDMMYYYY'),  
				BIRTHPLACE, RJIND, TO_CHAR(APPLAPPROVALDATE, 'DDMMYYYY'),
				TO_CHAR(GREENCARDEXPDATE, 'DDMMYYYY'), CITIZENNATIONCODE,ORIGNAMEIND
			   INTO :police_id:police_id_ind, :military_id:military_id_ind, :kpp_no:kpp_no_ind,
					:gender:gender_ind,:person_stat:person_stat_ind, :birth_date:birth_date_ind,
					:unknown_bi:unknown_bi_ind,:religion:religion_ind, :race:race_ind,
					:resident_stat:resident_stat_ind, :citizen_stat:citizen_stat_ind,
					:jpn_remarks1:jpn_remarks1_ind, :jpn_remarks2:jpn_remarks2_ind, 
					:afis_flag:afis_flag_ind, :restrict_resi_code:restrict_resi_code_ind,
					:card_lost:card_lost_ind,:kpt_appl_stat:kpt_appl_stat_ind,
					:last_addr_change:last_addr_change_ind, :last_card_issued:last_card_issued_ind,
					:birth_place:birth_place_ind,:rj_ind:rj_ind_ind, :approval_date:approval_date_ind,
					:green_card_expiry_date:green_card_expiry_date_ind,:citizen_nation_code:citizen_nation_code_ind,
					:orignameind:orignameind_ind
				FROM JPN_INFO 
				WHERE KPTNO = :kpt_no:kpt_no_ind; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 37;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select POLICEID ,MILITARYID ,KPPNO ,GENDER ,PERSONSTATCODE\
 ,TO_CHAR(BIRTHDATE,'DDMMYYYY') ,UNKNOWNBIRTHIND ,RELIGIONCODE ,RACECODE ,RESI\
DENTSTAT ,CITIZENSHIPSTATCODE ,JPNREMARKS1 ,JPNREMARKS2 ,AFISFLAG ,KTINDCODE ,\
NVL(CARDLOSTCNT,0) ,KPTAPPLSTAT ,TO_CHAR(LASTADDCHANGEDATE,'DDMMYYYY') ,TO_CHA\
R(LASTCARDISSUEDATE,'DDMMYYYY') ,BIRTHPLACE ,RJIND ,TO_CHAR(APPLAPPROVALDATE,'\
DDMMYYYY') ,TO_CHAR(GREENCARDEXPDATE,'DDMMYYYY') ,CITIZENNATIONCODE ,ORIGNAMEI\
ND into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11,:b12:b13,:b14:b15,:b16:b17\
,:b18:b19,:b20:b21,:b22:b23,:b24:b25,:b26:b27,:b28:b29,:b30:b31,:b32:b33,:b34:\
b35,:b36:b37,:b38:b39,:b40:b41,:b42:b43,:b44:b45,:b46:b47,:b48:b49  from JPN_I\
NFO where KPTNO=:b50:b51";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1223;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)police_id;
   sqlstm.sqhstl[0] = (unsigned int  )12;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&police_id_ind;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)military_id;
   sqlstm.sqhstl[1] = (unsigned int  )12;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)&military_id_ind;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)kpp_no;
   sqlstm.sqhstl[2] = (unsigned int  )9;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&kpp_no_ind;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&gender;
   sqlstm.sqhstl[3] = (unsigned int  )1;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)&gender_ind;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)&person_stat;
   sqlstm.sqhstl[4] = (unsigned int  )1;
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)&person_stat_ind;
   sqlstm.sqinds[4] = (         int  )0;
   sqlstm.sqharm[4] = (unsigned int  )0;
   sqlstm.sqadto[4] = (unsigned short )0;
   sqlstm.sqtdso[4] = (unsigned short )0;
   sqlstm.sqhstv[5] = (         void  *)birth_date;
   sqlstm.sqhstl[5] = (unsigned int  )9;
   sqlstm.sqhsts[5] = (         int  )0;
   sqlstm.sqindv[5] = (         void  *)&birth_date_ind;
   sqlstm.sqinds[5] = (         int  )0;
   sqlstm.sqharm[5] = (unsigned int  )0;
   sqlstm.sqadto[5] = (unsigned short )0;
   sqlstm.sqtdso[5] = (unsigned short )0;
   sqlstm.sqhstv[6] = (         void  *)&unknown_bi;
   sqlstm.sqhstl[6] = (unsigned int  )1;
   sqlstm.sqhsts[6] = (         int  )0;
   sqlstm.sqindv[6] = (         void  *)&unknown_bi_ind;
   sqlstm.sqinds[6] = (         int  )0;
   sqlstm.sqharm[6] = (unsigned int  )0;
   sqlstm.sqadto[6] = (unsigned short )0;
   sqlstm.sqtdso[6] = (unsigned short )0;
   sqlstm.sqhstv[7] = (         void  *)&religion;
   sqlstm.sqhstl[7] = (unsigned int  )1;
   sqlstm.sqhsts[7] = (         int  )0;
   sqlstm.sqindv[7] = (         void  *)&religion_ind;
   sqlstm.sqinds[7] = (         int  )0;
   sqlstm.sqharm[7] = (unsigned int  )0;
   sqlstm.sqadto[7] = (unsigned short )0;
   sqlstm.sqtdso[7] = (unsigned short )0;
   sqlstm.sqhstv[8] = (         void  *)race;
   sqlstm.sqhstl[8] = (unsigned int  )5;
   sqlstm.sqhsts[8] = (         int  )0;
   sqlstm.sqindv[8] = (         void  *)&race_ind;
   sqlstm.sqinds[8] = (         int  )0;
   sqlstm.sqharm[8] = (unsigned int  )0;
   sqlstm.sqadto[8] = (unsigned short )0;
   sqlstm.sqtdso[8] = (unsigned short )0;
   sqlstm.sqhstv[9] = (         void  *)&resident_stat;
   sqlstm.sqhstl[9] = (unsigned int  )1;
   sqlstm.sqhsts[9] = (         int  )0;
   sqlstm.sqindv[9] = (         void  *)&resident_stat_ind;
   sqlstm.sqinds[9] = (         int  )0;
   sqlstm.sqharm[9] = (unsigned int  )0;
   sqlstm.sqadto[9] = (unsigned short )0;
   sqlstm.sqtdso[9] = (unsigned short )0;
   sqlstm.sqhstv[10] = (         void  *)&citizen_stat;
   sqlstm.sqhstl[10] = (unsigned int  )1;
   sqlstm.sqhsts[10] = (         int  )0;
   sqlstm.sqindv[10] = (         void  *)&citizen_stat_ind;
   sqlstm.sqinds[10] = (         int  )0;
   sqlstm.sqharm[10] = (unsigned int  )0;
   sqlstm.sqadto[10] = (unsigned short )0;
   sqlstm.sqtdso[10] = (unsigned short )0;
   sqlstm.sqhstv[11] = (         void  *)&jpn_remarks1;
   sqlstm.sqhstl[11] = (unsigned int  )63;
   sqlstm.sqhsts[11] = (         int  )0;
   sqlstm.sqindv[11] = (         void  *)&jpn_remarks1_ind;
   sqlstm.sqinds[11] = (         int  )0;
   sqlstm.sqharm[11] = (unsigned int  )0;
   sqlstm.sqadto[11] = (unsigned short )0;
   sqlstm.sqtdso[11] = (unsigned short )0;
   sqlstm.sqhstv[12] = (         void  *)&jpn_remarks2;
   sqlstm.sqhstl[12] = (unsigned int  )63;
   sqlstm.sqhsts[12] = (         int  )0;
   sqlstm.sqindv[12] = (         void  *)&jpn_remarks2_ind;
   sqlstm.sqinds[12] = (         int  )0;
   sqlstm.sqharm[12] = (unsigned int  )0;
   sqlstm.sqadto[12] = (unsigned short )0;
   sqlstm.sqtdso[12] = (unsigned short )0;
   sqlstm.sqhstv[13] = (         void  *)&afis_flag;
   sqlstm.sqhstl[13] = (unsigned int  )1;
   sqlstm.sqhsts[13] = (         int  )0;
   sqlstm.sqindv[13] = (         void  *)&afis_flag_ind;
   sqlstm.sqinds[13] = (         int  )0;
   sqlstm.sqharm[13] = (unsigned int  )0;
   sqlstm.sqadto[13] = (unsigned short )0;
   sqlstm.sqtdso[13] = (unsigned short )0;
   sqlstm.sqhstv[14] = (         void  *)restrict_resi_code;
   sqlstm.sqhstl[14] = (unsigned int  )3;
   sqlstm.sqhsts[14] = (         int  )0;
   sqlstm.sqindv[14] = (         void  *)&restrict_resi_code_ind;
   sqlstm.sqinds[14] = (         int  )0;
   sqlstm.sqharm[14] = (unsigned int  )0;
   sqlstm.sqadto[14] = (unsigned short )0;
   sqlstm.sqtdso[14] = (unsigned short )0;
   sqlstm.sqhstv[15] = (         void  *)&card_lost;
   sqlstm.sqhstl[15] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[15] = (         int  )0;
   sqlstm.sqindv[15] = (         void  *)&card_lost_ind;
   sqlstm.sqinds[15] = (         int  )0;
   sqlstm.sqharm[15] = (unsigned int  )0;
   sqlstm.sqadto[15] = (unsigned short )0;
   sqlstm.sqtdso[15] = (unsigned short )0;
   sqlstm.sqhstv[16] = (         void  *)&kpt_appl_stat;
   sqlstm.sqhstl[16] = (unsigned int  )1;
   sqlstm.sqhsts[16] = (         int  )0;
   sqlstm.sqindv[16] = (         void  *)&kpt_appl_stat_ind;
   sqlstm.sqinds[16] = (         int  )0;
   sqlstm.sqharm[16] = (unsigned int  )0;
   sqlstm.sqadto[16] = (unsigned short )0;
   sqlstm.sqtdso[16] = (unsigned short )0;
   sqlstm.sqhstv[17] = (         void  *)last_addr_change;
   sqlstm.sqhstl[17] = (unsigned int  )9;
   sqlstm.sqhsts[17] = (         int  )0;
   sqlstm.sqindv[17] = (         void  *)&last_addr_change_ind;
   sqlstm.sqinds[17] = (         int  )0;
   sqlstm.sqharm[17] = (unsigned int  )0;
   sqlstm.sqadto[17] = (unsigned short )0;
   sqlstm.sqtdso[17] = (unsigned short )0;
   sqlstm.sqhstv[18] = (         void  *)last_card_issued;
   sqlstm.sqhstl[18] = (unsigned int  )9;
   sqlstm.sqhsts[18] = (         int  )0;
   sqlstm.sqindv[18] = (         void  *)&last_card_issued_ind;
   sqlstm.sqinds[18] = (         int  )0;
   sqlstm.sqharm[18] = (unsigned int  )0;
   sqlstm.sqadto[18] = (unsigned short )0;
   sqlstm.sqtdso[18] = (unsigned short )0;
   sqlstm.sqhstv[19] = (         void  *)&birth_place;
   sqlstm.sqhstl[19] = (unsigned int  )28;
   sqlstm.sqhsts[19] = (         int  )0;
   sqlstm.sqindv[19] = (         void  *)&birth_place_ind;
   sqlstm.sqinds[19] = (         int  )0;
   sqlstm.sqharm[19] = (unsigned int  )0;
   sqlstm.sqadto[19] = (unsigned short )0;
   sqlstm.sqtdso[19] = (unsigned short )0;
   sqlstm.sqhstv[20] = (         void  *)rj_ind;
   sqlstm.sqhstl[20] = (unsigned int  )3;
   sqlstm.sqhsts[20] = (         int  )0;
   sqlstm.sqindv[20] = (         void  *)&rj_ind_ind;
   sqlstm.sqinds[20] = (         int  )0;
   sqlstm.sqharm[20] = (unsigned int  )0;
   sqlstm.sqadto[20] = (unsigned short )0;
   sqlstm.sqtdso[20] = (unsigned short )0;
   sqlstm.sqhstv[21] = (         void  *)approval_date;
   sqlstm.sqhstl[21] = (unsigned int  )9;
   sqlstm.sqhsts[21] = (         int  )0;
   sqlstm.sqindv[21] = (         void  *)&approval_date_ind;
   sqlstm.sqinds[21] = (         int  )0;
   sqlstm.sqharm[21] = (unsigned int  )0;
   sqlstm.sqadto[21] = (unsigned short )0;
   sqlstm.sqtdso[21] = (unsigned short )0;
   sqlstm.sqhstv[22] = (         void  *)green_card_expiry_date;
   sqlstm.sqhstl[22] = (unsigned int  )9;
   sqlstm.sqhsts[22] = (         int  )0;
   sqlstm.sqindv[22] = (         void  *)&green_card_expiry_date_ind;
   sqlstm.sqinds[22] = (         int  )0;
   sqlstm.sqharm[22] = (unsigned int  )0;
   sqlstm.sqadto[22] = (unsigned short )0;
   sqlstm.sqtdso[22] = (unsigned short )0;
   sqlstm.sqhstv[23] = (         void  *)citizen_nation_code;
   sqlstm.sqhstl[23] = (unsigned int  )5;
   sqlstm.sqhsts[23] = (         int  )0;
   sqlstm.sqindv[23] = (         void  *)&citizen_nation_code_ind;
   sqlstm.sqinds[23] = (         int  )0;
   sqlstm.sqharm[23] = (unsigned int  )0;
   sqlstm.sqadto[23] = (unsigned short )0;
   sqlstm.sqtdso[23] = (unsigned short )0;
   sqlstm.sqhstv[24] = (         void  *)&orignameind;
   sqlstm.sqhstl[24] = (unsigned int  )1;
   sqlstm.sqhsts[24] = (         int  )0;
   sqlstm.sqindv[24] = (         void  *)&orignameind_ind;
   sqlstm.sqinds[24] = (         int  )0;
   sqlstm.sqharm[24] = (unsigned int  )0;
   sqlstm.sqadto[24] = (unsigned short )0;
   sqlstm.sqtdso[24] = (unsigned short )0;
   sqlstm.sqhstv[25] = (         void  *)kpt_no;
   sqlstm.sqhstl[25] = (unsigned int  )13;
   sqlstm.sqhsts[25] = (         int  )0;
   sqlstm.sqindv[25] = (         void  *)&kpt_no_ind;
   sqlstm.sqinds[25] = (         int  )0;
   sqlstm.sqharm[25] = (unsigned int  )0;
   sqlstm.sqadto[25] = (unsigned short )0;
   sqlstm.sqtdso[25] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
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
		userlog("insert_into_appnt_info : After the select statement :%d:",sqlca.sqlcode);		
	#endif

	//	if (SQLCODE != 0 && !NO_DATA_FOUND)
		if(SQLCODE != 0 && SQLCODE != 1403)
		{
#ifdef DEBUG
			userlog("insert_into_appnt_info : Select from JPN_INFO failed for KPT %s: %s", kpt_no, SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_into_appnt_info: Select from JPN_INFO failed ");
			sprintf(excep_log.error_msg, "insert_into_appnt_info: Select from JPN_INFO failed for KPT %s : %s", kpt_no, SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}
	}
	else
	{
		// Added this else part for Release 3.18 CR211 MyTentera
	#ifdef DEBUG
		userlog("insert_into_appnt_info : Inside the missed_opex_flag loop, Before the select statement");		
	#endif
	  /* EXEC SQL SELECT  KTINDCODE,RJIND 				
			   INTO  :restrict_resi_code:restrict_resi_code_ind,:rj_ind:rj_ind_ind					 
				FROM JPN_INFO 
				WHERE KPTNO = :kpt_no:kpt_no_ind; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 37;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select KTINDCODE ,RJIND into :b0:b1,:b2:b3  from JPN_INFO \
where KPTNO=:b4:b5";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1342;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)restrict_resi_code;
   sqlstm.sqhstl[0] = (unsigned int  )3;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&restrict_resi_code_ind;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)rj_ind;
   sqlstm.sqhstl[1] = (unsigned int  )3;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)&rj_ind_ind;
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



	#ifdef DEBUG
		userlog("insert_into_appnt_info : After the select statement :%d:",sqlca.sqlcode);		
	#endif

	//	if (SQLCODE != 0 && !NO_DATA_FOUND)
		if(SQLCODE != 1403)
		{
		#ifdef DEBUG
					userlog("insert_into_appnt_info : Select from JPN_INFO failed for KPT %s: %s", kpt_no, SQLMSG);
		#endif
		//	strcpy(prog_log.remarks,"insert_into_appnt_info: Select from JPN_INFO failed ");
		//	sprintf(excep_log.error_msg, "insert_into_appnt_info: Select from JPN_INFO failed for KPT %s : %s", kpt_no, SQLMSG);
		//	excep_log.termination_flag = YES;
		//	excep_log.severity = FATAL;

		//	log_error(ctx);
			
		//	return SELECT_ERROR;
		}

	}

	#ifdef DEBUG
		userlog("insert_into_appnt_info : Before copying the police_id and military_id");		
	#endif

	/* Decide the id type and id no */

	if (0 == police_id_ind)
	{
		strcpy((char*)id_no.arr, police_id);
		setlen(id_no);
		id_no_ind  = 0;

		itoa(ID_TYPE_POLICE, id_type, 10);
		id_type_ind = 0;
	}
	else if (0 == military_id_ind)
	{
		strcpy((char*)id_no.arr, military_id);
		setlen(id_no);
		id_no_ind  = 0;

		itoa(ID_TYPE_MILITARY, id_type, 10);
		id_type_ind = 0;
	}
	else
	{
		strcpy((char*)id_no.arr, "");
		setlen(id_no);
		strcpy(id_type, "");
	}

	/* Populate the host variables */

	if (0 != applnt->hsc_color_code)
	{
		hsc_color_code = applnt->hsc_color_code;
		hsc_color_code_ind = 0;
		/* Added on 12/11/2003 by shiva.p */
		/* Due to Residential status logic change in jpj_update */
		if(resident_stat ==0)
		{
			resident_stat = hsc_color_code;
			resident_stat_ind=0;
		}

	}
	else	/* if HSC color code is null */
	{
		if (txn_type < TXN_CHIP_UPD)
		{
#ifdef DEBUG
			userlog(" insert_into_appnt_info : HSC color code is NULL");
#endif
			strcpy(prog_log.remarks,"insert_into_appnt_info: HSC color code can not NULL");
			sprintf(excep_log.error_msg, "insert_into_appnt_info: HSC color code can not NULL");
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return HSC_COLOR_CD_NULL;

		}
	}

	#ifdef DEBUG
		userlog("insert_into_appnt_info : After copying the HSC color code");		
	#endif

	if (0 != applnt->hk_ind)
	{
		hk_flag = applnt->hk_ind;
		hk_flag_ind = 0;
	}

	/*Added on 21/03/2002 by brijesh*/
	if (0 != applnt->id_type[0])
	{
		strcpy(id_type, applnt->id_type);
		id_type_ind = 0;
	}
	
	if (0 != applnt->id_no[0])
	{
		strcpy((char*)id_no.arr, applnt->id_no);
		setlen(id_no);
		id_no_ind = 0;
	}

	if (0 != applnt->address.city_code)
	{
		city_code = applnt->address.city_code;
		city_code_ind = 0;
	}

	if (0 != applnt->address.post_code[0] )
	{
		strcpy((char*)post_code.arr, applnt->address.post_code);
		setlen(post_code);
		post_code_ind = 0;
	}

	if (0 != applnt->address.state_code[0] )
	{
		strcpy(state_code, applnt->address.state_code);
		state_code_ind = 0;
	}

	#ifdef DEBUG
		userlog("insert_into_appnt_info : Before copying the names");		
	#endif

	if (0 != applnt->name.siren_short_name1[0] )
	{
		strcpy((char*)siren_short_name1.arr, applnt->name.siren_short_name1);
		siren_short_name1_ind = 0;
		setlen(siren_short_name1);
	}

	if (0 != applnt->name.siren_short_name2[0] )
	{
		strcpy((char*)siren_short_name2.arr, applnt->name.siren_short_name2);
		siren_short_name2_ind = 0;
		setlen(siren_short_name2);
	}

	if (0 != applnt->name.gmpc_short_name1[0] )
	{
		strcpy((char*)gmpc_short_name1.arr, applnt->name.gmpc_short_name1);
		gmpc_short_name1_ind = 0;
		setlen(gmpc_short_name1);
	}
	else
	{
#ifdef DEBUG
		userlog(" insert_into_appnt_info : GMPC Name1 is NULL");
#endif
		strcpy(prog_log.remarks,"insert_into_appnt_info: GMPC Name1 can not NULL");
		sprintf(excep_log.error_msg, "insert_into_appnt_info: GMPC Name1 can not NULL");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return GMPC_NAME1_NULL;

	}
	
	if (0 != applnt->name.gmpc_short_name2[0] )
	{
		strcpy((char*)gmpc_short_name2.arr, applnt->name.gmpc_short_name2);
		gmpc_short_name2_ind = 0;
		setlen(gmpc_short_name2);
	}
	
	if (0 != applnt->name.gmpc_short_name3[0] )
	{
		strcpy((char*)gmpc_short_name3.arr, applnt->name.gmpc_short_name3);
		gmpc_short_name3_ind = 0;
		setlen(gmpc_short_name3);
	}

	if (0 != applnt->name.current_long_name[0] )
	{
		strcpy((char*)current_long_name.arr, applnt->name.current_long_name);
		current_long_name_ind = 0;
		setlen(current_long_name);
	}

	if (0 != applnt->name.original_name[0] )
	{
		strcpy((char*)original_name.arr, applnt->name.original_name);
		original_name_ind = 0;
		setlen(original_name);
	}

	if (0 != applnt->address.address1[0] )
	{
		strcpy((char*)address1.arr, applnt->address.address1);
		address1_ind = 0;
		setlen(address1);
	}

	if (0 != applnt->address.address2[0] )
	{
		strcpy((char*)address2.arr, applnt->address.address2);
		address2_ind = 0;
		setlen(address2);
	}

	if (0 != applnt->address.address3[0] )
	{
		strcpy((char*)address3.arr, applnt->address.address3);
		address3_ind = 0;
		setlen(address3);
	}

	#ifdef DEBUG
		userlog("insert_into_appnt_info : After copying the Address");		
	#endif

	if (0 != applnt->join_date[0] )
	{
		strcpy(join_date, applnt->join_date);
		join_date_ind = 0;
	}

	if (0 != applnt->retirement_date[0] )
	{
		strcpy(retirement_date, applnt->retirement_date);
		retirement_date_ind = 0;
	}

	if (0 == jpn_remarks1_ind)
	{
		setnull(jpn_remarks1);

	}

	if (0 == jpn_remarks2_ind)
	{
		setnull(jpn_remarks2);
	
	}

	if (0 == birth_place_ind)
	{
		setnull(birth_place);
	}

	if (0 != gender_ind)
	{
		gender = '\0';
		gender_ind = -1;
	}

	if (-1 == card_lost_ind)
	{
		card_lost = 0;
		card_lost_ind = 0;
	}

	#ifdef DEBUG
		userlog("insert_into_appnt_info : applnt->citizen_nation_code:%s:",applnt->citizen_nation_code);		
	#endif

	if((applnt->citizen_nation_code[0] != ' ') && (applnt->citizen_nation_code[0] != '\0'))
	{
		strcpy(citizen_nation_code, applnt->citizen_nation_code);
		citizen_nation_code_ind  = 0;
	}

	if (0 != applnt->immrefno[0])
	{
		strcpy((char*)immrefno.arr, applnt->immrefno);
		setlen(immrefno);
		immrefno_ind = 0;
	}

	if (0 != applnt->immrefdate[0])
	{
		strcpy(immrefdate, applnt->immrefdate);
		immrefdate_ind = 0;
	}

	if (0 != applnt->immexpdate[0])
	{
		strcpy(immexpdate, applnt->immexpdate);
		immexpdate_ind = 0;
	}

	if (0 != applnt->passportno[0])
	{
		strcpy((char*)passportno.arr, applnt->passportno);
		setlen(passportno);
		passportno_ind = 0;
	}

	if (0 != applnt->passportissuedate[0])
	{
		strcpy(passportissuedate, applnt->passportissuedate);
		passportissuedate_ind = 0;
	}

	if (0 != applnt->passportissuecountry[0])
	{
		strcpy(passportissuecountry, applnt->passportissuecountry);
		passportissuecountry_ind = 0;
	}

	#ifdef DEBUG
		userlog("insert_into_appnt_info : After copying the passport info");		
	#endif
     
	 /* Added on 17 FEB 2005 for IJPN */

	if (0 != applnt->rjstartdate[0])
	{
		strcpy(rjstartdate, applnt->rjstartdate);
		rjstartdate_ind = 0;
	}

	if (0 != applnt->rjenddate[0])
	{
		strcpy(rjenddate, applnt->rjenddate);
		rjenddate_ind = 0;
	}

	if (0 != applnt->ktstartdate[0])
	{
		strcpy(ktstartdate, applnt->ktstartdate);
		ktstartdate_ind = 0;
	}

	if (0 != applnt->ktenddate[0])
	{
		strcpy(ktenddate, applnt->ktenddate);
		ktenddate_ind = 0;
	}
  
	if (0 != jkind_ind)
	{
		jkind = applnt->jkind;
		jkind_ind = 0;
	}

  	
	if (0 != applnt->blklstcode[0])
	{
		strcpy(blklstcode, applnt->blklstcode);
		blklstcode_ind = 0;
	}

	if ('\0' != applnt->afisbypass)
	{
		afisbypass = applnt->afisbypass;
		afisbypass_ind = 0;
	}

	if ('\0' != applnt->birthdate)
	{
		strcpy(birth_date1,applnt->birthdate);
		birth_date1_ind = 0;
	}

	

//Added by Amarjith on 25th Aug 2004. JRS 147
	strcpy(szPermitNo, applnt->szPermitNo);
	strcpy(szPermitIssueDate, applnt->szPermitIssueDate);
	nPermitType = applnt->nPermitType;
	nPRDocType = applnt->nPRDocType;
//JRS 147

// added on 19 Feb 2014 for CR 284 and Release 3.27

	if (0 != applnt->lostcntcrime)
	{
		lostcntcrime = applnt->lostcntcrime;
		lostcntcrime_ind = 0;
	}

	if (0 != applnt->lostcntdis)
	{
		lostcntdis = applnt->lostcntdis;
		lostcntdis_ind = 0;
	}

	if (0 != applnt->lostcntneg)
	{
		lostcntneg = applnt->lostcntneg;
		lostcntneg_ind = 0;
	}


//
	// Added this for CR 282 Release 3.28 on 28/05/2014

	if (0 != applnt->ktareacode[0])
	{
		strcpy(ktareacode, applnt->ktareacode);		
		ktareacode_ind = 0;
	}

	if (0 != applnt->apjareacode[0])
	{
		strcpy(apjareacode, applnt->apjareacode);		
		apjareacode_ind = 0;
	}

	if (applnt->ktind[0] != 0)
		strcpy(ktind,applnt->ktind);

	if (applnt->rjind[0] != 0)
		strcpy(rjind,applnt->rjind);

	//

	#ifdef DEBUG
		userlog("insert_into_appnt_info : After copying all the variables");		
	#endif


	itoa(TXN_CON_LOSS, txn_code1, 10);
	itoa(TXN_REPL_LOSS, txn_code2, 10);

	#ifdef DEBUG
		userlog("insert_into_appnt_info : Before the 1 select count(*) from appl_txn");
		userlog("insert_into_appnt_info : applid1 : %s",appl_id);		
	#endif

	count = 0;
	/*EXEC SQL SELECT COUNT(*) INTO :count FROM APPL_TXN
		WHERE APPLID = :appl_id
		AND TXNCODE IN (:txn_code1, :txn_code2)
		AND TXNCANCELCODE IS NULL;  Changed this on 24/10/2008 */

	/* EXEC SQL SELECT COUNT(*) INTO :count FROM APPL_TXN
		WHERE APPLID = :appl_id
		AND TXNCODE IN ('303', '403')		
		AND TXNCANCELCODE IS NULL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 37;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN where ((APPLID=:b1 \
and TXNCODE in ('303','403')) and TXNCANCELCODE is null )";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1369;
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
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
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
		userlog("insert_into_appnt_info : After the 1 select count(*) from appl_txn sqlcode:%d:",sqlca.sqlcode);		
	#endif


	//	if(SQLCODE != 0 && !NO_DATA_FOUND)
		if(SQLCODE != 0 && SQLCODE != 1403)
		{
#ifdef DEBUG
			userlog(" insert_into_appnt_info : Select from APPL_TXN failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_into_appnt_info: Select from APPL_TXN failed");
			sprintf(excep_log.error_msg, "insert_into_appnt_info: Select from APPL_TXN failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}

		if (count > 0)
		{
			card_lost = card_lost + 1;
			card_lost_ind = 0;
		}

     //JRS : 53 
	// Added this code on 27/07/06 to set residental stat and IC Color code
	// insert statement
		
		count = 0;
		
		itoa(TXN_CON_GREEN_TO_RED, txn_code1, 10);
		itoa(TXN_REPL_GREEN_TO_RED, txn_code2, 10);

		#ifdef DEBUG
			userlog("insert_into_appnt_info : Before the 2 select count(*) from appl_txn");
			userlog("insert_into_appnt_info : applid2 : %s",appl_id);
		#endif

		/*EXEC SQL SELECT COUNT(*) INTO :count FROM APPL_TXN
		WHERE APPLID = :appl_id
		AND TXNCODE IN (:txn_code1, :txn_code2)
		AND TXNCANCELCODE IS NULL;  Changed this on 24/10/2008 */

		/* EXEC SQL SELECT COUNT(*) INTO :count FROM APPL_TXN
		WHERE APPLID = :appl_id
		AND TXNCODE IN ('308', '408')
		AND TXNCANCELCODE IS NULL; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 37;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN where ((APPLID=:b1\
 and TXNCODE in ('308','408')) and TXNCANCELCODE is null )";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1392;
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
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
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
			userlog("insert_into_appnt_info : After the 2 select count(*) from appl_txn sqlcode:%d:",sqlca.sqlcode);		
		#endif
		
		if (count > 0)
		{
			resident_stat = 'M';
			resident_stat_ind=0;
			hsc_color_code = 'M';
			hsc_color_code_ind = 0;


		}

// Added this code on 2/12/2008 to make the citizen_nation_code value to 9999 
//		if it has any spaces or if the value is NULL.

		if(((citizen_nation_code[0] == ' ') || (citizen_nation_code[0] == '\0')) && (hsc_color_code == 'H') == 0)
		{
			strcpy(citizen_nation_code,"9999");
		}

	//JRS : 53 
	
	// Added this code on 13/07/06 to include INVSERVICEFLAG column into
	// insert statement

	//if((transaction_code == 206) || (transaction_code == 207) 
	//	|| (transaction_code == 315) || (transaction_code == 415))
	// 
	//	if(strncmp(id_type,"92",2) == 0)
	//		invserviceflag = 'M'; // Military ID
	//	else if (strncmp(id_type,"93",2) == 0)
	//		invserviceflag = 'P'; // Police ID

		#ifdef DEBUG
			userlog("insert_into_appnt_info : ** citizen_nation_code ** : %s",citizen_nation_code);
			userlog("insert_into_appnt_info : Before the 3 select count(*) from appl_txn");	
			userlog("insert_into_appnt_info : applid3 : %s",appl_id);
		#endif

	txncount=0;
	/* EXEC SQL SELECT COUNT(*) INTO :txncount FROM APPL_TXN
		WHERE APPLID = :appl_id
		AND TXNCODE IN ('206','207','315','415'); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 37;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN where (APPLID=:b1 a\
nd TXNCODE in ('206','207','315','415'))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1415;
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
			userlog("insert_into_appnt_info : After the 3 select count(*) from appl_txn sqlcode:%d:",sqlca.sqlcode);		
		#endif

		#ifdef DEBUG
			userlog("insert_into_appnt_info : txncount for inserviceflag :%d:",txncount);
	    #endif


	if(txncount > 0)
	{	 
		if(strncmp(id_type,"92",2) == 0)
			invserviceflag = 'M'; // Military ID
		//else if (strncmp(id_type,"93",2) == 0) -- commented on 20/06/2008 for JRS151 for R3.14 
		//	invserviceflag = 'P'; // Police ID	 
	}


	// Added this code on 07/09/2010 as part of Release 3.19 to insert a retitrement & join date value if it is null
	//CR no 214

	if((strncmp(id_type,"92",2) == 0) && (person_stat == 'A'))
	{
		applcnt = 0;
		/* EXEC SQL SELECT COUNT(*) INTO :applcnt FROM APPL_TXN 
			WHERE APPLID = :appl_id 
			AND LEGTXNCODE NOT IN ('3150','4150')
			AND SUBSTR(LEGTXNCODE,1,1) IN ('3','4'); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 37;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN where ((APPLID=:b1\
 and LEGTXNCODE not  in ('3150','4150')) and SUBSTR(LEGTXNCODE,1,1) in ('3','4\
'))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1438;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&applcnt;
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



		if(applcnt > 0)
		{
			if(strcmp(join_date,"\0") == 0)
			{
				/* EXEC SQL SELECT TO_CHAR(TO_DATE(SUBSTR(:appl_id,1,8),'YYYYMMDD'),'DDMMYYYY') INTO :join_date FROM DUAL; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 37;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select TO_CHAR(TO_DATE(SUBSTR(:b0,1,8),'YYYYMMDD'),'DDMMY\
YYY') into :b1  from DUAL ";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1461;
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
    sqlstm.sqhstv[1] = (         void  *)join_date;
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

										
				//strncpy(join_date,appl_id,8);
				join_date_ind = 0;
			}


			if(strcmp(retirement_date,"\0") == 0)
			{
				/* EXEC SQL SELECT TO_CHAR(TO_DATE(SUBSTR(:appl_id,1,8),'YYYYMMDD'),'DDMMYYYY') INTO :retirement_date FROM DUAL; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 37;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select TO_CHAR(TO_DATE(SUBSTR(:b0,1,8),'YYYYMMDD'),'DDMMY\
YYY') into :b1  from DUAL ";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1484;
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
    sqlstm.sqhstv[1] = (         void  *)retirement_date;
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

										
				//strncpy(retirement_date,appl_id,8);
				retirement_date_ind = 0;
			}
		}
	}

	//

		#ifdef DEBUG			
			userlog("join_date,join_date_ind:%s, %d:",join_date,join_date_ind);
			userlog("retirement_date, retirement_date_ind:%s, %d:", retirement_date,retirement_date_ind);			
		#endif





// The following code is added on 25/06/2010 for My Tentera changes for Release 3.18   
// CR 211

	

	if(((strncmp(id_type,"92",2) == 0) && ((id_no.arr[0] != '\0') && (id_no.arr[0] != ' '))) && (retirement_date[0] == '\0'))
	{
		invserviceflag = 'S'; // silver card for Military
	}

	// Added this code on 1/09/2010 to make rjind and ktind NULL when there is - as value

	if(strcmp(rj_ind, "-") == 0)
		strcpy(rj_ind,"\0");

	if(strcmp(restrict_resi_code, "-") == 0)
		strcpy(restrict_resi_code, "\0");
    //


	// This code added on 15/11/2010 to update NULL values to ktindcode,rj_ind,restricresidcode

	if((strncmp(id_type,"92",2) == 0) && (invserviceflag != 'S'))
	{
		userlog("insert_into_appnt_info : Militery retirement");
		strcpy(rj_ind,"\0");
		strcpy(restrict_resi_code, "\0");	
	}




#ifdef DEBUG
	userlog("insert_into_appnt_info : Release 3.28");
	userlog("insert_into_appnt_info : Data from Request buffer");
	userlog("insert_into_appnt_info : Address1 - %s %d", address1.arr, strlen((char *)address1.arr) );
	userlog("insert_into_appnt_info : Address2 - %s %d", address2.arr, strlen((char *)address2.arr) );
	userlog("insert_into_appnt_info : Address3 - %s %d", address3.arr, strlen((char *)address3.arr) );
	userlog("insert_into_appnt_info : City code - %d", city_code);
	userlog("insert_into_appnt_info : Post code - %s %d", post_code.arr, strlen((char*)post_code.arr) );
	userlog("insert_into_appnt_info : State code - %s %d", state_code, strlen((char*)state_code) );
	userlog("insert_into_appnt_info : Current long name - %s %d", current_long_name.arr, strlen((char*)current_long_name.arr) );
	userlog("insert_into_appnt_info : Gmpc short name1 - %s %d", gmpc_short_name1.arr, strlen((char*)gmpc_short_name1.arr) );
	userlog("insert_into_appnt_info : Gmpc short name2 - %s %d", gmpc_short_name2.arr, strlen((char*)gmpc_short_name2.arr) );
	userlog("insert_into_appnt_info : Gmpc short name3 - %s %d", gmpc_short_name3.arr, strlen((char*)gmpc_short_name3.arr) );
	userlog("insert_into_appnt_info : Original name - %s %d", original_name.arr, strlen((char*)original_name.arr) );
	userlog("insert_into_appnt_info : Siren short name1 - %s %d", siren_short_name1.arr, strlen((char*)siren_short_name1.arr) );
	userlog("insert_into_appnt_info : Siren short name2 - %s %d", siren_short_name2.arr, strlen((char*)siren_short_name2.arr) );
	userlog("insert_into_appnt_info : HK ind - %c", hk_flag);
	userlog("insert_into_appnt_info : HSC color code - %c", hsc_color_code);
	userlog("insert_into_appnt_info : Pol/Army join date - %s", join_date);
	userlog("insert_into_appnt_info : Retire date - %s", retirement_date);
		
	userlog("insert_into_appnt_info : Data from JPN_INFO");
	userlog("insert_into_appnt_info : Id no - %s %d", id_no.arr, strlen((char*)id_no.arr) );
	userlog("insert_into_appnt_info : Id type - %s %d", id_type, strlen((char*)id_type) );
	userlog("insert_into_appnt_info : KPP no - %s %d", kpp_no, strlen(kpp_no) );
	userlog("insert_into_appnt_info : Birth date - %s %d", birth_date, strlen(birth_date) );
	userlog("insert_into_appnt_info : JPN remarks1 - %s %d", jpn_remarks1.arr, strlen((char*)jpn_remarks1.arr) );
	userlog("insert_into_appnt_info : JPN remarks2 - %s %d", jpn_remarks2.arr, strlen((char*)jpn_remarks2.arr) );
	userlog("insert_into_appnt_info : Last addr change date - %s %d", last_addr_change, strlen(last_addr_change) );
	userlog("insert_into_appnt_info : Last card issued date - %s %d", last_card_issued, strlen(last_card_issued) );
	userlog("insert_into_appnt_info : Birth place - %s %d", birth_place.arr, strlen((char*)birth_place.arr) );
	userlog("insert_into_appnt_info : RJ ind - %s %d", rj_ind, strlen(rj_ind) );
	userlog("insert_into_appnt_info : Gender - %c", gender);
	userlog("insert_into_appnt_info : Gender ind - %d", gender_ind);
	userlog("insert_into_appnt_info : Person stat - %c", person_stat);
	userlog("insert_into_appnt_info : Unknow birth ind - %c", unknown_bi);
	userlog("insert_into_appnt_info : Religion - %c", religion);
	userlog("insert_into_appnt_info : Race - %s %d", race, strlen(race) );
	userlog("insert_into_appnt_info : Resident stat - %c", resident_stat);
	userlog("insert_into_appnt_info : Citizen stat - %c", citizen_stat);
	userlog("insert_into_appnt_info : Afis flag - %c", afis_flag );
	userlog("insert_into_appnt_info : KPT appl date - %c", kpt_appl_stat);
	userlog("insert_into_appnt_info : Card lost count - %d", card_lost);
	userlog("insert_into_appnt_info : Restricted residence code - %s %d", restrict_resi_code, strlen(restrict_resi_code) );
	userlog("insert_into_appnt_info : Approval date - %s", approval_date);
	userlog("insert_into_appnt_info : Green card expiry date - %s", green_card_expiry_date);
	userlog("insert_into_appnt_info : Citizen nationality code - %s", citizen_nation_code);
	userlog("insert_into_appnt_info : immrefno - %s", immrefno.arr);
	userlog("insert_into_appnt_info : immrefdate - %s", immrefdate);
	userlog("insert_into_appnt_info : immexpdate - %s", immexpdate);
	userlog("insert_into_appnt_info : passportno - %s", passportno.arr);
	userlog("insert_into_appnt_info : passportissuedate - %s", passportissuedate);
	userlog("insert_into_appnt_info : passportissuecountry - %s", passportissuecountry);
//JRS 147

	userlog("insert_into_appnt_info : PermitNo - %s", szPermitNo);
	userlog("insert_into_appnt_info : PermitIssueDate - %s", szPermitIssueDate);
	userlog("insert_into_appnt_info : PermitType - %d", nPermitType);
	userlog("insert_into_appnt_info : PRDocType - %d", nPRDocType);

//JRS 147

     /* Added on 17 FEB 2005 for IJPN */
	userlog("insert_into_appnt_info : rjstartdate - %s", rjstartdate);
	userlog("insert_into_appnt_info : rjenddate - %s", rjenddate);
	userlog("insert_into_appnt_info : ktstartdate - %s", ktstartdate);
	userlog("insert_into_appnt_info : ktenddate - %s", ktenddate);
	userlog("insert_into_appnt_info : jkind - %c", jkind);
	userlog("insert_into_appnt_info : blklstcode - %c", blklstcode);
	userlog("insert_into_appnt_info : afisbypass - %c", afisbypass);
	userlog("insert_into_appnt_info : invserviceflag - %c", invserviceflag);
	userlog("insert_into_appnt_info : from buffer birth_date1 - %s", birth_date1);
	userlog("insert_into_appnt_info : orignameind - %c", orignameind);

	// added on 19 Feb 2014 for Rel 3.27
	userlog("insert_into_appnt_info : lostcntcrime - %d", lostcntcrime);
	userlog("insert_into_appnt_info : lostcntdis - %d", lostcntdis);
	userlog("insert_into_appnt_info : lostcntneg - %d", lostcntneg);

	// Added on 28/05/2014 for Release 3.28
	userlog("insert_into_appnt_info : ktareacode - %s", ktareacode);
	userlog("insert_into_appnt_info : apjareacode - %s", apjareacode);

	

#endif
	
	/* EXEC SQL 
		INSERT INTO APPNT_JPN_INFO (APPLID, KPTNO, KPPNO, GENDER, BIRTHDATE, UNKNOWNBIRTHIND, 
			RELIGIONCODE, RACECODE, CITIZENSHIPSTATCODE, HKIND, ORIGNAME, CURRLONGNAME, CURRSHORTNAME1, 
			CURRSHORTNAME2, GMPCSHORTNAME1, GMPCSHORTNAME2, GMPCSHORTNAME3, ADDRESS1, ADDRESS2, 
			ADDRESS3, POSTCODE, CITYCODE, STATECODE, JPNREMARKS1, JPNREMARKS2, IDTYPE, IDNO, 
			BIRTHPLACE, HSCCOLORCODE, RESTRICRESIDCODE, RJIND, RESIDENTSTAT, PERSONSTATCODE, 
			LASTADDCHANGEDATE, AFISFLAG, CARDLOSTCNT, LASTKPTISSUEDDATE, KPTAPPLSTAT,
			POLMILITARYJOINDATE, RETIREMENTDATE, APPLAPPROVALDATE, GREENCARDEXPDATE,
			CITIZENNATIONCODE, IMMREFNO, IMMREFDATE, IMMEXPDATE, PASSPORTNO, PASSPORTISSUEDDATE,
			PASSPORTISSUECOUNTRY, PERMITNO, PERMITISSUEDATE, PERMITTYPE, PRDOCTYPE,
			RJSTARTDATE,RJENDDATE,KTSTARTDATE,KTENDDATE,JKIND,BLKLSTCODE,AFISBYPASS,
			INVSERVICEFLAG, ORIGNAMEIND,		//Added by Amarjith on 25th Aug '04. JRS 147.//Commented for NRO
			KTINDCODE,   // This column is included for 3.18 My Tentera changes
			LOSTCNTCRIME,LOSTCNTDIS,LOSTCNTNEG, //These columns add on 19 Feb 2014 for Rel 3.27
			KTAREACODE, APJAREACODE)  //These columns add on 28/05/2014 for Rel 3.28
		VALUES (:appl_id, :kpt_no:kpt_no_ind, :kpp_no:kpp_no_ind, :gender:gender_ind, 
			TO_DATE(:birth_date1:birth_date1_ind, 'DDMMYYYY'), :unknown_bi:unknown_bi_ind, 
			:religion:religion_ind, :race:race_ind, :citizen_stat:citizen_stat_ind,
			:hk_flag:hk_flag_ind, :original_name:original_name_ind, :current_long_name:current_long_name_ind,
			:siren_short_name1:siren_short_name1_ind , :siren_short_name2:siren_short_name2_ind,
			:gmpc_short_name1:gmpc_short_name1_ind, :gmpc_short_name2:gmpc_short_name2_ind, 
			:gmpc_short_name3:gmpc_short_name3_ind, :address1:address1_ind, :address2:address2_ind,
			:address3:address3_ind, :post_code:post_code_ind, :city_code:city_code_ind,
			:state_code:state_code_ind, :jpn_remarks1:jpn_remarks1_ind, :jpn_remarks2:jpn_remarks2_ind,
			:id_type:id_type_ind, :id_no:id_no_ind, :birth_place:birth_place_ind,
			:hsc_color_code:hsc_color_code_ind, :restrict_resi_code:restrict_resi_code_ind, :rj_ind:rj_ind_ind, 
			:resident_stat:resident_stat_ind, :person_stat:person_stat_ind, 
			TO_DATE(:last_addr_change:last_addr_change_ind, 'DDMMYYYY'), :afis_flag:afis_flag_ind,
			:card_lost:card_lost_ind, TO_DATE(:last_card_issued:last_card_issued_ind, 'DDMMYYYY'),
			:kpt_appl_stat:kpt_appl_stat_ind, TO_DATE(:join_date:join_date_ind, 'DDMMYYYY'), 
			TO_DATE(:retirement_date:retirement_date_ind, 'DDMMYYYY'),
			TO_DATE(:approval_date:approval_date_ind, 'DDMMYYYY'),
			TO_DATE(:green_card_expiry_date:green_card_expiry_date_ind, 'DDMMYYYY'),
			:citizen_nation_code:citizen_nation_code_ind, 
			:immrefno:immrefno_ind, TO_DATE(:immrefdate:immrefdate_ind, 'DDMMYYYY'), 
			TO_DATE(:immexpdate:immexpdate_ind, 'DDMMYYYY'), :passportno:passportno_ind, 
			TO_DATE(:passportissuedate:passportissuedate_ind, 'DDMMYYYY'),
			:passportissuecountry:passportissuecountry_ind, 
			:szPermitNo, TO_DATE(:szPermitIssueDate, 'DDMMYYYY'), //Commented for NRO.
			:nPermitType, :nPRDocType, TO_DATE(:rjstartdate:rjstartdate_ind,'DDMMYYYY'),
			TO_DATE(:rjenddate:rjenddate_ind, 'DDMMYYYY'), 
			TO_DATE(:ktstartdate:ktstartdate_ind,'DDMMYYYY'),
			TO_DATE(:ktenddate:ktenddate_ind,'DDMMYYYY'),:jkind:jkind_ind,
			:blklstcode:blklstcode_ind,:afisbypass:afisbypass_ind,
			:invserviceflag,:orignameind:orignameind_ind,
			:restrict_resi_code:restrict_resi_code_ind,
			:lostcntcrime:lostcntcrime_ind,:lostcntdis:lostcntdis_ind, :lostcntneg:lostcntneg_ind,
			:ktareacode:ktareacode_ind, :apjareacode:apjareacode_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 68;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlbuft(&pcCtx,
   "insert into APPNT_JPN_INFO (APPLID,KPTNO,KPPNO,GENDER,BIRTHDATE,UNKNOWNB\
IRTHIND,RELIGIONCODE,RACECODE,CITIZENSHIPSTATCODE,HKIND,ORIGNAME,CURRLONGNAM\
E,CURRSHORTNAME1,CURRSHORTNAME2,GMPCSHORTNAME1,GMPCSHORTNAME2,GMPCSHORTNAME3\
,ADDRESS1,ADDRESS2,ADDRESS3,POSTCODE,CITYCODE,STATECODE,JPNREMARKS1,JPNREMAR\
KS2,IDTYPE,IDNO,BIRTHPLACE,HSCCOLORCODE,RESTRICRESIDCODE,RJIND,RESIDENTSTAT,\
PERSONSTATCODE,LASTADDCHANGEDATE,AFISFLAG,CARDLOSTCNT,LASTKPTISSUEDDATE,KPTA\
PPLSTAT,POLMILITARYJOINDATE,RETIREMENTDATE,APPLAPPROVALDATE,GREENCARDEXPDATE\
,CITIZENNATIONCODE,IMMREFNO,IMMREFDATE,IMMEXPDATE,PASSPORTNO,PASSPORTISSUEDD\
ATE,PASSPORTISSUECOUNTRY,PERMITNO,PERMITISSUEDATE,PERMITTYPE,PRDOCTYPE,RJSTA\
RTDATE,RJENDDATE,KTSTARTDATE,KTENDDATE,JKIND,BLKLSTCODE,AFISBYPASS,INVSERVIC\
EFLAG,ORIGNAMEIND,KTINDCODE,LOSTCNTCRIME,LOSTCNTDIS,LOSTCNTNEG,KTAREACODE,AP\
JAREACODE) values (:b0,:b1:b2,:b3:b4,:b5:b6,TO_DATE(:b7:b8,'DDMMYYYY'),:b9:b\
10,:b11:b12,:b13:b14,:b15:b16,:b17:b18,:b19:b20,:b21:b22,:b23:b24,:b25:b26,:\
b27:b28,:b29:b30,:b31:b32,:b33:b34,:b35:");
 sqlstm.stmt = "b36,:b37:b38,:b39:b40,:b41:b42,:b43:b44,:b45:b46,:b47:b48,:b\
49:b50,:b51:b52,:b53:b54,:b55:b56,:b57:b58,:b59:b60,:b61:b62,:b63:b64,TO_DATE(\
:b65:b66,'DDMMYYYY'),:b67:b68,:b69:b70,TO_DATE(:b71:b72,'DDMMYYYY'),:b73:b74,T\
O_DATE(:b75:b76,'DDMMYYYY'),TO_DATE(:b77:b78,'DDMMYYYY'),TO_DATE(:b79:b80,'DDM\
MYYYY'),TO_DATE(:b81:b82,'DDMMYYYY'),:b83:b84,:b85:b86,TO_DATE(:b87:b88,'DDMMY\
YYY'),TO_DATE(:b89:b90,'DDMMYYYY'),:b91:b92,TO_DATE(:b93:b94,'DDMMYYYY'),:b95:\
b96,:b97,TO_DATE(:b98,'DDMMYYYY'),:b99,:b100,TO_DATE(:b101:b102,'DDMMYYYY'),TO\
_DATE(:b103:b104,'DDMMYYYY'),TO_DATE(:b105:b106,'DDMMYYYY'),TO_DATE(:b107:b108\
,'DDMMYYYY'),:b109:b110,:b111:b112,:b113:b114,:b115,:b116:b117,:b57:b119,:b120\
:b121,:b122:b123,:b124:b125,:b126:b127,:b128:b129)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1507;
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
 sqlstm.sqhstv[1] = (         void  *)kpt_no;
 sqlstm.sqhstl[1] = (unsigned int  )13;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&kpt_no_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)kpp_no;
 sqlstm.sqhstl[2] = (unsigned int  )9;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&kpp_no_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&gender;
 sqlstm.sqhstl[3] = (unsigned int  )1;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&gender_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)birth_date1;
 sqlstm.sqhstl[4] = (unsigned int  )9;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&birth_date1_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&unknown_bi;
 sqlstm.sqhstl[5] = (unsigned int  )1;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&unknown_bi_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&religion;
 sqlstm.sqhstl[6] = (unsigned int  )1;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&religion_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)race;
 sqlstm.sqhstl[7] = (unsigned int  )5;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&race_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&citizen_stat;
 sqlstm.sqhstl[8] = (unsigned int  )1;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&citizen_stat_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&hk_flag;
 sqlstm.sqhstl[9] = (unsigned int  )1;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&hk_flag_ind;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&original_name;
 sqlstm.sqhstl[10] = (unsigned int  )153;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)&original_name_ind;
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
 sqlstm.sqhstv[12] = (         void  *)&siren_short_name1;
 sqlstm.sqhstl[12] = (unsigned int  )23;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)&siren_short_name1_ind;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)&siren_short_name2;
 sqlstm.sqhstl[13] = (unsigned int  )23;
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)&siren_short_name2_ind;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
 sqlstm.sqhstv[14] = (         void  *)&gmpc_short_name1;
 sqlstm.sqhstl[14] = (unsigned int  )33;
 sqlstm.sqhsts[14] = (         int  )0;
 sqlstm.sqindv[14] = (         void  *)&gmpc_short_name1_ind;
 sqlstm.sqinds[14] = (         int  )0;
 sqlstm.sqharm[14] = (unsigned int  )0;
 sqlstm.sqadto[14] = (unsigned short )0;
 sqlstm.sqtdso[14] = (unsigned short )0;
 sqlstm.sqhstv[15] = (         void  *)&gmpc_short_name2;
 sqlstm.sqhstl[15] = (unsigned int  )33;
 sqlstm.sqhsts[15] = (         int  )0;
 sqlstm.sqindv[15] = (         void  *)&gmpc_short_name2_ind;
 sqlstm.sqinds[15] = (         int  )0;
 sqlstm.sqharm[15] = (unsigned int  )0;
 sqlstm.sqadto[15] = (unsigned short )0;
 sqlstm.sqtdso[15] = (unsigned short )0;
 sqlstm.sqhstv[16] = (         void  *)&gmpc_short_name3;
 sqlstm.sqhstl[16] = (unsigned int  )23;
 sqlstm.sqhsts[16] = (         int  )0;
 sqlstm.sqindv[16] = (         void  *)&gmpc_short_name3_ind;
 sqlstm.sqinds[16] = (         int  )0;
 sqlstm.sqharm[16] = (unsigned int  )0;
 sqlstm.sqadto[16] = (unsigned short )0;
 sqlstm.sqtdso[16] = (unsigned short )0;
 sqlstm.sqhstv[17] = (         void  *)&address1;
 sqlstm.sqhstl[17] = (unsigned int  )43;
 sqlstm.sqhsts[17] = (         int  )0;
 sqlstm.sqindv[17] = (         void  *)&address1_ind;
 sqlstm.sqinds[17] = (         int  )0;
 sqlstm.sqharm[17] = (unsigned int  )0;
 sqlstm.sqadto[17] = (unsigned short )0;
 sqlstm.sqtdso[17] = (unsigned short )0;
 sqlstm.sqhstv[18] = (         void  *)&address2;
 sqlstm.sqhstl[18] = (unsigned int  )43;
 sqlstm.sqhsts[18] = (         int  )0;
 sqlstm.sqindv[18] = (         void  *)&address2_ind;
 sqlstm.sqinds[18] = (         int  )0;
 sqlstm.sqharm[18] = (unsigned int  )0;
 sqlstm.sqadto[18] = (unsigned short )0;
 sqlstm.sqtdso[18] = (unsigned short )0;
 sqlstm.sqhstv[19] = (         void  *)&address3;
 sqlstm.sqhstl[19] = (unsigned int  )43;
 sqlstm.sqhsts[19] = (         int  )0;
 sqlstm.sqindv[19] = (         void  *)&address3_ind;
 sqlstm.sqinds[19] = (         int  )0;
 sqlstm.sqharm[19] = (unsigned int  )0;
 sqlstm.sqadto[19] = (unsigned short )0;
 sqlstm.sqtdso[19] = (unsigned short )0;
 sqlstm.sqhstv[20] = (         void  *)&post_code;
 sqlstm.sqhstl[20] = (unsigned int  )8;
 sqlstm.sqhsts[20] = (         int  )0;
 sqlstm.sqindv[20] = (         void  *)&post_code_ind;
 sqlstm.sqinds[20] = (         int  )0;
 sqlstm.sqharm[20] = (unsigned int  )0;
 sqlstm.sqadto[20] = (unsigned short )0;
 sqlstm.sqtdso[20] = (unsigned short )0;
 sqlstm.sqhstv[21] = (         void  *)&city_code;
 sqlstm.sqhstl[21] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[21] = (         int  )0;
 sqlstm.sqindv[21] = (         void  *)&city_code_ind;
 sqlstm.sqinds[21] = (         int  )0;
 sqlstm.sqharm[21] = (unsigned int  )0;
 sqlstm.sqadto[21] = (unsigned short )0;
 sqlstm.sqtdso[21] = (unsigned short )0;
 sqlstm.sqhstv[22] = (         void  *)state_code;
 sqlstm.sqhstl[22] = (unsigned int  )3;
 sqlstm.sqhsts[22] = (         int  )0;
 sqlstm.sqindv[22] = (         void  *)&state_code_ind;
 sqlstm.sqinds[22] = (         int  )0;
 sqlstm.sqharm[22] = (unsigned int  )0;
 sqlstm.sqadto[22] = (unsigned short )0;
 sqlstm.sqtdso[22] = (unsigned short )0;
 sqlstm.sqhstv[23] = (         void  *)&jpn_remarks1;
 sqlstm.sqhstl[23] = (unsigned int  )63;
 sqlstm.sqhsts[23] = (         int  )0;
 sqlstm.sqindv[23] = (         void  *)&jpn_remarks1_ind;
 sqlstm.sqinds[23] = (         int  )0;
 sqlstm.sqharm[23] = (unsigned int  )0;
 sqlstm.sqadto[23] = (unsigned short )0;
 sqlstm.sqtdso[23] = (unsigned short )0;
 sqlstm.sqhstv[24] = (         void  *)&jpn_remarks2;
 sqlstm.sqhstl[24] = (unsigned int  )63;
 sqlstm.sqhsts[24] = (         int  )0;
 sqlstm.sqindv[24] = (         void  *)&jpn_remarks2_ind;
 sqlstm.sqinds[24] = (         int  )0;
 sqlstm.sqharm[24] = (unsigned int  )0;
 sqlstm.sqadto[24] = (unsigned short )0;
 sqlstm.sqtdso[24] = (unsigned short )0;
 sqlstm.sqhstv[25] = (         void  *)id_type;
 sqlstm.sqhstl[25] = (unsigned int  )3;
 sqlstm.sqhsts[25] = (         int  )0;
 sqlstm.sqindv[25] = (         void  *)&id_type_ind;
 sqlstm.sqinds[25] = (         int  )0;
 sqlstm.sqharm[25] = (unsigned int  )0;
 sqlstm.sqadto[25] = (unsigned short )0;
 sqlstm.sqtdso[25] = (unsigned short )0;
 sqlstm.sqhstv[26] = (         void  *)&id_no;
 sqlstm.sqhstl[26] = (unsigned int  )18;
 sqlstm.sqhsts[26] = (         int  )0;
 sqlstm.sqindv[26] = (         void  *)&id_no_ind;
 sqlstm.sqinds[26] = (         int  )0;
 sqlstm.sqharm[26] = (unsigned int  )0;
 sqlstm.sqadto[26] = (unsigned short )0;
 sqlstm.sqtdso[26] = (unsigned short )0;
 sqlstm.sqhstv[27] = (         void  *)&birth_place;
 sqlstm.sqhstl[27] = (unsigned int  )28;
 sqlstm.sqhsts[27] = (         int  )0;
 sqlstm.sqindv[27] = (         void  *)&birth_place_ind;
 sqlstm.sqinds[27] = (         int  )0;
 sqlstm.sqharm[27] = (unsigned int  )0;
 sqlstm.sqadto[27] = (unsigned short )0;
 sqlstm.sqtdso[27] = (unsigned short )0;
 sqlstm.sqhstv[28] = (         void  *)&hsc_color_code;
 sqlstm.sqhstl[28] = (unsigned int  )1;
 sqlstm.sqhsts[28] = (         int  )0;
 sqlstm.sqindv[28] = (         void  *)&hsc_color_code_ind;
 sqlstm.sqinds[28] = (         int  )0;
 sqlstm.sqharm[28] = (unsigned int  )0;
 sqlstm.sqadto[28] = (unsigned short )0;
 sqlstm.sqtdso[28] = (unsigned short )0;
 sqlstm.sqhstv[29] = (         void  *)restrict_resi_code;
 sqlstm.sqhstl[29] = (unsigned int  )3;
 sqlstm.sqhsts[29] = (         int  )0;
 sqlstm.sqindv[29] = (         void  *)&restrict_resi_code_ind;
 sqlstm.sqinds[29] = (         int  )0;
 sqlstm.sqharm[29] = (unsigned int  )0;
 sqlstm.sqadto[29] = (unsigned short )0;
 sqlstm.sqtdso[29] = (unsigned short )0;
 sqlstm.sqhstv[30] = (         void  *)rj_ind;
 sqlstm.sqhstl[30] = (unsigned int  )3;
 sqlstm.sqhsts[30] = (         int  )0;
 sqlstm.sqindv[30] = (         void  *)&rj_ind_ind;
 sqlstm.sqinds[30] = (         int  )0;
 sqlstm.sqharm[30] = (unsigned int  )0;
 sqlstm.sqadto[30] = (unsigned short )0;
 sqlstm.sqtdso[30] = (unsigned short )0;
 sqlstm.sqhstv[31] = (         void  *)&resident_stat;
 sqlstm.sqhstl[31] = (unsigned int  )1;
 sqlstm.sqhsts[31] = (         int  )0;
 sqlstm.sqindv[31] = (         void  *)&resident_stat_ind;
 sqlstm.sqinds[31] = (         int  )0;
 sqlstm.sqharm[31] = (unsigned int  )0;
 sqlstm.sqadto[31] = (unsigned short )0;
 sqlstm.sqtdso[31] = (unsigned short )0;
 sqlstm.sqhstv[32] = (         void  *)&person_stat;
 sqlstm.sqhstl[32] = (unsigned int  )1;
 sqlstm.sqhsts[32] = (         int  )0;
 sqlstm.sqindv[32] = (         void  *)&person_stat_ind;
 sqlstm.sqinds[32] = (         int  )0;
 sqlstm.sqharm[32] = (unsigned int  )0;
 sqlstm.sqadto[32] = (unsigned short )0;
 sqlstm.sqtdso[32] = (unsigned short )0;
 sqlstm.sqhstv[33] = (         void  *)last_addr_change;
 sqlstm.sqhstl[33] = (unsigned int  )9;
 sqlstm.sqhsts[33] = (         int  )0;
 sqlstm.sqindv[33] = (         void  *)&last_addr_change_ind;
 sqlstm.sqinds[33] = (         int  )0;
 sqlstm.sqharm[33] = (unsigned int  )0;
 sqlstm.sqadto[33] = (unsigned short )0;
 sqlstm.sqtdso[33] = (unsigned short )0;
 sqlstm.sqhstv[34] = (         void  *)&afis_flag;
 sqlstm.sqhstl[34] = (unsigned int  )1;
 sqlstm.sqhsts[34] = (         int  )0;
 sqlstm.sqindv[34] = (         void  *)&afis_flag_ind;
 sqlstm.sqinds[34] = (         int  )0;
 sqlstm.sqharm[34] = (unsigned int  )0;
 sqlstm.sqadto[34] = (unsigned short )0;
 sqlstm.sqtdso[34] = (unsigned short )0;
 sqlstm.sqhstv[35] = (         void  *)&card_lost;
 sqlstm.sqhstl[35] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[35] = (         int  )0;
 sqlstm.sqindv[35] = (         void  *)&card_lost_ind;
 sqlstm.sqinds[35] = (         int  )0;
 sqlstm.sqharm[35] = (unsigned int  )0;
 sqlstm.sqadto[35] = (unsigned short )0;
 sqlstm.sqtdso[35] = (unsigned short )0;
 sqlstm.sqhstv[36] = (         void  *)last_card_issued;
 sqlstm.sqhstl[36] = (unsigned int  )9;
 sqlstm.sqhsts[36] = (         int  )0;
 sqlstm.sqindv[36] = (         void  *)&last_card_issued_ind;
 sqlstm.sqinds[36] = (         int  )0;
 sqlstm.sqharm[36] = (unsigned int  )0;
 sqlstm.sqadto[36] = (unsigned short )0;
 sqlstm.sqtdso[36] = (unsigned short )0;
 sqlstm.sqhstv[37] = (         void  *)&kpt_appl_stat;
 sqlstm.sqhstl[37] = (unsigned int  )1;
 sqlstm.sqhsts[37] = (         int  )0;
 sqlstm.sqindv[37] = (         void  *)&kpt_appl_stat_ind;
 sqlstm.sqinds[37] = (         int  )0;
 sqlstm.sqharm[37] = (unsigned int  )0;
 sqlstm.sqadto[37] = (unsigned short )0;
 sqlstm.sqtdso[37] = (unsigned short )0;
 sqlstm.sqhstv[38] = (         void  *)join_date;
 sqlstm.sqhstl[38] = (unsigned int  )9;
 sqlstm.sqhsts[38] = (         int  )0;
 sqlstm.sqindv[38] = (         void  *)&join_date_ind;
 sqlstm.sqinds[38] = (         int  )0;
 sqlstm.sqharm[38] = (unsigned int  )0;
 sqlstm.sqadto[38] = (unsigned short )0;
 sqlstm.sqtdso[38] = (unsigned short )0;
 sqlstm.sqhstv[39] = (         void  *)retirement_date;
 sqlstm.sqhstl[39] = (unsigned int  )9;
 sqlstm.sqhsts[39] = (         int  )0;
 sqlstm.sqindv[39] = (         void  *)&retirement_date_ind;
 sqlstm.sqinds[39] = (         int  )0;
 sqlstm.sqharm[39] = (unsigned int  )0;
 sqlstm.sqadto[39] = (unsigned short )0;
 sqlstm.sqtdso[39] = (unsigned short )0;
 sqlstm.sqhstv[40] = (         void  *)approval_date;
 sqlstm.sqhstl[40] = (unsigned int  )9;
 sqlstm.sqhsts[40] = (         int  )0;
 sqlstm.sqindv[40] = (         void  *)&approval_date_ind;
 sqlstm.sqinds[40] = (         int  )0;
 sqlstm.sqharm[40] = (unsigned int  )0;
 sqlstm.sqadto[40] = (unsigned short )0;
 sqlstm.sqtdso[40] = (unsigned short )0;
 sqlstm.sqhstv[41] = (         void  *)green_card_expiry_date;
 sqlstm.sqhstl[41] = (unsigned int  )9;
 sqlstm.sqhsts[41] = (         int  )0;
 sqlstm.sqindv[41] = (         void  *)&green_card_expiry_date_ind;
 sqlstm.sqinds[41] = (         int  )0;
 sqlstm.sqharm[41] = (unsigned int  )0;
 sqlstm.sqadto[41] = (unsigned short )0;
 sqlstm.sqtdso[41] = (unsigned short )0;
 sqlstm.sqhstv[42] = (         void  *)citizen_nation_code;
 sqlstm.sqhstl[42] = (unsigned int  )5;
 sqlstm.sqhsts[42] = (         int  )0;
 sqlstm.sqindv[42] = (         void  *)&citizen_nation_code_ind;
 sqlstm.sqinds[42] = (         int  )0;
 sqlstm.sqharm[42] = (unsigned int  )0;
 sqlstm.sqadto[42] = (unsigned short )0;
 sqlstm.sqtdso[42] = (unsigned short )0;
 sqlstm.sqhstv[43] = (         void  *)&immrefno;
 sqlstm.sqhstl[43] = (unsigned int  )33;
 sqlstm.sqhsts[43] = (         int  )0;
 sqlstm.sqindv[43] = (         void  *)&immrefno_ind;
 sqlstm.sqinds[43] = (         int  )0;
 sqlstm.sqharm[43] = (unsigned int  )0;
 sqlstm.sqadto[43] = (unsigned short )0;
 sqlstm.sqtdso[43] = (unsigned short )0;
 sqlstm.sqhstv[44] = (         void  *)immrefdate;
 sqlstm.sqhstl[44] = (unsigned int  )9;
 sqlstm.sqhsts[44] = (         int  )0;
 sqlstm.sqindv[44] = (         void  *)&immrefdate_ind;
 sqlstm.sqinds[44] = (         int  )0;
 sqlstm.sqharm[44] = (unsigned int  )0;
 sqlstm.sqadto[44] = (unsigned short )0;
 sqlstm.sqtdso[44] = (unsigned short )0;
 sqlstm.sqhstv[45] = (         void  *)immexpdate;
 sqlstm.sqhstl[45] = (unsigned int  )9;
 sqlstm.sqhsts[45] = (         int  )0;
 sqlstm.sqindv[45] = (         void  *)&immexpdate_ind;
 sqlstm.sqinds[45] = (         int  )0;
 sqlstm.sqharm[45] = (unsigned int  )0;
 sqlstm.sqadto[45] = (unsigned short )0;
 sqlstm.sqtdso[45] = (unsigned short )0;
 sqlstm.sqhstv[46] = (         void  *)&passportno;
 sqlstm.sqhstl[46] = (unsigned int  )18;
 sqlstm.sqhsts[46] = (         int  )0;
 sqlstm.sqindv[46] = (         void  *)&passportno_ind;
 sqlstm.sqinds[46] = (         int  )0;
 sqlstm.sqharm[46] = (unsigned int  )0;
 sqlstm.sqadto[46] = (unsigned short )0;
 sqlstm.sqtdso[46] = (unsigned short )0;
 sqlstm.sqhstv[47] = (         void  *)passportissuedate;
 sqlstm.sqhstl[47] = (unsigned int  )9;
 sqlstm.sqhsts[47] = (         int  )0;
 sqlstm.sqindv[47] = (         void  *)&passportissuedate_ind;
 sqlstm.sqinds[47] = (         int  )0;
 sqlstm.sqharm[47] = (unsigned int  )0;
 sqlstm.sqadto[47] = (unsigned short )0;
 sqlstm.sqtdso[47] = (unsigned short )0;
 sqlstm.sqhstv[48] = (         void  *)passportissuecountry;
 sqlstm.sqhstl[48] = (unsigned int  )5;
 sqlstm.sqhsts[48] = (         int  )0;
 sqlstm.sqindv[48] = (         void  *)&passportissuecountry_ind;
 sqlstm.sqinds[48] = (         int  )0;
 sqlstm.sqharm[48] = (unsigned int  )0;
 sqlstm.sqadto[48] = (unsigned short )0;
 sqlstm.sqtdso[48] = (unsigned short )0;
 sqlstm.sqhstv[49] = (         void  *)szPermitNo;
 sqlstm.sqhstl[49] = (unsigned int  )13;
 sqlstm.sqhsts[49] = (         int  )0;
 sqlstm.sqindv[49] = (         void  *)0;
 sqlstm.sqinds[49] = (         int  )0;
 sqlstm.sqharm[49] = (unsigned int  )0;
 sqlstm.sqadto[49] = (unsigned short )0;
 sqlstm.sqtdso[49] = (unsigned short )0;
 sqlstm.sqhstv[50] = (         void  *)szPermitIssueDate;
 sqlstm.sqhstl[50] = (unsigned int  )9;
 sqlstm.sqhsts[50] = (         int  )0;
 sqlstm.sqindv[50] = (         void  *)0;
 sqlstm.sqinds[50] = (         int  )0;
 sqlstm.sqharm[50] = (unsigned int  )0;
 sqlstm.sqadto[50] = (unsigned short )0;
 sqlstm.sqtdso[50] = (unsigned short )0;
 sqlstm.sqhstv[51] = (         void  *)&nPermitType;
 sqlstm.sqhstl[51] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[51] = (         int  )0;
 sqlstm.sqindv[51] = (         void  *)0;
 sqlstm.sqinds[51] = (         int  )0;
 sqlstm.sqharm[51] = (unsigned int  )0;
 sqlstm.sqadto[51] = (unsigned short )0;
 sqlstm.sqtdso[51] = (unsigned short )0;
 sqlstm.sqhstv[52] = (         void  *)&nPRDocType;
 sqlstm.sqhstl[52] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[52] = (         int  )0;
 sqlstm.sqindv[52] = (         void  *)0;
 sqlstm.sqinds[52] = (         int  )0;
 sqlstm.sqharm[52] = (unsigned int  )0;
 sqlstm.sqadto[52] = (unsigned short )0;
 sqlstm.sqtdso[52] = (unsigned short )0;
 sqlstm.sqhstv[53] = (         void  *)rjstartdate;
 sqlstm.sqhstl[53] = (unsigned int  )9;
 sqlstm.sqhsts[53] = (         int  )0;
 sqlstm.sqindv[53] = (         void  *)&rjstartdate_ind;
 sqlstm.sqinds[53] = (         int  )0;
 sqlstm.sqharm[53] = (unsigned int  )0;
 sqlstm.sqadto[53] = (unsigned short )0;
 sqlstm.sqtdso[53] = (unsigned short )0;
 sqlstm.sqhstv[54] = (         void  *)rjenddate;
 sqlstm.sqhstl[54] = (unsigned int  )9;
 sqlstm.sqhsts[54] = (         int  )0;
 sqlstm.sqindv[54] = (         void  *)&rjenddate_ind;
 sqlstm.sqinds[54] = (         int  )0;
 sqlstm.sqharm[54] = (unsigned int  )0;
 sqlstm.sqadto[54] = (unsigned short )0;
 sqlstm.sqtdso[54] = (unsigned short )0;
 sqlstm.sqhstv[55] = (         void  *)ktstartdate;
 sqlstm.sqhstl[55] = (unsigned int  )9;
 sqlstm.sqhsts[55] = (         int  )0;
 sqlstm.sqindv[55] = (         void  *)&ktstartdate_ind;
 sqlstm.sqinds[55] = (         int  )0;
 sqlstm.sqharm[55] = (unsigned int  )0;
 sqlstm.sqadto[55] = (unsigned short )0;
 sqlstm.sqtdso[55] = (unsigned short )0;
 sqlstm.sqhstv[56] = (         void  *)ktenddate;
 sqlstm.sqhstl[56] = (unsigned int  )9;
 sqlstm.sqhsts[56] = (         int  )0;
 sqlstm.sqindv[56] = (         void  *)&ktenddate_ind;
 sqlstm.sqinds[56] = (         int  )0;
 sqlstm.sqharm[56] = (unsigned int  )0;
 sqlstm.sqadto[56] = (unsigned short )0;
 sqlstm.sqtdso[56] = (unsigned short )0;
 sqlstm.sqhstv[57] = (         void  *)&jkind;
 sqlstm.sqhstl[57] = (unsigned int  )1;
 sqlstm.sqhsts[57] = (         int  )0;
 sqlstm.sqindv[57] = (         void  *)&jkind_ind;
 sqlstm.sqinds[57] = (         int  )0;
 sqlstm.sqharm[57] = (unsigned int  )0;
 sqlstm.sqadto[57] = (unsigned short )0;
 sqlstm.sqtdso[57] = (unsigned short )0;
 sqlstm.sqhstv[58] = (         void  *)blklstcode;
 sqlstm.sqhstl[58] = (unsigned int  )3;
 sqlstm.sqhsts[58] = (         int  )0;
 sqlstm.sqindv[58] = (         void  *)&blklstcode_ind;
 sqlstm.sqinds[58] = (         int  )0;
 sqlstm.sqharm[58] = (unsigned int  )0;
 sqlstm.sqadto[58] = (unsigned short )0;
 sqlstm.sqtdso[58] = (unsigned short )0;
 sqlstm.sqhstv[59] = (         void  *)&afisbypass;
 sqlstm.sqhstl[59] = (unsigned int  )1;
 sqlstm.sqhsts[59] = (         int  )0;
 sqlstm.sqindv[59] = (         void  *)&afisbypass_ind;
 sqlstm.sqinds[59] = (         int  )0;
 sqlstm.sqharm[59] = (unsigned int  )0;
 sqlstm.sqadto[59] = (unsigned short )0;
 sqlstm.sqtdso[59] = (unsigned short )0;
 sqlstm.sqhstv[60] = (         void  *)&invserviceflag;
 sqlstm.sqhstl[60] = (unsigned int  )1;
 sqlstm.sqhsts[60] = (         int  )0;
 sqlstm.sqindv[60] = (         void  *)0;
 sqlstm.sqinds[60] = (         int  )0;
 sqlstm.sqharm[60] = (unsigned int  )0;
 sqlstm.sqadto[60] = (unsigned short )0;
 sqlstm.sqtdso[60] = (unsigned short )0;
 sqlstm.sqhstv[61] = (         void  *)&orignameind;
 sqlstm.sqhstl[61] = (unsigned int  )1;
 sqlstm.sqhsts[61] = (         int  )0;
 sqlstm.sqindv[61] = (         void  *)&orignameind_ind;
 sqlstm.sqinds[61] = (         int  )0;
 sqlstm.sqharm[61] = (unsigned int  )0;
 sqlstm.sqadto[61] = (unsigned short )0;
 sqlstm.sqtdso[61] = (unsigned short )0;
 sqlstm.sqhstv[62] = (         void  *)restrict_resi_code;
 sqlstm.sqhstl[62] = (unsigned int  )3;
 sqlstm.sqhsts[62] = (         int  )0;
 sqlstm.sqindv[62] = (         void  *)&restrict_resi_code_ind;
 sqlstm.sqinds[62] = (         int  )0;
 sqlstm.sqharm[62] = (unsigned int  )0;
 sqlstm.sqadto[62] = (unsigned short )0;
 sqlstm.sqtdso[62] = (unsigned short )0;
 sqlstm.sqhstv[63] = (         void  *)&lostcntcrime;
 sqlstm.sqhstl[63] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[63] = (         int  )0;
 sqlstm.sqindv[63] = (         void  *)&lostcntcrime_ind;
 sqlstm.sqinds[63] = (         int  )0;
 sqlstm.sqharm[63] = (unsigned int  )0;
 sqlstm.sqadto[63] = (unsigned short )0;
 sqlstm.sqtdso[63] = (unsigned short )0;
 sqlstm.sqhstv[64] = (         void  *)&lostcntdis;
 sqlstm.sqhstl[64] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[64] = (         int  )0;
 sqlstm.sqindv[64] = (         void  *)&lostcntdis_ind;
 sqlstm.sqinds[64] = (         int  )0;
 sqlstm.sqharm[64] = (unsigned int  )0;
 sqlstm.sqadto[64] = (unsigned short )0;
 sqlstm.sqtdso[64] = (unsigned short )0;
 sqlstm.sqhstv[65] = (         void  *)&lostcntneg;
 sqlstm.sqhstl[65] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[65] = (         int  )0;
 sqlstm.sqindv[65] = (         void  *)&lostcntneg_ind;
 sqlstm.sqinds[65] = (         int  )0;
 sqlstm.sqharm[65] = (unsigned int  )0;
 sqlstm.sqadto[65] = (unsigned short )0;
 sqlstm.sqtdso[65] = (unsigned short )0;
 sqlstm.sqhstv[66] = (         void  *)ktareacode;
 sqlstm.sqhstl[66] = (unsigned int  )7;
 sqlstm.sqhsts[66] = (         int  )0;
 sqlstm.sqindv[66] = (         void  *)&ktareacode_ind;
 sqlstm.sqinds[66] = (         int  )0;
 sqlstm.sqharm[66] = (unsigned int  )0;
 sqlstm.sqadto[66] = (unsigned short )0;
 sqlstm.sqtdso[66] = (unsigned short )0;
 sqlstm.sqhstv[67] = (         void  *)apjareacode;
 sqlstm.sqhstl[67] = (unsigned int  )9;
 sqlstm.sqhsts[67] = (         int  )0;
 sqlstm.sqindv[67] = (         void  *)&apjareacode_ind;
 sqlstm.sqinds[67] = (         int  )0;
 sqlstm.sqharm[67] = (unsigned int  )0;
 sqlstm.sqadto[67] = (unsigned short )0;
 sqlstm.sqtdso[67] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



		if(SQLCODE != 0 && SQLCODE != -1)
		{
		#ifdef DEBUG
					userlog(" insert_into_appnt_info : Insert into APPNT_JPN_INFO failed : %s", SQLMSG);
		#endif
			strcpy(prog_log.remarks,"insert_into_appnt_info: Insert into APPNT_JPN_INFO failed");
			sprintf(excep_log.error_msg, "insert_into_appnt_info: Insert into APPNT_JPN_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		}

		#ifdef DEBUG
				userlog("insert_into_appnt_info : Record inserted successfully");
		#endif

		/* Update the Card lost count into APPLICATION */

		/* EXEC SQL UPDATE APPLICATION
			SET CARDLOSTCOUNT = :card_lost:card_lost_ind
			WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 68;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPLICATION  set CARDLOSTCOUNT=:b0:b1 where APPLID=:\
b2";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1794;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&card_lost;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&card_lost_ind;
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



		if(SQLCODE != 0 )
		{
#ifdef DEBUG
			userlog("insert_into_appnt_info : Updating Card lost count in APPLICATION failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_into_appnt_info: Updating Card lost count in APPLICATION failed");
			sprintf(excep_log.error_msg, "insert_into_appnt_info: Updating Card lost count in APPLICATION failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return UPDATE_ERROR;
		}

#ifdef DEBUG
		userlog("insert_into_appnt_info : Record updated successfully");
#endif

		/* See if the applicant has applied for Green card */

		itoa(TXN_12YO_GREEN, txn_12yo_green, 10);
		itoa(TXN_FT_GREEN, txn_ft_green, 10);
		//Changed by Brijesh on 8 may 2002 as per new requirment
//		itoa(TXN_CON_GREEN, txn_conv_green, 10);
//		itoa(TXN_REPL_GREEN, txn_repl_green, 10);
		

		/* EXEC SQL SELECT COUNT(*) INTO :count
			FROM APPL_TXN
			WHERE APPLID = :appl_id
			AND TXNCODE IN (:txn_12yo_green, :txn_ft_green)
//			AND TXNCODE IN (:txn_12yo_green, :txn_ft_green,
//							:txn_conv_green, :txn_repl_green)
			AND TXNCANCELCODE IS NULL; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 68;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPL_TXN where ((APPLID=:b1\
 and TXNCODE in (:b2,:b3)) and TXNCANCELCODE is null )";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1817;
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
  sqlstm.sqhstv[2] = (         void  *)txn_12yo_green;
  sqlstm.sqhstl[2] = (unsigned int  )4;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)txn_ft_green;
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
			userlog("insert_into_appnt_info : Select from APPL_TXN failed : %s", SQLMSG); 
#endif
			strcpy(prog_log.remarks,"insert_into_appnt_info : Select from APPL_TXN failed");
			sprintf(excep_log.error_msg,"insert_into_appnt_info : Select from APPL_TXN failed  :%s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
					
			return SELECT_ERROR;
		}

#ifdef DEBUG
		userlog("insert_into_appnt_info : Green card txn count - %d", count); 
#endif

		/*added by brijesh on 24 sept 2002*/
		if(strcmp(citizen_nation_code, "3000") && immexpdate[0] != 0)
		{
			strcpy(lc_immexpdate, immexpdate);
		}
		else
		{
			lc_immexpdate[0] = 0;
		}

	if (count > 0 || (hsc_color_code == 'H' && (txn_type == TXN_CONV || txn_type == TXN_REPL)))
	{		
		/* Set the Approval date and Card expiry date */
				
		if (SUCCESS != (ret_code = set_card_expiry_date(req->kpt_no, req->header.application_id, txn_type, lc_immexpdate,ctx)))
		{
#ifdef DEBUG
			userlog("insert_into_appnt_info : set_card_expiry_date() failed with %d", ret_code);
#endif
			return ret_code;
		}
		
	}


	// Added this for CR 282 Release 3.28 on 29/05/2014

	if(hsc_color_code == 'B')
		isflag = 'B';
	else if((hsc_color_code == 'M') || (hsc_color_code == 'P'))
	    isflag = 'M';
	else if((hsc_color_code == 'H') || (hsc_color_code == 'C'))
		isflag = 'H';
		


	if(strcmp(applnt->ktind, "KT") == 0)
	{
		/* EXEC SQL 
			UPDATE APPNT_JPN_INFO SET KTINDCODE = :ktind,
			INVSERVICEFLAG = :isflag
			WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 68;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPNT_JPN_INFO  set KTINDCODE=:b0,INVSERVICEFLAG=:b1\
 where APPLID=:b2";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1848;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)ktind;
  sqlstm.sqhstl[0] = (unsigned int  )3;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&isflag;
  sqlstm.sqhstl[1] = (unsigned int  )1;
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

	if(strcmp(applnt->rjind, "RJ") == 0)
	{
		/* EXEC SQL 
			UPDATE APPNT_JPN_INFO SET RJIND = :rjind,
			INVSERVICEFLAG = :isflag
			WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 68;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update APPNT_JPN_INFO  set RJIND=:b0,INVSERVICEFLAG=:b1 whe\
re APPLID=:b2";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1875;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)rjind;
  sqlstm.sqhstl[0] = (unsigned int  )3;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&isflag;
  sqlstm.sqhstl[1] = (unsigned int  )1;
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

	//


	return SUCCESS;

}

/********************************************************************************/
/* Function name: insert_into_appnt_image										*/
/* Description	: This function inserts the Applicant's imgae info				*/			  
/*                into APPNT_JPN_IMG table										*/
/* Input		: Pointer to image buffer, Pointer to request buffer of			*/
/*                the service													*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_into_appnt_image(APPNT_JPN_IMG_T *applnt_img, CREATE_APPLNT_REQ_T *req,void * ctx)
{
    struct sqlca sqlca = {0};
	typedef struct
	{
		long len;
		char arr[HIGH_RES_PHOTO_SIZE];

	} hrphoto;

	/* EXEC SQL TYPE hrphoto IS LONG varraw(HIGH_RES_PHOTO_SIZE); */ 


	typedef struct
	{
		long len;
		char arr[ALLOWABLE_LR_PHOTO_SIZE];

	} lrphoto;

	/* EXEC SQL TYPE lrphoto IS LONG varraw(ALLOWABLE_LR_PHOTO_SIZE); */ 


	typedef struct
	{
		long len;
		char arr[MINUTIAE_SIZE];

	} minut;

	/* EXEC SQL TYPE minut IS LONG varraw(MINUTIAE_SIZE); */ 


	typedef struct
	{
		long len;
		char arr[FINGERPRINT_SIZE];

	}imgbuff;

	/* EXEC SQL TYPE imgbuff IS LONG varraw(FINGERPRINT_SIZE); */ 


	typedef struct
	{
		long len;
		char arr[MATRIX_BUFFER_SIZE];

	}imgmtrx;

	/* EXEC SQL TYPE imgmtrx IS LONG varraw(MATRIX_BUFFER_SIZE); */ 



/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	char kpt_no[KPT_SIZE] = {0};
	char writeind = 'N';
	int status = 0;
	/* varchar error_msg[ERROR_MSG_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[201]; } error_msg
 = {0};


	char upd_print_ind = 0;
	int quality_stat = 0;
	/* varchar remarks[IMG_REMARK_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[51]; } remarks
 = {0};

	/* varchar sponsor_remarks[IMG_REMARK_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[51]; } sponsor_remarks
 = {0};

	int lf_pattern = 0;
	int rf_pattern = 0;
	/* varchar lf_ind[FINGER_IND_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } lf_ind
 = {0};

	/* varchar rf_ind[FINGER_IND_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } rf_ind
 = {0};

	/* varchar splf_ind[FINGER_IND_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } splf_ind
 = {0};

	/* varchar sprf_ind[FINGER_IND_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } sprf_ind
 = {0};

	long lf_quality_score = 0;
	long rf_quality_score = 0;
	int lf_bandage_ind = 0;
	long splf_quality_score = 0;
	long sprf_quality_score = 0;
	int rf_bandage_ind = 0;
	unsigned char lf_thumb_status = 0;
	unsigned char rf_thumb_status = 0;

	lrphoto lres_photo;
	hrphoto hres_photo;
	minut	lorg_minu;
	minut	lnor_minu;
 	imgbuff	limg;
	imgmtrx	lmrtx;
	minut   rorg_minu;
	minut   rnor_minu;
	imgbuff rimg;
	imgmtrx rmrtx;
	minut   spl_minu;
	minut   spr_minu;
	imgbuff spl_img;
	imgbuff spr_img;

	long lres_photo_len = 0;
	long hres_photo_len = 0;
	long lorg_minu_len = 0;
	long lnor_minu_len = 0;
	long limg_len = 0;
	long lmrtx_len = 0;
	long rorg_minu_len = 0;
	long rnor_minu_len = 0;
	long rimg_len = 0;
	long rmrtx_len = 0;
	long spl_img_len = 0;
	long spr_img_len = 0;
	long spl_minu_len = 0;
	long spr_minu_len = 0;

	short kpt_no_ind = -1;
	short upd_print_ind_ind = -1;
	short quality_stat_ind = -1;
	short remarks_ind = -1;
	short sponsor_remarks_ind = -1;
	short rf_pattern_ind = -1;
	short lf_pattern_ind = -1;
	short lf_ind_ind = -1;
	short rf_ind_ind = -1;
	short lf_quality_score_ind = -1;
	short rf_quality_score_ind = -1;
	short lf_bandage_ind_ind = -1;
	short rf_bandage_ind_ind = -1;
	short lf_thumb_status_ind = -1;
	short rf_thumb_status_ind = -1;
	short splf_ind_ind = -1;
	short sprf_ind_ind = -1;
	short splf_quality_score_ind = -1;
	short sprf_quality_score_ind = -1;

	short lres_photo_ind = -1;
	short hres_photo_ind = -1;
	short lorg_minu_ind = -1;
	short rorg_minu_ind = -1;
	short lnor_minu_ind = -1;
	short rnor_minu_ind = -1;
	short limg_ind = -1;
	short rimg_ind = -1;
	short lmrtx_ind = -1;
	short rmrtx_ind = -1;
	short spl_minu_ind = -1;
	short spr_minu_ind = -1;
	short spl_img_ind = -1;
	short spr_img_ind = -1;
	short error_msg_ind  = 0;


	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 



	APPNT_JPN_IMG_T *img_temp;
	char *imgptr;
	int i = 0;
	char q_no[Q_NO_SIZE] = {"\0"};
	int queue_no = 0;

	#ifdef DEBUG
			/* print input data to be used for debugging */
			FILE *logfile;
			char szFileName[50];
	#endif


	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	/* Populate the host variables	*/

	strcpy(appl_id, req->header.application_id);
	
	if (0 != req->kpt_no[0] )
	{
		strcpy(kpt_no, req->kpt_no);	
		kpt_no_ind  = 0;
	}
	
#ifdef DEBUG
	userlog("insert_into_appnt_image : Appl id - %s", appl_id);
	userlog("insert_into_appnt_image : KPT no - %s", kpt_no);
/*
	userlog("applnt_img->lf.fp_img_size : %d FINGERPRINT_SIZE : %d " , applnt_img->lf.fp_img_size ,FINGERPRINT_SIZE);
	userlog("	applnt_img->lf.original_minutiae_size : %d MINUTIAE_SIZE: %d" , applnt_img->lf.original_minutiae_size , MINUTIAE_SIZE);
	userlog("	applnt_img->lf.normalized_minutiae_size : %d MINUTIAE_SIZE: %d " ,applnt_img->lf.normalized_minutiae_size , MINUTIAE_SIZE);
	userlog("	applnt_img->lf.matrix_buffer_size : %d MATRIX_BUFFER_SIZE: %d ", applnt_img->lf.matrix_buffer_size , MATRIX_BUFFER_SIZE);
	userlog("	applnt_img->rf.fp_img_size : %d FINGERPRINT_SIZE : %d " , applnt_img->rf.fp_img_size , FINGERPRINT_SIZE);
	userlog("	applnt_img->rf.original_minutiae_size : %d MINUTIAE_SIZE: %d " ,applnt_img->rf.original_minutiae_size , MINUTIAE_SIZE );
	userlog("	applnt_img->rf.normalized_minutiae_size : %d MINUTIAE_SIZE: %d " ,applnt_img->rf.normalized_minutiae_size ,MINUTIAE_SIZE);
	userlog("	applnt_img->rf.matrix_buffer_size : %d MATRIX_BUFFER_SIZE: %d " ,applnt_img->rf.matrix_buffer_size ,MATRIX_BUFFER_SIZE);
	userlog("	applnt_img->sponsor_lf.fp_img_size : %d FINGERPRINT_SIZE : %d ", applnt_img->sponsor_lf.fp_img_size , FINGERPRINT_SIZE);
	userlog("	applnt_img->sponsor_lf.original_minutiae_size : %d MINUTIAE_SIZE : %d ",applnt_img->sponsor_lf.original_minutiae_size , MINUTIAE_SIZE);
	userlog("	applnt_img->sponsor_rf.fp_img_size : %d FINGERPRINT_SIZE : %d ",applnt_img->sponsor_rf.fp_img_size , FINGERPRINT_SIZE);
	userlog("	applnt_img->sponsor_rf.original_minutiae_size : %d MINUTIAE_SIZE: %d " , applnt_img->sponsor_rf.original_minutiae_size > MINUTIAE_SIZE);
	userlog("	applnt_img->photo.lr_photo_size : %d ALLOWABLE_LR_PHOTO_SIZE : %d ",applnt_img->photo.lr_photo_size > ALLOWABLE_LR_PHOTO_SIZE); 
	userlog("	applnt_img->photo.hr_photo_size : %d HIGH_RES_PHOTO_SIZE : %d " , applnt_img->photo.hr_photo_size > HIGH_RES_PHOTO_SIZE);
	*/
#endif
	
	/* Check whether the input image size exceeds the maximum size allowed */


	if (applnt_img->lf.fp_img_size > FINGERPRINT_SIZE || 
		applnt_img->lf.original_minutiae_size > MINUTIAE_SIZE ||
		applnt_img->lf.normalized_minutiae_size > MINUTIAE_SIZE ||
		applnt_img->lf.matrix_buffer_size > MATRIX_BUFFER_SIZE ||
		applnt_img->rf.fp_img_size > FINGERPRINT_SIZE ||
		applnt_img->rf.original_minutiae_size > MINUTIAE_SIZE ||
		applnt_img->rf.normalized_minutiae_size > MINUTIAE_SIZE ||
		applnt_img->rf.matrix_buffer_size > MATRIX_BUFFER_SIZE ||
		applnt_img->sponsor_lf.fp_img_size > FINGERPRINT_SIZE ||
		applnt_img->sponsor_lf.original_minutiae_size > MINUTIAE_SIZE ||
		applnt_img->sponsor_rf.fp_img_size > FINGERPRINT_SIZE ||
		applnt_img->sponsor_rf.original_minutiae_size > MINUTIAE_SIZE ||
		applnt_img->photo.lr_photo_size > ALLOWABLE_LR_PHOTO_SIZE ||
		applnt_img->photo.hr_photo_size > HIGH_RES_PHOTO_SIZE)
		{
#ifdef DEBUG
			userlog(" insert_into_appnt_image : Image size is greater than the maximum image size allowed");
#endif
			strcpy(prog_log.remarks,"insert_into_appnt_image: Image size is greater than the maximum image size allowed");
			sprintf(excep_log.error_msg, "insert_into_appnt_image: Image size is greater than the maximum image size allowed");
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return IMG_SIZE_ERROR;
		}

	img_temp = applnt_img;
	img_temp++;

	imgptr = (char *)img_temp;
	img_temp--;

	/* Applicant's Left Finger Image Buffer */

	limg.len = applnt_img->lf.fp_img_size;
	limg_len = limg.len;

	memcpy(limg.arr, imgptr, limg.len);
	limg_ind = 0;
	
/*	for(i=0; i < limg.len; i++)
	{
		limg.arr[i] = imgptr[i];
		limg_ind = 0;
	}
*/
	imgptr = imgptr + limg_len;

#ifdef DEBUG
	userlog("insert_into_appnt_image : LF image length - %ld",limg_len);
#endif


	/* Applicant's Left Finger Original Minutiae */

	lorg_minu.len = applnt_img->lf.original_minutiae_size;
	lorg_minu_len = lorg_minu.len;

	memcpy(lorg_minu.arr, imgptr, lorg_minu.len);
	lorg_minu_ind  = 0;

/*	for(i=0; i < lorg_minu.len; i++)
	{
		lorg_minu.arr[i] = imgptr[i];
		lorg_minu_ind  = 0;

	}
*/
	imgptr = imgptr + lorg_minu_len;

#ifdef DEBUG
	userlog("insert_into_appnt_image : LF orig minutiae length - %ld",lorg_minu_len);
#endif

	/* Applicant's Left Finger Normal Minutiae */ 

	lnor_minu.len = applnt_img->lf.normalized_minutiae_size;
	lnor_minu_len = lnor_minu.len;

	memcpy(lnor_minu.arr, imgptr, lnor_minu.len);
	lnor_minu_ind  = 0;

/*	for(i=0; i < lnor_minu.len; i++)
	{
		lnor_minu.arr[i] = imgptr[i];
		lnor_minu_ind  = 0;
	}
*/	
	imgptr = imgptr + lnor_minu_len;

#ifdef DEBUG
	userlog("insert_into_appnt_image : LF norm minutiae length - %ld",lnor_minu_len);
#endif

	/* Applicant's Left Finger Matrix Buffer */

	lmrtx.len = applnt_img->lf.matrix_buffer_size;
	lmrtx_len = lmrtx.len;

	memcpy(lmrtx.arr, imgptr, lmrtx.len);
	lmrtx_ind  = 0;
/*	for(i=0; i<lmrtx.len; i++)
	{
		lmrtx.arr[i] = imgptr[i];
		lmrtx_ind  = 0;
	}
*/
	imgptr = imgptr + lmrtx_len;

#ifdef DEBUG
	userlog("insert_into_appnt_image : LF Matrix length - %ld",lmrtx_len);
#endif

	/* Applicant's Right Finger Image Buffer */

	rimg.len = applnt_img->rf.fp_img_size;
	rimg_len = rimg.len;

	memcpy(rimg.arr, imgptr, rimg.len);
	rimg_ind  = 0;

/*	for(i=0; i < rimg.len; i++)
	{
		rimg.arr[i] = imgptr[i];
		rimg_ind  = 0;
	}
*/
	imgptr = imgptr + rimg_len;

#ifdef DEBUG
	userlog("insert_into_appnt_image : RF image length - %ld",rimg_len);
#endif

	/* Applicant's Right Finger Original Minutiae */

	rorg_minu.len = applnt_img->rf.original_minutiae_size;
	rorg_minu_len = rorg_minu.len;

	memcpy(rorg_minu.arr, imgptr, rorg_minu.len);
	rorg_minu_ind = 0;

/*	for(i=0; i < rorg_minu.len; i++)
	{
		rorg_minu.arr[i] = imgptr[i];
		rorg_minu_ind = 0;

	}
*/
	imgptr = imgptr + rorg_minu_len;

#ifdef DEBUG
	userlog("insert_into_appnt_image : RF orig minutiae length - %ld",rorg_minu_len);
#endif

	/* Applicant's Right Finger Normal Minutiae */ 

	rnor_minu.len = applnt_img->rf.normalized_minutiae_size;
	rnor_minu_len = rnor_minu.len;

	memcpy(rnor_minu.arr, imgptr, rnor_minu.len);
	rnor_minu_ind =  0;

/*	for(i=0;i < rnor_minu.len; i++)
	{
		rnor_minu.arr[i] = imgptr[i];
		rnor_minu_ind =  0;
	}
*/	
	imgptr = imgptr + rnor_minu_len;

#ifdef DEBUG
	userlog("insert_into_appnt_image : RF norm minutiae length - %ld",rnor_minu_len);
#endif

	/* Applicant's Right Finger Matrix Buffer */

	rmrtx.len = applnt_img->rf.matrix_buffer_size;
	rmrtx_len = rmrtx.len;

	memcpy(rmrtx.arr, imgptr, rmrtx.len);
	rmrtx_ind = 0;

/*	for(i=0; i < rmrtx.len; i++)
	{
		rmrtx.arr[i] = imgptr[i];
		rmrtx_ind = 0;
	}
*/
	imgptr = imgptr + rmrtx_len;

#ifdef DEBUG
	userlog("insert_into_appnt_image : RF matrix length - %ld",rmrtx_len);
#endif

	/* Sponsor's Left Finger Image Buffer */

	spl_img.len = applnt_img->sponsor_lf.fp_img_size;
	spl_img_len = spl_img.len;

	memcpy(spl_img.arr, imgptr, spl_img.len);
	spl_img_ind = 0;

/*	for(i=0; i < spl_img.len; i++)
	{
		spl_img.arr[i] = imgptr[i];
		spl_img_ind = 0;
	}
*/
	imgptr = imgptr + spl_img_len;

#ifdef DEBUG
	userlog("insert_into_appnt_image : Sponsor LF image length - %ld",spl_img_len);
#endif

	/* Sponsor's Left Finger Minutiae */

	spl_minu.len = applnt_img->sponsor_lf.original_minutiae_size;
	spl_minu_len = spl_minu.len;

	memcpy(spl_minu.arr, imgptr, spl_minu.len);
	spl_minu_ind  = 0;

/*	for(i=0;i < spl_minu.len;i++)
	{
		spl_minu.arr[i] = imgptr[i];
		spl_minu_ind  = 0;
		
	}
*/
	imgptr = imgptr + spl_minu_len;


#ifdef DEBUG
	userlog("insert_into_appnt_image : Sponsor LF orig minutiae length - %ld",spl_minu_len);
#endif

	/* Sponsor's Right Finger Image Buffer */

	spr_img.len = applnt_img->sponsor_rf.fp_img_size;
	spr_img_len = spr_img.len;

	memcpy(spr_img.arr, imgptr, spr_img.len);
	spr_img_ind  = 0;

	#ifdef DEBUG
	   /* Open for write */
		strcpy(szFileName, "d:\\ijpn\\log\\Actual_spons_");
		strcat(szFileName, "_rfimg");

		logfile = fopen(szFileName, "wb");

		fwrite(imgptr, 1, spr_img_len, logfile);
		fclose(logfile);

	   /* Open for write */
		strcpy(szFileName, "d:\\ijpn\\log\\After_copy_spons_");
		strcat(szFileName, "_rfimg");

		logfile = fopen(szFileName, "wb");

		fwrite(spr_img.arr, 1, spr_img.len, logfile);
		fclose(logfile);
	#endif

/*	for(i=0; i < spr_img.len; i++)
	{
		spr_img.arr[i] = imgptr[i];
		spr_img_ind  = 0;
	}
*/
	imgptr = imgptr + spr_img_len;

#ifdef DEBUG
	userlog("insert_into_appnt_image : Sponsor RF image length - %ld",spr_img_len);
#endif

	/* Sponsor's Right Finger Minutiae */

	spr_minu.len = applnt_img->sponsor_rf.original_minutiae_size;
	spr_minu_len = spr_minu.len;

	memcpy(spr_minu.arr, imgptr, spr_minu.len);
	spr_minu_ind  = 0;

/*	for(i=0; i < spr_minu.len; i++)
	{
		spr_minu.arr[i] = imgptr[i];
		spr_minu_ind  = 0;
		
	}
*/
	imgptr = imgptr + spr_minu_len;

#ifdef DEBUG
	userlog("insert_into_appnt_image : Sponsor RF orig minutiae length - %ld",spr_minu_len);
#endif

	/* Applicant's LowResolution Photo */ 

	lres_photo.len = applnt_img->photo.lr_photo_size;
	lres_photo_len = lres_photo.len;

	memcpy(lres_photo.arr, imgptr, lres_photo.len);
	lres_photo_ind  = 0;

/*	for(i=0;i < lres_photo.len; i++)
	{
		lres_photo.arr[i] = imgptr[i]; 
		lres_photo_ind  = 0;

	}
*/
	imgptr = imgptr + lres_photo_len;

#ifdef DEBUG
	userlog("insert_into_appnt_image : LR photo length - %ld",lres_photo_len);
#endif

	/* Applicant's High Resolution Photo */ 

	hres_photo.len = applnt_img->photo.hr_photo_size;
	hres_photo_len = hres_photo.len;

	memcpy(hres_photo.arr, imgptr, hres_photo.len);
	hres_photo_ind  = 0;

/*	for(i=0;i < hres_photo.len; i++)
	{
		hres_photo.arr[i] = imgptr[i]; 
		hres_photo_ind  = 0;

	}
*/
	imgptr = imgptr + hres_photo_len;

#ifdef DEBUG
	userlog("insert_into_appnt_image : HR photo length - %ld",hres_photo_len);
	userlog("insert_into_appnt_image : Calling stored procedure STORE_APPNT_SPONS_IMAGES");
#endif


/* EXEC SQL EXECUTE
	BEGIN
	STORE_APPNT_SPONS_IMAGES(:kpt_no:kpt_no_ind, :appl_id, :lres_photo:lres_photo_ind,
				:lres_photo_len, :hres_photo:hres_photo_ind, :hres_photo_len,
				:lorg_minu:lorg_minu_ind, :lorg_minu_len, :lnor_minu:lnor_minu_ind, :lnor_minu_len,
				:limg:limg_ind, :limg_len, :lmrtx:lmrtx_ind, :lmrtx_len,
				:rorg_minu:rorg_minu_ind, :rorg_minu_len, :rnor_minu:rnor_minu_ind, :rnor_minu_len,
				:rimg:rimg_ind, :rimg_len, :rmrtx:rmrtx_ind, :rmrtx_len,
				:spl_minu:spl_minu_ind, :spl_minu_len, :spl_img:spl_img_ind, :spl_img_len,
				:spr_minu:spr_minu_ind, :spr_minu_len, :spr_img:spr_img_ind, :spr_img_len,
				:writeind, :status, :error_msg:error_msg_ind);
	END;
	END-EXEC; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 68;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "begin STORE_APPNT_SPONS_IMAGES ( :kpt_no:kpt_no_ind , :appl_i\
d , :lres_photo:lres_photo_ind , :lres_photo_len , :hres_photo:hres_photo_ind \
, :hres_photo_len , :lorg_minu:lorg_minu_ind , :lorg_minu_len , :lnor_minu:lno\
r_minu_ind , :lnor_minu_len , :limg:limg_ind , :limg_len , :lmrtx:lmrtx_ind , \
:lmrtx_len , :rorg_minu:rorg_minu_ind , :rorg_minu_len , :rnor_minu:rnor_minu_\
ind , :rnor_minu_len , :rimg:rimg_ind , :rimg_len , :rmrtx:rmrtx_ind , :rmrtx_\
len , :spl_minu:spl_minu_ind , :spl_minu_len , :spl_img:spl_img_ind , :spl_img\
_len , :spr_minu:spr_minu_ind , :spr_minu_len , :spr_img:spr_img_ind , :spr_im\
g_len , :writeind , :status , :error_msg:error_msg_ind ) ; END ;";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1902;
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
sqlstm.sqhstv[1] = (         void  *)appl_id;
sqlstm.sqhstl[1] = (unsigned int  )20;
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         void  *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned int  )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (         void  *)&lres_photo;
sqlstm.sqhstl[2] = (unsigned int  )4004;
sqlstm.sqhsts[2] = (         int  )0;
sqlstm.sqindv[2] = (         void  *)&lres_photo_ind;
sqlstm.sqinds[2] = (         int  )0;
sqlstm.sqharm[2] = (unsigned int  )0;
sqlstm.sqadto[2] = (unsigned short )0;
sqlstm.sqtdso[2] = (unsigned short )0;
sqlstm.sqhstv[3] = (         void  *)&lres_photo_len;
sqlstm.sqhstl[3] = (unsigned int  )sizeof(long);
sqlstm.sqhsts[3] = (         int  )0;
sqlstm.sqindv[3] = (         void  *)0;
sqlstm.sqinds[3] = (         int  )0;
sqlstm.sqharm[3] = (unsigned int  )0;
sqlstm.sqadto[3] = (unsigned short )0;
sqlstm.sqtdso[3] = (unsigned short )0;
sqlstm.sqhstv[4] = (         void  *)&hres_photo;
sqlstm.sqhstl[4] = (unsigned int  )16504;
sqlstm.sqhsts[4] = (         int  )0;
sqlstm.sqindv[4] = (         void  *)&hres_photo_ind;
sqlstm.sqinds[4] = (         int  )0;
sqlstm.sqharm[4] = (unsigned int  )0;
sqlstm.sqadto[4] = (unsigned short )0;
sqlstm.sqtdso[4] = (unsigned short )0;
sqlstm.sqhstv[5] = (         void  *)&hres_photo_len;
sqlstm.sqhstl[5] = (unsigned int  )sizeof(long);
sqlstm.sqhsts[5] = (         int  )0;
sqlstm.sqindv[5] = (         void  *)0;
sqlstm.sqinds[5] = (         int  )0;
sqlstm.sqharm[5] = (unsigned int  )0;
sqlstm.sqadto[5] = (unsigned short )0;
sqlstm.sqtdso[5] = (unsigned short )0;
sqlstm.sqhstv[6] = (         void  *)&lorg_minu;
sqlstm.sqhstl[6] = (unsigned int  )604;
sqlstm.sqhsts[6] = (         int  )0;
sqlstm.sqindv[6] = (         void  *)&lorg_minu_ind;
sqlstm.sqinds[6] = (         int  )0;
sqlstm.sqharm[6] = (unsigned int  )0;
sqlstm.sqadto[6] = (unsigned short )0;
sqlstm.sqtdso[6] = (unsigned short )0;
sqlstm.sqhstv[7] = (         void  *)&lorg_minu_len;
sqlstm.sqhstl[7] = (unsigned int  )sizeof(long);
sqlstm.sqhsts[7] = (         int  )0;
sqlstm.sqindv[7] = (         void  *)0;
sqlstm.sqinds[7] = (         int  )0;
sqlstm.sqharm[7] = (unsigned int  )0;
sqlstm.sqadto[7] = (unsigned short )0;
sqlstm.sqtdso[7] = (unsigned short )0;
sqlstm.sqhstv[8] = (         void  *)&lnor_minu;
sqlstm.sqhstl[8] = (unsigned int  )604;
sqlstm.sqhsts[8] = (         int  )0;
sqlstm.sqindv[8] = (         void  *)&lnor_minu_ind;
sqlstm.sqinds[8] = (         int  )0;
sqlstm.sqharm[8] = (unsigned int  )0;
sqlstm.sqadto[8] = (unsigned short )0;
sqlstm.sqtdso[8] = (unsigned short )0;
sqlstm.sqhstv[9] = (         void  *)&lnor_minu_len;
sqlstm.sqhstl[9] = (unsigned int  )sizeof(long);
sqlstm.sqhsts[9] = (         int  )0;
sqlstm.sqindv[9] = (         void  *)0;
sqlstm.sqinds[9] = (         int  )0;
sqlstm.sqharm[9] = (unsigned int  )0;
sqlstm.sqadto[9] = (unsigned short )0;
sqlstm.sqtdso[9] = (unsigned short )0;
sqlstm.sqhstv[10] = (         void  *)&limg;
sqlstm.sqhstl[10] = (unsigned int  )30004;
sqlstm.sqhsts[10] = (         int  )0;
sqlstm.sqindv[10] = (         void  *)&limg_ind;
sqlstm.sqinds[10] = (         int  )0;
sqlstm.sqharm[10] = (unsigned int  )0;
sqlstm.sqadto[10] = (unsigned short )0;
sqlstm.sqtdso[10] = (unsigned short )0;
sqlstm.sqhstv[11] = (         void  *)&limg_len;
sqlstm.sqhstl[11] = (unsigned int  )sizeof(long);
sqlstm.sqhsts[11] = (         int  )0;
sqlstm.sqindv[11] = (         void  *)0;
sqlstm.sqinds[11] = (         int  )0;
sqlstm.sqharm[11] = (unsigned int  )0;
sqlstm.sqadto[11] = (unsigned short )0;
sqlstm.sqtdso[11] = (unsigned short )0;
sqlstm.sqhstv[12] = (         void  *)&lmrtx;
sqlstm.sqhstl[12] = (unsigned int  )10004;
sqlstm.sqhsts[12] = (         int  )0;
sqlstm.sqindv[12] = (         void  *)&lmrtx_ind;
sqlstm.sqinds[12] = (         int  )0;
sqlstm.sqharm[12] = (unsigned int  )0;
sqlstm.sqadto[12] = (unsigned short )0;
sqlstm.sqtdso[12] = (unsigned short )0;
sqlstm.sqhstv[13] = (         void  *)&lmrtx_len;
sqlstm.sqhstl[13] = (unsigned int  )sizeof(long);
sqlstm.sqhsts[13] = (         int  )0;
sqlstm.sqindv[13] = (         void  *)0;
sqlstm.sqinds[13] = (         int  )0;
sqlstm.sqharm[13] = (unsigned int  )0;
sqlstm.sqadto[13] = (unsigned short )0;
sqlstm.sqtdso[13] = (unsigned short )0;
sqlstm.sqhstv[14] = (         void  *)&rorg_minu;
sqlstm.sqhstl[14] = (unsigned int  )604;
sqlstm.sqhsts[14] = (         int  )0;
sqlstm.sqindv[14] = (         void  *)&rorg_minu_ind;
sqlstm.sqinds[14] = (         int  )0;
sqlstm.sqharm[14] = (unsigned int  )0;
sqlstm.sqadto[14] = (unsigned short )0;
sqlstm.sqtdso[14] = (unsigned short )0;
sqlstm.sqhstv[15] = (         void  *)&rorg_minu_len;
sqlstm.sqhstl[15] = (unsigned int  )sizeof(long);
sqlstm.sqhsts[15] = (         int  )0;
sqlstm.sqindv[15] = (         void  *)0;
sqlstm.sqinds[15] = (         int  )0;
sqlstm.sqharm[15] = (unsigned int  )0;
sqlstm.sqadto[15] = (unsigned short )0;
sqlstm.sqtdso[15] = (unsigned short )0;
sqlstm.sqhstv[16] = (         void  *)&rnor_minu;
sqlstm.sqhstl[16] = (unsigned int  )604;
sqlstm.sqhsts[16] = (         int  )0;
sqlstm.sqindv[16] = (         void  *)&rnor_minu_ind;
sqlstm.sqinds[16] = (         int  )0;
sqlstm.sqharm[16] = (unsigned int  )0;
sqlstm.sqadto[16] = (unsigned short )0;
sqlstm.sqtdso[16] = (unsigned short )0;
sqlstm.sqhstv[17] = (         void  *)&rnor_minu_len;
sqlstm.sqhstl[17] = (unsigned int  )sizeof(long);
sqlstm.sqhsts[17] = (         int  )0;
sqlstm.sqindv[17] = (         void  *)0;
sqlstm.sqinds[17] = (         int  )0;
sqlstm.sqharm[17] = (unsigned int  )0;
sqlstm.sqadto[17] = (unsigned short )0;
sqlstm.sqtdso[17] = (unsigned short )0;
sqlstm.sqhstv[18] = (         void  *)&rimg;
sqlstm.sqhstl[18] = (unsigned int  )30004;
sqlstm.sqhsts[18] = (         int  )0;
sqlstm.sqindv[18] = (         void  *)&rimg_ind;
sqlstm.sqinds[18] = (         int  )0;
sqlstm.sqharm[18] = (unsigned int  )0;
sqlstm.sqadto[18] = (unsigned short )0;
sqlstm.sqtdso[18] = (unsigned short )0;
sqlstm.sqhstv[19] = (         void  *)&rimg_len;
sqlstm.sqhstl[19] = (unsigned int  )sizeof(long);
sqlstm.sqhsts[19] = (         int  )0;
sqlstm.sqindv[19] = (         void  *)0;
sqlstm.sqinds[19] = (         int  )0;
sqlstm.sqharm[19] = (unsigned int  )0;
sqlstm.sqadto[19] = (unsigned short )0;
sqlstm.sqtdso[19] = (unsigned short )0;
sqlstm.sqhstv[20] = (         void  *)&rmrtx;
sqlstm.sqhstl[20] = (unsigned int  )10004;
sqlstm.sqhsts[20] = (         int  )0;
sqlstm.sqindv[20] = (         void  *)&rmrtx_ind;
sqlstm.sqinds[20] = (         int  )0;
sqlstm.sqharm[20] = (unsigned int  )0;
sqlstm.sqadto[20] = (unsigned short )0;
sqlstm.sqtdso[20] = (unsigned short )0;
sqlstm.sqhstv[21] = (         void  *)&rmrtx_len;
sqlstm.sqhstl[21] = (unsigned int  )sizeof(long);
sqlstm.sqhsts[21] = (         int  )0;
sqlstm.sqindv[21] = (         void  *)0;
sqlstm.sqinds[21] = (         int  )0;
sqlstm.sqharm[21] = (unsigned int  )0;
sqlstm.sqadto[21] = (unsigned short )0;
sqlstm.sqtdso[21] = (unsigned short )0;
sqlstm.sqhstv[22] = (         void  *)&spl_minu;
sqlstm.sqhstl[22] = (unsigned int  )604;
sqlstm.sqhsts[22] = (         int  )0;
sqlstm.sqindv[22] = (         void  *)&spl_minu_ind;
sqlstm.sqinds[22] = (         int  )0;
sqlstm.sqharm[22] = (unsigned int  )0;
sqlstm.sqadto[22] = (unsigned short )0;
sqlstm.sqtdso[22] = (unsigned short )0;
sqlstm.sqhstv[23] = (         void  *)&spl_minu_len;
sqlstm.sqhstl[23] = (unsigned int  )sizeof(long);
sqlstm.sqhsts[23] = (         int  )0;
sqlstm.sqindv[23] = (         void  *)0;
sqlstm.sqinds[23] = (         int  )0;
sqlstm.sqharm[23] = (unsigned int  )0;
sqlstm.sqadto[23] = (unsigned short )0;
sqlstm.sqtdso[23] = (unsigned short )0;
sqlstm.sqhstv[24] = (         void  *)&spl_img;
sqlstm.sqhstl[24] = (unsigned int  )30004;
sqlstm.sqhsts[24] = (         int  )0;
sqlstm.sqindv[24] = (         void  *)&spl_img_ind;
sqlstm.sqinds[24] = (         int  )0;
sqlstm.sqharm[24] = (unsigned int  )0;
sqlstm.sqadto[24] = (unsigned short )0;
sqlstm.sqtdso[24] = (unsigned short )0;
sqlstm.sqhstv[25] = (         void  *)&spl_img_len;
sqlstm.sqhstl[25] = (unsigned int  )sizeof(long);
sqlstm.sqhsts[25] = (         int  )0;
sqlstm.sqindv[25] = (         void  *)0;
sqlstm.sqinds[25] = (         int  )0;
sqlstm.sqharm[25] = (unsigned int  )0;
sqlstm.sqadto[25] = (unsigned short )0;
sqlstm.sqtdso[25] = (unsigned short )0;
sqlstm.sqhstv[26] = (         void  *)&spr_minu;
sqlstm.sqhstl[26] = (unsigned int  )604;
sqlstm.sqhsts[26] = (         int  )0;
sqlstm.sqindv[26] = (         void  *)&spr_minu_ind;
sqlstm.sqinds[26] = (         int  )0;
sqlstm.sqharm[26] = (unsigned int  )0;
sqlstm.sqadto[26] = (unsigned short )0;
sqlstm.sqtdso[26] = (unsigned short )0;
sqlstm.sqhstv[27] = (         void  *)&spr_minu_len;
sqlstm.sqhstl[27] = (unsigned int  )sizeof(long);
sqlstm.sqhsts[27] = (         int  )0;
sqlstm.sqindv[27] = (         void  *)0;
sqlstm.sqinds[27] = (         int  )0;
sqlstm.sqharm[27] = (unsigned int  )0;
sqlstm.sqadto[27] = (unsigned short )0;
sqlstm.sqtdso[27] = (unsigned short )0;
sqlstm.sqhstv[28] = (         void  *)&spr_img;
sqlstm.sqhstl[28] = (unsigned int  )30004;
sqlstm.sqhsts[28] = (         int  )0;
sqlstm.sqindv[28] = (         void  *)&spr_img_ind;
sqlstm.sqinds[28] = (         int  )0;
sqlstm.sqharm[28] = (unsigned int  )0;
sqlstm.sqadto[28] = (unsigned short )0;
sqlstm.sqtdso[28] = (unsigned short )0;
sqlstm.sqhstv[29] = (         void  *)&spr_img_len;
sqlstm.sqhstl[29] = (unsigned int  )sizeof(long);
sqlstm.sqhsts[29] = (         int  )0;
sqlstm.sqindv[29] = (         void  *)0;
sqlstm.sqinds[29] = (         int  )0;
sqlstm.sqharm[29] = (unsigned int  )0;
sqlstm.sqadto[29] = (unsigned short )0;
sqlstm.sqtdso[29] = (unsigned short )0;
sqlstm.sqhstv[30] = (         void  *)&writeind;
sqlstm.sqhstl[30] = (unsigned int  )1;
sqlstm.sqhsts[30] = (         int  )0;
sqlstm.sqindv[30] = (         void  *)0;
sqlstm.sqinds[30] = (         int  )0;
sqlstm.sqharm[30] = (unsigned int  )0;
sqlstm.sqadto[30] = (unsigned short )0;
sqlstm.sqtdso[30] = (unsigned short )0;
sqlstm.sqhstv[31] = (         void  *)&status;
sqlstm.sqhstl[31] = (unsigned int  )sizeof(int);
sqlstm.sqhsts[31] = (         int  )0;
sqlstm.sqindv[31] = (         void  *)0;
sqlstm.sqinds[31] = (         int  )0;
sqlstm.sqharm[31] = (unsigned int  )0;
sqlstm.sqadto[31] = (unsigned short )0;
sqlstm.sqtdso[31] = (unsigned short )0;
sqlstm.sqhstv[32] = (         void  *)&error_msg;
sqlstm.sqhstl[32] = (unsigned int  )203;
sqlstm.sqhsts[32] = (         int  )0;
sqlstm.sqindv[32] = (         void  *)&error_msg_ind;
sqlstm.sqinds[32] = (         int  )0;
sqlstm.sqharm[32] = (unsigned int  )0;
sqlstm.sqadto[32] = (unsigned short )0;
sqlstm.sqtdso[32] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
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
			userlog("insert_into_appnt_image : Failed to call stored procedure STORE_APPNT_SPONS_IMAGES : %s", SQLMSG);
			userlog("insert_into_appnt_image : SQLCODE for select- %d",status);
#endif
			strcpy(prog_log.remarks,"insert_into_appnt_image: Failed to call stored procedure STORE_APPNT_SPONS_IMAGES ");
			sprintf(excep_log.error_msg, "insert_into_appnt_image: Failed to call stored procedure STORE_APPNT_SPONS_IMAGES : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return STORED_PROC_ERROR;
		}

		

#ifdef DEBUG
		userlog("insert_into_appnt_image : Call to stored procedure STORE_APPNT_SPONS_IMAGES succesfull");
		userlog("insert_into_appnt_image : Write indicator - %c",writeind);
		userlog("insert_into_appnt_image : SQLCODE for select- %d",status);
#endif

		if( status != 0)
		{
			setnull(error_msg);
#ifdef DEBUG
			userlog(" insert_into_appnt_image : Failed to insert images into APPNT_JPN_IMG : %s", error_msg.arr);
#endif
			strcpy(prog_log.remarks,"insert_into_appnt_image: Failed to insert images into APPNT_JPN_IMG");
			sprintf(excep_log.error_msg, "insert_into_appnt_image: Failed to insert images into APPNT_JPN_IMG : %s", error_msg.arr);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return STORED_PROC_ERROR;
		}

	/* Populate the host varibales */

	/* Find out the Queue ticket no */
	strncpy(q_no, appl_id + strlen(appl_id) - (Q_NO_SIZE -1), Q_NO_SIZE - 1);
	q_no[Q_NO_SIZE - 1] = '\0';

#ifdef DEBUG
	userlog(" insert_into_appnt_image : Q No - %s", q_no);
	userlog(" insert_into_appnt_image : Photo capture flag - %c", req->photo_capture_flag);
#endif

	queue_no = atoi(q_no);

	/* If the application is Phone-In Update print indicator */
	/* should be set to NO									 */

	/* Commented on 2/4/2001 as requirement is no longer valid */

/*	if (queue_no > PHONE_IN_Q_NO_START && queue_no < PHONE_IN_Q_NO_END)
	{
		upd_print_ind = '0';
		upd_print_ind_ind  = 0;
	}
	else
	{
*/	
	/* Commented on 27/4/2001 as requirement is no longer valid */

/*	if ('C' == toupper(req->photo_capture_flag))
	{
		upd_print_ind = '1';
		upd_print_ind_ind  = 0;
	}
	else if (0 != applnt_img->upd_print_ind)
	{
*/	
	upd_print_ind = applnt_img->upd_print_ind;
	upd_print_ind_ind  = 0;

//	}
//	}

	if (0 != applnt_img->quality_stat)
	{
		quality_stat = applnt_img->quality_stat;
		quality_stat_ind  = 0;
	}

	if (0 != applnt_img->remarks[0] )
	{
		strcpy((char*)remarks.arr, applnt_img->remarks);
		setlen(remarks);
		remarks_ind = 0;
	}

	if (0 != applnt_img->sponsor_remarks[0] )
	{
		strcpy((char*)sponsor_remarks.arr, applnt_img->sponsor_remarks);
		setlen(sponsor_remarks);
		sponsor_remarks_ind = 0;
	}

	if (0 != applnt_img->lf.finger_pattern)
	{
		lf_pattern = applnt_img->lf.finger_pattern;
		lf_pattern_ind  = 0;
	}

	if (0 != applnt_img->rf.finger_pattern)
	{
		rf_pattern = applnt_img->rf.finger_pattern;
		rf_pattern_ind  = 0;
	}

	if (0 != applnt_img->lf.thumb_status)
	{
		lf_thumb_status = applnt_img->lf.thumb_status;
		lf_thumb_status_ind  = 0;
	}

	if (0 != applnt_img->rf.thumb_status)
	{
		rf_thumb_status = applnt_img->rf.thumb_status;
		rf_thumb_status_ind  = 0;
	}

	if (0 != applnt_img->lf.bandage_ind)
	{
		lf_bandage_ind = applnt_img->lf.bandage_ind;
		lf_bandage_ind_ind  = 0;
	}

	if (0 != applnt_img->rf.bandage_ind)
	{
		rf_bandage_ind = applnt_img->rf.bandage_ind;
		rf_bandage_ind_ind  = 0;
	}

	if (0 != applnt_img->lf.quality_score)
	{
		lf_quality_score = applnt_img->lf.quality_score;
		lf_quality_score_ind  = 0;
	}

	if (0 != applnt_img->rf.quality_score)
	{
		rf_quality_score = applnt_img->rf.quality_score;
		rf_quality_score_ind  = 0;
	}

	if (0 != applnt_img->sponsor_lf.quality_score)
	{
		splf_quality_score	= applnt_img->sponsor_lf.quality_score;
		splf_quality_score_ind  = 0;
	}
	
	if (0 != applnt_img->rf.quality_score)
	{
		sprf_quality_score	= applnt_img->sponsor_rf.quality_score;
		sprf_quality_score_ind  = 0;
	}

	if (0 != applnt_img->lf.finger_ind[0] )
	{
		strcpy((char*)lf_ind.arr, applnt_img->lf.finger_ind);
		setlen(lf_ind);
		lf_ind_ind = 0;
	}

	if (0 != applnt_img->rf.finger_ind[0] )
	{
		strcpy((char*)rf_ind.arr, applnt_img->rf.finger_ind);
		setlen(rf_ind);
		rf_ind_ind = 0;
	}

	if (0 != applnt_img->sponsor_rf.finger_ind[0] )
	{
		strcpy((char*)sprf_ind.arr, applnt_img->sponsor_rf.finger_ind);
		setlen(sprf_ind);
		sprf_ind_ind = 0;
	}

	if (0 != applnt_img->sponsor_lf.finger_ind[0] )
	{
		strcpy((char*)splf_ind.arr, applnt_img->sponsor_lf.finger_ind);
		setlen(splf_ind);
		splf_ind_ind = 0;
	}

#ifdef DEBUG
	userlog("insert_into_appnt_image : Applicant remarks - %s", remarks.arr);
	userlog("insert_into_appnt_image : Sponsor remarks - %s", sponsor_remarks.arr);
	userlog("insert_into_appnt_image : LF ind - %s", lf_ind.arr);
	userlog("insert_into_appnt_image : RF ind - %s", rf_ind.arr);
	userlog("insert_into_appnt_image : Sponsor LF ind- %s", splf_ind.arr);
	userlog("insert_into_appnt_image : Sponsor RF ind - %s", sprf_ind.arr);
	userlog("insert_into_appnt_image : Update print ind - %c", upd_print_ind);
	userlog("insert_into_appnt_image : LF thumb stat - %c", lf_thumb_status);
	userlog("insert_into_appnt_image : RF thumb stat - %c", rf_thumb_status);
	userlog("insert_into_appnt_image : Quality stat - %d", quality_stat);
	userlog("insert_into_appnt_image : LF pattern - %d", lf_pattern);
	userlog("insert_into_appnt_image : RF pattern - %d", rf_pattern);
	userlog("insert_into_appnt_image : LF quality score - %ld", lf_quality_score);
	userlog("insert_into_appnt_image : RF quality score - %ld", rf_quality_score);
	userlog("insert_into_appnt_image : LF bandage ind - %d", lf_bandage_ind);
	userlog("insert_into_appnt_image : RF bandage ind - %d", rf_bandage_ind);
	userlog("insert_into_appnt_image : Sponsor LF quality score - %ld", splf_quality_score);
	userlog("insert_into_appnt_image : Sponsor RF quality score - %ld", sprf_quality_score);
#endif

	/* EXEC SQL UPDATE APPNT_JPN_IMG
		SET QUALITYSTAT = :quality_stat:quality_stat_ind,
			LFIND = :lf_ind:lf_ind_ind,
			LFMINUTIAEQUAL =  :lf_quality_score:lf_quality_score_ind,
			LFPATTERN = :lf_pattern:lf_pattern_ind,
			LTHSTAT = :lf_thumb_status:lf_thumb_status_ind,
			LBANDAGEIND = :lf_bandage_ind:lf_bandage_ind_ind ,
			RFIND = :rf_ind:rf_ind_ind,
			RFMINUTIAEQUAL = :rf_quality_score:rf_quality_score_ind,
			RFPATTERN = :rf_pattern:rf_pattern_ind,
			RTHSTAT = :rf_thumb_status:rf_thumb_status_ind,
			RBANDAGEIND = :rf_bandage_ind:rf_bandage_ind_ind,
			SPONSORLFQUAL = :splf_quality_score:splf_quality_score_ind,  
			SPONSORLFIND = :splf_ind:splf_ind_ind,
			SPONSORRFQUAL = :sprf_quality_score:sprf_quality_score_ind,  
			SPONSORRFIND = :sprf_ind:sprf_ind_ind,
			SPONSORREMARKS =  :sponsor_remarks:sponsor_remarks_ind,
			UPDPRINTSIND = :upd_print_ind:upd_print_ind_ind,
			APPNTREMARKS = :remarks:remarks_ind
		WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 68;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "update APPNT_JPN_IMG  set QUALITYSTAT=:b0:b1,LFIND=:b2:b3,LF\
MINUTIAEQUAL=:b4:b5,LFPATTERN=:b6:b7,LTHSTAT=:b8:b9,LBANDAGEIND=:b10:b11,RFIND\
=:b12:b13,RFMINUTIAEQUAL=:b14:b15,RFPATTERN=:b16:b17,RTHSTAT=:b18:b19,RBANDAGE\
IND=:b20:b21,SPONSORLFQUAL=:b22:b23,SPONSORLFIND=:b24:b25,SPONSORRFQUAL=:b26:b\
27,SPONSORRFIND=:b28:b29,SPONSORREMARKS=:b30:b31,UPDPRINTSIND=:b32:b33,APPNTRE\
MARKS=:b34:b35 where APPLID=:b36";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2049;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&quality_stat;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&quality_stat_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&lf_ind;
 sqlstm.sqhstl[1] = (unsigned int  )5;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&lf_ind_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&lf_quality_score;
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(long);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&lf_quality_score_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&lf_pattern;
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&lf_pattern_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&lf_thumb_status;
 sqlstm.sqhstl[4] = (unsigned int  )1;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&lf_thumb_status_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&lf_bandage_ind;
 sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&lf_bandage_ind_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&rf_ind;
 sqlstm.sqhstl[6] = (unsigned int  )5;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&rf_ind_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&rf_quality_score;
 sqlstm.sqhstl[7] = (unsigned int  )sizeof(long);
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&rf_quality_score_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&rf_pattern;
 sqlstm.sqhstl[8] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&rf_pattern_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&rf_thumb_status;
 sqlstm.sqhstl[9] = (unsigned int  )1;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&rf_thumb_status_ind;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&rf_bandage_ind;
 sqlstm.sqhstl[10] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)&rf_bandage_ind_ind;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&splf_quality_score;
 sqlstm.sqhstl[11] = (unsigned int  )sizeof(long);
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)&splf_quality_score_ind;
 sqlstm.sqinds[11] = (         int  )0;
 sqlstm.sqharm[11] = (unsigned int  )0;
 sqlstm.sqadto[11] = (unsigned short )0;
 sqlstm.sqtdso[11] = (unsigned short )0;
 sqlstm.sqhstv[12] = (         void  *)&splf_ind;
 sqlstm.sqhstl[12] = (unsigned int  )5;
 sqlstm.sqhsts[12] = (         int  )0;
 sqlstm.sqindv[12] = (         void  *)&splf_ind_ind;
 sqlstm.sqinds[12] = (         int  )0;
 sqlstm.sqharm[12] = (unsigned int  )0;
 sqlstm.sqadto[12] = (unsigned short )0;
 sqlstm.sqtdso[12] = (unsigned short )0;
 sqlstm.sqhstv[13] = (         void  *)&sprf_quality_score;
 sqlstm.sqhstl[13] = (unsigned int  )sizeof(long);
 sqlstm.sqhsts[13] = (         int  )0;
 sqlstm.sqindv[13] = (         void  *)&sprf_quality_score_ind;
 sqlstm.sqinds[13] = (         int  )0;
 sqlstm.sqharm[13] = (unsigned int  )0;
 sqlstm.sqadto[13] = (unsigned short )0;
 sqlstm.sqtdso[13] = (unsigned short )0;
 sqlstm.sqhstv[14] = (         void  *)&sprf_ind;
 sqlstm.sqhstl[14] = (unsigned int  )5;
 sqlstm.sqhsts[14] = (         int  )0;
 sqlstm.sqindv[14] = (         void  *)&sprf_ind_ind;
 sqlstm.sqinds[14] = (         int  )0;
 sqlstm.sqharm[14] = (unsigned int  )0;
 sqlstm.sqadto[14] = (unsigned short )0;
 sqlstm.sqtdso[14] = (unsigned short )0;
 sqlstm.sqhstv[15] = (         void  *)&sponsor_remarks;
 sqlstm.sqhstl[15] = (unsigned int  )53;
 sqlstm.sqhsts[15] = (         int  )0;
 sqlstm.sqindv[15] = (         void  *)&sponsor_remarks_ind;
 sqlstm.sqinds[15] = (         int  )0;
 sqlstm.sqharm[15] = (unsigned int  )0;
 sqlstm.sqadto[15] = (unsigned short )0;
 sqlstm.sqtdso[15] = (unsigned short )0;
 sqlstm.sqhstv[16] = (         void  *)&upd_print_ind;
 sqlstm.sqhstl[16] = (unsigned int  )1;
 sqlstm.sqhsts[16] = (         int  )0;
 sqlstm.sqindv[16] = (         void  *)&upd_print_ind_ind;
 sqlstm.sqinds[16] = (         int  )0;
 sqlstm.sqharm[16] = (unsigned int  )0;
 sqlstm.sqadto[16] = (unsigned short )0;
 sqlstm.sqtdso[16] = (unsigned short )0;
 sqlstm.sqhstv[17] = (         void  *)&remarks;
 sqlstm.sqhstl[17] = (unsigned int  )53;
 sqlstm.sqhsts[17] = (         int  )0;
 sqlstm.sqindv[17] = (         void  *)&remarks_ind;
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



		if(SQLCODE != 0)
		{
#ifdef DEBUG
			userlog("insert_into_appnt_image : Failed to update APPNT_JPN_IMG : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_into_appnt_image: Failed to update APPNT_JPN_IMG");
			sprintf(excep_log.error_msg, "insert_into_appnt_image: Failed to update APPNT_JPN_IMG : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return UPDATE_ERROR;
		}

#ifdef DEBUG
	userlog("insert_into_appnt_image : Updated APPNT_JPN_IMG successfully");
#endif

	return SUCCESS;

}

/********************************************************************************/
/* Function name: insert_into_appnt_jpj_info									*/
/* Description	: This function inserts the Applicant's JPJ(License)info into   */          
/*                APPNT_JPJ_INFO table											*/
/* Input		: Request buffer												*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_into_appnt_jpj_info(CREATE_APPLNT_REQ_T *req,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	char kpt_no[KPT_SIZE] = {0};

	char lic_id_type[ID_TYPE_SIZE] = {0};
	/* varchar lic_id[LIC_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } lic_id
 = {0};

	char owner_cat = 0;
	int susp_gen_no = 0;
	int kejara_points = 0;
	char last_kejara_upd_date[DATE_SIZE] = {0};
	char print_mdl = 0;
	char bl_flag = 0;
	/* varchar veh_reg_no[VEHICLE_REGISTRATION_NUMBER_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[11]; } veh_reg_no
 = {0};


	short kpt_no_ind = -1 ;
	short lic_id_type_ind = -1 ;
	short lic_id_ind = -1 ;
	short owner_cat_ind = -1 ;
	short susp_gen_no_ind = -1 ;
	short kejara_points_ind = -1 ;
	short last_kejara_upd_date_ind = -1 ;
	short print_mdl_ind = -1 ;
	short bl_flag_ind = -1 ;
	short veh_reg_no_ind = -1 ;
	

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	/* Populate the variables	*/

	strcpy(appl_id, req->header.application_id);

	if ( '\0' != req->license_id[0])
	{
		strcpy((char*)lic_id.arr, req->license_id);
		setlen(lic_id);
		lic_id_ind = 0;
	}

	if ('\0' != req->owner_cat)
	{
		owner_cat = req->owner_cat;
		owner_cat_ind = 0;
	}

	if ('\0' != req->kpt_no)
	{
		strcpy(kpt_no, req->kpt_no);
		kpt_no_ind = 0;
	}
	 

#ifdef DEBUG
	userlog("insert_into_appnt_jpj_info : Appl id - %s", appl_id);
	userlog("insert_into_appnt_jpj_info : License id - %s", lic_id.arr);
	userlog("insert_into_appnt_jpj_info : Owner cat - %c", owner_cat);
	userlog("insert_into_appnt_jpj_info : KPT No - %s", kpt_no);
#endif

	/* EXEC SQL SELECT LICIDTYPE, SUSPGENNO, KEJARAPOINTS, 
				TO_CHAR(LASTKEJARAPOINTUPDDATE, 'DDMMYYYY'), BLFLAG, VEHREGNO
			INTO :lic_id_type:lic_id_type_ind, :susp_gen_no:susp_gen_no_ind, 
				 :kejara_points:kejara_points_ind,
				 :last_kejara_upd_date:last_kejara_upd_date_ind,  
				 :bl_flag:bl_flag_ind, :veh_reg_no:veh_reg_no_ind
			FROM JPJ_INFO 
			WHERE LICIDNO = :lic_id:lic_id_ind
			AND   OWNERCAT = :owner_cat:owner_cat_ind; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 68;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select LICIDTYPE ,SUSPGENNO ,KEJARAPOINTS ,TO_CHAR(LASTKEJAR\
APOINTUPDDATE,'DDMMYYYY') ,BLFLAG ,VEHREGNO into :b0:b1,:b2:b3,:b4:b5,:b6:b7,:\
b8:b9,:b10:b11  from JPJ_INFO where (LICIDNO=:b12:b13 and OWNERCAT=:b14:b15)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2140;
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
 sqlstm.sqhstv[1] = (         void  *)&susp_gen_no;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&susp_gen_no_ind;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&kejara_points;
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&kejara_points_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)last_kejara_upd_date;
 sqlstm.sqhstl[3] = (unsigned int  )9;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&last_kejara_upd_date_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&bl_flag;
 sqlstm.sqhstl[4] = (unsigned int  )1;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&bl_flag_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&veh_reg_no;
 sqlstm.sqhstl[5] = (unsigned int  )13;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&veh_reg_no_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&lic_id;
 sqlstm.sqhstl[6] = (unsigned int  )18;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&lic_id_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)&owner_cat;
 sqlstm.sqhstl[7] = (unsigned int  )1;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&owner_cat_ind;
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



	if (SQLCODE != 0 )
	{
#ifdef DEBUG
		userlog("insert_into_appnt_jpj_info : Select from JPJ_INFO failed for KPT %s: %s", kpt_no, SQLMSG);
#endif
		strcpy(prog_log.remarks,"insert_into_appnt_jpj_info: Select from JPJ_INFO failed ");
		sprintf(excep_log.error_msg, "insert_into_appnt_jpj_info: Select from JPJ_INFO failed for KPT %s : %s", kpt_no, SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return SELECT_ERROR;
	}

	if (0 == veh_reg_no_ind)
		setnull(veh_reg_no);

	print_mdl = YES;	/* Set Print MDL flag to YES by default */
	print_mdl_ind = 0;

#ifdef DEBUG
	userlog("insert_into_appnt_jpj_info : Data selected from JPJ_INFO");
	userlog("insert_into_appnt_jpj_info : Lic id - %s", lic_id.arr);
	userlog("insert_into_appnt_jpj_info : Vehicle reg no - %s", veh_reg_no.arr);
	userlog("insert_into_appnt_jpj_info : Lic id type - %s", lic_id_type);
	userlog("insert_into_appnt_jpj_info : Last kejara upd date - %s", last_kejara_upd_date);
	userlog("insert_into_appnt_jpj_info : Suspension gen no - %d", susp_gen_no);
	userlog("insert_into_appnt_jpj_info : Kejara points - %d", kejara_points);
	userlog("insert_into_appnt_jpj_info : Print MDL flag - %c", print_mdl);
	userlog("insert_into_appnt_jpj_info : BL flag - %c", bl_flag);
	userlog("insert_into_appnt_jpj_info : Owner category - %c", owner_cat);
#endif
	
	/* EXEC SQL INSERT INTO APPNT_JPJ_INFO (APPLID, KPTNO, LICIDTYPE, LICIDNO, 
									OWNERCAT, SUSPGENNO, KEJARAPOINTS,
									LASTKEJARAPOINTUPDDATE, PRINTMDL, BLFLAG, VEHREGNO)
		VALUES (:appl_id, :kpt_no:kpt_no_ind, :lic_id_type:lic_id_type_ind, :lic_id:lic_id_ind,
				:owner_cat:owner_cat_ind, :susp_gen_no:susp_gen_no_ind, :kejara_points:kejara_points_ind,
				TO_DATE(:last_kejara_upd_date:last_kejara_upd_date_ind, 'DDMMYYYY'), :print_mdl:print_mdl_ind,
				:bl_flag:bl_flag_ind, :veh_reg_no:veh_reg_no_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 68;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into APPNT_JPJ_INFO (APPLID,KPTNO,LICIDTYPE,LICIDNO,O\
WNERCAT,SUSPGENNO,KEJARAPOINTS,LASTKEJARAPOINTUPDDATE,PRINTMDL,BLFLAG,VEHREGNO\
) values (:b0,:b1:b2,:b3:b4,:b5:b6,:b7:b8,:b9:b10,:b11:b12,TO_DATE(:b13:b14,'D\
DMMYYYY'),:b15:b16,:b17:b18,:b19:b20)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2187;
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
 sqlstm.sqhstv[1] = (         void  *)kpt_no;
 sqlstm.sqhstl[1] = (unsigned int  )13;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&kpt_no_ind;
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
 sqlstm.sqhstv[5] = (         void  *)&susp_gen_no;
 sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&susp_gen_no_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&kejara_points;
 sqlstm.sqhstl[6] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&kejara_points_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)last_kejara_upd_date;
 sqlstm.sqhstl[7] = (unsigned int  )9;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&last_kejara_upd_date_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&print_mdl;
 sqlstm.sqhstl[8] = (unsigned int  )1;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&print_mdl_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&bl_flag;
 sqlstm.sqhstl[9] = (unsigned int  )1;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&bl_flag_ind;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&veh_reg_no;
 sqlstm.sqhstl[10] = (unsigned int  )13;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)&veh_reg_no_ind;
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




		if(SQLCODE != 0 && SQLCODE != -1)
		{
#ifdef DEBUG
			userlog(" insert_into_appnt_jpj_info : Insert into APPNT_JPJ_INFO failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_into_appnt_jpj_info: Insert into APPNT_JPJ_INFO failed");
			sprintf(excep_log.error_msg, "insert_into_appnt_jpj_info: Insert into APPNT_JPJ_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		}

#ifdef DEBUG
		userlog("insert_into_appnt_jpj_info : Record inserted successfully");
#endif

	return SUCCESS;

}

/********************************************************************************/
/* Function name: insert_into_appnt_jpj_lic_info								*/
/* Description	: This function inserts the Applicant's JPJ(License)info into   */          
/*                APPNT_LIC_INFO table											*/
/* Input		: Application id, KPT no										*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_into_appnt_jpj_lic_info(char *application_id, CREATE_APPLNT_REQ_T *req,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	char license_type[LIC_TYPE_SIZE] = {0};
	char license_class[LIC_CLS_SIZE] = {0};
	char licenseclass_usage[LIC_USAGE_SIZE] = {0};
	char validstart_date[DATE_SIZE] = {0};
	char validend_date[DATE_SIZE] = {0};
	char blacklist = 0;
	char handicap_regno[REG_NO_SIZE] = {0};
	char load_chip_flag = 0;
	char verified_stat = 0;
	char physical_rest_code = 0;
	/* varchar lic_id[LIC_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } lic_id
 = {0};

	char owner_cat = 0;
	int record_srno = 0;
	int ajlcount=0;
	
	short license_type_ind = -1;
	short license_class_ind = -1;
	short licenseclass_usage_ind = -1;
	short validstart_date_ind = -1;
	short validend_date_ind = -1;
	short blacklist_ind = -1;
	short handicap_regno_ind = -1;
	short load_chip_flag_ind  = -1;
	short verified_stat_ind  = -1;
	short physical_rest_code_ind = -1;
	short lic_id_ind = -1;
	short owner_cat_ind = -1;
	short record_srno_ind = -1;


	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	/* Populate the variables	*/

	strcpy(appl_id, application_id);

	if ( '\0' != req->license_id[0])
	{
		strcpy((char*)lic_id.arr, req->license_id);
		setlen(lic_id);
		lic_id_ind = 0;
	}

	if ('\0' != req->owner_cat)
	{
		owner_cat = req->owner_cat;
		owner_cat_ind = 0;
	}

#ifdef DEBUG
	userlog("insert_into_appnt_jpj_lic_info : Appl id - %s", appl_id);
	userlog("insert_into_appnt_jpj_lic_info : Lic Id - %s", lic_id.arr);
	userlog("insert_into_appnt_jpj_lic_info : Owner cat - %c", owner_cat);
#endif

	
	/* EXEC SQL DECLARE  license_details CURSOR FOR
		 SELECT	LICTYPE,LICCLASS,LICUSAGECODE,
				TO_CHAR(LICVALIDSTARTDATE, 'DDMMYYYY'),
				TO_CHAR(LICVALIDENDDATE,'DDMMYYYY'),
				BLFLAG, HANDICVEHREGNO, VERIFIEDSTATUS, PHYRESTRICTCODE,
				RECORDSERNO
		 FROM JPJ_LIC_INFO 
			WHERE LICIDNO = :lic_id:lic_id_ind
			AND   OWNERCAT = :owner_cat:owner_cat_ind; */ 



	/* EXEC SQL OPEN license_details; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 68;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0040;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2246;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlstm.sqhstv[0] = (         void  *)&lic_id;
 sqlstm.sqhstl[0] = (unsigned int  )18;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&lic_id_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&owner_cat;
 sqlstm.sqhstl[1] = (unsigned int  )1;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)&owner_cat_ind;
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
		userlog(" insert_into_appnt_jpj_lic_info : Unable to open cursor for fetching data from JPJ_LIC_INFO : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"insert_into_appnt_jpj_lic_info: Unable to open cursor for fetching data from JPJ_LIC_INFO");
		sprintf(excep_log.error_msg, "insert_into_appnt_jpj_lic_info : Unable to open cursor for fetching data from JPJ_LIC_INFO: %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return CURSOR_OPEN_ERROR;
	}

#ifdef DEBUG
		userlog(" insert_into_appnt_jpj_lic_info : Open cursor successfull");
#endif


	while (1)
	{
			/* EXEC SQL FETCH license_details
				INTO :license_type:license_type_ind, :license_class:license_class_ind,
					 :licenseclass_usage:licenseclass_usage_ind, 
					 :validstart_date:validstart_date_ind, :validend_date:validend_date_ind, 
					 :blacklist:blacklist_ind ,	:handicap_regno:handicap_regno_ind,
					 :verified_stat:verified_stat_ind, :physical_rest_code:physical_rest_code_ind,
					 :record_srno:record_srno_ind; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 68;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2269;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqfoff = (           int )0;
   sqlstm.sqfmod = (unsigned int )2;
   sqlstm.sqhstv[0] = (         void  *)license_type;
   sqlstm.sqhstl[0] = (unsigned int  )4;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&license_type_ind;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)license_class;
   sqlstm.sqhstl[1] = (unsigned int  )3;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)&license_class_ind;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)licenseclass_usage;
   sqlstm.sqhstl[2] = (unsigned int  )3;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&licenseclass_usage_ind;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)validstart_date;
   sqlstm.sqhstl[3] = (unsigned int  )9;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)&validstart_date_ind;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)validend_date;
   sqlstm.sqhstl[4] = (unsigned int  )9;
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)&validend_date_ind;
   sqlstm.sqinds[4] = (         int  )0;
   sqlstm.sqharm[4] = (unsigned int  )0;
   sqlstm.sqadto[4] = (unsigned short )0;
   sqlstm.sqtdso[4] = (unsigned short )0;
   sqlstm.sqhstv[5] = (         void  *)&blacklist;
   sqlstm.sqhstl[5] = (unsigned int  )1;
   sqlstm.sqhsts[5] = (         int  )0;
   sqlstm.sqindv[5] = (         void  *)&blacklist_ind;
   sqlstm.sqinds[5] = (         int  )0;
   sqlstm.sqharm[5] = (unsigned int  )0;
   sqlstm.sqadto[5] = (unsigned short )0;
   sqlstm.sqtdso[5] = (unsigned short )0;
   sqlstm.sqhstv[6] = (         void  *)handicap_regno;
   sqlstm.sqhstl[6] = (unsigned int  )11;
   sqlstm.sqhsts[6] = (         int  )0;
   sqlstm.sqindv[6] = (         void  *)&handicap_regno_ind;
   sqlstm.sqinds[6] = (         int  )0;
   sqlstm.sqharm[6] = (unsigned int  )0;
   sqlstm.sqadto[6] = (unsigned short )0;
   sqlstm.sqtdso[6] = (unsigned short )0;
   sqlstm.sqhstv[7] = (         void  *)&verified_stat;
   sqlstm.sqhstl[7] = (unsigned int  )1;
   sqlstm.sqhsts[7] = (         int  )0;
   sqlstm.sqindv[7] = (         void  *)&verified_stat_ind;
   sqlstm.sqinds[7] = (         int  )0;
   sqlstm.sqharm[7] = (unsigned int  )0;
   sqlstm.sqadto[7] = (unsigned short )0;
   sqlstm.sqtdso[7] = (unsigned short )0;
   sqlstm.sqhstv[8] = (         void  *)&physical_rest_code;
   sqlstm.sqhstl[8] = (unsigned int  )1;
   sqlstm.sqhsts[8] = (         int  )0;
   sqlstm.sqindv[8] = (         void  *)&physical_rest_code_ind;
   sqlstm.sqinds[8] = (         int  )0;
   sqlstm.sqharm[8] = (unsigned int  )0;
   sqlstm.sqadto[8] = (unsigned short )0;
   sqlstm.sqtdso[8] = (unsigned short )0;
   sqlstm.sqhstv[9] = (         void  *)&record_srno;
   sqlstm.sqhstl[9] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[9] = (         int  )0;
   sqlstm.sqindv[9] = (         void  *)&record_srno_ind;
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



			if (NO_DATA_FOUND)
			{
				break;
			}
			else if (SQLCODE != 0)
			{
				/* EXEC SQL CLOSE license_details; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 68;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2324;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



				if (SQLCODE != 0)
				{
#ifdef DEBUG
					userlog(" insert_into_appnt_jpj_lic_info : Unable to close cursor for fetching data from JPJ_LIC_INFO : %s", SQLMSG);
#endif
					strcpy(prog_log.remarks,"insert_into_appnt_jpj_lic_info: Unable to close cursor for fetching data from JPJ_LIC_INFO");
					sprintf(excep_log.error_msg, "insert_into_appnt_jpj_lic_info: Unable to close cursor for fetching data from JPJ_LIC_INFO : %s", SQLMSG);
					excep_log.termination_flag = YES;
					excep_log.severity = FATAL;

					log_error(ctx);
					
					return CURSOR_CLOSE_ERROR;
				}

#ifdef DEBUG
				userlog(" insert_into_appnt_jpj_lic_info : Unable to fetch data from JPJ_LIC_INFO : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"insert_into_appnt_jpj_lic_info: Unable to fetch data from JPJ_LIC_INFO");
				sprintf(excep_log.error_msg, "insert_into_appnt_jpj_lic_info: Unable to fetch data from JPJ_LIC_INFO : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return CURSOR_FETCH_ERROR;
			}

#ifdef DEBUG
			userlog(" insert_into_appnt_jpj_lic_info : Fetch cursor successfull");
#endif
		load_chip_flag = YES;	/* Set Load on chip indicator to YES by default */
		load_chip_flag_ind = 0;

#ifdef DEBUG
		userlog("insert_into_appnt_jpj_lic_info :License Type  - %s ",license_type);
		userlog("insert_into_appnt_jpj_lic_info :License Class - %s ",license_class);
		userlog("insert_into_appnt_jpj_lic_info :License Class Usage - %s ",licenseclass_usage);
		userlog("insert_into_appnt_jpj_lic_info :Validity Start Date - %s ",validstart_date);
		userlog("insert_into_appnt_jpj_lic_info :Validity End Date - %s ",validend_date);
		userlog("insert_into_appnt_jpj_lic_info :BlackList - %c",blacklist);
		userlog("insert_into_appnt_jpj_lic_info :Handicapped Registration No - %s ",handicap_regno);
		userlog("insert_into_appnt_jpj_lic_info :Load on chip indiactor - %c ",load_chip_flag);
		userlog("insert_into_appnt_jpj_lic_info :Verified stat - %c ",verified_stat);
		userlog("insert_into_appnt_jpj_lic_info :Physical restrict code - %c ",physical_rest_code);
		userlog("insert_into_appnt_jpj_lic_info :Record Serial Number - %d ",record_srno);
		
#endif
	
			
	/* EXEC SQL INSERT INTO APPNT_LIC_INFO (APPLID, LICTYPE, LICCLASS, LICUSAGECODE, 
									LICVALIDSTARTDATE, LICVALIDENDDATE, BLFLAG,
									HANDICVEHREGNO, LOADONCHIPIND, VERIFIEDSTATUS,
									PHYRESTRICTCODE, RECORDSERNO)
			 VALUES (:appl_id, :license_type:license_type_ind, :license_class:license_class_ind,
					 :licenseclass_usage:licenseclass_usage_ind , 
					 TO_DATE(:validstart_date:validstart_date_ind, 'DDMMYYYY'), 
					 TO_DATE(:validend_date:validend_date_ind, 'DDMMYYYY'), :blacklist:blacklist_ind,
					 :handicap_regno:handicap_regno_ind, :load_chip_flag:load_chip_flag_ind,
					 :verified_stat:verified_stat_ind, :physical_rest_code:physical_rest_code_ind,
					 :record_srno:record_srno_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 68;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into APPNT_LIC_INFO (APPLID,LICTYPE,LICCLASS,LICUSAGE\
CODE,LICVALIDSTARTDATE,LICVALIDENDDATE,BLFLAG,HANDICVEHREGNO,LOADONCHIPIND,VER\
IFIEDSTATUS,PHYRESTRICTCODE,RECORDSERNO) values (:b0,:b1:b2,:b3:b4,:b5:b6,TO_D\
ATE(:b7:b8,'DDMMYYYY'),TO_DATE(:b9:b10,'DDMMYYYY'),:b11:b12,:b13:b14,:b15:b16,\
:b17:b18,:b19:b20,:b21:b22)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2339;
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
 sqlstm.sqhstv[2] = (         void  *)license_class;
 sqlstm.sqhstl[2] = (unsigned int  )3;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&license_class_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)licenseclass_usage;
 sqlstm.sqhstl[3] = (unsigned int  )3;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&licenseclass_usage_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)validstart_date;
 sqlstm.sqhstl[4] = (unsigned int  )9;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&validstart_date_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)validend_date;
 sqlstm.sqhstl[5] = (unsigned int  )9;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&validend_date_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&blacklist;
 sqlstm.sqhstl[6] = (unsigned int  )1;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&blacklist_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)handicap_regno;
 sqlstm.sqhstl[7] = (unsigned int  )11;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&handicap_regno_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&load_chip_flag;
 sqlstm.sqhstl[8] = (unsigned int  )1;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&load_chip_flag_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&verified_stat;
 sqlstm.sqhstl[9] = (unsigned int  )1;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&verified_stat_ind;
 sqlstm.sqinds[9] = (         int  )0;
 sqlstm.sqharm[9] = (unsigned int  )0;
 sqlstm.sqadto[9] = (unsigned short )0;
 sqlstm.sqtdso[9] = (unsigned short )0;
 sqlstm.sqhstv[10] = (         void  *)&physical_rest_code;
 sqlstm.sqhstl[10] = (unsigned int  )1;
 sqlstm.sqhsts[10] = (         int  )0;
 sqlstm.sqindv[10] = (         void  *)&physical_rest_code_ind;
 sqlstm.sqinds[10] = (         int  )0;
 sqlstm.sqharm[10] = (unsigned int  )0;
 sqlstm.sqadto[10] = (unsigned short )0;
 sqlstm.sqtdso[10] = (unsigned short )0;
 sqlstm.sqhstv[11] = (         void  *)&record_srno;
 sqlstm.sqhstl[11] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[11] = (         int  )0;
 sqlstm.sqindv[11] = (         void  *)&record_srno_ind;
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



		
		if(SQLCODE != 0 && SQLCODE != -1)
		{
			/* EXEC SQL CLOSE license_details; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 68;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2402;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



			if (SQLCODE != 0)
			{
#ifdef DEBUG
				userlog(" insert_into_appnt_jpj_lic_info : Unable to close cursor for fetching data from JPJ_LIC_INFO : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"insert_into_appnt_jpj_lic_info: Unable to close cursor for fetching data from JPJ_LIC_INFO");
				sprintf(excep_log.error_msg, "insert_into_appnt_jpj_lic_info: Unable to close cursor for fetching data from JPJ_LIC_INFO : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return CURSOR_CLOSE_ERROR;
			}

#ifdef DEBUG
			userlog(" insert_into_appnt_jpj_lic_info : Insert into APPNT_LIC_INFO failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_into_appnt_jpj_lic_info: Insert into APPNT_LIC_INFO failed");
			sprintf(excep_log.error_msg, "insert_into_appnt_jpj_lic_info: Insert into APPNT_LIC_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		}

	}

	/* EXEC SQL CLOSE license_details; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 68;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2417;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog(" insert_into_appnt_jpj_lic_info : Unable to close cursor for fetching data from JPJ_LIC_INFO : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"insert_into_appnt_jpj_lic_info: Unable to close cursor for fetching data from JPJ_LIC_INFO");
		sprintf(excep_log.error_msg, "insert_into_appnt_jpj_lic_info: Unable to close cursor for fetching data from JPJ_LIC_INFO : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return CURSOR_CLOSE_ERROR;
	}
#ifdef DEBUG
		userlog("insert_into_appnt_jpj_lic_info : Records inserted successfully");
#endif
	
		/* EXEC SQL SELECT COUNT(*) INTO :ajlcount
			FROM APPNT_LIC_INFO 
			WHERE APPLID = :appl_id
			AND   LOADONCHIPIND = 'Y'; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 68;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPNT_LIC_INFO where (APPLI\
D=:b1 and LOADONCHIPIND='Y')";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2432;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&ajlcount;
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



		if (ajlcount > 13)
		{
			/* EXEC SQL UPDATE APPNT_LIC_INFO
				SET LOADONCHIPIND = 'N'
				WHERE APPLID = :appl_id
				AND   LOADONCHIPIND = 'Y'; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 68;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update APPNT_LIC_INFO  set LOADONCHIPIND='N' where (APPLID\
=:b0 and LOADONCHIPIND='Y')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2455;
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


		}



	return SUCCESS;

}


int change_jpj_update_flag_for_lic_info(char *application_id, void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	int ajlcount=0;

		sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	/* Populate the variables	*/

	userlog("change_jpj_update_flag_for_lic_info : application_id : %s",application_id);

	strcpy(appl_id, application_id);

	userlog("change_jpj_update_flag_for_lic_info : appl_id : %s",appl_id);


			/* EXEC SQL SELECT COUNT(*) INTO :ajlcount
			FROM APPNT_LIC_INFO 
			WHERE APPLID = :appl_id
			AND   LOADONCHIPIND = 'Y'; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 68;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select count(*)  into :b0  from APPNT_LIC_INFO where (APPL\
ID=:b1 and LOADONCHIPIND='Y')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2474;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&ajlcount;
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



	userlog("change_jpj_update_flag_for_lic_info : ajlcount : %d",ajlcount);


	return ajlcount;
}



/********************************************************************************/
/* Function name: insert_new_lic_info											*/
/* Description	: This function inserts the Applicant's new License info into   */          
/*                APPNT_LIC_INFO table											*/
/* Input		: Application id												*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_new_lic_info(char *application_id, TXN_DETAILS_T *txn_details,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	char txn_code[TRANSACTION_CODE_SIZE] = {0};
	char license_type[LIC_TYPE_SIZE] = {0};
	char license_class[LIC_CLS_SIZE] = {0};
	char licenseclass_usage[LIC_USAGE_SIZE] = {0};
	char validstart_date[DATE_SIZE] = {0};
	char validend_date[DATE_SIZE] = {0};
	int	validity_period = 0;
	char verified_stat = 0;
	char load_chip_flag = 0;
	
	char prb_validstart_date[DATE_SIZE] = {0};
	char prb_validend_date[DATE_SIZE] = {0};

	
	long days_diff = 0;
	long prb_days_diff = 0;
	int lic_cnt = 0;
	int record_srno = 0;
	int lcnt=0;

	short txn_code_ind = -1;
	short license_type_ind = -1;
	short license_class_ind = -1;
	short licenseclass_usage_ind = -1;
	short validstart_date_ind = -1;
	short validend_date_ind = -1;
	short validity_period_ind = -1;
	short verified_stat_ind = -1;
	short load_chip_flag_ind = -1;
	short record_srno_ind = -1;

	short prb_validstart_date_ind = -1;
	short prb_validend_date_ind = -1;


	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int ret_code  = 0;
	int txn_code_numeric = 0;
	int insert_flag = 0;
	char old_lic_class[LIC_CLS_SIZE] = {"\0"};
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


		
	/* Populate the variables	*/

	strcpy(appl_id, application_id);

#ifdef DEBUG
	userlog("insert_new_lic_info : Appl id - %s", appl_id);
	userlog("insert_new_lic_info : Insert flag - %d", insert_flag);
#endif

	if (0 != txn_details->txn_code[0] )
	{
		strcpy(txn_code, txn_details->txn_code);
		txn_code_ind = 0;
	}

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

	if (0 != txn_details->lic_usage[0] )
	{
		strcpy(licenseclass_usage, txn_details->lic_usage);
		licenseclass_usage_ind = 0;
	}

	if (0 < txn_details->lic_validity)
	{
		validity_period	= txn_details->lic_validity;
		validity_period_ind = 0;
	}

	txn_code_numeric = atoi(txn_details->txn_code);

#ifdef DEBUG
		userlog("insert_new_lic_info :Txn Code  - %s ",txn_code);
		userlog("insert_new_lic_info :License Type  - %s ",license_type);
		userlog("insert_new_lic_info :License Class - %s ",license_class);
		userlog("insert_new_lic_info :License Class Usage - %s ",licenseclass_usage);
		userlog("insert_new_lic_info :Validity period - %d",validity_period);
#endif

	/* Get the maximum record serial no from APPNT_LIC_INFO */

	/* EXEC SQL SELECT MAX(RECORDSERNO) INTO :record_srno:record_srno_ind
			FROM APPNT_LIC_INFO
		WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 68;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select max(RECORDSERNO) into :b0:b1  from APPNT_LIC_INFO whe\
re APPLID=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )2497;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&record_srno;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&record_srno_ind;
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



		//if(SQLCODE != 0 && !NO_DATA_FOUND)
		if(SQLCODE != 0 && SQLCODE != 1403)
		{
#ifdef DEBUG
			userlog(" insert_new_lic_info : Selecting maximum Record serial no from APPNT_LIC_INFO failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_new_lic_info: Selecting maximum Record serial no from APPNT_LIC_INFO failed");
			sprintf(excep_log.error_msg, "insert_new_lic_info: Selecting maximum Record serial no from APPNT_LIC_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}
		

		if (record_srno_ind != 0)
		{
			record_srno = 1;
			record_srno_ind = 0;
		}
		else
		{
			record_srno = record_srno + 1;
		}

	/* Set Validity end date for the license for */
	/* different license transactions			 */

		if(txn_code_numeric == TXN_PDL_NEW || txn_code_numeric == TXN_PRB_NEW ||
		   txn_code_numeric == TXN_CDL_NEW || txn_code_numeric == TXN_GDL_NEW ||
		   txn_code_numeric == TXN_PSV_NEW )
		{

			if (0 != txn_details->txn_date[0] )
			{
				strcpy(validstart_date, txn_details->txn_date);
				validstart_date_ind = 0;
			}
/*Added on 15 - 11 - 2002 by Brijesh*/
			if(txn_code_numeric == TXN_CDL_NEW)
			{
				/* EXEC SQL 
					SELECT DISTINCT TO_CHAR(LICVALIDSTARTDATE, 'DDMMYYYY'),
							TO_CHAR(LICVALIDENDDATE , 'DDMMYYYY')
					INTO :prb_validstart_date:prb_validstart_date_ind, :prb_validend_date:prb_validend_date_ind
					FROM APPNT_LIC_INFO 
					WHERE APPLID = :appl_id
					AND LICTYPE = 'PRB'
					AND LICCLASS = :license_class:license_class_ind; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 68;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select distinct TO_CHAR(LICVALIDSTARTDATE,'DDMMYYYY') ,TO\
_CHAR(LICVALIDENDDATE,'DDMMYYYY') into :b0:b1,:b2:b3  from APPNT_LIC_INFO wher\
e ((APPLID=:b4 and LICTYPE='PRB') and LICCLASS=:b5:b6)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2520;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)prb_validstart_date;
    sqlstm.sqhstl[0] = (unsigned int  )9;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)&prb_validstart_date_ind;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)prb_validend_date;
    sqlstm.sqhstl[1] = (unsigned int  )9;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)&prb_validend_date_ind;
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
    sqlstm.sqhstv[3] = (         void  *)license_class;
    sqlstm.sqhstl[3] = (unsigned int  )3;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)&license_class_ind;
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



				if(SQLCODE != 0)
				{
					#ifdef DEBUG
						userlog(" insert_new_lic_info : Selecting Validity prb start and end dates from APPNT_LIC_INFO failed : %s", SQLMSG);
					#endif
					strcpy(prog_log.remarks,"insert_new_lic_info: Selecting Validity prb start and end dates from APPNT_LIC_INFO failed");
					sprintf(excep_log.error_msg, "insert_new_lic_info: Selecting Validity prb start and end dates from APPNT_LIC_INFO failed : %s", SQLMSG);
					excep_log.termination_flag = YES;
					excep_log.severity = FATAL;

					log_error(ctx);
					
					return SELECT_ERROR;
				}

				#ifdef DEBUG
					userlog(" insert_new_lic_info : prb_validstart_date: %s", prb_validstart_date);
					userlog(" insert_new_lic_info : prb_validend_date: %s", prb_validend_date);
				#endif

				/* EXEC SQL 
					SELECT DISTINCT (TO_DATE(:prb_validend_date:prb_validend_date_ind, 'DDMMYYYY') - TO_DATE(:validstart_date:validstart_date_ind, 'DDMMYYYY'))
					INTO :prb_days_diff FROM DUAL; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 68;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select distinct (TO_DATE(:b0:b1,'DDMMYYYY')-TO_DATE(:b2:b\
3,'DDMMYYYY')) into :b4  from DUAL ";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2551;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)prb_validend_date;
    sqlstm.sqhstl[0] = (unsigned int  )9;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)&prb_validend_date_ind;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)validstart_date;
    sqlstm.sqhstl[1] = (unsigned int  )9;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)&validstart_date_ind;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&prb_days_diff;
    sqlstm.sqhstl[2] = (unsigned int  )sizeof(long);
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
						userlog(" insert_new_lic_info : Calculating prb day diff failed : %s", SQLMSG);
					#endif
					strcpy(prog_log.remarks,"insert_new_lic_info: Calculating prb day diff failed");
					sprintf(excep_log.error_msg, "insert_new_lic_info: Calculating prb day diff failed : %s", SQLMSG);
					excep_log.termination_flag = YES;
					excep_log.severity = FATAL;

					log_error(ctx);
					
					return SELECT_ERROR;
				}

				#ifdef DEBUG
					userlog(" insert_new_lic_info : prb_days_diff: %d", prb_days_diff);
					userlog(" insert_new_lic_info : validstart_date: %s", validstart_date);
				#endif
				if (prb_days_diff > 0)
				{
					/* EXEC SQL 
						SELECT TO_CHAR((TO_DATE(:prb_validend_date:prb_validend_date_ind, 'DDMMYYYY') + 1), 'DDMMYYYY')
						INTO :validstart_date:validstart_date_ind FROM DUAL; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 68;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select TO_CHAR((TO_DATE(:b0:b1,'DDMMYYYY')+1),'DDMMYYYY'\
) into :b2:b3  from DUAL ";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )2578;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)prb_validend_date;
     sqlstm.sqhstl[0] = (unsigned int  )9;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)&prb_validend_date_ind;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)validstart_date;
     sqlstm.sqhstl[1] = (unsigned int  )9;
     sqlstm.sqhsts[1] = (         int  )0;
     sqlstm.sqindv[1] = (         void  *)&validstart_date_ind;
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
							userlog(" insert_new_lic_info : Calculating prb start day failed : %s", SQLMSG);
						#endif
						strcpy(prog_log.remarks,"insert_new_lic_info: Calculating prb start day failed");
						sprintf(excep_log.error_msg, "insert_new_lic_info: Calculating prb start day failed : %s", SQLMSG);
						excep_log.termination_flag = YES;
						excep_log.severity = FATAL;

						log_error(ctx);
						
						return SELECT_ERROR;
					}
				}
			}

			if(0 < validity_period  && 0 != validstart_date[0])
			{
				ret_code = calculate_lic_validity_date(validity_period, validstart_date, validend_date,ctx);

				if(SUCCESS != ret_code)
				{
					return ret_code;
				}

				if (0 != validend_date[0] )
					validend_date_ind = 0;
				
			}

			verified_stat = '6';
			verified_stat_ind = 0;

			/* Delete the old record for this License type from */
			/* APPNT_LIC_INFO, if any							*/

			if (lic_delete_flag == NO)
			{
				/* EXEC SQL DELETE FROM APPNT_LIC_INFO
					WHERE APPLID = :appl_id
					AND LICTYPE = :license_type:license_type_ind; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 68;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "delete  from APPNT_LIC_INFO  where (APPLID=:b0 and LICTYP\
E=:b1:b2)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2601;
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
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



				//if(SQLCODE != 0 && !NO_DATA_FOUND)
				if(SQLCODE != 0 && SQLCODE != 1403)
				{
#ifdef DEBUG
					userlog(" insert_new_lic_info : Deletion of old license record from APPNT_LIC_INFO failed : %s", SQLMSG);
#endif
					strcpy(prog_log.remarks,"insert_new_lic_info: Deletion of old license record from APPNT_LIC_INFO failed");
					sprintf(excep_log.error_msg, "insert_new_lic_info: Deletion of old license record from APPNT_LIC_INFO failed : %s", SQLMSG);
					excep_log.termination_flag = YES;
					excep_log.severity = FATAL;

					log_error(ctx);
					
					return DELETE_ERROR;
				}

				lic_delete_flag = YES;
			}

			insert_flag = TRUE;

		}
		else if (txn_code_numeric == TXN_PDL_CLASS_ADD
				 || txn_code_numeric == TXN_PRB_CLASS_ADD
				 || txn_code_numeric == TXN_CDL_CLASS_ADD
				 || txn_code_numeric == TXN_GDL_CLASS_ADD
				 || txn_code_numeric == TXN_PSV_CLASS_ADD)
		{
			/* Retrieve Validity start and end dates for the given License */
			/* type from the APPNT_LIC_INFO								   */

			/* EXEC SQL SELECT DISTINCT TO_CHAR(LICVALIDSTARTDATE, 'DDMMYYYY'),
									 TO_CHAR(LICVALIDENDDATE , 'DDMMYYYY'),
									 VERIFIEDSTATUS
					INTO :validstart_date:validstart_date_ind, :validend_date:validend_date_ind,
						 :verified_stat:verified_stat_ind
					FROM APPNT_LIC_INFO 
				WHERE APPLID = :appl_id
				AND LICTYPE = :license_type:license_type_ind; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 68;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select distinct TO_CHAR(LICVALIDSTARTDATE,'DDMMYYYY') ,TO_\
CHAR(LICVALIDENDDATE,'DDMMYYYY') ,VERIFIEDSTATUS into :b0:b1,:b2:b3,:b4:b5  fr\
om APPNT_LIC_INFO where (APPLID=:b6 and LICTYPE=:b7:b8)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2624;
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
   sqlstm.sqhstv[2] = (         void  *)&verified_stat;
   sqlstm.sqhstl[2] = (unsigned int  )1;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&verified_stat_ind;
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
   sqlstm.sqhstv[4] = (         void  *)license_type;
   sqlstm.sqhstl[4] = (unsigned int  )4;
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)&license_type_ind;
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



			if(SQLCODE != 0)
			{
#ifdef DEBUG
				userlog(" insert_new_lic_info : Selecting Validity start and end dates from APPNT_LIC_INFO failed : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"insert_new_lic_info: Selecting Validity start and end dates from APPNT_LIC_INFO failed");
				sprintf(excep_log.error_msg, "insert_new_lic_info: Selecting Validity start and end dates from APPNT_LIC_INFO failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return SELECT_ERROR;
			}

			insert_flag = TRUE;

		}
		else if (txn_code_numeric == TXN_PDL_RENEW 
				 || txn_code_numeric == TXN_CDL_RENEW 
				 || txn_code_numeric == TXN_GDL_RENEW 
				 || txn_code_numeric == TXN_PSV_RENEW )
		{
			if (0 != txn_details->txn_date[0] )
			{
				strcpy(validstart_date, txn_details->txn_date);
				validstart_date_ind = 0;
			}

			/* Retrieve Validity start and end dates for the given License */
			/* type from the APPNT_LIC_INFO								   */

			/* EXEC SQL SELECT DISTINCT (TO_DATE(:validstart_date:validstart_date_ind, 'DDMMYYYY') - LICVALIDENDDATE), TO_CHAR(LICVALIDENDDATE , 'DDMMYYYY')
				INTO :days_diff, :validend_date:validend_date_ind
					FROM APPNT_LIC_INFO 
				WHERE APPLID = :appl_id
				AND LICTYPE = :license_type:license_type_ind; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 68;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select distinct (TO_DATE(:b0:b1,'DDMMYYYY')-LICVALIDENDDAT\
E) ,TO_CHAR(LICVALIDENDDATE,'DDMMYYYY') into :b2,:b3:b4  from APPNT_LIC_INFO w\
here (APPLID=:b5 and LICTYPE=:b6:b7)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2659;
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
   sqlstm.sqhstv[1] = (         void  *)&days_diff;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(long);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)validend_date;
   sqlstm.sqhstl[2] = (unsigned int  )9;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&validend_date_ind;
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
   sqlstm.sqhstv[4] = (         void  *)license_type;
   sqlstm.sqhstl[4] = (unsigned int  )4;
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)&license_type_ind;
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



			if(SQLCODE != 0)
			{
#ifdef DEBUG
				userlog(" insert_new_lic_info : Selecting Validity start and end dates from APPNT_LIC_INFO failed : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"insert_new_lic_info: Selecting Validity start and end dates from APPNT_LIC_INFO failed");
				sprintf(excep_log.error_msg, "insert_new_lic_info: Selecting Validity start and end dates from APPNT_LIC_INFO failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return SELECT_ERROR;
			}

#ifdef DEBUG
			userlog("insert_new_lic_info : Days difference - %ld", days_diff);
#endif
			insert_flag = FALSE;
		}

	
		if(TRUE == insert_flag)
		{
#ifdef DEBUG
			userlog("insert_new_lic_info :Validity Start Date - %s",validstart_date);
			userlog("insert_new_lic_info :Validity End Date - %s",validend_date);
			userlog("insert_new_lic_info :Verified status - %c",verified_stat);
#endif

			/* Check if the new class to be added already exists in APPNT_LIC_INFO */

			/* EXEC SQL SELECT COUNT(*) INTO :lic_cnt
					FROM APPNT_LIC_INFO
				WHERE APPLID = :appl_id
				AND LICTYPE = :license_type:license_type_ind
				AND LICCLASS = :license_class:license_class_ind; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 68;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select count(*)  into :b0  from APPNT_LIC_INFO where ((APP\
LID=:b1 and LICTYPE=:b2:b3) and LICCLASS=:b4:b5)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2694;
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
   sqlstm.sqhstv[2] = (         void  *)license_type;
   sqlstm.sqhstl[2] = (unsigned int  )4;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&license_type_ind;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)license_class;
   sqlstm.sqhstl[3] = (unsigned int  )3;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)&license_class_ind;
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



			if(SQLCODE != 0)
			{
#ifdef DEBUG
				userlog(" insert_new_lic_info : Selecting license with given class from APPNT_LIC_INFO failed : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"insert_new_lic_info: Selecting with given class from APPNT_LIC_INFO failed");
				sprintf(excep_log.error_msg, "insert_new_lic_info: Selecting with given class from APPNT_LIC_INFO failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return SELECT_ERROR;
			}

#ifdef DEBUG
			userlog("insert_new_lic_info : License count - %d", lic_cnt);
#endif
			if ( txn_code_numeric == TXN_GDL_CLASS_ADD
			 || txn_code_numeric == TXN_PSV_CLASS_ADD)
			{
			
				if (lic_cnt > 0)
				{
					/* Update the new usage for the class */

					/* EXEC SQL UPDATE APPNT_LIC_INFO
							SET LICUSAGECODE = :licenseclass_usage:licenseclass_usage_ind
						WHERE APPLID = :appl_id
						AND LICTYPE = :license_type:license_type_ind
						AND LICCLASS = :license_class:license_class_ind; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 68;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "update APPNT_LIC_INFO  set LICUSAGECODE=:b0:b1 where ((A\
PPLID=:b2 and LICTYPE=:b3:b4) and LICCLASS=:b5:b6)";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )2725;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)licenseclass_usage;
     sqlstm.sqhstl[0] = (unsigned int  )3;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)&licenseclass_usage_ind;
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
     sqlstm.sqhstv[3] = (         void  *)license_class;
     sqlstm.sqhstl[3] = (unsigned int  )3;
     sqlstm.sqhsts[3] = (         int  )0;
     sqlstm.sqindv[3] = (         void  *)&license_class_ind;
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



					if(SQLCODE != 0)
					{
#ifdef DEBUG
						userlog(" insert_new_lic_info : Updating Usage for given class in APPNT_LIC_INFO failed : %s", SQLMSG);
#endif
						strcpy(prog_log.remarks,"insert_new_lic_info: Updating Usage for given class in APPNT_LIC_INFO failed");
						sprintf(excep_log.error_msg, "insert_new_lic_info: Updating Usage for given class in APPNT_LIC_INFO failed : %s", SQLMSG);
						excep_log.termination_flag = YES;
						excep_log.severity = FATAL;

						log_error(ctx);
						
						return UPDATE_ERROR;
					}

#ifdef DEBUG
					userlog("insert_new_lic_info : Updated Class usage successfully");
#endif
					return SUCCESS;
				}
				else
				{
					/* Get the old class for the given license type */
					
					if (SUCCESS != (ret_code = 	delete_old_class(application_id, txn_details, &record_srno,ctx)))
					{
#ifdef DEBUG
						userlog("insert_new_lic_info : delete_old_class() failed with %d", ret_code);
#endif
						return ret_code;
					}

				}

			}

#ifdef DEBUG
		userlog(" insert_new_lic_info : Record serial no - %d", record_srno);
#endif

			load_chip_flag = YES;	/* Set Load on chip indicator to YES by default */
			load_chip_flag_ind = 0;


			/* EXEC SQL INSERT INTO APPNT_LIC_INFO (APPLID, LICTYPE, LICCLASS, LICUSAGECODE, 
									LICVALIDSTARTDATE, LICVALIDENDDATE, VERIFIEDSTATUS,
									LOADONCHIPIND, RECORDSERNO)
			 VALUES (:appl_id, :license_type:license_type_ind, :license_class:license_class_ind,
					 :licenseclass_usage:licenseclass_usage_ind , 
					 TO_DATE(:validstart_date:validstart_date_ind, 'DDMMYYYY'), 
					 TO_DATE(:validend_date:validend_date_ind, 'DDMMYYYY'), 
					 :verified_stat:verified_stat_ind, :load_chip_flag:load_chip_flag_ind,
					 :record_srno:record_srno_ind); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 68;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPNT_LIC_INFO (APPLID,LICTYPE,LICCLASS,LICUSA\
GECODE,LICVALIDSTARTDATE,LICVALIDENDDATE,VERIFIEDSTATUS,LOADONCHIPIND,RECORDSE\
RNO) values (:b0,:b1:b2,:b3:b4,:b5:b6,TO_DATE(:b7:b8,'DDMMYYYY'),TO_DATE(:b9:b\
10,'DDMMYYYY'),:b11:b12,:b13:b14,:b15:b16)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2756;
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
   sqlstm.sqhstv[2] = (         void  *)license_class;
   sqlstm.sqhstl[2] = (unsigned int  )3;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&license_class_ind;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)licenseclass_usage;
   sqlstm.sqhstl[3] = (unsigned int  )3;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)&licenseclass_usage_ind;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)validstart_date;
   sqlstm.sqhstl[4] = (unsigned int  )9;
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)&validstart_date_ind;
   sqlstm.sqinds[4] = (         int  )0;
   sqlstm.sqharm[4] = (unsigned int  )0;
   sqlstm.sqadto[4] = (unsigned short )0;
   sqlstm.sqtdso[4] = (unsigned short )0;
   sqlstm.sqhstv[5] = (         void  *)validend_date;
   sqlstm.sqhstl[5] = (unsigned int  )9;
   sqlstm.sqhsts[5] = (         int  )0;
   sqlstm.sqindv[5] = (         void  *)&validend_date_ind;
   sqlstm.sqinds[5] = (         int  )0;
   sqlstm.sqharm[5] = (unsigned int  )0;
   sqlstm.sqadto[5] = (unsigned short )0;
   sqlstm.sqtdso[5] = (unsigned short )0;
   sqlstm.sqhstv[6] = (         void  *)&verified_stat;
   sqlstm.sqhstl[6] = (unsigned int  )1;
   sqlstm.sqhsts[6] = (         int  )0;
   sqlstm.sqindv[6] = (         void  *)&verified_stat_ind;
   sqlstm.sqinds[6] = (         int  )0;
   sqlstm.sqharm[6] = (unsigned int  )0;
   sqlstm.sqadto[6] = (unsigned short )0;
   sqlstm.sqtdso[6] = (unsigned short )0;
   sqlstm.sqhstv[7] = (         void  *)&load_chip_flag;
   sqlstm.sqhstl[7] = (unsigned int  )1;
   sqlstm.sqhsts[7] = (         int  )0;
   sqlstm.sqindv[7] = (         void  *)&load_chip_flag_ind;
   sqlstm.sqinds[7] = (         int  )0;
   sqlstm.sqharm[7] = (unsigned int  )0;
   sqlstm.sqadto[7] = (unsigned short )0;
   sqlstm.sqtdso[7] = (unsigned short )0;
   sqlstm.sqhstv[8] = (         void  *)&record_srno;
   sqlstm.sqhstl[8] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[8] = (         int  )0;
   sqlstm.sqindv[8] = (         void  *)&record_srno_ind;
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
				userlog(" insert_new_lic_info : Insert into APPNT_LIC_INFO failed : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"insert_new_lic_info: Insert into APPNT_LIC_INFO failed");
				sprintf(excep_log.error_msg, "insert_new_lic_info: Insert into APPNT_LIC_INFO failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return INSERT_ERROR;
			}
		
#ifdef DEBUG
			userlog("insert_new_lic_info : Record inserted/updated successfully");
#endif

		}
		else if (FALSE == insert_flag)
		{
			if (days_diff > 0)
			{
				/* EXEC SQL UPDATE APPNT_LIC_INFO
					SET  LICVALIDSTARTDATE = TO_DATE(:validstart_date:validstart_date_ind, 'DDMMYYYY'),
					LICVALIDENDDATE   = ADD_MONTHS(TO_DATE(:validstart_date:validstart_date_ind, 'DDMMYYYY'),
													:validity_period:validity_period_ind) - 1
					WHERE APPLID = :appl_id
					AND LICTYPE = :license_type; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 68;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "update APPNT_LIC_INFO  set LICVALIDSTARTDATE=TO_DATE(:b0:\
b1,'DDMMYYYY'),LICVALIDENDDATE=(ADD_MONTHS(TO_DATE(:b0:b3,'DDMMYYYY'),:b4:b5)-\
1) where (APPLID=:b6 and LICTYPE=:b7)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2807;
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
    sqlstm.sqhstv[1] = (         void  *)validstart_date;
    sqlstm.sqhstl[1] = (unsigned int  )9;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)&validstart_date_ind;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&validity_period;
    sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)&validity_period_ind;
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
    sqlstm.sqhstv[4] = (         void  *)license_type;
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



			}
			else
			{
				/* EXEC SQL UPDATE APPNT_LIC_INFO
					SET  LICVALIDSTARTDATE = TO_DATE(:validstart_date:validstart_date_ind, 'DDMMYYYY'),
						 LICVALIDENDDATE   = ADD_MONTHS(LICVALIDENDDATE,:validity_period:validity_period_ind)
					WHERE APPLID = :appl_id
					AND LICTYPE = :license_type; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 68;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "update APPNT_LIC_INFO  set LICVALIDSTARTDATE=TO_DATE(:b0:\
b1,'DDMMYYYY'),LICVALIDENDDATE=ADD_MONTHS(LICVALIDENDDATE,:b2:b3) where (APPLI\
D=:b4 and LICTYPE=:b5)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2842;
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
    sqlstm.sqhstv[1] = (         void  *)&validity_period;
    sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)&validity_period_ind;
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


			}

			if(SQLCODE != 0)
			{
#ifdef DEBUG
				userlog(" insert_new_lic_info : Updation on APPNT_LIC_INFO failed : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"insert_new_lic_info: Updation on APPNT_LIC_INFO failed");
				sprintf(excep_log.error_msg, "insert_new_lic_info: Updation on APPNT_LIC_INFO failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return UPDATE_ERROR;
			}
#ifdef DEBUG
		userlog("insert_new_lic_info : Record updated successfully");
#endif
		}
		else
		{
#ifdef DEBUG
			userlog("insert_new_lic_info : Txn other than Add new and Renewal");
#endif
		}

		// Added this code on 08/11/2011 updating license startdate enddate for CDL renew transaction
		// startdate enddate taken from the front end

		lcnt=0;
		/* EXEC SQL SELECT COUNT(*) INTO :lcnt FROM APPNT_JPJ_LICSYNC WHERE APPLID = :appl_id; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 68;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select count(*)  into :b0  from APPNT_JPJ_LICSYNC where APP\
LID=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2873;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&lcnt;
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



		#ifdef DEBUG
			userlog("insert_new_lic_info : COUNT FROM APPNT_JPJ_LICSYNC:%d",lcnt);
		#endif

		if(lcnt > 0)
		{
			#ifdef DEBUG
				userlog("insert_new_lic_info : COUNT FROM APPNT_JPJ_LICSYNC:%d",lcnt);
			#endif

			
			/* EXEC SQL UPDATE APPNT_LIC_INFO SET (LICVALIDSTARTDATE,LICVALIDENDDATE) = 
					(SELECT LICVALIDSTARTDATE,LICVALIDENDDATE FROM APPNT_JPJ_LICSYNC WHERE APPLID = :appl_id)
					     WHERE APPLID = :appl_id
							AND LICTYPE = 'CDL'; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 68;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update APPNT_LIC_INFO  set (LICVALIDSTARTDATE,LICVALIDENDD\
ATE)=(select LICVALIDSTARTDATE ,LICVALIDENDDATE  from APPNT_JPJ_LICSYNC where \
APPLID=:b0) where (APPLID=:b0 and LICTYPE='CDL')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2896;
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
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
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

/********************************************************************************/
/* Function name: insert_imm_info												*/
/* Description	: This function inserts the Applicant's passport info into		*/          
/*                APPNT_IMM_INFO and APPNT_PP_INFO tables						*/
/* Input		: Main request buffer, Passport info							*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_imm_info(CREATE_APPLNT_REQ_T *req, APPNT_PP_INFO_T *pp_info_orig,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	char kpt_no[KPT_SIZE] = {0};

	int pp_doc_type = 0;
	/* varchar pp_no[PASSPORT_NO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } pp_no
 = {0};

	/* varchar pp_name[JIM_NAME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[61]; } pp_name
 = {0};

	char pp_exp_date[DATE_SIZE] = {0};
	char pp_id_type[JIM_ID_TYPE_SIZE] = {0};
	/* varchar id_no[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } id_no
 = {0};

	char birth_date[DATE_SIZE] = {0};
	char gender = 0;
	char load_on_chip = 0;

	short kpt_no_ind = -1;
	short pp_doc_type_ind = -1;
	short pp_no_ind = -1;
	short pp_name_ind = -1;
	short pp_exp_date_ind = -1;
	short pp_id_type_ind = -1;
	short id_no_ind = -1;
	short gender_ind = -1;
	short birth_date_ind = -1;
	short load_on_chip_ind = -1;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


		int count = 1;
	int pp_cnt = 0;
	APPNT_PP_INFO_T *pp_info = NULL;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	/* Populate the variables	*/

	strcpy(appl_id, req->header.application_id);

	if (0 != req->kpt_no[0] )
	{
		strcpy(kpt_no, req->kpt_no);	
		kpt_no_ind  = 0;
	}
	
#ifdef DEBUG
	userlog("insert_imm_info : Appl id - %s", appl_id);
	userlog("insert_imm_info : KPT no - %s", kpt_no);
#endif

	
	/* EXEC SQL DECLARE  passport_details CURSOR FOR
		 SELECT	PASSPORTDOCTYPE, PASSPORTNO, TO_CHAR(PASSPORTEXPDATE, 'DDMMYYYY'),
				PASSPORTNAME, PASSPORTIDTYPE, IDNO,
				TO_CHAR(BIRTHDATE, 'DDMMYYYY'), GENDER
			FROM IMM_INFO 
			WHERE KPTNO = :kpt_no:kpt_no_ind; */ 


		/* EXEC SQL OPEN passport_details; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 68;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = sq0059;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2919;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqcmod = (unsigned int )0;
  sqlstm.sqhstv[0] = (         void  *)kpt_no;
  sqlstm.sqhstl[0] = (unsigned int  )13;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&kpt_no_ind;
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
		userlog(" insert_imm_info : Unable to open cursor for fetching data from IMM_INFO : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"insert_imm_info: Unable to open cursor for fetching data from IMM_INFO");
		sprintf(excep_log.error_msg, "insert_imm_info : Unable to open cursor for fetching data from IMM_INFO: %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return CURSOR_OPEN_ERROR;
	}

#ifdef DEBUG
		userlog(" insert_imm_info : Open cursor successfull");
#endif


	while (1)
	{
		/* EXEC SQL FETCH passport_details
			INTO :pp_doc_type:pp_doc_type_ind, :pp_no:pp_no_ind, 
				 :pp_exp_date:pp_exp_date_ind, :pp_name:pp_name_ind,
				 :pp_id_type:pp_id_type_ind, :id_no:id_no_ind,
				 :birth_date:birth_date_ind, :gender:gender_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 68;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )2938;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&pp_doc_type;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&pp_doc_type_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&pp_no;
  sqlstm.sqhstl[1] = (unsigned int  )18;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&pp_no_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)pp_exp_date;
  sqlstm.sqhstl[2] = (unsigned int  )9;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&pp_exp_date_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&pp_name;
  sqlstm.sqhstl[3] = (unsigned int  )63;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&pp_name_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)pp_id_type;
  sqlstm.sqhstl[4] = (unsigned int  )3;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&pp_id_type_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&id_no;
  sqlstm.sqhstl[5] = (unsigned int  )18;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&id_no_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)birth_date;
  sqlstm.sqhstl[6] = (unsigned int  )9;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&birth_date_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&gender;
  sqlstm.sqhstl[7] = (unsigned int  )1;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&gender_ind;
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



		if (NO_DATA_FOUND)
		{
			break;
		}
		else if (SQLCODE != 0)
		{
			/* EXEC SQL CLOSE passport_details; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 68;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )2985;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



			if (SQLCODE != 0)
			{
#ifdef DEBUG
				userlog(" insert_imm_info : Unable to close cursor for fetching data from IMM_INFO : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"insert_imm_info: Unable to close cursor for fetching data from IMM_INFO");
				sprintf(excep_log.error_msg, "insert_imm_info: Unable to close cursor for fetching data from IMM_INFO : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return CURSOR_CLOSE_ERROR;
			}

#ifdef DEBUG
			userlog(" insert_imm_info : Unable to fetch data from IMM_INFO : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_imm_info: Unable to fetch data from IMM_INFO");
			sprintf(excep_log.error_msg, "insert_imm_info: Unable to fetch data from IMM_INFO : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return CURSOR_FETCH_ERROR;
		}

#ifdef DEBUG
		userlog(" insert_imm_info : Fetch cursor successfull");
#endif
	
		if (0 == pp_no_ind )
			setnull(pp_no);

		if (0 == pp_name_ind )
			setnull(pp_name);

		if (0 == id_no_ind )
			setnull(id_no);

#ifdef DEBUG
	userlog("insert_imm_info : Passport no - %s", pp_no.arr);
	userlog("insert_imm_info : Passport name - %s", pp_name.arr);
	userlog("insert_imm_info : Id no - %s", id_no.arr);
	userlog("insert_imm_info : Passport expiry date - %s", pp_exp_date);
	userlog("insert_imm_info : Passport id type - %s", pp_id_type);
	userlog("insert_imm_info : Passport doc type - %d", pp_doc_type);

	if (count == 1)
	{
		userlog("insert_imm_info : Birth date - %s", birth_date);
		userlog("insert_imm_info : Gender - %c", gender);
		
	}
#endif

		if (count == 1)
		{
			
			/* EXEC SQL INSERT INTO APPNT_IMM_INFO (APPLID, KPTNO, GENDER, BIRTHDATE)
				VALUES (:appl_id, :kpt_no:kpt_no_ind, :gender:gender_ind, 
						TO_DATE(:birth_date:birth_date_ind, 'DDMMYYYY')); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 68;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPNT_IMM_INFO (APPLID,KPTNO,GENDER,BIRTHDATE)\
 values (:b0,:b1:b2,:b3:b4,TO_DATE(:b5:b6,'DDMMYYYY'))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3000;
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
   sqlstm.sqhstv[1] = (         void  *)kpt_no;
   sqlstm.sqhstl[1] = (unsigned int  )13;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)&kpt_no_ind;
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
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}


						 
			
			if(SQLCODE != 0 && SQLCODE != -1)
			{
				/* EXEC SQL CLOSE passport_details; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 68;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )3031;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)256;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



				if (SQLCODE != 0)
				{
#ifdef DEBUG
					userlog(" insert_imm_info : Unable to close cursor for fetching data from IMM_INFO : %s", SQLMSG);
#endif
					strcpy(prog_log.remarks,"insert_imm_info: Unable to close cursor for fetching data from IMM_INFO");
					sprintf(excep_log.error_msg, "insert_imm_info: Unable to close cursor for fetching data from IMM_INFO : %s", SQLMSG);
					excep_log.termination_flag = YES;
					excep_log.severity = FATAL;

					log_error(ctx);
					
					return CURSOR_CLOSE_ERROR;
				}

#ifdef DEBUG
				userlog(" insert_imm_info : Insert into APPNT_IMM_INFO failed : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"insert_imm_info: Insert into APPNT_IMM_INFO failed");
				sprintf(excep_log.error_msg, "insert_imm_info: Insert into APPNT_IMM_INFO failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return INSERT_ERROR;
			}

#ifdef DEBUG
		userlog("insert_imm_info : Record inserted into APPNT_IMM_INFO successfully");
#endif

		}

		pp_info = pp_info_orig;
		/* Get the 'Load on chip flag' from the request buffer */
		/* for the given passport doc type				       */

		for (pp_cnt = 0; pp_cnt < req->passport_cnt; pp_cnt++, pp_info++)
		{
#ifdef DEBUG
			userlog("insert_imm_info: Passport doc type - %d", pp_info->passport_doc_type);
			userlog("insert_imm_info: Load on chip flag - %c", pp_info->load_on_chip_flag);
#endif

			if (pp_doc_type == pp_info->passport_doc_type)
			{
				if (pp_info->load_on_chip_flag != '\0')
				{
					load_on_chip = pp_info->load_on_chip_flag;
					load_on_chip_ind = 0;
				}
				else
					load_on_chip_ind = -1;
			}	
		}


		/* EXEC SQL INSERT INTO APPNT_PP_INFO (APPLID, PASSPORTDOCTYPE, PASSPORTNO, 
										PASSPORTIDTYPE, PASSPORTIDNO, PASSPORTNAME,
										PASSPORTEXPDATE, LOADONCHIPIND)
			VALUES ( :appl_id, :pp_doc_type:pp_doc_type_ind, :pp_no:pp_no_ind,
					 :pp_id_type:pp_id_type_ind, :id_no:id_no_ind, :pp_name:pp_name_ind,
					 TO_DATE(:pp_exp_date:pp_exp_date_ind, 'DDMMYYYY'), :load_on_chip:load_on_chip_ind); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 68;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPNT_PP_INFO (APPLID,PASSPORTDOCTYPE,PASSPORTN\
O,PASSPORTIDTYPE,PASSPORTIDNO,PASSPORTNAME,PASSPORTEXPDATE,LOADONCHIPIND) valu\
es (:b0,:b1:b2,:b3:b4,:b5:b6,:b7:b8,:b9:b10,TO_DATE(:b11:b12,'DDMMYYYY'),:b13:\
b14)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3046;
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
  sqlstm.sqhstv[1] = (         void  *)&pp_doc_type;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&pp_doc_type_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&pp_no;
  sqlstm.sqhstl[2] = (unsigned int  )18;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&pp_no_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)pp_id_type;
  sqlstm.sqhstl[3] = (unsigned int  )3;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&pp_id_type_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&id_no;
  sqlstm.sqhstl[4] = (unsigned int  )18;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&id_no_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&pp_name;
  sqlstm.sqhstl[5] = (unsigned int  )63;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&pp_name_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)pp_exp_date;
  sqlstm.sqhstl[6] = (unsigned int  )9;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&pp_exp_date_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&load_on_chip;
  sqlstm.sqhstl[7] = (unsigned int  )1;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&load_on_chip_ind;
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


			
			
		if(SQLCODE != 0)
		{
			/* EXEC SQL CLOSE passport_details; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 68;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3093;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



			if (SQLCODE != 0 && SQLCODE != -1)
			{
#ifdef DEBUG
				userlog(" insert_imm_info : Unable to close cursor for fetching data from IMM_INFO : %s", SQLMSG);
#endif
				strcpy(prog_log.remarks,"insert_imm_info: Unable to close cursor for fetching data from IMM_INFO");
				sprintf(excep_log.error_msg, "insert_imm_info: Unable to close cursor for fetching data from IMM_INFO : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return CURSOR_CLOSE_ERROR;
			}

#ifdef DEBUG
			userlog(" insert_imm_info : Insert into APPNT_PP_INFO failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_imm_info: Insert into APPNT_PP_INFO failed");
			sprintf(excep_log.error_msg, "insert_imm_info: Insert into APPNT_PP_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		}

#ifdef DEBUG
	userlog("insert_imm_info : Record inserted into APPNT_PP_INFO successfully");
#endif

		count++;
	}

	/* EXEC SQL CLOSE passport_details; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 68;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3108;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



	if (SQLCODE != 0)
	{
#ifdef DEBUG
		userlog(" insert_imm_info : Unable to close cursor for fetching data from IMM_INFO : %s", SQLMSG);
#endif
		strcpy(prog_log.remarks,"insert_imm_info: Unable to close cursor for fetching data from IMM_INFO");
		sprintf(excep_log.error_msg, "insert_imm_info: Unable to close cursor for fetching data from IMM_INFO : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		return CURSOR_CLOSE_ERROR;
	}
	
	return SUCCESS;

}

/********************************************************************************/
/* Function name: insert_old_appl_history										*/
/* Description	: This function inserts the application history info from GSC	*/
/*				  into APPL_HISTORY table										*/
/* Input		: Pointer to Application history info structure, Structure count*/
/*                Application id, Current long name								*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_old_appl_history(APPL_HISTORY_T *appl_hist, char *application_id, char *kptno,
							int appl_history_cnt, char *current_long_name, char missed_opex_flag,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char appl_id[APP_ID_SIZE] = {0};
		char kpt_no[KPT_SIZE] = {0};
		short kpt_no_ind = -1;
		int proc_sr_no = 0;
		short proc_sr_no_ind = -1;
		/* varchar user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id
 = {0};

		short user_id_ind = -1;
		/* varchar ws_id[WS_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } ws_id
 = {0};

		short ws_id_ind = -1;
		char branch_code[BRANCH_CODE_SIZE] = {0};
		short branch_code_ind = -1;
		char appl_date[DATE_SIZE] = {0};
		short appl_date_ind = -1;
		char appl_stat = 0;
		short appl_stat_ind = -1;
		char timestamp[DATE_TIME_SIZE] = {0};
		short timestamp_ind  = -1; 
		/* varchar curr_long_name[LONG_NAME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[151]; } curr_long_name
 = {0};

		short curr_long_name_ind = -1;
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int count = 0;
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	
	/* Populate the variables	*/

	strcpy(appl_id, application_id);

	if (0 != strcmp(kptno, ""))
	{
		strcpy(kpt_no, kptno);
		kpt_no_ind = 0;
	}

	if (missed_opex_flag != YES)
	{
		curr_long_name.arr[0] = '\0';
		/* EXEC SQL SELECT CURRLONGNAME INTO :curr_long_name:curr_long_name_ind
		FROM JPN_INFO WHERE KPTNO = :kpt_no:kpt_no_ind; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 68;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select CURRLONGNAME into :b0:b1  from JPN_INFO where KPTNO=\
:b2:b3";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3123;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&curr_long_name;
  sqlstm.sqhstl[0] = (unsigned int  )153;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&curr_long_name_ind;
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



	//	if(SQLCODE != 0 && !NO_DATA_FOUND)
		if(SQLCODE != 0 && SQLCODE != 1403)
		{
#ifdef DEBUG
			userlog(" insert_old_appl_history : Select from JPN_INFO failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_old_appl_history: Select from JPN_INFO failed");
			sprintf(excep_log.error_msg, "insert_old_appl_history: Select from JPN_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}

		if (0 ==  curr_long_name_ind)
			setnull(curr_long_name);
		else 
			curr_long_name.arr[0] = '\0';

	}

#ifdef DEBUG
	userlog("insert_old_appl_history : Appl id - %s", appl_id);
	userlog("insert_old_appl_history : KPT No - %s", kpt_no);
	userlog("insert_old_appl_history : Current long name - %s", curr_long_name.arr);
#endif

	for (count = 0; count < appl_history_cnt; count++, appl_hist++)
	{
	
		if (0 < appl_hist->proc_sr_no)
		{
			proc_sr_no = appl_hist->proc_sr_no;
			proc_sr_no_ind = 0;
		}
		else
			proc_sr_no_ind = -1;
	
		if (0 != appl_hist->appl_date[0])
		{
			strcpy(appl_date, appl_hist->appl_date);
			appl_date_ind = 0;
		}
		else
			appl_date_ind = -1;

		if ('\0' != appl_hist->appl_stat)
		{
			appl_stat = appl_hist->appl_stat;
			appl_stat_ind = 0;
		}
		else
			appl_stat_ind = -1;

		if (0 != appl_hist->branch_code[0])
		{
			strcpy(branch_code, appl_hist->branch_code);
			branch_code_ind = 0;
		}
		else
			branch_code_ind = -1;

		if (0 != appl_hist->user_id[0])
		{
			strcpy((char*)user_id.arr, appl_hist->user_id);
			user_id_ind = 0;
			setlen(user_id);
		}
		else
			user_id_ind = -1;

		if (0 != appl_hist->ws_id[0])
		{
			strcpy((char*)ws_id.arr, appl_hist->ws_id);
			ws_id_ind = 0;
			setlen(ws_id);
		}
		else
			ws_id_ind = -1;

		if (0 != appl_hist->timestamp[0])
		{
			strcpy(timestamp, appl_hist->timestamp);
			timestamp_ind = 0;
		}
		else
			timestamp_ind = -1;
	
	
#ifdef DEBUG
		userlog("insert_old_appl_history : Process ser no - %d", proc_sr_no);
		userlog("insert_old_appl_history : Appl status - %c", appl_stat);
		userlog("insert_old_appl_history : Appl date - %s", appl_date);
		userlog("insert_old_appl_history : Branch code - %s", branch_code);
		userlog("insert_old_appl_history : User id - %s", user_id.arr);
		userlog("insert_old_appl_history : WS id - %s", ws_id.arr);
		userlog("insert_old_appl_history : Timestamp - %s", timestamp);
#endif



		// This check is added on 08/11/2011 for CR 242 using appl_history buffer 
		// to get the data of licensestartdate, licenseenddate, licenseadjperiod in days,
		// birthdate(in userid column as ddmmyyyy format from front end

		#ifdef DEBUG
			userlog("insert_old_appl_history : Release 3.23");
		#endif

		if(appl_stat == '1')
		{
			#ifdef DEBUG
				userlog("insert_old_appl_history : Appl status Release 3.23 - %c", appl_stat);
			#endif

			/* EXEC SQL INSERT INTO APPNT_JPJ_LICSYNC (APPLID, LICVALIDSTARTDATE, 
				LICVALIDENDDATE, FEEADJPERIOD, BIRTHDATE,FEETYPE, FEEADJAMT, AGENCYREVNCODE)
				VALUES(:appl_id, TO_DATE(:appl_date:appl_date_ind, 'DDMMYYYY'),
				TO_DATE(:timestamp:timestamp_ind, 'DDMMYYYY HH24MISS'), 
				TO_NUMBER(:ws_id),TO_DATE(:user_id:user_id_ind,'DDMMYYYY'), 'SF',0,0); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 68;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPNT_JPJ_LICSYNC (APPLID,LICVALIDSTARTDATE,LI\
CVALIDENDDATE,FEEADJPERIOD,BIRTHDATE,FEETYPE,FEEADJAMT,AGENCYREVNCODE) values \
(:b0,TO_DATE(:b1:b2,'DDMMYYYY'),TO_DATE(:b3:b4,'DDMMYYYY HH24MISS'),TO_NUMBER(\
:b5),TO_DATE(:b6:b7,'DDMMYYYY'),'SF',0,0)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3146;
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
   sqlstm.sqhstv[1] = (         void  *)appl_date;
   sqlstm.sqhstl[1] = (unsigned int  )9;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)&appl_date_ind;
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
   sqlstm.sqhstv[3] = (         void  *)&ws_id;
   sqlstm.sqhstl[3] = (unsigned int  )18;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)0;
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
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
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
				userlog(" insert_old_appl_history : Insert into APPNT_JPJ_LICSYNC failed : %s", SQLMSG);
			#endif
				
			}

		}
		else
		{

	
			/* EXEC SQL INSERT INTO APPL_HISTORY (APPLID, PROCSERNO, APPLDATE, APPLSTAT, 
								KPTNO, CURRLONGNAME, BRANCHCODE, USERID, WSID, 
								TIMESTAMP)
					VALUES (:appl_id, :proc_sr_no:proc_sr_no_ind, TO_DATE(:appl_date:appl_date_ind, 'DDMMYYYY'),
					:appl_stat:appl_stat_ind, :kpt_no:kpt_no_ind, :curr_long_name:curr_long_name_ind,
					:branch_code:branch_code_ind, :user_id:user_id_ind, :ws_id:ws_id_ind,
					TO_DATE(:timestamp:timestamp_ind, 'DDMMYYYY HH24MISS')); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 68;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPL_HISTORY (APPLID,PROCSERNO,APPLDATE,APPLST\
AT,KPTNO,CURRLONGNAME,BRANCHCODE,USERID,WSID, timestamp ) values (:b0,:b1:b2,T\
O_DATE(:b3:b4,'DDMMYYYY'),:b5:b6,:b7:b8,:b9:b10,:b11:b12,:b13:b14,:b15:b16,TO_\
DATE(:b17:b18,'DDMMYYYY HH24MISS'))";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3181;
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
   sqlstm.sqhstv[1] = (         void  *)&proc_sr_no;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)&proc_sr_no_ind;
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
   sqlstm.sqhstv[3] = (         void  *)&appl_stat;
   sqlstm.sqhstl[3] = (unsigned int  )1;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)&appl_stat_ind;
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
   sqlstm.sqhstv[5] = (         void  *)&curr_long_name;
   sqlstm.sqhstl[5] = (unsigned int  )153;
   sqlstm.sqhsts[5] = (         int  )0;
   sqlstm.sqindv[5] = (         void  *)&curr_long_name_ind;
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
   sqlstm.sqhstv[8] = (         void  *)&ws_id;
   sqlstm.sqhstl[8] = (unsigned int  )18;
   sqlstm.sqhsts[8] = (         int  )0;
   sqlstm.sqindv[8] = (         void  *)&ws_id_ind;
   sqlstm.sqinds[8] = (         int  )0;
   sqlstm.sqharm[8] = (unsigned int  )0;
   sqlstm.sqadto[8] = (unsigned short )0;
   sqlstm.sqtdso[8] = (unsigned short )0;
   sqlstm.sqhstv[9] = (         void  *)timestamp;
   sqlstm.sqhstl[9] = (unsigned int  )16;
   sqlstm.sqhsts[9] = (         int  )0;
   sqlstm.sqindv[9] = (         void  *)&timestamp_ind;
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


			 
			if(SQLCODE != 0 && SQLCODE != -1)
			{
			#ifdef DEBUG
				userlog(" insert_old_appl_history : Insert into APPL_HISTORY failed : %s", SQLMSG);
			#endif
				strcpy(prog_log.remarks,"insert_old_appl_history: Insert into APPL_HISTORY failed ");
				sprintf(excep_log.error_msg, "insert_old_appl_history: Insert into APPL_HISTORY failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return INSERT_ERROR;
			}
		}

#ifdef DEBUG
		userlog("insert_old_appl_history : Record %d inserted successfully", count + 1);
#endif

	}

	strcpy(current_long_name, (char*)curr_long_name.arr);

	return SUCCESS;

}

/********************************************************************************/
/* Function name: insert_outstand_fee_info										*/
/* Description	: This function inserts the outstanding transaction fee info	*/
/*				  into OUTSTAND_TXN_FEE table									*/
/* Input		: Pointer to outstanding transaction fee info struture,			*/
/*                Structure count, Application id								*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_outstand_fee_info(APPL_OUTSTAND_TXN_FEE_T *outstand_txn_fee, HEADER_T header,
						int outstand_txn_fee_cnt, char *branch_code,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char appl_id[APP_ID_SIZE] = {0};
	int txn_sr_no = 0;
	char fee_type[FEE_TYPE_SIZE] = {0};
	float fee_amt = 0;
	long agency_rev_code = 0;
	char collection_centre[BRANCH_CODE_SIZE] = {0};
	char send_gsc_flag = 0;

	short txn_sr_no_ind = -1;
	short fee_type_ind = -1;
	short fee_amt_ind = -1;
	short agency_rev_code_ind = -1;
	short collection_centre_ind = -1;
	
	float feeamt = 0;
	short feeamt_ind = 0;
	int txn_sr_no_temp = 0;
	short txn_sr_no_temp_ind = 0;
	
	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	APPL_OUTSTAND_TXN_FEE_T *outstand_txn_fee_temp;
	int ret_code = 0;
	int count = 0;
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	
	ABT_LIST_T abt_lst = {0};
	


	/* Populate the variables	*/

	outstand_txn_fee_temp = outstand_txn_fee;
	strcpy(appl_id, header.application_id);

#ifdef DEBUG
	userlog("insert_outstand_fee_info : Fee count - %d", outstand_txn_fee_cnt);
#endif

	/* Get collection centre from APPLICATION */
	/* EXEC SQL SELECT COLLCENTER INTO :collection_centre:collection_centre_ind
		FROM APPLICATION 
		WHERE APPLID = :appl_id; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 68;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select COLLCENTER into :b0:b1  from APPLICATION where APPLID\
=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )3236;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)collection_centre;
 sqlstm.sqhstl[0] = (unsigned int  )7;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&collection_centre_ind;
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
			userlog(" insert_outstand_fee_info : Selection from APPLICATION failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_outstand_fee_info: Selection from APPLICATION failed");
			sprintf(excep_log.error_msg, "insert_outstand_fee_info: Selection from APPLICATION failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return SELECT_ERROR;
		}

#ifdef DEBUG
		userlog("insert_outstand_fee_info : Collection centre - %s", collection_centre);
#endif

	if (strcmp(branch_code, collection_centre) == 0)
		send_gsc_flag = YES;
	else
		send_gsc_flag = NO;

#ifdef DEBUG
		userlog("insert_outstand_fee_info : Send GSC flag - %c", send_gsc_flag);
#endif

	for (count = 0; count < outstand_txn_fee_cnt; count++, outstand_txn_fee++)
	{
	
		if (0 < outstand_txn_fee->txn_sr_no)
		{
			txn_sr_no = outstand_txn_fee->txn_sr_no;
			txn_sr_no_ind = 0;
		}
		else
			txn_sr_no_ind = -1;

		fee_amt = outstand_txn_fee->fee_amt;
		fee_amt_ind = 0;
	
		agency_rev_code = outstand_txn_fee->agency_rev_code;
		agency_rev_code_ind = 0;
		
		if (0 != outstand_txn_fee->fee_type[0] )
		{
			strcpy(fee_type, outstand_txn_fee->fee_type);
			fee_type_ind = 0;
		}
		else
			fee_type_ind = -1;

#ifdef DEBUG
		userlog("insert_outstand_fee_info : Txn ser no - %d", txn_sr_no);
		userlog("insert_outstand_fee_info : Fee type - %s", fee_type);
		userlog("insert_outstand_fee_info : Fee amount - %f", fee_amt);
		userlog("insert_outstand_fee_info : Agency rev code - %ld", agency_rev_code);
		
#endif

	
		/* EXEC SQL INSERT INTO OUTSTAND_TXN_FEE (APPLID, TXNSERNO, FEETYPE, FEEAMT, 
									AGENCYREVNCODE, SEND_GSC)
			VALUES (:appl_id, :txn_sr_no:txn_sr_no_ind, :fee_type:fee_type_ind,
				:fee_amt:fee_amt_ind, :agency_rev_code:agency_rev_code_ind,
				:send_gsc_flag); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 68;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into OUTSTAND_TXN_FEE (APPLID,TXNSERNO,FEETYPE,FEEAM\
T,AGENCYREVNCODE,SEND_GSC) values (:b0,:b1:b2,:b3:b4,:b5:b6,:b7:b8,:b9)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3259;
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
  sqlstm.sqhstv[1] = (         void  *)&txn_sr_no;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&txn_sr_no_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)fee_type;
  sqlstm.sqhstl[2] = (unsigned int  )4;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&fee_type_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&fee_amt;
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&fee_amt_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&agency_rev_code;
  sqlstm.sqhstl[4] = (unsigned int  )sizeof(long);
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&agency_rev_code_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&send_gsc_flag;
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



				 
		if(SQLCODE != 0 && SQLCODE != -1)
		{
#ifdef DEBUG
			userlog(" insert_outstand_fee_info : Insert into OUTSTAND_TXN_FEE failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_outstand_fee_info: Insert into OUTSTAND_TXN_FEE failed ");
			sprintf(excep_log.error_msg, "insert_outstand_fee_info: Insert into OUTSTAND_TXN_FEE failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		}


#ifdef DEBUG
		userlog("insert_outstand_fee_info : Record %d inserted successfully", count + 1);
#endif

	}

	#ifdef DEBUG
			userlog(" insert_outstand_fee_info :Check if offline application:%c:", header.application_id[14]);
	#endif
	/*Added on 5th march 2002 new change for ABT tracking*/
  if(header.application_id[14] == '2' || header.application_id[14] == '3') // check if phone in
  {

	for (count = 1; count <= outstand_txn_fee_cnt; count++, outstand_txn_fee_temp++)
	{
	
		if (0 < outstand_txn_fee_temp->txn_sr_no)
		{
			txn_sr_no = outstand_txn_fee_temp->txn_sr_no;
			txn_sr_no_ind = 0;
		}
		else
			txn_sr_no_ind = -1;

		if(txn_sr_no_temp != outstand_txn_fee_temp->txn_sr_no)
		{

			strcpy(abt_lst.applid, header.application_id);
			abt_lst.txnserno = txn_sr_no;

			/* EXEC SQL
				SELECT SUM(FEEAMT) INTO :feeamt:feeamt_ind
				FROM APPL_TXN_FEE WHERE APPLID  = :appl_id AND 
				txnserno = :txn_sr_no:txn_sr_no_ind; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 68;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select sum(FEEAMT) into :b0:b1  from APPL_TXN_FEE where (A\
PPLID=:b2 and txnserno=:b3:b4)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3298;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&feeamt;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&feeamt_ind;
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
   sqlstm.sqhstv[2] = (         void  *)&txn_sr_no;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&txn_sr_no_ind;
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
				userlog(" insert_outstand_fee_info : SELECT SUM(FEEAMT) failed : %s", SQLMSG);
		#endif
				strcpy(prog_log.remarks,"insert_outstand_fee_info : SELECT SUM(FEEAMT) failed");
				sprintf(excep_log.error_msg, "insert_outstand_fee_info : SELECT SUM(FEEAMT) failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return SELECT_ERROR;
			}

			if(feeamt_ind == -1)
			{
				abt_lst.feecollectedamt = 0;
			}
			else
			{
				abt_lst.feecollectedamt = feeamt;
			}
			
		#ifdef DEBUG
				userlog(" insert_outstand_fee_info :Fee amt got successfully from APPL_TXN_FEE:%f:", feeamt);
				userlog(" insert_outstand_fee_info :outstand_txn_fee_temp->fee_amt:%f:", outstand_txn_fee_temp->fee_amt);
		#endif


			feeamt = 0;

			/* EXEC SQL
				SELECT SUM(FEEAMT) INTO :feeamt:feeamt_ind
				FROM OUTSTAND_TXN_FEE WHERE APPLID  = :appl_id AND 
				txnserno = :txn_sr_no:txn_sr_no_ind; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 68;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select sum(FEEAMT) into :b0:b1  from OUTSTAND_TXN_FEE wher\
e (APPLID=:b2 and txnserno=:b3:b4)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )3325;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&feeamt;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(float);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)&feeamt_ind;
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
   sqlstm.sqhstv[2] = (         void  *)&txn_sr_no;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)&txn_sr_no_ind;
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
				userlog(" insert_outstand_fee_info : SELECT SUM(FEEAMT) failed : %s", SQLMSG);
		#endif
				strcpy(prog_log.remarks,"insert_outstand_fee_info : SELECT SUM(FEEAMT) failed");
				sprintf(excep_log.error_msg, "insert_outstand_fee_info : SELECT SUM(FEEAMT) failed : %s", SQLMSG);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return SELECT_ERROR;
			}

			if(feeamt_ind == -1)
			{
				abt_lst.outstandingamt = 0;
			}
			else
			{
				abt_lst.outstandingamt = feeamt;
			}

		#ifdef DEBUG
				userlog(" insert_outstand_fee_info :Fee amt got successfully from OUTSTAND_TXN_FEE:%f:", feeamt);
				userlog(" insert_outstand_fee_info :outstand_txn_fee_temp->fee_amt:%f:", outstand_txn_fee_temp->fee_amt);
		#endif

//			abt_lst.outstandingamt = outstand_txn_fee_temp->fee_amt;
			abt_lst.feeamt = abt_lst.feecollectedamt + abt_lst.outstandingamt;

		#ifdef DEBUG
				userlog(" insert_outstand_fee_info :abt_lst.outstandingamt:%f:", abt_lst.outstandingamt);
				userlog(" insert_outstand_fee_info :abt_lst.feeamt:%f:", abt_lst.feeamt);
		#endif

			abt_lst.outstandingfeetype = 'F';
			abt_lst.feestat = 'U';
			strcpy(abt_lst.feecreationdate, get_date_time());
			strcpy(abt_lst.userid, header.user_id);
			strcpy(abt_lst.branchcode, header.branch_code);

		#ifdef DEBUG
				userlog(" insert_outstand_fee_info :Before calling insert_abt_list");
		#endif

/*** commented this on 09/02/06, as this is taken care by another service,
     req. from vasanth.

			if (SUCCESS != (ret_code = insert_abt_list(abt_lst,ctx)))
			{
			#ifdef DEBUG
				userlog("insert_outstand_fee_info : insert_abt_list() failed with %d", ret_code);
			#endif		
				strcpy(prog_log.remarks,"insert_outstand_fee_info: insert_abt_list() failed");
				sprintf(excep_log.error_msg, "insert_outstand_fee_info: insert_abt_list() failed with : %d", ret_code);
				excep_log.termination_flag = YES;
				excep_log.severity = FATAL;

				log_error(ctx);
				
				return INSERT_ERROR;
			}

*/
		}

		if (0 < outstand_txn_fee_temp->txn_sr_no)
		{
			txn_sr_no_temp = outstand_txn_fee_temp->txn_sr_no;
			txn_sr_no_temp_ind = 0;
		}
		else
		{
			txn_sr_no_temp = 0;
			txn_sr_no_temp_ind = -1;
		}
	}
  }

	return SUCCESS;

}

/********************************************************************************/
/* Function name: insert_fee_reduce_info										*/
/* Description	: This function inserts the outstanding transaction fee info	*/
/*				  into APPL_FEE_REDUCTION table									*/
/* Input		: Pointer to outstanding transaction fee info struture,			*/
/*                Structure count, Application id								*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_fee_reduce_info(APPL_FEE_REDUCTION_T *fee_reduction, char *application_id,
						int appl_fee_reduce_cnt,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char appl_id[APP_ID_SIZE] = {0};
	int txn_sr_no = 0;
	char fee_type[FEE_TYPE_SIZE] = {0};
	float fee_amt = 0;
	float orig_fee_amt = 0;
	long agency_rev_code = 0;
	char reduction_type = 0;

	short txn_sr_no_ind = -1;
	short fee_type_ind = -1;
	short fee_amt_ind = -1;
	short agency_rev_code_ind = -1;
	short orig_fee_amt_ind = -1;
	short reduction_type_ind = -1;
	
sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int count = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	/* Populate the variables	*/

	strcpy(appl_id, application_id);

#ifdef DEBUG
	userlog("insert_fee_reduce_info : Fee count - %d", appl_fee_reduce_cnt);
#endif

	for (count = 0; count < appl_fee_reduce_cnt; count++, fee_reduction++)
	{
	
		if (0 < fee_reduction->txn_sr_no)
		{
			txn_sr_no = fee_reduction->txn_sr_no;
			txn_sr_no_ind = 0;
		}
		else
			txn_sr_no_ind = -1;

		fee_amt = fee_reduction->fee_amt;
		fee_amt_ind = 0;

		orig_fee_amt = fee_reduction->orig_fee_amt;
		orig_fee_amt_ind = 0;
	
		agency_rev_code = fee_reduction->agency_rev_code;
		agency_rev_code_ind = 0;
		
		if (0 != fee_reduction->fee_type[0] )
		{
			strcpy(fee_type, fee_reduction->fee_type);
			fee_type_ind = 0;
		}
		else
			fee_type_ind = -1;

		if (0 != fee_reduction->reduction_type )
		{
			reduction_type = fee_reduction->reduction_type;
			reduction_type_ind = 0;
		}
		else
			reduction_type_ind = -1;

#ifdef DEBUG
		userlog("insert_fee_reduce_info : Txn ser no - %d", txn_sr_no);
		userlog("insert_fee_reduce_info : Fee type - %s", fee_type);
		userlog("insert_fee_reduce_info : Fee amount - %f", fee_amt);
		userlog("insert_fee_reduce_info : Original fee amount - %f", orig_fee_amt);
		userlog("insert_fee_reduce_info : Agency rev code - %ld", agency_rev_code);
		userlog("insert_fee_reduce_info : Reduction type - %c", reduction_type);
#endif

	
		/* EXEC SQL INSERT INTO APPL_FEE_REDUCTION (APPLID, TXNSERNO, FEETYPE, ORIGFEEAMT, 
											FEEAMT, AGENCYREVNCODE, REDUCTIONTYPE)
			VALUES (:appl_id, :txn_sr_no:txn_sr_no_ind, :fee_type:fee_type_ind,
				:orig_fee_amt:orig_fee_amt_ind, :fee_amt:fee_amt_ind, 
				:agency_rev_code:agency_rev_code_ind, :reduction_type:reduction_type_ind); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 68;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPL_FEE_REDUCTION (APPLID,TXNSERNO,FEETYPE,ORI\
GFEEAMT,FEEAMT,AGENCYREVNCODE,REDUCTIONTYPE) values (:b0,:b1:b2,:b3:b4,:b5:b6,\
:b7:b8,:b9:b10,:b11:b12)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3352;
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
  sqlstm.sqhstv[1] = (         void  *)&txn_sr_no;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&txn_sr_no_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)fee_type;
  sqlstm.sqhstl[2] = (unsigned int  )4;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&fee_type_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&orig_fee_amt;
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&orig_fee_amt_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&fee_amt;
  sqlstm.sqhstl[4] = (unsigned int  )sizeof(float);
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&fee_amt_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&agency_rev_code;
  sqlstm.sqhstl[5] = (unsigned int  )sizeof(long);
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&agency_rev_code_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&reduction_type;
  sqlstm.sqhstl[6] = (unsigned int  )1;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&reduction_type_ind;
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


				 
		if(SQLCODE != 0 && SQLCODE != -1)
		{
#ifdef DEBUG
			userlog(" insert_fee_reduce_info : Insert into APPL_FEE_REDUCTION failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_fee_reduce_info: Insert into APPL_FEE_REDUCTION failed ");
			sprintf(excep_log.error_msg, "insert_fee_reduce_info: Insert into APPL_FEE_REDUCTION failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		}

#ifdef DEBUG
		userlog("insert_fee_reduce_info : Record %d inserted successfully", count + 1);
#endif

	}

	return SUCCESS;

}

/********************************************************************************/
/* Function name: insert_doc_srno_info											*/
/* Description	: This function inserts the Document serial no info into		*/
/*				  APPL_DOC_SERNO table											*/
/* Input		: Pointer to Appl doc srno info structure, Structure count		*/
/*                Application id												*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_doc_srno_info(APPL_DOC_SRNO_T *appl_doc_srno, char *application_id, int appl_doc_srno_cnt, char *kpt_number,void * ctx)
{

struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char appl_id[APP_ID_SIZE] = {0};
	char kpt_no[KPT_SIZE] = {0};
	/* varchar doc_type[DOC_NO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } doc_type
 = {0};

	/* varchar doc_srno[DOC_NO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } doc_srno
 = {0};

	char gscb_upd_flag = 0;
	/* varchar user_id[USER_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } user_id
 = {0};

	char branch_code[BRANCH_CODE_SIZE] = {0};
	char timestamp[DATE_TIME_SIZE] = {0};

	short doc_type_ind = -1;
	short doc_srno_ind = -1;
	short gscb_upd_flag_ind = -1;
	short user_id_ind = -1;
	short branch_code_ind = -1;
	short timestamp_ind = -1;
	short kpt_no_ind = -1;
	long cnt = 0;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


		int count = 0;
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	/* Populate the variables	*/

	strcpy(appl_id, application_id);

	if (strcmp(kpt_number, "") != 0)
	{
		strcpy(kpt_no, kpt_number);
		kpt_no_ind = 0;
	}

#ifdef DEBUG
	userlog("insert_doc_srno_info : Appl doc serial no count - %d", appl_doc_srno_cnt);
	userlog("insert_doc_srno_info : KPT no - %s", kpt_no);
#endif

	for (count = 0; count < appl_doc_srno_cnt; count++, appl_doc_srno++)
	{
	
		if (0 != appl_doc_srno->doc_type[0])
		{
			strcpy((char*)doc_type.arr, appl_doc_srno->doc_type);
			doc_type_ind = 0;
			setlen(doc_type);
		}
		else
			doc_type_ind = -1;


		if (0 != appl_doc_srno->doc_srno[0])
		{
			strcpy((char*)doc_srno.arr, appl_doc_srno->doc_srno);
			doc_srno_ind = 0;
			setlen(doc_srno);
		}
		else 
			doc_srno_ind = -1;

		if ('\0' != appl_doc_srno->gscb_upd_flag)
		{
			gscb_upd_flag = appl_doc_srno->gscb_upd_flag;
			gscb_upd_flag_ind = 0;
		}
		else 
			gscb_upd_flag_ind = -1;


		if (0 != appl_doc_srno->user_id[0])
		{
			strcpy((char*)user_id.arr, appl_doc_srno->user_id);
			user_id_ind = 0;
			setlen(user_id);
		}
		else 
			user_id_ind = -1;


		if (0 != appl_doc_srno->branch_code[0])
		{
			strcpy(branch_code, appl_doc_srno->branch_code);
			branch_code_ind = 0;
		}
		else 
			branch_code_ind = -1;

		if (0 != appl_doc_srno->timestamp[0])
		{
			strcpy(timestamp, appl_doc_srno->timestamp);
			timestamp_ind = 0;
		}
		else 
			timestamp_ind = -1;

	
#ifdef DEBUG
		userlog("insert_doc_srno_info : Appl id - %s", appl_id);
		userlog("insert_doc_srno_info : Doc ser no - %s", doc_srno.arr);
		userlog("insert_doc_srno_info : Doc type - %s", doc_type.arr);
		userlog("insert_doc_srno_info : GSCB upd flag - %c", gscb_upd_flag);
		userlog("insert_doc_srno_info : User id - %s", user_id.arr);
		userlog("insert_doc_srno_info : Branch code - %s", branch_code);
		userlog("insert_doc_srno_info : Timestamp - %s", timestamp);
		
#endif

	
		/* EXEC SQL INSERT INTO APPL_DOC_SERNO (APPLID, KPTNO, DOCTYPE, 
									DOCSERNO, GSCBUPDFLAG, USERID, BRANCHCODE, 
									TIMESTAMP)
		VALUES (:appl_id, :kpt_no:kpt_no_ind, :doc_type:doc_type_ind,
				:doc_srno:doc_srno_ind, :gscb_upd_flag:gscb_upd_flag_ind,
				:user_id:user_id_ind, :branch_code:branch_code_ind,
				TO_DATE(:timestamp:timestamp_ind, 'DDMMYYYY HH24MISS')); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 68;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into APPL_DOC_SERNO (APPLID,KPTNO,DOCTYPE,DOCSERNO,G\
SCBUPDFLAG,USERID,BRANCHCODE, timestamp ) values (:b0,:b1:b2,:b3:b4,:b5:b6,:b7\
:b8,:b9:b10,:b11:b12,TO_DATE(:b13:b14,'DDMMYYYY HH24MISS'))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3395;
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
  sqlstm.sqhstv[1] = (         void  *)kpt_no;
  sqlstm.sqhstl[1] = (unsigned int  )13;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&kpt_no_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&doc_type;
  sqlstm.sqhstl[2] = (unsigned int  )18;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&doc_type_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&doc_srno;
  sqlstm.sqhstl[3] = (unsigned int  )18;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&doc_srno_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&gscb_upd_flag;
  sqlstm.sqhstl[4] = (unsigned int  )1;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&gscb_upd_flag_ind;
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
  sqlstm.sqhstv[7] = (         void  *)timestamp;
  sqlstm.sqhstl[7] = (unsigned int  )16;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&timestamp_ind;
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


			 
		if(SQLCODE != 0 && SQLCODE != -1)
		{
		#ifdef DEBUG
			userlog(" insert_doc_srno_info : Insert into APPL_PROC failed : %s", SQLMSG);
		#endif
			strcpy(prog_log.remarks,"insert_doc_srno_info: Insert into APPL_PROC failed ");
			sprintf(excep_log.error_msg, "insert_doc_srno_info: Insert into APPL_PROC failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		}

#ifdef DEBUG
		userlog("insert_doc_srno_info : Record %d inserted successfully", count + 1);
#endif

	}

	return SUCCESS;

}

   /*  Added on 16th Feb 2005 for IJPN*/

/********************************************************************************/
/* Function name: insert_appl_missed_opex										*/
/* Description	: This function inserts the info into  APPL_MISSED_OPEX table	*/
/* Input		: Pointer to APPL_MISSED_OPEX_T structure, Structure count		*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_appl_missed_opex(APPL_MISSED_OPEX_T *appl_missed_opex, char appl_id[APP_ID_SIZE],void * ctx)
{
struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	/* varchar applid[APP_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[20]; } applid
 = {0};

	/* varchar idtype[ID_TYPE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } idtype
 = {0};
 
	/* varchar idnumber[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } idnumber
 = {0};

	/* varchar origname[ORIG_NAME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[151]; } origname
 = {0};

	/* varchar currlongname[CUR_LONG_NAME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[151]; } currlongname
 = {0};

	/* varchar currshortname1[CUR_SHORT_NAME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } currshortname1
 = {0};

	/* varchar currshortname2[CUR_SHORT_NAME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } currshortname2
 = {0};

	/* varchar gmpcshortname1[GMPC_SNAME1_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } gmpcshortname1
 = {0};

	/* varchar gmpcshortname2[GMPC_SNAME1_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } gmpcshortname2
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

	/* varchar postcode[POST_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[6]; } postcode
 = {0};

	int  citycode=0;
	/* varchar statecode[STATE_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } statecode
 = {0};

	/* varchar birthdate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } birthdate
 = {0};

	char unknownbirthind = '\0';
	int  birthdistrictcode = 0;
	char relegioncode = '\0';
	/* varchar racecode[RACE_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[5]; } racecode
 = {0};

	char gender = '\0';
	char hkind = '\0';
	char iccolorcode = '\0';
	/* varchar ktindcode[KT_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } ktindcode
 = {0};

	char residentstat = '\0';
	int  cardlostcnt=0;
	/* varchar lostcardissuedate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } lostcardissuedate
 = {0};

	/* varchar colourarticlecode[ARTICLE_COLOR_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } colourarticlecode
 = {0};

	/* varchar fatheridtype[ID_TYPE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } fatheridtype
 = {0};

	/* varchar fatheridno[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } fatheridno
 = {0};

	/* varchar motheridtype[ID_TYPE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } motheridtype
 = {0};

	/* varchar motheridno[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } motheridno
 = {0};
	
	/* varchar permitno[PERMITNO1_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[13]; } permitno
 = {0};

	/* varchar permitissuedate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } permitissuedate
 = {0};

	/* varchar immrefno[IMM_REFNO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } immrefno
 = {0};

	/* varchar immrefdate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } immrefdate
 = {0};

	/* varchar immexpirydate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } immexpirydate
 = {0};

	/* varchar passportno[PASSPORT_NO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } passportno
 = {0};

	/* varchar passportissuedate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } passportissuedate
 = {0};

	/* varchar passportisuuecountry[COUNTRY_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[5]; } passportisuuecountry
 = {0};

	/* varchar policeretiredate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } policeretiredate
 = {0};

	char orignameind = '\0';
	/* varchar kptno[KPT_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[13]; } kptno
 = {0};

	/* varchar militaryid[MILITARY_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[12]; } militaryid
 = {0};

	/* varchar policeid[POLICE_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[12]; } policeid
 = {0};

	/* varchar kppno[KPP_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } kppno
 = {0};

	char polmilitarycode = '\0';
	/* varchar polmilitaryjoindate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } polmilitaryjoindate
 = {0};

	/* varchar gmpcshortname3[GMPC_SNAME3_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } gmpcshortname3
 = {0};

	/* varchar citizenshipacqdate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } citizenshipacqdate
 = {0};

	/* varchar relationcode[RELATION_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } relationcode
 = {0};

	/* varchar sponsoridtype[ID_TYPE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } sponsoridtype
 = {0};

	/* varchar sponsoridno[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } sponsoridno
 = {0};

	/* varchar sponsorcurrlongname[SPONSER_CUR_LONG_NAME] = {0}; */ 
struct { unsigned short len; unsigned char arr[181]; } sponsorcurrlongname
 = {0};

	/* varchar birthstatecode[STATE_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } birthstatecode
 = {0};

	/* varchar birthplacecode[BIRTH_PLACE_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } birthplacecode
 = {0};

	/* varchar citizennationcode[COUNTRY_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[5]; } citizennationcode
 = {0};

	/* varchar ktstartdate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } ktstartdate
 = {0};

	/* varchar ktenddate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } ktenddate
 = {0};

	/* varchar ptissuedate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } ptissuedate
 = {0};

	/* varchar ptwno[PTWNO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } ptwno
 = {0};

	/* varchar birthregndate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } birthregndate
 = {0};
	
	
	short origname_ind = 0;
	short currlongname_ind = 0;
	short currshortname1_ind = 0;
	short currshortname2_ind = 0;
	short gmpcshortname2_ind = 0;
	short address2_ind = 0;
	short address3_ind = 0;
	short postcode_ind = 0;
	short citycode_ind = 0;
	short unknownbirthind_ind = 0;
	short birthdistrictcode_ind = 0;
	short hkind_ind = 0;
	short ktindcode_ind = 0;
	short cardlostcnt_ind = 0;
	short lostcardissuedate_ind = 0;
	short colourarticlecode_ind = 0;
	short fatheridtype_ind = 0;
	short fatheridno_ind = 0;
	short motheridtype_ind = 0;
	short motheridno_ind = 0;
	short permitno_ind = 0;
	short permitissuedate_ind = 0;
	short immrefno_ind = 0;
	short immrefdate_ind = 0;
	short immexpirydate_ind = 0;
	short passportno_ind = 0;
	short passportissuedate_ind = 0;
	short passportisuuecountry_ind = 0;
	short policeretiredate_ind = 0;
	short orignameind_ind = 0;
	short kptno_ind = 0;
	short militaryid_ind = 0;
	short policeid_ind = 0;
	short kppno_ind = 0;
	short polmilitarycode_ind = 0;
	short polmilitaryjoindate_ind = 0;
	short gmpcshortname3_ind = 0;
	short citizenshipacqdate_ind = 0;
	short relationcode_ind = 0;
	short sponsoridtype_ind = 0;
	short sponsoridno_ind = 0;
	short sponsorcurrlongname_ind = 0;
	short birthstatecode_ind = 0;
	short birthplacecode_ind = 0;
	short citizennationcode_ind = 0;
	short ktstartdate_ind = 0;
	short ktenddate_ind = 0;
	short ptissuedate_ind = 0;
	short ptwno_ind = 0;
	short birthregndate_ind = 0;	


	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int count = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN
	

	strcpy((char *)applid.arr, appl_id);
		setlen(applid);

	#ifdef DEBUG
		userlog("insert_appl_missed_opex : applid - %s", applid.arr);
	    userlog("insert_appl_missed_opex : idtype - %s", appl_missed_opex->idtype);
		userlog("insert_appl_missed_opex : idnumber - %s", appl_missed_opex->idnumber);
		userlog("insert_appl_missed_opex : origname - %s", appl_missed_opex->origname);
		userlog("insert_appl_missed_opex : currlongname - %s", appl_missed_opex->currlongname);
		userlog("insert_appl_missed_opex : currshortname1 - %s", appl_missed_opex->currshortname1);
		userlog("insert_appl_missed_opex : currshortname2 - %s", appl_missed_opex->currshortname2);
		userlog("insert_appl_missed_opex : gmpcshortname1 - %s", appl_missed_opex->gmpcshortname1);
		userlog("insert_appl_missed_opex : gmpcshortname2 - %s", appl_missed_opex->gmpcshortname2);
		userlog("insert_appl_missed_opex : address1 - %s", appl_missed_opex->address1);
		userlog("insert_appl_missed_opex : address2 - %s", appl_missed_opex->address2);		
		userlog("insert_appl_missed_opex : address3 - %s", appl_missed_opex->address3);
		userlog("insert_appl_missed_opex : postcode - %s", appl_missed_opex->postcode);
		userlog("insert_appl_missed_opex : citycode - %d", appl_missed_opex->citycode);
		userlog("insert_appl_missed_opex : statecode - %s", appl_missed_opex->statecode);
		userlog("insert_appl_missed_opex : birthdate - %s", appl_missed_opex->birthdate);
		userlog("insert_appl_missed_opex : unknownbirthind - %c", appl_missed_opex->unknownbirthind);
		userlog("insert_appl_missed_opex : birthdistrictcode - %d", appl_missed_opex->birthdistrictcode);
		userlog("insert_appl_missed_opex : relegioncode - %c", appl_missed_opex->relegioncode);		
		userlog("insert_appl_missed_opex : racecode - %s", appl_missed_opex->racecode);
		userlog("insert_appl_missed_opex : gender - %c", appl_missed_opex->gender);
		userlog("insert_appl_missed_opex : hkind - %c", appl_missed_opex->hkind);
		userlog("insert_appl_missed_opex : iccolorcode - %c", appl_missed_opex->iccolorcode);
		userlog("insert_appl_missed_opex : ktindcode - %s", appl_missed_opex->ktindcode);
		userlog("insert_appl_missed_opex : residentstat - %c", appl_missed_opex->residentstat);
		userlog("insert_appl_missed_opex : cardlostcnt - %d", appl_missed_opex->cardlostcnt);
		userlog("insert_appl_missed_opex : lostcardissuedate - %s", appl_missed_opex->lostcardissuedate);		
		userlog("insert_appl_missed_opex : colourarticlecode - %s", appl_missed_opex->colourarticlecode);
		userlog("insert_appl_missed_opex : fatheridtype - %s", appl_missed_opex->fatheridtype);
		userlog("insert_appl_missed_opex : fatheridno - %s", appl_missed_opex->fatheridno);  
		userlog("insert_appl_missed_opex : motheridtype - %s", appl_missed_opex->motheridtype);
		userlog("insert_appl_missed_opex : motheridno - %s", appl_missed_opex->motheridno);
		userlog("insert_appl_missed_opex : permitno - %s", appl_missed_opex->permitno);
		userlog("insert_appl_missed_opex : permitissuedate - %s", appl_missed_opex->permitissuedate);
		userlog("insert_appl_missed_opex : immrefno - %s", appl_missed_opex->immrefno);		
		userlog("insert_appl_missed_opex : immrefdate - %s", appl_missed_opex->immrefdate);
		userlog("insert_appl_missed_opex : immexpirydate - %s", appl_missed_opex->immexpirydate);
		userlog("insert_appl_missed_opex : passportno - %s", appl_missed_opex->passportno);		
		userlog("insert_appl_missed_opex : passportissuedate - %s", appl_missed_opex->passportissuedate);
		userlog("insert_appl_missed_opex : passportisuuecountry - %s", appl_missed_opex->passportisuuecountry);
		userlog("insert_appl_missed_opex : policeretiredate - %s", appl_missed_opex->policeretiredate);
		userlog("insert_appl_missed_opex : orignameind - %c", appl_missed_opex->orignameind);
		userlog("insert_appl_missed_opex : kptno - %s", appl_missed_opex->kptno);		
		userlog("insert_appl_missed_opex : militaryid - %s", appl_missed_opex->militaryid);
		userlog("insert_appl_missed_opex : policeid - %s", appl_missed_opex->policeid);
		userlog("insert_appl_missed_opex : kppno - %s", appl_missed_opex->kppno);
		userlog("insert_appl_missed_opex : polmilitarycode - %c", appl_missed_opex->polmilitarycode);
		userlog("insert_appl_missed_opex : polmilitaryjoindate - %s", appl_missed_opex->polmilitaryjoindate);
		userlog("insert_appl_missed_opex : gmpcshortname3 - %s", appl_missed_opex->gmpcshortname3);
		userlog("insert_appl_missed_opex : citizenshipacqdate - %s", appl_missed_opex->citizenshipacqdate);
		userlog("insert_appl_missed_opex : relationcode - %s", appl_missed_opex->relationcode);
		userlog("insert_appl_missed_opex : sponsoridtype - %s", appl_missed_opex->sponsoridtype);
		userlog("insert_appl_missed_opex : sponsoridno - %s", appl_missed_opex->sponsoridno);
		userlog("insert_appl_missed_opex : sponsorcurrlongname - %s", appl_missed_opex->sponsorcurrlongname);
		userlog("insert_appl_missed_opex : birthstatecode - %s", appl_missed_opex->birthstatecode);		
		userlog("insert_appl_missed_opex : birthplacecode - %s", appl_missed_opex->birthplacecode);
		userlog("insert_appl_missed_opex : citizennationcode - %s", appl_missed_opex->citizennationcode);
		userlog("insert_appl_missed_opex : ktstartdate - %s", appl_missed_opex->ktstartdate);
		userlog("insert_appl_missed_opex : ktenddate - %s", appl_missed_opex->ktenddate);
		userlog("insert_appl_missed_opex : ptissuedate - %s", appl_missed_opex->ptissuedate);
		userlog("insert_appl_missed_opex : ptwno - %s", appl_missed_opex->ptwno);
		userlog("insert_appl_missed_opex : birthregndate - %s", appl_missed_opex->birthregndate);
	#endif


	setnull(idtype);
	strcpy((char*)idtype.arr, appl_missed_opex->idtype);
	setlen(idtype);

	setnull(idnumber);
	strcpy((char*)idnumber.arr, appl_missed_opex->idnumber);
	setlen(idnumber);
	

       if(appl_missed_opex->origname[0] == '\0')	
		{	
			origname_ind = -1;	
		}	
	  else 	
		{	setnull(origname);
		    strcpy((char *)origname.arr, appl_missed_opex->origname);	
			setlen(origname);
		}

		if(appl_missed_opex->currlongname[0] == '\0')	
		{	
			currlongname_ind = -1;	
		}	
	  else 	
		{	setnull(currlongname);
		    strcpy((char*)currlongname.arr, appl_missed_opex->currlongname);
			setlen(currlongname);
		}
	
		if(appl_missed_opex->currshortname1[0] == '\0')	
		{	
			currshortname1_ind = -1;	
		}	
	  else 	
		{	setnull(currshortname1);
		    strcpy((char*)currshortname1.arr, appl_missed_opex->currshortname1);
			setlen(currshortname1);
		}

		if(appl_missed_opex->currshortname2[0] == '\0')	
		{	
			currshortname2_ind = -1;	
		}	
	  else 	
		{	setnull(currshortname2);
		    strcpy((char*)currshortname2.arr, appl_missed_opex->currshortname2);	
			setlen(currshortname2);
		}

		setnull(gmpcshortname1);
	    strcpy((char*)gmpcshortname1.arr, appl_missed_opex->gmpcshortname1);
		setlen(gmpcshortname1);
	

		if(appl_missed_opex->gmpcshortname2[0] == '\0')	
		{	
			gmpcshortname2_ind = -1;	
		}	
	  else 	
		{	setnull(gmpcshortname2);
		    strcpy((char*)gmpcshortname2.arr, appl_missed_opex->gmpcshortname2);
			setlen(gmpcshortname2);
		}

		setnull(address1);
	    strcpy((char*)address1.arr, appl_missed_opex->address1);	
		setlen(address1);
	
		
		if(appl_missed_opex->address2[0] == '\0')	
		{	
			address2_ind = -1;	
		}	
	  else 	
		{	setnull(address2);
		    strcpy((char*)address2.arr, appl_missed_opex->address2);
			setlen(address2);
		}

		if(appl_missed_opex->address3[0] == '\0')	
		{	
			address3_ind = -1;	
		}	
	  else 	
		{	setnull(address3);
		    strcpy((char *)address3.arr, appl_missed_opex->address3);
			setlen(address3);
		}
	
		if(appl_missed_opex->postcode[0] == '\0')	
		{	
			postcode_ind = -1;	
		}	
	  else 	
		{	setnull(postcode);
		    strcpy((char*)postcode.arr, appl_missed_opex->postcode);
			setlen(postcode);
		}
		
		if(appl_missed_opex->citycode < 0)	
		{	
			citycode_ind = -1;	
		}	
	  else 	
		{	
		    citycode = appl_missed_opex->citycode;	
		}
		
		setnull(statecode);
	    strcpy((char*)statecode.arr, appl_missed_opex->statecode);
			setlen(statecode);
			setnull(birthdate);
	    strcpy((char*)birthdate.arr, appl_missed_opex->birthdate);	
		  setlen(birthdate);
	
		if(appl_missed_opex->unknownbirthind == '\0')
		{
			unknownbirthind = '\0';
			unknownbirthind_ind = -1;
		}
		else
		{
		  unknownbirthind = appl_missed_opex->unknownbirthind;
		}

		if(appl_missed_opex->birthdistrictcode < 0)	
		{	
			birthdistrictcode_ind = -1;	
		}	
	  else 	
		{	
		    birthdistrictcode = appl_missed_opex->birthdistrictcode;	
		}
	  		
	   	
		
	   relegioncode = appl_missed_opex->relegioncode;	
	
	   setnull(racecode);
	   strcpy((char*)racecode.arr, appl_missed_opex->racecode);
		setlen(racecode);
			
	   gender =  appl_missed_opex->gender;	
		

		if((appl_missed_opex->hkind == '\0') && (appl_missed_opex->hkind == ' '))
		{	
			hkind_ind = -1;	
		}	
	  else 	
		{	
		    hkind =  appl_missed_opex->hkind;	
		}
	
	
	    iccolorcode =  appl_missed_opex->iccolorcode;	
		

	if(appl_missed_opex->ktindcode[0] == '\0')	
		{	
			ktindcode_ind = -1;	
		}	
	  else 	
		{	setnull(ktindcode);
		    strcpy((char*)ktindcode.arr, appl_missed_opex->ktindcode);	
				setlen(ktindcode);
		}

	
	    residentstat =  appl_missed_opex->residentstat;	
	
		if(appl_missed_opex->cardlostcnt < 0)	
		{	
			cardlostcnt_ind = -1;	
		}	
	  else 	
		{	
		    cardlostcnt =  appl_missed_opex->cardlostcnt;	
		}	
	
	if(appl_missed_opex->lostcardissuedate[0] == '\0')	
		{	
			lostcardissuedate_ind = -1;	
		}	
	  else 	
		{	setnull(lostcardissuedate);
		    strcpy((char*)lostcardissuedate.arr, appl_missed_opex->lostcardissuedate);
			  setlen(lostcardissuedate);
		}

		if(appl_missed_opex->colourarticlecode[0] == '\0')	
		{	
			colourarticlecode_ind = -1;	
		}	
	  else 	
		{	setnull(colourarticlecode);
		    strcpy((char*)colourarticlecode.arr, appl_missed_opex->colourarticlecode);	
				setlen(colourarticlecode);
		}


		if(appl_missed_opex->fatheridtype[0] == '\0')	
		{	
			fatheridtype_ind = -1;	
		}	
	  else 	
		{	setnull(fatheridtype);
		    strcpy((char*)fatheridtype.arr, appl_missed_opex->fatheridtype);	
				setlen(fatheridtype);
		}
	
	if(appl_missed_opex->fatheridno[0] == '\0')	
		{	
			fatheridno_ind = -1;	
		}	
	  else 	
		{	setnull(fatheridno);
		    strcpy((char*)fatheridno.arr, appl_missed_opex->fatheridno);
				setlen(fatheridno);
		}


		if(appl_missed_opex->motheridtype[0] == '\0')	
		{	
			motheridtype_ind = -1;	
		}	
	  else 	
		{	setnull(motheridtype);
		    strcpy((char*)motheridtype.arr, appl_missed_opex->motheridtype);
				setlen(motheridtype);
		}

		if(appl_missed_opex->motheridno[0] == '\0')	
		{	
			motheridno_ind = -1;	
		}	
	  else 	
		{	setnull(motheridno);
		    strcpy((char*)motheridno.arr, appl_missed_opex->motheridno);
				setlen(motheridno);
		}


		if(appl_missed_opex->permitno[0] == '\0')	
		{	
			permitno_ind = -1;	
		}	
	  else 	
		{	setnull(permitno);
		    strcpy((char*)permitno.arr, appl_missed_opex->permitno);
				setlen(permitno);
		}

		if(appl_missed_opex->permitissuedate[0] == '\0')	
		{	
			permitissuedate_ind = -1;	
		}	
	  else 	
		{	setnull(permitissuedate);
		    strcpy((char*)permitissuedate.arr, appl_missed_opex->permitissuedate);
			  setlen(permitissuedate);
		}


		if(appl_missed_opex->immrefno[0] == '\0')	
		{	
			immrefno_ind = -1;	
		}	
	  else 	
		{	setnull(immrefno);
		    strcpy((char*)immrefno.arr, appl_missed_opex->immrefno);
				setlen(immrefno);
		}

		if(appl_missed_opex->immrefdate[0] == '\0')	
		{	
			immrefdate_ind = -1;	
		}	
	  else 	
		{	setnull(immrefdate);
		    strcpy((char*)immrefdate.arr, appl_missed_opex->immrefdate);
			  setlen(immrefdate);
		}


		if(appl_missed_opex->immexpirydate[0] == '\0')	
		{	
			immexpirydate_ind = -1;	
		}	
	  else 	
		{	setnull(immexpirydate);
		    strcpy((char*)immexpirydate.arr, appl_missed_opex->immexpirydate);
			  setlen(immexpirydate);
		}

	if(appl_missed_opex->passportno[0] == '\0')	
		{	
			passportno_ind = -1;	
		}	
	  else 	
		{	setnull(passportno);
		    strcpy((char*)passportno.arr, appl_missed_opex->passportno);
				setlen(passportno);
		}


		if(appl_missed_opex->passportissuedate[0] == '\0')	
		{	
			passportissuedate_ind = -1;	
		}	
	  else 	
		{	setnull(passportissuedate);
		    strcpy((char*)passportissuedate.arr, appl_missed_opex->passportissuedate);
			  setlen(passportissuedate);
		}

		if(appl_missed_opex->passportisuuecountry[0] == '\0')	
		{	
			passportisuuecountry_ind = -1;	
		}	
	  else 	
		{	setnull(passportisuuecountry);
		    strcpy((char*)passportisuuecountry.arr, appl_missed_opex->passportisuuecountry);
				setlen(passportisuuecountry);
		}
	
		if(appl_missed_opex->policeretiredate[0] == '\0')	
		{	
			policeretiredate_ind = -1;	
		}	
	  else 	
		{	setnull(policeretiredate);
		    strcpy((char*)policeretiredate.arr, appl_missed_opex->policeretiredate);
			  setlen(policeretiredate);
		}

		if((appl_missed_opex->orignameind == '\0') && (appl_missed_opex->orignameind == ' '))
		{	
			orignameind = -1;	
		}	
	  else 	
		{	
		    orignameind =  appl_missed_opex->orignameind;	
		}
	if(appl_missed_opex->kptno[0] == '\0')	
		{	
			kptno_ind = -1;	
		}	
	  else 	
		{	setnull(kptno);
		    strcpy((char*)kptno.arr, appl_missed_opex->kptno);
				setlen(kptno);
		}

	if(appl_missed_opex->militaryid[0] == '\0')	
		{	
			militaryid_ind = -1;	
		}	
	  else 	
		{	setnull(militaryid);
		    strcpy((char*)militaryid.arr, appl_missed_opex->militaryid);
				setlen(militaryid);
		}

	   if(appl_missed_opex->policeid[0] == '\0')	
		{	
			policeid_ind = -1;	
		}	
	  else 	
		{	setnull(policeid);
		    strcpy((char*)policeid.arr, appl_missed_opex->policeid);
				setlen(policeid);
		}

		if(appl_missed_opex->kppno[0] == '\0')	
		{	
			kppno_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)kppno.arr, appl_missed_opex->kppno);
				setlen(kppno);
		}

		if(appl_missed_opex->polmilitarycode == '\0')	
		{	
			polmilitarycode_ind = -1;	
		}	
	  else 	
		{	
		    polmilitarycode = appl_missed_opex->polmilitarycode;	
		}


		if(appl_missed_opex->polmilitaryjoindate[0] == '\0')	
		{	
			polmilitaryjoindate_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)polmilitaryjoindate.arr, appl_missed_opex->polmilitaryjoindate);
			  setlen(polmilitaryjoindate);
		}

		if(appl_missed_opex->gmpcshortname3[0] == '\0')	
		{	
			gmpcshortname3_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)gmpcshortname3.arr, appl_missed_opex->gmpcshortname3);
			 setlen(gmpcshortname3);
		}

		if(appl_missed_opex->citizenshipacqdate[0] == '\0')	
		{	
			citizenshipacqdate_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)citizenshipacqdate.arr, appl_missed_opex->citizenshipacqdate);
			  setlen(citizenshipacqdate);
		}

		if(appl_missed_opex->relationcode[0] == '\0')	
		{	
			relationcode_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)relationcode.arr, appl_missed_opex->relationcode);	
				setlen(relationcode);
		}
	
		if(appl_missed_opex->sponsoridtype[0] == '\0')	
		{	
			sponsoridtype_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)sponsoridtype.arr, appl_missed_opex->sponsoridtype);	
				setlen(sponsoridtype);
		}

		if(appl_missed_opex->sponsoridno[0] == '\0')	
		{	
			sponsoridno_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)sponsoridno.arr, appl_missed_opex->sponsoridno);	
				setlen(sponsoridno);
		}
		
		if(appl_missed_opex->sponsorcurrlongname[0] == '\0')	
		{	
			sponsorcurrlongname_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)sponsorcurrlongname.arr, appl_missed_opex->sponsorcurrlongname);
			 setlen(sponsorcurrlongname);
		}
	
	    if(appl_missed_opex->birthstatecode[0] == '\0')	
		{	
			birthstatecode_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)birthstatecode.arr, appl_missed_opex->birthstatecode);
				setlen(birthstatecode);
		}

		if(appl_missed_opex->birthplacecode[0] == '\0')	
		{	
			birthplacecode_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)birthplacecode.arr, appl_missed_opex->birthplacecode);
				setlen(birthplacecode);
		}
	
	   if(appl_missed_opex->citizennationcode[0] == '\0')	
		{	
			citizennationcode_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)citizennationcode.arr, appl_missed_opex->citizennationcode);	
				setlen(citizennationcode);
		}

		if(appl_missed_opex->ktstartdate[0] == '\0')	
		{	
			ktstartdate_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)ktstartdate.arr, appl_missed_opex->ktstartdate);
			  setlen(ktstartdate);
		}
	
	if(appl_missed_opex->ktenddate[0] == '\0')	
		{	
			ktenddate_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)ktenddate.arr, appl_missed_opex->ktenddate);
			  setlen(ktenddate);
		}

		if(appl_missed_opex->ptissuedate[0] == '\0')	
		{	
			ptissuedate_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)ptissuedate.arr, appl_missed_opex->ptissuedate);
			  setlen(ptissuedate);
		}
	if(appl_missed_opex->ptwno[0] == '\0')	
		{	
			ptwno_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)ptwno.arr, appl_missed_opex->ptwno);	
				setlen(ptwno);
		}

		if(appl_missed_opex->birthregndate[0] == '\0')	
		{	
			birthregndate_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)birthregndate.arr, appl_missed_opex->birthregndate);
			  setlen(birthregndate);
		}

	
#ifdef DEBUG
		userlog(" ");
		userlog("insert_appl_missed_opex : idtype - %s", idtype.arr);
		userlog("insert_appl_missed_opex : idnumber - %s", idnumber.arr);
		userlog("insert_appl_missed_opex : origname - %s", origname.arr);
		userlog("insert_appl_missed_opex : currlongname - %s", currlongname.arr);
		userlog("insert_appl_missed_opex : currshortname1 - %s", currshortname1.arr);
		userlog("insert_appl_missed_opex : currshortname2 - %s", currshortname2.arr);
		userlog("insert_appl_missed_opex : gmpcshortname1 - %s", gmpcshortname1.arr);
		userlog("insert_appl_missed_opex : gmpcshortname2 - %s", gmpcshortname2.arr);
		userlog("insert_appl_missed_opex : address1 - %s", address1.arr);
		userlog("insert_appl_missed_opex : address2 - %s", address2.arr);		
		userlog("insert_appl_missed_opex : address3 - %s", address3.arr);
		userlog("insert_appl_missed_opex : postcode - %s", postcode.arr);
		userlog("insert_appl_missed_opex : citycode - %d", citycode);
		userlog("insert_appl_missed_opex : statecode - %s", statecode.arr);
		userlog("insert_appl_missed_opex : birthdate - %s", birthdate.arr);
		userlog("insert_appl_missed_opex : unknownbirthind - %c", unknownbirthind);
		userlog("insert_appl_missed_opex : birthdistrictcode - %d", birthdistrictcode);
		userlog("insert_appl_missed_opex : relegioncode - %c", relegioncode);		
		userlog("insert_appl_missed_opex : racecode - %s", racecode.arr);
		userlog("insert_appl_missed_opex : gender - %c", gender);
		userlog("insert_appl_missed_opex : hkind - %c", hkind);
		userlog("insert_appl_missed_opex : iccolorcode - %c", iccolorcode);
		userlog("insert_appl_missed_opex : ktindcode - %s", ktindcode.arr);
		userlog("insert_appl_missed_opex : residentstat - %c", residentstat);
		userlog("insert_appl_missed_opex : cardlostcnt - %d", cardlostcnt);
		userlog("insert_appl_missed_opex : lostcardissuedate - %s", lostcardissuedate.arr);		
		userlog("insert_appl_missed_opex : colourarticlecode - %s", colourarticlecode.arr);
		userlog("insert_appl_missed_opex : fatheridtype - %s", fatheridtype.arr);
		userlog("insert_appl_missed_opex : fatheridno - %s", fatheridno.arr);  
		userlog("insert_appl_missed_opex : motheridtype - %s", motheridtype.arr);
		userlog("insert_appl_missed_opex : motheridno - %s", motheridno.arr);
		userlog("insert_appl_missed_opex : permitno - %s", permitno.arr);
		userlog("insert_appl_missed_opex : permitissuedate - %s", permitissuedate.arr);
		userlog("insert_appl_missed_opex : immrefno - %s", immrefno.arr);		
		userlog("insert_appl_missed_opex : immrefdate - %s", immrefdate.arr);
		userlog("insert_appl_missed_opex : immexpirydate - %s", immexpirydate.arr);
		userlog("insert_appl_missed_opex : passportno - %s", passportno.arr);		
		userlog("insert_appl_missed_opex : passportissuedate - %s", passportissuedate.arr);
		userlog("insert_appl_missed_opex : passportisuuecountry - %s", passportisuuecountry.arr);
		userlog("insert_appl_missed_opex : policeretiredate - %s", policeretiredate.arr);
		userlog("insert_appl_missed_opex : orignameind - %c", orignameind);
		userlog("insert_appl_missed_opex : kptno - %s", kptno.arr);		
		userlog("insert_appl_missed_opex : militaryid - %s", militaryid.arr);
		userlog("insert_appl_missed_opex : policeid - %s", policeid.arr);
		userlog("insert_appl_missed_opex : kppno - %s", kppno.arr);
		userlog("insert_appl_missed_opex : polmilitarycode - %c", polmilitarycode);
		userlog("insert_appl_missed_opex : polmilitaryjoindate - %s", polmilitaryjoindate.arr);
		userlog("insert_appl_missed_opex : gmpcshortname3 - %s", gmpcshortname3.arr);
		userlog("insert_appl_missed_opex : citizenshipacqdate - %s", citizenshipacqdate.arr);
		userlog("insert_appl_missed_opex : relationcode - %s", relationcode.arr);
		userlog("insert_appl_missed_opex : sponsoridtype - %s", sponsoridtype.arr);
		userlog("insert_appl_missed_opex : sponsoridno - %s", sponsoridno.arr);
		userlog("insert_appl_missed_opex : sponsorcurrlongname - %s", sponsorcurrlongname.arr);
		userlog("insert_appl_missed_opex : birthstatecode - %s", birthstatecode.arr);		
		userlog("insert_appl_missed_opex : birthplacecode - %s", birthplacecode.arr);
		userlog("insert_appl_missed_opex : citizennationcode - %s", citizennationcode.arr);
		userlog("insert_appl_missed_opex : ktstartdate - %s", ktstartdate.arr);
		userlog("insert_appl_missed_opex : ktenddate - %s", ktenddate.arr);
		userlog("insert_appl_missed_opex : ptissuedate - %s", ptissuedate.arr);
		userlog("insert_appl_missed_opex : ptwno - %s", ptwno.arr);
		userlog("insert_appl_missed_opex : birthregndate - %s", birthregndate.arr);
		userlog(" ");
		
#endif
userlog("insert_appl_missed_opex : Before Insert");
	
		/* EXEC SQL INSERT INTO APPL_MISSED_OPEX(
		APPLID, IDTYPE, IDNUMBER, ORIGNAME, CURRLONGNAME, 
		CURRSHORTNAME1, CURRSHORTNAME2, 
		GMPCSHORTNAME1, GMPCSHORTNAME2, ADDRESS1, ADDRESS2, 
		ADDRESS3, POSTCODE, CITYCODE, STATECODE, 
		BIRTHDATE, 
		UNKNOWNBIRTHIND, BIRTHDISTRICTCODE, 
		RELIGIONCODE, RACECODE, GENDER, HKIND, ICCOLORCODE, KTINDCODE, 
		RESIDENTSTAT, CARDLOSTCNT, LASTCARDISSUEDATE, 
		COLOURARTICLECODE, 
		FATHERIDTYPE, FATHERIDNO, MOTHERIDTYPE, 
		MOTHERIDNO, PERMITNO, PERMITISSUEDATE, 
		IMMREFNO, IMMREFDATE, 
		IMMEXPIRYDATE, 
		PASSPORTNO, PASSPORTISSUEDATE, 
		PASSPORTISSUECOUNTRY, POLICERETIREDATE, 
		ORIGNAMEIND, KPTNO, MILITARYID, 
		POLICEID, KPPNO, POLMILITARYCODE, 
		POLMILITARYJOINDATE, GMPCSHORTNAME3, 
		CITIZENSHIPACQDATE, RELATIONCODE, 
		SPONSORIDTYPE, SPONSORIDNO, 
		SPONSORCURRLONGNAME, BIRTHSTATECODE, 
		BIRTHPLACECODE, CITIZENNATIONCODE, 
		KTSTARTDATE, KTENDDATE, 
		PTISSUEDATE, PTWNO, BIRTHREGNDATE
		)
		VALUES(
        :applid,:idtype,:idnumber,:origname:origname_ind,:currlongname:currlongname_ind,
        :currshortname1:currshortname1_ind,:currshortname2:currshortname2_ind,       
        :gmpcshortname1,:gmpcshortname2:gmpcshortname2_ind,:address1,:address2:address2_ind,
		:address3:address3_ind,:postcode:postcode_ind,:citycode:citycode_ind,:statecode,
		TO_DATE(:birthdate,'DDMMYYYY'),
		:unknownbirthind:unknownbirthind_ind,:birthdistrictcode:birthdistrictcode_ind,
		:relegioncode,:racecode,:gender,:hkind:hkind_ind,:iccolorcode,:ktindcode:ktindcode_ind,
		:residentstat,:cardlostcnt:cardlostcnt_ind,TO_DATE(:lostcardissuedate:lostcardissuedate_ind,'DDMMYYYY'),
		:colourarticlecode:colourarticlecode_ind,
		:fatheridtype:fatheridtype_ind,:fatheridno:fatheridno_ind,:motheridtype:motheridtype_ind,
		:motheridno:motheridno_ind,:permitno:permitno_ind,TO_DATE(:permitissuedate:permitissuedate_ind,'DDMMYYYY'),
		:immrefno:immrefno_ind,TO_DATE(:immrefdate:immrefdate_ind,'DDMMYYYY'),
		TO_DATE(:immexpirydate:immexpirydate_ind,'DDMMYYYY'),
		:passportno:passportno_ind,TO_DATE(:passportissuedate:passportissuedate_ind,'DDMMYYYY'),
		:passportisuuecountry:passportisuuecountry_ind,TO_DATE(:policeretiredate:policeretiredate_ind,'DDMMYYYY'),
		:orignameind:orignameind_ind,:kptno:kptno_ind,:militaryid:militaryid_ind,
		:policeid:policeid_ind,:kppno:kppno_ind,:polmilitarycode:polmilitarycode_ind,
		TO_DATE(:polmilitaryjoindate:polmilitaryjoindate_ind,'DDMMYYYY'),:gmpcshortname3:gmpcshortname3_ind,
		TO_DATE(:citizenshipacqdate:citizenshipacqdate_ind,'DDMMYYYY'),:relationcode:relationcode_ind,
		:sponsoridtype:sponsoridtype_ind,:sponsoridno:sponsoridno_ind,
		:sponsorcurrlongname:sponsorcurrlongname_ind,:birthstatecode:birthstatecode_ind,
		:birthplacecode:birthplacecode_ind,:citizennationcode:citizennationcode_ind,
		TO_DATE(:ktstartdate:ktstartdate_ind,'DDMMYYYY'),TO_DATE(:ktenddate:ktenddate_ind,'DDMMYYYY'),
		TO_DATE(:ptissuedate:ptissuedate_ind,'DDMMYYYY'),:ptwno:ptwno_ind,TO_DATE(:birthregndate:birthregndate_ind,'DDMMYYYY')); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 68;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlbuft(&pcCtx,
    "insert into APPL_MISSED_OPEX (APPLID,IDTYPE,IDNUMBER,ORIGNAME,CURRLONGN\
AME,CURRSHORTNAME1,CURRSHORTNAME2,GMPCSHORTNAME1,GMPCSHORTNAME2,ADDRESS1,ADD\
RESS2,ADDRESS3,POSTCODE,CITYCODE,STATECODE,BIRTHDATE,UNKNOWNBIRTHIND,BIRTHDI\
STRICTCODE,RELIGIONCODE,RACECODE,GENDER,HKIND,ICCOLORCODE,KTINDCODE,RESIDENT\
STAT,CARDLOSTCNT,LASTCARDISSUEDATE,COLOURARTICLECODE,FATHERIDTYPE,FATHERIDNO\
,MOTHERIDTYPE,MOTHERIDNO,PERMITNO,PERMITISSUEDATE,IMMREFNO,IMMREFDATE,IMMEXP\
IRYDATE,PASSPORTNO,PASSPORTISSUEDATE,PASSPORTISSUECOUNTRY,POLICERETIREDATE,O\
RIGNAMEIND,KPTNO,MILITARYID,POLICEID,KPPNO,POLMILITARYCODE,POLMILITARYJOINDA\
TE,GMPCSHORTNAME3,CITIZENSHIPACQDATE,RELATIONCODE,SPONSORIDTYPE,SPONSORIDNO,\
SPONSORCURRLONGNAME,BIRTHSTATECODE,BIRTHPLACECODE,CITIZENNATIONCODE,KTSTARTD\
ATE,KTENDDATE,PTISSUEDATE,PTWNO,BIRTHREGNDATE) values (:b0,:b1,:b2,:b3:b4,:b\
5:b6,:b7:b8,:b9:b10,:b11,:b12:b13,:b14,:b15:b16,:b17:b18,:b19:b20,:b21:b22,:\
b23,TO_DATE(:b24,'DDMMYYYY'),:b25:b26,:b27:b28,:b29,:b30,:b31,:b32:b33,:b34,\
:b35:b36,:b37,:b38:b39,TO_DATE(:b40:b41,'");
  sqlstm.stmt = "DDMMYYYY'),:b42:b43,:b44:b45,:b46:b47,:b48:b49,:b50:b51,:b5\
2:b53,TO_DATE(:b54:b55,'DDMMYYYY'),:b56:b57,TO_DATE(:b58:b59,'DDMMYYYY'),TO_DA\
TE(:b60:b61,'DDMMYYYY'),:b62:b63,TO_DATE(:b64:b65,'DDMMYYYY'),:b66:b67,TO_DATE\
(:b68:b69,'DDMMYYYY'),:b70:b71,:b72:b73,:b74:b75,:b76:b77,:b78:b79,:b80:b81,TO\
_DATE(:b82:b83,'DDMMYYYY'),:b84:b85,TO_DATE(:b86:b87,'DDMMYYYY'),:b88:b89,:b90\
:b91,:b92:b93,:b94:b95,:b96:b97,:b98:b99,:b100:b101,TO_DATE(:b102:b103,'DDMMYY\
YY'),TO_DATE(:b104:b105,'DDMMYYYY'),TO_DATE(:b106:b107,'DDMMYYYY'),:b108:b109,\
TO_DATE(:b110:b111,'DDMMYYYY'))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3442;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&applid;
  sqlstm.sqhstl[0] = (unsigned int  )22;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&idtype;
  sqlstm.sqhstl[1] = (unsigned int  )5;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&idnumber;
  sqlstm.sqhstl[2] = (unsigned int  )18;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&origname;
  sqlstm.sqhstl[3] = (unsigned int  )153;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&origname_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&currlongname;
  sqlstm.sqhstl[4] = (unsigned int  )153;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&currlongname_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&currshortname1;
  sqlstm.sqhstl[5] = (unsigned int  )23;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&currshortname1_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&currshortname2;
  sqlstm.sqhstl[6] = (unsigned int  )23;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&currshortname2_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&gmpcshortname1;
  sqlstm.sqhstl[7] = (unsigned int  )33;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&gmpcshortname2;
  sqlstm.sqhstl[8] = (unsigned int  )33;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&gmpcshortname2_ind;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&address1;
  sqlstm.sqhstl[9] = (unsigned int  )33;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)0;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&address2;
  sqlstm.sqhstl[10] = (unsigned int  )33;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)&address2_ind;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)&address3;
  sqlstm.sqhstl[11] = (unsigned int  )33;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)&address3_ind;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqhstv[12] = (         void  *)&postcode;
  sqlstm.sqhstl[12] = (unsigned int  )8;
  sqlstm.sqhsts[12] = (         int  )0;
  sqlstm.sqindv[12] = (         void  *)&postcode_ind;
  sqlstm.sqinds[12] = (         int  )0;
  sqlstm.sqharm[12] = (unsigned int  )0;
  sqlstm.sqadto[12] = (unsigned short )0;
  sqlstm.sqtdso[12] = (unsigned short )0;
  sqlstm.sqhstv[13] = (         void  *)&citycode;
  sqlstm.sqhstl[13] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[13] = (         int  )0;
  sqlstm.sqindv[13] = (         void  *)&citycode_ind;
  sqlstm.sqinds[13] = (         int  )0;
  sqlstm.sqharm[13] = (unsigned int  )0;
  sqlstm.sqadto[13] = (unsigned short )0;
  sqlstm.sqtdso[13] = (unsigned short )0;
  sqlstm.sqhstv[14] = (         void  *)&statecode;
  sqlstm.sqhstl[14] = (unsigned int  )5;
  sqlstm.sqhsts[14] = (         int  )0;
  sqlstm.sqindv[14] = (         void  *)0;
  sqlstm.sqinds[14] = (         int  )0;
  sqlstm.sqharm[14] = (unsigned int  )0;
  sqlstm.sqadto[14] = (unsigned short )0;
  sqlstm.sqtdso[14] = (unsigned short )0;
  sqlstm.sqhstv[15] = (         void  *)&birthdate;
  sqlstm.sqhstl[15] = (unsigned int  )11;
  sqlstm.sqhsts[15] = (         int  )0;
  sqlstm.sqindv[15] = (         void  *)0;
  sqlstm.sqinds[15] = (         int  )0;
  sqlstm.sqharm[15] = (unsigned int  )0;
  sqlstm.sqadto[15] = (unsigned short )0;
  sqlstm.sqtdso[15] = (unsigned short )0;
  sqlstm.sqhstv[16] = (         void  *)&unknownbirthind;
  sqlstm.sqhstl[16] = (unsigned int  )1;
  sqlstm.sqhsts[16] = (         int  )0;
  sqlstm.sqindv[16] = (         void  *)&unknownbirthind_ind;
  sqlstm.sqinds[16] = (         int  )0;
  sqlstm.sqharm[16] = (unsigned int  )0;
  sqlstm.sqadto[16] = (unsigned short )0;
  sqlstm.sqtdso[16] = (unsigned short )0;
  sqlstm.sqhstv[17] = (         void  *)&birthdistrictcode;
  sqlstm.sqhstl[17] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[17] = (         int  )0;
  sqlstm.sqindv[17] = (         void  *)&birthdistrictcode_ind;
  sqlstm.sqinds[17] = (         int  )0;
  sqlstm.sqharm[17] = (unsigned int  )0;
  sqlstm.sqadto[17] = (unsigned short )0;
  sqlstm.sqtdso[17] = (unsigned short )0;
  sqlstm.sqhstv[18] = (         void  *)&relegioncode;
  sqlstm.sqhstl[18] = (unsigned int  )1;
  sqlstm.sqhsts[18] = (         int  )0;
  sqlstm.sqindv[18] = (         void  *)0;
  sqlstm.sqinds[18] = (         int  )0;
  sqlstm.sqharm[18] = (unsigned int  )0;
  sqlstm.sqadto[18] = (unsigned short )0;
  sqlstm.sqtdso[18] = (unsigned short )0;
  sqlstm.sqhstv[19] = (         void  *)&racecode;
  sqlstm.sqhstl[19] = (unsigned int  )7;
  sqlstm.sqhsts[19] = (         int  )0;
  sqlstm.sqindv[19] = (         void  *)0;
  sqlstm.sqinds[19] = (         int  )0;
  sqlstm.sqharm[19] = (unsigned int  )0;
  sqlstm.sqadto[19] = (unsigned short )0;
  sqlstm.sqtdso[19] = (unsigned short )0;
  sqlstm.sqhstv[20] = (         void  *)&gender;
  sqlstm.sqhstl[20] = (unsigned int  )1;
  sqlstm.sqhsts[20] = (         int  )0;
  sqlstm.sqindv[20] = (         void  *)0;
  sqlstm.sqinds[20] = (         int  )0;
  sqlstm.sqharm[20] = (unsigned int  )0;
  sqlstm.sqadto[20] = (unsigned short )0;
  sqlstm.sqtdso[20] = (unsigned short )0;
  sqlstm.sqhstv[21] = (         void  *)&hkind;
  sqlstm.sqhstl[21] = (unsigned int  )1;
  sqlstm.sqhsts[21] = (         int  )0;
  sqlstm.sqindv[21] = (         void  *)&hkind_ind;
  sqlstm.sqinds[21] = (         int  )0;
  sqlstm.sqharm[21] = (unsigned int  )0;
  sqlstm.sqadto[21] = (unsigned short )0;
  sqlstm.sqtdso[21] = (unsigned short )0;
  sqlstm.sqhstv[22] = (         void  *)&iccolorcode;
  sqlstm.sqhstl[22] = (unsigned int  )1;
  sqlstm.sqhsts[22] = (         int  )0;
  sqlstm.sqindv[22] = (         void  *)0;
  sqlstm.sqinds[22] = (         int  )0;
  sqlstm.sqharm[22] = (unsigned int  )0;
  sqlstm.sqadto[22] = (unsigned short )0;
  sqlstm.sqtdso[22] = (unsigned short )0;
  sqlstm.sqhstv[23] = (         void  *)&ktindcode;
  sqlstm.sqhstl[23] = (unsigned int  )5;
  sqlstm.sqhsts[23] = (         int  )0;
  sqlstm.sqindv[23] = (         void  *)&ktindcode_ind;
  sqlstm.sqinds[23] = (         int  )0;
  sqlstm.sqharm[23] = (unsigned int  )0;
  sqlstm.sqadto[23] = (unsigned short )0;
  sqlstm.sqtdso[23] = (unsigned short )0;
  sqlstm.sqhstv[24] = (         void  *)&residentstat;
  sqlstm.sqhstl[24] = (unsigned int  )1;
  sqlstm.sqhsts[24] = (         int  )0;
  sqlstm.sqindv[24] = (         void  *)0;
  sqlstm.sqinds[24] = (         int  )0;
  sqlstm.sqharm[24] = (unsigned int  )0;
  sqlstm.sqadto[24] = (unsigned short )0;
  sqlstm.sqtdso[24] = (unsigned short )0;
  sqlstm.sqhstv[25] = (         void  *)&cardlostcnt;
  sqlstm.sqhstl[25] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[25] = (         int  )0;
  sqlstm.sqindv[25] = (         void  *)&cardlostcnt_ind;
  sqlstm.sqinds[25] = (         int  )0;
  sqlstm.sqharm[25] = (unsigned int  )0;
  sqlstm.sqadto[25] = (unsigned short )0;
  sqlstm.sqtdso[25] = (unsigned short )0;
  sqlstm.sqhstv[26] = (         void  *)&lostcardissuedate;
  sqlstm.sqhstl[26] = (unsigned int  )11;
  sqlstm.sqhsts[26] = (         int  )0;
  sqlstm.sqindv[26] = (         void  *)&lostcardissuedate_ind;
  sqlstm.sqinds[26] = (         int  )0;
  sqlstm.sqharm[26] = (unsigned int  )0;
  sqlstm.sqadto[26] = (unsigned short )0;
  sqlstm.sqtdso[26] = (unsigned short )0;
  sqlstm.sqhstv[27] = (         void  *)&colourarticlecode;
  sqlstm.sqhstl[27] = (unsigned int  )5;
  sqlstm.sqhsts[27] = (         int  )0;
  sqlstm.sqindv[27] = (         void  *)&colourarticlecode_ind;
  sqlstm.sqinds[27] = (         int  )0;
  sqlstm.sqharm[27] = (unsigned int  )0;
  sqlstm.sqadto[27] = (unsigned short )0;
  sqlstm.sqtdso[27] = (unsigned short )0;
  sqlstm.sqhstv[28] = (         void  *)&fatheridtype;
  sqlstm.sqhstl[28] = (unsigned int  )5;
  sqlstm.sqhsts[28] = (         int  )0;
  sqlstm.sqindv[28] = (         void  *)&fatheridtype_ind;
  sqlstm.sqinds[28] = (         int  )0;
  sqlstm.sqharm[28] = (unsigned int  )0;
  sqlstm.sqadto[28] = (unsigned short )0;
  sqlstm.sqtdso[28] = (unsigned short )0;
  sqlstm.sqhstv[29] = (         void  *)&fatheridno;
  sqlstm.sqhstl[29] = (unsigned int  )18;
  sqlstm.sqhsts[29] = (         int  )0;
  sqlstm.sqindv[29] = (         void  *)&fatheridno_ind;
  sqlstm.sqinds[29] = (         int  )0;
  sqlstm.sqharm[29] = (unsigned int  )0;
  sqlstm.sqadto[29] = (unsigned short )0;
  sqlstm.sqtdso[29] = (unsigned short )0;
  sqlstm.sqhstv[30] = (         void  *)&motheridtype;
  sqlstm.sqhstl[30] = (unsigned int  )5;
  sqlstm.sqhsts[30] = (         int  )0;
  sqlstm.sqindv[30] = (         void  *)&motheridtype_ind;
  sqlstm.sqinds[30] = (         int  )0;
  sqlstm.sqharm[30] = (unsigned int  )0;
  sqlstm.sqadto[30] = (unsigned short )0;
  sqlstm.sqtdso[30] = (unsigned short )0;
  sqlstm.sqhstv[31] = (         void  *)&motheridno;
  sqlstm.sqhstl[31] = (unsigned int  )18;
  sqlstm.sqhsts[31] = (         int  )0;
  sqlstm.sqindv[31] = (         void  *)&motheridno_ind;
  sqlstm.sqinds[31] = (         int  )0;
  sqlstm.sqharm[31] = (unsigned int  )0;
  sqlstm.sqadto[31] = (unsigned short )0;
  sqlstm.sqtdso[31] = (unsigned short )0;
  sqlstm.sqhstv[32] = (         void  *)&permitno;
  sqlstm.sqhstl[32] = (unsigned int  )15;
  sqlstm.sqhsts[32] = (         int  )0;
  sqlstm.sqindv[32] = (         void  *)&permitno_ind;
  sqlstm.sqinds[32] = (         int  )0;
  sqlstm.sqharm[32] = (unsigned int  )0;
  sqlstm.sqadto[32] = (unsigned short )0;
  sqlstm.sqtdso[32] = (unsigned short )0;
  sqlstm.sqhstv[33] = (         void  *)&permitissuedate;
  sqlstm.sqhstl[33] = (unsigned int  )11;
  sqlstm.sqhsts[33] = (         int  )0;
  sqlstm.sqindv[33] = (         void  *)&permitissuedate_ind;
  sqlstm.sqinds[33] = (         int  )0;
  sqlstm.sqharm[33] = (unsigned int  )0;
  sqlstm.sqadto[33] = (unsigned short )0;
  sqlstm.sqtdso[33] = (unsigned short )0;
  sqlstm.sqhstv[34] = (         void  *)&immrefno;
  sqlstm.sqhstl[34] = (unsigned int  )33;
  sqlstm.sqhsts[34] = (         int  )0;
  sqlstm.sqindv[34] = (         void  *)&immrefno_ind;
  sqlstm.sqinds[34] = (         int  )0;
  sqlstm.sqharm[34] = (unsigned int  )0;
  sqlstm.sqadto[34] = (unsigned short )0;
  sqlstm.sqtdso[34] = (unsigned short )0;
  sqlstm.sqhstv[35] = (         void  *)&immrefdate;
  sqlstm.sqhstl[35] = (unsigned int  )11;
  sqlstm.sqhsts[35] = (         int  )0;
  sqlstm.sqindv[35] = (         void  *)&immrefdate_ind;
  sqlstm.sqinds[35] = (         int  )0;
  sqlstm.sqharm[35] = (unsigned int  )0;
  sqlstm.sqadto[35] = (unsigned short )0;
  sqlstm.sqtdso[35] = (unsigned short )0;
  sqlstm.sqhstv[36] = (         void  *)&immexpirydate;
  sqlstm.sqhstl[36] = (unsigned int  )11;
  sqlstm.sqhsts[36] = (         int  )0;
  sqlstm.sqindv[36] = (         void  *)&immexpirydate_ind;
  sqlstm.sqinds[36] = (         int  )0;
  sqlstm.sqharm[36] = (unsigned int  )0;
  sqlstm.sqadto[36] = (unsigned short )0;
  sqlstm.sqtdso[36] = (unsigned short )0;
  sqlstm.sqhstv[37] = (         void  *)&passportno;
  sqlstm.sqhstl[37] = (unsigned int  )18;
  sqlstm.sqhsts[37] = (         int  )0;
  sqlstm.sqindv[37] = (         void  *)&passportno_ind;
  sqlstm.sqinds[37] = (         int  )0;
  sqlstm.sqharm[37] = (unsigned int  )0;
  sqlstm.sqadto[37] = (unsigned short )0;
  sqlstm.sqtdso[37] = (unsigned short )0;
  sqlstm.sqhstv[38] = (         void  *)&passportissuedate;
  sqlstm.sqhstl[38] = (unsigned int  )11;
  sqlstm.sqhsts[38] = (         int  )0;
  sqlstm.sqindv[38] = (         void  *)&passportissuedate_ind;
  sqlstm.sqinds[38] = (         int  )0;
  sqlstm.sqharm[38] = (unsigned int  )0;
  sqlstm.sqadto[38] = (unsigned short )0;
  sqlstm.sqtdso[38] = (unsigned short )0;
  sqlstm.sqhstv[39] = (         void  *)&passportisuuecountry;
  sqlstm.sqhstl[39] = (unsigned int  )7;
  sqlstm.sqhsts[39] = (         int  )0;
  sqlstm.sqindv[39] = (         void  *)&passportisuuecountry_ind;
  sqlstm.sqinds[39] = (         int  )0;
  sqlstm.sqharm[39] = (unsigned int  )0;
  sqlstm.sqadto[39] = (unsigned short )0;
  sqlstm.sqtdso[39] = (unsigned short )0;
  sqlstm.sqhstv[40] = (         void  *)&policeretiredate;
  sqlstm.sqhstl[40] = (unsigned int  )11;
  sqlstm.sqhsts[40] = (         int  )0;
  sqlstm.sqindv[40] = (         void  *)&policeretiredate_ind;
  sqlstm.sqinds[40] = (         int  )0;
  sqlstm.sqharm[40] = (unsigned int  )0;
  sqlstm.sqadto[40] = (unsigned short )0;
  sqlstm.sqtdso[40] = (unsigned short )0;
  sqlstm.sqhstv[41] = (         void  *)&orignameind;
  sqlstm.sqhstl[41] = (unsigned int  )1;
  sqlstm.sqhsts[41] = (         int  )0;
  sqlstm.sqindv[41] = (         void  *)&orignameind_ind;
  sqlstm.sqinds[41] = (         int  )0;
  sqlstm.sqharm[41] = (unsigned int  )0;
  sqlstm.sqadto[41] = (unsigned short )0;
  sqlstm.sqtdso[41] = (unsigned short )0;
  sqlstm.sqhstv[42] = (         void  *)&kptno;
  sqlstm.sqhstl[42] = (unsigned int  )15;
  sqlstm.sqhsts[42] = (         int  )0;
  sqlstm.sqindv[42] = (         void  *)&kptno_ind;
  sqlstm.sqinds[42] = (         int  )0;
  sqlstm.sqharm[42] = (unsigned int  )0;
  sqlstm.sqadto[42] = (unsigned short )0;
  sqlstm.sqtdso[42] = (unsigned short )0;
  sqlstm.sqhstv[43] = (         void  *)&militaryid;
  sqlstm.sqhstl[43] = (unsigned int  )14;
  sqlstm.sqhsts[43] = (         int  )0;
  sqlstm.sqindv[43] = (         void  *)&militaryid_ind;
  sqlstm.sqinds[43] = (         int  )0;
  sqlstm.sqharm[43] = (unsigned int  )0;
  sqlstm.sqadto[43] = (unsigned short )0;
  sqlstm.sqtdso[43] = (unsigned short )0;
  sqlstm.sqhstv[44] = (         void  *)&policeid;
  sqlstm.sqhstl[44] = (unsigned int  )14;
  sqlstm.sqhsts[44] = (         int  )0;
  sqlstm.sqindv[44] = (         void  *)&policeid_ind;
  sqlstm.sqinds[44] = (         int  )0;
  sqlstm.sqharm[44] = (unsigned int  )0;
  sqlstm.sqadto[44] = (unsigned short )0;
  sqlstm.sqtdso[44] = (unsigned short )0;
  sqlstm.sqhstv[45] = (         void  *)&kppno;
  sqlstm.sqhstl[45] = (unsigned int  )11;
  sqlstm.sqhsts[45] = (         int  )0;
  sqlstm.sqindv[45] = (         void  *)&kppno_ind;
  sqlstm.sqinds[45] = (         int  )0;
  sqlstm.sqharm[45] = (unsigned int  )0;
  sqlstm.sqadto[45] = (unsigned short )0;
  sqlstm.sqtdso[45] = (unsigned short )0;
  sqlstm.sqhstv[46] = (         void  *)&polmilitarycode;
  sqlstm.sqhstl[46] = (unsigned int  )1;
  sqlstm.sqhsts[46] = (         int  )0;
  sqlstm.sqindv[46] = (         void  *)&polmilitarycode_ind;
  sqlstm.sqinds[46] = (         int  )0;
  sqlstm.sqharm[46] = (unsigned int  )0;
  sqlstm.sqadto[46] = (unsigned short )0;
  sqlstm.sqtdso[46] = (unsigned short )0;
  sqlstm.sqhstv[47] = (         void  *)&polmilitaryjoindate;
  sqlstm.sqhstl[47] = (unsigned int  )11;
  sqlstm.sqhsts[47] = (         int  )0;
  sqlstm.sqindv[47] = (         void  *)&polmilitaryjoindate_ind;
  sqlstm.sqinds[47] = (         int  )0;
  sqlstm.sqharm[47] = (unsigned int  )0;
  sqlstm.sqadto[47] = (unsigned short )0;
  sqlstm.sqtdso[47] = (unsigned short )0;
  sqlstm.sqhstv[48] = (         void  *)&gmpcshortname3;
  sqlstm.sqhstl[48] = (unsigned int  )23;
  sqlstm.sqhsts[48] = (         int  )0;
  sqlstm.sqindv[48] = (         void  *)&gmpcshortname3_ind;
  sqlstm.sqinds[48] = (         int  )0;
  sqlstm.sqharm[48] = (unsigned int  )0;
  sqlstm.sqadto[48] = (unsigned short )0;
  sqlstm.sqtdso[48] = (unsigned short )0;
  sqlstm.sqhstv[49] = (         void  *)&citizenshipacqdate;
  sqlstm.sqhstl[49] = (unsigned int  )11;
  sqlstm.sqhsts[49] = (         int  )0;
  sqlstm.sqindv[49] = (         void  *)&citizenshipacqdate_ind;
  sqlstm.sqinds[49] = (         int  )0;
  sqlstm.sqharm[49] = (unsigned int  )0;
  sqlstm.sqadto[49] = (unsigned short )0;
  sqlstm.sqtdso[49] = (unsigned short )0;
  sqlstm.sqhstv[50] = (         void  *)&relationcode;
  sqlstm.sqhstl[50] = (unsigned int  )5;
  sqlstm.sqhsts[50] = (         int  )0;
  sqlstm.sqindv[50] = (         void  *)&relationcode_ind;
  sqlstm.sqinds[50] = (         int  )0;
  sqlstm.sqharm[50] = (unsigned int  )0;
  sqlstm.sqadto[50] = (unsigned short )0;
  sqlstm.sqtdso[50] = (unsigned short )0;
  sqlstm.sqhstv[51] = (         void  *)&sponsoridtype;
  sqlstm.sqhstl[51] = (unsigned int  )5;
  sqlstm.sqhsts[51] = (         int  )0;
  sqlstm.sqindv[51] = (         void  *)&sponsoridtype_ind;
  sqlstm.sqinds[51] = (         int  )0;
  sqlstm.sqharm[51] = (unsigned int  )0;
  sqlstm.sqadto[51] = (unsigned short )0;
  sqlstm.sqtdso[51] = (unsigned short )0;
  sqlstm.sqhstv[52] = (         void  *)&sponsoridno;
  sqlstm.sqhstl[52] = (unsigned int  )18;
  sqlstm.sqhsts[52] = (         int  )0;
  sqlstm.sqindv[52] = (         void  *)&sponsoridno_ind;
  sqlstm.sqinds[52] = (         int  )0;
  sqlstm.sqharm[52] = (unsigned int  )0;
  sqlstm.sqadto[52] = (unsigned short )0;
  sqlstm.sqtdso[52] = (unsigned short )0;
  sqlstm.sqhstv[53] = (         void  *)&sponsorcurrlongname;
  sqlstm.sqhstl[53] = (unsigned int  )183;
  sqlstm.sqhsts[53] = (         int  )0;
  sqlstm.sqindv[53] = (         void  *)&sponsorcurrlongname_ind;
  sqlstm.sqinds[53] = (         int  )0;
  sqlstm.sqharm[53] = (unsigned int  )0;
  sqlstm.sqadto[53] = (unsigned short )0;
  sqlstm.sqtdso[53] = (unsigned short )0;
  sqlstm.sqhstv[54] = (         void  *)&birthstatecode;
  sqlstm.sqhstl[54] = (unsigned int  )5;
  sqlstm.sqhsts[54] = (         int  )0;
  sqlstm.sqindv[54] = (         void  *)&birthstatecode_ind;
  sqlstm.sqinds[54] = (         int  )0;
  sqlstm.sqharm[54] = (unsigned int  )0;
  sqlstm.sqadto[54] = (unsigned short )0;
  sqlstm.sqtdso[54] = (unsigned short )0;
  sqlstm.sqhstv[55] = (         void  *)&birthplacecode;
  sqlstm.sqhstl[55] = (unsigned int  )11;
  sqlstm.sqhsts[55] = (         int  )0;
  sqlstm.sqindv[55] = (         void  *)&birthplacecode_ind;
  sqlstm.sqinds[55] = (         int  )0;
  sqlstm.sqharm[55] = (unsigned int  )0;
  sqlstm.sqadto[55] = (unsigned short )0;
  sqlstm.sqtdso[55] = (unsigned short )0;
  sqlstm.sqhstv[56] = (         void  *)&citizennationcode;
  sqlstm.sqhstl[56] = (unsigned int  )7;
  sqlstm.sqhsts[56] = (         int  )0;
  sqlstm.sqindv[56] = (         void  *)&citizennationcode_ind;
  sqlstm.sqinds[56] = (         int  )0;
  sqlstm.sqharm[56] = (unsigned int  )0;
  sqlstm.sqadto[56] = (unsigned short )0;
  sqlstm.sqtdso[56] = (unsigned short )0;
  sqlstm.sqhstv[57] = (         void  *)&ktstartdate;
  sqlstm.sqhstl[57] = (unsigned int  )11;
  sqlstm.sqhsts[57] = (         int  )0;
  sqlstm.sqindv[57] = (         void  *)&ktstartdate_ind;
  sqlstm.sqinds[57] = (         int  )0;
  sqlstm.sqharm[57] = (unsigned int  )0;
  sqlstm.sqadto[57] = (unsigned short )0;
  sqlstm.sqtdso[57] = (unsigned short )0;
  sqlstm.sqhstv[58] = (         void  *)&ktenddate;
  sqlstm.sqhstl[58] = (unsigned int  )11;
  sqlstm.sqhsts[58] = (         int  )0;
  sqlstm.sqindv[58] = (         void  *)&ktenddate_ind;
  sqlstm.sqinds[58] = (         int  )0;
  sqlstm.sqharm[58] = (unsigned int  )0;
  sqlstm.sqadto[58] = (unsigned short )0;
  sqlstm.sqtdso[58] = (unsigned short )0;
  sqlstm.sqhstv[59] = (         void  *)&ptissuedate;
  sqlstm.sqhstl[59] = (unsigned int  )11;
  sqlstm.sqhsts[59] = (         int  )0;
  sqlstm.sqindv[59] = (         void  *)&ptissuedate_ind;
  sqlstm.sqinds[59] = (         int  )0;
  sqlstm.sqharm[59] = (unsigned int  )0;
  sqlstm.sqadto[59] = (unsigned short )0;
  sqlstm.sqtdso[59] = (unsigned short )0;
  sqlstm.sqhstv[60] = (         void  *)&ptwno;
  sqlstm.sqhstl[60] = (unsigned int  )18;
  sqlstm.sqhsts[60] = (         int  )0;
  sqlstm.sqindv[60] = (         void  *)&ptwno_ind;
  sqlstm.sqinds[60] = (         int  )0;
  sqlstm.sqharm[60] = (unsigned int  )0;
  sqlstm.sqadto[60] = (unsigned short )0;
  sqlstm.sqtdso[60] = (unsigned short )0;
  sqlstm.sqhstv[61] = (         void  *)&birthregndate;
  sqlstm.sqhstl[61] = (unsigned int  )11;
  sqlstm.sqhsts[61] = (         int  )0;
  sqlstm.sqindv[61] = (         void  *)&birthregndate_ind;
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


	
userlog("insert_appl_missed_opex : After Insert");
	
	  if(SQLCODE != 0 && SQLCODE != -1)
		{
		#ifdef DEBUG
			userlog(" insert_appl_missed_opex : Insert into APPL_MISSED_OPEX failed : %s", SQLMSG);
		#endif
			strcpy(prog_log.remarks,"insert_appl_missed_opex: Insert into APPL_MISSED_OPEX failed ");
			sprintf(excep_log.error_msg, "insert_appl_missed_opex: Insert into APPL_MISSED_OPEX failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		 }

	#ifdef DEBUG
		userlog("insert_appl_missed_opex : Record inserted successfully");
	#endif

	return SUCCESS;

}


   /*  Added on 16th Feb 2005 for IJPN*/

/********************************************************************************/
/* Function name: insert_jpn_info        										*/
/* Description	: This function inserts the info into  JPN_INFO table       	*/
/* Input		: Pointer to jpn_info structure, Structure count		        */
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_jpn_info(JPN_INFO_T *jpn_info,void * ctx)
{
struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	/* varchar kptno[KPT_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[13]; } kptno
 = {0};

	int  birthdistrictcode=0;
	/* varchar policeid[POLICE_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[12]; } policeid
 = {0};

	/* varchar militaryid[MILITARY_ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[12]; } militaryid
 = {0};

	/* varchar kppno[KPP_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } kppno
 = {0};

	char gender = '\0';
	char personstatcode = '\0';
	/* varchar birthdate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } birthdate
 = {0};

	char unknownbirthind = '\0';
	char religioncode = '\0';
	/* varchar racecode[RACE_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[5]; } racecode
 = {0};

	char residentstat = '\0';
	char citizenshipstatcode = '\0';
	/* varchar colourarticlecode[ARTICLE_COLOR_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[3]; } colourarticlecode
 = {0};

	char hkind = '\0';
	char iccolorcode = '\0';
	/* varchar origname[ORIG_NAME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[151]; } origname
 = {0};

	/* varchar currlongname[CUR_LONG_NAME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[151]; } currlongname
 = {0};

	/* varchar currshortname1[CUR_SHORT_NAME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } currshortname1
 = {0};

	/* varchar currshortname2[CUR_SHORT_NAME_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } currshortname2
 = {0};

    /* varchar gmpcshortname1[GMPC_SNAME1_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } gmpcshortname1
 = {0};

	/* varchar gmpcshortname2[GMPC_SNAME1_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } gmpcshortname2
 = {0};

	/* varchar gmpcshortname3[GMPC_SNAME3_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } gmpcshortname3
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

	char postcode[POST_CODE_SIZE] = {0};
	int  citycode = 0;
	char statecode[STATE_CODE_SIZE] = {0};
	char ktindcode[KT_CODE_SIZE] = {0};
	/* varchar jpnremarks1[JPN_REMARKS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[61]; } jpnremarks1
 = {0};

	/* varchar jpnremarks2[JPN_REMARKS_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[61]; } jpnremarks2
 = {0};

	char afisflag = '\0';
	int  cardlostcnt = 0;
	char kptapplstat = '\0';
	char kptappldate[DATE_SIZE] = {0};
	char kptcollectiondate[DATE_SIZE] = {0};
	char kptcollectionplaccode[KPT_COLLECTION_PLACE_SIZE] = {0};
	char lastaddresschangedate[DATE_SIZE] = {0};
	/* varchar lastcardissuedate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } lastcardissuedate
 = {0};

	char juvenileflag = '\0';
	int  cardversionno = 0;
	/* varchar birthplace[BIRTH_PLACE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[26]; } birthplace
 = {0};

	char rjind[RJ_SIZE] = {0};
	char birthcertno[BIRTH_CERT_NO_SIZE] = {0};
	int  kptversionno = 0;
	/* varchar polmilitaryjoindate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } polmilitaryjoindate
 = {0};

	/* varchar retirementdate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } retirementdate
 = {0};

	char orignameind = '\0';
	/* varchar surrenderdate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } surrenderdate
 = {0};

	/* varchar citizennationcode[COUNTRY_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[5]; } citizennationcode
 = {0};

	/* varchar applapprovaldate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } applapprovaldate
 = {0};

	/* varchar greencardexpdate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } greencardexpdate
 = {0};

	/* varchar immrefno[IMM_REF_NO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } immrefno
 = {0};

	/* varchar immrefdate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } immrefdate
 = {0};

	/* varchar immexpirydate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } immexpirydate
 = {0};

	/* varchar passportno[PASSPORT_NO_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } passportno
 = {0};

	/* varchar passportissuedate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } passportissuedate
 = {0};

	/* varchar passportisuuecountry[COUNTRY_CODE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[5]; } passportisuuecountry
 = {0};

	char ucflag = '\0';
	/* varchar permitno[PERMITNO1_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[13]; } permitno
 = {0};

	/* varchar permitissuedate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } permitissuedate
 = {0};

	int  permittype = 0;
	int  prdoctype = 0;
	/* varchar rjstartdate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } rjstartdate
 = {0};

	/* varchar rjenddate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } rjenddate
 = {0};

	/* varchar ktstartdate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } ktstartdate
 = {0};

	/* varchar ktenddate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } ktenddate
 = {0};

	char blklstind = '\0';
	char blklstcode[BLKLIST_ACTIVITY_CODE_SIZE] = {0};
	/* varchar birthregndate[DATE_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[9]; } birthregndate
 = {0};

     //Added on 9th july
    char afisbypass = '\0';

	short birthdistrictcode_ind = 0;
	short policeid_ind = 0;
	short militaryid_ind = 0;
	short kppno_ind = 0;
	short gender_ind = 0;
	short personstatcode_ind = 0;
	short birthdate_ind = 0;
	short unknownbirthind_ind = 0;
	short religioncode_ind = 0;
	short racecode_ind = 0;
	short residentstat_ind = 0;
	short citizenshipstatcode_ind = 0;
	short colourarticlecode_ind = 0;
	short hkind_ind = 0;
	short iccolorcode_ind = 0;
	short origname_ind = 0;
	short currlongname_ind = 0;
	short currshortname1_ind = 0;
	short currshortname2_ind = 0;
   	short gmpcshortname1_ind = 0;
	short gmpcshortname2_ind = 0;
	short gmpcshortname3_ind = 0;
	short address1_ind = 0;
   	short address2_ind = 0;
	short address3_ind = 0;
	short postcode_ind = 0;
	short citycode_ind = 0;
	short statecode_ind = 0;
	short ktindcode_ind = 0;
	short jpnremarks1_ind = 0;
	short jpnremarks2_ind = 0;
	short afisflag_ind = 0;
	short cardlostcnt_ind = 0;
	short kptapplstat_ind = 0;
	short kptappldate_ind = 0;
	short kptcollectiondate_ind = 0;
	short kptcollectionplaccode_ind = 0;
	short lastaddresschangedate_ind = 0;
	short lastcardissuedate_ind = 0;
	short juvenileflag_ind = 0;
	short cardversionno_ind = 0;
	short birthplace_ind = 0;
	short rjind_ind = 0;
	short birthcertno_ind = 0;
	short kptversionno_ind = 0;
	short polmilitaryjoindate_ind = 0;
	short retirementdate_ind = 0;
	short orignameind_ind = 0;
	short surrenderdate_ind = 0;
	short citizennationcode_ind = 0;
	short applapprovaldate_ind = 0;
	short greencardexpdate_ind = 0;
	short immrefno_ind = 0;
	short immrefdate_ind = 0;
	short immexpirydate_ind = 0;
	short passportno_ind = 0;
	short passportissuedate_ind = 0;
	short passportisuuecountry_ind = 0;
	short ucflag_ind = 0;
	short permitno_ind = 0;
	short permitissuedate_ind = 0;
	short permittype_ind = 0;
	short prdoctype_ind = 0;
	short rjstartdate_ind = 0;
	short rjenddate_ind = 0;
	short ktstartdate_ind = 0;
	short ktenddate_ind = 0;
	short blklstind_ind = 0;
	short blklstcode_ind = 0;
	short birthregndate_ind = 0;

	//Added on 9th july
	short afisbypass_ind = 0;

	// Added on 28/05/2014 for release 3.28
	char ktareacode[6+1]= {0};
	short ktareacode_ind = 0;
	char apjareacode[8+1]= {0};
	short apjareacode_ind = 0;
	
sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int count = 0;
    int cnt = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	


	#ifdef DEBUG
		userlog("insert_jpn_info : Release 3.28");
	    userlog("insert_jpn_info : kptno - %s", jpn_info->kptno);
		userlog("insert_jpn_info : birthdistrictcode  - %d", jpn_info->birthdistrictcode );
		userlog("insert_jpn_info : policeid - %s", jpn_info->policeid);
		userlog("insert_jpn_info : militaryid - %s",jpn_info-> militaryid);
		userlog("insert_jpn_info : kppno - %s", jpn_info->kppno);
	  	userlog("insert_jpn_info : gender - %c", jpn_info->gender);
		userlog("insert_jpn_info : personstatcode - %c",jpn_info->personstatcode);
		userlog("insert_jpn_info : birthdate - %s", jpn_info->birthdate);
		userlog("insert_jpn_info : unknownbirthind - %c", jpn_info->unknownbirthind);
		userlog("insert_jpn_info : religioncode - %c", jpn_info->religioncode);
		userlog("insert_jpn_info : racecode - %s", jpn_info->racecode);
		userlog("insert_jpn_info : residentstat - %c", jpn_info->residentstat);
		userlog("insert_jpn_info : citizenshipstatcode - %c", jpn_info->citizenshipstatcode);
		userlog("insert_jpn_info : colourarticlecode - %s", jpn_info->colourarticlecode);
		userlog("insert_jpn_info : hkind - %c", jpn_info->hkind);
		userlog("insert_jpn_info : iccolorcode - %c", jpn_info->iccolorcode);
		userlog("insert_jpn_info : origname - %s", jpn_info->origname);
		userlog("insert_jpn_info : currlongname - %s", jpn_info->currlongname);
		userlog("insert_jpn_info : currshortname1 - %s", jpn_info->currshortname1);
		userlog("insert_jpn_info : currshortname2 - %s", jpn_info->currshortname2);
		userlog("insert_jpn_info : gmpcshortname1 - %s", jpn_info->gmpcshortname1);
		userlog("insert_jpn_info : gmpcshortname2 - %s", jpn_info->gmpcshortname2);
		userlog("insert_jpn_info : gmpcshortname3 - %s", jpn_info->gmpcshortname3);
		userlog("insert_jpn_info : address1 - %s", jpn_info->address1);
		userlog("insert_jpn_info : address2 - %s", jpn_info->address2);
		userlog("insert_jpn_info : address3 - %s", jpn_info->address3);
		userlog("insert_jpn_info : postcode - %s", jpn_info->postcode);
		userlog("insert_jpn_info : citycode - %d", jpn_info->citycode);
		userlog("insert_jpn_info : statecode - %s", jpn_info->statecode);
		userlog("insert_jpn_info : ktindcode - %s", jpn_info->ktindcode);
		userlog("insert_jpn_info : jpnremarks1 - %s", jpn_info->jpnremarks1);
		userlog("insert_jpn_info : jpnremarks2 - %s", jpn_info->jpnremarks2);
		userlog("insert_jpn_info : afisflag - %c", jpn_info->afisflag);
		userlog("insert_jpn_info : cardlostcnt - %d", jpn_info->cardlostcnt);
		userlog("insert_jpn_info : kptapplstat - %c",jpn_info->kptapplstat);
		userlog("insert_jpn_info : kptappldate - %s", jpn_info->kptappldate);
		userlog("insert_jpn_info : kptcollectionplaccode - %s", jpn_info->kptcollectionplaccode);
		userlog("insert_jpn_info : lastaddresschangedate - %s", jpn_info->lastaddresschangedate);
		userlog("insert_jpn_info : lastcardissuedate - %s", jpn_info->lastcardissuedate);
		userlog("insert_jpn_info : cardversionno - %d", jpn_info->cardversionno);
		userlog("insert_jpn_info : juvenileflag - %c", jpn_info->juvenileflag);		
		userlog("insert_jpn_info : birthplace - %s", jpn_info->birthplace);
		userlog("insert_jpn_info : rjind - %s", jpn_info->rjind);
		userlog("insert_jpn_info : birthcertno - %s", jpn_info->birthcertno);
		userlog("insert_jpn_info : kptversionno - %d", jpn_info->kptversionno);
		userlog("insert_jpn_info : polmilitaryjoindate - %s", jpn_info->polmilitaryjoindate);
		userlog("insert_jpn_info : retirementdate - %s", jpn_info->retirementdate);
		userlog("insert_jpn_info : orignameind - %c", jpn_info->orignameind);
		userlog("insert_jpn_info : surrenderdate - %s", jpn_info->surrenderdate);
		userlog("insert_jpn_info : citizennationcode - %s", jpn_info->citizennationcode);
		userlog("insert_jpn_info : applapprovaldate - %s", jpn_info->applapprovaldate);		
		userlog("insert_jpn_info : greencardexpdate - %s", jpn_info->greencardexpdate);
		userlog("insert_jpn_info : immrefno - %s", jpn_info->immrefno);
		userlog("insert_jpn_info : immrefdate - %s", jpn_info->immrefdate);
		userlog("insert_jpn_info : immexpirydate - %s", jpn_info->immexpirydate);
		userlog("insert_jpn_info : passportno - %s", jpn_info->passportno);
		userlog("insert_jpn_info : passportissuedate - %s", jpn_info->passportissuedate);		
		userlog("insert_jpn_info : passportisuuecountry - %s", jpn_info->passportisuuecountry);
		userlog("insert_jpn_info : ucflag - %c", jpn_info->ucflag);
		userlog("insert_jpn_info : permitno - %s", jpn_info->permitno);
		userlog("insert_jpn_info : permitissuedate - %s", jpn_info->permitissuedate);
		userlog("insert_jpn_info : permittype - %d", jpn_info->permittype);
		userlog("insert_jpn_info : prdoctype - %d", jpn_info->prdoctype);
		userlog("insert_jpn_info : rjstartdate - %s", jpn_info->rjstartdate);
		userlog("insert_jpn_info : rjenddate - %s", jpn_info->rjenddate);
		userlog("insert_jpn_info : ktstartdate - %s", jpn_info->ktstartdate);
		userlog("insert_jpn_info : ktenddate - %s", jpn_info->ktenddate);
		userlog("insert_jpn_info : blklstind - %c", jpn_info->blklstind);
		userlog("insert_jpn_info : blklstcode - %s", jpn_info->blklstcode);
		userlog("insert_jpn_info : birthregndate - %s", jpn_info->birthregndate);

		userlog("insert_jpn_info : ktareacode - %s", jpn_info->ktareacode);
		userlog("insert_jpn_info : apjareacode - %s", jpn_info->apjareacode);
	#endif


		setnull(kptno);	
		strcpy((char*)kptno.arr, jpn_info->kptno);
		setlen(kptno);
		setnull(kptno);
			
		cnt = 0;
        /* EXEC SQL SELECT 1 INTO :cnt FROM JPN_INFO
		   WHERE KPTNO = :kptno; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 68;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "select 1 into :b0  from JPN_INFO where KPTNO=:b1";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )3705;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&cnt;
        sqlstm.sqhstl[0] = (unsigned int  )sizeof(long);
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&kptno;
        sqlstm.sqhstl[1] = (unsigned int  )15;
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


		

		 if((cnt==1) && (SQLCODE == 0))
		   /* EXEC SQL DELETE FROM JPN_INFO WHERE KPTNO = :kptno; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 68;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "delete  from JPN_INFO  where KPTNO=:b0";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )3728;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&kptno;
     sqlstm.sqhstl[0] = (unsigned int  )15;
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



	
		if(jpn_info->birthdistrictcode  < 0)	
		{	
			birthdistrictcode_ind = -1;	
		}	
	  else 	
		{	
		    birthdistrictcode = jpn_info->birthdistrictcode ;	
		}	
      //birthdistrictcode = jpn_info->birthdistrictcode;

                      
	  if(jpn_info->policeid[0] == '\0')	
		{	
			policeid_ind = -1;	
		}	
	  else 	
		{	setnull(policeid);	
		    strcpy((char*)policeid.arr, jpn_info->policeid);
			setlen(policeid);
			setnull(policeid);
		}	

	  if(jpn_info->militaryid[0] == '\0')	
		{	
			militaryid_ind = -1;	
		}	
	  else 	
		{	setnull(militaryid);
		    strcpy((char*)militaryid.arr, jpn_info->militaryid);	
			setlen(militaryid);
			setnull(militaryid);
		}	
	      
      if(jpn_info->kppno[0] == '\0')	
		{	
			kppno_ind = -1;	
		}	
	  else 	
		{	setnull(kppno);
		    strcpy((char*)kppno.arr, jpn_info->kppno);	
			setlen(kppno);
			setnull(kppno);
		}	

	 if(jpn_info->gender == '\0')	
		{	
			gender_ind = -1;	
		}	
	  else 	
		{	
		    gender = jpn_info->gender;	
		}	


      if(jpn_info->personstatcode == '\0')	
		{	
			personstatcode_ind = -1;	
		}	
	  else 	
		{	
		    personstatcode = jpn_info->personstatcode;	
		}	

     if(jpn_info->birthdate[0] == '\0')	
		{	
			birthdate_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)birthdate.arr, jpn_info->birthdate);	
			setlen(birthdate);
			setnull(birthdate);
		}	
	
	 if(jpn_info->unknownbirthind == '\0')	
		{	
			unknownbirthind_ind = -1;	
		}	
	  else 	
		{	
		    unknownbirthind = jpn_info->unknownbirthind;	
		}

	if(jpn_info->religioncode == '\0')	
		{	
			religioncode_ind = -1;	
		}	
	  else 
		{	
		    religioncode = jpn_info->religioncode;	
		}


	if(jpn_info->racecode[0] == '\0')	
		{	
			racecode_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)racecode.arr, jpn_info->racecode);
			setlen(racecode);
			setnull(racecode);
		}
	
	if(jpn_info->residentstat == '\0')	
		{	
			residentstat_ind = -1;	
		}	
	  else 	
		{	
		    residentstat = jpn_info->residentstat;	
		}
	
	if(jpn_info->citizenshipstatcode == '\0')	
		{	
			citizenshipstatcode_ind = -1;	
		}	
	  else 	
		{	
		    citizenshipstatcode = jpn_info->citizenshipstatcode;	
		}
	
	if(jpn_info->colourarticlecode[0] == '\0')	
		{	
			colourarticlecode_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)colourarticlecode.arr, jpn_info->colourarticlecode);	
			setlen(colourarticlecode);
			setnull(colourarticlecode);
		}

	if(jpn_info->hkind == '\0')	
		{	
			hkind_ind = -1;	
		}	
	  else 	
		{	
		   hkind = jpn_info->hkind;	
		}
	
	if(jpn_info->iccolorcode == '\0')	
		{	
			iccolorcode_ind = -1;	
		}	
	  else 	
		{	
		    iccolorcode = jpn_info->iccolorcode;	
		}
	
	
	if(jpn_info->origname[0] == '\0')	
		{	
			origname_ind = -1;	
		}	
	  else 	
		{	setnull(origname);
		    strcpy((char*)origname.arr, jpn_info->origname);
			setlen(origname);
			setnull(origname);
		}
	
	if(jpn_info->currlongname[0] == '\0')	
		{	
			currlongname_ind = -1;	
		}	
	  else 	
		{	setnull(currlongname);
		    strcpy((char*)currlongname.arr, jpn_info->currlongname);	
			setlen(currlongname);
			setnull(currlongname);
		}
	
	if(jpn_info->currshortname1[0] == '\0')	
		{	
			currshortname1_ind = -1;	
		}	
	  else 	
		{	setnull(currshortname1);
		    strcpy((char*)currshortname1.arr, jpn_info->currshortname1);	
			setlen(currshortname1);
			setnull(currshortname1);
		}
	
	if(jpn_info->currshortname2[0] == '\0')	
		{	
			currshortname2_ind = -1;	
		}	
	  else 	
		{	setnull(currshortname2);
		    strcpy((char*)currshortname2.arr, jpn_info->currshortname2);
			setlen(currshortname2);
			setnull(currshortname2);
		}
	
	if(jpn_info->gmpcshortname1[0] == '\0')	
		{	
			gmpcshortname1_ind = -1;	
		}	
	  else 	
		{	setnull(gmpcshortname1);
		    strcpy((char*)gmpcshortname1.arr, jpn_info->gmpcshortname1);	
			setlen(gmpcshortname1);
			setnull(gmpcshortname1);
		}
	
	if(jpn_info->gmpcshortname2[0] == '\0')	
		{	
			gmpcshortname2_ind = -1;	
		}	
	  else 
	  	{	setnull(gmpcshortname2);
		    strcpy((char*)gmpcshortname2.arr, jpn_info->gmpcshortname2);	
			setlen(gmpcshortname2);
			setnull(gmpcshortname2);
		}

	if(jpn_info->gmpcshortname3[0] == '\0')	
		{	
			gmpcshortname3_ind = -1;	
		}	
	  else 	
		{	setnull(gmpcshortname3);
		    strcpy((char*)gmpcshortname3.arr, jpn_info->gmpcshortname3);	
			setlen(gmpcshortname3);
			setnull(gmpcshortname3);
		}
    	
	if(jpn_info->address1[0] == '\0')	
		{	
			address1_ind = -1;	
		}	
	  else 	
		{	setnull(address1);
		    strcpy((char*)address1.arr, jpn_info->address1);	
			setlen(address1);
			setnull(address1);
		}

	if(jpn_info->address2[0] == '\0')	
		{	
			address2_ind = -1;	
		}	
	  else 	
		{	setnull(address2);
		    strcpy((char*)address2.arr, jpn_info->address2);	
			setlen(address2);
			setnull(address2);
		}

	if(jpn_info->address3[0] == '\0')	
		{	
			address3_ind = -1;	
		}	
	  else 	
		{	setnull(address3);
		    strcpy((char*)address3.arr, jpn_info->address3);	
			setlen(address3);
			setnull(address3);
		}
	
    if(jpn_info->postcode[0] == '\0')	
		{	
			postcode_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(postcode, jpn_info->postcode);	
		}	

       citycode = jpn_info->citycode;

    if(jpn_info->statecode[0] == '\0')	
		{	
			statecode_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(statecode, jpn_info->statecode);	
		}

     	if(jpn_info->ktindcode[0] == '\0')	
		{	
			ktindcode_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(ktindcode, jpn_info->ktindcode);	
		}
	
		if(jpn_info->jpnremarks1[0] == '\0')	
		{	
			jpnremarks1_ind = -1;	
		}	
	  else 	
		{	setnull(jpnremarks1);
		    strcpy((char*)jpnremarks1.arr, jpn_info->jpnremarks1);	
			setlen(jpnremarks1);
			setnull(jpnremarks1);
		}
		if(jpn_info->jpnremarks2[0] == '\0')	
		{	
			jpnremarks2_ind = -1;	
		}	
	  else 	
		{	setnull(jpnremarks2);
		    strcpy((char*)jpnremarks2.arr, jpn_info->jpnremarks2);	
			setlen(jpnremarks2);
			setnull(jpnremarks2);
		}
	
	if(jpn_info->afisflag == '\0')	
		{	
			afisflag_ind = -1;	
		}	
	  else 	
		{	
		    afisflag =  jpn_info->afisflag;	
		}
	
	if(jpn_info->cardlostcnt < 0)	
		{	
			cardlostcnt_ind = -1;	
		}	
	  else 	
		{	
		    cardlostcnt =  jpn_info->cardlostcnt;	
		}
	
		
	if(jpn_info->kptapplstat == '\0')	
		{	
			kptapplstat_ind = -1;	
		}	
	  else 	
		{	
		    kptapplstat =  jpn_info->kptapplstat;	
		}

	if(jpn_info->kptappldate[0] == '\0')	
		{	
			kptappldate_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(kptappldate, jpn_info->kptappldate);	
		}

		if(jpn_info->kptcollectiondate[0] == '\0')	
		{	
			kptcollectiondate_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(kptcollectiondate, jpn_info->kptcollectiondate);	
		}
		

		if(jpn_info->kptcollectionplaccode[0] == '\0')	
		{	
			kptcollectionplaccode_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(kptcollectionplaccode, jpn_info->kptcollectionplaccode);	
		}

		if(jpn_info->lastaddresschangedate[0] == '\0')	
		{	
			lastaddresschangedate_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(lastaddresschangedate, jpn_info->lastaddresschangedate);	
		}

		if(jpn_info->lastcardissuedate[0] == '\0')	
		{	
			lastcardissuedate_ind = -1;	
		}	
	  else 	
		{	setnull(lastcardissuedate);
		    strcpy((char*)lastcardissuedate.arr, jpn_info->lastcardissuedate);
			setlen(lastcardissuedate);
			setnull(lastcardissuedate);
		}

		if(jpn_info->juvenileflag == '\0')	
		{	
			juvenileflag_ind = -1;	
		}	
	  else 	
		{	
		    juvenileflag =  jpn_info->juvenileflag;	
		}

		if(jpn_info->cardversionno < 0)	
		{	
			 cardversionno_ind = -1;	
		}	
	  else 	
		{	
		     cardversionno =  jpn_info-> cardversionno;	
		}

	   
	
	if(jpn_info->birthplace[0] == '\0')	
		{	
			birthplace_ind = -1;	
		}	
	  else 	
		{	setnull(birthplace);
		    strcpy((char*)birthplace.arr, jpn_info->birthplace);
			setlen(birthplace);
			setnull(birthplace);
		}
    if(jpn_info->rjind[0] == '\0')	
		{	
			rjind_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(rjind, jpn_info->rjind);	
		}

	if(jpn_info->birthcertno[0] == '\0')	
		{	
			birthcertno_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(birthcertno, jpn_info->birthcertno);	
		}
		
		if(jpn_info->kptversionno < 0)	
		{	
			 kptversionno_ind = -1;	
		}	
	  else 	
		{	
		     kptversionno =  jpn_info->kptversionno;	
		}
	
	if(jpn_info->polmilitaryjoindate[0] == '\0')	
		{	
			polmilitaryjoindate_ind = -1;	
		}	
	  else 	
		{	setnull(polmilitaryjoindate);
		    strcpy((char*)polmilitaryjoindate.arr, jpn_info->polmilitaryjoindate);
			setlen(polmilitaryjoindate);
			setnull(polmilitaryjoindate);
		}

		if(jpn_info->retirementdate[0] == '\0')	
		{	
			retirementdate_ind = -1;	
		}	
	  else 	
		{	setnull(retirementdate);
		    strcpy((char*)retirementdate.arr, jpn_info->retirementdate);	
			setlen(retirementdate);
			setnull(retirementdate);
		}
		if(jpn_info->orignameind == '\0')	
		{	
			orignameind_ind = -1;	
		}	
	  else 	
		{	
		    orignameind = jpn_info->orignameind;	
		}

		if(jpn_info->surrenderdate[0] == '\0')	
		{	
			surrenderdate_ind = -1;	
		}	
	  else 	
		{	setnull(surrenderdate);
		    strcpy((char*)surrenderdate.arr, jpn_info->surrenderdate);	
			setlen(surrenderdate);
			setnull(surrenderdate);
		}
		if(jpn_info->citizennationcode[0] == '\0')	
		{	
			citizennationcode_ind = -1;	
		}	
	  else 	
		{	setnull(citizennationcode);
		    strcpy((char*)citizennationcode.arr, jpn_info->citizennationcode);	
			setlen(citizennationcode);
			setnull(citizennationcode);
		}
		if(jpn_info->applapprovaldate[0] == '\0')	
		{	
			applapprovaldate_ind = -1;	
		}	
	  else 	
		{	setnull(applapprovaldate);
		    strcpy((char*)applapprovaldate.arr, jpn_info->applapprovaldate);	
			setlen(applapprovaldate);
			setnull(applapprovaldate);
		}
		
    	if(jpn_info->greencardexpdate[0] == '\0')	
		{	
			greencardexpdate_ind = -1;	
		}	
	  else 	
		{	setnull(greencardexpdate);
		    strcpy((char*)greencardexpdate.arr, jpn_info->greencardexpdate);	
			setlen(greencardexpdate);
			setnull(greencardexpdate);
		}

		if(jpn_info->immrefno[0] == '\0')	
		{	
			immrefno_ind = -1;	
		}	
	  else 	
		{	setnull(immrefno);
		    strcpy((char*)immrefno.arr, jpn_info->immrefno);	
			setlen(immrefno);
			setnull(immrefno);
		}
	    if(jpn_info->immrefdate[0] == '\0')	
		{	
			immrefdate_ind = -1;	
		}	
	  else 	
		{	setnull(immrefdate);
		    strcpy((char*)immrefdate.arr, jpn_info->immrefdate);	
			setlen(immrefdate);
			setnull(immrefdate);
		}
		if(jpn_info->immexpirydate[0] == '\0')	
		{	
			immexpirydate_ind = -1;	
		}	
	  else 	
		{	setnull(immexpirydate);
		    strcpy((char*)immexpirydate.arr, jpn_info->immexpirydate);	
			setlen(immexpirydate);
			setnull(immexpirydate);
		}
		if(jpn_info->passportno[0] == '\0')	
		{	
			passportno_ind = -1;	
		}	
	  else 	
		{	setnull(passportno);
		    strcpy((char*)passportno.arr, jpn_info->passportno);	
			setlen(passportno);
			setnull(passportno);
		}
		if(jpn_info->passportissuedate[0] == '\0')	
		{	
			passportissuedate_ind = -1;	
		}	
	  else 	
		{	setnull(passportissuedate);
		    strcpy((char*)passportissuedate.arr, jpn_info->passportissuedate);	
			setlen(passportissuedate);
			setnull(passportissuedate);
		}
		if(jpn_info->passportisuuecountry[0] == '\0')	
		{	
			passportisuuecountry_ind = -1;	
		}	
	  else 	
		{	setnull(passportisuuecountry);
		    strcpy((char*)passportisuuecountry.arr, jpn_info->passportisuuecountry);	
			setlen(passportisuuecountry);
			setnull(passportisuuecountry);
		}
		if(jpn_info->ucflag == '\0')	
		{	
			ucflag_ind = -1;	
		}	
	  else 	
		{	
		    ucflag = jpn_info->ucflag;	
		}
		if(jpn_info->permitno[0] == '\0')	
		{	
			permitno_ind = -1;	
		}	
	  else 	
		{	setnull(permitno);
		    strcpy((char*)permitno.arr, jpn_info->permitno);	
			setlen(permitno);
			setnull(permitno);
		}
		if(jpn_info->permitissuedate[0] == '\0')	
		{	
			permitissuedate_ind = -1;	
		}	
	  else 	
		{	setnull(permitissuedate);
		    strcpy((char*)permitissuedate.arr, jpn_info->permitissuedate);
			setlen(permitissuedate);
			setnull(permitissuedate);
		}

		if(jpn_info->permittype < 0)	
		{	
			 permittype_ind = -1;	
		}	
	  else 	
		{	
		     permittype =  jpn_info->permittype;	
		}

		if(jpn_info->prdoctype < 0)	
		{	
			 prdoctype_ind = -1;	
		}	
	  else 	
		{	
		     prdoctype =  jpn_info->prdoctype;	
		}

		if(jpn_info->rjstartdate[0] == '\0')	
		{	
			rjstartdate_ind = -1;	
		}	
	  else 	
		{	setnull(rjstartdate);
		    strcpy((char*)rjstartdate.arr, jpn_info->rjstartdate);	
			setlen(rjstartdate);
			setnull(rjstartdate);
		}
		if(jpn_info->rjenddate[0] == '\0')	
		{	
			rjenddate_ind = -1;	
		}	
	  else 	
		{	setnull(rjenddate);
		    strcpy((char*)rjenddate.arr, jpn_info->rjenddate);	
			setlen(rjenddate);
			setnull(rjenddate);
		}
		if(jpn_info->ktstartdate[0] == '\0')	
		{	
			ktstartdate_ind = -1;	
		}	
	  else 	
		{	setnull(ktstartdate);
		    strcpy((char*)ktstartdate.arr, jpn_info->ktstartdate);
			setlen(ktstartdate);
			setnull(ktstartdate);
		}
		if(jpn_info->ktenddate[0] == '\0')	
		{	
			ktenddate_ind = -1;	
		}	
	  else 	
		{	setnull(ktenddate);
		    strcpy((char*)ktenddate.arr, jpn_info->ktenddate);
			setlen(ktenddate);
			setnull(ktenddate);
		}

		if(jpn_info->blklstind == '\0')	
		{	
			blklstind_ind = -1;	
		}	
	  else 	
		{	
		    blklstind = jpn_info->blklstind;	
		}

		if(jpn_info->blklstcode[0] == '\0')	
		{	
			blklstcode_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(blklstcode, jpn_info->blklstcode);
				
		}
		if(jpn_info->ktenddate[0] == '\0')	
		{	
			birthregndate_ind = -1;	
		}	
	  else 	
		{	setnull(birthregndate);
		    strcpy((char*)birthregndate.arr, jpn_info->birthregndate);	
			setlen(birthregndate);
			setnull(birthregndate);
		}
			//Added on 9th july 
		if(jpn_info->afisbypass == '\0')	
		{	
			afisbypass_ind = -1;	
		}	
	  else 	
		{	
		    afisbypass = jpn_info->afisbypass;	
		}

	  // Added on 28/05/2014 for Release 3.28
	  if(jpn_info->ktareacode[0] == '\0')	
		{	
			ktareacode_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(ktareacode, jpn_info->ktareacode);
		}

	  if(jpn_info->apjareacode[0] == '\0')	
		{	
			apjareacode_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(apjareacode, jpn_info->apjareacode);
		}
	
		
#ifdef DEBUG
	userlog("insert_jpn_info : ");
	userlog("insert_jpn_info : kptno - %s", kptno.arr);
	userlog("insert_jpn_info : birthdistrictcode  - %d", birthdistrictcode );
	userlog("insert_jpn_info : policeid - %s", policeid.arr);
	userlog("insert_jpn_info : militaryid - %s", militaryid.arr);
	userlog("insert_jpn_info : kppno - %s", kppno.arr);
	userlog("insert_jpn_info : gender - %c", gender);
	userlog("insert_jpn_info : personstatcode - %c", personstatcode);
	userlog("insert_jpn_info : birthdate - %s", birthdate.arr);
	userlog("insert_jpn_info : unknownbirthind - %c", unknownbirthind);
	userlog("insert_jpn_info : religioncode - %c", religioncode);
	userlog("insert_jpn_info : racecode - %s", racecode.arr);
	userlog("insert_jpn_info : residentstat - %c", residentstat);
	userlog("insert_jpn_info : citizenshipstatcode - %c", citizenshipstatcode);
	userlog("insert_jpn_info : colourarticlecode - %s", colourarticlecode.arr);
	userlog("insert_jpn_info : hkind - %c", hkind);
	userlog("insert_jpn_info : iccolorcode - %c", iccolorcode);
	userlog("insert_jpn_info : origname - %s", origname.arr);
	userlog("insert_jpn_info : currlongname - %s", currlongname.arr);
	userlog("insert_jpn_info : currshortname1 - %s", currshortname1.arr);
	userlog("insert_jpn_info : currshortname2 - %s", currshortname2.arr);
	userlog("insert_jpn_info : gmpcshortname1 - %s", gmpcshortname1.arr);
	userlog("insert_jpn_info : gmpcshortname2 - %s", gmpcshortname2.arr);
	userlog("insert_jpn_info : gmpcshortname3 - %s", gmpcshortname3.arr);
	userlog("insert_jpn_info : address1 - %s", address1.arr);
	userlog("insert_jpn_info : address2 - %s", address2.arr);
	userlog("insert_jpn_info : address3 - %s", address3.arr);
	userlog("insert_jpn_info : postcode - %s", postcode);
	userlog("insert_jpn_info : citycode - %d", citycode);
	userlog("insert_jpn_info : statecode - %s", statecode);
	userlog("insert_jpn_info : ktindcode - %s", ktindcode);
	userlog("insert_jpn_info : jpnremarks1 - %s", jpnremarks1.arr);
	userlog("insert_jpn_info : jpnremarks2 - %s", jpnremarks2.arr);
	userlog("insert_jpn_info : afisflag - %c", afisflag);
	userlog("insert_jpn_info : cardlostcnt - %d", cardlostcnt);
	userlog("insert_jpn_info : kptapplstat - %c", kptapplstat);
	userlog("insert_jpn_info : kptappldate - %s", kptappldate);
	userlog("insert_jpn_info : kptcollectionplaccode - %s", kptcollectionplaccode);
	userlog("insert_jpn_info : lastaddresschangedate - %s", lastaddresschangedate);
	userlog("insert_jpn_info : lastcardissuedate - %s", lastcardissuedate.arr);
	userlog("insert_jpn_info : cardversionno - %d", cardversionno);
	userlog("insert_jpn_info : juvenileflag - %c", juvenileflag);		
	userlog("insert_jpn_info : birthplace - %s", birthplace.arr);
	userlog("insert_jpn_info : rjind - %s", rjind);
	userlog("insert_jpn_info : birthcertno - %s", birthcertno);
	userlog("insert_jpn_info : kptversionno - %d", kptversionno);
	userlog("insert_jpn_info : polmilitaryjoindate - %s", polmilitaryjoindate.arr);
	userlog("insert_jpn_info : retirementdate - %s", retirementdate.arr);
	userlog("insert_jpn_info : orignameind - %c", orignameind);
	userlog("insert_jpn_info : surrenderdate - %s", surrenderdate.arr);
	userlog("insert_jpn_info : citizennationcode - %s", citizennationcode.arr);
	userlog("insert_jpn_info : applapprovaldate - %s", applapprovaldate.arr);		
	userlog("insert_jpn_info : greencardexpdate - %s", greencardexpdate.arr);
	userlog("insert_jpn_info : immrefno - %s", immrefno.arr);
	userlog("insert_jpn_info : immrefdate - %s", immrefdate.arr);
	userlog("insert_jpn_info : immexpirydate - %s", immexpirydate.arr);
	userlog("insert_jpn_info : passportno - %s", passportno.arr);
	userlog("insert_jpn_info : passportissuedate - %s", passportissuedate.arr);		
	userlog("insert_jpn_info : passportisuuecountry - %s", passportisuuecountry.arr);
	userlog("insert_jpn_info : ucflag - %c", ucflag);
	userlog("insert_jpn_info : permitno - %s", permitno.arr);
	userlog("insert_jpn_info : permitissuedate - %s", permitissuedate.arr);
	userlog("insert_jpn_info : permittype - %d", permittype);
	userlog("insert_jpn_info : prdoctype - %d", prdoctype);
	userlog("insert_jpn_info : rjstartdate - %s", rjstartdate.arr);
	userlog("insert_jpn_info : rjenddate - %s", rjenddate.arr);
	userlog("insert_jpn_info : ktstartdate - %s", ktstartdate.arr);
	userlog("insert_jpn_info : ktenddate - %s", ktenddate.arr);
	userlog("insert_jpn_info : blklstind - %c", blklstind);
	userlog("insert_jpn_info : blklstcode - %s", blklstcode);
	userlog("insert_jpn_info : birthregndate - %s", birthregndate.arr);
	userlog("insert_jpn_info : afisbypass - %c", afisbypass);
	
	userlog("insert_jpn_info : Release 3.28");
	userlog("insert_jpn_info : ktareacode - %s", ktareacode);		
	userlog("insert_jpn_info : apjareacode - %s", apjareacode);
#endif

	
		/* EXEC SQL INSERT INTO JPN_INFO(KPTNO, BIRTHDISTRICTCODE, POLICEID,
			MILITARYID, KPPNO, GENDER, PERSONSTATCODE, BIRTHDATE, 
			UNKNOWNBIRTHIND, RELIGIONCODE, RACECODE, RESIDENTSTAT, 
			CITIZENSHIPSTATCODE, COLOURARTICLECODE, HKIND, ICCOLORCODE, 
			ORIGNAME, CURRLONGNAME, CURRSHORTNAME1, CURRSHORTNAME2, 
			GMPCSHORTNAME1, GMPCSHORTNAME2, GMPCSHORTNAME3, ADDRESS1, 
			ADDRESS2, ADDRESS3, POSTCODE, CITYCODE, STATECODE, KTINDCODE,
			JPNREMARKS1, JPNREMARKS2, AFISFLAG, CARDLOSTCNT, KPTAPPLSTAT,
			KPTAPPLDATE, KPTCOLLECTIONDATE, KPTCOLLECTIONPLACCODE, 
			LASTADDCHANGEDATE, LASTCARDISSUEDATE, JUVENILEFLAG, 
			CARDVERSIONNO, BIRTHPLACE, RJIND, BIRTHCERTNO, KPTVERSIONNO,
			POLMILITARYJOINDATE, RETIREMENTDATE, ORIGNAMEIND, 
			SURRENDERDATE, CITIZENNATIONCODE, APPLAPPROVALDATE, 
			GREENCARDEXPDATE, IMMREFNO, IMMREFDATE, IMMEXPDATE, 
			PASSPORTNO, PASSPORTISSUEDDATE, PASSPORTISSUECOUNTRY, 
			UCFLAG, PERMITNO, PERMITISSUEDATE, PERMITTYPE, PRDOCTYPE, 
			RJSTARTDATE, RJENDDATE, KTSTARTDATE, KTENDDATE, BLKLSTIND, 
			BLKLSTCODE, BIRTHREGNDATE, AFISBYPASS, KTAREACODE, APJAREACODE)
		VALUES
			(:kptno,:birthdistrictcode:birthdistrictcode_ind,:policeid:policeid_ind,:militaryid:militaryid_ind,
			:kppno:kppno_ind,:gender:gender_ind,:personstatcode:personstatcode_ind,
			TO_DATE(:birthdate:birthdate_ind,'DDMMYYYY'),:unknownbirthind:unknownbirthind_ind,
			:religioncode:religioncode_ind,:racecode:racecode_ind,
			:residentstat:residentstat_ind,:citizenshipstatcode:citizenshipstatcode_ind,
			:colourarticlecode:colourarticlecode_ind,:hkind:hkind_ind,:iccolorcode:iccolorcode_ind,
			:origname:origname_ind,:currlongname:currlongname_ind,: currshortname1:currshortname1_ind,
			:currshortname2:currshortname2_ind,:gmpcshortname1:gmpcshortname1_ind,:gmpcshortname2:gmpcshortname2_ind,
			:gmpcshortname3:gmpcshortname3_ind,:address1:address1_ind,:address2:address2_ind,:address3:address3_ind,
			:postcode:postcode_ind,:citycode:citycode_ind,:statecode:statecode_ind,:ktindcode:ktindcode_ind,
			:jpnremarks1:jpnremarks1_ind,:jpnremarks2:jpnremarks2_ind,:afisflag:afisflag_ind,:cardlostcnt:cardlostcnt_ind,
			:kptapplstat:kptapplstat_ind,TO_DATE(:kptappldate:kptappldate_ind,'DDMMYYYY'),TO_DATE(:kptcollectiondate:kptcollectiondate_ind,'DDMMYYYY'),
			:kptcollectionplaccode:kptcollectionplaccode_ind,
			TO_DATE(:lastaddresschangedate:lastaddresschangedate_ind,'DDMMYYYY'),
			TO_DATE(:lastcardissuedate:lastcardissuedate_ind,'DDMMYYYY'),:juvenileflag:juvenileflag_ind,
			:cardversionno:cardversionno_ind,:birthplace:birthplace_ind,:rjind:rjind_ind,:birthcertno:birthcertno_ind,
			:kptversionno:kptversionno_ind,TO_DATE(:polmilitaryjoindate:polmilitaryjoindate_ind,'DDMMYYYY'),
			TO_DATE(:retirementdate:retirementdate_ind,'DDMMYYYY'),:orignameind:orignameind_ind,
			TO_DATe(:surrenderdate:surrenderdate_ind,'DDMMYYYY'),:citizennationcode:citizennationcode_ind,
			TO_DATE(:applapprovaldate:applapprovaldate_ind,'DDMMYYYY'),TO_DATE(:greencardexpdate:greencardexpdate_ind,'DDMMYYYY'),
			:immrefno:immrefno_ind,TO_DATE(:immrefdate:immrefdate_ind,'DDMMYYYY'),TO_DATE(:immexpirydate:immexpirydate_ind,'DDMMYYYY'),
			:passportno:passportno_ind,TO_DATE(:passportissuedate:passportissuedate_ind,'DDMMYYYY'),
			:passportisuuecountry:passportisuuecountry_ind,:ucflag:ucflag_ind,
			:permitno:permitno_ind,TO_DATE(:permitissuedate:permitissuedate_ind,'DDMMYYYY'),
			:permittype:permittype_ind,:prdoctype:prdoctype_ind,
			TO_DATE(:rjstartdate:rjstartdate_ind,'DDMMYYYY'),TO_DATE(:rjenddate:rjenddate_ind,'DDMMYYYY'),
			TO_DATE(:ktstartdate:ktstartdate_ind,'DDMMYYYY'),TO_DATE(:ktenddate:ktenddate_ind,'DDMMYYYY'),
			:blklstind:blklstind_ind,:blklstcode:blklstcode_ind,TO_DATE(:birthregndate:birthregndate_ind,'DDMMYYYY'),
			:afisbypass:afisbypass_ind,
			:ktareacode:ktareacode_ind, :apjareacode:apjareacode_ind   // Added these on 28/05/2014 for Rel 3.28
			); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 74;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlbuft(&pcCtx,
    "insert into JPN_INFO (KPTNO,BIRTHDISTRICTCODE,POLICEID,MILITARYID,KPPNO\
,GENDER,PERSONSTATCODE,BIRTHDATE,UNKNOWNBIRTHIND,RELIGIONCODE,RACECODE,RESID\
ENTSTAT,CITIZENSHIPSTATCODE,COLOURARTICLECODE,HKIND,ICCOLORCODE,ORIGNAME,CUR\
RLONGNAME,CURRSHORTNAME1,CURRSHORTNAME2,GMPCSHORTNAME1,GMPCSHORTNAME2,GMPCSH\
ORTNAME3,ADDRESS1,ADDRESS2,ADDRESS3,POSTCODE,CITYCODE,STATECODE,KTINDCODE,JP\
NREMARKS1,JPNREMARKS2,AFISFLAG,CARDLOSTCNT,KPTAPPLSTAT,KPTAPPLDATE,KPTCOLLEC\
TIONDATE,KPTCOLLECTIONPLACCODE,LASTADDCHANGEDATE,LASTCARDISSUEDATE,JUVENILEF\
LAG,CARDVERSIONNO,BIRTHPLACE,RJIND,BIRTHCERTNO,KPTVERSIONNO,POLMILITARYJOIND\
ATE,RETIREMENTDATE,ORIGNAMEIND,SURRENDERDATE,CITIZENNATIONCODE,APPLAPPROVALD\
ATE,GREENCARDEXPDATE,IMMREFNO,IMMREFDATE,IMMEXPDATE,PASSPORTNO,PASSPORTISSUE\
DDATE,PASSPORTISSUECOUNTRY,UCFLAG,PERMITNO,PERMITISSUEDATE,PERMITTYPE,PRDOCT\
YPE,RJSTARTDATE,RJENDDATE,KTSTARTDATE,KTENDDATE,BLKLSTIND,BLKLSTCODE,BIRTHRE\
GNDATE,AFISBYPASS,KTAREACODE,APJAREACODE) values (:b0,:b1:b2,:b3:b4,:b5:b6,:\
b7:b8,:b9:b10,:b11:b12,TO_DATE(:b13:b14,'");
  sqlstm.stmt = "DDMMYYYY'),:b15:b16,:b17:b18,:b19:b20,:b21:b22,:b23:b24,:b2\
5:b26,:b27:b28,:b29:b30,:b31:b32,:b33:b34,:b35:b36,:b37:b38,:b39:b40,:b41:b42,\
:b43:b44,:b45:b46,:b47:b48,:b49:b50,:b51:b52,:b53:b54,:b55:b56,:b57:b58,:b59:b\
60,:b61:b62,:b63:b64,:b65:b66,:b67:b68,TO_DATE(:b69:b70,'DDMMYYYY'),TO_DATE(:b\
71:b72,'DDMMYYYY'),:b73:b74,TO_DATE(:b75:b76,'DDMMYYYY'),TO_DATE(:b77:b78,'DDM\
MYYYY'),:b79:b80,:b81:b82,:b83:b84,:b85:b86,:b87:b88,:b89:b90,TO_DATE(:b91:b92\
,'DDMMYYYY'),TO_DATE(:b93:b94,'DDMMYYYY'),:b95:b96,TO_DATe(:b97:b98,'DDMMYYYY'\
),:b99:b100,TO_DATE(:b101:b102,'DDMMYYYY'),TO_DATE(:b103:b104,'DDMMYYYY'),:b10\
5:b106,TO_DATE(:b107:b108,'DDMMYYYY'),TO_DATE(:b109:b110,'DDMMYYYY'),:b111:b11\
2,TO_DATE(:b113:b114,'DDMMYYYY'),:b115:b116,:b117:b118,:b119:b120,TO_DATE(:b12\
1:b122,'DDMMYYYY'),:b123:b124,:b125:b126,TO_DATE(:b127:b128,'DDMMYYYY'),TO_DAT\
E(:b129:b130,'DDMMYYYY'),TO_DATE(:b131:b132,'DDMMYYYY'),TO_DATE(:b133:b134,'DD\
MMYYYY'),:b135:b136,:b137:b138,TO_DATE(:b139:b140,'DDMMYYYY'),:b141:b142,:b143\
:b144,:b145:b146)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )3747;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&kptno;
  sqlstm.sqhstl[0] = (unsigned int  )15;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&birthdistrictcode;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&birthdistrictcode_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&policeid;
  sqlstm.sqhstl[2] = (unsigned int  )14;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&policeid_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&militaryid;
  sqlstm.sqhstl[3] = (unsigned int  )14;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&militaryid_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&kppno;
  sqlstm.sqhstl[4] = (unsigned int  )11;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&kppno_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&gender;
  sqlstm.sqhstl[5] = (unsigned int  )1;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&gender_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&personstatcode;
  sqlstm.sqhstl[6] = (unsigned int  )1;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&personstatcode_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&birthdate;
  sqlstm.sqhstl[7] = (unsigned int  )11;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&birthdate_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&unknownbirthind;
  sqlstm.sqhstl[8] = (unsigned int  )1;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&unknownbirthind_ind;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&religioncode;
  sqlstm.sqhstl[9] = (unsigned int  )1;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)&religioncode_ind;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&racecode;
  sqlstm.sqhstl[10] = (unsigned int  )7;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)&racecode_ind;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)&residentstat;
  sqlstm.sqhstl[11] = (unsigned int  )1;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)&residentstat_ind;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqhstv[12] = (         void  *)&citizenshipstatcode;
  sqlstm.sqhstl[12] = (unsigned int  )1;
  sqlstm.sqhsts[12] = (         int  )0;
  sqlstm.sqindv[12] = (         void  *)&citizenshipstatcode_ind;
  sqlstm.sqinds[12] = (         int  )0;
  sqlstm.sqharm[12] = (unsigned int  )0;
  sqlstm.sqadto[12] = (unsigned short )0;
  sqlstm.sqtdso[12] = (unsigned short )0;
  sqlstm.sqhstv[13] = (         void  *)&colourarticlecode;
  sqlstm.sqhstl[13] = (unsigned int  )5;
  sqlstm.sqhsts[13] = (         int  )0;
  sqlstm.sqindv[13] = (         void  *)&colourarticlecode_ind;
  sqlstm.sqinds[13] = (         int  )0;
  sqlstm.sqharm[13] = (unsigned int  )0;
  sqlstm.sqadto[13] = (unsigned short )0;
  sqlstm.sqtdso[13] = (unsigned short )0;
  sqlstm.sqhstv[14] = (         void  *)&hkind;
  sqlstm.sqhstl[14] = (unsigned int  )1;
  sqlstm.sqhsts[14] = (         int  )0;
  sqlstm.sqindv[14] = (         void  *)&hkind_ind;
  sqlstm.sqinds[14] = (         int  )0;
  sqlstm.sqharm[14] = (unsigned int  )0;
  sqlstm.sqadto[14] = (unsigned short )0;
  sqlstm.sqtdso[14] = (unsigned short )0;
  sqlstm.sqhstv[15] = (         void  *)&iccolorcode;
  sqlstm.sqhstl[15] = (unsigned int  )1;
  sqlstm.sqhsts[15] = (         int  )0;
  sqlstm.sqindv[15] = (         void  *)&iccolorcode_ind;
  sqlstm.sqinds[15] = (         int  )0;
  sqlstm.sqharm[15] = (unsigned int  )0;
  sqlstm.sqadto[15] = (unsigned short )0;
  sqlstm.sqtdso[15] = (unsigned short )0;
  sqlstm.sqhstv[16] = (         void  *)&origname;
  sqlstm.sqhstl[16] = (unsigned int  )153;
  sqlstm.sqhsts[16] = (         int  )0;
  sqlstm.sqindv[16] = (         void  *)&origname_ind;
  sqlstm.sqinds[16] = (         int  )0;
  sqlstm.sqharm[16] = (unsigned int  )0;
  sqlstm.sqadto[16] = (unsigned short )0;
  sqlstm.sqtdso[16] = (unsigned short )0;
  sqlstm.sqhstv[17] = (         void  *)&currlongname;
  sqlstm.sqhstl[17] = (unsigned int  )153;
  sqlstm.sqhsts[17] = (         int  )0;
  sqlstm.sqindv[17] = (         void  *)&currlongname_ind;
  sqlstm.sqinds[17] = (         int  )0;
  sqlstm.sqharm[17] = (unsigned int  )0;
  sqlstm.sqadto[17] = (unsigned short )0;
  sqlstm.sqtdso[17] = (unsigned short )0;
  sqlstm.sqhstv[18] = (         void  *)&currshortname1;
  sqlstm.sqhstl[18] = (unsigned int  )23;
  sqlstm.sqhsts[18] = (         int  )0;
  sqlstm.sqindv[18] = (         void  *)&currshortname1_ind;
  sqlstm.sqinds[18] = (         int  )0;
  sqlstm.sqharm[18] = (unsigned int  )0;
  sqlstm.sqadto[18] = (unsigned short )0;
  sqlstm.sqtdso[18] = (unsigned short )0;
  sqlstm.sqhstv[19] = (         void  *)&currshortname2;
  sqlstm.sqhstl[19] = (unsigned int  )23;
  sqlstm.sqhsts[19] = (         int  )0;
  sqlstm.sqindv[19] = (         void  *)&currshortname2_ind;
  sqlstm.sqinds[19] = (         int  )0;
  sqlstm.sqharm[19] = (unsigned int  )0;
  sqlstm.sqadto[19] = (unsigned short )0;
  sqlstm.sqtdso[19] = (unsigned short )0;
  sqlstm.sqhstv[20] = (         void  *)&gmpcshortname1;
  sqlstm.sqhstl[20] = (unsigned int  )33;
  sqlstm.sqhsts[20] = (         int  )0;
  sqlstm.sqindv[20] = (         void  *)&gmpcshortname1_ind;
  sqlstm.sqinds[20] = (         int  )0;
  sqlstm.sqharm[20] = (unsigned int  )0;
  sqlstm.sqadto[20] = (unsigned short )0;
  sqlstm.sqtdso[20] = (unsigned short )0;
  sqlstm.sqhstv[21] = (         void  *)&gmpcshortname2;
  sqlstm.sqhstl[21] = (unsigned int  )33;
  sqlstm.sqhsts[21] = (         int  )0;
  sqlstm.sqindv[21] = (         void  *)&gmpcshortname2_ind;
  sqlstm.sqinds[21] = (         int  )0;
  sqlstm.sqharm[21] = (unsigned int  )0;
  sqlstm.sqadto[21] = (unsigned short )0;
  sqlstm.sqtdso[21] = (unsigned short )0;
  sqlstm.sqhstv[22] = (         void  *)&gmpcshortname3;
  sqlstm.sqhstl[22] = (unsigned int  )23;
  sqlstm.sqhsts[22] = (         int  )0;
  sqlstm.sqindv[22] = (         void  *)&gmpcshortname3_ind;
  sqlstm.sqinds[22] = (         int  )0;
  sqlstm.sqharm[22] = (unsigned int  )0;
  sqlstm.sqadto[22] = (unsigned short )0;
  sqlstm.sqtdso[22] = (unsigned short )0;
  sqlstm.sqhstv[23] = (         void  *)&address1;
  sqlstm.sqhstl[23] = (unsigned int  )33;
  sqlstm.sqhsts[23] = (         int  )0;
  sqlstm.sqindv[23] = (         void  *)&address1_ind;
  sqlstm.sqinds[23] = (         int  )0;
  sqlstm.sqharm[23] = (unsigned int  )0;
  sqlstm.sqadto[23] = (unsigned short )0;
  sqlstm.sqtdso[23] = (unsigned short )0;
  sqlstm.sqhstv[24] = (         void  *)&address2;
  sqlstm.sqhstl[24] = (unsigned int  )33;
  sqlstm.sqhsts[24] = (         int  )0;
  sqlstm.sqindv[24] = (         void  *)&address2_ind;
  sqlstm.sqinds[24] = (         int  )0;
  sqlstm.sqharm[24] = (unsigned int  )0;
  sqlstm.sqadto[24] = (unsigned short )0;
  sqlstm.sqtdso[24] = (unsigned short )0;
  sqlstm.sqhstv[25] = (         void  *)&address3;
  sqlstm.sqhstl[25] = (unsigned int  )33;
  sqlstm.sqhsts[25] = (         int  )0;
  sqlstm.sqindv[25] = (         void  *)&address3_ind;
  sqlstm.sqinds[25] = (         int  )0;
  sqlstm.sqharm[25] = (unsigned int  )0;
  sqlstm.sqadto[25] = (unsigned short )0;
  sqlstm.sqtdso[25] = (unsigned short )0;
  sqlstm.sqhstv[26] = (         void  *)postcode;
  sqlstm.sqhstl[26] = (unsigned int  )6;
  sqlstm.sqhsts[26] = (         int  )0;
  sqlstm.sqindv[26] = (         void  *)&postcode_ind;
  sqlstm.sqinds[26] = (         int  )0;
  sqlstm.sqharm[26] = (unsigned int  )0;
  sqlstm.sqadto[26] = (unsigned short )0;
  sqlstm.sqtdso[26] = (unsigned short )0;
  sqlstm.sqhstv[27] = (         void  *)&citycode;
  sqlstm.sqhstl[27] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[27] = (         int  )0;
  sqlstm.sqindv[27] = (         void  *)&citycode_ind;
  sqlstm.sqinds[27] = (         int  )0;
  sqlstm.sqharm[27] = (unsigned int  )0;
  sqlstm.sqadto[27] = (unsigned short )0;
  sqlstm.sqtdso[27] = (unsigned short )0;
  sqlstm.sqhstv[28] = (         void  *)statecode;
  sqlstm.sqhstl[28] = (unsigned int  )3;
  sqlstm.sqhsts[28] = (         int  )0;
  sqlstm.sqindv[28] = (         void  *)&statecode_ind;
  sqlstm.sqinds[28] = (         int  )0;
  sqlstm.sqharm[28] = (unsigned int  )0;
  sqlstm.sqadto[28] = (unsigned short )0;
  sqlstm.sqtdso[28] = (unsigned short )0;
  sqlstm.sqhstv[29] = (         void  *)ktindcode;
  sqlstm.sqhstl[29] = (unsigned int  )3;
  sqlstm.sqhsts[29] = (         int  )0;
  sqlstm.sqindv[29] = (         void  *)&ktindcode_ind;
  sqlstm.sqinds[29] = (         int  )0;
  sqlstm.sqharm[29] = (unsigned int  )0;
  sqlstm.sqadto[29] = (unsigned short )0;
  sqlstm.sqtdso[29] = (unsigned short )0;
  sqlstm.sqhstv[30] = (         void  *)&jpnremarks1;
  sqlstm.sqhstl[30] = (unsigned int  )63;
  sqlstm.sqhsts[30] = (         int  )0;
  sqlstm.sqindv[30] = (         void  *)&jpnremarks1_ind;
  sqlstm.sqinds[30] = (         int  )0;
  sqlstm.sqharm[30] = (unsigned int  )0;
  sqlstm.sqadto[30] = (unsigned short )0;
  sqlstm.sqtdso[30] = (unsigned short )0;
  sqlstm.sqhstv[31] = (         void  *)&jpnremarks2;
  sqlstm.sqhstl[31] = (unsigned int  )63;
  sqlstm.sqhsts[31] = (         int  )0;
  sqlstm.sqindv[31] = (         void  *)&jpnremarks2_ind;
  sqlstm.sqinds[31] = (         int  )0;
  sqlstm.sqharm[31] = (unsigned int  )0;
  sqlstm.sqadto[31] = (unsigned short )0;
  sqlstm.sqtdso[31] = (unsigned short )0;
  sqlstm.sqhstv[32] = (         void  *)&afisflag;
  sqlstm.sqhstl[32] = (unsigned int  )1;
  sqlstm.sqhsts[32] = (         int  )0;
  sqlstm.sqindv[32] = (         void  *)&afisflag_ind;
  sqlstm.sqinds[32] = (         int  )0;
  sqlstm.sqharm[32] = (unsigned int  )0;
  sqlstm.sqadto[32] = (unsigned short )0;
  sqlstm.sqtdso[32] = (unsigned short )0;
  sqlstm.sqhstv[33] = (         void  *)&cardlostcnt;
  sqlstm.sqhstl[33] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[33] = (         int  )0;
  sqlstm.sqindv[33] = (         void  *)&cardlostcnt_ind;
  sqlstm.sqinds[33] = (         int  )0;
  sqlstm.sqharm[33] = (unsigned int  )0;
  sqlstm.sqadto[33] = (unsigned short )0;
  sqlstm.sqtdso[33] = (unsigned short )0;
  sqlstm.sqhstv[34] = (         void  *)&kptapplstat;
  sqlstm.sqhstl[34] = (unsigned int  )1;
  sqlstm.sqhsts[34] = (         int  )0;
  sqlstm.sqindv[34] = (         void  *)&kptapplstat_ind;
  sqlstm.sqinds[34] = (         int  )0;
  sqlstm.sqharm[34] = (unsigned int  )0;
  sqlstm.sqadto[34] = (unsigned short )0;
  sqlstm.sqtdso[34] = (unsigned short )0;
  sqlstm.sqhstv[35] = (         void  *)kptappldate;
  sqlstm.sqhstl[35] = (unsigned int  )9;
  sqlstm.sqhsts[35] = (         int  )0;
  sqlstm.sqindv[35] = (         void  *)&kptappldate_ind;
  sqlstm.sqinds[35] = (         int  )0;
  sqlstm.sqharm[35] = (unsigned int  )0;
  sqlstm.sqadto[35] = (unsigned short )0;
  sqlstm.sqtdso[35] = (unsigned short )0;
  sqlstm.sqhstv[36] = (         void  *)kptcollectiondate;
  sqlstm.sqhstl[36] = (unsigned int  )9;
  sqlstm.sqhsts[36] = (         int  )0;
  sqlstm.sqindv[36] = (         void  *)&kptcollectiondate_ind;
  sqlstm.sqinds[36] = (         int  )0;
  sqlstm.sqharm[36] = (unsigned int  )0;
  sqlstm.sqadto[36] = (unsigned short )0;
  sqlstm.sqtdso[36] = (unsigned short )0;
  sqlstm.sqhstv[37] = (         void  *)kptcollectionplaccode;
  sqlstm.sqhstl[37] = (unsigned int  )10;
  sqlstm.sqhsts[37] = (         int  )0;
  sqlstm.sqindv[37] = (         void  *)&kptcollectionplaccode_ind;
  sqlstm.sqinds[37] = (         int  )0;
  sqlstm.sqharm[37] = (unsigned int  )0;
  sqlstm.sqadto[37] = (unsigned short )0;
  sqlstm.sqtdso[37] = (unsigned short )0;
  sqlstm.sqhstv[38] = (         void  *)lastaddresschangedate;
  sqlstm.sqhstl[38] = (unsigned int  )9;
  sqlstm.sqhsts[38] = (         int  )0;
  sqlstm.sqindv[38] = (         void  *)&lastaddresschangedate_ind;
  sqlstm.sqinds[38] = (         int  )0;
  sqlstm.sqharm[38] = (unsigned int  )0;
  sqlstm.sqadto[38] = (unsigned short )0;
  sqlstm.sqtdso[38] = (unsigned short )0;
  sqlstm.sqhstv[39] = (         void  *)&lastcardissuedate;
  sqlstm.sqhstl[39] = (unsigned int  )11;
  sqlstm.sqhsts[39] = (         int  )0;
  sqlstm.sqindv[39] = (         void  *)&lastcardissuedate_ind;
  sqlstm.sqinds[39] = (         int  )0;
  sqlstm.sqharm[39] = (unsigned int  )0;
  sqlstm.sqadto[39] = (unsigned short )0;
  sqlstm.sqtdso[39] = (unsigned short )0;
  sqlstm.sqhstv[40] = (         void  *)&juvenileflag;
  sqlstm.sqhstl[40] = (unsigned int  )1;
  sqlstm.sqhsts[40] = (         int  )0;
  sqlstm.sqindv[40] = (         void  *)&juvenileflag_ind;
  sqlstm.sqinds[40] = (         int  )0;
  sqlstm.sqharm[40] = (unsigned int  )0;
  sqlstm.sqadto[40] = (unsigned short )0;
  sqlstm.sqtdso[40] = (unsigned short )0;
  sqlstm.sqhstv[41] = (         void  *)&cardversionno;
  sqlstm.sqhstl[41] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[41] = (         int  )0;
  sqlstm.sqindv[41] = (         void  *)&cardversionno_ind;
  sqlstm.sqinds[41] = (         int  )0;
  sqlstm.sqharm[41] = (unsigned int  )0;
  sqlstm.sqadto[41] = (unsigned short )0;
  sqlstm.sqtdso[41] = (unsigned short )0;
  sqlstm.sqhstv[42] = (         void  *)&birthplace;
  sqlstm.sqhstl[42] = (unsigned int  )28;
  sqlstm.sqhsts[42] = (         int  )0;
  sqlstm.sqindv[42] = (         void  *)&birthplace_ind;
  sqlstm.sqinds[42] = (         int  )0;
  sqlstm.sqharm[42] = (unsigned int  )0;
  sqlstm.sqadto[42] = (unsigned short )0;
  sqlstm.sqtdso[42] = (unsigned short )0;
  sqlstm.sqhstv[43] = (         void  *)rjind;
  sqlstm.sqhstl[43] = (unsigned int  )3;
  sqlstm.sqhsts[43] = (         int  )0;
  sqlstm.sqindv[43] = (         void  *)&rjind_ind;
  sqlstm.sqinds[43] = (         int  )0;
  sqlstm.sqharm[43] = (unsigned int  )0;
  sqlstm.sqadto[43] = (unsigned short )0;
  sqlstm.sqtdso[43] = (unsigned short )0;
  sqlstm.sqhstv[44] = (         void  *)birthcertno;
  sqlstm.sqhstl[44] = (unsigned int  )16;
  sqlstm.sqhsts[44] = (         int  )0;
  sqlstm.sqindv[44] = (         void  *)&birthcertno_ind;
  sqlstm.sqinds[44] = (         int  )0;
  sqlstm.sqharm[44] = (unsigned int  )0;
  sqlstm.sqadto[44] = (unsigned short )0;
  sqlstm.sqtdso[44] = (unsigned short )0;
  sqlstm.sqhstv[45] = (         void  *)&kptversionno;
  sqlstm.sqhstl[45] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[45] = (         int  )0;
  sqlstm.sqindv[45] = (         void  *)&kptversionno_ind;
  sqlstm.sqinds[45] = (         int  )0;
  sqlstm.sqharm[45] = (unsigned int  )0;
  sqlstm.sqadto[45] = (unsigned short )0;
  sqlstm.sqtdso[45] = (unsigned short )0;
  sqlstm.sqhstv[46] = (         void  *)&polmilitaryjoindate;
  sqlstm.sqhstl[46] = (unsigned int  )11;
  sqlstm.sqhsts[46] = (         int  )0;
  sqlstm.sqindv[46] = (         void  *)&polmilitaryjoindate_ind;
  sqlstm.sqinds[46] = (         int  )0;
  sqlstm.sqharm[46] = (unsigned int  )0;
  sqlstm.sqadto[46] = (unsigned short )0;
  sqlstm.sqtdso[46] = (unsigned short )0;
  sqlstm.sqhstv[47] = (         void  *)&retirementdate;
  sqlstm.sqhstl[47] = (unsigned int  )11;
  sqlstm.sqhsts[47] = (         int  )0;
  sqlstm.sqindv[47] = (         void  *)&retirementdate_ind;
  sqlstm.sqinds[47] = (         int  )0;
  sqlstm.sqharm[47] = (unsigned int  )0;
  sqlstm.sqadto[47] = (unsigned short )0;
  sqlstm.sqtdso[47] = (unsigned short )0;
  sqlstm.sqhstv[48] = (         void  *)&orignameind;
  sqlstm.sqhstl[48] = (unsigned int  )1;
  sqlstm.sqhsts[48] = (         int  )0;
  sqlstm.sqindv[48] = (         void  *)&orignameind_ind;
  sqlstm.sqinds[48] = (         int  )0;
  sqlstm.sqharm[48] = (unsigned int  )0;
  sqlstm.sqadto[48] = (unsigned short )0;
  sqlstm.sqtdso[48] = (unsigned short )0;
  sqlstm.sqhstv[49] = (         void  *)&surrenderdate;
  sqlstm.sqhstl[49] = (unsigned int  )11;
  sqlstm.sqhsts[49] = (         int  )0;
  sqlstm.sqindv[49] = (         void  *)&surrenderdate_ind;
  sqlstm.sqinds[49] = (         int  )0;
  sqlstm.sqharm[49] = (unsigned int  )0;
  sqlstm.sqadto[49] = (unsigned short )0;
  sqlstm.sqtdso[49] = (unsigned short )0;
  sqlstm.sqhstv[50] = (         void  *)&citizennationcode;
  sqlstm.sqhstl[50] = (unsigned int  )7;
  sqlstm.sqhsts[50] = (         int  )0;
  sqlstm.sqindv[50] = (         void  *)&citizennationcode_ind;
  sqlstm.sqinds[50] = (         int  )0;
  sqlstm.sqharm[50] = (unsigned int  )0;
  sqlstm.sqadto[50] = (unsigned short )0;
  sqlstm.sqtdso[50] = (unsigned short )0;
  sqlstm.sqhstv[51] = (         void  *)&applapprovaldate;
  sqlstm.sqhstl[51] = (unsigned int  )11;
  sqlstm.sqhsts[51] = (         int  )0;
  sqlstm.sqindv[51] = (         void  *)&applapprovaldate_ind;
  sqlstm.sqinds[51] = (         int  )0;
  sqlstm.sqharm[51] = (unsigned int  )0;
  sqlstm.sqadto[51] = (unsigned short )0;
  sqlstm.sqtdso[51] = (unsigned short )0;
  sqlstm.sqhstv[52] = (         void  *)&greencardexpdate;
  sqlstm.sqhstl[52] = (unsigned int  )11;
  sqlstm.sqhsts[52] = (         int  )0;
  sqlstm.sqindv[52] = (         void  *)&greencardexpdate_ind;
  sqlstm.sqinds[52] = (         int  )0;
  sqlstm.sqharm[52] = (unsigned int  )0;
  sqlstm.sqadto[52] = (unsigned short )0;
  sqlstm.sqtdso[52] = (unsigned short )0;
  sqlstm.sqhstv[53] = (         void  *)&immrefno;
  sqlstm.sqhstl[53] = (unsigned int  )33;
  sqlstm.sqhsts[53] = (         int  )0;
  sqlstm.sqindv[53] = (         void  *)&immrefno_ind;
  sqlstm.sqinds[53] = (         int  )0;
  sqlstm.sqharm[53] = (unsigned int  )0;
  sqlstm.sqadto[53] = (unsigned short )0;
  sqlstm.sqtdso[53] = (unsigned short )0;
  sqlstm.sqhstv[54] = (         void  *)&immrefdate;
  sqlstm.sqhstl[54] = (unsigned int  )11;
  sqlstm.sqhsts[54] = (         int  )0;
  sqlstm.sqindv[54] = (         void  *)&immrefdate_ind;
  sqlstm.sqinds[54] = (         int  )0;
  sqlstm.sqharm[54] = (unsigned int  )0;
  sqlstm.sqadto[54] = (unsigned short )0;
  sqlstm.sqtdso[54] = (unsigned short )0;
  sqlstm.sqhstv[55] = (         void  *)&immexpirydate;
  sqlstm.sqhstl[55] = (unsigned int  )11;
  sqlstm.sqhsts[55] = (         int  )0;
  sqlstm.sqindv[55] = (         void  *)&immexpirydate_ind;
  sqlstm.sqinds[55] = (         int  )0;
  sqlstm.sqharm[55] = (unsigned int  )0;
  sqlstm.sqadto[55] = (unsigned short )0;
  sqlstm.sqtdso[55] = (unsigned short )0;
  sqlstm.sqhstv[56] = (         void  *)&passportno;
  sqlstm.sqhstl[56] = (unsigned int  )18;
  sqlstm.sqhsts[56] = (         int  )0;
  sqlstm.sqindv[56] = (         void  *)&passportno_ind;
  sqlstm.sqinds[56] = (         int  )0;
  sqlstm.sqharm[56] = (unsigned int  )0;
  sqlstm.sqadto[56] = (unsigned short )0;
  sqlstm.sqtdso[56] = (unsigned short )0;
  sqlstm.sqhstv[57] = (         void  *)&passportissuedate;
  sqlstm.sqhstl[57] = (unsigned int  )11;
  sqlstm.sqhsts[57] = (         int  )0;
  sqlstm.sqindv[57] = (         void  *)&passportissuedate_ind;
  sqlstm.sqinds[57] = (         int  )0;
  sqlstm.sqharm[57] = (unsigned int  )0;
  sqlstm.sqadto[57] = (unsigned short )0;
  sqlstm.sqtdso[57] = (unsigned short )0;
  sqlstm.sqhstv[58] = (         void  *)&passportisuuecountry;
  sqlstm.sqhstl[58] = (unsigned int  )7;
  sqlstm.sqhsts[58] = (         int  )0;
  sqlstm.sqindv[58] = (         void  *)&passportisuuecountry_ind;
  sqlstm.sqinds[58] = (         int  )0;
  sqlstm.sqharm[58] = (unsigned int  )0;
  sqlstm.sqadto[58] = (unsigned short )0;
  sqlstm.sqtdso[58] = (unsigned short )0;
  sqlstm.sqhstv[59] = (         void  *)&ucflag;
  sqlstm.sqhstl[59] = (unsigned int  )1;
  sqlstm.sqhsts[59] = (         int  )0;
  sqlstm.sqindv[59] = (         void  *)&ucflag_ind;
  sqlstm.sqinds[59] = (         int  )0;
  sqlstm.sqharm[59] = (unsigned int  )0;
  sqlstm.sqadto[59] = (unsigned short )0;
  sqlstm.sqtdso[59] = (unsigned short )0;
  sqlstm.sqhstv[60] = (         void  *)&permitno;
  sqlstm.sqhstl[60] = (unsigned int  )15;
  sqlstm.sqhsts[60] = (         int  )0;
  sqlstm.sqindv[60] = (         void  *)&permitno_ind;
  sqlstm.sqinds[60] = (         int  )0;
  sqlstm.sqharm[60] = (unsigned int  )0;
  sqlstm.sqadto[60] = (unsigned short )0;
  sqlstm.sqtdso[60] = (unsigned short )0;
  sqlstm.sqhstv[61] = (         void  *)&permitissuedate;
  sqlstm.sqhstl[61] = (unsigned int  )11;
  sqlstm.sqhsts[61] = (         int  )0;
  sqlstm.sqindv[61] = (         void  *)&permitissuedate_ind;
  sqlstm.sqinds[61] = (         int  )0;
  sqlstm.sqharm[61] = (unsigned int  )0;
  sqlstm.sqadto[61] = (unsigned short )0;
  sqlstm.sqtdso[61] = (unsigned short )0;
  sqlstm.sqhstv[62] = (         void  *)&permittype;
  sqlstm.sqhstl[62] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[62] = (         int  )0;
  sqlstm.sqindv[62] = (         void  *)&permittype_ind;
  sqlstm.sqinds[62] = (         int  )0;
  sqlstm.sqharm[62] = (unsigned int  )0;
  sqlstm.sqadto[62] = (unsigned short )0;
  sqlstm.sqtdso[62] = (unsigned short )0;
  sqlstm.sqhstv[63] = (         void  *)&prdoctype;
  sqlstm.sqhstl[63] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[63] = (         int  )0;
  sqlstm.sqindv[63] = (         void  *)&prdoctype_ind;
  sqlstm.sqinds[63] = (         int  )0;
  sqlstm.sqharm[63] = (unsigned int  )0;
  sqlstm.sqadto[63] = (unsigned short )0;
  sqlstm.sqtdso[63] = (unsigned short )0;
  sqlstm.sqhstv[64] = (         void  *)&rjstartdate;
  sqlstm.sqhstl[64] = (unsigned int  )11;
  sqlstm.sqhsts[64] = (         int  )0;
  sqlstm.sqindv[64] = (         void  *)&rjstartdate_ind;
  sqlstm.sqinds[64] = (         int  )0;
  sqlstm.sqharm[64] = (unsigned int  )0;
  sqlstm.sqadto[64] = (unsigned short )0;
  sqlstm.sqtdso[64] = (unsigned short )0;
  sqlstm.sqhstv[65] = (         void  *)&rjenddate;
  sqlstm.sqhstl[65] = (unsigned int  )11;
  sqlstm.sqhsts[65] = (         int  )0;
  sqlstm.sqindv[65] = (         void  *)&rjenddate_ind;
  sqlstm.sqinds[65] = (         int  )0;
  sqlstm.sqharm[65] = (unsigned int  )0;
  sqlstm.sqadto[65] = (unsigned short )0;
  sqlstm.sqtdso[65] = (unsigned short )0;
  sqlstm.sqhstv[66] = (         void  *)&ktstartdate;
  sqlstm.sqhstl[66] = (unsigned int  )11;
  sqlstm.sqhsts[66] = (         int  )0;
  sqlstm.sqindv[66] = (         void  *)&ktstartdate_ind;
  sqlstm.sqinds[66] = (         int  )0;
  sqlstm.sqharm[66] = (unsigned int  )0;
  sqlstm.sqadto[66] = (unsigned short )0;
  sqlstm.sqtdso[66] = (unsigned short )0;
  sqlstm.sqhstv[67] = (         void  *)&ktenddate;
  sqlstm.sqhstl[67] = (unsigned int  )11;
  sqlstm.sqhsts[67] = (         int  )0;
  sqlstm.sqindv[67] = (         void  *)&ktenddate_ind;
  sqlstm.sqinds[67] = (         int  )0;
  sqlstm.sqharm[67] = (unsigned int  )0;
  sqlstm.sqadto[67] = (unsigned short )0;
  sqlstm.sqtdso[67] = (unsigned short )0;
  sqlstm.sqhstv[68] = (         void  *)&blklstind;
  sqlstm.sqhstl[68] = (unsigned int  )1;
  sqlstm.sqhsts[68] = (         int  )0;
  sqlstm.sqindv[68] = (         void  *)&blklstind_ind;
  sqlstm.sqinds[68] = (         int  )0;
  sqlstm.sqharm[68] = (unsigned int  )0;
  sqlstm.sqadto[68] = (unsigned short )0;
  sqlstm.sqtdso[68] = (unsigned short )0;
  sqlstm.sqhstv[69] = (         void  *)blklstcode;
  sqlstm.sqhstl[69] = (unsigned int  )3;
  sqlstm.sqhsts[69] = (         int  )0;
  sqlstm.sqindv[69] = (         void  *)&blklstcode_ind;
  sqlstm.sqinds[69] = (         int  )0;
  sqlstm.sqharm[69] = (unsigned int  )0;
  sqlstm.sqadto[69] = (unsigned short )0;
  sqlstm.sqtdso[69] = (unsigned short )0;
  sqlstm.sqhstv[70] = (         void  *)&birthregndate;
  sqlstm.sqhstl[70] = (unsigned int  )11;
  sqlstm.sqhsts[70] = (         int  )0;
  sqlstm.sqindv[70] = (         void  *)&birthregndate_ind;
  sqlstm.sqinds[70] = (         int  )0;
  sqlstm.sqharm[70] = (unsigned int  )0;
  sqlstm.sqadto[70] = (unsigned short )0;
  sqlstm.sqtdso[70] = (unsigned short )0;
  sqlstm.sqhstv[71] = (         void  *)&afisbypass;
  sqlstm.sqhstl[71] = (unsigned int  )1;
  sqlstm.sqhsts[71] = (         int  )0;
  sqlstm.sqindv[71] = (         void  *)&afisbypass_ind;
  sqlstm.sqinds[71] = (         int  )0;
  sqlstm.sqharm[71] = (unsigned int  )0;
  sqlstm.sqadto[71] = (unsigned short )0;
  sqlstm.sqtdso[71] = (unsigned short )0;
  sqlstm.sqhstv[72] = (         void  *)ktareacode;
  sqlstm.sqhstl[72] = (unsigned int  )7;
  sqlstm.sqhsts[72] = (         int  )0;
  sqlstm.sqindv[72] = (         void  *)&ktareacode_ind;
  sqlstm.sqinds[72] = (         int  )0;
  sqlstm.sqharm[72] = (unsigned int  )0;
  sqlstm.sqadto[72] = (unsigned short )0;
  sqlstm.sqtdso[72] = (unsigned short )0;
  sqlstm.sqhstv[73] = (         void  *)apjareacode;
  sqlstm.sqhstl[73] = (unsigned int  )9;
  sqlstm.sqhsts[73] = (         int  )0;
  sqlstm.sqindv[73] = (         void  *)&apjareacode_ind;
  sqlstm.sqinds[73] = (         int  )0;
  sqlstm.sqharm[73] = (unsigned int  )0;
  sqlstm.sqadto[73] = (unsigned short )0;
  sqlstm.sqtdso[73] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



			 
		if(SQLCODE != 0 && SQLCODE != -1)
		{
		#ifdef DEBUG
			userlog(" insert_jpn_info : Insert into JPN_INFO failed : %s", SQLMSG);
		#endif
			strcpy(prog_log.remarks,"insert_jpn_info: Insert into JPN_INFO failed ");
			sprintf(excep_log.error_msg, "insert_jpn_info: Insert into JPN_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		}

	#ifdef DEBUG
		userlog("insert_jpn_info : Record inserted successfully");
	#endif



	return SUCCESS;

}

  /* Added on 17 FEB 2005 for IJPN */

/********************************************************************************/
/* Function name: insert_jpn_sb_info											*/
/* Description	: This function inserts the info into  JPN_SB_INFO table    	*/
/* Input		: Pointer to JPN_SB_INFO_T structure, Structure count        	*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_jpn_sb_info(JPN_SB_INFO_T *jpn_sb_info,void * ctx)
{
struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


    /* varchar address1[ADDRESS1_SIZE]; */ 
struct { unsigned short len; unsigned char arr[31]; } address1;
 
	/* varchar address2[ADDRESS1_SIZE]; */ 
struct { unsigned short len; unsigned char arr[31]; } address2;
 
	/* varchar address3[ADDRESS1_SIZE]; */ 
struct { unsigned short len; unsigned char arr[31]; } address3;
 
	/* varchar birthdate[DATE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } birthdate;

	char birthplace[BIRTH_PLACE_CODE_SIZE]; 
	int citycode;
	/* varchar currlongname[CUR_LONG_NAME_SIZE]; */ 
struct { unsigned short len; unsigned char arr[151]; } currlongname;
 
	char gender;
	/* varchar gmpcshortname1[GMPC_SNAME1_SIZE]; */ 
struct { unsigned short len; unsigned char arr[31]; } gmpcshortname1;
 
	/* varchar gmpcshortname2[GMPC_SNAME1_SIZE]; */ 
struct { unsigned short len; unsigned char arr[31]; } gmpcshortname2;
 
	/* varchar gmpcshortname3[GMPC_SNAME3_SIZE]; */ 
struct { unsigned short len; unsigned char arr[21]; } gmpcshortname3;
 
	char hkind;
	char iccolorcode;
	/* varchar kptno[KPT_SIZE]; */ 
struct { unsigned short len; unsigned char arr[13]; } kptno;
 
	char militaryid[MILITARY_ID_SIZE]; 
	/* varchar origname[ORIG_NAME_SIZE]; */ 
struct { unsigned short len; unsigned char arr[151]; } origname;
 
	char policeid[POLICE_ID_SIZE]; 
	char postcode[POST_CODE_SIZE]; 
	char racecode[RACE_CODE_SIZE]; 
	char religioncode;
	char rjind[RJ_SIZE]; 
	char statecode[STATE_CODE_SIZE]; 
	/* varchar idtype[ID_TYPE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[3]; } idtype;
 
	/* varchar idno[ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[16]; } idno;
 
	/* varchar sbcardexpdate[DATE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } sbcardexpdate;



	
	short address1_ind = 0;
	short address2_ind = 0;
	short address3_ind = 0;
	short birthdate_ind = 0;
	short birthplace_ind = 0;
	short citycode_ind = 0;
	short currlongname_ind = 0;
	short gender_ind = 0;
	short gmpcshortname1_ind = 0;
	short gmpcshortname2_ind = 0;
	short gmpcshortname3_ind = 0;
	short hkind_ind = 0;
	short iccolorcode_ind = 0;
	short kptno_ind = 0;
	short militaryid_ind = 0;
	short origname_ind = 0;
	short policeid_ind = 0;
	short postcode_ind = 0; 
	short racecode_ind = 0; 
	short religioncode_ind = 0;
	short rjind_ind = 0; 
	short statecode_ind = 0;
	short idtype_ind = 0;
	short idno_ind = 0; 
	short sbcardexpdate_ind = 0;

sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int count = 0;
    int cnt = 0;
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	


		
     #ifdef DEBUG 
		userlog("insert_jpn_sb_info : address1 - %s",jpn_sb_info->address1);
		userlog("insert_jpn_sb_info : address2 - %s",jpn_sb_info->address2);
		userlog("insert_jpn_sb_info : address3 - %s", jpn_sb_info->address3);
	    userlog("insert_jpn_sb_info : birthdate - %s", jpn_sb_info->birthdate);
		userlog("insert_jpn_sb_info : birthplace - %s", jpn_sb_info->birthplace);
		userlog("insert_jpn_sb_info : citycode - %d", jpn_sb_info->citycode);
		userlog("insert_jpn_sb_info : currlongname - %s", jpn_sb_info->currlongname);	
		userlog("insert_jpn_sb_info : gender - %c", jpn_sb_info->gender);
		userlog("insert_jpn_sb_info : gmpcshortname1 - %s",jpn_sb_info->gmpcshortname1);
	    userlog("insert_jpn_sb_info : gmpcshortname2 - %s",jpn_sb_info->gmpcshortname2);
		userlog("insert_jpn_sb_info : gmpcshortname3 - %s",jpn_sb_info->gmpcshortname3);
		userlog("insert_jpn_sb_info : hkind - %c",jpn_sb_info->hkind);	
		userlog("insert_jpn_sb_info : iccolorcode - %c", jpn_sb_info->iccolorcode);
		userlog("insert_jpn_sb_info : kptno - %s", jpn_sb_info->kptno);
		userlog("insert_jpn_sb_info : militaryid - %s", jpn_sb_info->militaryid);
		userlog("insert_jpn_sb_info : origname - %s", jpn_sb_info->origname);
		userlog("insert_jpn_sb_info : policeid - %s", jpn_sb_info->policeid);
	    userlog("insert_jpn_sb_info : postcode - %s", jpn_sb_info->postcode);
		userlog("insert_jpn_sb_info : racecode - %s", jpn_sb_info->racecode);
		userlog("insert_jpn_sb_info : religioncode - %c", jpn_sb_info->religioncode);
		userlog("insert_jpn_sb_info : rjind - %s",jpn_sb_info->rjind);
		userlog("insert_jpn_sb_info : statecode - %s", jpn_sb_info->statecode);
		userlog("insert_jpn_sb_info : idtype - %s", jpn_sb_info->idtype);
		userlog("insert_jpn_sb_info : idno - %s", jpn_sb_info->idno);
		userlog("insert_jpn_sb_info : sbcardexpdate - %s", jpn_sb_info->sbcardexpdate);	
	#endif

      if(jpn_sb_info->address1[0] == '\0')	
		{	
			address1_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)address1.arr, jpn_sb_info->address1);
			  address1.arr[address1.len] = '\0';
		}	
		
		if(jpn_sb_info->address2[0] == '\0')	
		{	
			address2_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)address2.arr, jpn_sb_info->address2);
			  address2.arr[address2.len] = '\0';
		}

		if(jpn_sb_info->address3[0] == '\0')	
		{	
			address3_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)address3.arr, jpn_sb_info->address3);
			  address3.arr[address3.len] = '\0';
		}

	    if(jpn_sb_info->birthdate[0] == '\0')	
		{	
			birthdate_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)birthdate.arr, jpn_sb_info->birthdate);
			  birthdate.arr[birthdate.len] = '\0';
		}

		if(jpn_sb_info->citycode <= 0)	
		{	
			citycode_ind = -1;	
		}	
	  else 	
		{	
		    citycode = jpn_sb_info->citycode;	
		}


		if(jpn_sb_info->birthplace[0] == '\0')	
		{	
			birthplace_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(birthplace, jpn_sb_info->birthplace);	
		}

	 	if(jpn_sb_info->currlongname[0] == '\0')	
		{	
			currlongname_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)currlongname.arr, jpn_sb_info->currlongname);
			  currlongname.arr[currlongname.len] = '\0';
			 
		}

		if(jpn_sb_info->gender == '\0')	
		{	
			gender_ind = -1;	
		}	
	  else 	
		{	
		    gender = jpn_sb_info->gender;	
		}

		if(jpn_sb_info->gmpcshortname1[0] == '\0')	
		{	
			gmpcshortname1_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)gmpcshortname1.arr, jpn_sb_info->gmpcshortname1);	
			  gmpcshortname1.arr[gmpcshortname1.len] = '\0';
		}

		if(jpn_sb_info->gmpcshortname2[0] == '\0')	
		{	
			gmpcshortname2_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)gmpcshortname2.arr, jpn_sb_info->gmpcshortname2);
			  gmpcshortname2.arr[gmpcshortname2.len] = '\0';
		}
		if(jpn_sb_info->gmpcshortname3[0] == '\0')	
		{	
			gmpcshortname3_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)gmpcshortname3.arr, jpn_sb_info->gmpcshortname3);
			  gmpcshortname3.arr[gmpcshortname3.len] = '\0';
		}

		if(jpn_sb_info->hkind == '\0')	
		{	
			hkind_ind = -1;	
		}	
	  else 	
		{	
		    hkind = jpn_sb_info->hkind;	
		}

		if(jpn_sb_info->iccolorcode == '\0')	
		{	
			iccolorcode_ind = -1;	
		}	
	  else 	
		{	
		    iccolorcode = jpn_sb_info->iccolorcode;	
		}

		if(jpn_sb_info->kptno[0] == '\0')	
		{	
			kptno_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)kptno.arr, jpn_sb_info->kptno);	
			  kptno.arr[kptno.len] = '\0';
		}

        cnt = 0;
        /* EXEC SQL SELECT 1 INTO :cnt FROM JPN_SB_INFO
		   WHERE KPTNO = :kptno; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 74;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "select 1 into :b0  from JPN_SB_INFO where KPTNO=:b1";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )4058;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)256;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&cnt;
        sqlstm.sqhstl[0] = (unsigned int  )sizeof(long);
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&kptno;
        sqlstm.sqhstl[1] = (unsigned int  )15;
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



		 if((cnt==1) && (SQLCODE == 0))
		   /* EXEC SQL DELETE FROM JPN_SB_INFO WHERE KPTNO = :kptno; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 12;
     sqlstm.arrsiz = 74;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "delete  from JPN_SB_INFO  where KPTNO=:b0";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )4081;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)256;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&kptno;
     sqlstm.sqhstl[0] = (unsigned int  )15;
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



		if(jpn_sb_info->militaryid[0] == '\0')	
		{	
			militaryid_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(militaryid, jpn_sb_info->militaryid);	
		}
		if(jpn_sb_info->origname[0] == '\0')	
		{	
			origname_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)origname.arr, jpn_sb_info->origname);
			  origname.arr[origname.len] = '\0';
		}
	
		if(jpn_sb_info->policeid[0] == '\0')	
		{	
			policeid_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(policeid, jpn_sb_info->policeid);	
		}

		if(jpn_sb_info->postcode[0] == '\0')	
		{	
			postcode_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(postcode, jpn_sb_info->postcode);	
		}

		if(jpn_sb_info->racecode[0] == '\0')	
		{	
			racecode_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(racecode, jpn_sb_info->racecode);	
		}

		if(jpn_sb_info->religioncode == '\0')	
		{	
			religioncode_ind = -1;	
		}	
	  else 	
		{	
		    religioncode = jpn_sb_info->religioncode;	
		}

		if(jpn_sb_info->rjind[0] == '\0')	
		{	
			rjind_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(rjind, jpn_sb_info->rjind);	
		}
		
		if(jpn_sb_info->statecode[0] == '\0')	
		{	
			statecode_ind = -1;	
		}	
	  else 	
		{	
		    strcpy(statecode, jpn_sb_info->statecode);	
		}

		if(jpn_sb_info->idtype[0] == '\0')	
		{	
			idtype_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)idtype.arr, jpn_sb_info->idtype);
			  idtype.arr[idtype.len] = '\0';
		}

	 if(jpn_sb_info->idno[0] == '\0')	
		{	
			idno_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)idno.arr, jpn_sb_info->idno);
			  idno.arr[idno.len] = '\0';
		}

	if(jpn_sb_info->sbcardexpdate[0] == '\0')	
		{	
			sbcardexpdate_ind = -1;	
		}	
	  else 	
		{	
		    strcpy((char*)sbcardexpdate.arr, jpn_sb_info->idno);
			  sbcardexpdate.arr[sbcardexpdate.len] = '\0';
		}

	
#ifdef DEBUG 
		userlog("insert_jpn_sb_info : address1 - %s", address1.arr);
		userlog("insert_jpn_sb_info : address2 - %s", address2.arr);
		userlog("insert_jpn_sb_info : address3 - %s", address3.arr);
	    userlog("insert_jpn_sb_info : birthdate - %s", birthdate.arr);
		userlog("insert_jpn_sb_info : birthplace - %s", birthplace);
		userlog("insert_jpn_sb_info : citycode - %d", citycode);
		userlog("insert_jpn_sb_info : currlongname - %s", currlongname.arr);	
		userlog("insert_jpn_sb_info : gender - %c", gender);
		userlog("insert_jpn_sb_info : gmpcshortname1 - %s", gmpcshortname1.arr);
	    userlog("insert_jpn_sb_info : gmpcshortname2 - %s", gmpcshortname2.arr);
		userlog("insert_jpn_sb_info : gmpcshortname3 - %s", gmpcshortname3.arr);
		userlog("insert_jpn_sb_info : hkind - %c", hkind);	
		userlog("insert_jpn_sb_info : iccolorcode - %c", iccolorcode);
		userlog("insert_jpn_sb_info : kptno - %s", kptno);
		userlog("insert_jpn_sb_info : militaryid - %s", militaryid);
		userlog("insert_jpn_sb_info : origname - %s", origname.arr);
		userlog("insert_jpn_sb_info : policeid - %s", policeid);
	    userlog("insert_jpn_sb_info : postcode - %s", postcode);
		userlog("insert_jpn_sb_info : racecode - %s", racecode);
		userlog("insert_jpn_sb_info : religioncode - %s", religioncode);
		userlog("insert_jpn_sb_info : rjind - %s", rjind);
		userlog("insert_jpn_sb_info : statecode - %s", statecode);
		userlog("insert_jpn_sb_info : idtype - %s", idtype.arr);
		userlog("insert_jpn_sb_info : idno - %s", idno.arr);
		userlog("insert_jpn_sb_info : sbcardexpdate - %s", sbcardexpdate.arr);
		
		
#endif

	
		/* EXEC SQL INSERT INTO JPN_SB_INFO(ADDRESS1, ADDRESS2, ADDRESS3, BIRTHDATE, 
		BIRTHPLACE, CITYCODE, CURRLONGNAME, GENDER, GMPCSHORTNAME1, GMPCSHORTNAME2, 
		GMPCSHORTNAME3, HKIND, ICCOLORCODE, KPTNO, MILITARYID, ORIGNAME, POLICEID, 
		POSTCODE, RACECODE, RELIGIONCODE, RJIND, STATECODE, IDTYPE, IDNO, SBCARDEXPDATE)
		VALUES
		(:address1:address1_ind,
		:address2:address2_ind,:address3:address3_ind,TO_DATE(:birthdate:birthdate_ind,'DDMMYYYY'),
		:birthplace:birthplace_ind,:citycode:citycode_ind,
		:currlongname:currlongname_ind,:gender:gender_ind,
		:gmpcshortname1:gmpcshortname1_ind,:gmpcshortname2:gmpcshortname2_ind,
		:gmpcshortname3:gmpcshortname3_ind,:hkind:hkind_ind,
		:iccolorcode:iccolorcode_ind,:kptno:kptno_ind,:militaryid:militaryid_ind,
		:origname:origname_ind,:policeid:policeid_ind,:postcode:postcode_ind,
		:racecode:racecode_ind,:religioncode:religioncode_ind,
		:rjind:rjind_ind,:statecode:statecode_ind,
		:idtype:idtype_ind,:idno:idno_ind,TO_DATE(:sbcardexpdate:sbcardexpdate_ind,'DDMMYYYY')); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 74;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into JPN_SB_INFO (ADDRESS1,ADDRESS2,ADDRESS3,BIRTHDA\
TE,BIRTHPLACE,CITYCODE,CURRLONGNAME,GENDER,GMPCSHORTNAME1,GMPCSHORTNAME2,GMPCS\
HORTNAME3,HKIND,ICCOLORCODE,KPTNO,MILITARYID,ORIGNAME,POLICEID,POSTCODE,RACECO\
DE,RELIGIONCODE,RJIND,STATECODE,IDTYPE,IDNO,SBCARDEXPDATE) values (:b0:b1,:b2:\
b3,:b4:b5,TO_DATE(:b6:b7,'DDMMYYYY'),:b8:b9,:b10:b11,:b12:b13,:b14:b15,:b16:b1\
7,:b18:b19,:b20:b21,:b22:b23,:b24:b25,:b26:b27,:b28:b29,:b30:b31,:b32:b33,:b34\
:b35,:b36:b37,:b38:b39,:b40:b41,:b42:b43,:b44:b45,:b46:b47,TO_DATE(:b48:b49,'D\
DMMYYYY'))";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )4100;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&address1;
  sqlstm.sqhstl[0] = (unsigned int  )33;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)&address1_ind;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&address2;
  sqlstm.sqhstl[1] = (unsigned int  )33;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&address2_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&address3;
  sqlstm.sqhstl[2] = (unsigned int  )33;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&address3_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&birthdate;
  sqlstm.sqhstl[3] = (unsigned int  )11;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&birthdate_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)birthplace;
  sqlstm.sqhstl[4] = (unsigned int  )9;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&birthplace_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&citycode;
  sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&citycode_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&currlongname;
  sqlstm.sqhstl[6] = (unsigned int  )153;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&currlongname_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&gender;
  sqlstm.sqhstl[7] = (unsigned int  )1;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&gender_ind;
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
  sqlstm.sqhstv[11] = (         void  *)&hkind;
  sqlstm.sqhstl[11] = (unsigned int  )1;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)&hkind_ind;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqhstv[12] = (         void  *)&iccolorcode;
  sqlstm.sqhstl[12] = (unsigned int  )1;
  sqlstm.sqhsts[12] = (         int  )0;
  sqlstm.sqindv[12] = (         void  *)&iccolorcode_ind;
  sqlstm.sqinds[12] = (         int  )0;
  sqlstm.sqharm[12] = (unsigned int  )0;
  sqlstm.sqadto[12] = (unsigned short )0;
  sqlstm.sqtdso[12] = (unsigned short )0;
  sqlstm.sqhstv[13] = (         void  *)&kptno;
  sqlstm.sqhstl[13] = (unsigned int  )15;
  sqlstm.sqhsts[13] = (         int  )0;
  sqlstm.sqindv[13] = (         void  *)&kptno_ind;
  sqlstm.sqinds[13] = (         int  )0;
  sqlstm.sqharm[13] = (unsigned int  )0;
  sqlstm.sqadto[13] = (unsigned short )0;
  sqlstm.sqtdso[13] = (unsigned short )0;
  sqlstm.sqhstv[14] = (         void  *)militaryid;
  sqlstm.sqhstl[14] = (unsigned int  )12;
  sqlstm.sqhsts[14] = (         int  )0;
  sqlstm.sqindv[14] = (         void  *)&militaryid_ind;
  sqlstm.sqinds[14] = (         int  )0;
  sqlstm.sqharm[14] = (unsigned int  )0;
  sqlstm.sqadto[14] = (unsigned short )0;
  sqlstm.sqtdso[14] = (unsigned short )0;
  sqlstm.sqhstv[15] = (         void  *)&origname;
  sqlstm.sqhstl[15] = (unsigned int  )153;
  sqlstm.sqhsts[15] = (         int  )0;
  sqlstm.sqindv[15] = (         void  *)&origname_ind;
  sqlstm.sqinds[15] = (         int  )0;
  sqlstm.sqharm[15] = (unsigned int  )0;
  sqlstm.sqadto[15] = (unsigned short )0;
  sqlstm.sqtdso[15] = (unsigned short )0;
  sqlstm.sqhstv[16] = (         void  *)policeid;
  sqlstm.sqhstl[16] = (unsigned int  )12;
  sqlstm.sqhsts[16] = (         int  )0;
  sqlstm.sqindv[16] = (         void  *)&policeid_ind;
  sqlstm.sqinds[16] = (         int  )0;
  sqlstm.sqharm[16] = (unsigned int  )0;
  sqlstm.sqadto[16] = (unsigned short )0;
  sqlstm.sqtdso[16] = (unsigned short )0;
  sqlstm.sqhstv[17] = (         void  *)postcode;
  sqlstm.sqhstl[17] = (unsigned int  )6;
  sqlstm.sqhsts[17] = (         int  )0;
  sqlstm.sqindv[17] = (         void  *)&postcode_ind;
  sqlstm.sqinds[17] = (         int  )0;
  sqlstm.sqharm[17] = (unsigned int  )0;
  sqlstm.sqadto[17] = (unsigned short )0;
  sqlstm.sqtdso[17] = (unsigned short )0;
  sqlstm.sqhstv[18] = (         void  *)racecode;
  sqlstm.sqhstl[18] = (unsigned int  )5;
  sqlstm.sqhsts[18] = (         int  )0;
  sqlstm.sqindv[18] = (         void  *)&racecode_ind;
  sqlstm.sqinds[18] = (         int  )0;
  sqlstm.sqharm[18] = (unsigned int  )0;
  sqlstm.sqadto[18] = (unsigned short )0;
  sqlstm.sqtdso[18] = (unsigned short )0;
  sqlstm.sqhstv[19] = (         void  *)&religioncode;
  sqlstm.sqhstl[19] = (unsigned int  )1;
  sqlstm.sqhsts[19] = (         int  )0;
  sqlstm.sqindv[19] = (         void  *)&religioncode_ind;
  sqlstm.sqinds[19] = (         int  )0;
  sqlstm.sqharm[19] = (unsigned int  )0;
  sqlstm.sqadto[19] = (unsigned short )0;
  sqlstm.sqtdso[19] = (unsigned short )0;
  sqlstm.sqhstv[20] = (         void  *)rjind;
  sqlstm.sqhstl[20] = (unsigned int  )3;
  sqlstm.sqhsts[20] = (         int  )0;
  sqlstm.sqindv[20] = (         void  *)&rjind_ind;
  sqlstm.sqinds[20] = (         int  )0;
  sqlstm.sqharm[20] = (unsigned int  )0;
  sqlstm.sqadto[20] = (unsigned short )0;
  sqlstm.sqtdso[20] = (unsigned short )0;
  sqlstm.sqhstv[21] = (         void  *)statecode;
  sqlstm.sqhstl[21] = (unsigned int  )3;
  sqlstm.sqhsts[21] = (         int  )0;
  sqlstm.sqindv[21] = (         void  *)&statecode_ind;
  sqlstm.sqinds[21] = (         int  )0;
  sqlstm.sqharm[21] = (unsigned int  )0;
  sqlstm.sqadto[21] = (unsigned short )0;
  sqlstm.sqtdso[21] = (unsigned short )0;
  sqlstm.sqhstv[22] = (         void  *)&idtype;
  sqlstm.sqhstl[22] = (unsigned int  )5;
  sqlstm.sqhsts[22] = (         int  )0;
  sqlstm.sqindv[22] = (         void  *)&idtype_ind;
  sqlstm.sqinds[22] = (         int  )0;
  sqlstm.sqharm[22] = (unsigned int  )0;
  sqlstm.sqadto[22] = (unsigned short )0;
  sqlstm.sqtdso[22] = (unsigned short )0;
  sqlstm.sqhstv[23] = (         void  *)&idno;
  sqlstm.sqhstl[23] = (unsigned int  )18;
  sqlstm.sqhsts[23] = (         int  )0;
  sqlstm.sqindv[23] = (         void  *)&idno_ind;
  sqlstm.sqinds[23] = (         int  )0;
  sqlstm.sqharm[23] = (unsigned int  )0;
  sqlstm.sqadto[23] = (unsigned short )0;
  sqlstm.sqtdso[23] = (unsigned short )0;
  sqlstm.sqhstv[24] = (         void  *)&sbcardexpdate;
  sqlstm.sqhstl[24] = (unsigned int  )11;
  sqlstm.sqhsts[24] = (         int  )0;
  sqlstm.sqindv[24] = (         void  *)&sbcardexpdate_ind;
  sqlstm.sqinds[24] = (         int  )0;
  sqlstm.sqharm[24] = (unsigned int  )0;
  sqlstm.sqadto[24] = (unsigned short )0;
  sqlstm.sqtdso[24] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt(&pcCtx, &sqlctx, &sqlstm, &sqlfpn);
}



 					 
		if(SQLCODE != 0 && SQLCODE != -1)
		{
		#ifdef DEBUG
			userlog(" insert_jpn_sb_info : Insert into JPN_SB_INFO failed : %s", SQLMSG);
		#endif
			strcpy(prog_log.remarks,"insert_jpn_sb_info: Insert into JPN_SB_INFO failed ");
			sprintf(excep_log.error_msg, "insert_jpn_sb_info: Insert into JPN_SB_INFO failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		}

	#ifdef DEBUG
		userlog("insert_jpn_sb_info : Record inserted successfully");		
	#endif

	

	return SUCCESS;

}


/* Added on 23rd Feb 2005 for IJPN */
/****************************************************************************/
/* Function name: insert_into_outstand_txn_fee_table						*/
/* Description	: This function inserts data into outstand_txn_fee tables	*/
/* Input		: OUTSTAND_TXN_FEE_T *app_rec, char appl_id[APP_ID_SIZE]   	*/
/* Return values: GMPC_GOOD, ret,INSERT_ERROR								*/
/* Limitations	: None														*/
/****************************************************************************/

int insert_into_outstand_txn_fee_table(OUTSTAND_TXN_FEE_T *app_rec, char appl_id[APP_ID_SIZE], int out_txn_fee_cnt,void * ctx)
{
	struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


		char  applid[APP_ID_SIZE];
		int   txnserno;
		char  feetype[FEE_TYPE_SIZE];
		float feeamt;
		int   agencyrevncode;
			
		short int feeamt_ind = -1;
		short int agencyrevncode_ind = -1;

		

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int count = 0;
	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	
    
	#ifdef DEBUG
		userlog("insert_into_outstand_txn_fee_table : outstand fee details count - %d", out_txn_fee_cnt);
		userlog("applid %s\n", appl_id);
	#endif
    
	strcpy(applid, appl_id);
	for(count = 0; count < out_txn_fee_cnt; count++,app_rec++)
	{

	#ifdef DEBUG
		userlog("txnserno %d\n", app_rec->txnserno); 
		userlog("feetype %s\n", app_rec->feetype);
		userlog("feeamt %f\n", app_rec->feeamt); 
		userlog("agencyrevncode %d\n", app_rec->agencyrevncode);  
	#endif
	
	
		txnserno = app_rec->txnserno;
		strcpy(feetype, app_rec->feetype);	
		if (0 < app_rec->feeamt)
		{
			feeamt = app_rec->feeamt;
			feeamt_ind = 0;
		}
		if (0 < app_rec->agencyrevncode)
		{
			agencyrevncode = app_rec->agencyrevncode;
			agencyrevncode_ind = 0;
		}

	#ifdef DEBUG
		userlog("txnserno %d\n", txnserno); 
		userlog("feetype %s\n", feetype); 
		userlog("feeamt %f\n", feeamt);
		userlog("agencyrevncode %d\n", agencyrevncode); 	
	#endif

	/* EXEC SQL 
		INSERT INTO OUTSTAND_TXN_FEE(APPLID,TXNSERNO,FEETYPE,FEEAMT,AGENCYREVNCODE)
		VALUES(:applid,:txnserno,:feetype,:feeamt:feeamt_ind,:agencyrevncode:agencyrevncode_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 74;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into OUTSTAND_TXN_FEE (APPLID,TXNSERNO,FEETYPE,FEEAMT\
,AGENCYREVNCODE) values (:b0,:b1,:b2,:b3:b4,:b5:b6)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4215;
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
 sqlstm.sqhstv[1] = (         void  *)&txnserno;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)feetype;
 sqlstm.sqhstl[2] = (unsigned int  )4;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&feeamt;
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&feeamt_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&agencyrevncode;
 sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&agencyrevncode_ind;
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



	if(SQLCODE != 0)
	{
		strcpy(prog_log.remarks,"CREATE_APPNT : failed to insert into OUTSTAND_TXN_FEE table");
		sprintf(excep_log.error_msg,"CREATE_APPNT : failed to insert into OUTSTAND_TXN_FEE table: %s",SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);
	
		return INSERT_ERROR;
	}

	#ifdef DEBUG
		userlog("insert_into_outstand_txn_fee_table : Record %d inserted successfully", count + 1);
	#endif
  }
	return GMPC_GOOD;
}


/********************************************************************************/
/* Function name: insert_sponsor_details										*/
/* Description	: This function inserts the supervisor remarks and problem info	*/
/*				  related to the application, if any into SPONS_DTL_OTHERID     */
/*                table															*/
/* Input		: Pointer to supervisor remarks struture, Structure count		*/
/*                Application id												*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/

int insert_sponsor_details(SPONSOR_DETAILS_T *sponsor_details, char *application_id, int sponsor_details_cnt,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char appl_id[APP_ID_SIZE] = {0};
	char id_type[ID_TYPE_SIZE] = {0};
	/* varchar id_number[ID_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[16]; } id_number
 = {0};

	char nationality = '\0';
	char issue_country[COUNTRY_CODE_SIZE] = {0};
	char birth_date[DATE_SIZE] = {0};
	/* varchar name1[GMPC_SNAME1_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } name1
 = {0};

	/* varchar name2[GMPC_SNAME2_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[31]; } name2
 = {0};

	/* varchar name3[GMPC_SNAME3_SIZE] = {0}; */ 
struct { unsigned short len; unsigned char arr[21]; } name3
 = {0};

	
	short id_type_ind = -1;
	short id_number_ind = -1;
	short nationality_ind = -1;
	short issue_country_ind = -1;
	short birth_date_ind = -1;
	short name1_ind = -1;
	short name2_ind = -1;
	short name3_ind = -1;
	

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int count = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	/* Populate the variables	*/

	strcpy(appl_id, application_id);

#ifdef DEBUG
	userlog("insert_sponsor_details : Sponsor details count - %d", sponsor_details_cnt);
#endif

	for (count = 0; count < sponsor_details_cnt; count++, sponsor_details++)
	{

	 #ifdef DEBUG
		userlog("insert_sponsor_details : sponsor_details->id_type - %s", sponsor_details->id_type);
		userlog("insert_sponsor_details : sponsor_details->id_number - %s", sponsor_details->id_number);
		userlog("insert_sponsor_details : sponsor_details->nationality - %c", sponsor_details->nationality);
		userlog("insert_sponsor_details : sponsor_details->issue_country - %s", sponsor_details->issue_country);
		userlog("insert_sponsor_details : sponsor_details->birth_date - %s", sponsor_details->birth_date);
		userlog("insert_sponsor_details : sponsor_details->name1 - %s", sponsor_details->name1);
		userlog("insert_sponsor_details : sponsor_details->name2 - %s", sponsor_details->name2);
		userlog("insert_sponsor_details : sponsor_details->name3 - %s", sponsor_details->name3);
	 #endif

	
		if((sponsor_details->id_type[0] != '\0') && (sponsor_details->id_type[0] != ' '))
		{
			strcpy(id_type,sponsor_details->id_type);
			id_type_ind = 0;
		}
		

		if((sponsor_details->id_number[0] != '\0') && (sponsor_details->id_number[0] != ' '))
		{
			strcpy((char*)id_number.arr,sponsor_details->id_number);
			id_number_ind = 0;
			setlen(id_number);
			id_number.arr[id_number.len] = '\0';
		}
		

		if((sponsor_details->nationality != '\0') && (sponsor_details->nationality != ' '))
		{
			nationality = sponsor_details->nationality;
			nationality_ind = 0;
		}
		

		if((sponsor_details->issue_country[0] != '\0') && (sponsor_details->issue_country[0] != ' '))
		{
			strcpy(issue_country,sponsor_details->issue_country);
			issue_country_ind = 0;
		}
		

		if((sponsor_details->birth_date[0] != '\0') && (sponsor_details->birth_date[0] != ' '))
		{
			strcpy(birth_date,sponsor_details->birth_date);
			birth_date_ind = 0;
		}
		

		if((sponsor_details->name1[0] != '\0') && (sponsor_details->name1[0] != ' '))
		{
			strcpy((char*)name1.arr,sponsor_details->name1);
			name1_ind = 0;
			setlen(name1);
			name1.arr[name1.len] = '\0';
		}
		

		if((sponsor_details->name2[0] != '\0') && (sponsor_details->name2[0] != ' '))
		{
			strcpy((char*)name2.arr,sponsor_details->name2);
			name2_ind = 0;
			setlen(name2);
			name2.arr[name2.len] = '\0';
		}
		

		if((sponsor_details->name3[0] != '\0') && (sponsor_details->name3[0] != ' '))
		{
			strcpy((char*)name3.arr,sponsor_details->name3);
			name3_ind = 0;
			setlen(name3);
			name3.arr[name3.len] = '\0';
		}
		
		

#ifdef DEBUG
	userlog("insert_sponsor_details : Id type - %s", id_type);
	userlog("insert_sponsor_details : Id no - %s", id_number.arr);
	userlog("insert_sponsor_details : Nationality - %c", nationality);
	userlog("insert_sponsor_details : Isue country - %s", issue_country);
	userlog("insert_sponsor_details : Birth date - %s", birth_date);
	userlog("insert_sponsor_details : Name1 - %s", name1.arr);
	userlog("insert_sponsor_details : Name2 - %s", name2.arr);
	userlog("insert_sponsor_details : Name3 - %s", name3.arr);
#endif

		/* EXEC SQL INSERT INTO SPONS_DTL_OTHERID (APPLID, IDTYPE, IDNO, NATIONALITY,
											ISSUINGCOUNTRY, BIRTHDATE, 
											NAME1, NAME2, NAME3)
					VALUES (:appl_id, :id_type:id_type_ind, :id_number:id_number_ind,
					:nationality:nationality_ind, :issue_country:issue_country_ind,
					TO_DATE(:birth_date:birth_date_ind, 'DDMMYYYY'), :name1:name1_ind,
					:name2:name2_ind, :name3:name3_ind); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 74;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into SPONS_DTL_OTHERID (APPLID,IDTYPE,IDNO,NATIONALI\
TY,ISSUINGCOUNTRY,BIRTHDATE,NAME1,NAME2,NAME3) values (:b0,:b1:b2,:b3:b4,:b5:b\
6,:b7:b8,TO_DATE(:b9:b10,'DDMMYYYY'),:b11:b12,:b13:b14,:b15:b16)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )4250;
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
  sqlstm.sqhstv[1] = (         void  *)id_type;
  sqlstm.sqhstl[1] = (unsigned int  )3;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)&id_type_ind;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&id_number;
  sqlstm.sqhstl[2] = (unsigned int  )18;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)&id_number_ind;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&nationality;
  sqlstm.sqhstl[3] = (unsigned int  )1;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)&nationality_ind;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)issue_country;
  sqlstm.sqhstl[4] = (unsigned int  )5;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)&issue_country_ind;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)birth_date;
  sqlstm.sqhstl[5] = (unsigned int  )9;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)&birth_date_ind;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&name1;
  sqlstm.sqhstl[6] = (unsigned int  )33;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)&name1_ind;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&name2;
  sqlstm.sqhstl[7] = (unsigned int  )33;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)&name2_ind;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&name3;
  sqlstm.sqhstl[8] = (unsigned int  )23;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&name3_ind;
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



		if(SQLCODE != 0 && SQLCODE != -1)
		{
#ifdef DEBUG
			userlog(" insert_sponsor_details : Insert into SPONS_DTL_OTHERID failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_sponsor_details: Insert into SPONS_DTL_OTHERID failed");
			sprintf(excep_log.error_msg, "insert_sponsor_details: Insert into SPONS_DTL_OTHERID failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		}

#ifdef DEBUG
		userlog("insert_sponsor_details : Record %d inserted successfully", count + 1);
#endif

	}

	return SUCCESS;

}


/********************************************************************************/
/* Function name: insert_abt_list										*/
/* Description	: 	*/
/* Input		: 		*/
/*                												*/
/* Return values: SUCCESS / Error code											*/
/* Limitations	: None															*/
/********************************************************************************/
int insert_abt_list(ABT_LIST_T abt_lst,void * ctx)
{
	struct sqlca sqlca = {0};
/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char applid[APP_ID_SIZE] = {0};
	int txnserno;
/*	char idtype[ID_TYPE_SIZE] = {0};
	varchar idno[ID_SIZE] = {0};
	varchar gmpcshortname1[GMPC_SNAME1_SIZE] = {0};
	varchar gmpcshortname2[GMPC_SNAME2_SIZE] = {0};
	varchar gmpcshortname3[GMPC_SNAME3_SIZE] = {0};
	varchar contactno[PHONE_SIZE];
	char appldate[DATE_TIME_SIZE];
*/	float feeamt;
	float feecollectedamt;
	float outstandingamt;
	char outstandingfeetype;
	char feestat;
	char feecreationdate[DATE_TIME_SIZE];
	/* varchar userid[USER_ID_SIZE]; */ 
struct { unsigned short len; unsigned char arr[9]; } userid;

	/* varchar branchcode[BRANCH_CODE_SIZE]; */ 
struct { unsigned short len; unsigned char arr[7]; } branchcode;


	short applid_ind = 0;
	short txnserno_ind = 0;
/*	short idtype_ind = 0;
	short idno_ind = 0;
	short gmpcshortname1_ind = 0;
	short gmpcshortname2_ind = 0;
	short gmpcshortname3_ind = 0;
	short contactno_ind = 0;
	short appldate_ind = 0;
*/	short feeamt_ind = 0;
	short feecollectedamt_ind = 0;
	short outstandingamt_ind = 0;
	short outstandingfeetype_ind = 0;
	short feestat_ind = 0;
	short feecreationdate_ind = 0;
	short userid_ind = 0;
	short branchcode_ind = 0;
	
	
sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	if(abt_lst.applid[0] == '\0')
	{
		applid_ind = -1;
	}
	else
	{
		strcpy(applid, abt_lst.applid);
	}

	if(abt_lst.txnserno == 0)
	{
		txnserno_ind = -1;
	}
	else
	{
		txnserno = abt_lst.txnserno;
	}

	if(abt_lst.feeamt == 0)
	{
		feeamt_ind = -1;
	}
	else
	{
		feeamt = abt_lst.feeamt;
	}

	if(abt_lst.feecollectedamt == 0)
	{
		feecollectedamt_ind = -1;
	}
	else
	{
		feecollectedamt = abt_lst.feecollectedamt;
	}

	if(abt_lst.outstandingamt == 0)
	{
		outstandingamt_ind = -1;
	}
	else
	{
		outstandingamt = abt_lst.outstandingamt;
	}

	if(abt_lst.outstandingfeetype == '\0')
	{
		outstandingfeetype_ind = -1;
	}
	else
	{
		outstandingfeetype = abt_lst.outstandingfeetype;
	}

	if(abt_lst.feestat == '\0')
	{
		feestat_ind = -1;
	}
	else
	{
		feestat = abt_lst.feestat;
	}

	if(abt_lst.feecreationdate[0] == '\0')
	{
		feecreationdate_ind = -1;
	}
	else
	{
		strcpy(feecreationdate, abt_lst.feecreationdate);
	}

	if(abt_lst.userid[0] == '\0')
	{
		userid_ind = -1;
	}
	else
	{
		strcpy((char*)userid.arr, abt_lst.userid);
		setlen(userid);
	}

	if(abt_lst.branchcode[0] == '\0')
	{
		branchcode_ind = -1;
	}
	else
	{
		strcpy((char*)branchcode.arr, abt_lst.branchcode);
		setlen(branchcode);
	}

#ifdef DEBUG
	userlog(" insert_abt_list : Insert into ABT_LIST data:");
	userlog(" insert_abt_list : applid:%s:", applid);
	userlog(" insert_abt_list : txnserno:%d:", txnserno);
	userlog(" insert_abt_list : feeamt:%f:", feeamt);
	userlog(" insert_abt_list : feecollectedamt:%f:", feecollectedamt);
	userlog(" insert_abt_list : outstandingamt:%f:", outstandingamt);
	userlog(" insert_abt_list : outstandingfeetype:%c:", outstandingfeetype);
	userlog(" insert_abt_list : feestat:%c:", feestat);
	userlog(" insert_abt_list : feecreationdate:%s:", feecreationdate);
	userlog(" insert_abt_list : userid:%s:", userid.arr);
	userlog(" insert_abt_list : branchcode:%s:", branchcode.arr);
#endif

	/* EXEC SQL
	   INSERT INTO IJPN_ABT_LIST(APPLID, TXNSERNO, FEEAMT, FEECOLLECTEDAMT, OUTSTANDINGAMT, 
	   OUTSTANDINGFEETYPE, FEESTAT, FEECREATIONDATE, USERID, 
	   BRANCHCODE)
	   VALUES(:applid:applid_ind, :txnserno:txnserno_ind, 
	   :feeamt:feeamt_ind, :feecollectedamt:feecollectedamt_ind,
	   :outstandingamt:outstandingamt_ind, 
	   :outstandingfeetype:outstandingfeetype_ind, :feestat:feestat_ind,
	   TO_DATE(:feecreationdate:feecreationdate_ind, 'DDMMYYYY HH24MISS'), :userid:userid_ind, 
	   :branchcode:branchcode_ind); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 74;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into IJPN_ABT_LIST (APPLID,TXNSERNO,FEEAMT,FEECOLLECT\
EDAMT,OUTSTANDINGAMT,OUTSTANDINGFEETYPE,FEESTAT,FEECREATIONDATE,USERID,BRANCHC\
ODE) values (:b0:b1,:b2:b3,:b4:b5,:b6:b7,:b8:b9,:b10:b11,:b12:b13,TO_DATE(:b14\
:b15,'DDMMYYYY HH24MISS'),:b16:b17,:b18:b19)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4301;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)applid;
 sqlstm.sqhstl[0] = (unsigned int  )20;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&applid_ind;
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
 sqlstm.sqhstv[2] = (         void  *)&feeamt;
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(float);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)&feeamt_ind;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&feecollectedamt;
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(float);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)&feecollectedamt_ind;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&outstandingamt;
 sqlstm.sqhstl[4] = (unsigned int  )sizeof(float);
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)&outstandingamt_ind;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&outstandingfeetype;
 sqlstm.sqhstl[5] = (unsigned int  )1;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)&outstandingfeetype_ind;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqhstv[6] = (         void  *)&feestat;
 sqlstm.sqhstl[6] = (unsigned int  )1;
 sqlstm.sqhsts[6] = (         int  )0;
 sqlstm.sqindv[6] = (         void  *)&feestat_ind;
 sqlstm.sqinds[6] = (         int  )0;
 sqlstm.sqharm[6] = (unsigned int  )0;
 sqlstm.sqadto[6] = (unsigned short )0;
 sqlstm.sqtdso[6] = (unsigned short )0;
 sqlstm.sqhstv[7] = (         void  *)feecreationdate;
 sqlstm.sqhstl[7] = (unsigned int  )16;
 sqlstm.sqhsts[7] = (         int  )0;
 sqlstm.sqindv[7] = (         void  *)&feecreationdate_ind;
 sqlstm.sqinds[7] = (         int  )0;
 sqlstm.sqharm[7] = (unsigned int  )0;
 sqlstm.sqadto[7] = (unsigned short )0;
 sqlstm.sqtdso[7] = (unsigned short )0;
 sqlstm.sqhstv[8] = (         void  *)&userid;
 sqlstm.sqhstl[8] = (unsigned int  )11;
 sqlstm.sqhsts[8] = (         int  )0;
 sqlstm.sqindv[8] = (         void  *)&userid_ind;
 sqlstm.sqinds[8] = (         int  )0;
 sqlstm.sqharm[8] = (unsigned int  )0;
 sqlstm.sqadto[8] = (unsigned short )0;
 sqlstm.sqtdso[8] = (unsigned short )0;
 sqlstm.sqhstv[9] = (         void  *)&branchcode;
 sqlstm.sqhstl[9] = (unsigned int  )9;
 sqlstm.sqhsts[9] = (         int  )0;
 sqlstm.sqindv[9] = (         void  *)&branchcode_ind;
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



		if(SQLCODE != 0 && SQLCODE != -1)
		{
#ifdef DEBUG
			userlog(" insert_abt_list : Insert into ABT_LIST failed : %s", SQLMSG);
#endif
			strcpy(prog_log.remarks,"insert_abt_list: Insert into ABT_LIST failed");
			sprintf(excep_log.error_msg, "insert_abt_list: Insert into ABT_LIST failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;

			log_error(ctx);
			
			return INSERT_ERROR;
		}

#ifdef DEBUG
			userlog(" insert_abt_list : Returning success");
#endif

		return SUCCESS;
}

int Create_Applnt(CREATE_APPLNT_REQ_T *pReq,CREATE_APPLNT_RESP_T **pResp, long *pRespSize,void * ctx)
{
   
	struct sqlca sqlca = {0};
   /* Variable declarations */
	CREATE_APPLNT_REQ_T *req; 
	CREATE_APPLNT_RESP_T *resp;
	LEGACY_REQUEST_T  legacy_req;
	APPL_PROC_T *appl_proc;
	APPL_HISTORY_T *appl_hist;
	APPL_TXN_T *appl_txn;
	APPL_OLD_TXN_PAY_T *old_txn_pay;
	APPL_TXN_FEE_T *txn_fee;
	APPL_OUTSTAND_TXN_FEE_T *outstand_txn_fee;
	APPL_FEE_REDUCTION_T *fee_reduction;
	APPL_DOC_SRNO_T *doc_srno;
	SUP_REMARKS_T *supervisor;
	SPONSOR_DETAILS_T *sponsor_details;
	APPL_TXN_SUMMONS_T *summons;
	APPNT_JPJ_SUMMONS_T *jpj_summons;
	APPNT_PDRM_SUMMONS_T *pdrm_summons;
	APPNT_LIC_REVOKE_T *lic_revok;
	APPNT_LIC_SUSP_T *lic_susp;
	APPNT_PP_INFO_T *pp_info;
	APPNT_PP_INFO_T *pp_info_orig;
	//APPNT_JPN_INFO_T *applnt;
	APPNT_JPN_IMG_T *applnt_img;
	
	TXN_DETAILS_T *txn_details;
	TXN_DETAILS_T *txn_details_orig;

	APPNT_JPN_INFO_T *applnt_orig;
	APPNT_JPN_INFO_T *applnt_new;

	/* Add for IJPN*/
	
	JPN_SB_INFO_T *jpn_sb_info;
	JPN_INFO_T *jpn_info;
	APPL_MISSED_OPEX_T *apl_missed_opex;	

	int appl_missed_opex_cnt = 0;
	int jpn_info_cnt = 0;
	int jpn_sb_info_cnt = 0;
	/*End IJPN*/
	
	int resp_length = 0;
	int ret_code = 0;
	char current_date_time[DATE_TIME_SIZE] = {"\0"};
	char program_id[PROG_ID_SIZE];
	char lic_flag = '\0';
	char passport_flag = '\0';
	int txn_count = 0;
	char jpn_info_insert = NO;
	char jpn_update_flag = NO;
	char jpj_info_insert = NO;
	char jpj_update_flag = NO;
	char pdrm_update_flag = NO;
	char imm_update_flag = NO;
	char afis_update_flag = NO;
	char afis_flag = NO;
	int txn_code_numeric = 0;
	char jpj_summons_flag = NO;
	char pdrm_summons_flag = NO;
	int transaction_type = 0;
	int prob_count = 0;
	int count = 0;
	char jpj_load_on_chip = NO;
	char agency_on_chip[AGENCY_ON_CHIP_SIZE] = {0};
	char appl_status = '\0';
	char photo_capture='\0'; /* Added to check phonein cases by shiva.p */
	char appl_stat_upd = YES;
	char imm_insert_flag = NO;
	char chip_update_txn = NO;
	char current_long_name[LONG_NAME_SIZE] = "\0";
	char q_no[Q_NO_SIZE] = {"\0"};
	int queue_no = 0;
	int lcversion=0;
	char nrs_update_flag = NO; // included this on 28/09/05 to call Generatekpt service
	int appl_processed = -1;
		
#ifdef DEBUG
	userlog("CREATE_APPLNT : Entered server");
#endif

	memset(agency_on_chip, '0', AGENCY_ON_CHIP_SIZE - 1);

	/* Set pointer to data received by the service */
	req = (CREATE_APPLNT_REQ_T *) pReq;

	FILE *fptr=NULL;
	fptr = fopen("d:\\ijpn\\log\\careq.txt","wb");
	fwrite(req, 69903,1,fptr);
	fclose(fptr);
	
#ifdef DEBUG
	print_request(req);
#endif

	/* Get current date-time for logging */
	strcpy(current_date_time, get_date_time());

	/* Set the program id */
	itoa(CREATE_APPLNT_ID, program_id, 10);

#ifdef DEBUG
	userlog( "CREATE_APPLNT : Current date time = %s\n", current_date_time);	 
	userlog( "CREATE_APPLNT : Program Id = %s\n", program_id);
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

	lic_delete_flag = NO;

	resp_length = sizeof(CREATE_APPLNT_RESP_T);

	//_CrtCheckMemory();

	//_CrtMemDumpAllObjectsSince(NULL);

	/* Allocate the response buffer		*/
	resp = (CREATE_APPLNT_RESP_T *) malloc(resp_length);

	if (NULL == resp)
	{
#ifdef DEBUG
		userlog("CREATE_APPLNT : malloc failed  ");
#endif
		strcpy(prog_log.remarks,"CREATE_APPLNT : Allocation of memory for response buffer failed");
		sprintf(excep_log.error_msg,"CREATE_APPLNT : Allocation of memory for response buffer failed : ");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);
		
		//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);
		return RESP_BUF_ERR;
	}

	memset(resp, 0, sizeof(CREATE_APPLNT_RESP_T));

	/* Copy header info from request to response */
	resp->header = req->header;

#ifdef DEBUG
	userlog("CREATE_APPLNT : Copied content of header from request to response");
#endif

	//_CrtCheckMemory();
	

	/* Intialization of variables for Legacy Request */

	strcpy(legacy_req.appl_id,req->header.application_id);
	strcpy(legacy_req.user_id,req->header.user_id);
	strcpy(legacy_req.branch_code,req->header.branch_code);
	legacy_req.service_id = 0;
	legacy_req.txn_ser_no = 0;
	legacy_req.request_stat = REQ_NOT_SENT;
	legacy_req.request_flag = UNKNOWN;
	legacy_req.messageid = 0;
	legacy_req.check_agency = '\0';

	/* Check the info in header	*/
	if (SUCCESS != (ret_code = check_header(req->header,ctx)))
	{
#ifdef DEBUG
		userlog("CREATE_APPLNT : check header failed");
#endif
		/* Log the error */
		sprintf(prog_log.remarks, "CREATE_APPLNT : check_header failed with %d", ret_code);
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
		userlog("CREATE_APPLNT : Application id NULL");
#endif
		/* Log the error */
		strcpy(prog_log.remarks, "CREATE_APPLNT : Application id can not be NULL");
		strcpy(excep_log.error_msg, "CREATE_APPLNT : Application id can not be NULL");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		
		//tpreturn(TPSUCCESS, APP_ID_NULL, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return APP_ID_NULL;
	}

	/* Begin the transaction	*/
	if(SUCCESS != gscbbegin_trans(ctx))
	{
		userlog("CREATE_APPLNT : Begin transaction failed!!");
		//tpreturn(TPSUCCESS, BEGIN_TRAN_ERROR, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return BEGIN_TRAN_ERROR;
	}

	// Added this code on 17/11/2006 to avoid reprocessing of already issued applications

	#ifdef DEBUG
		userlog("CREATE_APPLNT: About to call check application/card status function");
	#endif
	if((ret_code = check_appl_card_status(req->header.application_id, &appl_processed, ctx))!= SUCCESS)
	{
		#ifdef DEBUG
			userlog("CREATE_APPLNT: After call to check application/card status function Failed");
		#endif
	    //tpreturn(TPSUCCESS, ret_val, (char *)resp, sizeof (CARD_ISSUANCE_RESP_T), 0);
		*pRespSize = resp_length;
		//memcpy(*pResp, (char *) resp, sizeof (CARD_ISSUANCE_RESP_T));
		*pResp = resp;

		return ret_code;
	}

	if(appl_processed == 1)
	{
		#ifdef DEBUG
			userlog("CREATE_APPLNT: After call to check application/card status function successful");
			userlog("CREATE_APPLNT: Application status is R for this application id %s, so bypassing the process",req->header.application_id);
		#endif

		
	}
	else
	{

		#ifdef DEBUG
			userlog("CREATE_APPLNT: Application status is not R for this application id %s, so proceeding to process",req->header.application_id);
		#endif


	/* chk kptno application status */
	if (1 == (ret_code = chk_appl_status(req->kpt_no,req->header.application_id,ctx)))
	{
#ifdef DEBUG
		userlog("CREATE_APPLNT : chk_appl_status() failed with %d", ret_code);
#endif
		/* Log the error */
		strcpy(prog_log.remarks, "CREATE_APPLNT : Application id Has Valid Status");
		strcpy(excep_log.error_msg, "CREATE_APPLNT : Application id Has Valid Status");
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;

		log_error(ctx);
		//tpreturn(TPSUCCESS, APP_ID_NULL, (char *) resp, resp_length, 0);
		*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
		*pResp = resp;
			return APP_ID_NULL;
	}

	appl_proc = (APPL_PROC_T *)(req + 1);

	appl_hist = (APPL_HISTORY_T *)(appl_proc+req->appl_proc_cnt);

	appl_txn = (APPL_TXN_T *)(appl_hist+req->appl_history_cnt);

	old_txn_pay = (APPL_OLD_TXN_PAY_T *)(appl_txn+req->new_txn_cnt);

	txn_fee = (APPL_TXN_FEE_T *)(old_txn_pay+req->old_pay_cnt);

	outstand_txn_fee = (APPL_OUTSTAND_TXN_FEE_T *)(txn_fee+req->txn_fee_cnt);

	fee_reduction = (APPL_FEE_REDUCTION_T *)(outstand_txn_fee+req->outstand_txn_fee_cnt);

	doc_srno = (APPL_DOC_SRNO_T *)(fee_reduction+req->appl_fee_reduce_cnt);

	supervisor = (SUP_REMARKS_T *)(doc_srno+req->appl_doc_srno_cnt);

	sponsor_details = (SPONSOR_DETAILS_T *)(supervisor+req->super_remarks_cnt);

	summons = (APPL_TXN_SUMMONS_T *)(sponsor_details+req->sponsor_details_cnt);

	jpj_summons = (APPNT_JPJ_SUMMONS_T *)(summons+req->summons_cnt);

	pdrm_summons = (APPNT_PDRM_SUMMONS_T *)(jpj_summons+req->unsettled_jpj_summons_cnt);

	lic_susp = (APPNT_LIC_SUSP_T *)(pdrm_summons+req->unsettled_pdrm_summons_cnt);

	lic_revok = (APPNT_LIC_REVOKE_T *)(lic_susp+req->susp_info_cnt);

	pp_info = (APPNT_PP_INFO_T *)(lic_revok+req->revoke_info_cnt);

	applnt_orig = (APPNT_JPN_INFO_T *)(pp_info+req->passport_cnt);

	apl_missed_opex = (APPL_MISSED_OPEX_T *)(applnt_orig+req->jpn_demo_cnt);

	if(req->appl_missed_opex_ind == 'Y')		
		jpn_info = (JPN_INFO_T *)(apl_missed_opex + 1);
	else
		jpn_info = (JPN_INFO_T *)(apl_missed_opex);


	/* Added for IJPN on 12th July 2005 */
	// vasanth requested to insert this table first here inorder to
	// have the JPN_INFO data for the subsequent transactions
	if(req->jpn_info_ind == 'Y') 
	{
	   	//userlog("CREATE_APPLNT(jpn_info) :kptno:  %s", jpn_info->kptno);
		//userlog("CREATE_APPLNT(jpn_info) :kppno:  %s", jpn_info->kppno);
		//userlog("CREATE_APPLNT(jpn_info) :currlongname:  %s", jpn_info->currlongname);

	   if (SUCCESS != (ret_code = insert_jpn_info(jpn_info,ctx)))
	   {
	    #ifdef DEBUG
			userlog("CREATE_APPLNT : insert_jpn_info() failed with %d", ret_code);
	    #endif
	    //	tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
		*pRespSize = resp_length;
		//	memcpy(*pResp, resp, resp_length);
		*pResp = resp;
			return ret_code;
	   }	 	  
	}

	/* end IJPN */


	/* Get the address of APPL_PROC_T */

	appl_proc = (APPL_PROC_T *)(req + 1);	

	if (0 < req->appl_proc_cnt)
	{
		if (SUCCESS != (ret_code = insert_appl_proc_recs(appl_proc, req->header.application_id, req->appl_proc_cnt,ctx)))
		{
#ifdef DEBUG
			userlog("CREATE_APPLNT : insert_appl_proc_rec() failed with %d", ret_code);
#endif
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return ret_code;
			
		}
		
	}

	/* Advance the pointer */
	for (count = 0; count < req->appl_proc_cnt; count++, appl_proc++);

	/* Get the address of APPL_HISTORY_T */

	appl_hist = (APPL_HISTORY_T *)appl_proc;

	if (0 < req->appl_history_cnt)
	{
		if (SUCCESS != (ret_code = insert_old_appl_history(appl_hist, req->header.application_id, req->kpt_no, req->appl_history_cnt, current_long_name, req->missed_opex_flag,ctx)))
		{
#ifdef DEBUG
			userlog("CREATE_APPLNT : insert_old_appl_history() failed with %d", ret_code);
#endif
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return ret_code;
		}
		
	}

	/* Advance the pointer */
	for (count = 0; count < req->appl_history_cnt; count++, appl_hist++);

	/* Get the address of APPL_TXN_T */

	appl_txn = (APPL_TXN_T *)appl_hist;

	if (0 < req->new_txn_cnt)
	{
		if (SUCCESS != (ret_code = insert_txn_recs(appl_txn, req->header.application_id, req->new_txn_cnt, &transaction_type,ctx)))
		{
#ifdef DEBUG
			userlog("CREATE_APPLNT : insert_txn_recs() failed with %d", ret_code);
#endif
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return ret_code;
		}
		
	}

	/* Advance the pointer */
	for (count = 0; count < req->new_txn_cnt; count++, appl_txn++);

	/* Get the address of APPL_OLD_TXN_PAY_T */

	old_txn_pay = (APPL_OLD_TXN_PAY_T *)appl_txn;

	if (0 < req->old_pay_cnt)
	{
		if (SUCCESS != (ret_code = upd_old_txn_pay_info(old_txn_pay, req->header.application_id, req->old_pay_cnt,ctx)))
		{
#ifdef DEBUG
			userlog("CREATE_APPLNT : upd_old_txn_pay_info() failed with %d", ret_code);
#endif
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return ret_code;
		}
		
	}
	

	/* Advance the pointer */
	for (count = 0; count < req->old_pay_cnt; count++, old_txn_pay++);

	/* Get the address of APPL_TXN_FEE_T */

	txn_fee = (APPL_TXN_FEE_T *)old_txn_pay;

	if (0 < req->txn_fee_cnt)
	{
		if (SUCCESS != (ret_code = insert_txn_fees(txn_fee, req->header, req->txn_fee_cnt,ctx)))
		{
#ifdef DEBUG
			userlog("CREATE_APPLNT : insert_txn_fees() failed with %d", ret_code);
#endif
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return ret_code;
		}
		
	}

	/* Advance the pointer to get address of Outstanding fee structure */
	for (count = 0; count < req->txn_fee_cnt; count++, txn_fee++);

	/* Get the address of APPL_OUTSTAND_TXN_FEE_T */

	outstand_txn_fee = (APPL_OUTSTAND_TXN_FEE_T *)txn_fee;

	if (0 < req->outstand_txn_fee_cnt)
	{
		if (SUCCESS != (ret_code = insert_outstand_fee_info(outstand_txn_fee, req->header, req->outstand_txn_fee_cnt,
														req->header.branch_code,ctx)))
		{
#ifdef DEBUG
			userlog("CREATE_APPLNT : insert_outstand_fee_info() failed with %d", ret_code);
#endif
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return ret_code;
		}
		
	}

	/* Advance the pointer to get address of Fee reduction structure */
	for (count = 0; count < req->outstand_txn_fee_cnt; count++, outstand_txn_fee++);

	/* Get the address of APPL_FEE_REDUCTION_T */

	fee_reduction = (APPL_FEE_REDUCTION_T *)outstand_txn_fee;

	if (0 < req->appl_fee_reduce_cnt)
	{
		if (SUCCESS != (ret_code = insert_fee_reduce_info(fee_reduction, req->header.application_id, req->appl_fee_reduce_cnt,ctx)))
		{
#ifdef DEBUG
			userlog("CREATE_APPLNT : insert_fee_reduce_info() failed with %d", ret_code);
#endif
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return ret_code;
		}
		
	}

	/* Advance the pointer to get address of Document serial no structure */
	for (count = 0; count < req->appl_fee_reduce_cnt; count++, fee_reduction++);

	/* Get the address of APPL_DOC_SRNO_T */

	doc_srno = (APPL_DOC_SRNO_T *)fee_reduction;

	if (0 < req->appl_doc_srno_cnt)
	{
		if (SUCCESS != (ret_code = insert_doc_srno_info(doc_srno, req->header.application_id, req->appl_doc_srno_cnt, req->kpt_no,ctx)))
		{
	#ifdef DEBUG
			userlog("CREATE_APPLNT : insert_doc_srno_info() failed with %d", ret_code);
	#endif
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return ret_code;
		}
		
	}

	/* Advance the pointer */
	for (count = 0; count < req->appl_doc_srno_cnt; count++, doc_srno++);

	/* Get the address of SUP_REMARKS_T */

	supervisor = (SUP_REMARKS_T *)doc_srno;

	if (0 < req->super_remarks_cnt)
	{
		ret_code = insert_sup_remarks(supervisor, req->header.application_id, req->super_remarks_cnt,ctx);

		userlog("insert_sup_remarks :ret_code : %d",ret_code);

		if (ret_code != SUCCESS)
		{
#ifdef DEBUG
			userlog("CREATE_APPLNT : insert_sup_remarks() failed with %d", ret_code);
#endif
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return ret_code;
		}

	#ifdef DEBUG
		userlog("insert_sup_remarks : after the insert_sup_remarks");
	#endif
		
	}

	userlog("After req->super_remarks_cnt : %d",req->super_remarks_cnt);

	/* Advance the pointer */
	for (count = 0; count < req->super_remarks_cnt; count++, supervisor++);

	

	/* Get the address of SPONSOR_DETAILS_T */

	sponsor_details = (SPONSOR_DETAILS_T *)supervisor;

	if (0 < req->sponsor_details_cnt)
	{


		if (SUCCESS != (ret_code = insert_sponsor_details(sponsor_details, req->header.application_id, req->sponsor_details_cnt,ctx)))
		{
#ifdef DEBUG
			userlog("CREATE_APPLNT : insert_sponsor_details() failed with %d", ret_code);
#endif
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return ret_code;
		}
		
	}	

	userlog("After req->sponsor_details_cnt : %d",req->sponsor_details_cnt);

	/* Advance the pointer */
	for (count = 0; count < req->sponsor_details_cnt; count++, sponsor_details++);

	userlog("After pointer advanced");

	/* Get the address of APPL_TXN_SUMMONS_T */

	summons = (APPL_TXN_SUMMONS_T *)sponsor_details;

	if (0 < req->summons_cnt)
	{
		if (SUCCESS != (ret_code = insert_txn_summons(summons, req->header.application_id, req->summons_cnt,ctx)))
		{
#ifdef DEBUG
			userlog("CREATE_APPLNT : insert_txn_summons() failed with %d", ret_code);
#endif
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return ret_code;
		}
		
	}

	userlog("After req->summons_cnt : %d",req->summons_cnt);

	/* Advance the pointer */
	for (count = 0; count < req->summons_cnt; count++, summons++);
	userlog("After pointer advanced");

	/* Get the address of APPL_JPJ_SUMMONS_T */

	jpj_summons = (APPNT_JPJ_SUMMONS_T *)summons;

	if (0 < req->unsettled_jpj_summons_cnt)
	{
		if (SUCCESS != (ret_code = insert_jpj_summons(jpj_summons, req->header.application_id, req->unsettled_jpj_summons_cnt,ctx)))
		{
#ifdef DEBUG
			userlog("CREATE_APPLNT : insert_jpj_summons() failed with %d", ret_code);
#endif
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return ret_code;
		}
		
	}
	userlog("After req->summons_cnt : %d",req->summons_cnt);

	/* Advance the pointer */
	for (count = 0; count < req->unsettled_jpj_summons_cnt; count++, jpj_summons++);
	userlog("After pointer advanced");

	/* Get the address of APPL_PDRM_SUMMONS_T */

	pdrm_summons = (APPNT_PDRM_SUMMONS_T *)jpj_summons;

	if (0 < req->unsettled_pdrm_summons_cnt)
	{
		if (SUCCESS != (ret_code = insert_pdrm_summons(pdrm_summons, req->header.application_id, req->kpt_no, req->unsettled_pdrm_summons_cnt,ctx)))
		{
#ifdef DEBUG
			userlog("CREATE_APPLNT : insert_pdrm_summons() failed with %d", ret_code);
#endif
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return ret_code;
		}
		
	}

	userlog("After req->unsettled_pdrm_summons_cnt : %d",req->unsettled_pdrm_summons_cnt);

	/* Advance the pointer */
	for (count = 0; count < req->unsettled_pdrm_summons_cnt; count++, pdrm_summons++);

	userlog("After pointer advanced");

	/* Get the address of APPNT_LIC_SUSP_T */

	lic_susp = (APPNT_LIC_SUSP_T *)pdrm_summons;

	if (0 < req->susp_info_cnt)
	{
		if (SUCCESS != (ret_code = insert_lic_susp_info(lic_susp, req->header.application_id, req->susp_info_cnt,ctx)))
		{
#ifdef DEBUG
			userlog("CREATE_APPLNT : insert_lic_susp_info() failed with %d", ret_code);
#endif
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return ret_code;
		}
		
	}

	userlog("After req->susp_info_cnt : %d",req->susp_info_cnt);

	/* Advance the pointer */
	for (count = 0; count < req->susp_info_cnt; count++, lic_susp++);

	userlog("After pointer advanced");

	/* Get the address of APPNT_LIC_REVOKE_T */

	lic_revok = (APPNT_LIC_REVOKE_T *)lic_susp;

	if (0 < req->revoke_info_cnt)
	{
		if (SUCCESS != (ret_code = insert_lic_revok_info(lic_revok, req->header.application_id, req->revoke_info_cnt,ctx)))
		{
#ifdef DEBUG
			userlog("CREATE_APPLNT : insert_lic_revok_info() failed with %d", ret_code);
#endif
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return ret_code;
		}
		
	}

	userlog("After req->revoke_info_cnt : %d",req->revoke_info_cnt);

	/* Advance the pointer */
	for (count = 0; count < req->revoke_info_cnt; count++, lic_revok++);
	userlog("After pointer advanced");

	/* Get the address of APPNT_PP_INFO_T */

	pp_info = (APPNT_PP_INFO_T *)lic_revok;
	pp_info_orig = pp_info;

	userlog("After req->passport_cnt : %d",req->passport_cnt);
	/* Advance the pointer to get address of demographic structure */
	for (count = 0; count < req->passport_cnt; count++, pp_info++);
	userlog("After pointer advanced");
	
	/* Get the address of APPNT_JPN_INFO_T */
	applnt_orig = (APPNT_JPN_INFO_T *)pp_info;

	/* Update/Insert the Application details */

	if (SUCCESS != (ret_code = update_appl_info(req, transaction_type,ctx)))
	{
	#ifdef DEBUG
		userlog("CREATE_APPLNT : update_appl_info() failed with %d", ret_code);
	#endif
		//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
		*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
		*pResp = resp;
			return ret_code;
	}

userlog("After update_appl_info");

	///* Advance the pointer  */
	//for (count = 0; count < req->jpn_demo_cnt; count++, applnt_orig++);

	
		/* Check the Application status */

	if (SUCCESS != (ret_code = get_appl_status(req->header.application_id, &appl_status,&photo_capture,ctx)))
	{
#ifdef DEBUG
		userlog("CREATE_APPLNT : get_appl_status() failed with %d", ret_code);
#endif
		//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
				return ret_code;
	}

	if (PENDING_CANCEL == appl_status || CANCELLED == appl_status)
	{
#ifdef DEBUG
		userlog("CREATE_APPLNT : Application is due for Cancellation");
#endif
		//tpreturn(TPSUCCESS, APPL_DUE_CANCEL, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
				return APPL_DUE_CANCEL;
		
	}

	if (COMPLETED_GSC == req->appl_status)
	{
		/* Insert the record in Application History */

		if (SUCCESS != (ret_code = insert_appl_history(req->header.application_id, current_long_name,ctx)))
		{
#ifdef DEBUG
			userlog("CREATE_APPLNT : insert_appl_history() failed with %d", ret_code);
#endif
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
				return ret_code;
		}
	}


	/* Check whether license info is being retrived from JPJ */

	if (SUCCESS != (ret_code = check_dl_info(req->header.application_id, &lic_flag,ctx)))
	{
#ifdef DEBUG
		userlog("CREATE_APPLNT : check_dl_info() failed with %d", ret_code);
#endif
		//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
				return ret_code;
	}

#ifdef DEBUG
		userlog("CREATE_APPLNT : check_dl_info() returned Lic flag - %c", lic_flag);
#endif

	/* Check whether passport info is being retrived from IMM */

	if (SUCCESS != (ret_code = check_pp_info(req->kpt_no, &passport_flag,ctx)))
	{
#ifdef DEBUG
		userlog("CREATE_APPLNT : check_pp_info() failed with %d", ret_code);
#endif
		//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
				return ret_code;
	}

#ifdef DEBUG
		userlog("CREATE_APPLNT : check_pp_info() returned Passport flag - %c", passport_flag);
#endif


	/* Fetch all the transaction codes for which the applicant has applied for */

	if (SUCCESS != (ret_code = fetch_txncode(req->header.application_id, &txn_details, &txn_count,ctx)))
	{
#ifdef DEBUG
		userlog("CREATE_APPLNT : fetch_txncode() failed with %d", ret_code);
#endif
		//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
				return ret_code;
	}

	txn_details_orig = txn_details;

#ifdef DEBUG
	userlog("CREATE_APPLNT - %X", txn_details_orig);
	userlog("CREATE_APPLNT - %d", txn_count );
#endif

	for (count = 0; count < txn_count; count++, txn_details++)
	{
#ifdef DEBUG
		userlog("CREATE_APPLNT - Processing transaction - %d", count+1);
#endif
		switch(txn_details->txn_type)
		{
			case TXN_12YO :
			case TXN_FT :
			case TXN_CONV :
			case TXN_REPL :
			{
				transaction_type = txn_details->txn_type;

				if (NO == jpn_info_insert)
				{
					if (0 != strcmp(req->kpt_no, ""))
					{
						if (SUCCESS != (ret_code = insert_card_status(req, txn_details->txn_code, applnt_orig, &lcversion, ctx)))
						{
						#ifdef DEBUG
							userlog("CREATE_APPLNT : insert_card_status() failed with %d", ret_code);
						#endif
							free(txn_details_orig);
						//	tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
							//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
							return ret_code;
						}
					}


					if (COMPLETED_GSC == req->appl_status)
					{
						/*
						if (SUCCESS != (ret_code = get_afis_flag(req->kpt_no, &afis_flag)))
						{
#ifdef DEBUG
							userlog("CREATE_APPLNT : get_afis_flag() failed with %d", ret_code);
#endif
							free(txn_details_orig);
							//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;
						}
						
#ifdef DEBUG
						userlog("CREATE_APPLNT : get_afis_flag() successfull , Afis flag - %c", afis_flag);
#endif
						
						if ('2' != afis_flag && '8' != afis_flag && '9' != afis_flag)
							appl_status = PENDING_1N;
						else
							appl_status = READY_PROD;
					*/

			/* if appl_priority is 2 then change appl_stat to 'D' and fire afis update 
						included on 3/08/2005 for Vasanth */

					if(req->appl_nature == '2')
					{
						appl_status = READY_PROD;

						/* write a function to insert itno CLMS */

						if (SUCCESS != (ret_code = insert_for_clms(req, lcversion, ctx)))
						{
						#ifdef DEBUG
							userlog("CREATE_APPLNT : insert_for_clms() failed with %d", ret_code);
						#endif
							free(txn_details_orig);
						//	tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
							//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
							return ret_code;
						}

					/***** Need to call AFIS_UPDATE Here ******/

						afis_update_flag = YES;

						userlog("afis_update_flag in the if loop is : %c",afis_update_flag);

					}
					else
					{
						if(applnt_orig->afisbypass == '1')
						{
							appl_status = READY_PROD;

						/* write a function to insert itno CLMS */

						if (SUCCESS != (ret_code = insert_for_clms(req, lcversion, ctx)))
						{
						#ifdef DEBUG
							userlog("CREATE_APPLNT : insert_for_clms() failed with %d", ret_code);
						#endif
							free(txn_details_orig);
						//	tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
							//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
							return ret_code;
						}


							if (SUCCESS != (ret_code = insert_into_afis_refire(req->header.application_id,req->kpt_no,ctx)))
							{
							#ifdef DEBUG
								userlog("CREATE_APPLNT : insert_into_afis_refire() failed with %d", ret_code);
							#endif
							
							//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;
							}

						}
						else
							appl_status = PENDING_1N; 

						/***** Need to call AFIS_UPDATE Here ******/

						afis_update_flag = YES;
						userlog("afis_update_flag in the else loop is : %c",afis_update_flag);

					
					} /* end of appl_nature check */

					}	/* End if (COMPLETED_GSC == req->appl_status) */
					else
						appl_status = req->appl_status;

				/* Added to check phonein cases for sending afis on 18/02/2004 by shiva.p 
				strncpy(q_no, req->header.application_id + strlen(req->header.application_id) - (Q_NO_SIZE -1), Q_NO_SIZE - 1);
				q_no[Q_NO_SIZE - 1] = '\0';
				
					if( queue_no >= PHONE_IN_Q_NO_START && queue_no <= PHONE_IN_Q_NO_END)
					{
						if(photo_capture =='C')
							appl_status = PENDING_1N;
						else
							appl_status = READY_PROD;
					}
					commented temporerily for IJPN */

#ifdef DEBUG
					userlog("CREATE_APPLNT : Appl status - %c", appl_status);
#endif
					/* Insert the record into CARD_STATUS table */
					// moved this piece of code to the begining of the if condition
					/*
					if (0 != strcmp(req->kpt_no, ""))
					{
						if (SUCCESS != (ret_code = insert_card_status(req, txn_details->txn_code, applnt_orig,ctx)))
						{
#ifdef DEBUG
							userlog("CREATE_APPLNT : insert_card_status() failed with %d", ret_code);
#endif
							free(txn_details_orig);
						//	tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
							//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
							return ret_code;
						}
					}
					*/

					if (0 < req->jpn_demo_cnt)
					{
						/* Insert the applicant's record into APPNT_JPN_INFO table */

						if (SUCCESS != (ret_code = insert_into_appnt_info(applnt_orig, req, atoi(txn_details->txn_code), txn_details->txn_type,ctx)))
						{
							#ifdef DEBUG
								userlog("CREATE_APPLNT : insert_into_appnt_info() failed with %d", ret_code);
							#endif
							free(txn_details_orig);
								//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;
						}
					}

				/* Advance the pointer to get Applicant's image info structure */
				//applnt = applnt_orig;
				//applnt_new = applnt + req->jpn_demo_cnt;

				//applnt_img = (APPNT_JPN_IMG_T *)applnt_new;

				applnt_new = applnt_orig;
				for (count = 0; count < req->jpn_demo_cnt; count++, applnt_new++);	

				/* Get the address of APPL_MISSED_OPEX_T */
				 apl_missed_opex = (APPL_MISSED_OPEX_T *)applnt_new;

				if(req->appl_missed_opex_ind == 'Y')
					appl_missed_opex_cnt = 1;

				for ( count = 0; count < appl_missed_opex_cnt; count++, apl_missed_opex++);

				applnt_img = (APPNT_JPN_IMG_T *)apl_missed_opex;
				jpn_info = (JPN_INFO_T *)apl_missed_opex;

				if(req->jpn_info_ind == 'Y')
					jpn_info_cnt = 1;

				for ( count = 0; count < jpn_info_cnt; count++, jpn_info++);
	
			//	applnt_img = (APPNT_JPN_IMG_T *)jpn_info; 
				jpn_sb_info = (JPN_SB_INFO_T *)jpn_info;
			//	jpn_sb_info = (JPN_SB_INFO_T *)apl_missed_opex;

				if(req->jpn_sb_info_ind == 'Y')
					jpn_sb_info_cnt = 1;
				
				for ( count = 0; count < jpn_sb_info_cnt; count++, jpn_sb_info++);

				applnt_img = (APPNT_JPN_IMG_T *)jpn_sb_info;
					
					/*
					if(req->appl_missed_opex_ind == 'Y')
					{
						apl_missed_opex = (APPL_MISSED_OPEX_T *)(applnt_new);
						applnt_img = (APPNT_JPN_IMG_T *)(apl_missed_opex+1);
					}
					if(req->jpn_info_ind == 'Y') 
					{
						if(req->appl_missed_opex_ind == 'Y')
						{	
						  jpn_info = (JPN_INFO_T *)(apl_missed_opex+1);
						  applnt_img = (APPNT_JPN_IMG_T *)(jpn_info+1);
						}
						else if(req->appl_missed_opex_ind == 'N')
						{	  
						  jpn_info = (JPN_INFO_T *)(applnt_new);
						  applnt_img = (APPNT_JPN_IMG_T *)jpn_info+1;
						}
					}
					if(req->jpn_sb_info_ind == 'Y')
					{
						if(req->jpn_info_ind == 'Y')
						{
							jpn_sb_info = (JPN_SB_INFO_T *)(jpn_info+1);
							applnt_img = (APPNT_JPN_IMG_T *)(jpn_sb_info+1);
						}
						else if((req->appl_missed_opex_ind == 'N') && (req->jpn_info_ind == 'N'))
						{
							jpn_sb_info = (JPN_SB_INFO_T *)(applnt_new);
							applnt_img = (APPNT_JPN_IMG_T *)jpn_sb_info+1;
						}
						else if((req->appl_missed_opex_ind == 'Y') && (req->jpn_info_ind == 'N'))
						{
							jpn_sb_info = (JPN_SB_INFO_T *)(apl_missed_opex+1);
							applnt_img = (APPNT_JPN_IMG_T *)(jpn_sb_info+1);
						}
					}
					
					*/

					/* Advance the pointer to get Applicant's image info structure */
//					applnt_img = (APPNT_JPN_IMG_T *)applnt;

					userlog("req->jpn_img_cnt : %d",req->jpn_img_cnt);

					userlog("applnt_img->lf.fp_img_size : %ld FINGERPRINT_SIZE : %ld " , applnt_img->lf.fp_img_size ,FINGERPRINT_SIZE);
					userlog("	applnt_img->lf.original_minutiae_size : %ld MINUTIAE_SIZE: %ld" , applnt_img->lf.original_minutiae_size , MINUTIAE_SIZE);
					userlog("	applnt_img->lf.normalized_minutiae_size : %ld MINUTIAE_SIZE: %ld " ,applnt_img->lf.normalized_minutiae_size , MINUTIAE_SIZE);
					userlog("	applnt_img->lf.matrix_buffer_size : %ld MATRIX_BUFFER_SIZE: %ld ", applnt_img->lf.matrix_buffer_size , MATRIX_BUFFER_SIZE);
					userlog("	applnt_img->rf.fp_img_size : %ld FINGERPRINT_SIZE : %ld " , applnt_img->rf.fp_img_size , FINGERPRINT_SIZE);
					userlog("	applnt_img->rf.original_minutiae_size : %ld MINUTIAE_SIZE: %ld " ,applnt_img->rf.original_minutiae_size , MINUTIAE_SIZE );
					userlog("	applnt_img->rf.normalized_minutiae_size : %ld MINUTIAE_SIZE: %ld " ,applnt_img->rf.normalized_minutiae_size ,MINUTIAE_SIZE);
					userlog("	applnt_img->rf.matrix_buffer_size : %ld MATRIX_BUFFER_SIZE: %ld " ,applnt_img->rf.matrix_buffer_size ,MATRIX_BUFFER_SIZE);
					userlog("	applnt_img->sponsor_lf.fp_img_size : %ld FINGERPRINT_SIZE : %ld ", applnt_img->sponsor_lf.fp_img_size , FINGERPRINT_SIZE);
					userlog("	applnt_img->sponsor_lf.original_minutiae_size : %ld MINUTIAE_SIZE : %ld ",applnt_img->sponsor_lf.original_minutiae_size , MINUTIAE_SIZE);
					userlog("	applnt_img->sponsor_rf.fp_img_size : %ld FINGERPRINT_SIZE : %ld ",applnt_img->sponsor_rf.fp_img_size , FINGERPRINT_SIZE);
					userlog("	applnt_img->sponsor_rf.original_minutiae_size : %ld MINUTIAE_SIZE: %ld", applnt_img->photo.lr_photo_size , ALLOWABLE_LR_PHOTO_SIZE); 
					userlog("	applnt_img->photo.hr_photo_size : %ld HIGH_RES_PHOTO_SIZE : %ld" , applnt_img->photo.hr_photo_size , HIGH_RES_PHOTO_SIZE);
					userlog("applnt_img->photo.lr_photo_size : %ld  ALLOWABLE_LR_PHOTO_SIZE : %ld", applnt_img->photo.lr_photo_size , ALLOWABLE_LR_PHOTO_SIZE);

					if (0 < req->jpn_img_cnt)
					{				

						/* Insert the applicant's record into APPNT_JPN_IMG table */

						if (SUCCESS != (ret_code = insert_into_appnt_image(applnt_img, req,ctx)))
						{
							#ifdef DEBUG
							userlog("CREATE_APPLNT : insert_into_appnt_image() failed with %d", ret_code);
							#endif
							free(txn_details_orig);
							//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
							//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
							return ret_code;
						}

					}

					jpn_info_insert = YES;	/* Record inserted successfully */
					jpn_update_flag = YES;

				}	/* End if (jpn_info_insert == NO) */

				if (TXN_REPL_LOSS == atoi(txn_details->txn_code))
				{
					if (SUCCESS != (ret_code = insert_into_card_blacklist(req, applnt_orig,ctx)))
					{
#ifdef DEBUG
						userlog("CREATE_APPLNT : insert_into_blacklist() failed with %d", ret_code);
#endif
						free(txn_details_orig);
						//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
							*pRespSize = resp_length;
							//memcpy(*pResp, resp, resp_length);
							*pResp = resp;
							return ret_code;
					}

				}	/* End if (TXN_REPL_LOSS == atoi(txn_details->txn_code)) */


				/* Added this part of code for JRS-108 on 18/12/2007 
				Update card_status to 20, when kp09/kp11 printed */

				#ifdef DEBUG
					userlog("CREATE_APPLNT : update_cardstatus_to_retained: req->summons_pay_ind %c", req->summons_pay_ind);
				#endif

				if ((TXN_REPL_DMG == atoi(txn_details->txn_code) || TXN_REPL_CHIP_CARD_DMG == atoi(txn_details->txn_code)) ||
					 (TXN_PRN_KP11 == atoi(txn_details->txn_code) || TXN_TMP_ID_LOSS == atoi(txn_details->txn_code)))
				{
					if(req->summons_pay_ind == 'Z')
					{
						if (SUCCESS != (ret_code = update_cardstatus_to_retained(req, ctx)))
						{
						#ifdef DEBUG
							userlog("CREATE_APPLNT : update_cardstatus_to_retained() failed with %d", ret_code);
						#endif
							free(txn_details_orig);
							//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
								return ret_code;
						}
					}

				}	/* End if (TXN_REPL_DMG == atoi(txn_details->txn_code)) */

				// end of JRS-108


				if (YES == lic_flag)	/* If license details are present */
				{
					if (NO == jpj_info_insert)
					{
						/* Insert the applicant's JPJ data into APPNT_JPJ_INFO table */

						if (SUCCESS != (ret_code = insert_into_appnt_jpj_info(req,ctx)))
						{
#ifdef DEBUG
							userlog("CREATE_APPLNT : insert_into_appnt_jpj_info() failed with %d", ret_code);
#endif
							free(txn_details_orig);
							//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
							//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
							return ret_code;
						}

						/* Insert the applicant's License data from retrieved from JPJ into APPNT_LIC_INFO table */

						if (SUCCESS != (ret_code = insert_into_appnt_jpj_lic_info(req->header.application_id, req,ctx)))
						{
#ifdef DEBUG
							userlog("CREATE_APPLNT : insert_into_appnt_jpj_lic_info() failed with %d", ret_code);
#endif
							free(txn_details_orig);
							//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
							//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
							return ret_code;
						}

						jpj_info_insert = YES;	/* JPJ info inserted successfully */

						jpj_update_flag = YES;

						
					}	/* End if (NO == jpj_info_insert) */

					txn_code_numeric = atoi(txn_details->txn_code);

					if (txn_code_numeric == TXN_CON_NAME_CH ||
						txn_code_numeric == TXN_CON_ADDR_CH)
							jpj_update_flag = YES;
					
				}	/* End if (YES == lic_flag)	*/

				if (YES == passport_flag)
				{
					if (imm_update_flag == NO)
					{
						if (SUCCESS != (ret_code = insert_imm_info(req, pp_info_orig,ctx)))
						{
#ifdef DEBUG
							userlog("CREATE_APPLNT : insert_imm_info() failed with %d", ret_code);
#endif
							free(txn_details_orig);
							//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
						//	memcpy(*pResp, resp, resp_length);
								*pResp = resp;
							return ret_code;
						}
						
						imm_update_flag = YES;
						imm_insert_flag = YES;
					}	/* End if (imm_update_flag == NO) */

				}	/* End if (YES == passport_flag) */

				break;
				
			}	/* End of 1st case */

			case TXN_LIC :
			{
				if (YES == lic_flag)	/* If license details are present */
				{
					if (NO == jpj_info_insert)
					{
						/* Insert the applicant's JPJ data into APPNT_JPJ_INFO table */

						if (SUCCESS != (ret_code = insert_into_appnt_jpj_info(req,ctx)))
						{
#ifdef DEBUG
							userlog("CREATE_APPLNT : insert_into_appnt_jpj_info() failed with %d", ret_code);
#endif
							free(txn_details_orig);
							//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
							//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
							return ret_code;
						}

						/* Insert the applicant's License data from retrieved from JPJ into APPNT_LIC_INFO table */

						if (SUCCESS != (ret_code = insert_into_appnt_jpj_lic_info(req->header.application_id, req,ctx)))
						{
#ifdef DEBUG
							userlog("CREATE_APPLNT : insert_into_appnt_jpj_lic_info() failed with %d", ret_code);
#endif
							free(txn_details_orig);
							//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
						//	memcpy(*pResp, resp, resp_length);
								*pResp = resp;
							return ret_code;
						}

						jpj_info_insert = YES;	/* JPJ info inserted successfully */

						jpj_update_flag = YES;

					}	/* End if (NO == jpj_info_insert) */
				

					
					/* Insert/Update applicant's new License data submitted at workstation into APPNT_LIC_INFO table */

					txn_code_numeric = atoi(txn_details->txn_code);

					if(txn_code_numeric == TXN_PDL_NEW || txn_code_numeric == TXN_PDL_CLASS_ADD ||
					   txn_code_numeric == TXN_PRB_NEW || txn_code_numeric == TXN_PRB_CLASS_ADD ||
					   txn_code_numeric == TXN_CDL_NEW || txn_code_numeric == TXN_CDL_CLASS_ADD ||
					   txn_code_numeric == TXN_GDL_NEW || txn_code_numeric == TXN_GDL_CLASS_ADD ||
					   txn_code_numeric == TXN_PSV_NEW || txn_code_numeric == TXN_PSV_CLASS_ADD ||
					   txn_code_numeric == TXN_PDL_RENEW || txn_code_numeric == TXN_CDL_RENEW ||
					   txn_code_numeric == TXN_GDL_RENEW || txn_code_numeric == TXN_PSV_RENEW )

					{
						
						if (SUCCESS != (ret_code = insert_new_lic_info(req->header.application_id, txn_details,ctx)))
						{
#ifdef DEBUG
							userlog("CREATE_APPLNT : insert_new_lic_info() failed with %d", ret_code);
#endif
							free(txn_details_orig);
							//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
							//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
							return ret_code;
						}

					}
					

					if (txn_code_numeric == TXN_LOAD_JPJ_SUMM ||
						txn_code_numeric == TXN_LOAD_PDRM_SUMM)
					{
						if (SUCCESS != (ret_code = get_summons_agency(req->header.application_id, &jpj_summons_flag, 
																&pdrm_summons_flag,ctx)))
						{
#ifdef DEBUG
							userlog("CREATE_APPLNT : get_summons_agency() failed with %d", ret_code);
#endif
							free(txn_details_orig);
							//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
							//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
							return ret_code;
						}

						if (YES == jpj_summons_flag)
							jpj_update_flag = YES;

						if (YES == pdrm_summons_flag)
							pdrm_update_flag = YES;
						
					}

				}	/* End if (YES == lic_flag) */
				else
				{
					txn_code_numeric = atoi(txn_details->txn_code);

					if (txn_code_numeric == TXN_LOAD_JPJ_SUMM ||
						txn_code_numeric == TXN_LOAD_PDRM_SUMM)
					{
						if (SUCCESS != (ret_code = get_summons_agency(req->header.application_id, &jpj_summons_flag, 
																&pdrm_summons_flag,ctx)))
						{
#ifdef DEBUG
							userlog("CREATE_APPLNT : get_summons_agency() failed with %d", ret_code);
#endif
							free(txn_details_orig);
							//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
								*pRespSize = resp_length;
							//memcpy(*pResp, resp, resp_length);
								*pResp = resp;
							return ret_code;
						}

						if (YES == jpj_summons_flag)
							jpj_update_flag = YES;

						if (YES == pdrm_summons_flag)
							pdrm_update_flag = YES;
						
					}

				}

				break;

			}	/* End of case TXN_LIC : */

			case TXN_CHIP_UPD :
			{
				if (COMPLETED_GSC == req->appl_status)
				{
					appl_status = FAST_LANE_COMPLETE;
				}
				else
					appl_status = req->appl_status;

				txn_code_numeric = atoi(txn_details->txn_code);

				/* Insert the applicant's record into APPNT_JPN_INFO table */
				if (0 < req->jpn_demo_cnt)
				{
					
					if (SUCCESS != (ret_code = insert_into_appnt_info(applnt_orig, req, txn_code_numeric, txn_details->txn_type,ctx)))
					{
#ifdef DEBUG
						userlog("CREATE_APPLNT : insert_into_appnt_info() failed with %d", ret_code);
#endif
						free(txn_details_orig);
						//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
							*pRespSize = resp_length;
						//	memcpy(*pResp, resp, resp_length);
							*pResp = resp;
							return ret_code;
					}
				}

				if (txn_code_numeric == TXN_ADDR_UPD)
				{
					if (0 < req->jpn_demo_cnt)
					{
					
						/* Insert the applicant's record into APPNT_JPN_INFO table */

//						if (SUCCESS != (ret_code = insert_into_appnt_info(applnt_orig, req, txn_code_numeric, txn_details->txn_type,ctx)))
//						{
//#ifdef DEBUG
//							userlog("CREATE_APPLNT : insert_into_appnt_info() failed with %d", ret_code);
//#endif
//							free(txn_details_orig);
//							tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
//						}

         				jpn_info_insert = YES;
						jpn_update_flag = YES;
					}

					if (YES == lic_flag)	/* If license details are present */
					{
						jpj_update_flag = YES;
					}

				}	/* End if (txn_code_numeric == TXN_ADDR_UPD) */

				if (txn_code_numeric == TXN_IMM_UPD)
				{
					if (YES == passport_flag)
					{
						if (imm_insert_flag == NO)
						{
							if (SUCCESS != (ret_code = insert_imm_info(req, pp_info_orig,ctx)))
							{
#ifdef DEBUG
								userlog("CREATE_APPLNT : insert_imm_info() failed with %d", ret_code);
#endif
								free(txn_details_orig);
								//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
									*pRespSize = resp_length;
								//memcpy(*pResp, resp, resp_length);
									*pResp = resp;
								return ret_code;
							}
								
							imm_update_flag = YES;
							imm_insert_flag = YES;
						}

					}
/*					else
					{
#ifdef DEBUG
						userlog("CREATE_APPLNT : No passport info available for the applicant");
#endif
//						 Log the error 
						strcpy(prog_log.remarks, "CREATE_APPLNT : No passport info available for the applicant");
						strcpy(excep_log.error_msg, "CREATE_APPLNT : No passport info available for the applicant");
						excep_log.termination_flag = YES;
						excep_log.severity = FATAL;

						log_error(ctx);
						
						tpreturn(TPSUCCESS, NO_PASSPORT_INFO, (char *) resp, resp_length, 0);

					}
*/					 

				}	/* End if (txn_code_numeric == TXN_IMM_UPD) */

				if (YES == lic_flag)	/* If license details are present */
				{
					if (txn_code_numeric == TXN_DL_UPD)
					{
						if (NO == jpj_info_insert)
						{
							/* Insert the applicant's JPJ data into APPNT_JPJ_INFO table */

							if (SUCCESS != (ret_code = insert_into_appnt_jpj_info(req,ctx)))
							{
#ifdef DEBUG
								userlog("CREATE_APPLNT : insert_into_appnt_jpj_info() failed with %d", ret_code);
#endif
								free(txn_details_orig);
								//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
									*pRespSize = resp_length;
									//memcpy(*pResp, resp, resp_length);
									*pResp = resp;
									return ret_code;
							}

							/* Insert the applicant's License data from retrieved from JPJ into APPNT_LIC_INFO table */

							if (SUCCESS != (ret_code = insert_into_appnt_jpj_lic_info(req->header.application_id, req,ctx)))
							{
#ifdef DEBUG
								userlog("CREATE_APPLNT : insert_into_appnt_jpj_lic_info() failed with %d", ret_code);
#endif
								free(txn_details_orig);
								//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
									*pRespSize = resp_length;
								//	memcpy(*pResp, resp, resp_length);
									*pResp = resp;
									return ret_code;
							}

							jpj_info_insert = YES;	/* JPJ info inserted successfully */

							jpj_update_flag = YES;

						}	/* End if (NO == jpj_info_insert) */

					}	/* End if (txn_code_numeric == TXN_DL_UPD) */
				}	/* End if (YES == lic_flag) */

				chip_update_txn = YES;

				break;

			}	/* End of case TXN_CHIP_UPD : */

			case TXN_MISC:
			{
				if (COMPLETED_GSC == req->appl_status)
				{
					appl_status = FAST_LANE_COMPLETE;
				}
				else
					appl_status = req->appl_status;

				txn_code_numeric = atoi(txn_details->txn_code);

				if (txn_code_numeric == TXN_PRN_CHIP 
					|| txn_code_numeric == TXN_TMP_ID_LOSS 
					|| txn_code_numeric == TXN_PRN_KP11)
				{
					appl_stat_upd = YES;
					jpn_update_flag = YES;
				}
				else if (txn_code_numeric == TXN_PRINT_MDL)
				{
					appl_stat_upd = YES;
					jpj_update_flag = YES;
				}
				else if (txn_code_numeric == TXN_DISHONOURED_CHK_JPN
						|| txn_code_numeric == TXN_DISHONOURED_CHK_JPJ)
				{
					appl_stat_upd = NO;
					jpn_update_flag = YES;
				}
				

				break;

			}	/* End of case TXN_MISC: */

			default :
				break;
		}	/* End switch (txn_details->txn_type) */

	}	/* End of for (count = 0; count < txn_count; count++, txn_details++) */

#ifdef DEBUG
	userlog("CREATE_APPLNT : JPN info insert - %c", jpn_info_insert);
	userlog("CREATE_APPLNT : JPN update flag - %c", jpn_update_flag);
	userlog("CREATE_APPLNT : JPJ info insert - %c", jpj_info_insert);
	userlog("CREATE_APPLNT : JPJ update flag - %c", jpj_update_flag);
	userlog("CREATE_APPLNT : Application status update flag - %c", appl_stat_upd);
#endif

	/* ---------------------------------  */

	/*Added for IJPN*/

	/* Advance the pointer  */
	applnt_new = applnt_orig;
	for (count = 0; count < req->jpn_demo_cnt; count++, applnt_new++);

		
	/* Insert the Missed opex details details */

	/* Get the address of APPL_MISSED_OPEX_T */
	apl_missed_opex = (APPL_MISSED_OPEX_T *)applnt_new;
	
	if(req->appl_missed_opex_ind == 'Y')	// added on 10th June 2005 for IJPN
	{
	 if (SUCCESS != (ret_code = insert_appl_missed_opex(apl_missed_opex, req->header.application_id,ctx)))
	 {
	 #ifdef DEBUG
		userlog("CREATE_APPLNT : insert_appl_missed_opex() failed with %d", ret_code);
	 #endif
	 //	tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
		*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
		*pResp = resp;
			return ret_code;
	 }
	}

	if(req->appl_missed_opex_ind == 'Y')
			appl_missed_opex_cnt = 1;

	for ( count = 0; count < appl_missed_opex_cnt; count++, apl_missed_opex++);


	/* Insert the jpn info details */

		 /* Get the address of JPN_INFO_T */
	   jpn_info = (JPN_INFO_T *)apl_missed_opex;

	if(req->jpn_info_ind == 'Y')  // added on 10th June 2005 for IJPN
	{
		/* this table data is inserted at the begining of the flow
		   so the code is commented here */
	   	//userlog("CREATE_APPLNT(jpn_info) :kptno:  %s", jpn_info->kptno);
		//userlog("CREATE_APPLNT(jpn_info) :kppno:  %s", jpn_info->kppno);
		//userlog("CREATE_APPLNT(jpn_info) :currlongname:  %s", jpn_info->currlongname);

	    //if (SUCCESS != (ret_code = insert_jpn_info(jpn_info)))
		//{
	    //#ifdef DEBUG
		//userlog("CREATE_APPLNT : insert_jpn_info() failed with %d", ret_code);
	    //#endif
	    ////	tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
		//*pRespSize = resp_length;
		////	memcpy(*pResp, resp, resp_length);
		//*pResp = resp;
		//	return ret_code;
		//}	 	  
	}

	if(req->jpn_info_ind == 'Y')
			jpn_info_cnt = 1;

	for ( count = 0; count < jpn_info_cnt; count++, jpn_info++);


	/* Insert the jpn sb info details  */

	 /* Get the address of JPN_SB_INFO_T  */
	 //jpn_sb_info = (JPN_SB_INFO_T *)jpn_info;
	jpn_sb_info = (JPN_SB_INFO_T *)apl_missed_opex;

	if(req->jpn_sb_info_ind == 'Y')  // added on 10th June 2005 for IJPN
	{
	    if (SUCCESS != (ret_code = insert_jpn_sb_info(jpn_sb_info,ctx)))
		 {
	     #ifdef DEBUG
			userlog("CREATE_APPLNT : insert_jpn_sb_info() failed with %d", ret_code);
		 #endif
		 //tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
		 *pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
		 *pResp = resp;
			return ret_code;
		 }
	 }

		//if(req->jpn_sb_info_ind == 'Y')
		//	jpn_sb_info_cnt = 1;
		//
		//for ( count = 0; count < jpn_sb_info_cnt; count++, jpn_sb_info++);
	 
	
	/* End IJPN */

	/* ---------------------------------  */

	if (YES == appl_stat_upd)
	{
		if (SUCCESS != (ret_code = update_appl_stat(req->header.application_id, appl_status,ctx)))
		{
#ifdef DEBUG
			userlog("CREATE_APPLNT : update_appl_stat() failed with %d", ret_code);
#endif
			free(txn_details_orig);
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
				return ret_code;
		}
	}

	if (YES == jpj_info_insert)
	{
		if (SUCCESS != (ret_code = perform_common_jpj_checks(req, transaction_type, &jpj_load_on_chip,ctx)))
		{
#ifdef DEBUG
			userlog("CREATE_APPLNT : perform_common_jpj_checks() failed with %d", ret_code);
#endif
			free(txn_details_orig);
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
				return ret_code;
		}

	}

#ifdef DEBUG
			userlog("CREATE_APPLNT : JPJ load on chip flag -  %c", jpj_load_on_chip);
#endif

	if (YES == chip_update_txn)		/* Retrieve the agency on chip from CARD_STATUS */
	{
		if (SUCCESS != (ret_code = get_agency_on_chip(req->kpt_no, agency_on_chip,ctx)))
		{
#ifdef DEBUG
			userlog("CREATE_APPLNT : get_agency_on_chip() failed with %d", ret_code);
#endif
			free(txn_details_orig);
			//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
				return ret_code;
		}

#ifdef DEBUG
			userlog("CREATE_APPLNT : get_agency_on_chip() returned agnecy on chip - %s", agency_on_chip);
#endif
	
		/* Set the Agency on chip except for JPJ */

		if (YES == jpn_info_insert || YES == jpj_info_insert || 
			YES == imm_update_flag || YES == pdrm_update_flag )
		{
			if (YES == jpn_info_insert )
				agency_on_chip[1] = '1';

			if (YES == imm_update_flag )
				agency_on_chip[2] = '1';

			if (YES == pdrm_update_flag )
				agency_on_chip[4] = '1';

#ifdef DEBUG
			userlog("CREATE_APPLNT : Agency on chip to be updated - %s", agency_on_chip);
#endif

			/* Update the Agency on chip in CARD_STATUS */

			if (SUCCESS != (ret_code = update_agency_on_chip(req->kpt_no, agency_on_chip, req->header,ctx)))
			{
#ifdef DEBUG
				userlog("CREATE_APPLNT : update_agency_on_chip() failed with %d", ret_code);
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
	else
	{

		/* Set the Agency on chip for all agencies */
		
		if (YES == jpn_info_insert || YES == jpj_info_insert || 
			YES == imm_update_flag || YES == pdrm_update_flag )
		{
			if (YES == jpn_info_insert )
				agency_on_chip[1] = '1';

			if (YES == jpj_info_insert && YES == jpj_load_on_chip)
				agency_on_chip[3] = '1';

			if (YES == imm_update_flag )
				agency_on_chip[2] = '1';

			if (YES == pdrm_update_flag )
				agency_on_chip[4] = '1';

#ifdef DEBUG
			userlog("CREATE_APPLNT : Agency on chip to be updated - %s", agency_on_chip);
#endif
		
			/* Update the Agency on chip in CARD_STATUS */

			if (SUCCESS != (ret_code = update_agency_on_chip(req->kpt_no, agency_on_chip, req->header,ctx)))
			{
#ifdef DEBUG
				userlog("CREATE_APPLNT : update_agency_on_chip() failed with %d", ret_code);
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

	if (SUCCESS != (ret_code = check_problem_record(req->header.application_id, &prob_count,ctx)))
	{
#ifdef DEBUG
		userlog("CREATE_APPLNT : check_problem_record() failed with %d", ret_code);
#endif
		free(txn_details_orig);
		//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//	memcpy(*pResp, resp, resp_length);
			*pResp = resp;
				return ret_code;
	}	

	/* Commented as it is not required to update Disputed info into APPNT_JPN_INFO */

/*	if (YES == jpn_info_insert)
	{
		if (0 < prob_count)
		{
			if (SUCCESS != (ret_code = update_disputed_info(req->header.application_id,ctx)))
			{
#ifdef DEBUG
				userlog("CREATE_APPLNT : update_disputed_info() failed with %d", ret_code);
#endif
				free(txn_details_orig);
				tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
			}
		}
	}
*/
	/* Commit the transaction	*/
	if(SUCCESS != gscbcommit_trans(ctx))
	{
		userlog("CREATE_APPLNT : Commit transaction failed!!");
		free(txn_details_orig);
		//tpreturn(TPSUCCESS, END_TRAN_ERROR, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
				return END_TRAN_ERROR;
	}

#ifdef DEBUG
		userlog("CREATE_APPLNT: Commited successfully");
#endif


	/* Find out the Queue ticket no for the application */

	strncpy(q_no, req->header.application_id + strlen(req->header.application_id) - (Q_NO_SIZE -1), Q_NO_SIZE - 1);
	q_no[Q_NO_SIZE - 1] = '\0';

#ifdef DEBUG
	userlog("CREATE_APPLNT : Q No - %s", q_no);
#endif

	queue_no = atoi(q_no);

	/* All Legacy update services are to not to be called for Phone-In application referred to SSC/GQD */

/* following 10 lines commented for IJPN on 5/12/05 as told by vasanth

	if ((0 < prob_count && queue_no >= PHONE_IN_Q_NO_START && queue_no <= PHONE_IN_Q_NO_END)
		|| (req->missed_opex_flag == YES))
	{
		jpn_update_flag = NO;
		jpj_update_flag = NO;
		imm_update_flag = NO;
		pdrm_update_flag = NO;
	}

end comment */


	if(req->missed_opex_flag == YES)
	{
		jpn_update_flag = NO;
		jpj_update_flag = NO;
		imm_update_flag = NO;
		pdrm_update_flag = NO;
	}


	/*****************AFIS UPDATE ***************/

	if(YES == afis_update_flag)
	{
		if (SUCCESS != (ret_code = call_afis_update(req,ctx)))
		{			 
			userlog("CREATE_APPLNT : call_afis_update() failed");

			return GMPC_BAD;

		} // end of if

	/* Commit the transaction for service AFIS UPDATE */

		if(SUCCESS != gscbcommit_trans(ctx))
		{
			userlog("CREATE_APPLNT : Commit transaction failed!!");
			free(txn_details_orig);
			//tpreturn(TPSUCCESS, END_TRAN_ERROR, (char *) resp, resp_length, 0);
			*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
			*pResp = resp;
			return END_TRAN_ERROR;
		}
	}

	/**************** end AFIS_UPDATE *****************/


	/* Call JPN_UPDATE if the application is not Missed Opex case */
	
	if (YES == jpn_update_flag)
	{
		/* Call the service JPN_UPDATE */

		if (SUCCESS != (ret_code = call_jpn_update(req,ctx)))
		{
			/* Begin the transaction	*/
			if(SUCCESS != gscbbegin_trans(ctx))
			{
				userlog("CREATE_APPLNT : Begin transaction failed ");
				free(txn_details_orig);
				//tpreturn(TPSUCCESS, BEGIN_TRAN_ERROR, (char *) resp, resp_length, 0);
					*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
					*pResp = resp;
				return BEGIN_TRAN_ERROR;
			}

			/* Insert the request into LEGACY_REQUEST */
			legacy_req.service_id = JPN_UPDATE_ID;
			legacy_req.check_agency = JPN_ID;

			
			if (SUCCESS != (ret_code = insert_into_legacy_request_jpn(legacy_req,appl_status,ctx)))
			{
#ifdef DEBUG
				userlog("CREATE_APPLNT : insert_into_legacy_request() failed with %d", ret_code);
#endif		
				free(txn_details_orig);
				//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
					*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
					*pResp = resp;
				return ret_code;
							

			}

			/* Commit the transaction for service JPN_UPDATE */

			if(SUCCESS != gscbcommit_trans(ctx))
			{
				userlog("CREATE_APPLNT : Commit transaction failed!!");
				free(txn_details_orig);
				//tpreturn(TPSUCCESS, END_TRAN_ERROR, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
				return END_TRAN_ERROR;
			}
		}
	}

	// The following 4 lines are included on 10/05/06 to stop firing the JPJ 
	// when the loadonchipindicator values are updated to n.

	ret_code=0;
    ret_code = change_jpj_update_flag_for_lic_info(req->header.application_id,ctx);

	if(ret_code == 0)
		jpj_update_flag = NO;


	if ( YES == jpj_update_flag)
	{
		/* Call the service JPJ_UPDATE */

		if (SUCCESS != (ret_code = call_jpj_update(req,ctx)))
		{
			/* Begin the transaction	*/
			if(SUCCESS != gscbbegin_trans(ctx))
			{
				userlog("CREATE_APPLNT : Begin transaction failed!!");
				free(txn_details_orig);
				//tpreturn(TPSUCCESS, BEGIN_TRAN_ERROR, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
				return BEGIN_TRAN_ERROR;
			}

			/* Insert the request into LEGACY_REQUEST */
			legacy_req.service_id = JPJ_UPDATE_ID;
			legacy_req.check_agency = JPJ_ID;
			
			if (SUCCESS != (ret_code = insert_into_legacy_request(legacy_req,ctx)))
			{
#ifdef DEBUG
				userlog("CREATE_APPLNT : insert_into_legacy_request() failed with %d", ret_code);
#endif		
				free(txn_details_orig);
				//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
			return ret_code;
			}

			/* Commit the transaction for service JPJ_UPDATE */

			if(SUCCESS != gscbcommit_trans(ctx))
			{
				userlog("CREATE_APPLNT : Commit transaction failed!!");
				free(txn_details_orig);
				//tpreturn(TPSUCCESS, END_TRAN_ERROR, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
				return END_TRAN_ERROR;
			}
		}
	}

	if (0 >= prob_count)
	{
		if (YES == imm_update_flag)
		{
			/* Call the service IMM_UPDATE */

			if (SUCCESS != (ret_code = call_imm_update(req,ctx)))
			{
				/* Begin the transaction	*/
				if(SUCCESS != gscbbegin_trans(ctx))
				{
					userlog("CREATE_APPLNT : Begin transaction failed!!");
					free(txn_details_orig);
					//tpreturn(TPSUCCESS, BEGIN_TRAN_ERROR, (char *) resp, resp_length, 0);
					*pRespSize = resp_length;
					//memcpy(*pResp, resp, resp_length);
					*pResp = resp;
					return BEGIN_TRAN_ERROR;
				}

				/* Insert the request into LEGACY_REQUEST */
				legacy_req.service_id = IMM_UPDATE_ID;
				legacy_req.check_agency = JIM_ID;
				
				if (SUCCESS != (ret_code = insert_into_legacy_request(legacy_req,ctx)))
				{
#ifdef DEBUG
					userlog("CREATE_APPLNT : insert_into_legacy_request() failed with %d", ret_code);
#endif		
					free(txn_details_orig);
					//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
					*pRespSize = resp_length;
					//memcpy(*pResp, resp, resp_length);
					*pResp = resp;
					return ret_code;
				}

				/* Commit the transaction for service IMM_UPDATE */

				if(SUCCESS != gscbcommit_trans(ctx))
				{
					userlog("CREATE_APPLNT : Commit transaction failed!!");
					free(txn_details_orig);
					//tpreturn(TPSUCCESS, END_TRAN_ERROR, (char *) resp, resp_length, 0);
					*pRespSize = resp_length;
					//memcpy(*pResp, resp, resp_length);
					*pResp = resp;
					return END_TRAN_ERROR;
				}
			}
		}

	}

#ifdef PDRM
	if (YES == pdrm_update_flag)
	{
		/* Call the service PDRM_SUMMON_UPD */

		if (SUCCESS != (ret_code = call_pdrm_summon_upd(req,ctx)))
		{
			/* Begin the transaction	*/
			if(SUCCESS != gscbbegin_trans(ctx))
			{
				userlog("CREATE_APPLNT : Begin transaction failed!!");
				free(txn_details_orig);
				//tpreturn(TPSUCCESS, BEGIN_TRAN_ERROR, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
			return BEGIN_TRAN_ERROR;
			}

			/* Insert the request into LEGACY_REQUEST */
			legacy_req.service_id = PDRM_UPDATE_ID;
			legacy_req.check_agency = PDRM_ID;
			
			if (SUCCESS != (ret_code = insert_into_legacy_request(legacy_req,ctx)))
			{
#ifdef DEBUG
				userlog("CREATE_APPLNT : insert_into_legacy_request() failed with %d", ret_code);
#endif		
				free(txn_details_orig);
				//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
				return ret_code;
			}

			/* Commit the transaction for service PDRM_SUMMON_UPD */

			if(SUCCESS != gscbcommit_trans(ctx))
			{
				userlog("CREATE_APPLNT : Commit transaction failed!!");
				free(txn_details_orig);
				//tpreturn(TPSUCCESS, END_TRAN_ERROR, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
			//	memcpy(*pResp, resp, resp_length);
				*pResp = resp;
				return END_TRAN_ERROR;
			}
		}

	}	
#endif //PDRM

	/*****************AFIS UPDATE ***************/

	// This code is moved before call_jpn_update function
//	if(YES == afis_update_flag)
//	{
//		if (SUCCESS != (ret_code = call_afis_update(req,ctx)))
//		{
//			 
//			userlog("CREATE_APPLNT : call_afis_update() failed");
//
//			return GMPC_BAD;
//
//		} // end of if
//	}

	/**************** end AFIS_UPDATE *****************/


	/* Call GENERATE_KPT service if the Missed Opex flag is Y 
		which in turn fires the 20 1450 message */

	if (req->missed_opex_flag == YES)
	{
		/* Call the service GENERATE_KPT */

		if (SUCCESS != (ret_code = call_generate_kpt(req,ctx)))
		{
			/* Begin the transaction	*/
			if(SUCCESS != gscbbegin_trans(ctx))
			{
				userlog("CREATE_APPLNT : Begin transaction failed ");
				//free(txn_details_orig);
				//tpreturn(TPSUCCESS, BEGIN_TRAN_ERROR, (char *) resp, resp_length, 0);
					*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
					*pResp = resp;
				return BEGIN_TRAN_ERROR;
			}

			/* Insert the request into IJPN_LEGACY_REQUEST */
			legacy_req.service_id = GENERATE_KPT_ID;
			legacy_req.check_agency = JPN_ID;
			
			if (SUCCESS != (ret_code = insert_into_legacy_request(legacy_req,ctx)))
			{
			#ifdef DEBUG
				userlog("CREATE_APPLNT : insert_into_legacy_request() failed with %d", ret_code);
			#endif		
				//free(txn_details_orig);
				//tpreturn(TPSUCCESS, ret_code, (char *) resp, resp_length, 0);
					*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
					*pResp = resp;
				return ret_code;
							

			}

			/* Commit the transaction for service GENERATE_KPT */

			if(SUCCESS != gscbcommit_trans(ctx))
			{
				userlog("CREATE_APPLNT : Commit transaction failed!!");
				//free(txn_details_orig);
				//tpreturn(TPSUCCESS, END_TRAN_ERROR, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
				return END_TRAN_ERROR;
			}
		}
	}

    }  // else part of bypassing loop for already issued applications


	/*  New code added on 21/12/2006 */

	if (SUCCESS != (ret_code = appnt_jpj_and_lic_info(req,ctx)))
	{
		userlog("CREATE_APPLNT : appnt_jpj_and_lic_info function failed with ret_code : %d",ret_code);
				//free(txn_details_orig);
				//tpreturn(TPSUCCESS, BEGIN_TRAN_ERROR, (char *) resp, resp_length, 0);
				*pRespSize = resp_length;
				//memcpy(*pResp, resp, resp_length);
				*pResp = resp;
				return ret_code;
	}

	/*  New code addition end here on 21/12/2006 */


#ifdef DEBUG
	userlog("CREATE_APPLNT: Before LogExit !!!");
#endif


	strcpy(prog_log.remarks, "CREATE_APPLNT : Completed successfully");
	log_exit(ctx);
	
#ifdef DEBUG
	userlog("CREATE_APPLNT: After LogExit !!!");
#endif

#ifdef DEBUG
	userlog("CREATE_APPLNT: Before Free txn_details !!!");
#endif


	//free(txn_details_orig);
	/* Return the response buffer	*/

#ifdef DEBUG
	userlog("CREATE_APPLNT: After Free txn_details !!!");
#endif

#ifdef DEBUG
	userlog("CREATE_APPLNT: Completed successfully");
#endif


	//tpreturn(TPSUCCESS, GMPC_GOOD, (char *) resp, resp_length, 0);
	*pRespSize = resp_length;
			//memcpy(*pResp, resp, resp_length);
	*pResp = resp;
			return GMPC_GOOD;
}

//#ifdef DEBUG

void print_request(CREATE_APPLNT_REQ_T *req)
{
	int i = 0;
	APPL_PROC_T *appl_proc;
	APPL_HISTORY_T *appl_hist;
	APPL_TXN_T *appl_txn;
	APPL_OLD_TXN_PAY_T *old_txn_pay;
	APPL_TXN_FEE_T *txn_fee;
	APPL_OUTSTAND_TXN_FEE_T *outstand_txn_fee;
	APPL_FEE_REDUCTION_T *fee_reduction;
	APPL_DOC_SRNO_T *doc_srno;
	SUP_REMARKS_T *supervisor;
	SPONSOR_DETAILS_T *sponsor_details;
	APPL_TXN_SUMMONS_T *summons;
	APPNT_JPJ_SUMMONS_T *jpj_summons;
	APPNT_PDRM_SUMMONS_T *pdrm_summons;
	APPNT_LIC_REVOKE_T *lic_revok;
	APPNT_LIC_SUSP_T *lic_susp;
	APPNT_PP_INFO_T *pp_info;
	APPNT_JPN_INFO_T *applnt;
	APPNT_JPN_IMG_T *applnt_img;

	/* Add for IJPN*/	
	JPN_SB_INFO_T *jpn_sb_info;
	JPN_INFO_T *jpn_info;
	APPL_MISSED_OPEX_T *appl_missed_opex;
	/*End IJPN*/

	int appl_missed_opex_cnt = 0;
	int jpn_info_cnt = 0;
	int jpn_sb_info_cnt = 0;
	

	
	userlog("print_request : Branch code - %s", req->header.branch_code);
	userlog("print_request : WS id - %s", req->header.workstation_id);
	userlog("print_request : User id - %s", req->header.user_id);
	userlog("print_request : Appl id - %s", req->header.application_id);
	userlog("print_request : Current proc ser no - %d", req->curr_proc_sr_no);
	userlog("print_request : KPT - %s", req->kpt_no);
	userlog("print_request : License id - %s", req->license_id);
	userlog("print_request : Owner category - %c", req->owner_cat);
	userlog("print_request : Appl status - %c", req->appl_status);
	userlog("print_request : Appl nature - %d", req->appl_nature);
	userlog("print_request : Appl stage - %s", req->appl_stage);
	userlog("print_request : Appl remarks - %s", req->appl_remarks);
	userlog("print_request : Collection centre - %s", req->collection_centre);
	userlog("print_request : Collector's KPT - %s", req->collector_kpt);
	userlog("print_request : Collection date - %s", req->collection_date);
	userlog("print_request : Temp id - %s", req->temp_id);
	userlog("print_request : Lost receipt flag - %c", req->lost_receipt_flag);
	userlog("print_request : QC flag - %c", req->qc_flag);
	userlog("print_request : Missed opex flag - %c", req->missed_opex_flag);
	userlog("print_request : Summons ind - %c", req->summons_ind);
	userlog("print_request : SSC code - %s", req->ssc_code);
	userlog("print_request : Summons payment ind - %c", req->summons_pay_ind);
	userlog("print_request : Photo capture flag - %c", req->photo_capture_flag);
	userlog("print_request : Create user id - %s", req->create_user_id);
	userlog("print_request : Create Ws id - %s", req->create_ws_id);
	userlog("print_request : Create timestamp - %s", req->create_timestamp);
	userlog("print_request : PRB status - %c", req->prb_status);
	userlog("print_request : IMM expiry date - %s", req->imm_expiry_date);
	userlog("print_request : Load DL flag - %c", req->load_dl_flag);
	userlog("print_request : PDL renew type - %c", req->pdl_renew_type);
	userlog("print_request : Appl process count - %d", req->appl_proc_cnt);
	userlog("print_request : Appl history count - %d", req->appl_history_cnt);
	userlog("print_request : Txn count - %d", req->new_txn_cnt);
	userlog("print_request : Old txn pay count - %d", req->old_pay_cnt);
	userlog("print_request : Txn fee count - %d", req->txn_fee_cnt);
	userlog("print_request : Supervisor remarks count - %d", req->super_remarks_cnt);
	userlog("print_request : Sponsor details count - %d", req->sponsor_details_cnt);
	userlog("print_request : Summons count - %d", req->summons_cnt);
	userlog("print_request : JPJ Summons count - %d", req->unsettled_jpj_summons_cnt);
	userlog("print_request : PDRM Summons count - %d", req->unsettled_pdrm_summons_cnt);
	userlog("print_request : Suspension records count - %d", req->susp_info_cnt);
	userlog("print_request : Revocation records count - %d", req->revoke_info_cnt);
	userlog("print_request : Passport records count - %d", req->passport_cnt);
	userlog("print_request : JPN demo count - %d", req->jpn_demo_cnt);
	userlog("print_request : JPN image count - %d", req->jpn_img_cnt);
	userlog("print_request : Outstanding fee count - %d", req->outstand_txn_fee_cnt);
	userlog("print_request : Fee reduction count - %d", req->appl_fee_reduce_cnt);
	userlog("print_request : Appl doc drno count - %d", req->appl_doc_srno_cnt);
	userlog("print_request : Appl Missedopex Indicator - %c", req->appl_missed_opex_ind);
	userlog("print_request : Jpn Info Indicator - %c", req->jpn_info_ind);
	userlog("print_request : Jpn Sb Info Indicator - %c", req->jpn_sb_info_ind);


	appl_proc = (APPL_PROC_T *)(req + 1);

	userlog("print_request : APPL_PROC info");

	for ( i = 0; i < req->appl_proc_cnt; i++, appl_proc++)
	{
		userlog("print_request : Process ser no - %d", appl_proc->proc_sr_no);
		userlog("print_request : Process ind - %s", appl_proc->proc_ind);
		userlog("print_request : Id type  - %s", appl_proc->id_type);
		userlog("print_request : Id no - %s", appl_proc->id_no);
		userlog("print_request : User id - %s", appl_proc->user_id);
		userlog("print_request : WS id - %s", appl_proc->ws_id);
		userlog("print_request : Timestamp - %s", appl_proc->timestamp);
	}

	appl_hist = (APPL_HISTORY_T *)appl_proc;
	
	userlog("print_request : APPL_HISTORY info");

	for ( i = 0; i < req->appl_history_cnt; i++, appl_hist++)
	{
		userlog("print_request : Process ser no - %d", appl_hist->proc_sr_no);
		userlog("print_request : Appl date - %s", appl_hist->appl_date);
		userlog("print_request : Appl status  - %c", appl_hist->appl_stat);
		userlog("print_request : Branch code - %s", appl_hist->branch_code);
		userlog("print_request : User id - %s", appl_hist->user_id);
		userlog("print_request : WS id - %s", appl_hist->ws_id);
		userlog("print_request : Timestamp - %s", appl_hist->timestamp);
	}	

	appl_txn = (APPL_TXN_T *)appl_hist;
	
	userlog("print_request : APPL_TXN info");

	for ( i = 0; i < req->new_txn_cnt; i++, appl_txn++)
	{
		userlog("print_request : Txn ser no - %d", appl_txn->txn_sr_no);
		userlog("print_request : Txn code - %s", appl_txn->txn_code);
		userlog("print_request : Txn cancel code - %s", appl_txn->txn_cancel_code);
		userlog("print_request : Lic type - %s", appl_txn->lic_type);
		userlog("print_request : Lic class - %s", appl_txn->lic_class);
		userlog("print_request : Lic usage - %s", appl_txn->lic_usage);
		userlog("print_request : Lic validity - %d", appl_txn->lic_validity);
		userlog("print_request : Payment ser no - %d", appl_txn->pay_sr_no);
		userlog("print_request : QC flag - %c", appl_txn->qc_flag);
		userlog("print_request : Txn date - %s", appl_txn->txn_date);
	}		

	old_txn_pay = (APPL_OLD_TXN_PAY_T*)appl_txn;

	userlog("print_request : APPL_OLD_TXN_PAY_T info");

	for ( i = 0; i < req->old_pay_cnt; i++, old_txn_pay++)
	{
		userlog("print_request : Txn ser no - %d", old_txn_pay->txn_sr_no);
		userlog("print_request : Pay ser no - %d", old_txn_pay->pay_sr_no);
		userlog("print_request : txncancelcode - %s", old_txn_pay->txn_cancel_code);
	}

	txn_fee = (APPL_TXN_FEE_T *)old_txn_pay  ;

	userlog("print_request : APPL_TXN_FEE info");

	for ( i = 0; i < req->txn_fee_cnt; i++, txn_fee++)
	{
		userlog("print_request : Txn ser no - %d", txn_fee->txn_sr_no);
		userlog("print_request : Fee type - %s", txn_fee->fee_type);
		userlog("print_request : Fee amount - %f", txn_fee->fee_amt);
		userlog("print_request : Agency rev code - %ld", txn_fee->agency_rev_code);
	}

	outstand_txn_fee = (APPL_OUTSTAND_TXN_FEE_T *)txn_fee;

	userlog("print_request : OUTSTAND_TXN_FEE info");

	for ( i = 0; i < req->outstand_txn_fee_cnt; i++, outstand_txn_fee++)
	{
		userlog("print_request : Txn srno - %d", outstand_txn_fee->txn_sr_no);
		userlog("print_request : Fee type - %s", outstand_txn_fee->fee_type);
		userlog("print_request : Fee amount - %f", outstand_txn_fee->fee_amt);
		userlog("print_request : Agency revenue code - %ld", outstand_txn_fee->agency_rev_code);
	
	}
	
	fee_reduction = (APPL_FEE_REDUCTION_T *)outstand_txn_fee;

	userlog("print_request : FEE_REDUCTION info");

	for ( i = 0; i < req->appl_fee_reduce_cnt; i++, fee_reduction++)
	{
		userlog("print_request : Txn srno - %d", fee_reduction->txn_sr_no);
		userlog("print_request : Fee type - %s", fee_reduction->fee_type);
		userlog("print_request : Original Fee amount - %f", fee_reduction->orig_fee_amt);
		userlog("print_request : Fee amount - %f", fee_reduction->fee_amt);
		userlog("print_request : Agency revenue code - %ld", fee_reduction->agency_rev_code);
		userlog("print_request : Reduction type - %c", fee_reduction->reduction_type);
	
	}
	
	doc_srno = (APPL_DOC_SRNO_T *)fee_reduction;

	userlog("print_request : APPL_DOC_SRNO info");

	for ( i = 0; i < req->appl_doc_srno_cnt; i++, doc_srno++)
	{
		userlog("print_request : Doc type - %s", doc_srno->doc_type);
		userlog("print_request : Doc srno - %s", doc_srno->doc_srno);
		userlog("print_request : GSCB upd flag - %c", doc_srno->gscb_upd_flag);
		userlog("print_request : User id - %s", doc_srno->user_id);
		userlog("print_request : Branch code - %s", doc_srno->branch_code);
		userlog("print_request : Timestamp - %s", doc_srno->timestamp);
		
	}

	supervisor = (SUP_REMARKS_T *)doc_srno;

	userlog("print_request : SUPERVISOR info");

	for ( i = 0; i < req->super_remarks_cnt; i++, supervisor++)
	{
		userlog("print_request : Txn ser no - %d", supervisor->txn_sr_no);
		userlog("print_request : Problem reason code - %s", supervisor->prob_reason_code);
		userlog("print_request : Problem sr no - %d", supervisor->prob_sr_no);
		userlog("print_request : Form name - %s", supervisor->form_name);
		userlog("print_request : Remarks - %s", supervisor->remarks);
		userlog("print_request : User id - %s", supervisor->user_id);
		userlog("print_request : WS id - %s", supervisor->ws_id);
		userlog("print_request : Timestamp - %s", supervisor->timestamp);
		
	}

	sponsor_details = (SPONSOR_DETAILS_T *)supervisor;

	userlog("print_request : SPONSOR_DETAILS info");

	for ( i = 0; i < req->sponsor_details_cnt; i++, sponsor_details++)
	{
		userlog("print_request : Birth date - %s", sponsor_details->birth_date);
		userlog("print_request : Id no - %s", sponsor_details->id_number);
		userlog("print_request : Id type - %s", sponsor_details->id_type);
		userlog("print_request : Issue country - %s", sponsor_details->issue_country);
		userlog("print_request : Name1 - %s", sponsor_details->name1);
		userlog("print_request : Name2 - %s", sponsor_details->name2);
		userlog("print_request : Name3 - %s", sponsor_details->name3);
		userlog("print_request : Nationality - %c", sponsor_details->nationality);
		
	}

	summons = (APPL_TXN_SUMMONS_T *)sponsor_details;

	userlog("print_request : APPL_TXN_SUMMONS info");

	for ( i = 0; i < req->summons_cnt; i++, summons++)
	{
		userlog("print_request : Txn ser no - %d", summons->txn_sr_no);
		userlog("print_request : Agency - %c", summons->agency);
		userlog("print_request : Sumons no - %s", summons->summons_number);
		userlog("print_request : Summons date - %s", summons->summons_date);
		userlog("print_request : Summons amount - %f", summons->summons_amt);
		userlog("print_request : Agency rev code - %ld", summons->agency_rev_code);
		userlog("print_request : Issue branch code - %s", summons->issue_branch_code);
		userlog("print_request : Summons issue code - %s", summons->summons_issue_code);
		userlog("print_request : Summons type - %c", summons->summons_type);
		userlog("print_request : Summons district - %s", summons->summ_district);
		userlog("print_request : Summons device - %s", summons->device);
	}

	
		jpj_summons = (APPNT_JPJ_SUMMONS_T *)summons ;

	userlog("print_request : APPNT_JPJ_SUMMONS info");

	for ( i = 0; i < req->unsettled_jpj_summons_cnt; i++, jpj_summons++)
	{
		userlog("print_request : Summons No - %s", jpj_summons->summons_number);
		userlog("print_request : Issuing branch code - %s", jpj_summons->issuing_branch_code);
		userlog("print_request : Issue date - %s", jpj_summons->issued_date);
		userlog("print_request : Summons type- %c", jpj_summons->summons_type);
		userlog("print_request : Summons issue code - %s", jpj_summons->summons_issue_code);
		userlog("print_request : Offence category1 - %s", jpj_summons->offence_category1);
		userlog("print_request : Offence code1 - %s", jpj_summons->offence_code1);
		userlog("print_request : Offence status1 - %s", jpj_summons->offence_status1);
		userlog("print_request : Offence amount1 - %ld", jpj_summons->offence_amount1);
		userlog("print_request : Offence category2 - %s", jpj_summons->offence_category2);
		userlog("print_request : Offence code2 - %s", jpj_summons->offence_code2);
		userlog("print_request : Offence status2 - %s", jpj_summons->offence_status2);
		userlog("print_request : Offence amount2 - %ld", jpj_summons->offence_amount2);
		userlog("print_request : Offence category3 - %s", jpj_summons->offence_category3);
		userlog("print_request : Offence code3 - %s", jpj_summons->offence_code3);
		userlog("print_request : Offence status3 - %s", jpj_summons->offence_status3);
		userlog("print_request : Offence amount3 - %ld", jpj_summons->offence_amount3);
		userlog("print_request : Offence category4 - %s", jpj_summons->offence_category4);
		userlog("print_request : Offence code4 - %s", jpj_summons->offence_code4);
		userlog("print_request : Offence status4 - %s", jpj_summons->offence_status4);
		userlog("print_request : Offence amount4 - %ld", jpj_summons->offence_amount4);
		userlog("print_request : Unpaid fines - %d", jpj_summons->total_number_of_unpaid_fines);
		userlog("print_request : Total offence amt - %ld", jpj_summons->total_offence_amt);
		userlog("print_request : Last payable date - %s", jpj_summons->last_payable_date);
		userlog("print_request : Court code - %s", jpj_summons->court_code);
		userlog("print_request : Trial date - %s", jpj_summons->trial_date);
		userlog("print_request : Location code - %s", jpj_summons->location_code);
		userlog("print_request : Officer id - %s", jpj_summons->officer_id);
		userlog("print_request : Officer name - %s", jpj_summons->officer_name);
		userlog("print_request : E1 vehicle type - %s", jpj_summons->e1_vehicle_type);
		userlog("print_request : E1 vehicle reg no - %s", jpj_summons->e1_vehicle_regn_no);
		userlog("print_request : Trailer no - %s", jpj_summons->trailer_number);
		userlog("print_request : Path from - %s", jpj_summons->path_from);
		userlog("print_request : Path to - %s", jpj_summons->path_to);
		userlog("print_request : Summons legacy flag - %c", jpj_summons->summons_leg_flag);
	}

	pdrm_summons = (APPNT_PDRM_SUMMONS_T *)jpj_summons ;

	userlog("print_request : APPNT_PDRM_SUMMONS info");

	for ( i = 0; i < req->unsettled_pdrm_summons_cnt; i++, pdrm_summons++)
	{
		userlog("print_request : Summons district - %s", pdrm_summons->summ_district);
		userlog("print_request : Device - %s", pdrm_summons->device);
		userlog("print_request : Summons no - %s", pdrm_summons->summons_number);
		userlog("print_request : Vehicle no - %s", pdrm_summons->vehicle_number);
		userlog("print_request : Compound1 - %d", pdrm_summons->compound1);
		userlog("print_request : Compound2 - %d", pdrm_summons->compound2);
		userlog("print_request : Compound3 - %d", pdrm_summons->compound3);
		userlog("print_request : Total Compound - %ld", pdrm_summons->total_compound);
		userlog("print_request : Offender name - %s", pdrm_summons->offender_name);
		userlog("print_request : Offence1 - %s", pdrm_summons->offence1);
		userlog("print_request : Offence2 - %s", pdrm_summons->offence2);
		userlog("print_request : Offence3 - %s", pdrm_summons->offence3);
		userlog("print_request : Vehicle type - %s", pdrm_summons->vehicle_type);
		userlog("print_request : Offence place - %s", pdrm_summons->offence_place);
		userlog("print_request : Summons date - %s", pdrm_summons->summons_date);
		userlog("print_request : Offence date - %s", pdrm_summons->offence_date);
		userlog("print_request : Compound date - %s", pdrm_summons->compound_date);
		userlog("print_request : Court date - %s", pdrm_summons->court_date);
		userlog("print_request : Summons type - %c", pdrm_summons->summ_type);
		userlog("print_request : CAD Id - %s", pdrm_summons->cad_id);
		userlog("print_request : Summons legacy flag - %c", pdrm_summons->summons_leg_flag);
		
	}

	lic_susp = (APPNT_LIC_SUSP_T *)pdrm_summons;

	userlog("print_request : SUSPENSION info");

	for ( i = 0; i < req->susp_info_cnt; i++, lic_susp++)
	{
		userlog("print_request : Lic type - %s", lic_susp->lic_type);
		userlog("print_request : Lic class - %s", lic_susp->lic_class);
		userlog("print_request : Lic usage - %s", lic_susp->lic_class_usage);
		userlog("print_request : Suspension start dt - %s", lic_susp->susp_start_date);
		userlog("print_request : Suspension code - %s", lic_susp->susp_code);
		userlog("print_request : Suspension end dt - %s", lic_susp->susp_end_date);
		userlog("print_request : Load on chip flag - %c", lic_susp->load_on_chip_ind);
	}

	lic_revok = (APPNT_LIC_REVOKE_T *)lic_susp;

	userlog("print_request : REVOCATION info");

	for ( i = 0; i < req->revoke_info_cnt; i++, lic_revok++)
	{
		userlog("print_request : Lic type - %s", lic_revok->lic_type);
		userlog("print_request : Revocation start dt - %s", lic_revok->revok_start_date);
		userlog("print_request : Revocation code - %s", lic_revok->revok_code);
		userlog("print_request : Revocation end dt - %s", lic_revok->revok_end_date);
		userlog("print_request : Load on chip flag - %c",  lic_revok->load_on_chip_ind);
	}

	pp_info = (APPNT_PP_INFO_T *)lic_revok;

	userlog("print_request : PASSPORT info");

	for ( i = 0; i < req->passport_cnt; i++, pp_info++)
	{
		userlog("print_request : Passport doc type - %d", pp_info->passport_doc_type);
		userlog("print_request : Load on chip flag - %c", pp_info->load_on_chip_flag);
		
	}

	applnt = (APPNT_JPN_INFO_T *)pp_info;

	userlog("print_request : JPN_DEMO info");

	for ( i = 0; i < req->jpn_demo_cnt; i++, applnt++)
	{
		userlog("print_request : Address1 - %s", applnt->address.address1);
		userlog("print_request : Address2 - %s", applnt->address.address2);
		userlog("print_request : Address3 - %s", applnt->address.address3);
		userlog("print_request : City code - %d", applnt->address.city_code);
		userlog("print_request : Post code - %s", applnt->address.post_code);
		userlog("print_request : State code - %s", applnt->address.state_code);
		userlog("print_request : Current long name - %s", applnt->name.current_long_name);
		userlog("print_request : Gmpc short name1 - %s", applnt->name.gmpc_short_name1);
		userlog("print_request : Gmpc short name2 - %s", applnt->name.gmpc_short_name2);
		userlog("print_request : Gmpc short name3 - %s", applnt->name.gmpc_short_name3);
		userlog("print_request : Original name - %s", applnt->name.original_name);
		userlog("print_request : Siren short name1 - %s", applnt->name.siren_short_name1);
		userlog("print_request : Siren short name2 - %s", applnt->name.siren_short_name2);
		userlog("print_request : HK ind - %c", applnt->hk_ind);
		userlog("print_request : HSC color code - %c", applnt->hsc_color_code);
		userlog("print_request : Approval date - %s", applnt->approval_date);
		userlog("print_request : Card expiry date - %s", applnt->green_card_expiry_date);

	}


		appl_missed_opex = (APPL_MISSED_OPEX_T *)applnt;		

		userlog("print_request : ** APPL_MISSED_OPEX info **");

		if(req->appl_missed_opex_ind == 'Y')
			appl_missed_opex_cnt = 1;

		for ( i = 0; i < appl_missed_opex_cnt; i++, appl_missed_opex++)
		{	
	    userlog("print_request : idtype - %s", appl_missed_opex->idtype);
		userlog("print_request : idnumber - %s", appl_missed_opex->idnumber);
		userlog("print_request : origname - %s", appl_missed_opex->origname);
		userlog("print_request : currlongname - %s", appl_missed_opex->currlongname);
		userlog("print_request : currshortname1 - %s", appl_missed_opex->currshortname1);
		userlog("print_request : currshortname2 - %s", appl_missed_opex->currshortname2);
		userlog("print_request : gmpcshortname1 - %s", appl_missed_opex->gmpcshortname1);
		userlog("print_request : gmpcshortname2 - %s", appl_missed_opex->gmpcshortname2);
		userlog("print_request : address1 - %s", appl_missed_opex->address1);
		userlog("print_request : address2 - %s", appl_missed_opex->address2);		
		userlog("print_request : address3 - %s", appl_missed_opex->address3);
		userlog("print_request : postcode - %s", appl_missed_opex->postcode);
		userlog("print_request : citycode - %d", appl_missed_opex->citycode);
		userlog("print_request : statecode - %s", appl_missed_opex->statecode);
		userlog("print_request : birthdate - %s", appl_missed_opex->birthdate);
		userlog("print_request : unknownbirthind - %c", appl_missed_opex->unknownbirthind);
		userlog("print_request : birthdistrictcode - %d", appl_missed_opex->birthdistrictcode);
		userlog("print_request : relegioncode - %c", appl_missed_opex->relegioncode);		
		userlog("print_request : racecode - %s", appl_missed_opex->racecode);
		userlog("print_request : gender - %c", appl_missed_opex->gender);
		userlog("print_request : hkind - %c", appl_missed_opex->hkind);
		userlog("print_request : iccolorcode - %c", appl_missed_opex->iccolorcode);
		userlog("print_request : ktindcode - %s", appl_missed_opex->ktindcode);
		userlog("print_request : residentstat - %c", appl_missed_opex->residentstat);
		userlog("print_request : cardlostcnt - %d", appl_missed_opex->cardlostcnt);
		userlog("print_request : lostcardissuedate - %s", appl_missed_opex->lostcardissuedate);		
		userlog("print_request : colourarticlecode - %s", appl_missed_opex->colourarticlecode);
		userlog("print_request : fatheridtype - %s", appl_missed_opex->fatheridtype);
		userlog("print_request : fatheridno - %s", appl_missed_opex->fatheridno);  
		userlog("print_request : motheridtype - %s", appl_missed_opex->motheridtype);
		userlog("print_request : motheridno - %s", appl_missed_opex->motheridno);
		userlog("print_request : permitno - %s", appl_missed_opex->permitno);
		userlog("print_request : permitissuedate - %s", appl_missed_opex->permitissuedate);
		userlog("print_request : immrefno - %s", appl_missed_opex->immrefno);		
		userlog("print_request : immrefdate - %s", appl_missed_opex->immrefdate);
		userlog("print_request : immexpirydate - %s", appl_missed_opex->immexpirydate);
		userlog("print_request : passportno - %s", appl_missed_opex->passportno);		
		userlog("print_request : passportissuedate - %s", appl_missed_opex->passportissuedate);
		userlog("print_request : passportisuuecountry - %s", appl_missed_opex->passportisuuecountry);
		userlog("print_request : policeretiredate - %s", appl_missed_opex->policeretiredate);
		userlog("print_request : orignameind - %c", appl_missed_opex->orignameind);
		userlog("print_request : kptno - %s", appl_missed_opex->kptno);		
		userlog("print_request : militaryid - %s", appl_missed_opex->militaryid);
		userlog("print_request : policeid - %s", appl_missed_opex->policeid);
		userlog("print_request : kppno - %s", appl_missed_opex->kppno);
		userlog("print_request : polmilitarycode - %c", appl_missed_opex->polmilitarycode);
		userlog("print_request : polmilitaryjoindate - %s", appl_missed_opex->polmilitaryjoindate);
		userlog("print_request : gmpcshortname3 - %s", appl_missed_opex->gmpcshortname3);
		userlog("print_request : citizenshipacqdate - %s", appl_missed_opex->citizenshipacqdate);
		userlog("print_request : relationcode - %s", appl_missed_opex->relationcode);
		userlog("print_request : sponsoridtype - %s", appl_missed_opex->sponsoridtype);
		userlog("print_request : sponsoridno - %s", appl_missed_opex->sponsoridno);
		userlog("print_request : sponsorcurrlongname - %s", appl_missed_opex->sponsorcurrlongname);
		userlog("print_request : birthstatecode - %s", appl_missed_opex->birthstatecode);		
		userlog("print_request : birthplacecode - %s", appl_missed_opex->birthplacecode);
		userlog("print_request : citizennationcode - %s", appl_missed_opex->citizennationcode);
		userlog("print_request : ktstartdate - %s", appl_missed_opex->ktstartdate);
		userlog("print_request : ktenddate - %s", appl_missed_opex->ktenddate);
		userlog("print_request : ptissuedate - %s", appl_missed_opex->ptissuedate);
		userlog("print_request : ptwno - %s", appl_missed_opex->ptwno);
		userlog("print_request : birthregndate - %s", appl_missed_opex->birthregndate);
		}


		jpn_info = (JPN_INFO_T *)appl_missed_opex;		
		
		userlog("print_request : **JPN_INFO info **");

		if(req->jpn_info_ind == 'Y')
			jpn_info_cnt = 1;

		for ( i = 0; i < jpn_info_cnt; i++, jpn_info++)
		{
		userlog("print_request : kptno - %s", jpn_info->kptno);
		userlog("print_request : birthdistrictcode  - %d", jpn_info->birthdistrictcode );
		userlog("print_request : policeid - %s", jpn_info->policeid);
		userlog("print_request : militaryid - %s",jpn_info-> militaryid);
		userlog("print_request : kppno - %s", jpn_info->kppno);
	  	userlog("print_request : gender - %c", jpn_info->gender);
		userlog("print_request : personstatcode - %c",jpn_info->personstatcode);
		userlog("print_request : birthdate - %s", jpn_info->birthdate);
		userlog("print_request : unknownbirthind - %c", jpn_info->unknownbirthind);
		userlog("print_request : religioncode - %c", jpn_info->religioncode);
		userlog("print_request : racecode - %s", jpn_info->racecode);
		userlog("print_request : residentstat - %c", jpn_info->residentstat);
		userlog("print_request : citizenshipstatcode - %c", jpn_info->citizenshipstatcode);
		userlog("print_request : colourarticlecode - %s", jpn_info->colourarticlecode);
		userlog("print_request : hkind - %c", jpn_info->hkind);
		userlog("print_request : iccolorcode - %c", jpn_info->iccolorcode);
		userlog("print_request : origname - %s", jpn_info->origname);
		userlog("print_request : currlongname - %s", jpn_info->currlongname);
		userlog("print_request : currshortname1 - %s", jpn_info->currshortname1);
		userlog("print_request : currshortname2 - %s", jpn_info->currshortname2);
		userlog("print_request : gmpcshortname1 - %s", jpn_info->gmpcshortname1);
		userlog("print_request : gmpcshortname2 - %s", jpn_info->gmpcshortname2);
		userlog("print_request : gmpcshortname3 - %s", jpn_info->gmpcshortname3);
		userlog("print_request : address1 - %s", jpn_info->address1);
		userlog("print_request : address2 - %s", jpn_info->address2);
		userlog("print_request : address3 - %s", jpn_info->address3);
		userlog("print_request : postcode - %s", jpn_info->postcode);
		userlog("print_request : citycode - %d", jpn_info->citycode);
		userlog("print_request : statecode - %s", jpn_info->statecode);
		userlog("print_request : ktindcode - %s", jpn_info->ktindcode);
		userlog("print_request : jpnremarks1 - %s", jpn_info->jpnremarks1);
		userlog("print_request : jpnremarks2 - %s", jpn_info->jpnremarks2);
		userlog("print_request : afisflag - %c", jpn_info->afisflag);
		userlog("print_request : cardlostcnt - %d", jpn_info->cardlostcnt);
		userlog("print_request : kptapplstat - %c",jpn_info->kptapplstat);
		userlog("print_request : kptappldate - %s", jpn_info->kptappldate);
		userlog("print_request : kptcollectionplaccode - %s", jpn_info->kptcollectionplaccode);
		userlog("print_request : lastaddresschangedate - %s", jpn_info->lastaddresschangedate);
		userlog("print_request : lastcardissuedate - %s", jpn_info->lastcardissuedate);
		userlog("print_request : cardversionno - %d", jpn_info->cardversionno);
		userlog("print_request : juvenileflag - %c", jpn_info->juvenileflag);		
		userlog("print_request : birthplace - %s", jpn_info->birthplace);
		userlog("print_request : rjind - %s", jpn_info->rjind);
		userlog("print_request : birthcertno - %s", jpn_info->birthcertno);
		userlog("print_request : kptversionno - %d", jpn_info->kptversionno);
		userlog("print_request : polmilitaryjoindate - %s", jpn_info->polmilitaryjoindate);
		userlog("print_request : retirementdate - %s", jpn_info->retirementdate);
		userlog("print_request : orignameind - %c", jpn_info->orignameind);
		userlog("print_request : surrenderdate - %s", jpn_info->surrenderdate);
		userlog("print_request : citizennationcode - %s", jpn_info->citizennationcode);
		userlog("print_request : applapprovaldate - %s", jpn_info->applapprovaldate);		
		userlog("print_request : greencardexpdate - %s", jpn_info->greencardexpdate);
		userlog("print_request : immrefno - %s", jpn_info->immrefno);
		userlog("print_request : immrefdate - %s", jpn_info->immrefdate);
		userlog("print_request : immexpirydate - %s", jpn_info->immexpirydate);
		userlog("print_request : passportno - %s", jpn_info->passportno);
		userlog("print_request : passportissuedate - %s", jpn_info->passportissuedate);		
		userlog("print_request : passportisuuecountry - %s", jpn_info->passportisuuecountry);
		userlog("print_request : ucflag - %c", jpn_info->ucflag);
		userlog("print_request : permitno - %s", jpn_info->permitno);
		userlog("print_request : permitissuedate - %s", jpn_info->permitissuedate);
		userlog("print_request : permittype - %d", jpn_info->permittype);
		userlog("print_request : prdoctype - %d", jpn_info->prdoctype);
		userlog("print_request : rjstartdate - %s", jpn_info->rjstartdate);
		userlog("print_request : rjenddate - %s", jpn_info->rjenddate);
		userlog("print_request : ktstartdate - %s", jpn_info->ktstartdate);
		userlog("print_request : ktenddate - %s", jpn_info->ktenddate);
		userlog("print_request : blklstind - %c", jpn_info->blklstind);
		userlog("print_request : blklstcode - %s", jpn_info->blklstcode);
		userlog("print_request : birthregndate - %s", jpn_info->birthregndate);
		}


		jpn_sb_info = (JPN_SB_INFO_T *)jpn_info;		
		
		userlog("print_request : **JPN_SB_INFO info **");

		if(req->jpn_sb_info_ind == 'Y')
			jpn_sb_info_cnt = 1;

		for ( i = 0; i < jpn_sb_info_cnt; i++, jpn_sb_info++)
		{
		userlog("print_request : address1 - %s",jpn_sb_info->address1);
		userlog("print_request : address2 - %s",jpn_sb_info->address2);
		userlog("print_request : address3 - %s", jpn_sb_info->address3);
	    userlog("print_request : birthdate - %s", jpn_sb_info->birthdate);
		userlog("print_request : birthplace - %s", jpn_sb_info->birthplace);
		userlog("print_request : citycode - %d", jpn_sb_info->citycode);
		userlog("print_request : currlongname - %s", jpn_sb_info->currlongname);	
		userlog("print_request : gender - %c", jpn_sb_info->gender);
		userlog("print_request : gmpcshortname1 - %s",jpn_sb_info->gmpcshortname1);
	    userlog("print_request : gmpcshortname2 - %s",jpn_sb_info->gmpcshortname2);
		userlog("print_request : gmpcshortname3 - %s",jpn_sb_info->gmpcshortname3);
		userlog("print_request : hkind - %c",jpn_sb_info->hkind);	
		userlog("print_request : iccolorcode - %c", jpn_sb_info->iccolorcode);
		userlog("print_request : kptno - %s", jpn_sb_info->kptno);
		userlog("print_request : militaryid - %s", jpn_sb_info->militaryid);
		userlog("print_request : origname - %s", jpn_sb_info->origname);
		userlog("print_request : policeid - %s", jpn_sb_info->policeid);
	    userlog("print_request : postcode - %s", jpn_sb_info->postcode);
		userlog("print_request : racecode - %s", jpn_sb_info->racecode);
		userlog("print_request : religioncode - %c", jpn_sb_info->religioncode);
		userlog("print_request : rjind - %s",jpn_sb_info->rjind);
		userlog("print_request : statecode - %s", jpn_sb_info->statecode);
		userlog("print_request : idtype - %s", jpn_sb_info->idtype);
		userlog("print_request : idno - %s", jpn_sb_info->idno);
		userlog("print_request : sbcardexpdate - %s", jpn_sb_info->sbcardexpdate);	
		}


		/*applnt_img = (APPNT_JPN_IMG_T *)applnt; */

		applnt_img = (APPNT_JPN_IMG_T *)jpn_sb_info; 

	userlog("print_request : JPN_IMG info");

	for ( i = 0; i < req->jpn_img_cnt; i++, applnt_img++)
	{
		userlog("print_request : Quality stat - %d", applnt_img->quality_stat);
		userlog("print_request : Update print ind - %c", applnt_img->upd_print_ind);
		userlog("print_request : Applnt remarks	- %s", applnt_img->remarks);
		userlog("print_request : Sponsor remarks - %s", applnt_img->sponsor_remarks);

		userlog("print_request : APPLICANT LF DATA");
		userlog("print_request : Bandage ind - %d", applnt_img->lf.bandage_ind);
		userlog("print_request : Finger ind - %s", applnt_img->lf.finger_ind);
		userlog("print_request : Finger pattern - %d", applnt_img->lf.finger_pattern);
		userlog("print_request : FP image size - %ld", applnt_img->lf.fp_img_size);
		userlog("print_request : Matrix buff size - %ld", applnt_img->lf.matrix_buffer_size);
		userlog("print_request : Norm minutiae size - %ld", applnt_img->lf.normalized_minutiae_size);
		userlog("print_request : Original minutiae size - %ld", applnt_img->lf.original_minutiae_size);
		userlog("print_request : Qualtiy score - %ld", applnt_img->lf.quality_score);
		userlog("print_request : Thumb status - %c", applnt_img->lf.thumb_status);

		userlog("print_request : APPLICANT RF DATA");
		userlog("print_request : Bandage ind - %d", applnt_img->rf.bandage_ind);
		userlog("print_request : Finger ind - %s", applnt_img->rf.finger_ind);
		userlog("print_request : Finger pattern - %d", applnt_img->rf.finger_pattern);
		userlog("print_request : FP image size - %ld", applnt_img->rf.fp_img_size);
		userlog("print_request : Matrix buff size - %ld", applnt_img->rf.matrix_buffer_size);
		userlog("print_request : Norm minutiae size - %ld", applnt_img->rf.normalized_minutiae_size);
		userlog("print_request : Original minutiae size - %ld", applnt_img->rf.original_minutiae_size);
		userlog("print_request : Qualtiy score - %ld", applnt_img->rf.quality_score);
		userlog("print_request : Thumb status - %c", applnt_img->rf.thumb_status);

		userlog("print_request : SPONSOR LF DATA");
		userlog("print_request : Bandage ind - %d", applnt_img->sponsor_lf.bandage_ind);
		userlog("print_request : Finger ind - %s", applnt_img->sponsor_lf.finger_ind);
		userlog("print_request : Finger pattern - %c", applnt_img->sponsor_lf.finger_pattern);
		userlog("print_request : FP image size - %ld", applnt_img->sponsor_lf.fp_img_size);
		userlog("print_request : Matrix buff size - %ld", applnt_img->sponsor_lf.matrix_buffer_size);
		userlog("print_request : Norm minutiae size - %ld", applnt_img->sponsor_lf.normalized_minutiae_size);
		userlog("print_request : Original minutiae size - %ld", applnt_img->sponsor_lf.original_minutiae_size);
		userlog("print_request : Qualtiy score - %ld", applnt_img->sponsor_lf.quality_score);
		userlog("print_request : Thumb status - %c", applnt_img->sponsor_lf.thumb_status);
		
		userlog("print_request : SPONSOR RF DATA");
		userlog("print_request : Bandage ind - %d", applnt_img->sponsor_rf.bandage_ind);
		userlog("print_request : Finger ind - %s", applnt_img->sponsor_rf.finger_ind);
		userlog("print_request : Finger pattern - %c", applnt_img->sponsor_rf.finger_pattern);
		userlog("print_request : FP image size - %ld", applnt_img->sponsor_rf.fp_img_size);
		userlog("print_request : Matrix buff size - %ld", applnt_img->sponsor_rf.matrix_buffer_size);
		userlog("print_request : Norm minutiae size - %ld", applnt_img->sponsor_rf.normalized_minutiae_size);
		userlog("print_request : Original minutiae size - %ld", applnt_img->sponsor_rf.original_minutiae_size);
		userlog("print_request : Qualtiy score - %ld", applnt_img->sponsor_rf.quality_score);
		userlog("print_request : Thumb status - %c", applnt_img->sponsor_rf.thumb_status);

		userlog("print_request : APPLICANT PHOTO DATA");
		userlog("print_request : High res photo size - %ld", applnt_img->photo.hr_photo_size);
		userlog("print_request : Low res photo size - %ld", applnt_img->photo.lr_photo_size);
		

	}
	
	userlog("print_request : All the request buffer printed");

}

// added this on 21/12/2006
int appnt_jpj_and_lic_info(CREATE_APPLNT_REQ_T *req,void * ctx)
{
		struct sqlca sqlca = {0};
	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char applid[APP_ID_SIZE] = {0};
	char lapplid[APP_ID_SIZE] = {0};

	char kptno[KPT_SIZE] = {0};
	char aochip[9] = {0};
	char laochip[9] = {0};

	int  lcount=0;
	int i=0;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 

	
	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN

	#ifdef DEBUG
		userlog("appnt_jpj_and_lic_info : req->header.application_id : %s",req->header.application_id);
		userlog("appnt_jpj_and_lic_info : req->kpt_no : %s",req->kpt_no);
    #endif

	strcpy(applid, req->header.application_id);
	strcpy(kptno, req->kpt_no);

	#ifdef DEBUG
		userlog("appnt_jpj_and_lic_info : applid : %s",applid);
		userlog("appnt_jpj_and_lic_info : kptno : %s",kptno);
    #endif


	/* EXEC SQL SELECT COUNT(*) INTO :lcount FROM APPNT_JPJ_INFO
		WHERE APPLID = :applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 74;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from APPNT_JPJ_INFO where APPLID=\
:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4356;
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
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
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
		userlog("appnt_jpj_and_lic_info : lcount : %d",lcount);
    #endif

	if(lcount == 0)
	{
		
		for(i=0;i<APP_ID_SIZE;i++)
			lapplid[i] = '\0';

		/* EXEC SQL SELECT MAX(APPLID) INTO :lapplid FROM APPNT_JPJ_INFO
			WHERE KPTNO = :kptno; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 74;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select max(APPLID) into :b0  from APPNT_JPJ_INFO where KPTN\
O=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )4379;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)256;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)lapplid;
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



		#ifdef DEBUG
			userlog("appnt_jpj_and_lic_info : lapplid : %s",lapplid);
		#endif

		if((lapplid[0] != '\0') && (lapplid[0] != ' '))
		{
			/* EXEC SQL INSERT INTO APPNT_JPJ_INFO(APPLID,
				KPTNO, LICIDTYPE, LICIDNO, OWNERCAT, SUSPGENNO, KEJARAPOINTS, 
				LASTKEJARAPOINTUPDDATE, PRINTMDL, BLFLAG, VEHREGNO)
				   SELECT :applid, KPTNO, LICIDTYPE, LICIDNO, OWNERCAT, SUSPGENNO, 
						KEJARAPOINTS, LASTKEJARAPOINTUPDDATE, PRINTMDL, BLFLAG, VEHREGNO
						FROM APPNT_JPJ_INFO 
						WHERE APPLID = :lapplid; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 74;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPNT_JPJ_INFO (APPLID,KPTNO,LICIDTYPE,LICIDNO\
,OWNERCAT,SUSPGENNO,KEJARAPOINTS,LASTKEJARAPOINTUPDDATE,PRINTMDL,BLFLAG,VEHREG\
NO)select :b0 ,KPTNO ,LICIDTYPE ,LICIDNO ,OWNERCAT ,SUSPGENNO ,KEJARAPOINTS ,L\
ASTKEJARAPOINTUPDDATE ,PRINTMDL ,BLFLAG ,VEHREGNO  from APPNT_JPJ_INFO where A\
PPLID=:b1";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )4402;
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
   sqlstm.sqhstv[1] = (         void  *)lapplid;
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



			if(sqlca.sqlcode == 0)
			{
			#ifdef DEBUG
				userlog("appnt_jpj_and_lic_info : Record inserted into APPNT_JPJ_INFO ");
			#endif
			}
			else
			{
				#ifdef DEBUG
					userlog("appnt_jpj_and_lic_info : Record not inserted into APPNT_JPJ_INFO");
				#endif
			}

			/* EXEC SQL INSERT INTO APPNT_LIC_INFO(APPLID, LICTYPE, LICCLASS, LICUSAGECODE, 
				LICVALIDSTARTDATE, LICVALIDENDDATE, BLFLAG, HANDICVEHREGNO, LOADONCHIPIND, 
				VERIFIEDSTATUS, PHYRESTRICTCODE, RECORDSERNO)
					SELECT :applid,LICTYPE, LICCLASS, LICUSAGECODE, LICVALIDSTARTDATE, 
							LICVALIDENDDATE, BLFLAG, HANDICVEHREGNO, LOADONCHIPIND, 
							VERIFIEDSTATUS, PHYRESTRICTCODE, RECORDSERNO
							FROM APPNT_LIC_INFO
							WHERE APPLID = :lapplid; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 74;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into APPNT_LIC_INFO (APPLID,LICTYPE,LICCLASS,LICUSA\
GECODE,LICVALIDSTARTDATE,LICVALIDENDDATE,BLFLAG,HANDICVEHREGNO,LOADONCHIPIND,V\
ERIFIEDSTATUS,PHYRESTRICTCODE,RECORDSERNO)select :b0 ,LICTYPE ,LICCLASS ,LICUS\
AGECODE ,LICVALIDSTARTDATE ,LICVALIDENDDATE ,BLFLAG ,HANDICVEHREGNO ,LOADONCHI\
PIND ,VERIFIEDSTATUS ,PHYRESTRICTCODE ,RECORDSERNO  from APPNT_LIC_INFO where \
APPLID=:b1";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )4425;
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
   sqlstm.sqhstv[1] = (         void  *)lapplid;
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



			if(sqlca.sqlcode == 0)
			{
			#ifdef DEBUG
				userlog("appnt_jpj_and_lic_info : Record inserted into APPNT_LIC_INFO");
			#endif
			}
			else
			{
				#ifdef DEBUG
					userlog("appnt_jpj_and_lic_info : Record not inserted into APPNT_LIC_INFO");
				#endif
			}

			aochip[0] = '\0';
			/* EXEC SQL SELECT AGENCYONCHIP INTO :aochip FROM CARD_STATUS 
				WHERE APPLID = :applid; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 74;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select AGENCYONCHIP into :b0  from CARD_STATUS where APPLI\
D=:b1";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )4448;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)aochip;
   sqlstm.sqhstl[0] = (unsigned int  )9;
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



			#ifdef DEBUG
					userlog("appnt_jpj_and_lic_info : AGENCYONCHIP : %s",aochip);
			#endif

			laochip[0] = aochip[0];
			laochip[1] = aochip[1];
			laochip[2] = aochip[2];
			laochip[3] = '1';
			laochip[4] = aochip[4];
			laochip[5] = aochip[5];
			laochip[6] = aochip[6];
			laochip[7] = aochip[7];

			laochip[8] = '\0';
			#ifdef DEBUG
					userlog("appnt_jpj_and_lic_info : AGENCYONCHIP after mupdating 4th bit: %s",laochip);
			#endif

			/* EXEC SQL UPDATE CARD_STATUS 
				SET AGENCYONCHIP = :laochip
				WHERE APPLID = :applid; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 74;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update CARD_STATUS  set AGENCYONCHIP=:b0 where APPLID=:b1";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )4471;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)256;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)laochip;
   sqlstm.sqhstl[0] = (unsigned int  )9;
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



		}

		if(SUCCESS != gscbcommit_trans(ctx))
			{
			 userlog("CREATE_APPLNT : Commit transaction failed in appnt_jpj_and_lic_info!!");						
			}

	}
	else
	{
		#ifdef DEBUG
			userlog("appnt_jpj_and_lic_info : record found in APPNT_JPJ_INFO for this applid : %s",applid);
		#endif
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
int call_jpj_update(CREATE_APPLNT_REQ_T *req,void * ctx)
{
	struct sqlca sqlca = {0};
	/*int ret;
	JPJ_UPDATE_REQ_T *pstSendBuf;
	
	long ReqLen = 0;
	long RespLen = 0;
	long ret_code = 0;
	int callFlag = 0;
	ReqLen = sizeof(JPN_UPDATE_REQ_T);
	
	SAFEARRAY *psa;
	SAFEARRAY *psaRsp;
	char flag = UNKNOWN;
	unsigned char *pData = NULL;
	//long lSize;
	//int ret;
	  
	
	
	#ifdef DEBUG
			userlog("call_jpj_update: In call_jpj_update(HEADER header,char flag)");
	#endif

	if((pstSendBuf = (JPJ_UPDATE_REQ_T *)malloc(ReqLen)) == NULL)
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
			strcpy(pstSendBuf->header.user_id, req->header.user_id);
			strcpy(pstSendBuf->header.workstation_id,req->header.workstation_id);
			strcpy(pstSendBuf->header.branch_code, req->header.branch_code);
			strcpy(pstSendBuf->header.application_id, req->header.application_id);
			pstSendBuf->invoke_mode = SERVICE_CALL;
			
		#ifdef DEBUG
			userlog("call_jpj_update : REQUEST DATA FOR JPJ_UPDATE :");
			userlog("call_jpj_update : User Id - %s", pstSendBuf->header.user_id );
			userlog("call_jpj_update : Workstation Id - %s", pstSendBuf->header.workstation_id );
			userlog("call_jpj_update : Gsc No - %s", pstSendBuf->header.branch_code );
			userlog("call_jpj_update : Application Id - %s", pstSendBuf->header.application_id);
			userlog("call_jpj_update : Invoke mode - %c", pstSendBuf->invoke_mode);
		#endif 
			try
			{
						
				IJpjUpdateServicePtr pI("JpjUpdate.JpjUpdateService.1");
			
				// create a safe array to store the stream data
				psa = SafeArrayCreateVector( VT_UI1, 0, sizeof(JPJ_UPDATE_REQ_T));
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
							memcpy( pData, pstSendBuf, sizeof(JPN_UPDATE_REQ_T));		
							SafeArrayUnaccessData(psa);
							if(FAILED(ret = pI->Execute(psa, &psaRsp)))
							{
								#ifdef DEBUG
									userlog("Error while executing JpjUpdateService. Call to Method Execute() Failed. %d", ret);
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
					userlog("Error while executing JpjUpdateService. Call to Method Execute() Failed. %s", e.ErrorMessage());
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
	*/	return GMPC_GOOD;

}


/*********************************************************************/
/* Function Name:call_jpn_update									 */
/* Description	:This function calls the service JPN_UPDATE			 */
/* Input		:Header,Applicant ID,update flag and resp buffer	 */   
/* Return Values:TPACALL_ERROR / GMPC_GOOD	                         */
/*				 which have only header								 */
/* Limitations	:													 */
/*********************************************************************/
int call_jpn_update(CREATE_APPLNT_REQ_T *req,void * ctx)
{
	struct sqlca sqlca = {0};

	int ret;
	JPN_UPDATE_REQ_T *pstSendBuf;
	
	long ReqLen = 0;
	long RespLen = 0;
	long ret_code = 0;
	int callFlag = 0;
	ReqLen = sizeof(JPN_UPDATE_REQ_T);
	
	SAFEARRAY *psa;
	SAFEARRAY *psaRsp;
	char flag = UNKNOWN;
	unsigned char *pData = NULL;
	
	

	if((pstSendBuf = (JPN_UPDATE_REQ_T *)malloc(ReqLen)) == NULL)
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
		strcpy(pstSendBuf->header.user_id, req->header.user_id);
		strcpy(pstSendBuf->header.workstation_id, req->header.workstation_id);
		strcpy(pstSendBuf->header.branch_code, req->header.branch_code);
		strcpy(pstSendBuf->header.application_id,req->header.application_id);
		pstSendBuf->invoke_mode = SERVICE_CALL;
		

	#ifdef DEBUG
		userlog("call_jpn_update : REQUEST DATA FOR JPN_UPDATE :");
		userlog("call_jpn_update : User Id - %s", pstSendBuf->header.user_id );
		userlog("call_jpn_update : Workstation Id - %s", pstSendBuf->header.workstation_id );
		userlog("call_jpn_update : Gsc No - %s", pstSendBuf->header.branch_code );
		userlog("call_jpn_update : Application Id - %s", pstSendBuf->header.application_id);
		userlog("call_jpn_update : Invoke mode - %c", pstSendBuf->invoke_mode);
	#endif 
	try
	{
				
		IJpnUpdateServicePtr pI("JpnUpdate.JpnUpdateService.1");
	
		// create a safe array to store the stream data
		psa = SafeArrayCreateVector( VT_UI1, 0, sizeof(JPN_UPDATE_REQ_T));
		if(!psa)
		{
			#ifdef DEBUG
				userlog("call_jpn_update: Calling insert_into_legacy_request");
			#endif
			callFlag = 1;
	    }
		else
		{
			if(FAILED(	SafeArrayAccessData( psa, (void**)&pData )))
			{
				#ifdef DEBUG
					userlog("REQ SafeArrayAccessData() Failed.");
				#endif
				callFlag = 1;
			}
			else
			{	
				// copy the memory into the safearray
				memcpy( pData, pstSendBuf, sizeof(JPN_UPDATE_REQ_T));		
				SafeArrayUnaccessData(psa);
				if(FAILED(ret = pI->Execute(psa, &psaRsp)))
				{
					#ifdef DEBUG
						userlog("Error while executing JpnUpdateService. Call to Method Execute() Failed. %d", ret);
					#endif
					callFlag =1;
				//	free((char*)pstSendBuf);
				
				}
			//	free((char*)pstSendBuf);
			  }
          }
	}
	
	// Handle any COM exceptions from smart pointers
	catch (_com_error e)
	{
		  #ifdef DEBUG
				userlog("Error while executing JpnUpdateService. Call to Method Execute() Failed. %s", e.ErrorMessage());
		 #endif
		  callFlag = 1;	
		 // free((char*)pstSendBuf);
	
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
		sprintf(excep_log.error_msg,"call_jpn_update : Failed");
		excep_log.termination_flag = NO;
		excep_log.severity = NON_FATAL;
		log_error(ctx);		
						
			return GMPC_BAD;
		
     }
	
	return GMPC_GOOD;
}


/*********************************************************************/
/* Function Name:call_afis_update									 */
/* Description	:This function calls the service AFIS_UPDATE		 */
/* Input		:Header,Applicant ID,update flag and resp buffer	 */   
/* Return Values:TPACALL_ERROR / GMPC_GOOD	                         */
/*				 which have only header								 */
/* Limitations	:													 */
/*********************************************************************/
int call_afis_update(CREATE_APPLNT_REQ_T *req,void * ctx)
{
	struct sqlca sqlca = {0};

	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char applid[APP_ID_SIZE];
	int acount=0;

	sql_context pcCtx; // Modification for IJPN
	/* EXEC SQL END DECLARE SECTION; */ 


	int i = 0;

	pcCtx = ctx; // Modification for IJPN
	/* EXEC SQL CONTEXT USE :pcCtx; */ 
// Modification for IJPN


	strcpy(applid, req->header.application_id);

	userlog("req->header.application_id , applid : %s, %s",req->header.application_id,applid);

	acount=0;
	/* EXEC SQL SELECT COUNT(*) INTO :acount 
		FROM IJPN_AFIS_REQ
		WHERE APPLID = :applid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 74;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select count(*)  into :b0  from IJPN_AFIS_REQ where APPLID=:\
b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4494;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&acount;
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



	if((SQLCODE != 0) && (SQLCODE != 1403))
	{
		userlog("Selecting count from IJPN_AFIS_REQ failed : %s",SQLMSG);

		strcpy(prog_log.remarks,"Selecting count from  IJPN_AFIS_REQ failed");
		sprintf(excep_log.error_msg,"Selecting count from  IJPN_AFIS_REQ failed : %s", SQLMSG);
		excep_log.termination_flag = YES;
		excep_log.severity = FATAL;
		log_error(ctx);

		return INSERT_ERROR;

	}

	userlog(" Count from IJPN_AFIS_REQ : %d",acount);

	if(acount == 0)
	{

	// Updating the IJPN_AFIS_REQ table 

	/* EXEC SQL INSERT INTO IJPN_AFIS_REQ(APPLID,REQDATETIME,REQFLAG,
		REQSTAT,SERVICEID,TIMESTAMP)
		VALUES(:applid,TO_DATE(TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS'),
		'D',-1,76,TO_DATE(TO_CHAR(SYSDATE,'DDMMYYYY HH24MISS'),'DDMMYYYY HH24MISS')); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 74;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into IJPN_AFIS_REQ (APPLID,REQDATETIME,REQFLAG,REQSTA\
T,SERVICEID, timestamp ) values (:b0,TO_DATE(TO_CHAR(SYSDATE,'DDMMYYYY HH24MIS\
S'),'DDMMYYYY HH24MISS'),'D',(-1),76,TO_DATE(TO_CHAR(SYSDATE,'DDMMYYYY HH24MIS\
S'),'DDMMYYYY HH24MISS'))";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )4517;
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


	
	userlog("Inserting into IJPN_AFIS_REQ : SQLCODE : %d",SQLCODE);

		if(SQLCODE != 0)
		{
			userlog("Inserting into IJPN_AFIS_REQ failed : %s",SQLMSG);

			strcpy(prog_log.remarks,"Inserting into IJPN_AFIS_REQ failed");
			sprintf(excep_log.error_msg,"Inserting into IJPN_AFIS_REQ failed : %s", SQLMSG);
			excep_log.termination_flag = YES;
			excep_log.severity = FATAL;
			log_error(ctx);

			return INSERT_ERROR;

		}

	}
	else
		userlog(" IJPN_AFIS_REQ has got a record already so not inserting");

	
	return SUCCESS;
}




/*********************************************************************/
/* Function Name:call_imm_update									 */
/* Description	:This function calls the service JPN_UPDATE			 */
/* Input		:Header,Applicant ID,update flag and resp buffer	 */   
/* Return Values: TPACALL_ERROR /  GMPC_GOOD	 */
/*				 which have only header								 */
/* Limitations	:													 */
/*********************************************************************/
int call_imm_update(CREATE_APPLNT_REQ_T *req,void * ctx)
{
   
	struct sqlca sqlca = {0};
    int ret;
	IMM_UPDATE_REQ_T *pstSendBuf;
	
	long ReqLen = 0;
	long RespLen = 0;
	long ret_code = 0;
	int callFlag = 0;
	ReqLen = sizeof(IMM_UPDATE_REQ_T);
	
	SAFEARRAY *psa;
	SAFEARRAY *psaRsp;
	char flag = UNKNOWN;
	unsigned char *pData = NULL;
	
	  
	
	
	#ifdef DEBUG
			userlog("call_imm_update: In call_imm_update(HEADER header,char flag)");
	#endif

	if((pstSendBuf = (IMM_UPDATE_REQ_T *)malloc(ReqLen)) == NULL)
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
			strcpy(pstSendBuf->header.user_id, req->header.user_id);
			strcpy(pstSendBuf->header.workstation_id, req->header.workstation_id);
			strcpy(pstSendBuf->header.branch_code, req->header.branch_code);
			strcpy(pstSendBuf->header.application_id, req->header.application_id);
			pstSendBuf->no_of_passports = 0;
			//pstSendBuf->invoke_mode = SERVICE_CALL;
			
		#ifdef DEBUG
			userlog("call_imm_update : REQUEST DATA FOR JPJ_UPDATE :");
			userlog("call_imm_update : User Id - %s", pstSendBuf->header.user_id );
			userlog("call_imm_update : Workstation Id - %s", pstSendBuf->header.workstation_id );
			userlog("call_imm_update : Gsc No - %s", pstSendBuf->header.branch_code );
			userlog("call_imm_update : Application Id - %s", pstSendBuf->header.application_id);
			userlog("call_imm_update : no_of_passports - %d", pstSendBuf->no_of_passports);
		#endif 
			try
			{
						
				IImmUpdateServicePtr pI("ImmUpdate.ImmUpdateService.1");
			
				// create a safe array to store the stream data
				psa = SafeArrayCreateVector( VT_UI1, 0, sizeof(IMM_UPDATE_REQ_T));
					if(!psa)
					{
						#ifdef DEBUG
							userlog("SafeArrayCreateVector() Failed.");
							userlog("call_imm_update: Calling insert_into_legacy_request");
						#endif
						callFlag = 1;
					}
					else
					{
						if(FAILED(	SafeArrayAccessData( psa, (void**)&pData )))
						{
							#ifdef DEBUG
								userlog("REQ SafeArrayAccessData() Failed.");
								userlog("call_imm_update: Calling insert_into_legacy_request");
							#endif
							callFlag = 1;
						}
						else
						{	
							// copy the memory into the safearray
							memcpy( pData, pstSendBuf, sizeof(IMM_UPDATE_REQ_T));		
							SafeArrayUnaccessData(psa);
							if(FAILED(ret = pI->Execute(psa, &psaRsp)))
							{
								#ifdef DEBUG
									userlog("Error while executing ImmUpdateService. Call to Method Execute() Failed. %d", ret);
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
					userlog("Error while executing ImmUpdateService. Call to Method Execute() Failed. %s", e.ErrorMessage());
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
		
	    sprintf(excep_log.error_msg,"call_imm_update : Failed");
		excep_log.termination_flag = NO;
		excep_log.severity = NON_FATAL;
		log_error(ctx);		
						
			return GMPC_BAD;
		
     }
	
	
	return GMPC_GOOD;

}


/*********************************************************************/
/* Function Name:call_pdrm_update									 */
/* Description	:This function calls the service JPN_UPDATE			 */
/* Input		:Header,Applicant ID,update flag and resp buffer	 */   
/* Return Values:TPACALL_ERROR / GMPC_GOOD	 */
/*				 which have only header								 */
/* Limitations	:													 */
/*********************************************************************/
int call_pdrm_update(CREATE_APPLNT_REQ_T *req,void * ctx)
{

	struct sqlca sqlca = {0};

	int ret;
	PDRM_UPDATE_REQ_T *pstSendBuf;
	
	long ReqLen = 0;
	long RespLen = 0;
	long ret_code = 0;
	int callFlag = 0;
	ReqLen = sizeof(PDRM_UPDATE_REQ_T);
	
	SAFEARRAY *psa;
	SAFEARRAY *psaRsp;
	char flag = UNKNOWN;
	unsigned char *pData = NULL;
	
	
	#ifdef DEBUG
			userlog("call_pdrm_update: In call_pdrm_update()");
	#endif

	if((pstSendBuf = (PDRM_UPDATE_REQ_T *)malloc(ReqLen)) == NULL)
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
			strcpy(pstSendBuf->header.user_id, req->header.user_id);
			strcpy(pstSendBuf->header.workstation_id, req->header.workstation_id);
			strcpy(pstSendBuf->header.branch_code, req->header.branch_code);
			strcpy(pstSendBuf->header.application_id, req->header.application_id);
						
		#ifdef DEBUG
			userlog("call_pdrm_update : REQUEST DATA FOR JPJ_UPDATE :");
			userlog("call_pdrm_update : User Id - %s", pstSendBuf->header.user_id );

			userlog("call_pdrm_update : Workstation Id - %s", pstSendBuf->header.workstation_id );
			userlog("call_pdrm_update : Gsc No - %s", pstSendBuf->header.branch_code );
			userlog("call_pdrm_update : Application Id - %s", pstSendBuf->header.application_id);


		#endif 
			try
			{
						
				IPDRMUpdateServicePtr pI("PDRMUpdate.PDRMUpdateService.1");
			
				// create a safe array to store the stream data
				psa = SafeArrayCreateVector( VT_UI1, 0, sizeof(PDRM_UPDATE_REQ_T));
					if(!psa)
					{
						#ifdef DEBUG
							userlog("SafeArrayCreateVector() Failed.");
							userlog("call_pdrm_update: Calling insert_into_legacy_request");
						#endif
						callFlag = 1;
					}
					else
					{
						if(FAILED(	SafeArrayAccessData( psa, (void**)&pData )))
						{
							#ifdef DEBUG
								userlog("REQ SafeArrayAccessData() Failed.");
								userlog("call_pdrm_update: Calling insert_into_legacy_request");
							#endif
							callFlag = 1;
						}
						else
						{	
							// copy the memory into the safearray
							memcpy(pData, pstSendBuf, sizeof(PDRM_UPDATE_REQ_T));		
							SafeArrayUnaccessData(psa);
							if(FAILED(ret = pI->Execute(psa, &psaRsp)))
							{
								#ifdef DEBUG
									userlog("Error while executing PdrmUpdateService. Call to Method Execute() Failed. %d", ret);
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
					userlog("Error while executing PdrmUpdateService. Call to Method Execute() Failed. %s", e.ErrorMessage());
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
		
	    sprintf(excep_log.error_msg,"call_pdrm_update : Failed");
		excep_log.termination_flag = NO;
		excep_log.severity = NON_FATAL;
		log_error(ctx);

				
			return GMPC_BAD;
	
     }
		
	return GMPC_GOOD;

}

/*********************************************************************/
/* Function Name:call_generate_kpt									 */
/* Description	:This function calls the service GENERATE_KPT			 */
/* Input		:Header,Applicant ID,update flag and resp buffer	 */   
/* Return Values:TPACALL_ERROR / GMPC_GOOD	                         */
/*				 which have only header								 */
/* Limitations	:													 */
/*********************************************************************/
int call_generate_kpt(CREATE_APPLNT_REQ_T *req,void * ctx)
{
	struct sqlca sqlca = {0};

	int ret;
	GENERATE_KPT_REQ_T *pstSendBuf;
	
	long ReqLen = 0;
	long RespLen = 0;
	long ret_code = 0;
	int callFlag = 0;
	ReqLen = sizeof(GENERATE_KPT_REQ_T);
	
	SAFEARRAY *psa;
	SAFEARRAY *psaRsp;
	char flag = UNKNOWN;
	unsigned char *pData = NULL;
		

	if((pstSendBuf = (GENERATE_KPT_REQ_T *)malloc(ReqLen)) == NULL)
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
		strcpy(pstSendBuf->header.user_id, req->header.user_id);
		strcpy(pstSendBuf->header.workstation_id, req->header.workstation_id);
		strcpy(pstSendBuf->header.branch_code, req->header.branch_code);
		strcpy(pstSendBuf->header.application_id,req->header.application_id);
		//pstSendBuf->invoke_mode = SERVICE_CALL;
		pstSendBuf->upd_flag = 'G';
		

	#ifdef DEBUG
		userlog("call_generate_kpt : REQUEST DATA FOR GENERATE_KPT :");
		userlog("call_generate_kpt : User Id - %s", pstSendBuf->header.user_id );
		userlog("call_generate_kpt : Workstation Id - %s", pstSendBuf->header.workstation_id );
		userlog("call_generate_kpt : Gsc No - %s", pstSendBuf->header.branch_code );
		userlog("call_generate_kpt : Application Id - %s", pstSendBuf->header.application_id);
		userlog("call_generate_kpt : upd_flag - %c", pstSendBuf->upd_flag);
	#endif 
	try
	{
				
		IGenerateKptServicePtr pI("GenerateKpt.GenerateKptService.1");
	
		// create a safe array to store the stream data
		psa = SafeArrayCreateVector( VT_UI1, 0, sizeof(GENERATE_KPT_REQ_T));
		if(!psa)
		{
			#ifdef DEBUG
				userlog("call_generate_kpt: Calling insert_into_legacy_request");
			#endif
			callFlag = 1;
	    }
		else
		{
			if(FAILED(	SafeArrayAccessData( psa, (void**)&pData )))
			{
				#ifdef DEBUG
					userlog("REQ SafeArrayAccessData() Failed.");
				#endif
				callFlag = 1;
			}
			else
			{	
				// copy the memory into the safearray
				memcpy( pData, pstSendBuf, sizeof(GENERATE_KPT_REQ_T));		
				SafeArrayUnaccessData(psa);
				if(FAILED(ret = pI->Execute(psa, &psaRsp)))
				{
					#ifdef DEBUG
						userlog("Error while executing GenerateKptService. Call to Method Execute() Failed. %d", ret);
					#endif
					callFlag =1;
				//	free((char*)pstSendBuf);
				
				}
			//	free((char*)pstSendBuf);
			  }
          }
	}
	
	// Handle any COM exceptions from smart pointers
	catch (_com_error e)
	{
		  #ifdef DEBUG
				userlog("Error while executing GenerateKptService. Call to Method Execute() Failed. %s", e.ErrorMessage());
		 #endif
		  callFlag = 1;	
		 // free((char*)pstSendBuf);
	
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
		sprintf(excep_log.error_msg,"call_generate_kpt : Failed");
		excep_log.termination_flag = NO;
		excep_log.severity = NON_FATAL;
		log_error(ctx);		
						
		return GMPC_BAD;
		
     }
	
	return GMPC_GOOD;
}



