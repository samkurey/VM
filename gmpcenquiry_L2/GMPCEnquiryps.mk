
GMPCEnquiryps.dll: dlldata.obj GMPCEnquiry_p.obj GMPCEnquiry_i.obj
	link /dll /out:GMPCEnquiryps.dll /def:GMPCEnquiryps.def /entry:DllMain dlldata.obj GMPCEnquiry_p.obj GMPCEnquiry_i.obj \
		mtxih.lib mtx.lib mtxguid.lib \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \
		ole32.lib advapi32.lib 

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		/MD \
		$<

clean:
	@del GMPCEnquiryps.dll
	@del GMPCEnquiryps.lib
	@del GMPCEnquiryps.exp
	@del dlldata.obj
	@del GMPCEnquiry_p.obj
	@del GMPCEnquiry_i.obj
