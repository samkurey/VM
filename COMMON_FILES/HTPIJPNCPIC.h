

 __declspec(dllexport) int  InquiryJPNHost(unsigned char *pMessage, int iMsgLen, unsigned char *pReplyMsg, int *iReplyMsgLen,char *sErrMessage);
 __declspec(dllexport) int  InquiryJPJHost(unsigned char *pMessage, int iMsgLen, unsigned char *pReplyMsg, int *iReplyMsgLen,char *sErrMessage);
/*extern "C" __declspec(dllexport) int  InquiryIMMHost(unsigned char *pMessage, int iMsgLen, unsigned char *pReplyMsg, int *iReplyMsgLen,char *sErrMessage);
extern "C" __declspec(dllexport) BOOL InquiryLegacyHost(unsigned char *pMessage, int iMsgLen, unsigned char *pReplyMsg, int *iReplyMsgLen,char *sErrMessage);
extern "C" __declspec(dllexport) int  DownloadLegacyHost(unsigned char *pMessage, int iMsgLen, unsigned char *pReplyMsg, int *iReplyMsgLen, char* sErrMessage, BOOL *bMode);
extern "C" __declspec(dllexport) int  DownloadReferenceFile(unsigned char *pMessage, int iMsgLen, char *sOutputFileName, char* sErrMessage);
//Update DLL
extern "C" __declspec(dllexport) BOOL UpdateLegacyHost(unsigned char *pMessage, int iMsgLen, unsigned char *pReplyMsg, int *iReplyMsgLen,char* sErrMessage);
extern "C" __declspec(dllexport) int  UpdateJPNHost(unsigned char *pMessage, int iMsgLen, unsigned char *pReplyMsg, int *iReplyMsgLen,char *sErrMessage);
extern "C" __declspec(dllexport) int UpdateJPJHost(unsigned char *pMessage, int iMsgLen, unsigned char *pReplyMsg, int *iReplyMsgLen,char* sErrMessage);
extern "C" __declspec(dllexport) int  UpdateJPJHost2(unsigned char *pMessage, int iMsgLen, unsigned char *pReplyMsg, int *iReplyMsgLen,char *sErrMessage,int iBSNNo,int iRefBSNNo);
extern "C" __declspec(dllexport) int  UpdateIMMHost(unsigned char *pMessage, int iMsgLen, unsigned char *pReplyMsg, int *iReplyMsgLen,char *sErrMessage);

//Inquiry using varpart only
extern "C" __declspec(dllexport) int IJPNInquiryLegacyHost(int iLegacy, int iRegion,char *cReqId, char *cBranchCode, char *cTxnCode,unsigned char *pInqVarpart, int iInqVarLen, unsigned char *pRtnVarpart, int &iRtnVarpart, char *sErrMessage);
extern "C" __declspec(dllexport) int IJPNInquiryJPNHost(int iLegacy, int iRegion,char *cReqId, char *cBranchCode, char *cTxnCode,unsigned char *pInqVarpart, int iInqVarLen, unsigned char *pRtnVarpart, int &iRtnVarpart, char *sErrMessage);
extern "C" __declspec(dllexport) int IJPNInquiryIMMHost(int iLegacy, int iRegion,char *cReqId, char *cBranchCode, char *cTxnCode,unsigned char *pInqVarpart, int iInqVarLen, unsigned char *pRtnVarpart, int &iRtnVarpart, char *sErrMessage);
extern "C" __declspec(dllexport) int IJPNInquiryJPJHost(int iLegacy, int iRegion,char *cReqId, char *cBranchCode, char *cTxnCode,unsigned char *pInqVarpart, int iInqVarLen, unsigned char *pRtnVarpart, int &iRtnVarpart, char *sErrMessage);

//Inquiry using varpart only
extern "C" __declspec(dllexport) int IJPNUpdateLegacyHost(int iLegacy, int iRegion,char *cReqId, char *cBranchCode, char *cTxnCode,unsigned char *pInqVarpart, int iInqVarLen, unsigned char *pRtnVarpart, int &iRtnVarpart, char *sErrMessage);
extern "C" __declspec(dllexport) int IJPNUpdateJPNHost(int iLegacy, int iRegion,char *cReqId, char *cBranchCode, char *cTxnCode,unsigned char *pInqVarpart, int iInqVarLen, unsigned char *pRtnVarpart, int &iRtnVarpart, char *sErrMessage);
extern "C" __declspec(dllexport) int IJPNUpdateIMMHost(int iLegacy, int iRegion,char *cReqId, char *cBranchCode, char *cTxnCode,unsigned char *pInqVarpart, int iInqVarLen, unsigned char *pRtnVarpart, int &iRtnVarpart, char *sErrMessage);
extern "C" __declspec(dllexport) int IJPNUpdateJPJHost(int iLegacy, int iRegion,char *cReqId, char *cBranchCode, char *cTxnCode,unsigned char *pInqVarpart, int iInqVarLen, unsigned char *pRtnVarpart, int &iRtnVarpart, char *sErrMessage,int iBSNNo,int iRefBSNNo);
extern "C" __declspec(dllexport) void DisplayInqStatus(int iAgency, int iRegion);
*/
//Update
