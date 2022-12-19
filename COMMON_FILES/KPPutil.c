
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
           char  filnam[13];
};
static const struct sqlcxp sqlfpn =
{
    12,
    ".\\kpputil.pc"
};


static unsigned int sqlctx = 267851;


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
            void  *sqhstv[1];
   unsigned int   sqhstl[1];
            int   sqhsts[1];
            void  *sqindv[1];
            int   sqinds[1];
   unsigned int   sqharm[1];
   unsigned int   *sqharc[1];
   unsigned short  sqadto[1];
   unsigned short  sqtdso[1];
} sqlstm = {12,1};

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
5,0,0,1,71,0,4,356,0,0,1,0,0,1,0,2,97,0,0,
};


/* $Header$ */
/********************************************************************/
/* File Name	:kpputil.c										    */
/* Author		:Vageesh Patwardhan, Sangeeta Natu					*/
/* Description	:Contains utiltiy functions for KPP*Gate Interface	*/
/********************************************************************/

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <userlog.h>
#include "gscbdef.h"
#include "gscbio.h"
#include "gscblookupdef.h"

#define LOG_DEFINED
#include "gscblog.h"
#undef LOG_DEFINED

#include "gscblookupdef.h"

#include "KPPdef.h"
#include "KPPstruct.h"
#include "KPPproto.h"
#include "field_id.h"


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


/* Handle etc to the dll must be global since load_lib intailizes them
   and everyone else uses the function pointers initialized by it*/
HINSTANCE mqi_api_lib;

/* These are global function pointers initalized by load_lib and used 
   everywhere else.  Any one wanting to use these should declare them as 
   extern pointers */

//LI_INIT_DLL_FN_TYP li_init_dll;
//LI_END_DLL_FN_TYP li_end_dll;
//LI_PUT_DLL_FN_TYP li_put_dll;
//LI_GET_DLL_FN_TYP li_get_dll;

/************************************************************************/
/* Function Name	: load_lib										    */
/* Description		: Function to load the mqiapidll2.dll into memory and*/
/*					  initalize the function pointers					*/
/* Input			: none												*/
/* Return Values	: int return code GMPC_GOOD = success				*/
/*									  GMPC_BAD = failure				*/
/* Limitations		: none												*/	
/************************************************************************/
/*
int load_lib(void)
{
	

	/* load the dll into memory 
	mqi_api_lib = LoadLibrary("mqiapidll2.dll");

	if(NULL == mqi_api_lib)
	{
		/* The dll could not be loaded so there's no way we can call ANY
		   MQSeries functions.  So abort 
		strcpy(prog_log.remarks,"load_lib : LoadLibrary function failed");
		strcpy(excep_log.error_msg, "load_lib : LoadLibrary for mqiapidll2.dll failed");
		excep_log.severity = FATAL;
		log_error();

		return GMPC_BAD;
	}

	/* Get pointer to li_init_dll function 
	li_init_dll = (LI_INIT_DLL_FN_TYP) GetProcAddress(mqi_api_lib, "_li_init_dll@284");


	if(NULL == li_init_dll)
	{
		/* The function could not be located.  So abort 
		strcpy(prog_log.remarks,"load_lib : GetProcAddress function failed");
		strcpy(excep_log.error_msg, "load_lib : GetProcAddress for li_init_dll function failed");
		excep_log.severity = FATAL;
		log_error();

		return GMPC_BAD;
	}


	/* Get pointer to li_end_dll function 

	li_end_dll = (LI_END_DLL_FN_TYP) GetProcAddress(mqi_api_lib, "_li_end_dll@0");


	if(NULL == li_end_dll)
	{
		/* The function could not be located.  So abort 
		
		strcpy(prog_log.remarks,"load_lib : GetProcAddress function failed");
		strcpy(excep_log.error_msg, "load_lib : GetProcAddress for li_end_dll function failed");
		excep_log.severity = FATAL;
		log_error();

		return GMPC_BAD;
	}

	/* Get pointer to li_put_dll function 

	li_put_dll = (LI_PUT_DLL_FN_TYP) GetProcAddress(mqi_api_lib, "_li_put_dll@104");


	if(NULL == li_put_dll)
	{
		/* The function could not be located.  So abort 
		
		strcpy(prog_log.remarks,"load_lib : GetProcAddress function failed");
		strcpy(excep_log.error_msg, "load_lib : GetProcAddress for li_put_dll function failed");
		excep_log.severity = FATAL;
		log_error();

		return GMPC_BAD;
	}

	/* Get pointer to li_get_dll function 

	li_get_dll = (LI_GET_DLL_FN_TYP) GetProcAddress(mqi_api_lib, "_li_get_dll@16");


	if(NULL == li_get_dll)
	{
		/* The function could not be located.  So abort 
		
		strcpy(prog_log.remarks,"load_lib : GetProcAddress function failed");
		strcpy(excep_log.error_msg, "load_lib : GetProcAddress for li_get_dll function failed");
		excep_log.severity = FATAL;
		log_error();

		return GMPC_BAD;
	}

	/* All ok so return GMCP_GOOD 
	return GMPC_GOOD;
}
*/

