#ifndef __GSC_REVERSE_PAY_H__
#define __GSC_REVERSE_PAY_H__

#define			SUMMON_CNT_SIZE				3
#define			PDRM_ERROR_CODE_SIZE		5

typedef struct pdrm_header_t
{
	char user_id[USER_ID_SIZE];
	char workstation_id[WS_ID_SIZE];
	char branch_code[BRANCH_CODE_SIZE];
}PDRM_HEADER_T;

/* Input buffer for GSC_REVERSE_PAYMENT service */
typedef struct 
{
	char receipt_district[SUMM_DIST_SIZE];
	char receipt_ind;
	char receipt_serial[RECEIPT_SIZE];
	char summons_district[SUMM_DIST_SIZE];
	char summons_device[DEVICE_SIZE];
	char summon_type;
	char summon_serial[SUMMONS_NUMBER_LEN];
	char kpt_no[KPT_SIZE];
}GSC_REVERSE_PAY_T;


typedef struct
{
	PDRM_HEADER_T pdrm_header;
	char no_summons[SUMMON_CNT_SIZE];
}GSC_REVERSE_PAY_REQ_T;

typedef struct
{
	PDRM_HEADER_T pdrm_header;
	char error_code[PDRM_ERROR_CODE_SIZE];
}GSC_REVERSE_PAY_RESP_T;

#endif //__GSC_REVERSE_PAY_H__
