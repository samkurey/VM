/********************************************************************/
/* File Name   : field_id.h                                         */
/* Author      : Vageesh Patwardhan			                        */
/* Description : This file contains #defines for the various field	*/
/*				 ids to be used in messages sent to KPP*Gate		*/
/********************************************************************/



#ifndef _FIELD_ID_
#define _FIELD_ID_

/* JPN FIELD IDS */
#define	FID_KPT_NO							1621
#define	FID_BIRTH_CERT_NO					1225
#define	FID_BIRTH_DIST_CD					1397
#define	FID_BIRTH_PLACE_CD					1233
#define	FID_BORANG_W_NO						3267
#define	FID_SWN_NO							1573
#define	FID_SAA_NO							1585
#define	FID_ADOPTION_DIST_CD				8283
#define	FID_ADOPTION_COURT_CD				1287
#define	FID_PTW_NO							1607
#define	FID_POLICE_NO						1579
#define	FID_ARMY_NO							3307
#define	FID_KPP_NO							1305
#define FID_FIRST_TIME_IND					3265
#define	FID_GENDER							1029
#define	FID_REPLY_STATUS					3311
#define	FID_PERSON_STATUS_CD				1651
#define	FID_VERIFY_STATUS_CD				1957
#define	FID_DUPLICATE_IND					3313
#define	FID_DOB								1025
#define	FID_UNKONWN_DOB_IND					3021
#define	FID_RELIGION_CD						1019
#define	FID_RACE_CD							1015
#define	FID_RESI_STAT						1655
#define	FID_CITIZENSHIP_STAT				5511
#define	FID_ARTICLE_COLOUR_CD				1539
#define	FID_HK_IND							1421
#define	FID_IC_COLOUR_CD					1583
#define	FID_ORIGINAL_NAME					3179
#define	FID_CURRENT_LONG_NAME				1009
#define	FID_CURRENT_SHORT_NAME1				3001
#define	FID_CURRENT_SHORT_NAME2				3017
#define	FID_GMPC_SHORT_NAME1				3315
#define	FID_GMPC_SHORT_NAME2				3317
#define	FID_GMPC_SHORT_NAME3				3319
#define	FID_ADDRESS1						1323
#define	FID_ADDRESS2						1325
#define	FID_ADDRESS3						1327
#define	FID_POSTCODE						1329
#define	FID_CITY_CD							1335
#define	FID_STATE_CD						1331
#define	FID_OLD_ADDRESS1					1324
#define	FID_OLD_ADDRESS2					1326
#define	FID_OLD_ADDRESS3					1328
#define	FID_OLD_POSTCODE					1330
#define	FID_OLD_CITY_CD						1336
#define	FID_OLD_STATE_CD					1332
#define	FID_KT_IND_CD						1695
#define	FID_JPN_REMARK1						1543
#define	FID_JPN_REMARK2						3047
#define	FID_GMPC_REMARK1					3321
#define	FID_GMPC_REMARK2					3345
#define	FID_AFIS_IND_CD						3029
#define	FID_CARD_VER_NO						1659
#define	FID_CARD_LOST_COUNT					1661
#define	FID_KPT_APPLN_STAT_CD				1801
#define	FID_KPT_APPLN_DT					1339
#define	FID_KPT_COMPLETE_DT				    3243  // included on 20/08/2005 for IJPN
#define	FID_KPT_COLLECTION_DT				3153
#define	FID_KPT_COLLECTION_PLACE_CD			1531
#define	FID_LAST_ADDRESS_CHANGE_DT			3309
#define	FID_LAST_KPT_GMPC_ISSUE_DT			3101
#define	FID_GMPC_VERSION_NO        			1423  // included on 20/08/2005 for IJPN
#define	FID_LOW_RES_PORTAIT					3059
#define	FID_HIGH_RES_PORTRAIT				1951
#define	FID_UPDATE_PRINTS_IND				3033
#define	FID_JUVENILE_FLAG					3065
#define	FID_QUALITY_STAT					3069
#define	FID_ORIGIN_IND						3067
#define	FID_FP_ACQUISITION_SRC				1547
#define	FID_LFP_IND							4033
#define	FID_LFP_MINU_QUALITY				4035
#define	FID_LFP_IMAGE						1947
#define	FID_LFP_ORIGINAL_MINU				3255
#define	FID_LFP_NORM_MINU					3191
#define	FID_LFP_MATRIX_BUFF					3259
#define	FID_RFP_IND							4037
#define	FID_RFP_MINU_QUALITY				4039
#define	FID_RFP_IMAGE						1949
#define	FID_RFP_ORIGINAL_MINU				3253
#define	FID_RFP_NORM_MINU					3195
#define	FID_RFP_MATRIX_BUFF				    0//3257  commented for IJPN on 5/08/2005, since not used anymore, moved this fieldid to addtional fee, as per uncle chang
#define	FID_GMPC_APPLN_TYPE					5853
#define	FID_GMPC_DOC_TYPE					3323
#define	FID_GMPC_APPLN_DT					3325
#define	FID_GMPC_APPLN_BRANCH_CD			1617
#define	FID_GMPC_APPLN_STAFF_ID				3329
#define	FID_GMPC_COLLECTION_LOCATION		3331
#define	FID_GMPC_COLLECTION_DT				3333
#define	FID_GMPC_PERSONALISED_DT			3335
#define	FID_GMPC_ISSUANCE_STAFF_ID			3337
#define	FID_GMPC_ISSUANCE_DT				3339
#define	FID_GMPC_VER_NO						3341
#define	FID_FATHER_KPT_NO					1143
#define	FID_FATHER_BIRTH_CERT_NO			5783
#define	FID_FATHER_BIRTH_DIST_CD			4125
#define	FID_FATHER_BORANG_W_NO				3271
#define	FID_FATHER_SWN_NO					5363
#define	FID_FATHER_PTW_NO					3275
#define	FID_FATHER_POLICE_NO				3279
#define	FID_FATHER_ARMY_NO					3281
#define	FID_FATHER_KPP_NO					1149
#define	FID_FATHER_LONG_NAME				1759		/* replaced by FID_FATHER_NAME 1161 */
#define	FID_FATHER_NAME						1161
#define	FID_FATHER_RESI_STAT				1763
#define	FID_FATHER_RELIGION_CD				1767
#define	FID_FATHER_RACE_CD					1771
#define	FID_FATHER_HK_IND					3349
#define	FID_FATHER_DOC_NUMBER				1151
#define	FID_FATHER_DOC_TYPE					1153
#define	FID_MOTHER_KPT_NO					1075
#define	FID_MOTHER_BIRTH_CERT_NO			5429
#define	FID_MOTHER_BIRTH_DIST_CD			4129
#define	FID_MOTHER_BORANG_W_NO				3273
#define	FID_MOTHER_SWN_NO					5391
#define	FID_MOTHER_PTW_NO					3277
#define	FID_MOTHER_POLICE_NO				3283
#define	FID_MOTHER_ARMY_NO					3285
#define	FID_MOTHER_KPP_NO					1081
#define	FID_MOTHER_LONG_NAME				1721
#define	FID_MOTHER_RESI_STAT				1729
#define	FID_MOTHER_RELIGION_CD				1725
#define	FID_MOTHER_RACE_CD					1733
#define FID_MOTHER_HK_IND					3351
#define	FID_MOTHER_DOC_NUMBER				1083
#define	FID_MOTHER_DOC_TYPE					1085
#define	FID_MOTHER_NAME						1093

