/****************************************************************************/
/* Filename		:  jpj_update_io.h											*/
/*																			*/
/* Author		:  Vaibhav       											*/
/*																			*/
/* Description	:  Contains the I/O structures for the JPJ_UPDATE service	*/
/*				   															*/
/****************************************************************************/

#ifndef _JPJ_UPDATE_IO_
#define _JPJ_UPDATE_IO_

/* JPJ UPDATE Request Buffer */
typedef struct jpj_update_request_s
{
	HEADER_T header;
	char invoke_mode;

} JPJ_UPDATE_REQ_T;

/* JPJ UPDATE Response Buffer */
typedef struct jpj_update_response_s
{
	HEADER_T header;
} JPJ_UPDATE_RESP_T;

#endif

