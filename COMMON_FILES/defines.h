/******************************************************************
 *	FILE		:	defines.h
 *	DESCRIPTION	:	Header file containing #defines for variable sizes
 *	DATE		:	16 May 2000
 *  AUTHOR		:	Ananth, Rajendran, Arun
 ********************************************************************/

#ifndef _DEFINES_H
#define _DEFINES_H

#define SETLEN(x) x.len = strlen((char *)x.arr)
#define SETNULL(x) x.arr[x.len] = 0

#define EV_MSG_SIZE				101
#define SQL_QUERY_SIZE			10000
#define ERRMSG_SIZE				11000
#define LOG_ERROR_MSG_SIZE		500
#define SERVICE_NAME_SIZE		16

#define MAX_DEBTORS				25
#define MAX_PAYIN_SLIPS			25
#define MAX_COLL_STATS			10
#define AMT_NOTCONFIRM			1
#define NO_DATA_CONF			701

#define GSCB_SENDER_ID			100
#define GSCB_RECEIVER_ID		101

#define LOG_TIME_SIZE			9

#define EXACT_MINUTIAE_SIZE		512

#define	LEGACY_TYPE_SIZE		4

/* #defines required for QC */
#define GET_SUMMONS_ID	 5
#define QC_GMPC_CHECK	'0'
#define QC_JPN_ID		'1'
#define QC_JPJ_ID		'3'
#define QC_JIM_ID		'6'
#define QC_PDRM_ID		'7'
#define QC_SUMMONS_ID	'5'

/* Special values for GQD Module types */
#define GQD_WITH_AFIS_IMAGES 'Y'
#define GQD_NO_AFIS_IMAGES 'Z'

/* Include other .h files. Do not change the sequence of the include files */
#include "gscbdef.h"
#include "errordefines.h"
#endif
