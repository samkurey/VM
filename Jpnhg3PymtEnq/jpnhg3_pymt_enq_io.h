/* $Header:   $ */
/********************************************************************************/
/* Filename    : jpnhg3_pymt_enq_io.h									    	*/
/* Author      : Srinivasa Reddy											    */
/* Description : This file contains the structures for I/O buffers for the		*/
/*				 service JPNHG3_PYMT_ENQ.								    	*/
/********************************************************************************/



#ifndef _JPNHG3_PYMT_ENQ_IO_
#define _JPNHG3_PYMT_ENQ_IO_



/* req buffer */
typedef struct jpnhg3_pymt_enq_req_s
{
	HEADER_T header;
	char applid[APP_ID_SIZE];
	char kptno[KPT_SIZE];
	char indicator1[20+1];
	char indicator2[20+1];

} JPNHG3_PYMT_ENQ_REQ_T;


/* resp buffer */
typedef struct jpnhg3_pymt_enq_resp_s
{
	HEADER_T header;
	char  applid[APP_ID_SIZE];
	char  oldapplid[APP_ID_SIZE];
	char  collcenter[BRANCH_CODE_SIZE];
	float origamt;
	//char  agencyrevncode[AG_REV_CODE_SIZE];
	int agencyrevncode;
	char  name[80+1];
	char  address1[ADDRESS1_SIZE];
	char  address2[ADDRESS2_SIZE];
	char  address3[ADDRESS3_SIZE];
	char  postcode[POST_CODE_SIZE];
	int   citycode;
	char  statecode[STATECODE_SIZE];
	

	//added by samsuri - problem records data
	int  prob_no;
	char id_type[ID_TYPE_SIZE];
	char id_no[ID_SIZE];
	char prob_date[DATE_TIME_SIZE + 4];
	char reason_code[REASON_CODE_SIZE];
	int  reason_srno;
	char prob_stat;
	char prob_remarks[PROB_REMARK_SIZE];
	char prob_solve_date[DATE_TIME_SIZE + 4];
	char user_id[USER_ID_SIZE];
	char workstation_id[WS_ID_SIZE];
	char action_date[DATE_TIME_SIZE + 4];
	char action_remarks[PROB_REMARK_SIZE];
	char action_user_id[USER_ID_SIZE];
	char branch_code[BRANCH_CODE_SIZE];
	char txn_code[TRANSACTION_CODE_SIZE];
	char legacy_type[4];	
	char gscbupdflag;	
	char enqFlag;
	char genkpt;
	char bskrecd;
	char gUser1[9];
	char gUser1TimeStamp[DATE_TIME_SIZE + 4];
	char gUser2[9];	
	char gUser2TimeStamp[DATE_TIME_SIZE + 4];

	int usk_count;

	//outstand_txn_fee - added by samsuri on 21 mar 2023
	int OutStandTxnSerNo;
	// char OutStandFeeType[FEE_TYPE_SIZE]; 
	// float OutStandFeeAmt;
	// int OutStandAgencyRevnCode;
	// char OutStandSendGSC[2]; 	

} JPNHG3_PYMT_ENQ_RESP_T;

//samsuri todo: add data for new table USK_COMPOUND_FEE v2
typedef struct jpnhg3_usk_enq_resp_s
{
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

} JPNHG3_USK_ENQ_RESP_T;



#endif /* #ifndef _JPNHG3_PYMT_ENQ_IO_	*/
