// CreateAppnt1Service.h: Definition of the CCreateAppntService_L2 class
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CREATEAPPNT1SERVICE_H__31CEBFDE_426A_45B4_B730_080398052517__INCLUDED_)
#define AFX_CREATEAPPNT1SERVICE_H__31CEBFDE_426A_45B4_B730_080398052517__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __CREATEAPPNTSERVICE_H_
#define __CREATEAPPNTSERVICE_H_

#include "resource.h"       // main symbols
#include <mtx.h>

/////////////////////////////////////////////////////////////////////////////
// CCreateAppntService_L2

//class CCreateAppntService_L2 : 
class ATL_NO_VTABLE CCreateAppntService_L2 :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCreateAppntService_L2,&CLSID_CreateAppntService_L2>,
	public IObjectControl,
	public IDispatchImpl<ICreateAppntService_L2, &IID_ICreateAppntService_L2, &LIBID_CREATEAPPNT1Lib>	
	//public ISupportErrorInfo,
	//public CComObjectRoot,
	
{

private:
	void *sql_context;

public:
	CCreateAppntService_L2()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CreateAppnt1Service)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_NOT_AGGREGATABLE(CCreateAppntService_L2)


BEGIN_COM_MAP(CCreateAppntService_L2)
	COM_INTERFACE_ENTRY(ICreateAppntService_L2)
	COM_INTERFACE_ENTRY(IObjectControl)	
	COM_INTERFACE_ENTRY(IDispatch)	
	//COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()
//DECLARE_NOT_AGGREGATABLE(CCreateAppntService_L2) 
// Remove the comment from the line above if you don't want your object to 
// support aggregation. 

//DECLARE_REGISTRY_RESOURCEID(IDR_CreateAppnt1Service)
//// ISupportsErrorInfo
//	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IObjectControl
public:
	STDMETHOD(Activate)();
	STDMETHOD_(BOOL, CanBePooled)();
	STDMETHOD_(void, Deactivate)();

	CComPtr<IObjectContext> m_spObjectContext;

// ICreateAppntService_L2
public:
	STDMETHOD(Execute)(/*[in]*/SAFEARRAY *pDataReq,/*[out,retval]*/SAFEARRAY **pDataResp);
};

#endif // !defined(AFX_CREATEAPPNT1SERVICE_H__31CEBFDE_426A_45B4_B730_080398052517__INCLUDED_)

#endif //__CREATEAPPNTSERVICE_H_