#include "gscbdef.h"
#include "gscblookupdef.h"
#include "gscblog.h"
#include "gscbio.h"
#include "kppdef.h"

/* void * ctx added for all the functions for ijpn */


int gscbbegin_trans(void * ctx);
int gscbcommit_trans(void * ctx);
int gscbrollback_trans(void * ctx);
int check_header(HEADER_T header,void * ctx);
int get_legacy_branchcode(char branch_code[BRANCH_CODE_SIZE], char agency_ind,
						 char *leg_branch_code,void * ctx);
int store_error_message(char *appl_id, char *msg_id, char agency, int txn_type, int status, char *resp_msg,void * ctx);

