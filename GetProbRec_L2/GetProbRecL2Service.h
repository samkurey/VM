// GetProbRecL2Service.h : Declaration of the CGetProbRecL2Service

#ifndef __GETPROBRECL2SERVICE_H_
#define __GETPROBRECL2SERVICE_H_

#include "resource.h"       // main symbols
#include <mtx.h>

/////////////////////////////////////////////////////////////////////////////
// CGetProbRecL2Service
class ATL_NO_VTABLE CGetProbRecL2Service : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CGetProbRecL2Service, &CLSID_GetProbRecL2Service>,
	public IObjectControl,
	public IDispatchImpl<IGetProbRecL2Service, &IID_IGetProbRecL2Service, &LIBID_GETPROBREC_L2Lib>
{

private:
	void *sql_context;


public:
	CGetProbRecL2Service()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_GETPROBRECL2SERVICE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_NOT_AGGREGATABLE(CGetProbRecL2Service)

BEGIN_COM_MAP(CGetProbRecL2Service)
	COM_INTERFACE_ENTRY(IGetProbRecL2Service)
	COM_INTERFACE_ENTRY(IObjectControl)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IObjectControl
public:
	STDMETHOD(Activate)();
	STDMETHOD_(BOOL, CanBePooled)();
	STDMETHOD_(void, Deactivate)();

	CComPtr<IObjectContext> m_spObjectContext;

// IGetProbRecL2Service
public:
	STDMETHOD(Execute)(/*[in]*/ SAFEARRAY *req, /*[out]*/ SAFEARRAY **resp);
};

#endif //__GETPROBRECL2SERVICE_H_
