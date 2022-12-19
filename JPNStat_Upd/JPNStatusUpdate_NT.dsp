# Microsoft Developer Studio Project File - Name="JPNStatusUpdate_NT" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=JPNStatusUpdate_NT - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "JPNStatusUpdate_NT.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "JPNStatusUpdate_NT.mak" CFG="JPNStatusUpdate_NT - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "JPNStatusUpdate_NT - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "JPNStatusUpdate_NT - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "JPNStatusUpdate_NT - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /YX /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "JPNStatusUpdate_NT - Win32 Debug"

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
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "DEBUG" /FR /YX /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib oraSQX10.LIB oraSQL10.LIB li_update_gmpc_stat.lib HTPIJPNCPIC.lib /nologo /subsystem:windows /debug /machine:I386 /out:"D:\IJPN\BIN/JPNStat_Upd.exe" /pdbtype:sept
# SUBTRACT LINK32 /pdb:none

!ENDIF 

# Begin Target

# Name "JPNStatusUpdate_NT - Win32 Release"
# Name "JPNStatusUpdate_NT - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=..\COMMON_FILES\gscbcommon.c
# End Source File
# Begin Source File

SOURCE=.\GSCBDB.cpp
# End Source File
# Begin Source File

SOURCE=..\COMMON_FILES\gscblog.c

!IF  "$(CFG)" == "JPNStatusUpdate_NT - Win32 Release"

!ELSEIF  "$(CFG)" == "JPNStatusUpdate_NT - Win32 Debug"

# SUBTRACT CPP /YX

!ENDIF 

# End Source File
# Begin Source File

SOURCE=..\COMMON_FILES\gscbutil.c

!IF  "$(CFG)" == "JPNStatusUpdate_NT - Win32 Release"

!ELSEIF  "$(CFG)" == "JPNStatusUpdate_NT - Win32 Debug"

# SUBTRACT CPP /YX

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\JPNStatusUpdate_NT.cpp
# End Source File
# Begin Source File

SOURCE=.\ProcessResponse.cpp
# End Source File
# Begin Source File

SOURCE=.\userlog.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\jpn_status_upd.h
# End Source File
# Begin Source File

SOURCE=.\jpn_status_upd_io.h
# End Source File
# Begin Source File

SOURCE=.\JPNStatusUpdate_NT.h
# End Source File
# Begin Source File

SOURCE=.\JPNStatusUpdate_NTEvents.h
# End Source File
# Begin Source File

SOURCE=.\receiverfunc.h
# End Source File
# Begin Source File

SOURCE=.\receivervar.h
# End Source File
# Begin Source File

SOURCE=.\userlog.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# End Group
# Begin Group "DBInterface"

# PROP Default_Filter ""
# End Group
# Begin Source File

SOURCE=.\GSCBDB.pc

!IF  "$(CFG)" == "JPNStatusUpdate_NT - Win32 Release"

!ELSEIF  "$(CFG)" == "JPNStatusUpdate_NT - Win32 Debug"

# Begin Custom Build
InputDir=.
InputPath=.\GSCBDB.pc
InputName=GSCBDB

"$(InputDir)\$(InputName).cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	proc $(InputDir)\$(InputName) unsafe_null=yes dbms=v8 sqlcheck=full parse=partial code=CPP userid=gscb/gscb@gscbbcm include="D:\MTSComponents_context\COMMON_FILES" sys_include="D:\Program Files\Microsoft Visual Studio\VC98\Include" sys_include="D:\Oracle\product\10.2.0\db_1\precomp\public" sys_include="D:\Oracle\product\10.2.0\db_1\oci\include"

# End Custom Build

!ENDIF 

# End Source File
# End Target
# End Project
