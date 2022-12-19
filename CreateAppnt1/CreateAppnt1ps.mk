
CreateAppnt1ps.dll: dlldata.obj CreateAppnt1_p.obj CreateAppnt1_i.obj
	link /dll /out:CreateAppnt1ps.dll /def:CreateAppnt1ps.def /entry:DllMain dlldata.obj CreateAppnt1_p.obj CreateAppnt1_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del CreateAppnt1ps.dll
	@del CreateAppnt1ps.lib
	@del CreateAppnt1ps.exp
	@del dlldata.obj
	@del CreateAppnt1_p.obj
	@del CreateAppnt1_i.obj