#define	FID_SPONSOR_KPT_NO					1185
#define	FID_SPONSOR_POLICE_NO				3295
#define	FID_SPONSOR_ARMY_NO					3297
//#define	FID_SPONSOR_KPP_NO					1191 commenetd for IJPN as per vasanth inst.
#define FID_PERAKUAN_TARAF					1191  // included for IJPN on 20th july 2005
#define	FID_SPONSOR_LONG_NAME				1203
#define	FID_SPONSOR_PERSON_STAT_CD			3235
#define	FID_SPONSOR_IC_COLOUR_CD			3237
#define	FID_SPONSOR_DOB						1943
#define FID_FIRST_PORTRAIT					3091
#define FID_PREVIOUS_PORTRAIT				3093
#define FID_LATEST_PORTRAIT					3095

// New Requirement
#define FID_ORIGINAL_NAME_IND				8551		/* Original Name Indicator */
#define FID_LOCATION_CAT_CODE				3357
#define FID_LOCATION_AREA					3345
#define FID_JPN_REV_DESC					148
#define FID_CANCEL_TRX_DATE					1457
#define FID_RETIREMENT_DATE					1581
#define FID_IMM_APPROVAL_DATE				1549
#define FID_SURRENDER_DATE					1775
#define FID_POL_ARMY_JOIN_DATE				1779
#define FID_APPL_ID							1001
#define FID_BIRTH_STATE						1047
#define FID_PP_NO							1591	/* Duplicate field id */
#define FID_PP_EXPIRY_DATE					1551	/* Duplicate field id */
#define FID_PP_ISSUE_DATE					1593
#define FID_ARRIVAL_DATE					1599
#define FID_SURRENDER_CD					3357
#define FID_MIGRATION_DATE					1777
#define FID_KP15_ISSUE_DATE					1939
#define FID_MIGRATE_COUNTRY					1595
#define FID_PP_ISSUE_COUNTRY				1595
#define FID_POL_ARMY_CD						1575
#define FID_CITIZEN_NATIONALITY_CD			1553
#define FID_APPL_APPROVAL_DATE				8155
#define FID_APPL_DOWNLOAD_DATE				8157   // included on 20/08/2005 for IJPN
#define FID_APPL_DLV_DATE				    8159   // included on 20/08/2005 for IJPN
#define FID_APPL_ARRIVAL_DATE			    1485   // included on 20/08/2005 for IJPN
#define FID_GREEN_CARD_EXP_DATE				3187
#define FID_THIRD_PARTY_KPT					1053
#define FID_THIRD_PARTY_NAME				1071
#define FID_THIRD_PARTY_PERSON_STAT			1941
#define FID_THIRD_PARTY_IC_COLOR			6085
#define FID_BIRTH_COUNTRY					5051 /* new requirement added on 26042002 */
#define FID_MARITAL_STATUS					3023 // included on 29/09/2005 for IJPN


/* JPJ FIELD IDS */

#define FID_CATEGORY_OF_OWNER				228
#define FID_ID_NUMBER						180
#define FID_ID_NUMBER2						179
#define FID_KPT_NUMBER						179
#define FID_CATEGORY_OF_OWNER2				178
#define FID_POLICE_MILITARY_ID				182
#define FID_OLD_CATEGORY_OWNER				184 /* new requirement added on 03/10/2002 */

#define FID_SUMMONS_TYPE_2082				2082
#define FID_SUMMONS_ISSUE_CODE				2084
#define FID_DURATION_INDICATOR				2668
#define FID_DURATION						2666
#define FID_JPJ_REV_DESC					148
// for backward compatibility
#define	FID_APPNT_CAT_OWNER					178
#define FID_NEW_APPNT_CAT_OWNER				228
#define	FID_APPNT_ID_NO						180
//*************************

