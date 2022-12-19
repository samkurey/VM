
JpnUpdateps.dll: dlldata.obj JpnUpdate_p.obj JpnUpdate_i.obj
	link /dll /out:JpnUpdateps.dll /def:JpnUpdateps.def /entry:DllMain dlldata.obj JpnUpdate_p.obj JpnUpdate_i.obj \
		mtxih.lib mtx.lib mtxguid.lib \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \
		ole32.lib advapi32.lib 

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		/MD \
		$<

clean:
	@del JpnUpdateps.dll
	@del JpnUpdateps.lib
	@del JpnUpdateps.exp
	@del dlldata.obj
	@del JpnUpdate_p.obj
	@del JpnUpdate_i.obj
