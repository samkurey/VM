/* $Header:   $ */
/********************************************************************************/
/* Filename    : jpnhg3_pymt_rev_upd_io.h								    	*/
/* Author      : Srinivasa Reddy											    */
/* Description : This file contains the structures for I/O buffers for the		*/
/*				 service JPNHG3_PYMT_REV_UPD.							    	*/
/********************************************************************************/



#ifndef _JPNHG3_PYMT_REV_UPD_IO_
#define _JPNHG3_PYMT_REV_UPD_IO_



/* req buffer */
typedef struct jpnhg3_pymt_rev_upd_req_s
{
	HEADER_T header;
	char  applid[APP_ID_SIZE];
	char  oldapplid[APP_ID_SIZE];
	char  kptno[KPT_SIZE];
	float origamt;
	float paidamt;
	char  txncode[TXN_CODE_SIZE];
	char  legtxncode[LEG_TXNCODE_SIZE];
	char  txnserno;
	//char  agencyrevncode[AG_REV_CODE_SIZE];
	int   agencyrevncode;
	char  supvuid[8+1];
	char  supvremarks[150+1];
	char  problreasoncode[5+1];
	char  formname[60+1];
	char  userid[8+1];
	char  wsid[15+1];
	char  timestamp[17+1];
	char  indicator1[20+1];
	char  indicator2[20+1];

	//samsuri todo: add data for new table USK_COMPOUND_FEE -updated 16 feb 2023
	char  uskApplid[APP_ID_SIZE];
	char  uskOldApplid[APP_ID_SIZE];
	int  txnSerNo;
	char idType[ID_TYPE_SIZE]; //3
	char idNo[ID_NUMBER2_SIZE]; //13
	char gmpcName [151];
	int cardLostCount;	
	char lostReasonCode[3];
	float CF;
	char appealDate[DATE_TIME_SIZE + 4];
	char appealBranch[BRANCH_CODE_SIZE]; //7
	char appealUserID[USER_ID_SIZE]; //9
	char appealRemark[251];
	float appealPercent;
	float amtToPay;
	char appealStatus[26];
	char sscBranch[BRANCH_CODE_SIZE]; 
	char sscUserID[USER_ID_SIZE]; 
	char sscWsID[4]; 
	char sscDateTime[DATE_TIME_SIZE + 4];
	char sscRemark[251];
	char payReceipt[RECEIPT_SIZE];
	char payBranch[BRANCH_CODE_SIZE]; 
	char payUserID[USER_ID_SIZE]; 
	char payDateTime[DATE_TIME_SIZE + 4];

	//outstand_txn_fee
	int OutStandTxnSerNo;
	char OutStandFeeType[FEE_TYPE_SIZE]; 
	float OutStandFeeAmt;
	int OutStandAgencyRevnCode;
	char OutStandSendGSC[2]; 

	//samsuri added on 22 feb 2023
	//licclass - take from lostReasonCode table usk
	char prob_stat;
	char gUser1[USER_ID_SIZE];
	char gUser1TimeStamp[DATE_TIME_SIZE + 4];
	char gUser2[USER_ID_SIZE];
	char gUser2TimeStamp[DATE_TIME_SIZE + 4];
	//genkpt - icsc will update base on hv_amtToPay < 1


} JPNHG3_PYMT_REV_UPD_REQ_T;


/* resp buffer */
typedef struct jpnhg3_pymt_rev_upd_resp_s
{
	HEADER_T header;
	
	
} JPNHG3_PYMT_REV_UPD_RESP_T;




#endif /* #ifndef _JPNHG3_PYMT_REV_UPD_IO_	*/
