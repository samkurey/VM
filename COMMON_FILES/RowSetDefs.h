/********************************************************************/
/*	FILE		:	RowSetDefs.h									*/
/*	DESCRIPTION	:	Defenition of class CRowSetDefs					*/
/*					for OLEDB interface								*/
/*	AUTHOR		:	Amarjith										*/
/********************************************************************/

#ifndef _CROWSETDEFS_H_
#define _CROWSETDEFS_H_

class CRowSetDefs
{
public:
	CRowSetDefs();
	~CRowSetDefs();

//Interfaces required to Access rowsets.

	IRowset			*pIRowset;
	IAccessor		*pIAccessor;
	ICommandText	*pICommandText;
    ICommandProperties	*pICommandProperties;	//Added on 21st Mar 2005 for Images
    IRowsetChange	*pIRowsetChange;	//Added on 21st Mar 2005 for Images

//
	DBCOLUMNINFO	*pColumnsInfo;
	IColumnsInfo	*pIColumnsInfo;
	OLECHAR			*pColumnStrings;
	DBBINDING		*pDBBindings;
	DBBINDSTATUS	*pDBBindStatus;
	HROW			*pRows;
	HACCESSOR		hAccessor;
	HROW			hRows;
	ULONG			nNumberOfRowsFetched;
	ULONG			nRowSize;
	ULONG			nNumberOfCols;
	char			*pRowValues;
};

#endif