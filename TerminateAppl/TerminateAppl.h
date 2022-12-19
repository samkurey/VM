/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Dec 10 14:58:39 2020
 */
/* Compiler settings for D:\MTSComponents_context\TerminateAppl\TerminateAppl.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __TerminateAppl_h__
#define __TerminateAppl_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __ITerminateApplService_FWD_DEFINED__
#define __ITerminateApplService_FWD_DEFINED__
typedef interface ITerminateApplService ITerminateApplService;
#endif 	/* __ITerminateApplService_FWD_DEFINED__ */


#ifndef __TerminateApplService_FWD_DEFINED__
#define __TerminateApplService_FWD_DEFINED__

#ifdef __cplusplus
typedef class TerminateApplService TerminateApplService;
#else
typedef struct TerminateApplService TerminateApplService;
#endif /* __cplusplus */

#endif 	/* __TerminateApplService_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __ITerminateApplService_INTERFACE_DEFINED__
#define __ITerminateApplService_INTERFACE_DEFINED__

/* interface ITerminateApplService */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ITerminateApplService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8B80608A-F7C7-4684-90F3-B704A99F4CF1")
    ITerminateApplService : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Execute( 
            /* [in] */ SAFEARRAY __RPC_FAR * pDataReq,
            /* [out] */ SAFEARRAY __RPC_FAR * __RPC_FAR *pDataResp) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITerminateApplServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITerminateApplService __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITerminateApplService __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITerminateApplService __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ITerminateApplService __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ITerminateApplService __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ITerminateApplService __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ITerminateApplService __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Execute )( 
            ITerminateApplService __RPC_FAR * This,
            /* [in] */ SAFEARRAY __RPC_FAR * pDataReq,
            /* [out] */ SAFEARRAY __RPC_FAR * __RPC_FAR *pDataResp);
        
        END_INTERFACE
    } ITerminateApplServiceVtbl;

    interface ITerminateApplService
    {
        CONST_VTBL struct ITerminateApplServiceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITerminateApplService_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITerminateApplService_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITerminateApplService_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITerminateApplService_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITerminateApplService_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITerminateApplService_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITerminateApplService_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITerminateApplService_Execute(This,pDataReq,pDataResp)	\
    (This)->lpVtbl -> Execute(This,pDataReq,pDataResp)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ITerminateApplService_Execute_Proxy( 
    ITerminateApplService __RPC_FAR * This,
    /* [in] */ SAFEARRAY __RPC_FAR * pDataReq,
    /* [out] */ SAFEARRAY __RPC_FAR * __RPC_FAR *pDataResp);


void __RPC_STUB ITerminateApplService_Execute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITerminateApplService_INTERFACE_DEFINED__ */



#ifndef __TERMINATEAPPLLib_LIBRARY_DEFINED__
#define __TERMINATEAPPLLib_LIBRARY_DEFINED__

/* library TERMINATEAPPLLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_TERMINATEAPPLLib;

EXTERN_C const CLSID CLSID_TerminateApplService;

#ifdef __cplusplus

class DECLSPEC_UUID("EDF3FB53-7E49-4405-8F2B-F14BB1738DB8")
TerminateApplService;
#endif
#endif /* __TERMINATEAPPLLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long __RPC_FAR *, unsigned long            , LPSAFEARRAY __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, LPSAFEARRAY __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, LPSAFEARRAY __RPC_FAR * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long __RPC_FAR *, LPSAFEARRAY __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
