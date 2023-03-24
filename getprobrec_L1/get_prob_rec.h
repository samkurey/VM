/* $Header:   F:/GSCBProjectDb/archives/CIS/GSCB/GET_PROB_REC/get_prob_rec.h-arc   1.0   Jul 18 2001 17:23:36   DeshpaA  $ */
/************************************************************************/
/* Filename    : get_prob_rec.h										*/
/* Author      : Abhijeet Deshpande										*/
/* Description : This file contains #defines and function prototypes of	*/
/*				 functions for the service GET_PROB_REC.				*/
/************************************************************************/

#include "get_prob_rec_io.h"

#ifndef _GET_PROB_REC_
#define _GET_PROB_REC_

/*#defines*/
#define IMAGE_FILE_NAME		33

/* Function headers */
int get_other_gsc_problem_recs(char lappl_id[20], OTHER_GSC_PROBLEMS_T *, char *,int *other_gsc_flag,void * ctx);

int get_appl_missed_opex_rec(char lappl_id[20],APPL_MISSED_OPEX_T *appl_missed_opex,int *appl_missed_opex_flag,void * ctx);

int get_prob_count(char lappl_id[20], int *,void * ctx);

int get_probl_record_recs(char lappl_id[20], PROBL_RECORD_T *prob_details,void * ctx);

int check_id_type(char *id_type,void * ctx);

//int update_probl_record(char *appl_id,char updstat,void * ctx);
int update_probl_record(char *appl_id, char *sscBranch, char updstat, void * ctx);

int get_addr_info_rec(char *, ADDRESS_INFO_T *,int *addr_info_flag, void * ctx);

int get_appl_txn_rec(char *, APPL_TXN_FEE_T *, int fee_cnt, void * ctx);

int get_outstand_txn_rec(char *, OUTSTAND_TXN_FEE_T *, int fee_cnt, void * ctx);

int get_outstand_txn_rec(char *appl_id, OUTSTAND_TXN_FEE_T *outstand_txn, int fee_cnt, void * ctx);

int get_time_ver_rec(char *appl_id, TIME_VERSION_T *time_version,  void * ctx);

#ifdef TESTING
	void store_images_in_file(char *, unsigned char *, long , long );
#endif


/* Global variables */
PROG_ACCESS_LOG_T prog_log;
APPL_EXCEP_LOG_T excep_log;
TXN_LOG_T tran_log;
GET_PROB_REC_RESP_T *glp_resp;
char *glp_list_prob_appl;
int glv_no_of_prob_appl;

#endif /* ifndef _GET_PROB_REC_ */
