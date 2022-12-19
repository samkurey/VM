// JpnUpdateService.h : Declaration of the CJpnUpdateService

#ifndef __JPNUPDATESERVICE_H_
#define __JPNUPDATESERVICE_H_

#include "resource.h"       // main symbols
#include <mtx.h>

/////////////////////////////////////////////////////////////////////////////
// CJpnUpdateService
class ATL_NO_VTABLE CJpnUpdateService : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CJpnUpdateService, &CLSID_JpnUpdateService>,
	public IObjectControl,
	public IDispatchImpl<IJpnUpdateService, &IID_IJpnUpdateService, &LIBID_JPNUPDATELib>
{

private:
	void *sql_context;

public:
	CJpnUpdateService()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_JPNUPDATESERVICE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_NOT_AGGREGATABLE(CJpnUpdateService)

BEGIN_COM_MAP(CJpnUpdateService)
	COM_INTERFACE_ENTRY(IJpnUpdateService)
	COM_INTERFACE_ENTRY(IObjectControl)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IObjectControl
public:
	STDMETHOD(Activate)();
	STDMETHOD_(BOOL, CanBePooled)();
	STDMETHOD_(void, Deactivate)();

	CComPtr<IObjectContext> m_spObjectContext;

// IJpnUpdateService
public:
	STDMETHOD(Execute)(/*[in]*/SAFEARRAY *pDataReq,/*[out,retval]*/SAFEARRAY **pDataResp);
};

#endif //__JPNUPDATESERVICE_H_
