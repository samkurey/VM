/*$Header$*/
/********************************************************************/
/* File Name   : li_jpn_upd_citizenship_data_maint.h				*/
/* Author      : Srinivasa Reddy							        */
/* Description : This file contains io structures requried for		*/
/*				 									                */
/********************************************************************/


#ifndef _LI_JPN_UPD_CITIZENSHIP_DATA_MAINT_
#define _LI_JPN_UPD_CITIZENSHIP_DATA_MAINT_

/* input buffer */
typedef struct li_citizenship_data_req_s
{
	char kptno[KPT_SIZE];
	char unknownbirthind;
	char residentstat;
	char citizenship_status;
	char colourarticlecode[ARTICLE_COLOR_CODE_SIZE];
	int  cardlostcnt;	
	char orignameind;
	char jpnremarks1[JPNREMARKS1_SIZE];
	char jpnremarks2[JPNREMARKS2_SIZE];
	char iccolourcode;

	// Added these 3 fields on 07/09/2010 for CR 201
	char legapplid[LEGAPPLID_SIZE];
	char branchcodejpn[COLLJPNBRANCHCODE_SIZE];
	char legtxncode[LEGTXNCODE_SIZE+2];

	// added on 03 March 2014 for CR 284 and Release 3.27
	int lostcntcrime;
	int lostcntdis;
	int lostcntneg;
	// The following four fields added on 27/04/2017 for CR 326 Reease 3.35
	char requserid[USER_ID_SIZE];
	char reqkptno[KPT_SIZE];
	char reqtimestamp[DATE_TIME_SIZE];
	char apprvkptno[KPT_SIZE];

	
}LI_CITIZENSHIP_DATA_REQ_T;



/* Function prototype */

/* citizenship/residential data maintenance */
int li_jpn_upd_citizenship_data_p(LI_P_HEADER_T header, 
						  LI_CITIZENSHIP_DATA_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
						   int *iReplyMsgLen,
						   char *sErrMessage);


#endif
