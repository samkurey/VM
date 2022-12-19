/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Oct 06 14:55:36 2021
 */
/* Compiler settings for D:\MTSComponents_context\getprobrec\GetProbRec.idl:
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

//{0x0E06959A,0xCA0D,0x4734,{0xA5,0xB1,0x4F,0x35,0xEF,0xD6,0x2E,0xAB}};
//892D20CA-4C15-43EC-BEDB-42E730719ABB
const IID IID_IGetProbRecService_L1 = {0x892D20CA,0x4C15,0x43EC,{0xBE,0xDB,0x42,0xE7,0x30,0x71,0x9A,0xBB}};

//{0xE301F441,0x2B38,0x4A72,{0xA9,0xF7,0xA4,0x28,0xAD,0xCB,0x35,0x0B}};
//3B44B414-90E0-4792-AF93-61C2BDEE8B0E
const IID LIBID_GETPROBRECLib = {0x3B44B414,0x90E0,0x4792,{0xAF,0x93,0x61,0xC2,0xBD,0xEE,0x8B,0x0E}};

//5454603F-B741-439C-991F-34C69977D334
//DFCFEFBC-6B7B-4EDD-80DF-46ADE7E6DBF2
//{0x5454603F,0xB741,0x439C,{0x99,0x1F,0x34,0xC6,0x99,0x77,0xD3,0x34}};
const CLSID CLSID_GetProbRecService_L1 = {0xDFCFEFBC,0x6B7B,0x4EDD,{0x80,0xDF,0x46,0xAD,0xE7,0xE6,0xDB,0xF2}};

#ifdef __cplusplus
}
#endif

