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

	//samsuri todo: add data for new table USK_COMPOUND_FEE
	char  uskApplid[APP_ID_SIZE];
	char idType[ID_TYPE_SIZE]; //3
	char idNo[ID_NUMBER2_SIZE]; //13
	char gmpcName [101];
	char feeType[FEE_TYPE_SIZE]; //4
	char lostReasonCode[3];
	int cardLostCount;
	float uskOrigAmt;
	float uskReduction;
	float uskPayAmt;
	int uskagencyRevCode;
	char uskRemark[501];
	char uskUserID[USER_ID_SIZE]; //9
	char uskWsId[4];
	char uskDateTime[DATE_TIME_SIZE + 4];
	float panelReduction;
	float panelPayment;
	char panelRemark[501];
	char panelUserId[USER_ID_SIZE];
	char panelWsId[4];
	char panelDateTime[DATE_TIME_SIZE + 4];
	char paymReceipt[RECEIPT_SIZE];
	char collBranch[7];
	char paymDateTime[DATE_TIME_SIZE + 4];

	//outstand_txn_fee
	int OutStandTxnSerNo;
	char OutStandFeeType[FEE_TYPE_SIZE]; 
	float OutStandFeeAmt;
	int OutStandAgencyRevnCode;
	char OutStandSendGSC[2]; 

} JPNHG3_PYMT_REV_UPD_REQ_T;


/* resp buffer */
typedef struct jpnhg3_pymt_rev_upd_resp_s
{
	HEADER_T header;
	
	
} JPNHG3_PYMT_REV_UPD_RESP_T;




#endif /* #ifndef _JPNHG3_PYMT_REV_UPD_IO_	*/