#define FID_LICENCE_TYPE					2550
#define	FID_CDL_CLASS_A						514
#define	FID_CDL_CLASS_B						515
#define	FID_CDL_CLASS_C						516
#define	FID_CDL_CLASS_D						517
#define	FID_CDL_CLASS_E						518
#define	FID_CDL_CLASS_F						519
#define	FID_CDL_CLASS_G						520
#define	FID_CDL_CLASS_H						521
#define	FID_CDL_CLASS_I						522
#define	FID_CDL_VALIDITY_START_DT			265
#define	FID_CDL_VALIDITY_END_DT				206
#define	FID_CDL_KEJARA_POINT				4082 /* 158 is the old value */
#define FID_CDL_KEJARA_LAST_UPD_DT			4001
#define FID_SUSPENSION_GENERATION_NO		4002
#define	FID_GDL_CLASS_1						711
#define	FID_GDL_CLASS_2						712
#define	FID_GDL_CLASS_3						713
#define	FID_GDL_CLASS_4						714  // added on 14/06/06
#define	FID_GDL_USAGE_1						689
#define	FID_GDL_USAGE_2						690
#define	FID_GDL_USAGE_3						691
#define	FID_GDL_USAGE_4						692  // added on 14/06/06
#define	FID_GDL_VALIDITY_START_DT			266
#define	FID_GDL_VALIDITY_END_DT				207
#define FID_VALIDITY_PERIOD					221 /* Added on 05/09/2002 by shiva.p */
#define	FID_PSV_CLASS_1						4003
#define	FID_PSV_CLASS_2						4004
#define	FID_PSV_CLASS_3						4005
#define	FID_PSV_USAGE_1						271
#define	FID_PSV_USAGE_2						249
#define	FID_PSV_USAGE_3						250
#define	FID_PSV_VALIDITY_START_DT			208
#define	FID_PSV_VALIDITY_END_DT				4006
#define	FID_PDL_CLASS_A						139
#define	FID_PDL_CLASS_B						140
#define	FID_PDL_CLASS_C						141
#define	FID_PDL_CLASS_D						142
#define	FID_PDL_CLASS_E						143
#define	FID_PDL_CLASS_F						144
#define	FID_PDL_CLASS_G						145
#define	FID_PDL_CLASS_H						146
#define	FID_PDL_CLASS_I						147
#define	FID_PDL_VALIDITY_START_DT			693
#define	FID_PDL_VALIDITY_END_DT				695
#define	FID_PDL_HANDICAPPED_REGN_NO			299
#define	FID_PRB_VALIDITY_START_DT			209
#define	FID_PRB_VALIDITY_END_DT				526
#define	FID_PRB_KEJARA_POINT				4080
#define FID_PRB_KEJARA_LAST_UPD_DT			4007
#define	FID_PRB_HANDICAPPED_REGN_NO			289
#define	FID_BACKLIST_DURATION_IND			4034
#define	FID_BLACKLIST_DUARATION				4035
#define	FID_OWNER_NAME						4032
#define	FID_OWNER_ADDRESS1					103
#define	FID_OWNER_ADDRESS2					104
#define	FID_OWNER_POSTCODE					188
#define	FID_OWNER_DISTRICT					106
#define	FID_OWNER_KPT_NO					4031
#define	FID_SUMMON_ISSUING BRANCH_CD		4036
#define	FID_SUMMON_SERIAL_NO				4037
#define	FID_SUMMON_YR						4038
#define	FID_SUMMON_TYPE						4039
#define	FID_SUMMON_PAID_DT					4050
#define	FID_VEH_ID							4052
#define	FID_VEH_ID_TYPE						4055
#define	FID_VEH_REGISTRATION_NO				299
#define	FID_VEH_BLACKLIST_STAT				177
#define	FID_VEH_STAT						4056
#define	FID_VEH_ENGINE_NO					4057
#define	FID_VEH_CHASSIS_NO					4058
#define	FID_VEH_MADE						4059
#define	FID_VEH_BODY_TYPE					4060
#define	FID_VEH_MODEL						4061
#define	FID_VEH_ROAD_TAX_SERIAL_NO			4062
#define	FID_VEH_ROAD_TAX_EXPIRY_DT			4063
#define	FID_VEH_CLASS_USAGE					4064
#define	FID_VEH_PERMIT_NO					4065
#define	FID_VEH_LPKP_SUSPENDED				4066
#define	FID_VEH_LPKP_END_SUSPEND_DT			4067
#define	FID_VEH_LPKP_BLACKLIST_STAT			4068
#define	FID_VEH_INSPECTION_DT				4069
#define	FID_VEH_NEXT_INSPECTION_DT			4070
#define	FID_VEH_OTHER_PERMIT				4071
#define	FID_VEH_OTHER_PERMIT_START_DT		4072
#define	FID_VEH_OTHER_PERMIT_END_DT			4073
#define	FID_VEH_INSURANCE_CD				4074
#define	FID_VEH_INSURANCE_POLICY_NO			4075
#define	FID_VEH_INSURANCE_EXPIRY_DT			4076
#define	FID_OLD_ID_NO						4081
#define	FID_TYPE_SUSPENDED					4081
#define	FID_SUSPENSION_TYPE					4082 /* Dont know what this is */
#define	FID_CLASS_SUSPENDED					4083
#define	FID_CLASS_USAGE_SUSPENDED			4084
#define	FID_SUSPENSION_START_DT				4085
#define	FID_SUSPENSION_END_DT				4086
#define	FID_LIC_TYPE_REVOKE					4087
#define	FID_REVOCATION_CD					4088
#define	FID_ROVOCATION_START_DT				4089
#define	FID_ROVOCATION_END_DT				4090
#define	FID_TYPE_REPLACED					4091
#define	FID_CLASS_REPLACED					4092
#define	FID_CLASS_USAGE_REPLACED			4093
#define	FID_REPLACEMENT_START_DT			4094
/*#define	FID_REPLACEMENT_END_DT				4095 */ // commented on 20/10/2015 for release 3.30
#define	FID_OWNER_ADDRESS3					4096
/*#define	FID_OWNER_CITY_CD					4097 */ // commented on 20/10/2015 for release 3.30
#define	FID_OWNER_CITY_DESC					4098
#define FID_JPJ_NAME1						2058
#define FID_JPJ_NAME2						2060
#define FID_JPJ_NAME3						2062
#define FID_JPJ_ADDR1						2064
#define FID_JPJ_ADDR2						2066
#define FID_JPJ_ADDR3						2068
#define FID_JPJ_POST_CODE					189
#define FID_JPJ_CITY_CODE					2074 /* Use this id when TNEW_OWNER is being used */
#define FID_JPJ_STATE_CODE					2076
#define FID_JPJ_DOB							204
#define FID_JPJ_NEW_DOB						205
#define FID_JPJ_GENDER						231
#define FID_JPJ_NEW_GENDER					296
#define	FID_JPJ_OLD_NAME1					2059
#define	FID_JPJ_OLD_NAME2					2061
#define	FID_JPJ_OLD_NAME3					2063
#define	FID_JPJ_OLD_ADDRESS1				2065
#define	FID_JPJ_OLD_ADDRESS2				2067
#define	FID_JPJ_OLD_ADDRESS3				2069
#define	FID_JPJ_OLD_POSTCODE				188
#define	FID_JPJ_OLD_CITY_CD					2075
#define	FID_JPJ_OLD_STATE_CD				2077
#define FID_VALIDITY_START_DT				209
#define FID_VALIDITY_END_DT					207
#define FID_OLD_START_DT					208
#define FID_OLD_END_DT						206
#define FID_LIC_TYPE_CDL					4071
#define FID_LIC_TYPE_GDL					4072
#define FID_LIC_TYPE_PSV					4073
#define FID_LIC_TYPE_PDL					4074
#define FID_LIC_TYPE_PRB					4075
#define FID_NEW_PRB_CLASS_A					4062
#define FID_NEW_PRB_CLASS_B					4063
#define FID_NEW_PRB_CLASS_C					4064
#define FID_NEW_PRB_CLASS_D					4065
#define FID_NEW_PRB_CLASS_E					4066
#define FID_NEW_PRB_CLASS_F					4067
#define FID_NEW_PRB_CLASS_G					4068
#define FID_NEW_PRB_CLASS_H					4069
#define FID_NEW_PRB_CLASS_I					4070
#define FID_CDL_HANDICAPPED_REG_NO			4076
#define FID_CDL_PHYSICAL_RESTRICT_CD		4077
#define FID_PDL_HANDICAPPED_REG_NO			299
#define FID_PDL_PHYSICAL_RESTRICT_CD		190
#define FID_PRB_HANDICAPPED_REG_NO			289
#define FID_PRB_PHYSICAL_RESTRICT_CD		4081
#define FID_EXISTING_CLASS_BEGIN			50001
#define FID_EXISTING_CLASS_USAGE_BEGIN		51001

