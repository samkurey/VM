//	This header file contains data structure for the legacy message

//Message Header- Common for all AFIS messages
typedef struct tagMessageHeader
{
//General data
	char			MessageClass;
	unsigned char	MessageID;
	unsigned char	DatabaseMode;
	char			szProcessDate[8];
	char			szProcessTime[6];
	unsigned char	DataFormat;
	char			szOperID[8];
	char			szHscNo[12];
	char			szAppNo[24];
	unsigned char	Source;
//Origin data
	char			szOriginBranchCode[8];
	char			szOriginTxnDate[8];
	char			szOriginTxnTime[6];
	unsigned char	OriginTxnMachNo;
	char			szOriginTxnCode[6];
	char			szFiller[14];
//Optional data
	unsigned char	Operation;
	unsigned char	CitizenStatus;
	unsigned char	Sex;
	unsigned char	UpdPrints;
	unsigned char	UpdPortraits;
	unsigned char	AnswerReq;
	unsigned char	SearchAnswer;
	unsigned char	VVAnswer;
	unsigned char	CardResult;
	unsigned char	HQDecision;
	unsigned char	BadHsc;
	unsigned char	BadData;
	unsigned char	AfisDecision;
	unsigned char	MatchingProcessed;
}MESSAGE_HEADER;

//Common Structures

//Stores Demographic Data
typedef struct tagDemographicData
{
  unsigned char Priority;
  char			szName1[20];
  char			szName2[20];
  char			szReserved1[20];
  unsigned char Sex;
  unsigned char CitizenStatus;
  char			szBirthDate[8];
  char			szReserved2[448];
  char			szLongName[150];
  char			szReserved3[200];
}DEMOGRAPHIC_DATA;

//Stores Minutiae Data
typedef struct tagMinutiae
{
	unsigned char	LeftOriginalPK[512];	
	unsigned char	LeftNormalizedPK[512];	
	unsigned char	LQuality;				
	char			LFingerIndex;			
	unsigned char	LeftPattern;			
	unsigned char	LeftThumbStatus;		
	unsigned char	RightOriginalPK[512];
	unsigned char	RightNormalizedPK[512];
	unsigned char	RQuality;
	unsigned char	RFingerIndex;
	unsigned char	RightPattern;
	unsigned char	RightThumbStatus;
	unsigned char	IsJuvenile;
	unsigned char	QualityStatus;
}MINUTIAE_DATA;

//Stores Image Sizes
typedef struct tagImageSize
{
	char			szPhotoSize_1[7];
	char			szPhotoSize_2[7];
	char			szPhotoSize_3[7];
	char			szLeftTPSize[6];
	char			szRightTPSize[6];
	char			szLeftMatSize[5];
	char			szRightMatSize[5];
	unsigned char	RFingerIndex;
	unsigned char	LFingerIndex;
}IMAGE_SIZE;


//Request Buffer for AFIS_UPDATE
typedef struct tagAfisUpdateReq
{
	MESSAGE_HEADER		stMsgHeader;
	DEMOGRAPHIC_DATA	stDemographicData;
	MINUTIAE_DATA		stMinutiaeData;
	IMAGE_SIZE			stImageSize;
}AFIS_UPDATE_REQ;

//Reply Buffer for AFIS_UPDATE
typedef struct tagAfisUpdateResp
{
	MESSAGE_HEADER	stMsgHeader;
}AFIS_UPDATE_RESP;

//Structures for deleting AFIS records

//Reply Buffer for AFIS_UPDATE
typedef struct tagAfisDeleteReq
{
	MESSAGE_HEADER	stMsgHeader;
}AFIS_DELETE_REQ;


//IO structures used for invoking the service

//This request is from the calling program, requesting an update.
typedef struct tagAfisUpdateRequest
{
	HEADER_T header;
	char Task;	//D- Delete Request, E- Enrollment Request
}AFIS_UPDATE_REQ_T;

//This structure will be passed back to the calling program 
//to indicate success or failure of the operation
typedef struct tagAfisUpdateResponse
{
	HEADER_T header;
}AFIS_UPDATE_RESP_T;



