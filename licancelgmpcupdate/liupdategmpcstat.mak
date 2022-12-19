# Microsoft Developer Studio Generated NMAKE File, Based on liupdategmpcstat.dsp
!IF "$(CFG)" == ""
CFG=liupdategmpcstat - Win32 Debug
!MESSAGE No configuration specified. Defaulting to liupdategmpcstat - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "liupdategmpcstat - Win32 Release" && "$(CFG)" != "liupdategmpcstat - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "liupdategmpcstat.mak" CFG="liupdategmpcstat - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "liupdategmpcstat - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "liupdategmpcstat - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 

CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "liupdategmpcstat - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

ALL : "$(OUTDIR)\liupdategmpcstat.exe"


CLEAN :
	-@erase "$(INTDIR)\gscbcommon.obj"
	-@erase "$(INTDIR)\gscblog.obj"
	-@erase "$(INTDIR)\gscbutil.obj"
	-@erase "$(INTDIR)\KPPutil.obj"
	-@erase "$(INTDIR)\li_update_gmpc_stat.obj"
	-@erase "$(INTDIR)\mqiapi.obj"
	-@erase "$(INTDIR)\updategmpcstatmain.obj"
	-@erase "$(INTDIR)\vc60.idb"
	-@erase "$(OUTDIR)\liupdategmpcstat.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /ML /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /Fp"$(INTDIR)\liupdategmpcstat.pch" /YX /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\liupdategmpcstat.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /incremental:no /pdb:"$(OUTDIR)\liupdategmpcstat.pdb" /machine:I386 /out:"$(OUTDIR)\liupdategmpcstat.exe" 
LINK32_OBJS= \
	"$(INTDIR)\gscbcommon.obj" \
	"$(INTDIR)\gscblog.obj" \
	"$(INTDIR)\gscbutil.obj" \
	"$(INTDIR)\KPPutil.obj" \
	"$(INTDIR)\li_update_gmpc_stat.obj" \
	"$(INTDIR)\mqiapi.obj" \
	"$(INTDIR)\updategmpcstatmain.obj"

"$(OUTDIR)\liupdategmpcstat.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "liupdategmpcstat - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

ALL : "$(OUTDIR)\liupdategmpcstat.exe" "$(OUTDIR)\liupdategmpcstat.bsc"


CLEAN :
	-@erase "$(INTDIR)\gscbcommon.obj"
	-@erase "$(INTDIR)\gscbcommon.sbr"
	-@erase "$(INTDIR)\gscblog.obj"
	-@erase "$(INTDIR)\gscblog.sbr"
	-@erase "$(INTDIR)\gscbutil.obj"
	-@erase "$(INTDIR)\gscbutil.sbr"
	-@erase "$(INTDIR)\KPPutil.obj"
	-@erase "$(INTDIR)\KPPutil.sbr"
	-@erase "$(INTDIR)\li_update_gmpc_stat.obj"
	-@erase "$(INTDIR)\li_update_gmpc_stat.sbr"
	-@erase "$(INTDIR)\mqiapi.obj"
	-@erase "$(INTDIR)\mqiapi.sbr"
	-@erase "$(INTDIR)\updategmpcstatmain.obj"
	-@erase "$(INTDIR)\updategmpcstatmain.sbr"
	-@erase "$(INTDIR)\vc60.idb"
	-@erase "$(INTDIR)\vc60.pdb"
	-@erase "$(OUTDIR)\liupdategmpcstat.bsc"
	-@erase "$(OUTDIR)\liupdategmpcstat.exe"
	-@erase "$(OUTDIR)\liupdategmpcstat.ilk"
	-@erase "$(OUTDIR)\liupdategmpcstat.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MLd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /FR"$(INTDIR)\\" /Fp"$(INTDIR)\liupdategmpcstat.pch" /YX /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /GZ /c /I"C:\Program Files\BEA Systems\TUXEDO\include" /I"D:\program files\MQSeries\tools\c\include" /I"D:\VAGEESH\GSCB\Common"
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\liupdategmpcstat.bsc" 
BSC32_SBRS= \
	"$(INTDIR)\gscbcommon.sbr" \
	"$(INTDIR)\gscblog.sbr" \
	"$(INTDIR)\gscbutil.sbr" \
	"$(INTDIR)\KPPutil.sbr" \
	"$(INTDIR)\li_update_gmpc_stat.sbr" \
	"$(INTDIR)\mqiapi.sbr" \
	"$(INTDIR)\updategmpcstatmain.sbr"

