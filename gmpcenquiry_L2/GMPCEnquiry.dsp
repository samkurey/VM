# Microsoft Developer Studio Project File - Name="GMPCEnquiry" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=GMPCEnquiry - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "GMPCEnquiry.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "GMPCEnquiry.mak" CFG="GMPCEnquiry - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "GMPCEnquiry - Win32 Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "GMPCEnquiry - Win32 Unicode Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "GMPCEnquiry - Win32 Release MinSize" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "GMPCEnquiry - Win32 Release MinDependency" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "GMPCEnquiry - Win32 Unicode Release MinSize" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "GMPCEnquiry - Win32 Unicode Release MinDependency" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""$/IJPN-Source/MTS_Component/GSCB/GMPCEnquiry", NGKAAAAA"
# PROP Scc_LocalPath "."
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "GMPCEnquiry - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MTd /W3 /Gm /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "DEBUG" /D "_USRDLL" /FR /FD /GZ /c
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib mtx.lib mtxguid.lib delayimp.lib oraSQX10.LIB oraSQL10.LIB /nologo /subsystem:windows /dll /debug /machine:I386 /out:"D:\IJPN\BIN/GMPCEnquiry.dll" /pdbtype:sept /delayload:mtxex.dll
# SUBTRACT LINK32 /pdb:none
# Begin Custom Build - Performing registration
OutDir=.\Debug
TargetPath=\IJPN\BIN\GMPCEnquiry.dll
InputPath=\IJPN\BIN\GMPCEnquiry.dll
SOURCE="$(InputPath)"

"$(OutDir)\regsvr32.trg" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	regsvr32 /s /c "$(TargetPath)" 
	echo regsvr32 exec. time > "$(OutDir)\regsvr32.trg" 
	echo Execute mtxrereg.exe before using MTS components in MTS 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "DebugU"
# PROP BASE Intermediate_Dir "DebugU"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "DebugU"
# PROP Intermediate_Dir "DebugU"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_USRDLL" /D "_UNICODE" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MTd /W3 /Gm /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_USRDLL" /D "_UNICODE" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib mtx.lib mtxguid.lib delayimp.lib /nologo /subsystem:windows /dll /debug /machine:I386 /pdbtype:sept /delayload:mtxex.dll
# Begin Custom Build - Performing registration
OutDir=.\DebugU
TargetPath=.\DebugU\GMPCEnquiry.dll
InputPath=.\DebugU\GMPCEnquiry.dll
SOURCE="$(InputPath)"

"$(OutDir)\regsvr32.trg" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	if "%OS%"=="" goto NOTNT 
	if not "%OS%"=="Windows_NT" goto NOTNT 
	regsvr32 /s /c "$(TargetPath)" 
	echo regsvr32 exec. time > "$(OutDir)\regsvr32.trg" 
	echo Execute mtxrereg.exe before using MTS components in MTS 
	goto end 
	:NOTNT 
	echo Warning : Cannot register Unicode DLL on Windows 95 
	:end 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Release MinSize"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "ReleaseMinSize"
# PROP BASE Intermediate_Dir "ReleaseMinSize"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "ReleaseMinSize"
# PROP Intermediate_Dir "ReleaseMinSize"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "_ATL_DLL" /D "_ATL_MIN_CRT" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MT /W3 /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "_ATL_DLL" /D "_ATL_MIN_CRT" /Yu"stdafx.h" /FD /c
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib mtx.lib mtxguid.lib delayimp.lib /nologo /subsystem:windows /dll /machine:I386 /delayload:mtxex.dll
# Begin Custom Build - Performing registration
OutDir=.\ReleaseMinSize
TargetPath=.\ReleaseMinSize\GMPCEnquiry.dll
InputPath=.\ReleaseMinSize\GMPCEnquiry.dll
SOURCE="$(InputPath)"

"$(OutDir)\regsvr32.trg" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	regsvr32 /s /c "$(TargetPath)" 
	echo regsvr32 exec. time > "$(OutDir)\regsvr32.trg" 
	echo Execute mtxrereg.exe before using MTS components in MTS 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Release MinDependency"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "ReleaseMinDependency"
