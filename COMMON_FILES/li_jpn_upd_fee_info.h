/*$Header$*/
/****************************************************************/
/* File Name   : li_jpn_upd_fee_info.h							*/
/* Author      : Srinivasa Reddy							    */
/* Description : This file contains io structures requried for	*/
/*				 									            */
/****************************************************************/


#ifndef _LI_JPN_UPD_FEE_INFO_
#define _LI_JPN_UPD_FEE_INFO_


/* input buffer */
typedef struct li_upd_fee_info_req_s
{
	char  kptno[KPT_SIZE];
	/*
	float amtkh;
	float amtpr;
	float amthg;
	float amtkl;
	float amtrk;
	float amtpf;
	float amtaf;
	*/
	char  amtkh[FEE_SIZE];
	char  amtpr[FEE_SIZE];
	char  amthg[FEE_SIZE];
	char  amtkl[FEE_SIZE];
	char  amtrk[FEE_SIZE];
	char  amtpf[FEE_SIZE];
	char  amtaf[FEE_SIZE];
	char  apprdate[DATE_SIZE];
	char  apprrefno[APPRREFNO_SIZE];
	char  jpnremarks1[JPNREMARKS1_SIZE];
	char  jpnremarks2[JPNREMARKS2_SIZE];
	
	// Added these 3 fields on 07/09/2010 for CR 201
	char legapplid[LEGAPPLID_SIZE];
	char branchcodejpn[COLLJPNBRANCHCODE_SIZE];
	char legtxncode[LEGTXNCODE_SIZE+2];

}LI_UPD_FEE_INFO_REQ_T;


/* Function prototype */

/* fee information */
int li_jpn_upd_fee_info_p(LI_P_HEADER_T header, 
						  LI_UPD_FEE_INFO_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
						   int *iReplyMsgLen,
						   char *sErrMessage);



#endif
