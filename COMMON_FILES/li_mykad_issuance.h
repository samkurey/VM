/* $Header:   F:/GSCBProjectDb/archives/source/LegacyInterface/li_update_gmpc_stat.h-arc   1.2   Oct 23 2000 12:21:50   PatilBB  $ */
/********************************************************************/
/* File Name   : li_mykad_issuance.h								*/
/* Author      : Srinivasa Reddy				                    */
/* Description : This file contains io structures requried for		*/
/*				 li_mykad_issuance_p								*/
/********************************************************************/

#ifndef _LI_MYKAD_ISSUANCE_
#define _LI_MYKAD_ISSUANCE_


/* Structs for li_mykad_issuance_p */
typedef struct li_mykad_issuance_req
{
	char appnt_kpt[KPT_SIZE];
	char appln_stat;
	char appln_date[DATE_SIZE];
	char appln_gsc_no[LEGACY_BRANCH_CODE_SIZE]; // application branch code
	char appln_staff_id[USER_ID_SIZE];
	char gmpc_pc_date[DATE_SIZE];
	int  gmpc_version_no;
	char jpnremarks1[REMARK_SIZE];
	char jpnremarks2[REMARK_SIZE];
	char card_lost_count[CARD_LOST_COUNT_SIZE];
	char indicator1[AGENCY_SIZE];
	char appl_no[LEGAPPLID_SIZE];

	char tidno[ID_SIZE];
	char tidtype[ID_TYPE_SIZE];
	char tname[CURRLONGNAME_SIZE];
	char trelationcode[RELATIONCODE_SIZE];

	char  ijpn_gmpc_ind;  // added on 25/01/06 for IJPN
	char paid_fee[FEE_SIZE]; // payment_info.paybleamt  added on 13/04/2010

	int  lostcntneg;    // added this filed on 19/02/2014 for CR 284.
	int  lostcntcrime;  // added this filed on 19/02/2014 for CR 284.
	int  lostcntdis;    // added this filed on 19/02/2014 for CR 284.

	char lostcompoundfee[FEE_SIZE]; // appl_txn_fee.feeamt  added on 15/11/2014
	char collcenter[COLLJPNBRANCHCODE_SIZE];  // application.collcenter (8digit) added on 15/11/2014
	char additional_fee[FEE_SIZE]; // added on 16/08/2016 for Rease 3.32 CR 293

} LI_MYKAD_ISSUANCE_REQ_T;



/* Function prototype */
int li_mykad_issuance_p(LI_P_HEADER_T header, 
						   LI_MYKAD_ISSUANCE_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
						   int *iReplyMsgLen,
						   char *sErrMessage
						   );

#endif