#define FID_CARD_SR_NO						4021
#define FID_ISSUANCE_DATE					4022
#define FID_ISSUANCE_STAFF_ID				4023
#define FID_COLLECTION_BRANCH_CODE			4024
#define FID_CDL_SUSPENSION_START_DATE		2670
#define FID_CDL_SUSPENSION_END_DATE			2672
#define FID_SUSPENSION_CLASS_USAGE			4020
#define FID_SUSPENSION_LICENSE_CLASS		2723

#define FID_VEHICLE_ID						377	
#define FID_VEHICLE_ID_TYPE					125
#define FID_VEHICLE_STATUS					4014
#define FID_ENGINE_NUMBER					300
#define FID_CHASIS_NUMBER					301
#define FID_VEHICLE_MADE					309
#define FID_VEHICLE_BODY_TYPE				314
#define FID_VEHICLE_MODEL					312
#define FID_ROAD_TAX_NUMBER					340
#define FID_ROAD_TAX_EXPIRY_DATE			332
#define FID_CLASS_USAGE						271
#define FID_PERMIT_NUMBER					2073
#define FID_LPKP_SUSPENDED					4015
#define FID_LPKP_SUSPEND_DATE				4016
#define FID_LPKP_BL_STATUS					290
#define FID_VEHICLE_INSPECTION_DATE			2017
#define FID_VEHICLE_INSP_NEXT_DATE			2021
#define FID_OTHER_PERMIT					4017
#define FID_OTHER_PERMIT_START_DATE			4018
#define FID_OTHER_PERMIT_END_DATE			4019
#define FID_INSURANCE_CODE					336
#define FID_INSURANCE_POLICY_NUMBER			338
#define FID_INSURANCE_EXPIRY_DATE			334

#define FID_OFFICER_ID						4026
#define FID_BRANCH_ID						2540
#define FID_SUMMONS_SERIAL_NUMBER			2770
#define FID_SUMMONS_YEAR					2750
#define FID_SUMMONS_TYPE					2546
#define FID_TRANS_DATE						2773
#define FID_TRANS_TIME						2526
#define FID_LOCATION_DETAIL					4030
#define FID_LOCATION_CODE					2528
#define FID_COURT_CODE						2552
#define FID_COURT_DATE						2554
#define FID_COURT_TIME						2556
#define FID_LAST_PAYMENT_DATE				2548
#define FID_TRAILER_NUMBER					4031
#define FID_VEHICLE_TYPE					4032
#define FID_SECTION_CODE_1					4033
#define FID_LIMITED_PERMITTED_1				4034
#define FID_RECORDED_LIMIT_1				4035
#define FID_SECTION_CODE_2					4036
#define FID_LIMITED_PERMITTED_2				4037
#define FID_RECORDED_LIMIT_2				4038
#define FID_SECTION_CODE_3					4039
#define FID_LIMITED_PERMITTED_3				4040
#define FID_RECORDED_LIMIT_3				4041
#define FID_SUMMONS_AMOUNT					2730
#define FID_NOTICE_TYPE_1					4042
#define FID_NOTICE_SERIAL_NUMBER_1			4043
#define FID_NOTICE_TYPE_2					4044
#define FID_NOTICE_SERIAL_NUMBER_2			4045
#define FID_NOTICE_TYPE_3					4046
#define FID_NOTICE_SERIAL_NUMBER_3			4047
#define FID_NOTICE_TYPE_4					4048
#define FID_NOTICE_SERIAL_NUMBER_4			4049
#define FID_DATE_PG1						4050
#define FID_PATH_FROM						4051
#define FID_PATH_TO							4052
#define FID_LKM_NUMBER						340
#define FID_LKM_TRAILER_NUMBER				4053
#define FID_LPKP_NUMBER						2070
#define FID_LPKP_TRAILER_NUMBER				4054
#define FID_PERMIT_TRAILER_NUMBER			4055
#define FID_LICENSE_CONDITION				4056
#define FID_GOODS_PASSENGER					4057
#define FID_SUMMON_STATUS					2633
#define FID_WEIGHING_SERIAL_NUMBER			4058
#define FID_OWNER_SUMMON					4059
#define FID_JPJ_WITNESS_KPT					4060
#define FID_JPJ_NAME						4061
#define FID_TEAM							4027
#define FID_OP_CODE							4028
#define FID_TRANS_CODE						4029
#define FID_OFFENCE_CAT1					2576
#define FID_OFFENCE_CODE1					2578
#define FID_OFFENCE_STAT1					2580
#define FID_OFFENCE_TYPE1					2800
#define FID_OFFENCE_AMT1					2584
#define FID_OFFENCE_CAT2					2586
#define FID_OFFENCE_CODE2					2588
#define FID_OFFENCE_STAT2					2590
#define FID_OFFENCE_TYPE2					2592
#define FID_OFFENCE_AMT2					2594
#define FID_OFFENCE_CAT3					2596
#define FID_OFFENCE_CODE3					2598
#define FID_OFFENCE_STAT3					2600
#define FID_OFFENCE_TYPE3					2602
#define FID_OFFENCE_AMT3					2604
#define FID_OFFENCE_CAT4					2606
#define FID_OFFENCE_CODE4					2608
#define FID_OFFENCE_STAT4					2610
#define FID_OFFENCE_AMT4					2612
#define FID_SUMMONS_SETTLE_DATE				2546
#define FID_OPER_TYPE						4039
#define FID_MCAD_ID							4093


