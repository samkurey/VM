/* $Header$ */
/********************************************************************/
/* File Name   : li_update_lic_replacement.h                        */
/* Author      : Amit Sangrulkar				                    */
/* Description : This file contains io structures required for		*/
/*				 li_update_lic_replacement_p							*/
/********************************************************************/

#ifndef _LI_UPDATE_LIC_REPLACEMENT_
#define _LI_UPDATE_LIC_REPLACEMENT_

/* Structs for li_update_lic_replacement */

typedef struct li_update_lic_replacement
{
	char license_id[LIC_ID_SIZE];
	char category_of_owner;
	char kpt_number[KPT_SIZE];
	char cdl_lic[LIC_TYPE_SIZE];
	char pdl_lic[LIC_TYPE_SIZE];
	char gdl_lic[LIC_TYPE_SIZE];
	char prb_lic[LIC_TYPE_SIZE];
	char psv_lic[LIC_TYPE_SIZE];

} LI_UPDATE_LIC_REPLACEMENT_REQ_T;


/* Function Prototypes */
int li_update_lic_replacement_p(LI_P_HEADER_T header, 
							LI_PUT_FIN_DATA_T put_fin_data,
						    LI_UPDATE_LIC_REPLACEMENT_REQ_T req,
							
						    unsigned char *msg_id,
						    int *error_code
						   );



#endif /* _LI_UPDATE_LIC_REPLACEMENT_ */