# PROP BASE Intermediate_Dir "ReleaseMinDependency"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "ReleaseMinDependency"
# PROP Intermediate_Dir "ReleaseMinDependency"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "_ATL_STATIC_REGISTRY" /D "_ATL_MIN_CRT" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MT /W3 /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "_ATL_STATIC_REGISTRY" /D "_ATL_MIN_CRT" /Yu"stdafx.h" /FD /c
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib mtx.lib mtxguid.lib delayimp.lib /nologo /subsystem:windows /dll /machine:I386 /delayload:mtxex.dll
# Begin Custom Build - Performing registration
OutDir=.\ReleaseMinDependency
TargetPath=.\ReleaseMinDependency\GMPCEnquiry.dll
InputPath=.\ReleaseMinDependency\GMPCEnquiry.dll
SOURCE="$(InputPath)"

"$(OutDir)\regsvr32.trg" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	regsvr32 /s /c "$(TargetPath)" 
	echo regsvr32 exec. time > "$(OutDir)\regsvr32.trg" 
	echo Execute mtxrereg.exe before using MTS components in MTS 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Release MinSize"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "ReleaseUMinSize"
# PROP BASE Intermediate_Dir "ReleaseUMinSize"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "ReleaseUMinSize"
# PROP Intermediate_Dir "ReleaseUMinSize"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_USRDLL" /D "_UNICODE" /D "_ATL_DLL" /D "_ATL_MIN_CRT" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MT /W3 /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_USRDLL" /D "_UNICODE" /D "_ATL_DLL" /D "_ATL_MIN_CRT" /Yu"stdafx.h" /FD /c
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib mtx.lib mtxguid.lib delayimp.lib /nologo /subsystem:windows /dll /machine:I386 /delayload:mtxex.dll
# Begin Custom Build - Performing registration
OutDir=.\ReleaseUMinSize
TargetPath=.\ReleaseUMinSize\GMPCEnquiry.dll
InputPath=.\ReleaseUMinSize\GMPCEnquiry.dll
SOURCE="$(InputPath)"

"$(OutDir)\regsvr32.trg" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	if "%OS%"=="" goto NOTNT 
	if not "%OS%"=="Windows_NT" goto NOTNT 
	regsvr32 /s /c "$(TargetPath)" 
	echo regsvr32 exec. time > "$(OutDir)\regsvr32.trg" 
	echo Execute mtxrereg.exe before using MTS components in MTS 
	goto end 
	:NOTNT 
	echo Warning : Cannot register Unicode DLL on Windows 95 
	:end 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Release MinDependency"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "ReleaseUMinDependency"
# PROP BASE Intermediate_Dir "ReleaseUMinDependency"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_USRDLL" /D "_UNICODE" /D "_ATL_STATIC_REGISTRY" /D "_ATL_MIN_CRT" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MTd /W3 /Gm /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "DEBUG" /D "_USRDLL" /FR /Fp"Debug/CardEnq.pch" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib mtx.lib mtxguid.lib delayimp.lib oraSQX10.LIB oraSQL10.LIB /nologo /subsystem:windows /dll /incremental:yes /debug /machine:I386 /out:"D:/ijpn/bin/GMPCEnquiry.dll" /implib:"D:/ijpn/lib/GMPCEnquiry.lib" /delayload:mtxex.dll
# SUBTRACT LINK32 /pdb:none
# Begin Custom Build - Performing registration
OutDir=.\Debug
TargetPath=\IJPN\BIN\GMPCEnquiry.dll
InputPath=\IJPN\BIN\GMPCEnquiry.dll
SOURCE="$(InputPath)"

"$(OutDir)\regsvr32.trg" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	if "%OS%"=="" goto NOTNT 
	if not "%OS%"=="Windows_NT" goto NOTNT 
	regsvr32 /s /c "$(TargetPath)" 
	echo regsvr32 exec. time > "$(OutDir)\regsvr32.trg" 
	echo Execute mtxrereg.exe before using MTS components in MTS 
	goto end 
	:NOTNT 
	echo Warning : Cannot register Unicode DLL on Windows 95 
	:end 
	
# End Custom Build

!ENDIF 

# Begin Target

