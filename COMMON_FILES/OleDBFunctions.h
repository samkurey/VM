/********************************************************************/
/*	FILE		:	OleDBFunctions.h								*/
/*	DESCRIPTION	:	Functions defenitions							*/
/*					for OLEDB interface								*/
/*	AUTHOR		:	Amarjith										*/
/********************************************************************/

#define DEFAULT_DATE_FORMAT 103				//Format DD/MM/YYYY
#define DEFAULT_DATE_TIME_FORMAT 120		//Format YYYY-MM-DD HH:MM:SS (24 Hour Format)
#define YYYYMMDD_DATE_FORMAT 112			//Format YYYYMMDD (ISO). 

#ifndef _OLEDB_FUNCTIONS_H_
#define _OLEDB_FUNCTIONS_H_



//Function to connect to DB using ODBC Driver.
HRESULT InitializeDatabase(char *pDSNName,/* [in] */ char *pUserName, /*[in]*/ 
						char *pPassword,	/* [in] */	
						IDBInitialize **ppIDBInitialize /*[out]*/);

//Function to connect to DB using server name.
HRESULT InitializeDatabase_1(char *pSQLServer,/* [in] */ char *pDBName,/* [in] */ 
							 char *pUserName, /*[in]*/ char *pPassword,	/* [in] */	
						IDBInitialize **ppIDBInitialize /*[out]*/);
						
//Function to Create Sessions.
HRESULT CreateSession(IDBInitialize **ppIDBInitialize, /*[in]*/
					CDBSessions *pDBSession/*[out]*/);

//Function to BEGIN a new transaction.
HRESULT BeginTransaction(IDBCreateCommand **ppIDBCreateCommand, /*[in]*/
						 ITransactionLocal	**ppITransactionlocal/*[out]*/);

//Function to COMMIT a transaction.
HRESULT CommitTransaction(IDBCreateCommand **ppIDBCreateCommand, /*[in]*/
						  ITransactionLocal	**ppITransactionlocal/*[out]*/);
//Function to ROLLBACK a transaction.
HRESULT RollbackTransaction(IDBCreateCommand **ppIDBCreateCommand, /*[in]*/
							ITransactionLocal	**ppITransactionlocal/*[out]*/);

//Function to execute a SELECT  statement.
HRESULT ExecuteSql(IDBCreateCommand **ppIDBCreateCommand, /*[in]*/
				   ICommandText **ppICommandText, /*[in]*/ char *pQuery, /*[in]*/
				   IRowset **ppIRowset/*[out]*/);

//To get the column information for the given Rowset
HRESULT GetColumnsInfo(CRowSetDefs *pRowDefs/*[in]*//*[out]*/);

//To execute an INSERT statement.
HRESULT ExecuteInsert(IDBCreateCommand **ppIDBCreateCommand, /*[in]*/
					char *pQuery /*[in]*/);

//To execute an UPDATE statement.
HRESULT ExecuteUpdate(IDBCreateCommand **ppIDBCreateCommand, /*[in]*/
					char *pQuery, /*[in]*/ LONG *pNumberOfRowsAffected /*[out]*/);

//To execute a DELETE statement.
HRESULT ExecuteDelete(IDBCreateCommand **ppIDBCreateCommand, /*[in]*/
					char *pQuery, /*[in]*/ LONG *pNumberOfRowsAffected /*[out]*/);

//Function to RELEASE a Rowset
void ReleaseRowset(CRowSetDefs *pRowset/*[in]*/);

//To format the date from DB 
void FormatDateFromDB(char *pInputDate/*[in, out]*/, int nFormat = 1/*[in]*/);
void FormatDateForInput(char *pInputDate/*[in]*/, char *pOutputDate/*[out]*/, 
						int nFormat = 1/*[in]*/);

//To format the date for INSERT or UPDATE into the DB
void FormatDateForInput(char *pInputDate/*[in, out]*/, int nFormat = 1/*[in]*/);

//To log errors
void LogError(char *pFunctionName/*[in]*/, LPTSTR pErrorMsg/*[in]*/);

//To get the error message from OLEDB
void GetDBErrorInfo(char *pFunctionName/*[in]*/);

//To get the error message from HRESULT. 
DWORD GetErrorMsg(char *pFunctionName, HRESULT hr);

char* CheckNull(char ch);

HRESULT GetSysDate(IDBCreateCommand **ppIDBCreateCommand/*[in]*/, 
				   char *pDateTime/*[out]*/);

//Insert a BLOB into a table depending on the query using OLEDB
HRESULT InsertImage(CDBSessions *pCDBSessions, char *pQuery, 
					unsigned char *pImage, long nLength);

//Read a BLOB from a table depending on the query query using OLEDB
HRESULT ReadImage(CDBSessions *pCDBSessions, char *pQuery, 
				  unsigned char *pImage, int *pLength);
#endif
