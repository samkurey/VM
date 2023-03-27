// Jpnhg3PymtEnqService.h : Declaration of the CJpnhg3PymtEnqService

#ifndef __JPNHG3PYMTENQSERVICE_H_
#define __JPNHG3PYMTENQSERVICE_H_

#include "resource.h"       // main symbols
#include <mtx.h>

/////////////////////////////////////////////////////////////////////////////
// CJpnhg3PymtEnqService
class ATL_NO_VTABLE CJpnhg3PymtEnqService : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CJpnhg3PymtEnqService, &CLSID_Jpnhg3PymtEnqService>,
	public IObjectControl,
	public IDispatchImpl<IJpnhg3PymtEnqService_L1, &IID_IJpnhg3PymtEnqService_L1, &LIBID_JPNHG3PYMTENQLib>
{

private:
	void *sql_context;

public:
	CJpnhg3PymtEnqService()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_JPNHG3PYMTENQSERVICE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_NOT_AGGREGATABLE(CJpnhg3PymtEnqService)

BEGIN_COM_MAP(CJpnhg3PymtEnqService)
	COM_INTERFACE_ENTRY(IJpnhg3PymtEnqService_L1)
	COM_INTERFACE_ENTRY(IObjectControl)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IObjectControl
public:
	STDMETHOD(Activate)();
	STDMETHOD_(BOOL, CanBePooled)();
	STDMETHOD_(void, Deactivate)();

	CComPtr<IObjectContext> m_spObjectContext;


// IJpnhg3PymtEnqService
public:
	STDMETHOD(Execute)(/*[in]*/SAFEARRAY *pDataReq,/*[out,retval]*/SAFEARRAY **pDataResp);
};

#endif //__JPNHG3PYMTENQSERVICE_H_