# Name "GMPCEnquiry - Win32 Debug"
# Name "GMPCEnquiry - Win32 Unicode Debug"
# Name "GMPCEnquiry - Win32 Release MinSize"
# Name "GMPCEnquiry - Win32 Release MinDependency"
# Name "GMPCEnquiry - Win32 Unicode Release MinSize"
# Name "GMPCEnquiry - Win32 Unicode Release MinDependency"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\GMPCEnquiry.cpp
# End Source File
# Begin Source File

SOURCE=.\GMPCEnquiry.def
# End Source File
# Begin Source File

SOURCE=.\GMPCEnquiry.idl
# ADD MTL /tlb ".\GMPCEnquiry.tlb" /h "GMPCEnquiry.h" /iid "GMPCEnquiry_i.c" /Oicf
# End Source File
# Begin Source File

SOURCE=.\GMPCEnquiry.rc
# End Source File
# Begin Source File

SOURCE=.\GMPCEnquiry_DB.c

!IF  "$(CFG)" == "GMPCEnquiry - Win32 Debug"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Debug"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Release MinSize"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Release MinDependency"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Release MinSize"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Release MinDependency"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\GMPCEnquiryService.cpp
# End Source File
# Begin Source File

SOURCE=..\COMMON_FILES\gscbcommon.c

!IF  "$(CFG)" == "GMPCEnquiry - Win32 Debug"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Debug"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Release MinSize"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Release MinDependency"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Release MinSize"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Release MinDependency"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=..\COMMON_FILES\GSCBDB.cpp

!IF  "$(CFG)" == "GMPCEnquiry - Win32 Debug"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Debug"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Release MinSize"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Release MinDependency"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Release MinSize"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Release MinDependency"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=..\COMMON_FILES\gscblog.c

!IF  "$(CFG)" == "GMPCEnquiry - Win32 Debug"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Debug"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Release MinSize"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Release MinDependency"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Release MinSize"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Release MinDependency"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=..\COMMON_FILES\gscbutil.c

!IF  "$(CFG)" == "GMPCEnquiry - Win32 Debug"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Debug"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Release MinSize"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Release MinDependency"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Release MinSize"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Release MinDependency"

# SUBTRACT CPP /YX /Yc /Yu

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\userlog.c
# End Source File
# Begin Source File

SOURCE=..\COMMON_FILES\userlog_r.c
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\gmpc_enquiry.h
# End Source File
# Begin Source File

SOURCE=.\gmpc_enquiry_io.h
# End Source File
# Begin Source File

SOURCE=.\GMPCEnquiryService.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\GMPCEnquiryService.rgs
# End Source File
# End Group
# Begin Group "DBInterface"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\GMPCEnquiry_DB.pc

!IF  "$(CFG)" == "GMPCEnquiry - Win32 Debug"

# Begin Custom Build
InputDir=.
InputPath=.\GMPCEnquiry_DB.pc
InputName=GMPCEnquiry_DB

"$(InputDir)\$(InputName).c" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	proc $(InputDir)\$(InputName) unsafe_null=yes dbms=v8 sqlcheck=full parse=full userid=gscb/gscb@gscbbcm include="D:\MTSComponents_context\COMMON_FILES" sys_include="D:\Program Files\Microsoft Visual Studio\VC98\Include" sys_include="D:\Oracle\product\10.2.0\db_1\precomp\public" sys_include="D:\Oracle\product\10.2.0\db_1\oci\include"

# End Custom Build

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Debug"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Release MinSize"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Release MinDependency"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Release MinSize"

!ELSEIF  "$(CFG)" == "GMPCEnquiry - Win32 Unicode Release MinDependency"

# Begin Custom Build
InputDir=.
InputPath=.\GMPCEnquiry_DB.pc
InputName=GMPCEnquiry_DB

"$(InputDir)\$(InputName).c" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	proc $(InputDir)\$(InputName) unsafe_null=yes dbms=v8 sqlcheck=full parse=full userid=gscb/gscb890@gscb include="D:\MTS Components\GSCB\COMMON_FILES" sys_include="D:\Program Files\Microsoft Visual Studio\VC98\Include" sys_include="D:\Oracle\product\10.1.0\Client_1\precomp\public" sys_include="D:\Oracle\product\10.1.0\Client_1\oci\include"

# End Custom Build

!ENDIF 

# End Source File
# End Group
# End Target
# End Project
