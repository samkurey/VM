/********************************************************************************/
/* Filename    : li_jpn_extupd_misl_payment.h											*/
/* Author      : 													            */
/* Description : This file contains the structures for I/O buffers for the		*/
/*				 li_jpn_extupd_misl_payment.	    								*/
/********************************************************************************/



#ifndef _LI_JPN_EXTUPD_MISL_PAYMENT_
#define _LI_JPN_EXTUPD_MISL_PAYMENT_


#define PROG_LOG_SIZE		sizeof(PROG_ACCESS_LOG_T)
#define APPL_EXCEP_LOG_SIZE sizeof(APPL_EXCEP_LOG_T)


			  
typedef struct li_jpn_extupd_payment_req_s
{
	char legapplid[LEGAPPLID_SIZE];     // appnt_jpn_extract.legapplid
	char special_fee[FEE_SIZE];    // appl_txn_fee.feetype
	char processing_fee[FEE_SIZE]; // appl_txn_fee.feetype
	char calculcated_compound_fee[FEE_SIZE];   // appl_txn_fee.feetype
	char comp_serno[RECEIPT_SIZE];      // payment_info.receiptno
	char paid_fee[FEE_SIZE];     // payment_info.paybleamt
	char renewal_compound[FEE_SIZE];
	char renewal_18_compound[FEE_SIZE];
	char lost_compound[FEE_SIZE];
	char card_expired_compound[FEE_SIZE];
	char damaged_compound[FEE_SIZE];	
	char additional_fee[FEE_SIZE];
	char extremarks[EXTREMARKS_SIZE];    // appnt_jpn_extract.remarks
	
}LI_JPN_EXTUPD_PAYMENT_REQ_T;


/* Function prototypes */

#if defined(__cplusplus)
extern "C" {
#endif

int li_jpn_extupd_misl_payment_p(LI_P_HEADER_T header, 
						  LI_JPN_EXTUPD_PAYMENT_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
						   int *iReplyMsgLen,
						   char *sErrMessage);

#if defined(__cplusplus)
}
#endif

#endif /* #ifndef LI_JPN_EXTUPD_MISL_PAYMENT	*/

