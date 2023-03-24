/* $Header:   F:/GSCBProjectDb/archives/source/LegacyInterface/li_update_gmpc_stat.h-arc   1.2   Oct 23 2000 12:21:50   PatilBB  $ */
/********************************************************************/
/* File Name   : li_update_gmpc_stat.h								*/
/* Author      : Vageesh Patwardhan				                    */
/* Description : This file contains io structures requried for		*/
/*				 li_update_gmpc_stat_p								*/
/********************************************************************/

#ifndef _LI_UPDATE_GMPC_STAT_
#define _LI_UPDATE_GMPC_STAT_

//#include "newdef.h"

/* Structs for li_update_gmpc_stat_p */
typedef struct li_update_gmpc_stat_req
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
	char appln_stat2;
	char indicator1[AGENCY_SIZE];
	char appl_no[LEGAPPLID_SIZE];
	char probl_reason_code[REASON_CODE_SIZE];

	char  indicator2; // APPLICATION.applpriority included on 27/09/05 for IJPN
	char  transaction_code[LEGTXNCODE_SIZE]; // appl_txn.legtxncode included on 27/09/05 for IJPN
	char  bundleid[BATCHNO_SIZE];  // included on 28/10/05 for IJPN

	char  ijpn_gmpc_ind;  // added on 25/01/06 for IJPN
	char  telephone_no[CONTACTNO_SIZE];   // added on 18/04/06 for IJPN
	char  personlised_date[DATE_SIZE];    // added on 10/05/06 for IJPN

	int   applpriority;     // added this on 30/01/07


	//Added by Salmi Date: 23th Mar,2020  Added new field id, CRAPPL-  SKP002/CR/2020
	char  approval_status; 
	char  user1[USER_ID_SIZE];
	char  user1_kptno[KPT_SIZE];
	char  remark[201];
	//Added by Salmi Date: 23th Mar,2020  Added new field id, CRAPPL-  SKP002/CR/2020-End
    char  jkind; //Added by Salmi Date 12 Apr, 2021 MyKas Tamat Tempoh
	//char appln_type[APPLN_TYPE_SIZE]; // removed as per the IJPN requirement
	/*char doc_type[DOC_TYPE_SIZE];*/ /* Removed as per HTP MOM dt 14th June 2000 */

	/*char collection_gsc_no[LEGACY_BRANCH_CODE_SIZE];
	char collection_date[DATE_SIZE]; */ // removed as per the IJPN requirement

	/*char issuance_staff_id[USER_ID_SIZE];
	char issuance_date[DATE_SIZE]; */ // removed as per the IJPN requirement

	//added by samsuri on 8 aug 2022
	int  lostcntneg;    
	int  lostcntcrime;  
	int  lostcntdis;    
	
} LI_UPDATE_GMPC_STAT_REQ_T;

#if defined(__cplusplus)
extern "C" {
#endif

/* Function prototype */
int li_update_gmpc_stat_p(LI_P_HEADER_T header, 
						   LI_UPDATE_GMPC_STAT_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
						   int *iReplyMsgLen,
						   char *sErrMessage
						   );

#if defined(__cplusplus)
}
#endif

#endif
