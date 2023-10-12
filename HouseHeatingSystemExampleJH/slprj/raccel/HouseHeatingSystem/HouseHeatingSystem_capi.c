#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "HouseHeatingSystem_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "HouseHeatingSystem.h"
#include "HouseHeatingSystem_capi.h"
#include "HouseHeatingSystem_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"HouseHeatingSystem/Daily temperature variation" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
"HouseHeatingSystem/Control/1//Natural gas density" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"HouseHeatingSystem/Control/Valve open mass flow rate" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"HouseHeatingSystem/Control/Integrator" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 4 , 0 , TARGET_STRING ( "HouseHeatingSystem/Control/Relay" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 5 , 0 , TARGET_STRING (
"HouseHeatingSystem/Control/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 6 , 0 , TARGET_STRING ( "HouseHeatingSystem/Control/Gas valve lag" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"HouseHeatingSystem/Solver Configuration/RTP_1" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 8 , 0 , TARGET_STRING (
"HouseHeatingSystem/House thermal network/Indoor average temperature/Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"HouseHeatingSystem/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"HouseHeatingSystem/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"HouseHeatingSystem/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"HouseHeatingSystem/Solver Configuration/EVAL_KEY/INPUT_4_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"HouseHeatingSystem/Solver Configuration/EVAL_KEY/INPUT_5_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"HouseHeatingSystem/Solver Configuration/EVAL_KEY/INPUT_6_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"HouseHeatingSystem/Solver Configuration/EVAL_KEY/STATE_1" ) , TARGET_STRING
( "" ) , 0 , 0 , 2 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0
, 0 } } ; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 16
, TARGET_STRING ( "HouseHeatingSystem/T_expected  (degC)" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 17 , TARGET_STRING (
"HouseHeatingSystem/Daily temperature variation" ) , TARGET_STRING (
"Amplitude" ) , 0 , 0 , 0 } , { 18 , TARGET_STRING (
"HouseHeatingSystem/Daily temperature variation" ) , TARGET_STRING ( "Bias" )
, 0 , 0 , 0 } , { 19 , TARGET_STRING (
"HouseHeatingSystem/Daily temperature variation" ) , TARGET_STRING (
"Frequency" ) , 0 , 0 , 0 } , { 20 , TARGET_STRING (
"HouseHeatingSystem/Daily temperature variation" ) , TARGET_STRING ( "Phase"
) , 0 , 0 , 0 } , { 21 , TARGET_STRING (
"HouseHeatingSystem/Control/Valve open mass flow rate" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 22 , TARGET_STRING (
"HouseHeatingSystem/Control/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 23 , TARGET_STRING (
"HouseHeatingSystem/Control/Relay" ) , TARGET_STRING ( "OnSwitchValue" ) , 0
, 0 , 0 } , { 24 , TARGET_STRING ( "HouseHeatingSystem/Control/Relay" ) ,
TARGET_STRING ( "OffSwitchValue" ) , 0 , 0 , 0 } , { 25 , TARGET_STRING (
"HouseHeatingSystem/Control/Relay" ) , TARGET_STRING ( "OnOutputValue" ) , 0
, 0 , 0 } , { 26 , TARGET_STRING ( "HouseHeatingSystem/Control/Relay" ) ,
TARGET_STRING ( "OffOutputValue" ) , 0 , 0 , 0 } , { 27 , TARGET_STRING (
"HouseHeatingSystem/Control/Gas valve lag" ) , TARGET_STRING ( "A" ) , 0 , 0
, 0 } , { 28 , TARGET_STRING ( "HouseHeatingSystem/Control/Gas valve lag" ) ,
TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 29 , TARGET_STRING (
"HouseHeatingSystem/Heater/speed" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 }
, { 30 , TARGET_STRING (
"HouseHeatingSystem/House thermal network/Indoor average temperature/Gain" )
, TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 31 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Radiator1/Subsystem_around_RTP_DB4299FD_T/Subsystem_around_RTP_DB4299FD_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 32 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Radiator2/Subsystem_around_RTP_A29E2159_T/Subsystem_around_RTP_A29E2159_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 33 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Radiator3/Subsystem_around_RTP_DE69E3BD_T/Subsystem_around_RTP_DE69E3BD_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 34 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Radiator4/Subsystem_around_RTP_41CF1C29_T/Subsystem_around_RTP_41CF1C29_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 35 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Room 1/Subsystem_around_RTP_408D6EE7_T/Subsystem_around_RTP_408D6EE7_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 36 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Room 1/Subsystem_around_RTP_4622C0C9_T/Subsystem_around_RTP_4622C0C9_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 37 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Room 1/Subsystem_around_RTP_723C7CD8_T/Subsystem_around_RTP_723C7CD8_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 38 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Room 1/Subsystem_around_RTP_A82CA1E5_T/Subsystem_around_RTP_A82CA1E5_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 39 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Room 2/Subsystem_around_RTP_AE677BF7_T/Subsystem_around_RTP_AE677BF7_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 40 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Room 2/Subsystem_around_RTP_D352D324_T/Subsystem_around_RTP_D352D324_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 41 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Room 2/Subsystem_around_RTP_D61DC5A1_T/Subsystem_around_RTP_D61DC5A1_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 42 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Room 2/Subsystem_around_RTP_DE0D8F78_T/Subsystem_around_RTP_DE0D8F78_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 43 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Room 3/Subsystem_around_RTP_4C5899FF_T/Subsystem_around_RTP_4C5899FF_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 44 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Room 3/Subsystem_around_RTP_A39492E4_T/Subsystem_around_RTP_A39492E4_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 45 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Room 3/Subsystem_around_RTP_A8C8D5D9_T/Subsystem_around_RTP_A8C8D5D9_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 46 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Room 3/Subsystem_around_RTP_D23C0C5C_T/Subsystem_around_RTP_D23C0C5C_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 47 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Room 4/Subsystem_around_RTP_0A6A6F38_T/Subsystem_around_RTP_0A6A6F38_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 48 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Room 4/Subsystem_around_RTP_7A009BB7_T/Subsystem_around_RTP_7A009BB7_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 49 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Room 4/Subsystem_around_RTP_E622B04D_T/Subsystem_around_RTP_E622B04D_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 50 , TARGET_STRING (
 "HouseHeatingSystem/House thermal network/Room 4/Subsystem_around_RTP_E7E0DA7A_T/Subsystem_around_RTP_E7E0DA7A_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 51 , TARGET_STRING (
"NG_density" ) , 0 , 0 , 0 } , { 52 , TARGET_STRING ( "cost" ) , 0 , 0 , 0 }
, { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . n41c3y4pnu , & rtB . bsadk0jbva ,
& rtB . j42ejggumw , & rtB . pue0qcaqsp , & rtB . mwexkxe4pu , & rtB .
m24c4vhtyg , & rtB . hnbdpwqz2n , & rtB . getpknuwvw , & rtB . psybk0zlj0 , &
rtB . dhygcrhrhg [ 0 ] , & rtB . jcuxftpgbe [ 0 ] , & rtB . ilmr4xzw55 [ 0 ]
, & rtB . mitljv53sz [ 0 ] , & rtB . pgk32jnvcv [ 0 ] , & rtB . fmg02zskcs [
0 ] , & rtB . n1aqtv5v4t [ 0 ] , & rtP . T_expecteddegC_Value , & rtP .
Dailytemperaturevariation_Amp , & rtP . Dailytemperaturevariation_Bias , &
rtP . Dailytemperaturevariation_Freq , & rtP .
Dailytemperaturevariation_Phase , & rtP . Valveopenmassflowrate_Gain , & rtP
. Integrator_IC , & rtP . Relay_OnVal , & rtP . Relay_OffVal , & rtP .
Relay_YOn , & rtP . Relay_YOff , & rtP . Gasvalvelag_A , & rtP .
Gasvalvelag_C , & rtP . speed_Value , & rtP . Gain_Gain , & rtP .
RTP_DB4299FD_T_Value , & rtP . RTP_A29E2159_T_Value , & rtP .
RTP_DE69E3BD_T_Value , & rtP . RTP_41CF1C29_T_Value , & rtP .
RTP_408D6EE7_T_Value , & rtP . RTP_4622C0C9_T_Value , & rtP .
RTP_723C7CD8_T_Value , & rtP . RTP_A82CA1E5_T_Value , & rtP .
RTP_AE677BF7_T_Value , & rtP . RTP_D352D324_T_Value , & rtP .
RTP_D61DC5A1_T_Value , & rtP . RTP_DE0D8F78_T_Value , & rtP .
RTP_4C5899FF_T_Value , & rtP . RTP_A39492E4_T_Value , & rtP .
RTP_A8C8D5D9_T_Value , & rtP . RTP_D23C0C5C_T_Value , & rtP .
RTP_0A6A6F38_T_Value , & rtP . RTP_7A009BB7_T_Value , & rtP .
RTP_E622B04D_T_Value , & rtP . RTP_E7E0DA7A_T_Value , & rtP . NG_density , &
rtP . cost , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 , 4 , 1 , 213 , 1 } ; static const real_T rtcapiStoredFloats [ ] = {
0.0 , 1.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , (
NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ]
, ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 1 , ( uint8_T ) 0
} } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals ,
16 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 35 ,
rtModelParameters , 2 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 2399311960U , 1810309545U , 3210866627U , 1950997752U } , ( NULL ) , 0 ,
( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * HouseHeatingSystem_GetCAPIStaticMap ( void )
{ return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void HouseHeatingSystem_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion (
( * rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void HouseHeatingSystem_host_InitializeDataMapInfo (
HouseHeatingSystem_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
