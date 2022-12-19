// GetProbRecService.h : Declaration of the CGetProbRecService

#ifndef __GETPROBRECSERVICE_H_
#define __GETPROBRECSERVICE_H_

#include "resource.h"       // main symbols
#include <mtx.h>

/////////////////////////////////////////////////////////////////////////////
// CGetProbRecService
class ATL_NO_VTABLE CGetProbRecService : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CGetProbRecService, &CLSID_GetProbRecService>,
	public IObjectControl,
	public IDispatchImpl<IGetProbRecService, &IID_IGetProbRecService, &LIBID_GETPROBRECLib>
{

private:
	void *sql_context;

public:
	CGetProbRecService()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_GETPROBRECSERVICE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_NOT_AGGREGATABLE(CGetProbRecService)

BEGIN_COM_MAP(CGetProbRecService)
	COM_INTERFACE_ENTRY(IGetProbRecService)
	COM_INTERFACE_ENTRY(IObjectControl)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IObjectControl
public:
	STDMETHOD(Activate)();
	STDMETHOD_(BOOL, CanBePooled)();
	STDMETHOD_(void, Deactivate)();

	CComPtr<IObjectContext> m_spObjectContext;

// IGetProbRecService
public:
	STDMETHOD(Execute)(/*[in]*/SAFEARRAY *pDataReq,/*[out,retval]*/SAFEARRAY **pDataResp);
};

#endif //__GETPROBRECSERVICE_H_
