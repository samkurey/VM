
Jpnhg3PymtRevUpdps.dll: dlldata.obj Jpnhg3PymtRevUpd_p.obj Jpnhg3PymtRevUpd_i.obj
	link /dll /out:Jpnhg3PymtRevUpdps.dll /def:Jpnhg3PymtRevUpdps.def /entry:DllMain dlldata.obj Jpnhg3PymtRevUpd_p.obj Jpnhg3PymtRevUpd_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del Jpnhg3PymtRevUpdps.dll
	@del Jpnhg3PymtRevUpdps.lib
	@del Jpnhg3PymtRevUpdps.exp
	@del dlldata.obj
	@del Jpnhg3PymtRevUpd_p.obj
	@del Jpnhg3PymtRevUpd_i.obj
