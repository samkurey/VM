#ifndef __TERMINATE_APPL_H__
#define __TERMINATE_APPL_H__

int check_cancel_codes(int txn_count, TXN_CANCEL_CODES_T *txn_cancel_codes,void * ctx);

int update_txn_table(char *applid, TXN_CANCEL_CODES_T *txn_cancel_codes, int txn_count,void * ctx);

int insert_txns(TERMINATE_APPL_REQ_T *req, APPL_TXN_T *appl_txn,void * ctx);

int update_application(TERMINATE_APPL_REQ_T *req, char *kpt_no,void * ctx);
//int update_application(char *applid, char *cancel_code, char *cancel_date, char *supvr_notes, char termination_flag);

int update_application1(TERMINATE_APPL_REQ_T *req, char *kpt_no,void * ctx);

int terminate_application(char *applid, char *cancel_code, char *cancel_dt_time,void * ctx);

int cancel_application(char *applid, char *cancel_code, char *cancel_dt_time,void * ctx);

int reverse_payment(char *applid, PAYMENT_T *payment_info,void * ctx);


int insert_supvr_remarks(char *applid, int supvr_count, SUPVR_REMARKS_T *supvr_remarks,void * ctx);

int insert_application(TERMINATE_APPL_T *application, char *applid,void * ctx);

int delete_appl_txn(char *applid,void * ctx);

int insert_appl_history(char *applid, int histcnt, APPL_HISTORY_T *appl_history,void * ctx);

int insert_appl_proc (TERMINATE_APPL_REQ_T *req, APPL_PROC_T *appl_proc,void * ctx);

int reverse_pay(char *applid, PAYMENT_T *payment_info, int rvrs_count,void * ctx);

int update_appl_remarks(char *appl_remarks, char *applid,void * ctx);

int insert_txn_summ(char *appl_id, int txn_summ_count, APPL_TXN_SUMMONS_T *txn_summ,void * ctx);

int insert_txn_fee(char *appl_id, int txn_fee_count, APPL_TXN_FEE_T *txn_fee,void * ctx);

int update_paysrno(char *applid, int old_txn_count, OLD_TXN_T *old_txn,void * ctx);

int put_request(HEADER_T *header,void * ctx);

int close_problems(char *applid, char *userid, char termination_flag,void * ctx);

int call_jpn_update(HEADER_T header,void * ctx);

int call_jpj_update(HEADER_T header,void * ctx);

int call_services(HEADER_T header, char *applid,void * ctx);

int delete_card_stat(HEADER_T hdr,void * ctx);

int update_card_stat(HEADER_T header,void * ctx);

#endif //__TERMINATE_APPL_H__
