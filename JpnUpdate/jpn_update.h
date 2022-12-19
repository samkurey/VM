/* $Header:   F:/GSCBProjectDb/archives/CIS/GSCB/jpn_update/jpn_update.h-arc   1.13   Jul 04 2003 15:20:28   ShivamP  $ */
/*******************************************************************/
/* Filename    : jpn_update.h									   */
/* Author      : Amit Sangrulkar       							   */
/* Description : This is a header file for JPN_UPDATE.			   */
/*				 This Stores function Prototypes and macros        */
/*				 specific to this service						   */
/*******************************************************************/

#ifndef _JPN_UPDATE_
#define _JPN_UPDATE_

#include <VICDEFS.H>
#include "li_nrs_update.h"

/*The following #defiles are used in Date Related functions*/
#define YEAR	5
#define MON		3
#define DAY		3

#define AMT_SIZE			8
#define EXACT_MINUTIAE_SIZE 512

#define CREDIT		'C'
#define DEBIT		'D'

#define CONVERSION	"11"	/* Legacy appln_type for Conversion */
#define TWELVE_YO	"12"	/* Legacy appln_type for 12YO Transaction */
#define FIRST_TIME	"13"	/* Legacy appln_type for First Time OR New Application */
#define RENEW		"14"	/* Legacy appln_type for Renewal Transaction*/
#define REPL_DAMAGE "31"	/* Legacy appln_type for Replacement due to damage OR Change of Information */
#define REPL_LOST	"32"	/* Legacy appln_type for Replacement for lost card  */
#define REPL_ERROR	"33"	/* Legacy appln_type for Replacement due to surface error */

#define ISSUE_PAY_TXNCODE "999"	/* Dummy transaction code for Issuance payment */

int fetch_transaction(char *, TXN_INFO_T** , int *, char,void * ctx);
int get_address(char *, ADDRESS_T **, ADDRESS_T **, char *,void * ctx);
int delete_legacy_req(char *, int, char, char,void * ctx);
int insert_legacy_req(int *msgid, JPN_UPDATE_REQ_T *, char, int, char,void * ctx);


// The following stmts commented on 11/08/06 by kasi to remove global scope

//int upd_appnt_demo_info(JPN_UPDATE_REQ_T *, int, char, TXN_INFO_T *, int*, int*, char *pTxnCode,void * ctx);	//pTxnCode added by Amarjith on 7th Sept '04. JRS 147. //Commented for GSCB upgrade- 10th March 2005.
//int upd_card_details(JPN_UPDATE_REQ_T *, int, char,void * ctx);
//int upd_address(JPN_UPDATE_REQ_T *, int , ADDRESS_T *, ADDRESS_T *,void * ctx);
//int upd_payment(JPN_UPDATE_REQ_T *, int, int, int, int,void * ctx);

// The following stmts Added on 11/08/06 by kasi to create local scope to LI_P_HEADER_T hdr;

int upd_appnt_demo_info(JPN_UPDATE_REQ_T *, int, char, TXN_INFO_T *, int*, int*, char *pTxnCode,LI_P_HEADER_T hdr,void * ctx);	//pTxnCode added by Amarjith on 7th Sept '04. JRS 147. //Commented for GSCB upgrade- 10th March 2005.
int upd_card_details(JPN_UPDATE_REQ_T *, int, char,LI_P_HEADER_T hdr,void * ctx);
int upd_address(JPN_UPDATE_REQ_T *, int , ADDRESS_T *, ADDRESS_T *,LI_P_HEADER_T hdr,void * ctx);
int upd_payment(JPN_UPDATE_REQ_T *, int, int, int, int,LI_P_HEADER_T hdr,void * ctx);

int upd_leg_upd_flag(char *, int,void * ctx);
int get_financial_data(char *, int , LI_PUT_FIN_DATA_T *, int,void * ctx);
int get_appl_stat(char *, char *,void * ctx);
void error_log_for_malloc(char *,void * ctx);
void free_alloced_mem(LI_JPN_UPDATE_REQ_T *, LI_PUT_FIN_DATA_T *,void * ctx);
char* rtrim(char *);
void convert_mode(char mode[], unsigned char *);
int get_age(char *, char *);
int update_legacy_req(JPN_UPDATE_REQ_T *, int , char *, char *,void * ctx);
int upd_common_leg_upd_flag(char *, int,void * ctx);
int check_pay_data_sent(char *, int, int *, int *,void * ctx);
int get_txn_srno(char *, int *, int *,void * ctx);
int check_leg_request(char *, int *,void * ctx);
int get_appl_date(char *, char *, int,void * ctx);
int check_issue_payment(char *, char *,void * ctx);
int payment_info_count(char *, int *, void * ctx);
int upd_payment_flag(char *, int,void * ctx);
int check_addr_updated(char *,void * ctx);

int get_appl_timestamp(char *, char *, int,void * ctx);  // Added this function on 15/11/2006

// The following stmt commented on 11/08/06 by kasi to remove global scope

//int update_leg_application_stat(JPN_UPDATE_REQ_T *, char , int,void * ctx);

// The following stmt Added on 11/08/06 by kasi to create local scope to LI_P_HEADER_T hdr;

int update_leg_application_stat(JPN_UPDATE_REQ_T *, char , int,LI_P_HEADER_T hdr,void * ctx);

int get_appl_machine(char *, char *, char *, int ,void * ctx);

// The following stmt commented on 11/08/06 by kasi to remove global scope
//int upd_unclaimed_card_details(JPN_UPDATE_REQ_T *, char *, int,void * ctx); /* Added on 16/04/2003 by shiva.p */

// The following stmt Added on 11/08/06 by kasi to create local scope to LI_P_HEADER_T hdr;
int upd_unclaimed_card_details(JPN_UPDATE_REQ_T *, char *, int,LI_P_HEADER_T hdr,void * ctx); /* Added on 16/04/2003 by shiva.p */

// added the following function on 25/09/06
int get_appnt_jpn_info_data(HEADER_T header, LI_NRS_UPDATE_REQ_T *nrs_data,void * ctx);
int get_minutiae_info(JPN_UPDATE_REQ_T *req, LI_NRS_UPDATE_REQ_T *nrs_data,void * ctx);

/* function to compress low res image */
int ncompress_photo(unsigned char *buff, int ori_len,
				   unsigned char **new_buff, int *new_len, char *, char *, void * ctx);

//int make_lrphoto_from_hrphoto(unsigned char **pnew_buff, int *new_len, char *kptno, char *applid, int *nQl, void * ctx );

//int make_lrphoto_from_hrphoto(imagedes *Img2k, int *new_len, char *kptno, char *applid, int *nQl,void * ctx );

//int ncompress_photo_new(unsigned char *buff, int ori_len, unsigned char **new_buff, int *new_len, char *, int *nQl, void * ctx);

int ncompress_photo_new(unsigned char *buff, int ori_len, unsigned char **new_buff, int *, char *, int *nQl, char *, void * ctx);

//BOOL CreateLowResImage(imgdes *desImage, imgdes *srcImage, DWORD dwMaxSize, long *actual_len, void * ctx);

int check_dlkp_trans(char *applid, int * dlkp_flag,void * ctx);
int get_dlewat_apprv_hist(char *applid, char *userid, char *user_remark, char *user_kptno, void * ctx);

#endif



