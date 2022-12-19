// GetProbRecL2Service.cpp : Implementation of CGetProbRecL2Service
#include "stdafx.h"
#include "GetProbRec_L2.h"
#include "GetProbRecL2Service.h"
#include "gscbcommon.h"
#include "get_prob_rec_L2_io.h"
#include "get_prob_rec_L2.h"

extern void EnableThreads();
extern int LogoutFromOracle(void * ctx);
extern int LoginToOracle(void **ctx);

extern "C" void userlog(char* szFormatString, ...);
extern "C" void userlogr(char* szFormatString, ...);
extern "C" int Get_Prob_Rec(GET_PROB_REC_L2_REQ_T *pReq, 
				GET_PROB_REC_L2_RESP_T **pResp, long *pRespSize,void * ctx);
/////////////////////////////////////////////////////////////////////////////
// CGetProbRecL2Service

HRESULT CGetProbRecL2Service::Activate()
{
	HRESULT hr = GetObjectContext(&m_spObjectContext);

	userlog("Before LoginToOracle");
	userlogr("GET_PROB_REC_L2 : Before LoginToOracle");
	if (LoginToOracle(&sql_context) != GMPC_GOOD)
	{
		userlog("Failed to connect to Oracle !");	
		return S_FALSE;
	}
	
	EnableThreads();
	#ifdef DEBUG
		userlog("Connected to Oracle");
	#endif


	if (SUCCEEDED(hr))
		return S_OK;
	return hr;
} 

BOOL CGetProbRecL2Service::CanBePooled()
{
	return TRUE;
} 

void CGetProbRecL2Service::Deactivate()
{
	m_spObjectContext.Release();

	/* Disconnect from Oracle	*/
	if(GMPC_GOOD != LogoutFromOracle(sql_context))
	{
		userlog("Failed to disconnect from oracle !");
		return;
	}
	#ifdef DEBUG
		userlog("Disconnected from Oracle\n");
		userlogr("GET_PROB_REC_L2 : Service Finished");
		userlogr(" ");
	#endif

	return;
} 


STDMETHODIMP CGetProbRecL2Service::Execute(SAFEARRAY *pDataReq, SAFEARRAY **pDataResp)
{
	GET_PROB_REC_L2_RESP_T *resp=NULL;
	unsigned char* reqBuf = NULL;
	
	long lSize,lRespSize=0;
	int nReturn;

	FILE *fptr=NULL;
	
    //Pointers to byte arrays
	unsigned char *pucReqData = NULL;
	unsigned char *pucRespData = NULL;
		
	//Lock access to array data
	SafeArrayAccessData( pDataReq, (void**)&pucReqData);

	//Get number of elements in array. This is the number of bytes
	lSize = pDataReq->rgsabound->cElements;
    
	reqBuf = (unsigned char *)malloc(lSize);
	if(!reqBuf)
	{
		userlog("Failed to execute service - Request NULL");
		return E_FAIL;
	
	}


	memcpy(reqBuf, pucReqData, lSize);

	SafeArrayUnaccessData(pDataReq);

	nReturn = Get_Prob_Rec((GET_PROB_REC_L2_REQ_T *)reqBuf, &resp, &lRespSize,sql_context);
	
	#ifdef DEBUG
		userlog("Return Code : %d",nReturn);
	#endif
	if(resp == NULL)
	{
		free(reqBuf);
		userlog("Failed to execute the service - Response NULL ");
		return E_FAIL;
	} 	

	free(reqBuf);
	//Return response buffer
	*pDataResp = SafeArrayCreateVector( VT_UI1, 0, lRespSize);
	userlog("Response Buffer size...%d " , lRespSize  );
	//Get a pointer to the safe array. Locks the array.
	SafeArrayAccessData(*pDataResp, (void**)&pucRespData );
	resp->header.error_code = nReturn;
	//Copy the memory into the safearray
	memcpy(pucRespData, resp, lRespSize);
	SafeArrayUnaccessData(*pDataResp);

	fptr = fopen("d:\\ijpn\\log\\gprec.txt","wb");
	fwrite(resp, lRespSize,1,fptr);
	fclose(fptr);

	free(resp);
	#ifdef DEBUG
		userlog("Sevice executed Successfully");
	#endif
	return S_OK;

	return S_OK;
}