"$(OUTDIR)\liupdategmpcstat.bsc" : "$(OUTDIR)" $(BSC32_SBRS)
    $(BSC32) @<<
  $(BSC32_FLAGS) $(BSC32_SBRS)
<<

LINK32=link.exe
LINK32_FLAGS=kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib libgp.lib sqllib80.lib sqxlib80.lib /nologo /subsystem:console /incremental:yes /pdb:"$(OUTDIR)\liupdategmpcstat.pdb" /debug /machine:I386 /out:"$(OUTDIR)\liupdategmpcstat.exe" /pdbtype:sept /LIBPATH:"D:\orant\PRO80\LIB\MSVC" /LIBPATH:"C:\Program Files\BEA Systems\TUXEDO\lib"
LINK32_OBJS= \
	"$(INTDIR)\gscbcommon.obj" \
	"$(INTDIR)\gscblog.obj" \
	"$(INTDIR)\gscbutil.obj" \
	"$(INTDIR)\KPPutil.obj" \
	"$(INTDIR)\li_update_gmpc_stat.obj" \
	"$(INTDIR)\mqiapi.obj" \
	"$(INTDIR)\updategmpcstatmain.obj"

"$(OUTDIR)\liupdategmpcstat.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 

.c{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<


!IF "$(NO_EXTERNAL_DEPS)" != "1"
!IF EXISTS("liupdategmpcstat.dep")
!INCLUDE "liupdategmpcstat.dep"
!ELSE 
!MESSAGE Warning: cannot find "liupdategmpcstat.dep"
!ENDIF 
!ENDIF 


!IF "$(CFG)" == "liupdategmpcstat - Win32 Release" || "$(CFG)" == "liupdategmpcstat - Win32 Debug"
SOURCE=..\..\Common\gscbcommon.c

!IF  "$(CFG)" == "liupdategmpcstat - Win32 Release"


"$(INTDIR)\gscbcommon.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "liupdategmpcstat - Win32 Debug"


"$(INTDIR)\gscbcommon.obj"	"$(INTDIR)\gscbcommon.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\Common\gscblog.c

!IF  "$(CFG)" == "liupdategmpcstat - Win32 Release"


"$(INTDIR)\gscblog.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "liupdategmpcstat - Win32 Debug"


"$(INTDIR)\gscblog.obj"	"$(INTDIR)\gscblog.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\Common\gscbutil.c

!IF  "$(CFG)" == "liupdategmpcstat - Win32 Release"


"$(INTDIR)\gscbutil.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "liupdategmpcstat - Win32 Debug"


"$(INTDIR)\gscbutil.obj"	"$(INTDIR)\gscbutil.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\Common\KPPutil.c

!IF  "$(CFG)" == "liupdategmpcstat - Win32 Release"


"$(INTDIR)\KPPutil.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "liupdategmpcstat - Win32 Debug"


"$(INTDIR)\KPPutil.obj"	"$(INTDIR)\KPPutil.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=.\li_update_gmpc_stat.c

!IF  "$(CFG)" == "liupdategmpcstat - Win32 Release"


"$(INTDIR)\li_update_gmpc_stat.obj" : $(SOURCE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "liupdategmpcstat - Win32 Debug"


"$(INTDIR)\li_update_gmpc_stat.obj"	"$(INTDIR)\li_update_gmpc_stat.sbr" : $(SOURCE) "$(INTDIR)"


!ENDIF 

SOURCE=..\mqiapi\mqiapi.c

!IF  "$(CFG)" == "liupdategmpcstat - Win32 Release"


"$(INTDIR)\mqiapi.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "liupdategmpcstat - Win32 Debug"


"$(INTDIR)\mqiapi.obj"	"$(INTDIR)\mqiapi.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=.\updategmpcstatmain.c

!IF  "$(CFG)" == "liupdategmpcstat - Win32 Release"


"$(INTDIR)\updategmpcstatmain.obj" : $(SOURCE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "liupdategmpcstat - Win32 Debug"


"$(INTDIR)\updategmpcstatmain.obj"	"$(INTDIR)\updategmpcstatmain.sbr" : $(SOURCE) "$(INTDIR)"


!ENDIF 


!ENDIF 