#define FID_EFFECTIVE_DATE					298
#define FID_REPORTER_CODE					151
#define FID_CASE_NUMBER						167
#define FID_SECTION							163
#define FID_ACTION							224
	
#define	FID_UPD_PSV_CLASS_1					4004
#define	FID_UPD_PSV_CLASS_2					4005
#define	FID_UPD_PSV_CLASS_3					4006
#define FID_UPD_PRB_PHYSICAL_RESTRICT_CD	4078
#define FID_LIC_SR_NO						183
#define FID_SURREND_REASON_CD				4094
#define FID_VERIFIED_STAT					177
#define FID_FIRST_ISSUE_DATE				210
#define FID_ENDORSE_IND						275
#define FID_BADGE_NO						168
#define FID_OFFENCE_POINT					158
#define FID_GENERATION						2662
#define FID_PRB_PREV_STAT					1140
#define FID_PDL_PART1_EFFECT_DATE			681
#define FID_CDL_IND							701
#define FID_CHANGE_OWNER_CAT_REASON			4094

/* New message - Update new class, usage for PSV/GDL */
#define FID_UPD_NEW_CLASS_1					136
#define FID_UPD_NEW_CLASS_2					137
#define FID_UPD_NEW_CLASS_3					138
#define FID_UPD_NEW_USAGE_1					293
#define FID_UPD_NEW_USAGE_2					294
#define FID_UPD_NEW_USAGE_3					295
#define FID_UPD_OLD_CLASS_1					139
#define FID_UPD_OLD_CLASS_2					140
#define FID_UPD_OLD_CLASS_3					141
#define FID_UPD_OLD_USAGE_1					271
#define FID_UPD_OLD_USAGE_2					249
#define FID_UPD_OLD_USAGE_3					250
#define FID_OLD_CLASS_A						3001
#define FID_OLD_CLASS_B						3002
#define FID_OLD_CLASS_C						3003
#define FID_OLD_CLASS_D						3004
#define FID_OLD_CLASS_E						3005
#define FID_OLD_CLASS_F						3006
#define FID_OLD_CLASS_G						3007
#define FID_OLD_CLASS_H						3008
#define FID_OLD_CLASS_I						3009
#define FID_OLD_CLASS_1						3010
#define FID_OLD_CLASS_2						3011
#define FID_OLD_CLASS_3						3012
#define FID_OLD_USAGE_1						3013
#define FID_OLD_USAGE_2						3014
#define FID_OLD_USAGE_3						3015
#define FID_REV_PHYSICAL_REST_CD			3016
#define FID_REV_HANDICAP_REG_NO				3017

/* New requirement - LI_GET_JPJ_DATA */
#define FID_CDL_VERIFIED_STAT				4076
#define FID_GDL_VERIFIED_STAT				4079
#define FID_PSV_VERIFIED_STAT				4078

// To be suspended info in the download DL - new requirement
#define FID_SUSPENSION_STATUS				192
#define FID_SUSPENSION_REPORTER_NO			2706
#define FID_TBSUS_GENERATION_NO				4008
#define FID_KEJARA_POINT					158
#define FID_SURRENDER_LAST_DATE				200
#define FID_APPEAL_LAST_DATE				4009
#define FID_ACTUAL_SURRENDER_DATE			217
#define FID_SURRENDER_BRANCH_CODE			4010
#define FID_KP_APPEAL_DATE					214
#define FID_KP_DECISION_STATUS				753
#define FID_KP_DECISION_DATE				203
#define FID_MINISTER_APPEAL_DATE			4011
#define FID_MINISTER_DECISION_STATUS		4012
#define FID_MINISTER_DECISION_DATE			4013
#define FID_PRB_CDL_STATUS					264


/* JIM FIELD IDS */
#define FID_PASSPORT_NO						5295
#define FID_JIM_DOC_TYPE					5617
#define FID_JIM_ID_TYPE						6571
#define FID_EXPIRATION_DATE					6255
#define FID_JIM_NAME						1009
#define FID_DOWNLOAD_CHIP_INDICATOR			3341
#define FID_JIM_TRANS_ID					3347
#define FID_CAD_SERIAL_NUMBER				3343
#define FID_JIM_LOCATION					3345
#define FID_MULTIPLE_REC_IND				1227
	