/************************************************************************/
/* Function Name	: unload_lib									    */
/* Description		: Function to unload the mqiapidll2.dll from memory	*/
/* Input			: none												*/
/* Return Values	: int return code GMPC_GOOD = success				*/
/* Limitations		: none												*/
/************************************************************************/
/*
int unload_lib(void)
{

	FreeLibrary(mqi_api_lib);

	return GMPC_GOOD;
}
*/

/************************************************************************/
/* Function Name	: check_put_header								    */
/* Description		: Function to check the LI_P_HEADER structure		*/
/* Input			: LI_P_HEADER_T header: header to be checked		*/
/* Return Values	: int return code GMPC_GOOD = success				*/
/*					  GMPC_BAD = incorrect header						*/
/* Limitations		: none												*/
/************************************************************************/

int check_put_header(LI_P_HEADER_T header)
{
	if(0 == (strlen(header.user_id) ) || (0 == strlen(header.workstation_id))) 
	{
		strcpy(prog_log.remarks,"check_put_header : invalid user/workstation ID");
		strcpy(excep_log.error_msg, "check_put_header : invalid user/workstation ID");
		excep_log.severity = FATAL;
		log_error();

		return GMPC_BAD;
	}

	return GMPC_GOOD;
}


/************************************************************************/
/* Function Name	: get_one_field									    */
/* Description		: Returns one field from the std message buffer		*/
/* Input			: reply_buff - begining of the variable portion of  */
/*					  message.  Should be NULL for all calls other than */
/*					  the first call to this function					*/
/* Output			: field - pointer to the data field					*/
/* Return Values	: int field id of the field in field parm			*/
/* Limitations		: none												*/
/************************************************************************/

int get_one_field(char *reply_buff, char **field, long *len, int *img_ind)
{
	static char *next_field;
	char *temp_ptr;
	int field_id;

	/* The reply_buff field should have an acutal value only if this is the
	   first time the function is being called*/
	if(NULL != reply_buff)
	{
		next_field = reply_buff;
	}
	

	temp_ptr = next_field;

	/* End of message is inidicated by 0xff 0xff  The check really works.  Believe me!!*/
	if ((0xffffffff == *temp_ptr) && (0xffffffff == *(temp_ptr + 1)))
	{
		/* Set field to the end of the message */
		*field = (temp_ptr - 1);
		return 0;
	}
	
	if (0xfffffffc == *temp_ptr)
	{
		/* Alphanumeric field found */

		/* Skip the field indicator */
		temp_ptr++;

		/* We have now hit the data field so set field to it*/
		*field = temp_ptr;

		/*skip the current field to its indicator*/
		temp_ptr += strlen(temp_ptr) + 1;
		
		field_id = atoi(temp_ptr);
		
		/* set next_field to the next field by skipping the field indicator*/
		next_field = temp_ptr + strlen(temp_ptr) + 1;

		*len = strlen(*field);
		*img_ind = 0;
	}
	else if ((0xfffffffd == *temp_ptr) || (0xfffffffe == *temp_ptr))
	{
		/* Portrait/Image or fingerprint */
		/* Skip the field indicator */
		temp_ptr++;

		/* Get the length of image buffer */
		*len = atoi(temp_ptr);

		/* skip the length field to the image indicator */
		temp_ptr +=  strlen(temp_ptr) + 1;

		*img_ind = *temp_ptr;

		/*skip the image indicator,  to the acutal image buffer */

		temp_ptr ++;


		/* We now have temp_ptr at the beginning of the image buffer 
		   so set field to it */

		*field = temp_ptr;

		/* skip the entire image buffer to reach the field id for the image */

		temp_ptr += *len;

		field_id = atol(temp_ptr);

		/* skip the field id to reach the next field in the message */

		temp_ptr += strlen(temp_ptr) + 1;

		next_field = temp_ptr;

		/* Thats the job done here */
	}
		
	return field_id;
}

/************************************************************************/
/* Function Name	: dump_msg										    */
/* Description		: Function to dump a MQSeries message to a flat file*/
/* Input			: buff - buffer containing MQSeries message			*/
/*					  len  - size of buffer								*/
/* Output			: None												*/
/* Return Values	: None												*/
/* Limitations		: None												*/
/************************************************************************/

