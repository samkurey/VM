/*$Header:   F:/PVCS_GMPC/archives/GSCB_SERVICES/COMMON_FILES/KPPproto.h-arc   1.0   Aug 20 2003 09:54:26   ShivamP  $*/
/********************************************************************/
/* File Name	:KPPproto.h										    */
/* Author		:Vageesh Patwardhan									*/
/* Description	:function prototypes for KPP*Gate Interface		*/
/********************************************************************/


#ifndef _KPPPROTO_
#define _KPPPROTO_

#ifdef __cplusplus
extern "C" {
#endif


/* The functions li_get_dll, li_put_dll, li_init_dll and li_end_dll are acutally 
   inside a dll. The functions li_init and li_end are merely stubs for the actual 
   worker functions inside the dll.  Bit confusing but that's only the way to go 
   The following function pointer types are NOT to be used by any service directly*/

typedef int (__stdcall *LI_PUT_DLL_FN_TYP)(LI_PUT_HEADER_T put_header, 
			LI_PUT_VAR_DATA_T put_var_data, 
			LI_PUT_FIN_DATA_T put_fin_data,
			unsigned char *msg_id,
			int *error_code);

typedef int (__stdcall *LI_GET_DLL_FN_TYP) (LI_GET_HEADER_T *get_header, 
			char **reply_buff, 
			long *reply_buff_size,
			int *error_code);

typedef int (__stdcall *LI_INIT_DLL_FN_TYP)(int request_type, 
											APPL_EXCEP_LOG_T init_excep_log);

typedef int (__stdcall *LI_END_DLL_FN_TYP)(void);


/* Utility functions */
int check_put_header(LI_P_HEADER_T header);
int load_lib(void);
int unload_lib(void);
int get_one_field(char *reply_buff, char **field, long *len, int *img_ind);
void dump_msg(char *buff, long len);
int get_next_sequence(char **next_sequence);
int check_reply_ind(char *msg_buff, long reply_buff_size, int *error_code);
int add_one_fc_field(int field_id, char **in_temp_ptr, char *req_data, 
					 int req_data_type, int *error_code);
int add_one_fc_field_n(int field_id, char **in_temp_ptr, char *req_data, 
					 int req_data_type, int *error_code);
int add_one_image_field(int field_id, char **in_temp_ptr, unsigned char *req_data,  
						int data_ind, long len, int image_ind, int *error_code);
int add_one_minutiae_field(int field_id, char **in_temp_ptr, FINGER_T *req,  
						long len, int image_ind, int *error_code);
int add_one_minutiae_field_n(int field_id, char **in_temp_ptr, MINUTIAE_T *req,  
						long len, int image_ind, int *error_code); 

void li_yyyymmdd_to_ddmmyyyy(char *dest, char *src);
void li_ddmmyyyy_to_yyyymmdd(char *dest, char *src);




/* Function prototype for get_one_message */
int  get_one_msg(LI_GET_HEADER_T *get_header, char **reply_buff, 
		   long *reply_buff_size,
		   int *error_code);



/* The following functions are to be used by any service intending to call any
   KPP*Gate Interface functions */
int li_init(int);
int li_end(void);

/* function to compress high res image */
int compress_photo(unsigned char *buff, int ori_len,
				  unsigned char **new_buff, int *new_len);

/* function to compress WSQ image to HTP format */
int compress_fp_image(unsigned char *buff, int ori_len,
				   unsigned char **new_buff, int *new_len);

void get_legacy_address(char *addr1, char *addr2, char *addr3);

int get_license_type(char *lic_str);

#ifdef __cplusplus
}
#endif

#endif /* _KPPPROTO_ */

