
Jpnhg3PymtEnqps.dll: dlldata.obj Jpnhg3PymtEnq_p.obj Jpnhg3PymtEnq_i.obj
	link /dll /out:Jpnhg3PymtEnqps.dll /def:Jpnhg3PymtEnqps.def /entry:DllMain dlldata.obj Jpnhg3PymtEnq_p.obj Jpnhg3PymtEnq_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del Jpnhg3PymtEnqps.dll
	@del Jpnhg3PymtEnqps.lib
	@del Jpnhg3PymtEnqps.exp
	@del dlldata.obj
	@del Jpnhg3PymtEnq_p.obj
	@del Jpnhg3PymtEnq_i.obj
