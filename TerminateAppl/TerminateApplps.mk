
TerminateApplps.dll: dlldata.obj TerminateAppl_p.obj TerminateAppl_i.obj
	link /dll /out:TerminateApplps.dll /def:TerminateApplps.def /entry:DllMain dlldata.obj TerminateAppl_p.obj TerminateAppl_i.obj \
		mtxih.lib mtx.lib mtxguid.lib \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \
		ole32.lib advapi32.lib 

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		/MD \
		$<

clean:
	@del TerminateApplps.dll
	@del TerminateApplps.lib
	@del TerminateApplps.exp
	@del dlldata.obj
	@del TerminateAppl_p.obj
	@del TerminateAppl_i.obj
