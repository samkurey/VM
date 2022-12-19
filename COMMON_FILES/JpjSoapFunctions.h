#include "config.h"
#import "msxml3.dll" 
using namespace MSXML2; 

#import "D:\MTSComponents_context\JpjUpdSpCaller\MSSOAP1.dll" exclude("IStream", "ISequentialStream", "_LARGE_INTEGER", "_ULARGE_INTEGER", "tagSTATSTG", "_FILETIME") 
using namespace MSSOAPLib; 


typedef struct JPJWebRequest_struct
{
	// Header
	char application_id[19+1];
	char branch_code[7+1];
	char jpnreqtype[2];
	char transaction_date[8+1];	
	char user_id[8+1];
	char workstation_id[15+1];
	// Header

	// Data
	char ownerid[12+1];
	char ownercat;
	char ownerkptno[12+1];

	char newownercat;

	char ownername[150+1];

	char ownerdob[10+1];
	char nationality[3+1];
	char lictype[3+1];
	char liceffdate[10+1];
	char licexpdate[10+1];
	char renewperiod;
	char adjind;
	char receiptno[30+1];
	char paymtranstype[3+1];
	char paymdatetime[26+1];
	char licamt[9+1];
	char adjamt[9+1];
	char channeltype[2+1];
	char paymstatus;
	char paymentmode;
	char jpjrevcode[7+1];
	char adjrevcode[7+1];

	char transid[30+1];
	char reftransid[30+1];
	char supervid[10+1];
	char transdate[10+1];
//	char paymstatus;
	char remarks[50+1];

	// Data

}JPJ_XML_REQ_T;



typedef struct JPJWebResponse_struct
{
	char TRANSACTIONCODE[9+1];
	char TRANSDATETIME[14+1];	
	char RETURNSTATUS[50];
	char RETURNCODE[9+1];	

}JPJ_XML_RES_T;



//#include "userlog.h"

//Pack Soap XML for send
bool FillReq(ISoapSerializerPtr SerialPtr,JPJ_XML_REQ_T * reqBuf);
bool FillResXML(ISoapReaderPtr Reader,JPJ_XML_RES_T *resXML);

HRESULT SendSoapXML(JPJ_XML_REQ_T *reqXML,JPJ_XML_RES_T *resXML,char *JPJ_SOAP_URL,char *JPJ_SOAP_URI,DWORD stimeout);
HRESULT SendSoapXML_REG(JPJ_XML_REQ_T *reqXML,JPJ_XML_RES_T *resXML);

bool writeStartEle(char **buf,char *tagName);
bool writeEndEle(char **buf,char *tagName);
bool writeNode(char **buf,char *tagName,char *tagVal);
char * getURL(char reqType);