void dump_msg(char *buff, long len)
{
	
	FILE *dump_file = NULL;
	static char prev_file_name[125] = {'\0'};
	char file_name[125] = {'\0'};
	

	MSG_HEADER_T *msg_header;


	
	/* Get the request id to form the file name */
	msg_header = (MSG_HEADER_T *) buff;

	strcpy(file_name, DUMP_PATH);
	strncat(file_name, msg_header->request_id, 24);
	

	/* Check if the same message has been dumped */
	if(0 == strcmp(prev_file_name, file_name))
		return;
	strcpy(prev_file_name, file_name);


	dump_file = fopen(file_name, "wb");

	if(NULL == dump_file)
	{
		/* Cant do much here*/
		return;
	}
	fwrite(buff, len, 1, dump_file);

	fclose(dump_file);

	strcpy(prog_log.remarks,"dump_msg : Message dumped to file");
	sprintf(excep_log.error_msg, "dump_msg : dumped message to file %s", file_name);
	excep_log.severity = WARNING;
	log_error();

}

/************************************************************************/
/* Function Name	: get_next_sequnce								    */
/* Description		: Function to get the next value from the Oracle	*/
/*					  sequnce											*/
/* Output			: None												*/
/* Return Values	: sequence_no - three character sequence number		*/
/* Limitations		: None												*/
/************************************************************************/

