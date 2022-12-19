/*******************************************************************/
/* Filename      :gmpc_enquiry.h								   */
/* Author        :Brijesh B Patil  								   */
/* Description : This is a header file for GMPC_ENQUIRY.		   */
/*				 This Stores Prototypes and macros specific to 	   */
/*				 this service									   */
/*******************************************************************/
#ifndef _GMPC_ENQUIRY_
#define _GMPC_ENQUIRY_
#include "gmpc_enquiry_io.h"

#define GMPC_ENQUIRY_ID 70
#define MULTI_REC_FOUND 75

#define PROG_LOG_SIZE		sizeof(PROG_ACCESS_LOG_T)
#define APPL_EXCEP_LOG_SIZE sizeof(APPL_EXCEP_LOG_T)
#define TXN_LOG_SIZE		sizeof(TXN_LOG_T)

int get_rec_numbers(GMPC_ENQUIRY_RESP_T *resp,void * ctx);
int get_appl_det(GMPC_ENQUIRY_RESP_T **resp,void * ctx);
int get_blklst_data(GMPC_ENQUIRY_RESP_T *resp,void * ctx);
int get_max_card_version(char *kptno, int *version, char *oldkptno,void * ctx);
int get_appl_history(char *applid, APPL_HISTORY_RECORDS_T *appl_hist_rec, int reccount, void * ctx);
int get_card_history(GMPC_ENQUIRY_RESP_T *resp, CARD_HIST_RECORDS_T *hist_recs, int no_of_cards, void * ctx);
int get_txn_det(char *applid, TXN_DETAILS_T *txn_rec, int reccount,void * ctx);
int get_prevappl_det(GMPC_ENQUIRY_RESP_T *resp, PREV_APPL_DET_T *prevappl_recs, int reccount,void * ctx);
int get_appl_proc(char *applid, APPL_PROC_DETAILS_T *appl_proc, int reccount,void * ctx);
int get_passport_det(char *applid, PASSPORT_DETAILS_T *passport_det, int reccount,void * ctx);
int get_outstand_payment(GMPC_ENQUIRY_RESP_T *resp,void * ctx);
int get_kptno(GMPC_ENQUIRY_REQ_T *req, int *cnt,void * ctx);
int get_gmpc_matches(GMPC_ENQUIRY_REQ_T *req, GMPC_MATCHES_T *matches, int cnt, void * ctx);
/* Added on 1 MARCH 2005 for IJPN */
int get_appnt_lic_info(char *applid, APPNT_LIC_INFO_T *appnt_lic_info, int lic_count,void * ctx);
int get_appnt_jpn_info(char *applid, APPNT_JPN_INFO_T *appnt_jpn_info,char *kptno,void * ctx);

/* end IJPN */

int get_prob_rec(char *applid, PROBL_RECORD_T *probl_rec, int probl_count,void * ctx);
#endif
