/******************************************************************
 *	FILE		:	receiverfunc.h
 *	DESCRIPTION	:	Header file containing function prototpes for GSCB_RECEIVER
 *	DATE		:	2 June 2000
 *  AUTHOR		:	Monica Sethi
 ********************************************************************/

#include "DBSessions.h"	//For OLEDB

#ifndef _RECEIVERFUNC_H
#define _RECEIVERFUNC_H

VOID __stdcall GSCBReceiverHandler(DWORD Opcode);
VOID __stdcall QC_RECEIVER(DWORD argc, LPSTR* argv);
int Register_Event();
long Process_Responses(void * ctx);
char *ReplaceSingleQuote(char newString[]);


//#ifdef OFFLINE
//	long IsGscbUp();
//#endif //OFFLINE

#endif
