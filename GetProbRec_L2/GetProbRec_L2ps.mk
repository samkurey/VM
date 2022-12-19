
GetProbRec_L2ps.dll: dlldata.obj GetProbRec_L2_p.obj GetProbRec_L2_i.obj
	link /dll /out:GetProbRec_L2ps.dll /def:GetProbRec_L2ps.def /entry:DllMain dlldata.obj GetProbRec_L2_p.obj GetProbRec_L2_i.obj \
		mtxih.lib mtx.lib mtxguid.lib \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \
		ole32.lib advapi32.lib 

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		/MD \
		$<

clean:
	@del GetProbRec_L2ps.dll
	@del GetProbRec_L2ps.lib
	@del GetProbRec_L2ps.exp
	@del dlldata.obj
	@del GetProbRec_L2_p.obj
	@del GetProbRec_L2_i.obj
