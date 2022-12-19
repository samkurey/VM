/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Aug 23 16:35:30 2021
 */
/* Compiler settings for D:\MTSComponents_context\GetProbRec_L2\GetProbRec_L2.idl:
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

#ifndef __GetProbRec_L2_h__
#define __GetProbRec_L2_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IGetProbRecL2Service_FWD_DEFINED__
#define __IGetProbRecL2Service_FWD_DEFINED__
typedef interface IGetProbRecL2Service IGetProbRecL2Service;
#endif 	/* __IGetProbRecL2Service_FWD_DEFINED__ */


#ifndef __GetProbRecL2Service_FWD_DEFINED__
#define __GetProbRecL2Service_FWD_DEFINED__

#ifdef __cplusplus
typedef class GetProbRecL2Service GetProbRecL2Service;
#else
typedef struct GetProbRecL2Service GetProbRecL2Service;
#endif /* __cplusplus */

#endif 	/* __GetProbRecL2Service_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IGetProbRecL2Service_INTERFACE_DEFINED__
#define __IGetProbRecL2Service_INTERFACE_DEFINED__

/* interface IGetProbRecL2Service */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IGetProbRecL2Service;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A9388405-EF28-4E46-9D24-E5D94E0D437A")
    IGetProbRecL2Service : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Execute( 
            /* [in] */ SAFEARRAY __RPC_FAR * req,
            /* [out] */ SAFEARRAY __RPC_FAR * __RPC_FAR *resp) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IGetProbRecL2ServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IGetProbRecL2Service __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IGetProbRecL2Service __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IGetProbRecL2Service __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IGetProbRecL2Service __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IGetProbRecL2Service __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IGetProbRecL2Service __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IGetProbRecL2Service __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Execute )( 
            IGetProbRecL2Service __RPC_FAR * This,
            /* [in] */ SAFEARRAY __RPC_FAR * req,
            /* [out] */ SAFEARRAY __RPC_FAR * __RPC_FAR *resp);
        
        END_INTERFACE
    } IGetProbRecL2ServiceVtbl;

    interface IGetProbRecL2Service
    {
        CONST_VTBL struct IGetProbRecL2ServiceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGetProbRecL2Service_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IGetProbRecL2Service_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IGetProbRecL2Service_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IGetProbRecL2Service_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IGetProbRecL2Service_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IGetProbRecL2Service_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IGetProbRecL2Service_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IGetProbRecL2Service_Execute(This,req,resp)	\
    (This)->lpVtbl -> Execute(This,req,resp)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IGetProbRecL2Service_Execute_Proxy( 
    IGetProbRecL2Service __RPC_FAR * This,
    /* [in] */ SAFEARRAY __RPC_FAR * req,
    /* [out] */ SAFEARRAY __RPC_FAR * __RPC_FAR *resp);


void __RPC_STUB IGetProbRecL2Service_Execute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IGetProbRecL2Service_INTERFACE_DEFINED__ */



#ifndef __GETPROBREC_L2Lib_LIBRARY_DEFINED__
#define __GETPROBREC_L2Lib_LIBRARY_DEFINED__

/* library GETPROBREC_L2Lib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_GETPROBREC_L2Lib;

EXTERN_C const CLSID CLSID_GetProbRecL2Service;

#ifdef __cplusplus

class DECLSPEC_UUID("06AACDA2-E482-47CE-8845-3B9FF3C95A97")
GetProbRecL2Service;
#endif
#endif /* __GETPROBREC_L2Lib_LIBRARY_DEFINED__ */

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