/* DUPLICATE FIELD IDS */
#define	FID_TEST_RESULT_REC_START			10001
#define	FID_TEST_RESULT_REC_END				19999
#define	FID_SUSPENSION_REC_START			20001
#define	FID_SUSPENSION_REC_END				29999
#define	FID_REVOCATION_REC_START			30001
#define	FID_REVOCATION_REC_END				39999
#define FID_CANCELLATION_REC_START			40001
#define FID_CANCELLATION_REC_END			49999
#define	FID_ENDORSEMENT_REC_START			50001
#define	FID_ENDORSEMENT_REC_END				59999
#define	FID_BLACKLIST_REC_START				60001
#define	FID_BLACKLIST_REC_END				69999
#define FID_BL_LICENCE_TYPE_START			70001
#define FID_BL_LICENCE_TYPE_END				79999
#define	FID_SUMMONS_REC_START				80001
#define	FID_SUMMONS_REC_END					89999
#define	FID_VEHICLE_CHECK_REC_START			90001
#define	FID_VEHICLE_CHECK_REC_END			99999
#define	FID_PASSPORT_REC_START				100001
#define	FID_PASSPORT_REC_END				199991

	
/* JPJ Download DL Reversal Info */
#define FID_GMPC_STATUS						2079
#define FID_CLASSD_APPLY_DATE				4083

/* PDL */
#define FID_REV_PDL_INFO_START				4401
#define FID_REV_PDL_INFO_END				4411

#define	FID_PDL_NO_BLACKLIST_CTR			4401
#define	FID_PDL_O_BLACKLIST_CTR				4402
#define	FID_PDL_SUSP_CTR					4403
#define	FID_PDL_CLASS_SUSP_CTR				4404
#define	FID_PDL_SERIAL_NO					4405
#define	FID_PDL_EXEMPTION_CODE				4406
#define	FID_PDL_FIRST_ISSUE_DATE			4407
#define	FID_PDL_PART1_EFF_DATE				4408
#define	FID_PDL_PART1_EXP_DATE				4409
#define	FID_PDL_ENDORSEMENT_IND				4410
#define	FID_PDL_CDL_IND						4411

/* PRB */
#define FID_REV_PRB_INFO_START				4501
#define FID_REV_PRB_INFO_END				4516

#define	FID_PRB_NO_BLACKLIST_CTR			4501
#define	FID_PRB_O_BLACKLIST_CTR				4502
#define	FID_PRB_SUSP_CTR					4503
#define	FID_PRB_CLASS_SUSP_CTR				4504
#define	FID_PRB_SERIAL_NO					4505
#define	FID_PRB_EXEMPTION_CODE				4506
#define	FID_PRB_ENDORSEMENT_IND				4510
#define	FID_PRB_OFFENCE_POINT				4512
#define	FID_PRB_GENERATION					4513
#define	FID_PRB_STATUS_DATE					4514
#define	FID_PRB_PREVIOUS_STATUS				4515
#define	FID_PRB_STATUS						4516

/* CDL */
#define FID_REV_CDL_INFO_START				4600
#define FID_REV_CDL_INFO_END				4611

#define	FID_CDL_VERIFIED_STATUS				4600
#define	FID_CDL_NO_BLACKLIST_CTR			4601
#define	FID_CDL_O_BLACKLIST_CTR				4602
#define	FID_CDL_SUSP_CTR					4603
#define	FID_CDL_CLASS_SUSP_CTR				4604
#define	FID_CDL_SERIAL_NO					4605
#define	FID_CDL_EXEMPTION_CODE				4606
#define	FID_CDL_ENDORSEMENT_IND				4610
#define	FID_CDL_FIRST_ISSUE_DATE			4611

		
/* PSV */
#define FID_REV_PSV_INFO_START				4700
#define FID_REV_PSV_INFO_END				4712

#define	FID_PSV_VERIFIED_STATUS				4700
#define	FID_PSV_NO_BLACKLIST_CTR			4701
#define	FID_PSV_O_BLACKLIST_CTR				4702
#define	FID_PSV_SUSP_CTR					4703
#define	FID_PSV_CLASS_SUSP_CTR				4704
#define	FID_PSV_SERIAL_NO					4705
#define	FID_PSV_EXEMPTION_CODE				4706
#define	FID_PSV_ENDORSEMENT_IND				4711
#define	FID_PSV_BADGE_NO					4712

/* GDL */
#define FID_REV_GDL_INFO_START				4800
#define FID_REV_GDL_INFO_END				4812

#define	FID_GDL_VERIFIED_STATUS				4800
#define	FID_GDL_NO_BLACKLIST_CTR			4801
#define	FID_GDL_O_BLACKLIST_CTR				4802
#define	FID_GDL_SUSP_CTR					4803
#define	FID_GDL_CLASS_SUSP_CTR				4804
#define	FID_GDL_SERIAL_NO					4805
#define	FID_GDL_EXEMPTION_CODE				4806
#define	FID_GDL_ENDORSEMENT_IND				4811
#define	FID_GDL_BADGE_NO					4812

/* New field ids */
#define FID_CHEQUE_NO						501
#define FID_PAY_COLLECTION_DATE				6263
#define FID_APPLICATION_ID					2734
#define FID_OLD_EFFECTIVE_DATE				4713
#define FID_EXPIRY_DATE						4714


/* New field id's added on 25/09/2002 by shiva.p */
#define FID_NAME_APPRVL_REF_NO				7955
#define FID_NAME_CHG_CODE					1663
#define FID_NAME_REG_DATE					1667
#define FID_IMM_REF_NO						1557 /* Duplicate field id */
#define FID_IMM_REF_NUM						1561 /* Duplicate field id */
#define FID_IMM_EXPIRY_DATE					1551 /* Duplicate field id */
#define FID_OLD_KPT_NO						1303
#define FID_KPT_CANCEL_DATE					1371
#define FID_KPT_CANCEL_REASON_CODE			1781

