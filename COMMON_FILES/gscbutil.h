

//#include "gscbio.h"
#include "D:\CLMS_NEW\commonfun\userlog.h"
#include "gscbdef.h"
#include "gscblookupdef.h"
#include "KPPdef.h"

int c_rtrim(char *buffer, int max_size);
char * get_date(void);
char * get_date_time(void);
int get_return_code(int reply_ind, int service_id);
int read_registry(int service_id, READ_REG_T *read_reg, READ_REG_GENERIC_T *other_data);
int write_registry(int service_id, WRITE_REG_T input_data);
