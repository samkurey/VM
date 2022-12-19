/*$Header$*/
/***************************************************************/
/* File Name   : li_jpn_upd_ic_appl_info_maint.h			   */
/* Author      : Srinivasa Reddy							   */
/* Description : This file contains io structures requried for */
/*				 									           */
/***************************************************************/


#ifndef _LI_JPN_UPD_IC_APPL_INFO_MAINT_
#define _LI_JPN_UPD_IC_APPL_INFO_MAINT_


/* input buffer */
typedef struct li_ic_application_info_req_s
{
	char kptno[KPT_SIZE];
	//char orignameind; removed
	char afisflag; // AFIS Indicator
	int  cardversionno;
	char kptapplstat;
	char kptappldate [DATE_SIZE];	
	char batchno[BATCH_NO_SIZE];  // bundle id
	char cardissueddate[DATE_SIZE];
	char kptsenddate[DATE_SIZE];   // ic sent to branch date
	char jpnremarks1[JPNREMARKS1_SIZE];
	char jpnremarks2[JPNREMARKS2_SIZE];

	// Added these 3 fields on 07/09/2010 for CR 201
	char legapplid[LEGAPPLID_SIZE];
	char branchcodejpn[COLLJPNBRANCHCODE_SIZE];
	char legtxncode[LEGTXNCODE_SIZE+2];
	
}LI_IC_APPLICATION_INFO_REQ_T;



/* Function prototype */


/* IC application info maintenace */

#if defined(__cplusplus)
extern "C" {
#endif

int li_jpn_upd_ic_appl_info_p(LI_P_HEADER_T header, 
						  LI_IC_APPLICATION_INFO_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
						   int *iReplyMsgLen,
						   char *sErrMessage);

#if defined(__cplusplus)
}
#endif


#endif
