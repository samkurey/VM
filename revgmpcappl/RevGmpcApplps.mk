
RevGmpcApplps.dll: dlldata.obj RevGmpcAppl_p.obj RevGmpcAppl_i.obj
	link /dll /out:RevGmpcApplps.dll /def:RevGmpcApplps.def /entry:DllMain dlldata.obj RevGmpcAppl_p.obj RevGmpcAppl_i.obj \
		mtxih.lib mtx.lib mtxguid.lib \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \
		ole32.lib advapi32.lib 

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		/MD \
		$<

clean:
	@del RevGmpcApplps.dll
	@del RevGmpcApplps.lib
	@del RevGmpcApplps.exp
	@del dlldata.obj
	@del RevGmpcAppl_p.obj
	@del RevGmpcAppl_i.obj
