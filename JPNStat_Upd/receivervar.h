/******************************************************************
 *	FILE		:	receivervar.h
 *	DESCRIPTION	:	Header file containing variable declarations of GSCB_QC_SENDER
 *	DATE		:	2 June 2000
 *  AUTHOR		:	Monica Sethi
 ********************************************************************/

#ifndef _RECEIVERVAR_H
#define _RECEIVERVAR_H

#include "defines.h"
#include "gscbdef.h"
#include "gscblog.h"

#define NTUSER_SIZE	16

SERVICE_STATUS g_ReceiverStat;
SERVICE_STATUS_HANDLE g_ReceiverHdl;

char szUserName[NTUSER_SIZE];
DWORD dwNameSize = NTUSER_SIZE;
HANDLE hEvent;
PSID pSid = NULL;
DWORD dwSidSize = 0;
DWORD dwDomainNameSize = 0;
DWORD dwMsgSize;
SID_NAME_USE  eUse;
LPTSTR szDomainName ;
LPVOID szMsg = new char[20];

#endif
