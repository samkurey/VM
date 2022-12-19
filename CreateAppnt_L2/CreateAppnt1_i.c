/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Dec 10 12:47:47 2020
 */
/* Compiler settings for D:\MTSComponents_context\CreateAppnt1\CreateAppnt1.idl:
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
//{0xD17CDF01,0x01AD,0x42C7,{0xB0,0x9A,0x1E,0xB7,0x63,0xA6,0xD9,0x3F}};
//EE512ECE-CFC7-4897-8E5A-97A08373F144
const IID IID_ICreateAppntService_L2 = {0xEE512ECE,0xCFC7,0x4897,{0x8E,0x5A,0x97,0xA0,0x83,0x73,0xF1,0x44}};

//{0xBB34EFD9,0xD6B1,0x45C5,{0xB0,0xED,0x43,0xF3,0x5E,0x18,0xE7,0xC2}};
//8EEF6B6D-D04D-42BA-AA68-FDCEAF2AE651
const IID LIBID_CREATEAPPNT1Lib = {0x8EEF6B6D,0xD04D,0x42BA,{0xAA,0x68,0xFD,0xCE,0xAF,0x2A,0xE6,0x51}};

// {0x687662D8,0x5C0C,0x413D,{0x8D,0x1C,0x2B,0xB5,0x26,0x10,0x9F,0xB1}};
//E1FEDA5A-5CF2-4E6D-9783-AA5DCD721D31
const CLSID CLSID_CreateAppntService_L2 = {0xE1FEDA5A,0x5CF2,0x4E6D,{0x97,0x83,0xAA,0x5D,0xCD,0x72,0x1D,0x31}};


#ifdef __cplusplus
}
#endif