#define FID_DESTROY_REASON_CODE				8465 /* Added on 08/04/2003 by shiva.p */

#define FID_KPT_REG_DATE					1653 //Added by Amrjith on 19th Aug '04. JRS 146.

#define FID_ENTRY_PERMIT_NO					1557
#define FID_PERMIT_ISSUE_DATE				3085
#define FID_DOC_TYPE_CODE					1597 //Added by Amarjith on 2nd Sept. 2004. JRS 147.
#define FID_ENTRY_PERMIT_TYPE				1559 //Added by Amarjith on 2nd Sept. 2004. JRS 147.
#define FID_IMM_CTRY_CODE					1179 //JRS 147, Amarjith, 25th Feb 05.
#define FID_IMM_CTR_CODE_4DIGIT 			3011 //Added on 28th June 2006

/* Added for IJPN on 14 Apr 2005 */
/* mykid kptc issunace */
#define FID_THIRD_PARTY_ID_NO				8297
#define FID_THIRD_PARTY_ID_TYPE				8299
#define FID_THIRD_PARTY_LNAME				1481
#define FID_THIRD_PARTY_RELATIONSHIP_IND	1987

/* Added for IJPN on 15 Apr 2005 */
/* jpn extract update */
#define FID_EXT_ID_NO						1061
#define FID_EXT_ID_TYPE						1063
#define FID_ACTIVITY_CODE					1065
#define FID_LEG_APPL_ID						1067
#define FID_EXT_APPL_DATE					1069
#define FID_EXT_TYPE_CODE					1075
#define FID_EXTR_ID_NO						1077
#define FID_EXTR_ID_TYPE					1079
#define FID_EXTR_ID_ISSUE_COUNTRY			1081 /* CITIZENNATIONCODE */
#define FID_EXTR_RELATION_CODE				1083
#define FID_EXTR_ADDRESS1					1085
#define FID_EXTR_ADDRESS2					1087
#define FID_EXTR_ADDRESS3					1089
#define FID_EXTR_POST_CODE					1091
#define FID_EXTR_SATTE_CODE					1093
#define FID_EXTR_CITY_CODE					1095
#define FID_EXTR_CERT_SER_NO				1097 /* DOCSERNO */
#define FID_EXTR_APPL_PLACE_CODE			1099 /* BRANCHCODE */
#define FID_EXTR_USER_ID					1103
#define FID_EXTR_UPD_DATE					1105 /* TIMESTAMP */
#define FID_EXTR_NAME						1107

/* Added for IJPN on 25 Apr 2005 */
/* jpn update (JPN GMPC APPLICATION STATUS TO LEAGACY)*/
#define FID_INDICATOR1						1819 // to be decided
#define FID_PROBL_REASON_CODE				1197 
#define FID_APPL_STATUS2					1483

/* Added for IJPN on 26 Apr 2005 */
/* li_jpn_update */
#define FID_BYPASS_AFIS_IND					3365

#define FID_LEG_TXN_CODE					3247
#define FID_APPRVLDOC						1817
#define FID_SPONSOR_ID_NO					1199
#define FID_SPONSOR_ID_TYPE					1529 // added on 18/08/2005 for IJPN
#define FID_RELATION_CODE					3239
#define FID_KTSTARTDATE						5053
#define FID_KTENDDATE						5055
#define FID_RJIND							5057
#define FID_RJSTARTDATE						5059
#define FID_RJENDDATE						5061
#define FID_JPN_DOC_NO						1195

/* Added for IJPN on 9th May 2005 */
/* li_jpn_update */
#define FID_CALCULATED_COMPOUND_FEE			3249
#define FID_PAID_FEE						3041
#define FID_ADDITIONAL_FEE					3257  // added for IJPN on 5/08/2005
#define FID_APPL_TYPE						1815
#define FID_INDICATOR2						3261


/* Added for IJPN on 26 Apr 2005 */
/* li_jpn_upd_ic_appl_info */
#define FID_BATCH_NO						3241
#define FID_KPT_SEND_DATE					3245

/* Added for IJPN on 5th May 2005 */
/* li_jpn_upd_fee_info */
#define FID_AMTKH							1805
#define FID_AMTPR							1807
#define FID_AMTHG							1809
#define	FID_AMTKL							1811
#define FID_AMTRK							1813
#define FID_APPR_DATE						3035
#define FID_APPR_REF_NO						3037
#define FID_AMTPF							3039
#define FID_AMTAF							3251

/* end IJPN */

/*New field id's added on 14/02/2005 by Prakash for get_imm_pr_info */
#define FID_IMM_ENTRY_PERMIT_NO				1107
#define FID_PERMIT_TYPE						1109
#define FID_NAME_IMM_PR						1101
#define FID_NAME_IMM_PR_REQ					1009
#define FID_PASSPORT_NO_IMM51				1103
#define FID_PASSPORT_TYPE					1105
#define FID_ENTRY_PERMIT_DATE				1111
#define FID_IMM_REFERENCE_NO				1127
#define FID_IMM_REFERENCE_DATE				1121
#define FID_COUNTRY_ISSUE_PASSPORT_CODE		1123
#define FID_GENDER_IMM_PR					1125
#define FID_RELIGION_CODE_IMM				1173
#define FID_IMAGE_IMM						1175
#define FID_BIRTH_DATE_IMM					1177
#define FID_CITIZENSHIP_IMM					1179
#define FID_FIN_NO_IMM						1181
#define FID_UNKNOWN_BIRTH_IND				1033

/* Added for IJPN on 16th sep 2005 */
/* li_imm_pr_kpt_update */

#define FID_IMM_IC_NO       				1182

/* Added on 5/10/05 for IJPN */
#define FID_ID_TYPE         				1047
#define FID_ID_NO      				        1533
#define FID_SPONSOR_IDTYPE       			1187

/* Added on 14/10/05 for IJPN */
#define FID_JKIND         					1051
#define FID_IJPN_GMPC_IND         			1055

