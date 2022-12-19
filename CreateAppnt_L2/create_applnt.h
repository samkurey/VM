/* $Header:   F:/PVCS_GMPC/archives/GSCB_SERVICES/create_applnt/create_applnt.h-arc   1.1   Apr 20 2004 14:58:38   ShivamP  $ */
/********************************************************************************/
/* Filename    : create_applnt.h												*/
/* Author      : Amit Sangrulkar												*/
/* Description : This file contains #defines and function prototypes of			*/
/*				 functions for the service CREATE_APPLNT.						*/
/********************************************************************************/

#ifndef _CREATE_APPLNT_
#define _CREATE_APPLNT_

int insert_appl_history (char *application_id, char *,void * ctx);
int update_appl_info(CREATE_APPLNT_REQ_T *, int,void * ctx);
int insert_appl_proc_recs(APPL_PROC_T *, char *, int,void * ctx );
int insert_txn_recs(APPL_TXN_T *, char *, int, int *,void * ctx);
int insert_txn_fees(APPL_TXN_FEE_T *, HEADER_T , int ,void * ctx);
int insert_outstand_fee_info(APPL_OUTSTAND_TXN_FEE_T *, HEADER_T, int, char *,void * ctx);
int insert_fee_reduce_info(APPL_FEE_REDUCTION_T *, char *, int ,void * ctx);
int insert_doc_srno_info(APPL_DOC_SRNO_T *, char *, int, char *,void * ctx);
int insert_sup_remarks(SUP_REMARKS_T *, char *, int ,void * ctx);
int insert_sponsor_details(SPONSOR_DETAILS_T *, char *, int ,void * ctx);
int insert_txn_summons(APPL_TXN_SUMMONS_T *, char *, int ,void * ctx);
int insert_card_status(CREATE_APPLNT_REQ_T *, char *, APPNT_JPN_INFO_T *,void * ctx);
int insert_into_appnt_info(APPNT_JPN_INFO_T *, CREATE_APPLNT_REQ_T *, int, int,void * ctx);
int insert_into_appnt_image(APPNT_JPN_IMG_T *, CREATE_APPLNT_REQ_T *,void * ctx);
int insert_into_appnt_jpj_info(CREATE_APPLNT_REQ_T *,void * ctx);
int insert_into_appnt_jpj_lic_info(char *, CREATE_APPLNT_REQ_T *,void * ctx);
int insert_new_lic_info(char *, TXN_DETAILS_T *,void * ctx);
int insert_imm_info(CREATE_APPLNT_REQ_T *, APPNT_PP_INFO_T *,void * ctx);
int fetch_txncode(char *, TXN_DETAILS_T** , int *,void * ctx);
int check_dl_info(char *, char * ,void * ctx);
int check_pp_info(char *, char* ,void * ctx);
int get_afis_flag(char *, char *,void * ctx);
int insert_into_card_blacklist(CREATE_APPLNT_REQ_T *, APPNT_JPN_INFO_T *,void * ctx);
int update_card_status(CREATE_APPLNT_REQ_T *,void * ctx);
int calculate_lic_validity_date(int , char *, char *,void * ctx);
int get_summons_agency(char *, char *, char *,void * ctx);
int update_appl_stat(char *, char ,void * ctx);
int perform_common_jpj_checks(CREATE_APPLNT_REQ_T *,int , char *,void * ctx);
int get_license_date_info(char *, char *, char , char *,LICENSE_DATE_INFO_T *,void * ctx);
int check_problem_record(char *, int *,void * ctx);
int update_disputed_info(char *,void * ctx);
int insert_into_legacy_request(LEGACY_REQUEST_T,void * ctx );
int call_jpn_update(CREATE_APPLNT_REQ_T *,void * ctx);
//int call_jpj_update(CREATE_APPLNT_REQ_T *,void * ctx);
int call_jpj_update(CREATE_APPLNT_REQ_T *,int,void * ctx);
int call_imm_update(CREATE_APPLNT_REQ_T *,void * ctx);
int call_pdrm_summon_upd(CREATE_APPLNT_REQ_T *,void * ctx);
int call_afis_update(CREATE_APPLNT_REQ_T *,void * ctx);
int update_agency_on_chip(char *, char *, HEADER_T,void * ctx);
int insert_jpj_summons(APPNT_JPJ_SUMMONS_T *, char *, int,void * ctx);
int insert_lic_revok_info(APPNT_LIC_REVOKE_T *, char *, int,void * ctx);
int insert_lic_susp_info(APPNT_LIC_SUSP_T *, char *, int,void * ctx);
int insert_pdrm_summons(APPNT_PDRM_SUMMONS_T *, char *, char *, int,void * ctx);
int get_appl_status(char *, char *,char *,void * ctx);
int upd_old_txn_pay_info(APPL_OLD_TXN_PAY_T *, char *, int,void * ctx);
int get_agency_on_chip(char *, char *,void * ctx);
int insert_old_appl_history(APPL_HISTORY_T *, char *, char *, int , char *, char,void * ctx);
int delete_old_class(char *, TXN_DETAILS_T *, int*,void * ctx);
int set_card_expiry_date(char *, char *, int, char *,void * ctx);
int chk_appl_status(char *kptno, char* applid,void * ctx);
int insert_abt_list(ABT_LIST_T abt_lst,void * ctx);

/* added for IJPN*/

int insert_appl_missed_opex(APPL_MISSED_OPEX_T *, char * ,void * ctx);
int insert_jpn_info(JPN_INFO_T *,void * ctx);
int insert_jpn_sb_info(JPN_SB_INFO_T *,void * ctx);
int insert_into_outstand_txn_fee_table(OUTSTAND_TXN_FEE_T *, char *, int,void * ctx );

int appnt_jpj_and_lic_info(CREATE_APPLNT_REQ_T *,void * ctx); // added this on 21/12/2006

int update_cardstatus_to_retained(CREATE_APPLNT_REQ_T *,void * ctx); //JRS-108 added this on 18/12/2007


// Added these 5 functions for JPJ JAVA changes on 26/03/2015
int  insert_into_appnt_jpj_licsync(CREATE_APPLNT_REQ_T *,void * ctx); // added this on 26/03/2015

int change_renewsub_flag(char *, void * ctx);  // added this on 07/04/2015
int change_owner_idtokpt_flag(char *, void * ctx);  // added this on 07/04/2015
int change_owner_idcat_flag(char *, void * ctx);  // added this on 07/04/2015
int change_owner_name_flag(char *, void * ctx);  // added this on 07/04/2015

int  insert_into_ijpn_jpj_updreq(CREATE_APPLNT_REQ_T *, int , void * ctx); // added this on 07/04/2015


//extern "C" int LogoutFromOracle(void * ctx);
//extern "C" int LoginToOracle(void **ctx);

#ifdef DEBUG
void print_request(CREATE_APPLNT_REQ_T *req);
#endif

#endif /* ifndef _CREATE_APPLNT_ */



