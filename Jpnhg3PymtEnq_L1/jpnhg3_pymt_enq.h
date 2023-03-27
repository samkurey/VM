/* $Header:    */
/********************************************************************************/
/* Filename    : jpnhg3_pymt_enq.h									        	*/
/* Author      : Srinivasa Reddy												*/
/* Description : This file contains the #defines and structures for service		*/
/*				 JPNHG3_PYMT_ENQ.												*/
/********************************************************************************/
#include "jpnhg3_pymt_enq_io.h"


#if defined(__cplusplus)
extern "C" {
#endif

#ifndef _JPNHG3_PYMT_ENQ_
#define _JPNHG3_PYMT_ENQ_

/* # defines	*/
#define PROG_LOG_SIZE		sizeof(PROG_ACCESS_LOG_T)
#define APPL_EXCEP_LOG_SIZE sizeof(APPL_EXCEP_LOG_T)
#define TXN_LOG_SIZE		sizeof(TXN_LOG_T)



/* Function Prototypes	*/

int enq_processing(JPNHG3_PYMT_ENQ_REQ_T *, JPNHG3_PYMT_ENQ_RESP_T *, void * ctx);
int usk_processing(JPNHG3_PYMT_ENQ_REQ_T *, JPNHG3_USK_ENQ_RESP_T *, void * ctx);




#if defined(__cplusplus)
}
#endif

#endif	/* ifndef _JPNHG3_PYMT_ENQ_	*/
