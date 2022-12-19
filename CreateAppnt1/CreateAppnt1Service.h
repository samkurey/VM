// CreateAppnt1Service.h: Definition of the CCreateAppnt1Service class
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
// CCreateAppnt1Service

//class CCreateAppnt1Service : 
class ATL_NO_VTABLE CCreateAppnt1Service :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCreateAppnt1Service,&CLSID_CreateAppnt1Service>,
	public IObjectControl,
	public IDispatchImpl<ICreateAppnt1Service, &IID_ICreateAppnt1Service, &LIBID_CREATEAPPNT1Lib>	
	//public ISupportErrorInfo,
	//public CComObjectRoot,
	
{

private:
	void *sql_context;

public:
	CCreateAppnt1Service()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CreateAppnt1Service)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_NOT_AGGREGATABLE(CCreateAppnt1Service)


BEGIN_COM_MAP(CCreateAppnt1Service)
	COM_INTERFACE_ENTRY(ICreateAppnt1Service)
	COM_INTERFACE_ENTRY(IObjectControl)	
	COM_INTERFACE_ENTRY(IDispatch)	
	//COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()
//DECLARE_NOT_AGGREGATABLE(CCreateAppnt1Service) 
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

// ICreateAppnt1Service
public:
	STDMETHOD(Execute)(/*[in]*/SAFEARRAY *pDataReq,/*[out,retval]*/SAFEARRAY **pDataResp);
};

#endif // !defined(AFX_CREATEAPPNT1SERVICE_H__31CEBFDE_426A_45B4_B730_080398052517__INCLUDED_)

#endif //__CREATEAPPNTSERVICE_H_