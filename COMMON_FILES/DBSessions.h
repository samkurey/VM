/********************************************************************/
/*	FILE		:	DBSessions.cpp									*/
/*	DESCRIPTION	:	Defenition of class CDBSessions					*/
/*					for OLEDB interface								*/
/*	AUTHOR		:	Amarjith										*/
/********************************************************************/

//Added for OLE DB 
#include <windows.h>
#include <oledb.h>
#include <sqloledb.h>
#include <oledberr.h>
#include <msdasql.h>
//////OLE DB

#ifndef _DBSESSIONS_H_
#define _DBSESSIONS_H_

class CDBSessions
{
public:
	CDBSessions();	//Constructor
	~CDBSessions();	//Destructor

//Interfaces.

	IDBCreateSession	*pIDBCreateSession;		//Session 1.
	IDBCreateCommand	*pIDBCreateCommand;		//Command 1

//

	IDBCreateSession	*pIDBCreateSessionTrans;	//Session 2, for transactions
	IDBCreateCommand	*pIDBCreateCommandTrans;	//Command 2, for transactions
	ITransactionLocal	*pITransactionlocal;		//Interface for transaction
};

#endif