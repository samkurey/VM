/* $Header:   F:/GSCBProjectDb/archives/LegacyInterface/jpjmsg/rev_lic_renewal/li_rev_lic_renewal.h-arc   1.2   Feb 18 2002 15:45:38   ShivamP  $ */
/********************************************************************/
/* File Name   : li_rev_lic_renewal.h                                */
/* Author      : Amit sangrulkar				                    */
/* Description : This file contains io structures required for		*/
/*				 li_rev_lic_renewal_p								*/
/********************************************************************/

#ifndef _LI_REV_LIC_RENEWAL_
#define _LI_REV_LIC_RENEWAL_


/* Structs for li_rev_lic_renewal_p */

typedef struct li_rev_lic_renewal_req
{
	char license_id[LIC_ID_SIZE];
	char category_of_owner;
	char kpt_number[KPT_SIZE];
	char license_type[LIC_TYPE_SIZE];
	char validity_start_date[DATE_SIZE];
	char validity_end_date[DATE_SIZE];
	char old_start_date[DATE_SIZE];
	char old_end_date[DATE_SIZE];
	char prb_status; /* for PRB & CDL only */
	char rev_desc[JPJ_REVERSAL_DESC_SIZE];
	char lic_sr_no[SERIAL_NO_SIZE];
	char handicap_reg_no[HANDICAPPED_REG_NO_SIZE];
	char physiacl_restrict_code;
	char prb_stat_date[DATE_SIZE]; /* added on 03/01/2002 prb_stat_date */
	char prb_prev_stat;			   /* added on 03/01/2002 prb_previous_stat */
	char prb_reversal_stat;		   /* added on 03/01/2002 prb_reversal_stat */

	// Added these fields on 29/11/2011 for CR 242 Rel 3.23
	char lic_adj_ind;
	char feeadjamt[10];
	char feeadjperiod[4];
	char birthdate[9];

} LI_REV_LIC_RENEWAL_REQ_T;

/* Function Prototypes */
int li_rev_lic_renewal_p(LI_P_HEADER_T header, LI_REFER_TIMESTAMP_T refer_timestamp, 
					  LI_PUT_FIN_DATA_T put_fin_data, LI_REV_LIC_RENEWAL_REQ_T req,
					  unsigned char *msg_id,
					  int *error_code,
					  unsigned char *pReplyMsg,
					  int *iReplyMsgLen,
					  char *sErrMessage
					  );

#endif /* _LI_REV_LIC_RENEWAL_ */



