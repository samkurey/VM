/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Dec 10 15:48:24 2020
 */
/* Compiler settings for D:\MTSComponents_context\Jpnhg3PymtEnq\Jpnhg3PymtEnq.idl:
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

const IID IID_IJpnhg3PymtEnqService = {0x4A115E47,0xB717,0x461C,{0xBF,0x08,0x1C,0x82,0x29,0x55,0x23,0xDC}};


const IID LIBID_JPNHG3PYMTENQLib = {0xCA78620E,0x4294,0x4CA6,{0xB6,0xD3,0x19,0x35,0xD9,0x0A,0xF5,0xFB}};


const CLSID CLSID_Jpnhg3PymtEnqService = {0x749E1A93,0x8DE2,0x412A,{0x8A,0xD6,0x72,0xB7,0xFF,0xA3,0x2F,0x2C}};


#ifdef __cplusplus
}
#endif

