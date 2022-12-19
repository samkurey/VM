#ifndef _ERRORCODES_H_
#define _ERRORCODES_H_

/* Error codes for PDRM module */
/* CAUTION: Do not exceed 4 digits for error codes */

#define DB_CONNECT_FAIL    100  /* Cannot connect to DB */
#define DB_ORACLE_ERROR    101  /* Oracle Error */
#define DATA_NOT_FOUND     1001	/* No data found */
#define ROW_NOT_UPDATED    1002	/* Row not updated */
#define DUPLICATE_ENTRY    1003	/* Duplicate entry */
#define INSUF_PARAMS       1004	/* Mandatory values incomplete */
#define KPT_LOOKUP         2001	/* KPT number lookup fail 
      -20008, 'NO KP BARU MEMPUNYAI 12 
      DIGITS DAN NO KP LAMA MEMPUNYAI 7/8 DIGITS');
      -20009, 'NO KP BARU MEMPUNYAI 12 
      DIGITS DAN NO KP LAMA MEMPUNYAI 7/8 DIGITS');
      -20010, 'SEKURANG-KURANGNYA 4 DIGIT');
      -20011, 'NO KP BARU MEMPUNYAI 12 
      DIGITS DAN NO KP LAMA MEMPUNYAI 7/8 DIGITS');
      -20013, 'NO KP KEDUA SALAH');
      -20014, 'NO KP BARU MEMPUNYAI 12 
      DIGITS DAN NO KP LAMA MEMPUNYAI 7/8 DIGITS');
      -20015, 'SEKURANG-KURANGNYA 4 DIGIT');
      */

#define KPT_OR_VEHI        3001 /* Either KPT or Vehicle number */
#define VEH_LOOKUP         3002	/* Vehicle number lookup fail */
#define CHASIS_LOOKUP      3003 /* Vehicle Chassis number lookup fail */
#define ENGINE_LOOKUP      3004	/* Vehicle Engine number lookup fail */
#define NO_DEVICE	   4000	/* Summon device not given */
#define DIST_LOOKUP        4001	/* Summon district code unknown */
#define BRANCH_LOOKUP      4002	/* Branch Id unknown */
#define NO_CAD_SERIAL      4003	/* CAD serial  number not given */
#define NO_RECEIPT_NR      4004	/* Receipt indicator */
#define NO_SERIAL_NR       4005	/* Receipt serial not given */
#define NO_COLLECT_DATE    4006	/* Collection date not given */
#define NO_AMOUNT          4007	/* Amount not give */
#define NO_PAY_MODE        4008	/* Payment mode */
#define NO_DB_CR_CARD_NR   4009	/* DB CR card */
#define NO_APPROVAL_NR     4010	/* Approval code */
#define NO_CREDIT_EXPIRY   4011	/* Credit card expiry date */
#define OFFICE_ID_LOOKUP   4012 /* Office ID unknown
                                   -20028, 'PENGELUAR MESTI DIMASUKKAN');
                                */
#define SUMMON_TYPE_LOOKUP 4013	/* Summon type lookup fail */
#define NO_CREATION_DATE   4014 /* No creation date */
#define NO_ISSUE_DATE      4015	/* Issued date not given
                                   -20000, 'SILA MASUKKAN TARIKH ISU SAMAN');
                                   -20001, 'SILA MASUKKAN TARIKH ISU SAMAN');
                                */
#define LOCATION_LOOKUP    4016 /* Offence location lookup fail */
#define OPERATIONID_LOOKUP 4017	/* Operation id lookup fail */
#define VEHICLE_ORI_LOOKUP 4018	/* Vehicle origin lookup fail */
#define NO_OFFENCE_DATE    4019	/* Offence date not given
                                   -20020, 'SILA MASUKKAN TARIKH KESALAHAN');
                                */
#define NO_OFFENCE_TIME    4020	/* Offence time not given */
#define NO_COMPOUND_DATE   4021	/* Compound date not given
                                   -20023, 'SILA MASUKKAN TARIKH KOMPAUN SEBELUM');
                                */
#define NO_COURT_DATE      4023	/* Court date not given 
                                   -20025, 'SILA MASUKKAN TARIKH HADIR MAHKAMAH');
                                */
