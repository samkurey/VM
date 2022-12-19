#ifndef _GSC_PAY_SUMMON_IO_
#define _GSC_PAY_SUMMON_IO_

#define SUMMON_CNT_SIZE		3

typedef struct pdrm_header_t
{
	char user_id[USER_ID_SIZE];
	char workstation_id[WS_ID_SIZE];
	char branch_code[BRANCH_CODE_SIZE];
}PDRM_HEADER_T;

/* Input buffer for GSC_PAY_SUMMON service */

typedef struct summons_info_s
{
	char cad_serial[PDRM_CAD_SR_SIZE];    /* CAD at which payment is made */           
    char receipt_ind;              
    char receipt_serial[RECEIPT_SIZE];          
    char summons_district[SUMM_DIST_SIZE];         
    char summons_device[DEVICE_SIZE]; /* Summons issuing CAD */           
    char summon_type;              
    char summon_serial[SUMMONS_NUMBER_LEN];           
    char collection_date[DATE_SIZE];          
    char amount[COMPOUND_SIZE];                   
    char collection_type[COLLECTION_TYPE_SIZE];          
    char mode_payment;             
    char db_cr_card[DB_CR_CARD_SIZE];              
    char approval_code[APPROVAL_CODE_SIZE];            
    char credit_card_expiry_date[PDRM_EXP_DT_SIZE];  


} SUMMONS_INFO_T;

typedef struct gsc_pay_summon_req_s
{                      
        PDRM_HEADER_T	pdrm_header;          
		/* The number below indicates the no of structures of type */
		/* SUMMONS_INFO_T followed by							   */
		char summons_no[SUMMON_CNT_SIZE];
        
} GSC_PAY_SUMMONS_REQ_T;              

/* Output buffer for GSC_PAY_SUMMON service */

typedef struct gsc_pay_summon_resp_s
{                      
    PDRM_HEADER_T	pdrm_header;     
	char error_code[ERROR_CODE_SIZE];

}GSC_PAY_SUMMONS_RESP_T;        


#endif /* _GSC_PAY_SUMMON_IO_ */
