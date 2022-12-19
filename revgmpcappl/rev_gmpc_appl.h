/* $Header:   F:/GSCBProjectDb/archives/CIS/GSCB/REV_GMPC_APPL/rev_gmpc_appl.h-arc   1.4   Dec 19 2001 18:34:18   AbhyanSC  $ */
/********************************************************************************/
/* Filename    : rev_gmpc_appl.h												*/
/* Author      : Brijesh Patil									*/
/* Description : This file contains the #defines and structures for service		*/
/*				 REV_GMPC_APPL.													*/
/********************************************************************************/

#ifndef __REV_GMPC_APPL_
#define __REV_GMPC_APPL_

#define NO_DATA -1
#define DATA_FOUND -2

#define CREDIT 'C'
#define DEBIT 'D'

#define CONVERSION	"11"	/* Legacy appln_type for Conversion */
#define TWELVE_YO	"12"	/* Legacy appln_type for 12YO Transaction */
#define FIRST_TIME	"13"	/* Legacy appln_type for First Time OR New Application */
#define RENEW		"14"	/* Legacy appln_type for Renewal Transaction*/
#define REPL_DAMAGE "31"	/* Legacy appln_type for Replacement due to damage OR Change of Information */
#define REPL_LOST	"32"	/* Legacy appln_type for Replacement for lost card  */
#define REPL_ERROR	"33"	/* Legacy appln_type for Replacement due to surface error */

/* Reason code for reversal of owner category */
#define OWNER_CAT_CANCEL 'F'

typedef struct appl_info
{
	char id_type[ID_TYPE_SIZE];
	char id_number[ID_SIZE];
	char lic_id_type[ID_TYPE_SIZE];
	char lic_id_no[ID_SIZE];
	char ownercat;
	char newownercat;
	char kpt_number[KPT_SIZE];
	char prb_status;
} APPL_INFO_T;

typedef struct message_details
{
	char legreqflag;
	char legmsgid[MSG_ID_SIZE];
	char checkagency;
	int txnserno;
	int txnwsid;
	struct message_details *next_msg;
}
MESSAGE_DETAILS_T;


// int send_rev_messages(char *applid, HEADER_T header);
//int get_msg_details(char *applid, MESSAGE_DETAILS_T **msg_det,void * ctx);
int get_msg_details(HEADER_T header, MESSAGE_DETAILS_T **msg_det,void * ctx);
int send_rev_messages(char * applid, HEADER_T header, MESSAGE_DETAILS_T *msg,void * ctx);
int check_payment_rec(char *applid, int txn_serno, char ag,void * ctx);
int check_application_status(char *applid,void * ctx);
int check_appl_txn(char *applid,void * ctx);
int delete_from_legacy_reversal(char *applid, int txnserno, char agency, char legreqflag,void * ctx);
int update_rev_msgid(char *legmsgid, char *revmsgid, int revreqstat, char agencyid, char *appl_id,void * ctx);
int insert_into_legacy_revarsal(HEADER_T header, int jpn_flag, int jpj_flag, int pdrm_flag, char *reject_code, char *reject_reason, char *revmsgid, char lrflag, void * ctx);
int send_idtokpt_rev(char *applid, char *rev_msg_id, 
		APPL_INFO_T* appl_info, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx);
int send_summons_cancel(char *applid, int txnserno, APPL_INFO_T* appl_info, LI_P_HEADER_T li_p_header, char *rev_msg_id, char *reject_code, char *reject_reason, void * ctx);
int send_payment_rev_jpj(char *applid, char *rev_msg_id, int txn_ser_no, APPL_INFO_T* appl_info, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx);
int send_renew_lic_cancel(char *application_id, int txn_serno, char *revmsgid, APPL_INFO_T *appl_info, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx);
int send_licrepl_cancel(char *application_id, int txn_serno, char *revmsgid, APPL_INFO_T *appl_info, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx);
int send_addnew_class_cancel(char *application_id, int txn_serno, char *revmsgid, APPL_INFO_T *appl_info, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx);
int send_new_lic_cancel(char *application_id, int txn_serno, char *revmsgid, APPL_INFO_T *appl_info, LI_P_HEADER_T li_header, char *reject_code, char *reject_reason, void * ctx);
int get_appl_info(char *applid, APPL_INFO_T *appl_info,void * ctx);

