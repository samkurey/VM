/* $Header:    */
/********************************************************************************/
/* Filename    : jpn_status_upd.h										*/
/* Author      : Srinivasa Reddy												*/
/* Description : This file contains the #defines and structures for service		*/
/*				 JPN_STATUS_UPD.													*/
/********************************************************************************/
#include "jpn_status_upd_io.h"
#include "KPPstruct.h"


#ifndef _JPN_STATUS_UPD_
#define _JPN_STATUS_UPD_

/* # defines	*/
#define PROG_LOG_SIZE		sizeof(PROG_ACCESS_LOG_T)
#define APPL_EXCEP_LOG_SIZE sizeof(APPL_EXCEP_LOG_T)
#define TXN_LOG_SIZE		sizeof(TXN_LOG_T)



/* Function Prototypes	*/

int update_gmpc_status_to_host(JPN_STATUS_UPD_REQ_T *req, int msgid, char request_flag,LI_P_HEADER_T hdr,void * ctx);
int get_appl_date(char *, char *, int,void * ctx);
int get_appl_machine(char *, char *, char *, int ,void * ctx);
int delete_legacy_req(char *, int, char, char,void * ctx);
int insert_legacy_req(int *msgid, JPN_STATUS_UPD_REQ_T *, char, int, char,void * ctx);
int Jpn_Status_Upd(JPN_STATUS_UPD_REQ_T *pReq, void * ctx);





#endif	/* ifndef _JPN_STATUS_UPD_	*/
