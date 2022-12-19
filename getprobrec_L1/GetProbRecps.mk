
GetProbRecps.dll: dlldata.obj GetProbRec_p.obj GetProbRec_i.obj
	link /dll /out:GetProbRecps.dll /def:GetProbRecps.def /entry:DllMain dlldata.obj GetProbRec_p.obj GetProbRec_i.obj \
		mtxih.lib mtx.lib mtxguid.lib \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \
		ole32.lib advapi32.lib 

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		/MD \
		$<

clean:
	@del GetProbRecps.dll
	@del GetProbRecps.lib
	@del GetProbRecps.exp
	@del dlldata.obj
	@del GetProbRec_p.obj
	@del GetProbRec_i.obj
