/* $Header:    */
/********************************************************************************/
/* Filename    : jpnhg3_pymt_rev_upd.h								        	*/
/* Author      : Srinivasa Reddy												*/
/* Description : This file contains the #defines and structures for service		*/
/*				 JPNHG3_PYMT_REV_UPD.											*/
/********************************************************************************/
#include "jpnhg3_pymt_rev_upd_io.h"


#if defined(__cplusplus)
extern "C" {
#endif

#ifndef _JPNHG3_PYMT_REV_UPD_
#define _JPNHG3_PYMT_REV_UPD_

/* # defines	*/
#define PROG_LOG_SIZE		sizeof(PROG_ACCESS_LOG_T)
#define APPL_EXCEP_LOG_SIZE sizeof(APPL_EXCEP_LOG_T)
#define TXN_LOG_SIZE		sizeof(TXN_LOG_T)



/* Function Prototypes	*/

int transaction_processing(JPNHG3_PYMT_REV_UPD_REQ_T *, JPNHG3_PYMT_REV_UPD_RESP_T *, void * ctx);




#if defined(__cplusplus)
}
#endif

#endif	/* ifndef _JPNHG3_PYMT_REV_UPD_	*/
