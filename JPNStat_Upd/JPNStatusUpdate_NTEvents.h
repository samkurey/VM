//		FILE			:	CheckProbRecEvents.h
//		Description		:	This file provides the Events Messages. 
//		Date			:	
//		Author			:	
#define CAT_JPNStatusUpdate_NT 1
//
//  Values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//


//
// MessageId: EVCTRLDISP_ERR
//
// MessageText:
//
//  Unable to start service control dispatcher.
//
#define EVCTRLDISP_ERR                   0x00000001L

//
// MessageId: EVCTRLHDL_ERR
//
// MessageText:
//
//  Unable to register GSCB_RECEIVER service control handler.
//
#define EVCTRLHDL_ERR                    0x00000002L

//
// MessageId: EVSERVSTAT_ERR
//
// MessageText:
//
//  Unable to set GSCB_RECEIVER service status.
//
#define EVSERVSTAT_ERR                   0x00000003L

//
// MessageId: EVRECV_RUN
//
// MessageText:
//
//  GSCB_RECEIVER process running.
//
#define EVRECV_RUN                       0x00000004L

//
// MessageId: EVREG_ERR
//
// MessageText:
//
//  GSCB_RECEIVER process unable to read from server registry.
//
#define EVREG_ERR                        0x00000005L

//
// MessageId: EVCONNECT_ERR
//
// MessageText:
//
//  GSCB_RECEIVER process unable to connect to database.
//
#define EVCONNECT_ERR                    0x00000006L

//
// MessageId: EVOPEN_ERR
//
// MessageText:
//
//  GSCB_RECEIVER process unable to open cursor on table REQ_RESP_QUEUE.
//
#define EVOPEN_ERR                       0x00000007L

//
// MessageId: EVRECV_INIT
//
// MessageText:
//
//  GSCB_RECEIVER process initialized
//
#define EVRECV_INIT                      0x00000008L

//
// MessageId: EVFET_ERR
//
// MessageText:
//
//  GSCB_RECEIVER process unable to fetch records from table REQ_RESP_QUEUE
//
#define EVFET_ERR                        0x00000009L

//
// MessageId: EVRECV_SLP
//
// MessageText:
//
//  GSCB_RECEIVER process sleeping.
//
#define EVRECV_SLP                       0x0000000AL

//
// MessageId: EVPROC_REQ
//
// MessageText:
//
//  GSCB_RECEIVER processing requests.
//
#define EVPROC_REQ                       0x0000000BL

//
// MessageId: EVRECV_STOP
//
// MessageText:
//
//  GSCB_RECEIVER process stopped.
//
#define EVRECV_STOP                      0x0000000CL
