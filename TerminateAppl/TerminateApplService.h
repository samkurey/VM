// TerminateApplService.h : Declaration of the CTerminateApplService

#ifndef __TERMINATEAPPLSERVICE_H_
#define __TERMINATEAPPLSERVICE_H_

#include "resource.h"       // main symbols
#include <mtx.h>

/////////////////////////////////////////////////////////////////////////////
// CTerminateApplService
class ATL_NO_VTABLE CTerminateApplService : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTerminateApplService, &CLSID_TerminateApplService>,
	public IObjectControl,
	public IDispatchImpl<ITerminateApplService, &IID_ITerminateApplService, &LIBID_TERMINATEAPPLLib>
{

private:
	void *sql_context;

public:
	CTerminateApplService()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_TERMINATEAPPLSERVICE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_NOT_AGGREGATABLE(CTerminateApplService)

BEGIN_COM_MAP(CTerminateApplService)
	COM_INTERFACE_ENTRY(ITerminateApplService)
	COM_INTERFACE_ENTRY(IObjectControl)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IObjectControl
public:
	STDMETHOD(Activate)();
	STDMETHOD_(BOOL, CanBePooled)();
	STDMETHOD_(void, Deactivate)();

	CComPtr<IObjectContext> m_spObjectContext;

// ITerminateApplService
public:
	STDMETHOD(Execute)(/*[in]*/SAFEARRAY *pDataReq,/*[out,retval]*/SAFEARRAY **pDataResp);
};

#endif //__TERMINATEAPPLSERVICE_H_
