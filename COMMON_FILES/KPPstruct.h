/*$Header:   F:/PVCS_GMPC/archives/GSCB_SERVICES/COMMON_FILES/KPPstruct.h-arc   1.0   Aug 20 2003 09:54:28   ShivamP  $*/
/********************************************************************/
/* File Name	:KPPstruct.h										*/
/* Author		:Vageesh Patwardhan									*/
/* Description	:Contains all structs used in KPP*Gate Interface	*/
/********************************************************************/

#ifndef _KPPSTRUCT_
#define _KPPSTRUCT_

/********************************************************************/
/* Structs for acutal MQSeries messages								*/
/********************************************************************/
typedef struct replyheadertyp
{
	unsigned char		reply_indicator;
	char				reply_msg[160];
	char				filler[200];
} REPLY_HEADER_T;


/* Header for all messages to be sent to KPP*Gate */
typedef struct msgheadertyp
{
	char				msg_class;
	unsigned char		msg_type;
	char				request_id[24];
	unsigned char		agency_id;
	char				msg_create_date[8];
	char				msg_create_time[6];
	char				branch_code[8];
	char				trans_mode;
	char				trans_code[6];
	char				oper_id[8];
	char				trans_date[8];
	char				trans_time[6];
	unsigned char		trans_machine;
	char				ref_date[8];
	char				ref_time[6];
	unsigned char		ref_machine;
	char				amount_counter[5];
	char				amount_length[6];
	unsigned char		send_to_AFIS;
	unsigned char		AFIS_matching;
	char				msg_no[3]; /* to be used only for Lookup table download*/
	char				msg_total[3]; /* to be used only for Lookup table download*/
	char				filler[112];
	char				filler_GSCB[200];
	REPLY_HEADER_T		reply_header;

} MSG_HEADER_T;

/* Structrue for financial data*/
typedef struct fin_data 
{
	unsigned char pay_mode;
	unsigned char amt_type;
	char revenue_code[8];
	char amt_value[8];
} FIN_DATA_T;


/********************************************************************/
/* Structs for MQSeries Interface APIs								*/
/********************************************************************/

/********************************************************************/
/* Input structures for li_put_dll									*/
/********************************************************************/

typedef struct li_put_header
{
	unsigned char  msg_type; /* One of the message type #defined in kppdef.h */
	char trans_code[TRANS_CODE_SIZE]; /* One of the KPP*Gate trans code 20xxxx*/
	char gsc_no[LEGACY_BRANCH_CODE_SIZE];
	char user_id[USER_ID_SIZE];
	char workstation_id[WS_ID_SIZE];
	unsigned char agency_id;
	unsigned char send_to_AFIS;
	char trans_date[DATE_SIZE];
	char trans_time[TIME_SIZE];
	char refer_date[DATE_SIZE];		/* New requirement - added on 10/07/2001 */
	char refer_time[TIME_SIZE];		/* New requirement - added on 10/07/2001 */

} LI_PUT_HEADER_T;

typedef struct li_put_var_data
{
	long len;
	unsigned char *data;
} LI_PUT_VAR_DATA_T;

typedef struct li_put_fin_data
{
	int counter;
	long len;
	FIN_DATA_T *fin_data; /* Pointer to the first struct of FIN_DATA_T type */
						  /* to be made NULL if no fin data is being passed */	
} LI_PUT_FIN_DATA_T;

/********************************************************************/
/* Structs for li_get_dll											*/
/********************************************************************/

typedef struct li_get_header
{
	char trans_code[TRANS_CODE_SIZE]; /* One of the KPP*Gate trans code 20xxxx*/
	unsigned char msg_id[MSG_ID_SIZE];
	long wait_time;
} LI_GET_HEADER_T;




/********************************************************************/
/* Structures for the _p functions									*/
/********************************************************************/
typedef struct put_header
{
	char gsc_no[LEGACY_BRANCH_CODE_SIZE];
	char user_id[USER_ID_SIZE];
	char workstation_id[WS_ID_SIZE];
	int transaction_type;
	char trans_date[DATE_SIZE];
	char trans_time[TIME_SIZE];
} LI_P_HEADER_T;


/********************************************************************/
/* Structures for the _g functions									*/
/********************************************************************/
typedef struct get_header
{
	unsigned char msg_id[MSG_ID_SIZE];
	long reply_buffer_size;
	long wait_time;
	int transaction_type;
} LI_G_HEADER_T;

/* New strcuture to be used for Reversal messages */
/* New requirement - added on 10/07/2001 */
typedef struct refer_timestamp_s
{
	char refer_date[DATE_SIZE];		
	char refer_time[TIME_SIZE];		

} LI_REFER_TIMESTAMP_T;


#endif /* _KPPSTRUCT_ */