/* Added on 24/11/05 for IJPN for 209000 message*/
#define FID_COMP_SER_NO    					3043
#define FID_EXT_REMARKS         			3045

/* Added on 18/04/06 for IJPN */
#define FID_TELEPHONE_NO         			1337

/* Added on 10/05/06 for IJPN */
#define FID_CARDPERSONALDATE       			3242


/* Added on 11/07/2008 for jpnupdate */
#define FID_MYPRCODE						4957

/* Added on 12/09/2008 for jpnupdate */
#define FID_EXTRAFEE						8027

/* Added on 17/04/2009 for jpnupdate */
#define FID_APPRV_USER_ID					1665

/* Added on 25/06/2010 for jpndatamaint for 3.18 my tentera changes*/
#define FID_MIL_TYPE_RJ						6651
#define	FID_MIL_RANK_KT						6653

/* Added on 07/09/2010 for jpndatamaint for 3.19 CR 201 changes*/
#define FID_BRANCH_CODE_JPN					6553

/* Added on 29/07/2011 for jpndatamaint for 3.22 CR 237 changes*/
#define FID_POLICE_TENTERA_IND				7813

// Added this on 08/11/2011 for CR 242 birthdate sync indicator
#define	FID_TCDL_ADJUSTMENT_IND 			4612  

/* Added this on 29/11/2011 for CR 242 for JPJ Update messages */
#define FID_JPN_BIRTH_DATE  				265

#define FID_ADJ_PERIOD      				266

#define FID_ADJ_AMT         				267

#define	FID_KPKNO				 			5441  // Added this for CR 253 for Release 3.24

#define	FID_FIRSTICISSUEDATE	 			7511  // Added this for CR 253 for Release 3.24
#define	FID_FIRSTICISSUEPLACE	 			7513  // Added this for CR 253 for Release 3.24
#define	FID_ADDITIONALINFO  	 			7515  // Added this for CR 253 for Release 3.24
#define	FID_JPNREMARK3      	 			7517  // Added this for CR 253 for Release 3.24
#define	FID_EXTRACTORTYPE      	 			7551  // Added this for CR 253 for Release 3.24

#define	FID_APPT_DATE       	 			1901  // Added this on 19/09/2013 for CR 278 for Drive thru card

#define	FID_ACTUAL_KPTNO       	 			8197  // Added this on 13/02/2014 for CR 283 for Release 3.27 
                                                  // for Avoiding Duplicate Record at JPN Host

#define	FID_LOSTCNTNEG       	 			9109  // Added this on 19/02/2014 for CR 284 for Release 3.27 
#define	FID_LOSTCNTCRIME       	 			9105  // Added this on 19/02/2014 for CR 284 for Release 3.27 
#define	FID_LOSTCNTDIS       	 			9107  // Added this on 19/02/2014 for CR 284 for Release 3.27 

#define	FID_KOD_MUKIM       	 			9101  // Added this on 27/05/2014 for CR 282 for Release 3.28 
#define	FID_TEMPAT_TAHANAN     	 			9103  // Added this on 27/05/2014 for CR 282 for Release 3.28 

#define	FID_EXTADDRESS1	     	 			1923  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_EXTADDRESS2	     	 			1925  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_EXTADDRESS3	     	 			1927  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_EXTPOSTCODE	     	 			1929  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_EXTCITYCODE	     	 			1931  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_EXTSTATECODE     	 			1933  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_EXTAGENCYTYPE     	 			4095  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_EXTAGENCYNAME		 			4097  // Added this on 20/10/2015 for CR 295 for Release 3.30 

#define	FID_RECORD1		     	 			1121  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD2		     	 			1123  // Added this on 20/10/2015 for CR 295 for Release 3.30
#define	FID_RECORD3		     	 			1125  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD4		     	 			1127  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD5		     	 			1129  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD6		     	 			1131  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD7		     	 			1133  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD8		     	 			1135  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD9		     	 			1137  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD10	     	 			1139  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD11	     	 			1141  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD12	     	 			1145  // Added this on 20/10/2015 for CR 295 for Release 3.30
#define	FID_RECORD13	     	 			1147  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD14	     	 			1155  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD15	     	 			1157  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD16	     	 			1159  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD17	     	 			1163  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD18	     	 			1165  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD19	     	 			1167  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD20	     	 			1169  // Added this on 20/10/2015 for CR 295 for Release 3.30
#define	FID_RECORD21	     	 			1171  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD22	     	 			1173  // Added this on 20/10/2015 for CR 295 for Release 3.30
#define	FID_RECORD23	     	 			1175  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD24	     	 			1177  // Added this on 20/10/2015 for CR 295 for Release 3.30 
#define	FID_RECORD25	     	 			1181  // Added this on 20/10/2015 for CR 295 for Release 3.30

#define	FID_REQUSERID	     	 			3113  // Added this on 27/04/2017 for CR 326 for Release 3.35 
#define	FID_REQKPTNO	     	 			1381  // Added this on 27/04/2017 for CR 326 for Release 3.35 
#define	FID_REQTIMESTAMP     	 			1339  // Added this on 27/04/2017 for CR 326 for Release 3.35 
#define	FID_APPRVKPTNO	     	 			2355  // Added this on 27/04/2017 for CR 326 for Release 3.35 

#define	FID_TRANS_TYPE	     	 			8181  //Added by Salmi Date: 23th Mar,2020  Added new field id, CRAPPL-  SKP002/CR/2020
#define FID_APPROVAL_STATUS                 1051  //Added by Salmi Date: 23th Mar,2020  Added new field id, CRAPPL-  SKP002/CR/2020	
#define FID_REMARK                          6151  //Added by Salmi Date: 23th Mar,2020  Added new field id, CRAPPL-  SKP002/CR/2020	

#define FID_KP12_COLLBRANCHCODE				1531 //Added this for CR SKP023_CR_2019 on Release 3.45
#define FID_KP12_SLIPNO						8177 //Added this for CR SKP023_CR_2019 on Release 3.45
#endif /* _FIELD_ID_ */

