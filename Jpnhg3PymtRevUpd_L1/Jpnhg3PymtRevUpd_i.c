/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Mar 27 12:37:15 2023
 */
/* Compiler settings for D:\MTSComponents_context\Jpnhg3PymtRevUpd_L1\Jpnhg3PymtRevUpd.idl:
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

const IID IID_IJpnhg3PymtRevUpdServiceL1 = {0xECB2CD3B,0xFCA1,0x437C,{0x82,0x2F,0x33,0xC4,0x05,0x6B,0x07,0xC7}};


const IID LIBID_JPNHG3PYMTREVUPDLib = {0x92842A69,0x483A,0x46B7,{0x94,0x87,0x6E,0xCE,0xCE,0x62,0x8D,0x81}};


const CLSID CLSID_Jpnhg3PymtRevUpdService_L1 = {0x05C319F0,0x5A61,0x4722,{0x87,0xE1,0x7D,0x3E,0xC2,0x1C,0x86,0x2C}};


#ifdef __cplusplus
}
#endif

