/* $Header$ */
/********************************************************************/
/* File Name   : li_rev_add_new_class.h                                */
/* Author      : Amit Sangrulkar				                    */
/* Description : This file contains io structures required for		*/
/*				 li_rev_add_new_class_p								*/
/********************************************************************/

#ifndef _LI_REV_ADD_NEW_CLASS_
#define _LI_REV_ADD_NEW_CLASS_

typedef struct li_rev_class_s
{
	int class_index;
	char license_class[LIC_CLS_SIZE];
	char license_class_usage[CLASS_USAGE_SIZE];
	struct li_rev_class_s *next_class;

} LI_REV_CLASS_T;

/* Structs for li_rev_add_new_class_p */

typedef struct li_rev_add_new_class_req
{
	char license_id[LIC_ID_SIZE];
	char category_of_owner;
	char kpt_number[KPT_SIZE];
	char license_type[LIC_TYPE_SIZE];
	char handicapped_reg_no[HANDICAPPED_REG_NO_SIZE];
	char physical_restrict_cd;
	char rev_desc[JPJ_REVERSAL_DESC_SIZE];
	char lic_sr_no[SERIAL_NO_SIZE];
	LI_REV_CLASS_T *new_class;
	LI_REV_CLASS_T *existing_class;

} LI_REV_ADD_CLASS_REQ_T;

/* Function Prototypes */
int li_rev_add_new_class_p(LI_P_HEADER_T header, LI_REFER_TIMESTAMP_T refer_timestamp, 
					  LI_PUT_FIN_DATA_T put_fin_data,  LI_REV_ADD_CLASS_REQ_T req,
					  unsigned char *msg_id,
					  int *error_code,
					  unsigned char *pReplyMsg,
					  int *iReplyMsgLen,
					  char *sErrMessage
					  );

#endif /* _LI_REV_ADD_NEW_CLASS_ */


