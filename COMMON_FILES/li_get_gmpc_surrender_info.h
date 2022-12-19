/********************************************************************/
/* File Name   : li_get_gmpc_surrender_info.h                       */
/* Author      : Amit Sangrulkar			                        */
/* Description : This file contains io structures and function		*/
/*				 prototypes for li_get_gmpc_surrender_info_p and _g	*/
/********************************************************************/

#ifndef _LI_GET_GMPC_SURRENDER_INFO_
#define _LI_GET_GMPC_SURRENDER_INFO_

/* Structs for li_get_gmpc_surrender_info_p */

typedef struct li_get_gmpc_surrender_info_req_s
{
	char kpt_number[KPT_SIZE];
	int gmpc_version_no;

} LI_GET_GMPC_SURRENDER_INFO_REQ_T;

/* Structs for li_get_gmpc_surrender_info_g */

typedef struct li_gmpc_surrender_misc_s
{
	char person_status;
	char duplicate_ind;	
	char kpt_number[KPT_SIZE];
	int gmpc_version_no;
	char dob[DATE_SIZE];
	char unknown_birth_ind;
	char birth_district_code[DIST_CODE_SIZE];
	char gender;
	char race[RACE_CODE_SIZE];
	char hk_ind;
	int card_version_no;
	int card_version_no_ind;
	char resi_status;
	char citizenship_status;
	char original_name_ind;
	char ic_colour_code;
	char date_last_kpt_issued[DATE_SIZE];
	char kpt_appl_status_code;
	char pol_army_join_date[DATE_SIZE];
	char surrender_date[DATE_SIZE];
		
} MISC_T;

typedef struct demographic_s
{
	NAME_T name;
	ADDRESS_T addr;
	MISC_T misc;

} DEMOGRAPHIC_T;

typedef struct norm_finger_s
{
	unsigned char *norm_minutiae_buff;
	long normalized_minutiae_size;

} NORM_FINGER_T;

typedef struct image_s
{

	char quality_status;
	PORTRAIT_T lr_portrait;
	NORM_FINGER_T left_finger_prints;
	NORM_FINGER_T right_finger_prints;

} IMAGE_T;



typedef struct li_get_gmpc_surrender_info_resp_s
{
	DEMOGRAPHIC_T demo;
	IMAGE_T image;

} LI_GET_GMPC_SURRENDER_INFO_RESP_T;




/* Function prototypes */

int li_get_gmpc_surrender_info_p(LI_P_HEADER_T header, LI_GET_GMPC_SURRENDER_INFO_REQ_T req,
					  unsigned char *msg_id, int *error_code,
					  unsigned char *pReplyMsg,
						int *iReplyMsgLen,
						char *sErrMessage);

int li_get_gmpc_surrender_info_g(LI_G_HEADER_T *header, LI_GET_GMPC_SURRENDER_INFO_RESP_T *resp,
					  int *error_code, char *error_msg,
					  unsigned char *msg_buff);

int process_img(int field_id, char *field, long len, int img_ind, IMAGE_T *image);


#endif /* _LI_GET_GMPC_SURRENDER_INFO_ */
