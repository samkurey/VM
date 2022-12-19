/* $Header:   F:/PVCS_GMPC/archives/GSCB_SERVICES/COMMON_FILES/gscbio.h-arc   1.0   Aug 20 2003 09:52:30   ShivamP  $ */

/********************************************************************/
/* File Name   : gscbio.h	                                        */
/* Author      : Sangeeta Natu, Bakul Waghmare                      */
/* Description : This file contains common structures used by       */
/*               services in their input / output buffers.          */
/********************************************************************/

#ifndef _GSCBIO_
#define _GSCBIO_

typedef struct header
{
	char branch_code[BRANCH_CODE_SIZE];
	char user_id[USER_ID_SIZE];
	char workstation_id[WS_ID_SIZE];
	char application_id[APP_ID_SIZE];
	int error_code;
	int service_id;
} HEADER_T;


typedef struct name
{
	char siren_short_name1[SIREN_SHORT_NAME];
	char siren_short_name2[SIREN_SHORT_NAME];
	char gmpc_short_name1[GMPC_SNAME1_SIZE];
	char gmpc_short_name2[GMPC_SNAME2_SIZE];
	char gmpc_short_name3[GMPC_SNAME3_SIZE];
	char current_long_name[LONG_NAME_SIZE];
	char original_name[ORIG_NAME_SIZE];

} NAME_T;


typedef struct address
{
	char address1[ADDRESS_SIZE];
	char address2[ADDRESS_SIZE];
	char address3[ADDRESS_SIZE];
	char post_code[POST_CODE_SIZE];
	int city_code;
	char state_code[STATE_CODE_SIZE];
} ADDRESS_T;

/* Structure for portraits */
typedef struct portrait
{
	unsigned char *portrait_buff;
	long portrait_size;
	
} PORTRAIT_T;

/* Structure for finger information */
typedef struct finger
{
	char finger_ind[FINGER_IND_SIZE];
	long quality_score;

	unsigned char finger_pattern;
	unsigned char thumb_status;
	
	unsigned char *fp_img_buff;
	long fp_img_size;

	unsigned char *org_minutiae_buff;
	long orginal_minutiae_size;

	unsigned char *norm_minutiae_buff;
	long normalized_minutiae_size;

	unsigned char *matrix_buffer;
	long matrix_buffer_size;

} FINGER_T;


/* Structure for minutiae information */
typedef struct minutiae
{
	unsigned char finger_pattern;
	unsigned char thumb_status;

	char finger_ind[FINGER_IND_SIZE];
	long quality_score;

	unsigned char *org_minutiae_buff;
	long orginal_minutiae_size;

	unsigned char *norm_minutiae_buff;
	long normalized_minutiae_size;

} MINUTIAE_T;


/* Structre for reading registry for retry and sleep times */

typedef struct reg_read
{
	int retry_count; /* Number of retries										*/
	long sleep_time; /* Sleep time in milliseconds before a retry is attempted	*/
} READ_REG_T;

/* Structure for generic read from registry */
typedef struct read_reg_generic
{
	char value_name[VALUE_NAME_SIZE]; /* Name of the value to read */
	unsigned char *value; /* Pre allocated memory area to hold the data in the value name key*/
} READ_REG_GENERIC_T;

/* Structre for writing to the registry */
typedef struct write_reg
{
	char value_name[VALUE_NAME_SIZE]; /* Name of the value to write */
	void *value; /* data in the value name key*/
	unsigned long type; /* allowed values are : REG_DWORD and REG_SZ */
}WRITE_REG_T;

/* Request structure for function insert_into_legacy_request */
typedef struct legacy_request 
{
	int  messageid;
	char appl_id[APP_ID_SIZE];
	int service_id;
	char user_id[USER_ID_SIZE];		
	char branch_code[GSC_SIZE];
	int  txn_ser_no;
	int  request_stat;
	char check_agency;
	char request_flag;
										  
} LEGACY_REQUEST_T;

/* Function prototypes */
#if defined(__cplusplus)
extern "C" {
#endif

//int check_header(HEADER_T);
char * get_date_time(void);
char * get_date(void);
int c_rtrim(char *, int);

/* commented for IJPN */
//int ora_connect(void);
//int ora_disconnect(void);
//int gscbbegin_trans(void);
//int gscbcommit_trans(void);
//int gscbrollback_trans(void);
/* end commented */


int gscbbegin_trans(void * ctx);
int gscbcommit_trans(void * ctx);
int gscbrollback_trans(void * ctx);
int check_header(HEADER_T header,void * ctx);
int get_legacy_branchcode(char branch_code[BRANCH_CODE_SIZE], char agency_ind,
						 char *leg_branch_code,void * ctx);

int read_registry(int service_id, READ_REG_T *read_reg, READ_REG_GENERIC_T *other_data);
int write_registry(int service_id, WRITE_REG_T input_data);
/* commented for IJPN */
//int get_legacy_branchcode(char branch_code[BRANCH_CODE_SIZE], char agency_ind, char *leg_branch_code);
/* end comment*/

int get_return_code(int reply_ind, int service_id);
//void log_error(); //commented for IJPN
void get_file_name(char *, char);
//int store_error_message(char *, char *, char, int, int, char *);//commented for IJPN
int gscbbegin_trans(void * ctx);
int gscbcommit_trans(void * ctx);
int gscbrollback_trans(void * ctx);
int check_header(HEADER_T header,void * ctx);
int get_legacy_branchcode(char branch_code[BRANCH_CODE_SIZE], char agency_ind,
						 char *leg_branch_code,void * ctx);

int store_error_message(char *appl_id, char *msg_id, char agency, int txn_type, int status, char *resp_msg,void * ctx);





#if defined(__cplusplus)
}
#endif

#endif
	
	

	
