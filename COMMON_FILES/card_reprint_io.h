/* $Header $ */

/****************************************************************/
/* Filename    :  card_reprint_io.h								*/
/* Author      :  Amit Sangrulkar       						*/
/* Description :  Card Reprint Service Input Output Structures	*/
/****************************************************************/

#ifndef _CARD_REPRINT_IO_
#define _CARD_REPRINT_IO_


/* Request buffer for CARD_REPRINT service */
typedef struct card_reprint_request_s
{
	HEADER_T header;
	/* The no below indiactes the number of CARD_REPRINT_INFO_T structures */
	/* followed. no_of_cards will be zero when batch is passed */
	int no_of_cards; 
	char batch[BATCH_NO_SIZE]; 
}CARD_REPRINT_REQ_T;

/* Dynamic structures following the request buffer */
typedef struct card_reprint_info_s
{
	char gmpc_id[KPT_SIZE];

}CARD_REPRINT_INFO_T;

typedef struct card_reprint_response_s
{
	HEADER_T header;

}CARD_REPRINT_RESP_T;


#endif
