/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Fri Mar 24 15:48:36 2023
 */
/* Compiler settings for D:\MTSComponents_context\Jpnhg3PymtEnq_L1\Jpnhg3PymtEnq.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

	//4A115E47-B717-461C-BF08-1C82295523DC - ASAL
	//4072112A-5146-4568-9277-A8B95629EDC9 - NEW 

const IID IID_IJpnhg3PymtEnqService_L1 = {0x4072112A,0x5146,0x4568,{0x92,0x77,0xA8,0xB9,0x56,0x29,0xED,0xC9}};


	//CA78620E-4294-4CA6-B6D3-1935D90AF5FB - ASAL
	//AB53332E-DBDF-46F3-BEEB-40F41DF096CD - NEW

const IID LIBID_JPNHG3PYMTENQLib = {0xAB53332E,0xDBDF,0x46F3,{0xBE,0xEB,0x40,0xF4,0x1D,0xF0,0x96,0xCD}};

		//749E1A93-8DE2-412A-8AD6-72B7FFA32F2C - asal
		//F4467448-9F31-499E-8B8A-D0D4FEE28B82 - new


const CLSID CLSID_Jpnhg3PymtEnqService = {0xF4467448,0x9F31,0x499E,{0x8B,0x8A,0xD0,0xD4,0xFE,0xE2,0x8B,0x82}};


#ifdef __cplusplus
}
#endif

