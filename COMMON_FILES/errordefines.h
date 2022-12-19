/******************************************************************
 *	FILE		:	errordefines.h
 *	DESCRIPTION	:	Header file containing #defines for error values
 *	DATE		:	16 May 2000
 *  AUTHOR		:	Monica Sethi
 ********************************************************************/

#ifndef _ERROR_DEFINES_H
#define _ERROR_DEFINES_H

#include "gscbdef.h"

#define SQL_ERR			sqlca.sqlcode != 0
#define SQL_NOTFOUND	sqlca.sqlcode == 1403

/* Error codes for logging */

#define TPALLOC_RESP_ERR			1001
#define TPALLOC_REQ_ERR				1002
#define SELECT_ERR					1003
#define INSERT_ERR					1004
#define UPDATE_ERR					1005
#define DELETE_ERR					1006
#define READ_REGISTRY_ERR			1007
#define OPEN_CURSOR_ERR				1008
#define STORE_PROC_ERR				1009
#define CONNECT_ERR					1010
#define ROLLBACK_ERR				1011
#define COMMIT_ERR					1012
#define MALLOC_ERR					1013
#define CLOSE_CURSOR_ERR			1014
#define FET_CURSOR_ERR				1015
#define TPINIT_ERR					1016
#define TPENQUEUE_ERR				1017
#define TPDEQUEUE_ERR				1018
#define TPALLOC_TPINIT_ERR			1019
#define TPBEGIN_ERR					1020
#define TPCOMMIT_ERR				1021
#define TPTRAN_ERR					1022

#define INVALID_SERV_ID				11026
#define REQDATA_ERR					11027
#define REQ_USER_ID_NULL			11028
#define REQ_WS_ID_NULL				11029

#define TP_NOMSG				0x0000000B
#define NO_ERR					0


#define REQ_PEND		'P'

/* REQ_SENT is also defined in gscbdef.h. so undefine it and redefine it */ 
#ifdef REQ_SENT 
#undef REQ_SENT
#endif

#define REQ_SENT		'S'
#define REQ_ERR			'E'
#define REQ_UPD			'U'
#define REQ_FAIL		'F'
#define REQ_RECV		'R'
#define REQ_COMPLETE	'C'

/* Error codes for event logging */

#define EV_SERV_SUCCESS		0x00000000
#define EV_INIT_ERR			0x10000000
#define EV_REG_ERR			0x01000000
#define EV_CONNECT_ERR		0x02000000
#define EV_OPEN_ERR			0x03000000
#define EV_FET_ERR			0x04000000
#define EV_CLOSE_ERR		0x05000000
#define EV_TPINIT_ERR		0x21000000
#define EV_TPENQUEUE_ERR	0x22000000

/* Error codes realted to Sender / Receiver. Not Used for Logging */
#define TUXEDO_ERROR		0x20000000
#define ORACLE_ERROR		0x30000000
#define OTHER_ERROR			0x40000000

/* Error codes for Initialise function */
#define ERR_READ_USER		1
#define ERR_READ_ACCOUNT	2
#define ERR_EVENT_REG		3

/* Error codes for OffLine Processing. Also defined in gscbdef, undefine it and redefine it */

#ifdef GSCB_DOWN
#undef GSCB_DOWN
#undef LEGACY_DOWN
#undef GSCB_UP
#undef LEGACY_UP
#endif

#define GSCB_DOWN		1
#define LEGACY_DOWN		2
#define GSCB_UP			0
#define LEGACY_UP		0

/* Error code to specify outstanding requests for application id */
#define PENDING_REQ_ERR				1
#define PHOTO_CAPTURE_PENDING		2
#define INVALID_APPLSTAT_ERR		3

#define NO_APPNT_JPN_INFO			11030
#define INVALID_LOW_RES_PHOTO_ERR	11031
#define INVALID_MIN_SIZE			11032

#endif		
