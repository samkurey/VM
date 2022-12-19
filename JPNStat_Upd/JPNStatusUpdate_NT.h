/********************************************************************/
/*	FILE		:	check_prob_rec.h								*/
/*	DESCRIPTION	:	Header file containing class declaration for	*/
/*					CHECK_PROB_REC									*/
/*	DATE		:	25 FEb 2005					    				*/
/*  AUTHOR		:													*/
/********************************************************************/

#ifndef _JPN_STATUS_UPDATE_NT_H
#define _JPN_STATUS_UPDATE_NT_H

#include "gscbdef.h"
#include "gscbio.h"

//Contains function defenitions for OLE DB.
#include "DBSessions.h"
#include "RowSetDefs.h"
#include "OleDBFunctions.h"

#define JPN_STATUS_UPD_NT		110


/////////////

class CJPNStatusUpdate {

//private:
	
		
	
public :
	CJPNStatusUpdate();
	~CJPNStatusUpdate();

	
	

	



};

VOID __stdcall JPNStatusUpdateHandler(DWORD Opcode);
VOID __stdcall JPNStatusUpdate(DWORD argc, LPSTR* argv);


#endif
