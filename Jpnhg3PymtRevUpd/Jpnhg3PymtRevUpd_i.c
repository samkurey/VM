/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Dec 10 15:49:02 2020
 */
/* Compiler settings for D:\MTSComponents_context\Jpnhg3PymtRevUpd\Jpnhg3PymtRevUpd.idl:
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

const IID IID_IJpnhg3PymtRevUpdService = {0xBE3A4848,0x46C5,0x4C60,{0x89,0xD5,0x59,0xB5,0xBC,0x04,0xD5,0x8B}};


const IID LIBID_JPNHG3PYMTREVUPDLib = {0x6A545162,0xD86C,0x445D,{0x94,0x16,0xDF,0xB9,0x10,0xC4,0x4B,0x71}};


const CLSID CLSID_Jpnhg3PymtRevUpdService = {0x5F777A0A,0xF539,0x468F,{0x86,0x54,0x21,0x73,0xEE,0xDC,0xEF,0xC7}};


#ifdef __cplusplus
}
#endif