int get_next_sequence(char **next_sequence)
{
	

	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	static char hv_sequence_no[5];
	/* EXEC SQL END DECLARE SECTION; */ 



	//hv_sequence_no = malloc(4);
	/* EXEC SQL SELECT LPAD(TO_CHAR(LI_REQUEST_ID.NEXTVAL), 3, '0') 
			INTO :hv_sequence_no FROM DUAL; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 1;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select LPAD(TO_CHAR(LI_REQUEST_ID.nextval ),3,'0') into :b0 \
 from DUAL ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )5;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)256;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)hv_sequence_no;
 sqlstm.sqhstl[0] = (unsigned int  )5;
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


 
	if(SQLCODE)
	{
		strcpy(prog_log.remarks,"get_next_sequence : Failed due to ORACLE_Error");
		//sprintf(excep_log.error_msg, "get_next_sequence : Unable to select next sequence. %s", SQLMSG);
		strcpy(excep_log.error_msg, "get_next_sequence : Unable to select next sequence. %s");
		excep_log.severity = WARNING;
		log_error();

		return GMPC_BAD;
	}

	*next_sequence = hv_sequence_no;
	//strcpy(*next_sequence, hv_sequence_no);
  	return GMPC_GOOD;
}

/************************************************************************/
/* Function Name	: check_reply_ind								    */
/* Description		: Function to check the reply indicator in MQSeries	*/
/*					  reply messages from KPP*Gate						*/
/* Inputs			: msg_buff - The entire message buffer				*/
/*					  reply_buff_size - Size of the message buffer		*/
/* Output			: error_code-specifc error code when an error occurs*/
/* Return Values	: GMPC_GOOD - reply indicator is acceptable			*/
/*					  GMPC_BAD  - Bad reply indicator					*/
/* Limitations		: None												*/
/************************************************************************/

int check_reply_ind(char *msg_buff, long reply_buff_size, int *error_code)
{

	MSG_HEADER_T *msg_header;
	
	msg_header = (MSG_HEADER_T *)msg_buff;

	switch(msg_header->reply_header.reply_indicator)
	{
	case LI_OK:
	case LI_WARNING:
	case LI_RESERVE:
		{
			/* All these are acceptable so break */
			return GMPC_GOOD;
		}
	case LI_REC_NOT_FOUND:
		{
			/* No data has been found for the given IDs.  Log the WARNING  */
			strcpy(prog_log.remarks,"check_reply_ind : Legacy returned record not found");
			strcpy(excep_log.error_msg, "check_reply_ind : Legacy returned record not found");
			excep_log.severity = FATAL;
			log_error();

			dump_msg(msg_buff, reply_buff_size);

			*error_code = LI_REC_NOT_FOUND;

			return GMPC_BAD;
		}
	case LI_NOT_OK:
		{
			/* Some other error at the Legacy */
			strcpy(prog_log.remarks,"check_reply_ind : Legacy returned not OK");
			strcpy(excep_log.error_msg, "check_reply_ind : Legacy returned not OK");
			excep_log.severity = FATAL;
			log_error();

			dump_msg(msg_buff, reply_buff_size);

			*error_code = LI_NOT_OK;

			return GMPC_BAD;
		}
	case LI_COMM_ERROR :
		{
			/* Comm error means that the calling function has to retry the put */
			strcpy(prog_log.remarks,"check_reply_ind : Legacy returned COMM. ERROR");
			strcpy(excep_log.error_msg, "check_reply_ind : Legacy returned COMM. ERROR");
			excep_log.severity = FATAL;
			log_error();

			dump_msg(msg_buff, reply_buff_size);

			*error_code = LI_COMM_ERROR;

			return GMPC_BAD;
		}
	case LI_INVALID_AGENCY_ID:
	case LI_INCON_MSG_TYPE:
		{
			/* These are our errors which should not happen */
			strcpy(prog_log.remarks,"check_reply_ind : Legacy returned incorrect message type or invalid agency id");
			strcpy(excep_log.error_msg, "check_reply_ind : Legacy returned incorrect message type or invalid agency id");
			excep_log.severity = FATAL;
			log_error();

			dump_msg(msg_buff, reply_buff_size);

			*error_code = APPL_ERROR;

			return GMPC_BAD;

		}
	default:
		{
			/* What's this??? */

			strcpy(prog_log.remarks,"check_reply_ind : Legacy returned unknown reply indicator");
			sprintf(excep_log.error_msg,"check_reply_ind : Legacy returned unknown reply indicator %d", msg_header->reply_header.reply_indicator );
			excep_log.severity = FATAL;
			log_error();

			dump_msg(msg_buff, reply_buff_size);

			*error_code = LEGACY_DATA_ERROR;

			return GMPC_WARN;
		}
	}


}


/************************************************************************/
/* Function Name	: add_one_fc_field								    */
/* Description		: Function to add one alphanumeric field to the		*/
/*					  request message buffer							*/
/* Inputs			: field_id = field id of the field to add			*/
/*					  in_temp_ptr - pointer to pointer to current		*/
/*					  location in request buffer						*/
/*					  req_data - data to put in the field				*/
/*					  req_data_type - data type of the input data		*/
/* Output			: error_code-specifc error code when an error occurs*/
/* Return Values	: GMPC_GOOD - successfully put the data & field id	*/
/* Limitations		: None												*/
/************************************************************************/

int add_one_fc_field(int field_id, char **in_temp_ptr, char *req_data, 
					    int req_data_type, int *error_code)
{
	char *temp_ptr = *in_temp_ptr;
	int data_ind = 0xfc;

	/* Check if the input data is null */
	if('\0' == *req_data || field_id == 0)
	{
		return GMPC_GOOD;
	}
	/* Set the data indicator */
	*temp_ptr = data_ind;
	temp_ptr++;

	/* Copy the actual data */
	switch(req_data_type)
	{
		case TYPE_CHAR_ARR:
		{
			strcpy(temp_ptr, req_data);
			temp_ptr += strlen(temp_ptr) + 1;
			break;
		}
		case TYPE_CHAR:
		{
			*temp_ptr = *req_data;
			temp_ptr++;
			*temp_ptr = '\0';
			temp_ptr++;
		}
	}
	

	/* Set the field id */

	ltoa(field_id, temp_ptr, 10);
	temp_ptr += strlen(temp_ptr) + 1;
	*in_temp_ptr = temp_ptr;

	return GMPC_GOOD;
}


// new function for IJPN to take care of NULLs
/************************************************************************/
/* Function Name	: add_one_fc_field_n								    */
/* Description		: Function to add one alphanumeric field to the		*/
/*					  request message buffer							*/
/* Inputs			: field_id = field id of the field to add			*/
/*					  in_temp_ptr - pointer to pointer to current		*/
/*					  location in request buffer						*/
/*					  req_data - data to put in the field				*/
/*					  req_data_type - data type of the input data		*/
/* Output			: error_code-specifc error code when an error occurs*/
/* Return Values	: GMPC_GOOD - successfully put the data & field id	*/
/* Limitations		: None												*/
/************************************************************************/

int add_one_fc_field_n(int field_id, char **in_temp_ptr, char *req_data, 
					    int req_data_type, int *error_code)
{
	char *temp_ptr = *in_temp_ptr;
	int data_ind = 0xfc;

	userlog("Insdie the add_one_fc_field_n function ");

	/* Check if the input data is null */
//	if('\0' == *req_data || field_id == 0) commented for IJPN
	if(field_id == 0)
	{
		return GMPC_GOOD;
	}
	/* Set the data indicator */
	*temp_ptr = data_ind;
	temp_ptr++;

	/* Copy the actual data */
	switch(req_data_type)
	{
		case TYPE_CHAR_ARR:
		{	
			userlog("Insdie the add_one_fc_field_n TYPE_CHAR_ARR function ");
			strcpy(temp_ptr, req_data);
			temp_ptr += strlen(temp_ptr) + 1;
			break;
		}
		case TYPE_CHAR:
		{
			userlog("Insdie the add_one_fc_field_n TYPE_CHAR function ");
			*temp_ptr = *req_data;
			temp_ptr++;
			*temp_ptr = '\0';
			temp_ptr++;
		}
	}
	

	/* Set the field id */
userlog("Insdie the add_one_fc_field_n before ltoa ");
	ltoa(field_id, temp_ptr, 10);
	temp_ptr += strlen(temp_ptr) + 1;
	*in_temp_ptr = temp_ptr;
userlog("Insdie the add_one_fc_field_n before return ");
	return GMPC_GOOD;
}


/************************************************************************/
/* Function Name	: add_one_minutiae_field							*/
/* Description		: Function to add one finger minutiae field to the	*/
/*					  request message buffer							*/
/* Inputs			: field_id = field id of the field to add			*/
/*					  in_temp_ptr - pointer to pointer to current		*/
/*					  location in request buffer						*/
/*					  req - Pointer to a FINGER_T structure containg the*/
/*					  image to put into the buffer						*/
/*					  len - length of the image buffer					*/
/*					  image_ind - image indicator for image				*/
/* Output			: error_code-specifc error code when an error occurs*/
/* Return Values	: GMPC_GOOD - successfully put the data & field id	*/
/* Limitations		: None												*/
/************************************************************************/

int add_one_minutiae_field(int field_id, char **in_temp_ptr, FINGER_T *req,  
						long len, int image_ind, int *error_code)
{
	char *temp_ptr = *in_temp_ptr;
	char *temp_minu_ptr = NULL;
	long temp_minu_size = 0;
	int data_ind = 0xfe; 
	unsigned char *req_data = NULL;

	if(0 == len)
	{
		return GMPC_GOOD;
	}

	
	if((FID_LFP_ORIGINAL_MINU == field_id) || (FID_RFP_ORIGINAL_MINU == field_id))
	{
		/* Need to manipulate the buffer to be put into the message to make it		*/
		/* compliant with the structre for original minutiae given by HTP			*/
		
		/* Size of the struct is size of buffer + 1 byte for finger pattern, one	*/
		/* byte for	thumb status													*/
		temp_minu_size = req->orginal_minutiae_size + 2;
		
		/* Allocate memory to hold maipulated data */

		temp_minu_ptr = (char *) malloc(temp_minu_size);

		if(NULL == temp_minu_ptr)
		{
			strcpy(prog_log.remarks,"add_one_fdfe_field : malloc call failed");
			strcpy(excep_log.error_msg,"add_one_fdfe_field : malloc call failed");
			excep_log.severity = FATAL;
			log_error();
			
			*error_code = MALLOC_ERROR;
			return GMPC_BAD;
		}
		req_data = temp_minu_ptr;

		/* Copy the miniutiae */
		memcpy(temp_minu_ptr, req->org_minutiae_buff, 
			req->orginal_minutiae_size);
		temp_minu_ptr +=  req->orginal_minutiae_size;
		
		
		*temp_minu_ptr = req->finger_pattern;
		temp_minu_ptr ++;

		*temp_minu_ptr = req->thumb_status;
		temp_minu_ptr ++;
	
		
		len = temp_minu_size;
	}
	else if((FID_LFP_NORM_MINU == field_id) || (FID_RFP_NORM_MINU == field_id))
	{
		/* Need to manipulate the buffer to be put into the message to make it		*/
		/* compliant with the structre for original minutiae given by HTP			*/
		
		/* Size of the struct is size of buffer + 6 bytes for quality, one			*/
		/* byte for	finger Index													*/
		temp_minu_size = 6 + 1;
		temp_minu_size += req->normalized_minutiae_size;
		
		/* Allocate memory to hold maipulated data */
		temp_minu_ptr = (char *) malloc(temp_minu_size);

		if(NULL == temp_minu_ptr)
		{
			strcpy(prog_log.remarks,"add_one_fdfe_field : malloc call failed");
			strcpy(excep_log.error_msg,"add_one_fdfe_field : malloc call failed");
			excep_log.severity = FATAL;
			log_error();
			
			*error_code = MALLOC_ERROR;
			return GMPC_BAD;
		}
		req_data = temp_minu_ptr;

		/* Copy the miniutiae  */
		memcpy(temp_minu_ptr, req->norm_minutiae_buff, 
			req->normalized_minutiae_size);
		temp_minu_ptr += req->normalized_minutiae_size;
		
		/* Copy the quality score */
		ltoa(req->quality_score, temp_minu_ptr, 10);

		temp_minu_ptr += 6;

		/* Copy the finger indicator */
		*temp_minu_ptr = atoi(req->finger_ind);

		temp_minu_ptr ++;
	

		len = temp_minu_size;
	}
	else if((FID_LFP_MATRIX_BUFF == field_id) || (FID_RFP_MATRIX_BUFF == field_id))
	{
		req_data = req->matrix_buffer;
	}


	/* Set the data indicator */
	*temp_ptr = data_ind;
	temp_ptr ++;

	/* Set the length of the image */
	ltoa(len, temp_ptr, 10);
	temp_ptr += strlen(temp_ptr) + 1;

	/* Image Indicator */
	*temp_ptr = image_ind;
	temp_ptr++;

	/* copy the acutal image */
	memcpy(temp_ptr, req_data, len);
	temp_ptr += len;

	/* Set the field id */
	ltoa(field_id, temp_ptr, 10);
	temp_ptr += strlen(temp_ptr) + 1;
	*in_temp_ptr = temp_ptr;

	return GMPC_GOOD;
}

	

/************************************************************************/
/* Function Name	: add_one_minutiae_field_n							*/
/* Description		: Function to add one finger minutiae field to the	*/
/*					  request message buffer							*/
/* Inputs			: field_id = field id of the field to add			*/
/*					  in_temp_ptr - pointer to pointer to current		*/
/*					  location in request buffer						*/
/*					  req - Pointer to a MINUTIAE_T structure containg the*/
/*					  image to put into the buffer						*/
/*					  len - length of the image buffer					*/
/*					  image_ind - image indicator for image				*/
/* Output			: error_code-specifc error code when an error occurs*/
/* Return Values	: GMPC_GOOD - successfully put the data & field id	*/
/* Limitations		: None												*/
/************************************************************************/

int add_one_minutiae_field_n(int field_id, char **in_temp_ptr, MINUTIAE_T *req,  
						long len, int image_ind, int *error_code)
{
	char *temp_ptr = *in_temp_ptr;
	char *temp_minu_ptr = NULL;
	long temp_minu_size = 0;
	int data_ind = 0xfe; 
	unsigned char *req_data = NULL;

	if(0 == len)
	{
		return GMPC_GOOD;
	}

	
	if((FID_LFP_ORIGINAL_MINU == field_id) || (FID_RFP_ORIGINAL_MINU == field_id))
	{
		/* Need to manipulate the buffer to be put into the message to make it		*/
		/* compliant with the structre for original minutiae given by HTP			*/
		
		/* Size of the struct is size of buffer + 1 byte for finger pattern, one	*/
		/* byte for	thumb status													*/
		temp_minu_size = req->orginal_minutiae_size + 2;
		
		/* Allocate memory to hold maipulated data */

		temp_minu_ptr = (char *) malloc(temp_minu_size);

		if(NULL == temp_minu_ptr)
		{
			strcpy(prog_log.remarks,"add_one_fdfe_field : malloc call failed");
			strcpy(excep_log.error_msg,"add_one_fdfe_field : malloc call failed");
			excep_log.severity = FATAL;
			log_error();
			
			*error_code = MALLOC_ERROR;
			return GMPC_BAD;
		}
		req_data = temp_minu_ptr;

		/* Copy the miniutiae */
		memcpy(temp_minu_ptr, req->org_minutiae_buff, 
			req->orginal_minutiae_size);
		temp_minu_ptr +=  req->orginal_minutiae_size;
		
		
		*temp_minu_ptr = req->finger_pattern;
		temp_minu_ptr ++;

		*temp_minu_ptr = req->thumb_status;
		temp_minu_ptr ++;
	
		
		len = temp_minu_size;
	}
	else if((FID_LFP_NORM_MINU == field_id) || (FID_RFP_NORM_MINU == field_id))
	{
		/* Need to manipulate the buffer to be put into the message to make it		*/
		/* compliant with the structre for original minutiae given by HTP			*/
		
		/* Size of the struct is size of buffer + 6 bytes for quality, one			*/
		/* byte for	finger Index													*/
		temp_minu_size = 6 + 1;
		temp_minu_size += req->normalized_minutiae_size;
		
		/* Allocate memory to hold maipulated data */
		temp_minu_ptr = (char *) malloc(temp_minu_size);

		if(NULL == temp_minu_ptr)
		{
			strcpy(prog_log.remarks,"add_one_fdfe_field : malloc call failed");
			strcpy(excep_log.error_msg,"add_one_fdfe_field : malloc call failed");
			excep_log.severity = FATAL;
			log_error();
			
			*error_code = MALLOC_ERROR;
			return GMPC_BAD;
		}
		req_data = temp_minu_ptr;

		/* Copy the miniutiae  */
		memcpy(temp_minu_ptr, req->norm_minutiae_buff, 
			req->normalized_minutiae_size);
		temp_minu_ptr += req->normalized_minutiae_size;
		
		/* Copy the quality score */
		ltoa(req->quality_score, temp_minu_ptr, 10);

		temp_minu_ptr += 6;

		/* Copy the finger indicator */
		*temp_minu_ptr = atoi(req->finger_ind);

		temp_minu_ptr ++;
	

		len = temp_minu_size;
	}
//	else if((FID_LFP_MATRIX_BUFF == field_id) || (FID_RFP_MATRIX_BUFF == field_id))
//	{
//		req_data = req->matrix_buffer;
//	}


	/* Set the data indicator */
	*temp_ptr = data_ind;
	temp_ptr ++;

	/* Set the length of the image */
	ltoa(len, temp_ptr, 10);
	temp_ptr += strlen(temp_ptr) + 1;

	/* Image Indicator */
	*temp_ptr = image_ind;
	temp_ptr++;

	/* copy the acutal image */
	memcpy(temp_ptr, req_data, len);
	temp_ptr += len;

	/* Set the field id */
	ltoa(field_id, temp_ptr, 10);
	temp_ptr += strlen(temp_ptr) + 1;
	*in_temp_ptr = temp_ptr;

	return GMPC_GOOD;
}

	
/************************************************************************/
/* Function Name	: add_one_image_field								*/
/* Description		: Function to add one image field to the			*/
/*					  request message buffer							*/
/* Inputs			: field_id = field id of the field to add			*/
/*					  in_temp_ptr - pointer to pointer to current		*/
/*					  location in request buffer						*/
/*					  req_data - data to put in the field				*/
/*					  len - length of the image buffer					*/
/*					  image_ind - image indicator for image				*/
/*					  req_data_type - data type of the input data		*/
/* Output			: error_code-specifc error code when an error occurs*/
/* Return Values	: GMPC_GOOD - successfully put the data & field id	*/
/* Limitations		: None												*/
/************************************************************************/

int add_one_image_field(int field_id, char **in_temp_ptr, unsigned char *req_data,  
						int data_ind, long len, int image_ind, int *error_code)
{
	char *temp_ptr = *in_temp_ptr;


	if(0 == len)
	{
		return GMPC_GOOD;
	}

	/* Set the data indicator */
	*temp_ptr = data_ind;
	temp_ptr ++;

	/* Set the length of the image */
	ltoa(len, temp_ptr, 10);
	temp_ptr += strlen(temp_ptr) + 1;

	/* Image Indicator */
	*temp_ptr = image_ind;
	temp_ptr++;

	/* copy the acutal image */
	memcpy(temp_ptr, req_data, len);
	temp_ptr += len;

	/* Set the field id */
	ltoa(field_id, temp_ptr, 10);
	temp_ptr += strlen(temp_ptr) + 1;
	*in_temp_ptr = temp_ptr;


	return GMPC_GOOD;
}
	




/************************************************************************/
/* Function Name	: li_yyyymmdd_to_ddmmyyyy						    */
/* Description		: Function to copy date variable in YYYYMMDD format	*/
/*					  to a destation in DDMMYYYY format					*/
/* Input			: src  - Date in YYYYMMDD format					*/
/* Output			: dest - Date in DDMMYYYY format					*/
/* Return Values	: None												*/
/* Limitations		: None												*/
/************************************************************************/

void li_yyyymmdd_to_ddmmyyyy(char *dest, char *src)
{
	char *temp_src_ptr;
	char *temp_dest_ptr;

	if(0 == strlen(src))		
	{
		dest[0] = '\0';
		return;
	}

	temp_dest_ptr = dest;

	/* Get the date */
	temp_src_ptr = src + 6;
	strncpy(temp_dest_ptr, temp_src_ptr, 2);
	temp_dest_ptr += 2;

	/* Get month */
	temp_src_ptr = src + 4;
	strncpy(temp_dest_ptr, temp_src_ptr, 2);
	temp_dest_ptr += 2;


	/* Get year */
	temp_src_ptr = src;
	strncpy(temp_dest_ptr, temp_src_ptr, 4);
	temp_dest_ptr += 4;

	/* Null termiate the destination */
	*temp_dest_ptr = '\0';

	/* Check if date is all zeroes */

	if (strcmp(dest, "00000000") == 0)
	{
		strcpy(dest, "\0");
		return;
	}

}



/************************************************************************/
/* Function Name	: li_ddmmyyy_to_yyyymmdd						    */
/* Description		: Function to copy date variable in DDMMYYYY format	*/
/*					  to a destation in YYYYMMDD format					*/
/* Input			: src  - Date in DDMMYYYY format					*/
/* Output			: dest - Date in YYYYMMDD format					*/
/* Return Values	: None												*/
/* Limitations		: None												*/
/************************************************************************/

void li_ddmmyyyy_to_yyyymmdd(char *dest, char *src)
{
	char *temp_src_ptr;
	char *temp_dest_ptr;

	if(0 == strlen(src))		
	{
		dest[0] = '\0';
		return;
	}

	temp_dest_ptr = dest;

	/* Get the year */
	temp_src_ptr = src + 4;
	strncpy(temp_dest_ptr, temp_src_ptr, 4);
	temp_dest_ptr += 4;

	/* Get month */
	temp_src_ptr = src + 2;
	strncpy(temp_dest_ptr, temp_src_ptr, 2);
	temp_dest_ptr += 2;


	/* Get date */
	temp_src_ptr = src;
	strncpy(temp_dest_ptr, temp_src_ptr, 4);
	temp_dest_ptr += 2;

	/* Null termiate the destination */
	*temp_dest_ptr = '\0';
}



/************************************************************************/
/* Function Name  : get_return_code()									*/
/* Input		  :	Reply indicator returned by legacy					*/
/*					Service_id of the invoking service					*/
/* Description    : This function is used to interpret the reply		*/
/*                  indicator returned by legacy						*/
/* Return Values  : Return code 										*/
/* Limitations    : None												*/
/************************************************************************/
/*
int get_return_code(int reply_ind, int service_id)
{
	int return_code = 0;

	switch(service_id)
	{
		case GET_JPN_DATA_ID	  :
		case GET_APPNT_KPT_ID	  :
		{
			switch(reply_ind)
			{
			case LI_REC_NOT_FOUND :
				return_code = JPN_REC_NOT_FOUND;
				break;
			case LI_NOT_OK		  :
				return_code = JPN_NOT_OK;
				break;
			case LI_COMM_ERROR	  :
				return_code = JPN_COMM_ERROR;
				break;	
			case NO_MSG_ERROR	  :
				return_code = JPN_NO_MSG_ERROR;
				break;	
			case PUT_ERROR	  :
				return_code = PUT_ERROR;
				break;
			case GET_ERROR	  :
				return_code = GET_ERROR;
				break;
			case CONN_ERROR	  :
				return_code = CONN_ERROR;
				break;
			case APPL_ERROR	  :
				return_code = APPL_ERROR;
				break;
			case LEGACY_DATA_ERROR	  :
				return_code = LEGACY_DATA_ERROR;
				break;
			default			      :
				break;
			}
			break;
		}
		case GET_JPJ_DATA_ID	  :
		{
			switch(reply_ind)
			{
			case LI_REC_NOT_FOUND :
				return_code = JPJ_REC_NOT_FOUND;
				break;
			case LI_NOT_OK		  :
				return_code = JPJ_NOT_OK;
				break;
			case LI_COMM_ERROR	  :
				return_code = JPJ_COMM_ERROR;
				break;
			case NO_MSG_ERROR	  :
				return_code = JPJ_NO_MSG_ERROR;
				break;
			case PUT_ERROR	  :
				return_code = PUT_ERROR;
				break;
			case GET_ERROR	  :
				return_code = GET_ERROR;
				break;
			case CONN_ERROR	  :
				return_code = CONN_ERROR;
				break;
			case APPL_ERROR	  :
				return_code = APPL_ERROR;
				break;
			case LEGACY_DATA_ERROR	  :
				return_code = LEGACY_DATA_ERROR;
				break;
			default			      :
				break;
			}
			break;
		}
#ifdef IMM
		case GET_IMM_DATA_ID	  :
		case IMM_UPDATE_ID		  :
		{
			switch(reply_ind)
			{
			case LI_REC_NOT_FOUND :
				return_code = IMM_REC_NOT_FOUND;
				break;
			case LI_NOT_OK		  :
				return_code = IMM_NOT_OK;
				break;
			case LI_COMM_ERROR	  :
				return_code = IMM_COMM_ERROR;
				break;
			case NO_MSG_ERROR	  :
				return_code = IMM_NO_MSG_ERROR;
				break;
			case PUT_ERROR	  :
				return_code = PUT_ERROR;
				break;
			case GET_ERROR	  :
				return_code = GET_ERROR;
				break;
			case CONN_ERROR	  :
				return_code = CONN_ERROR;
				break;
			case APPL_ERROR	  :
				return_code = APPL_ERROR;
				break;
			case LEGACY_DATA_ERROR	  :
				return_code = LEGACY_DATA_ERROR;
				break;
			default			      :
				break;
			}
			break;
		}
#endif	// IMM
		default	:
			break;
	}

	return return_code;
}
*/

/************************************************************************/
/* Function Name	: get_legacy_address						        */
/* Description		: Function to convert addressed to legacy format    */
/* Input			: Three parts of address							*/
/* Output			: Modified address									*/
/* Return Values	: None												*/
/* Limitations		:													*/
/************************************************************************/

void get_legacy_address(char *addr1, char *addr2, char *addr3)
{
	/* truncate all addresses */
	addr1[LEGACY_ADDRESS_SIZE - 1] = 0;
	addr2[LEGACY_ADDRESS_SIZE - 1] = 0;
	addr3[LEGACY_ADDRESS_SIZE - 1] = 0;
}

/************************************************************************/
/* Function Name	: get_license_type						        */
/* Description		: Function to get the license type into char value */
/* Input				: String containing the license type e.g "CDL"		*/
/* Output			: Corresponding char value . e.g 'C'					*/
/* Return Values	: Corresponding char value . e.g 'C'					*/
/* Limitations		:													*/
/************************************************************************/
// Utility function
int get_license_type(char *str_license)
{
	if(_stricmp(str_license, CDL_LIC) == 0)
		return CDL_LIC_T;
	else if(_stricmp(str_license, GDL_LIC) == 0)
		return GDL_LIC_T;
	else if(_stricmp(str_license, PSV_LIC) == 0)
		return PSV_LIC_T;
	else if(_stricmp(str_license, PDL_LIC) == 0)
		return PDL_LIC_T;
	else if(_stricmp(str_license, PRB_LIC) == 0)
		return PRB_LIC_T;

	return 0;
}










