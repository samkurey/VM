/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Dec 10 12:47:47 2020
 */
/* Compiler settings for D:\MTSComponents_context\CreateAppnt1\CreateAppnt1.idl:
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

#ifndef __CreateAppnt1_h__
#define __CreateAppnt1_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __ICreateAppnt1Service_FWD_DEFINED__
#define __ICreateAppnt1Service_FWD_DEFINED__
typedef interface ICreateAppnt1Service ICreateAppnt1Service;
#endif 	/* __ICreateAppnt1Service_FWD_DEFINED__ */


#ifndef __CreateAppnt1Service_FWD_DEFINED__
#define __CreateAppnt1Service_FWD_DEFINED__

#ifdef __cplusplus
typedef class CreateAppnt1Service CreateAppnt1Service;
#else
typedef struct CreateAppnt1Service CreateAppnt1Service;
#endif /* __cplusplus */

#endif 	/* __CreateAppnt1Service_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __ICreateAppnt1Service_INTERFACE_DEFINED__
#define __ICreateAppnt1Service_INTERFACE_DEFINED__

/* interface ICreateAppnt1Service */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICreateAppnt1Service;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D17CDF01-01AD-42C7-B09A-1EB763A6D93F")
    ICreateAppnt1Service : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Execute( 
            /* [in] */ SAFEARRAY __RPC_FAR * pDataReq,
            /* [out] */ SAFEARRAY __RPC_FAR * __RPC_FAR *pDataResp) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICreateAppnt1ServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICreateAppnt1Service __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICreateAppnt1Service __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICreateAppnt1Service __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICreateAppnt1Service __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICreateAppnt1Service __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICreateAppnt1Service __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICreateAppnt1Service __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Execute )( 
            ICreateAppnt1Service __RPC_FAR * This,
            /* [in] */ SAFEARRAY __RPC_FAR * pDataReq,
            /* [out] */ SAFEARRAY __RPC_FAR * __RPC_FAR *pDataResp);
        
        END_INTERFACE
    } ICreateAppnt1ServiceVtbl;

    interface ICreateAppnt1Service
    {
        CONST_VTBL struct ICreateAppnt1ServiceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICreateAppnt1Service_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICreateAppnt1Service_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICreateAppnt1Service_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICreateAppnt1Service_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICreateAppnt1Service_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICreateAppnt1Service_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICreateAppnt1Service_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICreateAppnt1Service_Execute(This,pDataReq,pDataResp)	\
    (This)->lpVtbl -> Execute(This,pDataReq,pDataResp)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ICreateAppnt1Service_Execute_Proxy( 
    ICreateAppnt1Service __RPC_FAR * This,
    /* [in] */ SAFEARRAY __RPC_FAR * pDataReq,
    /* [out] */ SAFEARRAY __RPC_FAR * __RPC_FAR *pDataResp);


void __RPC_STUB ICreateAppnt1Service_Execute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICreateAppnt1Service_INTERFACE_DEFINED__ */



#ifndef __CREATEAPPNT1Lib_LIBRARY_DEFINED__
#define __CREATEAPPNT1Lib_LIBRARY_DEFINED__

/* library CREATEAPPNT1Lib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_CREATEAPPNT1Lib;

EXTERN_C const CLSID CLSID_CreateAppnt1Service;

#ifdef __cplusplus

class DECLSPEC_UUID("687662D8-5C0C-413D-8D1C-2BB526109FB1")
CreateAppnt1Service;
#endif
#endif /* __CREATEAPPNT1Lib_LIBRARY_DEFINED__ */

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
