// Jpnhg3PymtRevUpdService.h : Declaration of the CJpnhg3PymtRevUpdService

#ifndef __JPNHG3PYMTREVUPDSERVICE_H_
#define __JPNHG3PYMTREVUPDSERVICE_H_

#include "resource.h"       // main symbols
#include <mtx.h>

/////////////////////////////////////////////////////////////////////////////
// CJpnhg3PymtRevUpdService
class ATL_NO_VTABLE CJpnhg3PymtRevUpdService : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CJpnhg3PymtRevUpdService, &CLSID_Jpnhg3PymtRevUpdService>,
	public IObjectControl,
	public IDispatchImpl<IJpnhg3PymtRevUpdService, &IID_IJpnhg3PymtRevUpdService, &LIBID_JPNHG3PYMTREVUPDLib>
{

private:
	void *sql_context;

public:
	CJpnhg3PymtRevUpdService()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_JPNHG3PYMTREVUPDSERVICE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_NOT_AGGREGATABLE(CJpnhg3PymtRevUpdService)

BEGIN_COM_MAP(CJpnhg3PymtRevUpdService)
	COM_INTERFACE_ENTRY(IJpnhg3PymtRevUpdService)
	COM_INTERFACE_ENTRY(IObjectControl)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IObjectControl
public:
	STDMETHOD(Activate)();
	STDMETHOD_(BOOL, CanBePooled)();
	STDMETHOD_(void, Deactivate)();

	CComPtr<IObjectContext> m_spObjectContext;


// IJpnhg3PymtRevUpdService
public:
	STDMETHOD(Execute)(/*[in]*/SAFEARRAY *pDataReq,/*[out,retval]*/SAFEARRAY **pDataResp);
};

#endif //__JPNHG3PYMTREVUPDSERVICE_H_
