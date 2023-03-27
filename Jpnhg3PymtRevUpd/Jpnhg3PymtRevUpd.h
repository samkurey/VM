/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Mar 27 12:37:15 2023
 */
/* Compiler settings for D:\MTSComponents_context\Jpnhg3PymtRevUpd_L1\Jpnhg3PymtRevUpd.idl:
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

#ifndef __Jpnhg3PymtRevUpd_h__
#define __Jpnhg3PymtRevUpd_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IJpnhg3PymtRevUpdServiceL1_FWD_DEFINED__
#define __IJpnhg3PymtRevUpdServiceL1_FWD_DEFINED__
typedef interface IJpnhg3PymtRevUpdServiceL1 IJpnhg3PymtRevUpdServiceL1;
#endif 	/* __IJpnhg3PymtRevUpdServiceL1_FWD_DEFINED__ */


#ifndef __Jpnhg3PymtRevUpdService_L1_FWD_DEFINED__
#define __Jpnhg3PymtRevUpdService_L1_FWD_DEFINED__

#ifdef __cplusplus
typedef class Jpnhg3PymtRevUpdService_L1 Jpnhg3PymtRevUpdService_L1;
#else
typedef struct Jpnhg3PymtRevUpdService_L1 Jpnhg3PymtRevUpdService_L1;
#endif /* __cplusplus */

#endif 	/* __Jpnhg3PymtRevUpdService_L1_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IJpnhg3PymtRevUpdServiceL1_INTERFACE_DEFINED__
#define __IJpnhg3PymtRevUpdServiceL1_INTERFACE_DEFINED__

/* interface IJpnhg3PymtRevUpdServiceL1 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IJpnhg3PymtRevUpdServiceL1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ECB2CD3B-FCA1-437C-822F-33C4056B07C7")
    IJpnhg3PymtRevUpdServiceL1 : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Execute( 
            /* [in] */ SAFEARRAY __RPC_FAR * pDataReq,
            /* [out] */ SAFEARRAY __RPC_FAR * __RPC_FAR *pDataResp) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IJpnhg3PymtRevUpdServiceL1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IJpnhg3PymtRevUpdServiceL1 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IJpnhg3PymtRevUpdServiceL1 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IJpnhg3PymtRevUpdServiceL1 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IJpnhg3PymtRevUpdServiceL1 __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IJpnhg3PymtRevUpdServiceL1 __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IJpnhg3PymtRevUpdServiceL1 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IJpnhg3PymtRevUpdServiceL1 __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Execute )( 
            IJpnhg3PymtRevUpdServiceL1 __RPC_FAR * This,
            /* [in] */ SAFEARRAY __RPC_FAR * pDataReq,
            /* [out] */ SAFEARRAY __RPC_FAR * __RPC_FAR *pDataResp);
        
        END_INTERFACE
    } IJpnhg3PymtRevUpdServiceL1Vtbl;

    interface IJpnhg3PymtRevUpdServiceL1
    {
        CONST_VTBL struct IJpnhg3PymtRevUpdServiceL1Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IJpnhg3PymtRevUpdServiceL1_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IJpnhg3PymtRevUpdServiceL1_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IJpnhg3PymtRevUpdServiceL1_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IJpnhg3PymtRevUpdServiceL1_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IJpnhg3PymtRevUpdServiceL1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IJpnhg3PymtRevUpdServiceL1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IJpnhg3PymtRevUpdServiceL1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IJpnhg3PymtRevUpdServiceL1_Execute(This,pDataReq,pDataResp)	\
    (This)->lpVtbl -> Execute(This,pDataReq,pDataResp)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IJpnhg3PymtRevUpdServiceL1_Execute_Proxy( 
    IJpnhg3PymtRevUpdServiceL1 __RPC_FAR * This,
    /* [in] */ SAFEARRAY __RPC_FAR * pDataReq,
    /* [out] */ SAFEARRAY __RPC_FAR * __RPC_FAR *pDataResp);


void __RPC_STUB IJpnhg3PymtRevUpdServiceL1_Execute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IJpnhg3PymtRevUpdServiceL1_INTERFACE_DEFINED__ */



#ifndef __JPNHG3PYMTREVUPDLib_LIBRARY_DEFINED__
#define __JPNHG3PYMTREVUPDLib_LIBRARY_DEFINED__

/* library JPNHG3PYMTREVUPDLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_JPNHG3PYMTREVUPDLib;

EXTERN_C const CLSID CLSID_Jpnhg3PymtRevUpdService_L1;

#ifdef __cplusplus

class DECLSPEC_UUID("05C319F0-5A61-4722-87E1-7D3EC21C862C")
Jpnhg3PymtRevUpdService_L1;
#endif
#endif /* __JPNHG3PYMTREVUPDLib_LIBRARY_DEFINED__ */

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
