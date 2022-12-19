// GMPCEnquiryService.h : Declaration of the CGMPCEnquiryService

#ifndef __GMPCENQUIRYSERVICE_H_
#define __GMPCENQUIRYSERVICE_H_

#include "resource.h"       // main symbols
#include <mtx.h>

/////////////////////////////////////////////////////////////////////////////
// CGMPCEnquiryService
class ATL_NO_VTABLE CGMPCEnquiryService : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CGMPCEnquiryService, &CLSID_GMPCEnquiryService_L2>,
	public IObjectControl,
	public IDispatchImpl<IGMPCEnquiryService, &IID_IGMPCEnquiryService_L2, &LIBID_GMPCENQUIRYLib>
{

private:
	void *sql_context;

public:
	CGMPCEnquiryService()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_GMPCENQUIRYSERVICE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_NOT_AGGREGATABLE(CGMPCEnquiryService)

BEGIN_COM_MAP(CGMPCEnquiryService)
	COM_INTERFACE_ENTRY(IGMPCEnquiryService)
	COM_INTERFACE_ENTRY(IObjectControl)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IObjectControl
public:
	STDMETHOD(Activate)();
	STDMETHOD_(BOOL, CanBePooled)();
	STDMETHOD_(void, Deactivate)();

	CComPtr<IObjectContext> m_spObjectContext;

// IGMPCEnquiryService
public:
	STDMETHOD(Execute)(/*[in]*/SAFEARRAY *pDataReq,/*[out,retval]*/SAFEARRAY **pDataResp);
};

#endif //__GMPCENQUIRYSERVICE_H_