int send_payment_rev_jpn(char *applid, int txnserno, char *rev_msg_id, LI_P_HEADER_T li_p_header,char *reject_code, char *reject_reason, void * ctx);
int send_jpn_cancel_appl(char *applid, int txnserno, char *rev_msg_id, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx);
int send_payment_rev(char *application_id,void * ctx);

int get_trans_date_time(char *applid, int txnserno, char legreqflag, char *trans_date, char *trans_time,void * ctx);
int get_fin_info(char *appid, int txn_ser_no, FIN_DATA_T **payment_info, int *count,void * ctx);
int get_fin_info_summons(char *appid, int txn_ser_no, FIN_DATA_T **payment_info, int *count,void * ctx);
int get_appl_remarks(char* applid, char* appl_remarks,void * ctx);
char* rtrim(char *,void * ctx);
unsigned char get_pay_mode(char *mode,void * ctx);
int get_financial_data(char *applid, int txnserno, LI_PUT_FIN_DATA_T *findata,void * ctx);
int send_pdrm_reverse(HEADER_T header, char *kptno,void * ctx);
int get_user_ws_id(char *application_id, char leg_msg_type, char *user_id, char *ws_id,void * ctx);
int send_rev_appl_in_prog(char *applid, int txnserno, char *rev_msg_id, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx);
int send_address_upd_jpj(char *applid, char *rev_msg_id, APPL_INFO_T* appl_info, LI_P_HEADER_T li_p_header,  char *reject_code, char *reject_reason, void * ctx);
int send_address_upd_jpn(char *applid, char *rev_msg_id, APPL_INFO_T* appl_info, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx);
int get_applicant_kpp(char *kptno, char *kppno,void * ctx);
int send_owner_cat_rev(char *applid, char *rev_msg_id, APPL_INFO_T *appl_info_ptr, LI_P_HEADER_T li_p_header, char *reject_code, char *reject_reason, void * ctx);
int get_new_class(char *applid, char *licidno, char ownercat, char *txncode, char *lictype,  LI_REV_CLASS_T **new_class_ptr,void * ctx);
int get_existing_classes(char *applid, char *licidno, char ownercat, char *lictype, LI_REV_CLASS_T **class_ptr,void * ctx);

/* Added on 24/07/2002 li_update_jpn_addr.h changing struct name li_update_addr_req to  */
/*  li_update_jpn_addr_req by shiva.p to avoid struct duplication */
typedef struct li_update_jpn_addr_req
{
	char appnt_kpt[KPT_SIZE];
	ADDRESS_T *new_address;
	ADDRESS_T *old_address;
} LI_JPN_UPDATE_ADDRESS_REQ_T;

/* Function prototype */
int li_update_jpn_addr_p(LI_P_HEADER_T header,LI_JPN_UPDATE_ADDRESS_REQ_T req,unsigned char *msg_id,int *error_code,
						 unsigned char *pReplyMsg,
						   int *iReplyMsgLen,
						   char *sErrMessage);

//int Call_Jpj_Upd_Caller(HEADER_T header , void * ctx);   // added this on 20/04/2015 for JPJ WEBSERVICE
int insert_into_ijpn_jpj_updreq(HEADER_T header, int , void * ctx); // added this on 20/04/2015 for JPJ WEBSERVICE
int call_jpj_update(HEADER_T header,int,void * ctx);  // added this on 20/04/2015 for JPJ WEBSERVICE



#endif	/* ifndef __REV_GMPC_APPL_	*/