#define UNIT_ID_LOOKUP     4024 /* Unit ID lookup fail
                                   -20031, 'NO UNIT MESTI DIMASUKKAN');
                                */   
#define POLICE_UNIT_LOOKUP 4025	/* Police unit number lookup fail
                                   -20030, 'UNIT POLIS MESTI DIMASUKKAN');
                                */
#define ROAD_TYPE_LOOKUP   4026	/* Road type lookup fail */
#define OFFENCECODE_LOOKUP 4027	/* Offence code lookup fail */
#define NO_VEHICLE_NR      4028 /* No vehicle number given
                                   -20004, 'MASUKKAN NO PENDAFTARAN');
                                */
#define NO_SUMMON_NR       4029 /* No summon number given
                                   -20029, 'ID-ISU SAMAN SALAH');
                                */
#define NO_COLLECT_TYPE    4030 /* No collect type given */
#define NO_VEHICLE_TYPE    4031 /* No vehicle type given */
#define NO_NAME            5001	/* Name not give
                                   -20006, 'NAMA MESTI DIMASUKKAN');
                                */
#define NO_GENDER          5002	/* Gender not given
                                   -20007, 'KOD JANTINA MESTI DIMASUKKAN');
                                */
#define NO_NATIONALITY     5003	/* Nationality not given */
#define NO_KPT_NR          5004	/* Mandatory KPT number not given
                                   -20012, 'NO KP MESTI DIMASUKKAN');
                                */
#define NO_ADDRESS         5005	/* Address not given 
                                   -20019, 'ALAMAT MESTI DIMASUKKAN');
                                */
#define BUFFER_OVERFLOW    6000 /* Input Buffer length overflow */

/* Error code for false entries */

#define FALSE_ISSUE_DATE   7001 /* Wrong issue date entry 
                                   -20002, 'TARIKH ISU SAMAN < TAHUN 1990');
                                   -20003, 'TARIKH ISU SAMAN > TARIKH SEMASA');
                                */
#define FALSE_REGISTER_NR  7003 /* -20005, 'NO PENDAFTARAN SALAH'); */
#define NO_AGE             7004 /* -20016, 'UMUR MESTI DIMASUKKAN'); */
#define FALSE_AGE          7005 /* -20017, 'UMUR MESTI LEBIH BESAR DARIPADA 7'); */
#define FALSE_POSTCODE     7006 /* -20018, 'FORMAT POSKOD SALAH : "999999"'); */
#define FALSE_OFFENCE_DATE 7007 /* -20021, 'TARIKH KESALAHAN < TAHUN 1990');
                                   -20022, 'TARIKH KESALAHAN > TARIKH ISU SAMAN');
                                */
#define FALSE_COMPOUND_DATE 7008 /* -20024, 'KOMPAUN SEBELUM < TARIKH KESALAHAN'); */
#define FALSE_COURT_DATE    7009 /* -20026, 'TARIKH HADIR MAHKAMAH < TARIKH KESALAHAN')
                                    -20027, 'TARIKH HADIR MAHKAMAH < KOMPAUN SEBELUM');
                                 */
#define FALSE_UNIT_MEASURE  7010 /* -20033, 'UNIT DIUKUR < UNIT HAD');
                                    -20034, 'UNIT UKURAN SALAH');
                                    -20035, 'UNIT DIUKUR < UNIT HAD');
                                    -20036, 'UNIT UKURAN SALAH');
                                    -20037, 'UNIT DIUKUR < UNIT HAD');
                                    -20038, 'UNIT UKURAN SALAH');
                                 */
#define NO_OFFENCE_1        7011 /* -20032, 'KESALAHAN PERTAMA MESTI DIMASUKKAN'); */
#define SUMMON_NOT_EXIST    7012 /* -20200, 'SAMAN TIDAK WUJUD'); */
#define SUMMON_PAID         7013 /* -20201, 'SAMAN TELAH DIJELASKAN'); */
#define RESIT_EXIST         7014 /* -20202, 'RESIT TELAH WUJUD'); */

#endif /* _ERRORCODES_H_ */
