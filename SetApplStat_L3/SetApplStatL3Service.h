// SetApplStatL3Service.h : Declaration of the CSetApplStatL3Service

#ifndef __SETAPPLSTATL3SERVICE_H_
#define __SETAPPLSTATL3SERVICE_H_

#include "resource.h"       // main symbols
#include <mtx.h>

/////////////////////////////////////////////////////////////////////////////
// CSetApplStatL3Service
class ATL_NO_VTABLE CSetApplStatL3Service : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CSetApplStatL3Service, &CLSID_SetApplStatL3Service>,
	public IObjectControl,
	public IDispatchImpl<ISetApplStatL3Service, &IID_ISetApplStatL3Service, &LIBID_SETAPPLSTATL3Lib>
{

private:
	void *sql_context;

public:
	CSetApplStatL3Service()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_SETAPPLSTATL3SERVICE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_NOT_AGGREGATABLE(CSetApplStatL3Service)

BEGIN_COM_MAP(CSetApplStatL3Service)
	COM_INTERFACE_ENTRY(ISetApplStatL3Service)
	COM_INTERFACE_ENTRY(IObjectControl)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IObjectControl
public:
	STDMETHOD(Activate)();
	STDMETHOD_(BOOL, CanBePooled)();
	STDMETHOD_(void, Deactivate)();

	CComPtr<IObjectContext> m_spObjectContext;

// ISetApplStatL3Service
public:
	STDMETHOD(Execute)(/*[in]*/SAFEARRAY *pDataReq,/*[out,retval]*/SAFEARRAY **pDataResp);
};

#endif //__SETAPPLSTATL3SERVICE_H_
