/* $Header:   F:/GSCBProjectDb/archives/source/LegacyInterface/li_update_gmpc_stat.h-arc   1.2   Oct 23 2000 12:21:50   PatilBB  $ */
/********************************************************************/
/* File Name   : li_update_gmpc_stat.h								*/
/* Author      : Vageesh Patwardhan				                    */
/* Description : This file contains io structures requried for		*/
/*				 li_update_gmpc_stat_p								*/
/********************************************************************/


#ifndef _LI_CANCEL_GMPC_UPDATE_
#define _LI_CANCEL_GMPC_UPDATE_

/* Structs for li_cancel_gmpc_update_req */

typedef struct li_cancel_gmpc_update_req
{
	char appnt_kpt[KPT_SIZE];
	int  gmpc_version_no;
	char card_lost_count[CARD_LOST_COUNT_SIZE];
	ADDRESS_T	address;

	char last_changed_date[DATE_SIZE];
	//char cancel_trx_date[DATE_SIZE]; // commented and removed for IJPN on 26/04/2005
	//char cancel_txn_code[TXNCODE_SIZE]; //remarked by samsuri on 23 aug 2022
	char appl_no[LEGAPPLID_SIZE]; // Added for IJPN on 26/04/2005

	int  lostcntneg;    // added this filed on 27/02/2014 for CR 284.
	int  lostcntcrime;  // added this filed on 27/02/2014 for CR 284.
	int  lostcntdis;    // added this filed on 27/02/2014 for CR 284.
	int  approval_status; //Added by Salmi Date: 23th Mar,2020  Added new field id, CRAPPL-  SKP002/CR/2020	

	
} LI_CANCEL_GMPC_UPDATE_REQ_T;


/* Function prototype */
int li_cancel_gmpc_update_p(LI_P_HEADER_T header, LI_PUT_FIN_DATA_T put_fin_data,
						   LI_REFER_TIMESTAMP_T refer_timestamp,
						   LI_CANCEL_GMPC_UPDATE_REQ_T req,						   
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
							int *iReplyMsgLen,
							char *sErrMessage
						   );


#endif
