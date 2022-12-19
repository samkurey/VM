/*$Header$*/
/********************************************************************/
/* File Name   : li_upd_mykid_issuance.h									*/
/* Author      : Srinivasa Reddy							                    */
/* Description : This file contains io structures requried for		*/
/*				 									             */
/********************************************************************/

#ifndef _LI_UPD_MYKID_ISSUANCE_IO_
#define _LI_UPD_MYKID_ISSUANCE_IO_

#include "gscbdef.h"

/* input structure to receive li_upd_mykid_issuance_req */
typedef struct li_upd_mykid_issu_req_s
{
	char kptno[KPT_SIZE];
	char kptapplstat;
	char user_id[USER_ID_SIZE]; // status_upd_operator_id
	int  cardlostcnt; 
	char timestamp[DATE_SIZE]; // mykid_collection_date
	char coll_place_code[COLLJPNBRANCHCODE_SIZE];	// colljpnbrnachcode
	char tparty_idno[16];
	char tparty_idtype[ID_TYPE_SIZE];
	char tparty_currlongname[CURRLONGNAME_SIZE];
	char tparty_relationcode[RELATIONCODE_SIZE];

	char appl_no[LEGAPPLID_SIZE]; // included on 27/09/05 for IJPN

}LI_UPD_MYKID_ISSU_REQ_T;

#if defined(__cplusplus)
extern "C" {
#endif

int li_upd_mykid_issu_p(LI_P_HEADER_T header,
						  LI_UPD_MYKID_ISSU_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
							int *iReplyMsgLen,
							char *sErrMessage);



#if defined(__cplusplus)
}
#endif

#endif 

