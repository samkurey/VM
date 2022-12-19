// RevGmpcApplService.h : Declaration of the CRevGmpcApplService

#ifndef __REVGMPCAPPLSERVICE_H_
#define __REVGMPCAPPLSERVICE_H_

#include "resource.h"       // main symbols
#include <mtx.h>

/////////////////////////////////////////////////////////////////////////////
// CRevGmpcApplService
class ATL_NO_VTABLE CRevGmpcApplService : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CRevGmpcApplService, &CLSID_RevGmpcApplService>,
	public IObjectControl,
	public IDispatchImpl<IRevGmpcApplService, &IID_IRevGmpcApplService, &LIBID_REVGMPCAPPLLib>
{

private:
	void *sql_context;

public:
	CRevGmpcApplService()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_REVGMPCAPPLSERVICE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_NOT_AGGREGATABLE(CRevGmpcApplService)

BEGIN_COM_MAP(CRevGmpcApplService)
	COM_INTERFACE_ENTRY(IRevGmpcApplService)
	COM_INTERFACE_ENTRY(IObjectControl)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IObjectControl
public:
	STDMETHOD(Activate)();
	STDMETHOD_(BOOL, CanBePooled)();
	STDMETHOD_(void, Deactivate)();

	CComPtr<IObjectContext> m_spObjectContext;

// IRevGmpcApplService
public:
	STDMETHOD(Execute)(/*[in]*/SAFEARRAY *pDataReq,/*[out,retval]*/SAFEARRAY **pDataResp);
};

#endif //__REVGMPCAPPLSERVICE_H_
