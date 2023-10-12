#include "HouseHeatingSystem.h"
#include <stdlib.h>
#include "rtwtypes.h"
#include <stddef.h>
#include "HouseHeatingSystem_types.h"
#include "mwmathutil.h"
#include <string.h>
#include "HouseHeatingSystem_private.h"
#include "rt_logging_mmi.h"
#include "HouseHeatingSystem_capi.h"
#include "HouseHeatingSystem_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; extern ssExecutionInfo gblExecutionInfo ; RTWExtModeInfo *
gblRTWExtModeInfo = NULL ; void raccelForceExtModeShutdown ( boolean_T
extModeStartPktReceived ) { if ( ! extModeStartPktReceived ) { boolean_T
stopRequested = false ; rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , &
stopRequested ) ; } rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "23.2 (R2023b) 01-Aug-2023" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 } ; const
char * raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const char *
inportFileName , int * matFileFormat ) { return rt_RAccelReadInportsMatFile (
S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; PrevZCX rtPrevZCX ; MassMatrix rtMassMatrix ;
static SimStruct model_S ; SimStruct * const rtS = & model_S ; void
MdlInitialize ( void ) { int_T is ; int_T tmp_e ; int_T tmp_g ; int_T tmp_i ;
int_T tmp_j ; int_T tmp_m ; boolean_T tmp ; boolean_T tmp_p ; SimStruct * S ;
void * diag ; rtX . mi4chsjn5i = 0.0 ; tmp = false ; tmp_p = false ; if ( tmp
|| tmp_p ) { is = strcmp ( ssGetSolverName ( rtS ) , "daessc" ) ; tmp_e =
strcmp ( ssGetSolverName ( rtS ) , "ode14x" ) ; tmp_i = strcmp (
ssGetSolverName ( rtS ) , "ode15s" ) ; tmp_m = strcmp ( ssGetSolverName ( rtS
) , "ode1be" ) ; tmp_g = strcmp ( ssGetSolverName ( rtS ) , "ode23t" ) ;
tmp_j = strcmp ( ssGetSolverName ( rtS ) , "odeN" ) ; if ( ( boolean_T ) ( (
is != 0 ) & ( tmp_e != 0 ) & ( tmp_i != 0 ) & ( tmp_m != 0 ) & ( tmp_g != 0 )
& ( tmp_j != 0 ) ) ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
 "physmod:simscape:engine:sli:SimscapeExecutionBlock:InconsistentSolversInModelRef"
, 2 , 3 , "daessc" , 3 , "{daessc, ode14x, ode15s, ode1be, ode23t, odeN}" ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } } rtX . opnn4r3yvf = rtP . Integrator_IC ;
{ static int_T modelMassMatrixIr [ 50 ] = { 0 , 1 , 2 , 1 , 2 , 3 , 4 , 3 , 4
, 5 , 6 , 5 , 6 , 9 , 19 , 7 , 8 , 7 , 8 , 12 , 23 , 10 , 11 , 10 , 11 , 15 ,
27 , 13 , 14 , 13 , 14 , 18 , 31 , 16 , 17 , 16 , 17 , 20 , 21 , 22 , 24 , 25
, 26 , 28 , 29 , 30 , 32 , 33 , 34 , 132 } ; static int_T modelMassMatrixJc [
134 ] = { 0 , 1 , 3 , 5 , 7 , 9 , 11 , 13 , 14 , 15 , 17 , 19 , 20 , 21 , 23
, 25 , 26 , 27 , 29 , 31 , 32 , 33 , 35 , 37 , 38 , 39 , 40 , 41 , 42 , 43 ,
44 , 45 , 46 , 47 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49
, 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 ,
49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49
, 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 ,
49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49
, 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 ,
49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 49 , 50 } ; static real_T
modelMassMatrixPr [ 50 ] = { 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 } ; ( void ) memcpy ( rtMassMatrix . ir , modelMassMatrixIr ,
50 * sizeof ( int_T ) ) ; ( void ) memcpy ( rtMassMatrix . jc ,
modelMassMatrixJc , 134 * sizeof ( int_T ) ) ; ( void ) memcpy ( rtMassMatrix
. pr , modelMassMatrixPr , 50 * sizeof ( real_T ) ) ; } } void MdlStart (
void ) { CXPtMax * _rtXPerturbMax ; CXPtMin * _rtXPerturbMin ;
NeModelParameters modelParameters ; NeModelParameters modelParameters_p ;
NeslRtpManager * manager ; NeslRtpManager * manager_p ; NeslSimulationData *
simulationData ; NeslSimulator * tmp_p ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree *
diagnosticTree_e ; NeuDiagnosticTree * diagnosticTree_p ; SscRTWLogFcnManager
* rtwLogManager ; SscRTWLogFcnManager * rtwLogManager_p ; SscRTWLogging *
tmp_j ; char * msg ; char * msg_e ; char * msg_p ; real_T tmp_m [ 24 ] ;
real_T time ; real_T tmp_e ; int32_T tmp_i ; int_T tmp_g [ 7 ] ; boolean_T
directFeedThrough [ 7 ] ; boolean_T tmp ; boolean_T val ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} _rtXPerturbMax = ( ( CXPtMax * ) ssGetJacobianPerturbationBoundsMaxVec (
rtS ) ) ; _rtXPerturbMin = ( ( CXPtMin * )
ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) ; { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Gain" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Gain" ) ; sdiLabelU blockPath = sdiGetLabelFromChars
( "HouseHeatingSystem/Control/To Workspace" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Gain" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . cbgqpxj4mm . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "227818dd-c839-4e73-afcf-a880f8667d8d" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . cbgqpxj4mm . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . cbgqpxj4mm . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . cbgqpxj4mm . AQHandles , "Continuous" ,
0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . cbgqpxj4mm .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . cbgqpxj4mm . AQHandles ,
ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
cbgqpxj4mm . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
cbgqpxj4mm . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . cbgqpxj4mm . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"fuel_cost" ) ; sdiRegisterWksVariable ( rtDW . cbgqpxj4mm . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } manager_p =
nesl_lease_rtp_manager ( "HouseHeatingSystem/Solver Configuration_1" , 0 ) ;
manager = manager_p ; tmp = pointer_is_null ( manager_p ) ; if ( tmp ) {
HouseHeatingSystem_76122067_1_gateway ( ) ; manager = nesl_lease_rtp_manager
( "HouseHeatingSystem/Solver Configuration_1" , 0 ) ; } rtDW . j32iztpw5z = (
void * ) manager ; rtDW . gprv1nclhs = true ; tmp_p = nesl_lease_simulator (
"HouseHeatingSystem/Solver Configuration_1" , 0 , 0 ) ; rtDW . mibc44iqh5 = (
void * ) tmp_p ; tmp = pointer_is_null ( rtDW . mibc44iqh5 ) ; if ( tmp ) {
HouseHeatingSystem_76122067_1_gateway ( ) ; tmp_p = nesl_lease_simulator (
"HouseHeatingSystem/Solver Configuration_1" , 0 , 0 ) ; rtDW . mibc44iqh5 = (
void * ) tmp_p ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"HouseHeatingSystem/Solver Configuration_100" , ( void * * ) ( & rtDW .
mibc44iqh5 ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
rtDW . bmoxdps0ci = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . khebctcs3x = ( void * ) diagnosticManager
; modelParameters . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters .
mSolverAbsTol = 0.001 ; modelParameters . mSolverRelTol = 0.001 ;
modelParameters . mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ;
modelParameters . mStartTime = 0.0 ; modelParameters . mLoadInitialState =
false ; modelParameters . mUseSimState = false ; modelParameters .
mLinTrimCompile = false ; modelParameters . mLoggingMode = SSC_LOGGING_ON ;
modelParameters . mRTWModifiedTimeStamp = 6.18863391E+8 ; modelParameters .
mZcDisabled = false ; modelParameters . mUseModelRefSolver = false ;
modelParameters . mTargetFPGAHIL = false ; tmp_e = 0.001 ; modelParameters .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters . mFixedStepSize =
tmp_e ; tmp = true ; modelParameters . mVariableStepSolver = tmp ; tmp =
false ; modelParameters . mIsUsingODEN = tmp ; tmp =
slIsRapidAcceleratorSimulating ( ) ; val = ssGetGlobalInitialStatesAvailable
( rtS ) ; if ( tmp ) { val = ( val && ssIsFirstInitCond ( rtS ) ) ; }
modelParameters . mLoadInitialState = val ; modelParameters . mZcDisabled =
false ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . khebctcs3x ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . mibc44iqh5
, & modelParameters , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . bmoxdps0ci ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 131 ;
simulationData -> mData -> mContStates . mX = & rtX . erxoiy5pht [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . cv2lovyvj4 ; simulationData -> mData ->
mModeVector . mN = 82 ; simulationData -> mData -> mModeVector . mX = & rtDW
. ilpkpitgbn [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_g [ 0 ] = 0 ;
tmp_m [ 0 ] = rtB . jcuxftpgbe [ 0 ] ; tmp_m [ 1 ] = rtB . jcuxftpgbe [ 1 ] ;
tmp_m [ 2 ] = rtB . jcuxftpgbe [ 2 ] ; tmp_m [ 3 ] = rtB . jcuxftpgbe [ 3 ] ;
tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = rtB . dhygcrhrhg [ 0 ] ; tmp_m [ 5 ] = rtB .
dhygcrhrhg [ 1 ] ; tmp_m [ 6 ] = rtB . dhygcrhrhg [ 2 ] ; tmp_m [ 7 ] = rtB .
dhygcrhrhg [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . ilmr4xzw55 [ 0 ] ;
tmp_m [ 9 ] = rtB . ilmr4xzw55 [ 1 ] ; tmp_m [ 10 ] = rtB . ilmr4xzw55 [ 2 ]
; tmp_m [ 11 ] = rtB . ilmr4xzw55 [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] =
rtB . mitljv53sz [ 0 ] ; tmp_m [ 13 ] = rtB . mitljv53sz [ 1 ] ; tmp_m [ 14 ]
= rtB . mitljv53sz [ 2 ] ; tmp_m [ 15 ] = rtB . mitljv53sz [ 3 ] ; tmp_g [ 4
] = 16 ; tmp_m [ 16 ] = rtB . pgk32jnvcv [ 0 ] ; tmp_m [ 17 ] = rtB .
pgk32jnvcv [ 1 ] ; tmp_m [ 18 ] = rtB . pgk32jnvcv [ 2 ] ; tmp_m [ 19 ] = rtB
. pgk32jnvcv [ 3 ] ; tmp_g [ 5 ] = 20 ; tmp_m [ 20 ] = rtB . fmg02zskcs [ 0 ]
; tmp_m [ 21 ] = rtB . fmg02zskcs [ 1 ] ; tmp_m [ 22 ] = rtB . fmg02zskcs [ 2
] ; tmp_m [ 23 ] = rtB . fmg02zskcs [ 3 ] ; tmp_g [ 6 ] = 24 ; simulationData
-> mData -> mInputValues . mN = 24 ; simulationData -> mData -> mInputValues
. mX = & tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mNumjacDxLo . mN = 131 ; simulationData -> mData
-> mNumjacDxLo . mX = & _rtXPerturbMin -> erxoiy5pht [ 0 ] ; simulationData
-> mData -> mNumjacDxHi . mN = 131 ; simulationData -> mData -> mNumjacDxHi .
mX = & _rtXPerturbMax -> erxoiy5pht [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . khebctcs3x ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mibc44iqh5 ,
NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( rtS
, msg_p ) ; } } tmp_p = nesl_lease_simulator (
"HouseHeatingSystem/Solver Configuration_1" , 1 , 0 ) ; rtDW . amrlhqfbho = (
void * ) tmp_p ; tmp = pointer_is_null ( rtDW . amrlhqfbho ) ; if ( tmp ) {
HouseHeatingSystem_76122067_1_gateway ( ) ; tmp_p = nesl_lease_simulator (
"HouseHeatingSystem/Solver Configuration_1" , 1 , 0 ) ; rtDW . amrlhqfbho = (
void * ) tmp_p ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"HouseHeatingSystem/Solver Configuration_110" , ( void * * ) ( & rtDW .
amrlhqfbho ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
rtDW . cn5o1hwxu2 = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . ky3wi3ssfa = ( void * ) diagnosticManager
; modelParameters_p . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters_p .
mSolverAbsTol = 0.001 ; modelParameters_p . mSolverRelTol = 0.001 ;
modelParameters_p . mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ;
modelParameters_p . mStartTime = 0.0 ; modelParameters_p . mLoadInitialState
= false ; modelParameters_p . mUseSimState = false ; modelParameters_p .
mLinTrimCompile = false ; modelParameters_p . mLoggingMode = SSC_LOGGING_ON ;
modelParameters_p . mRTWModifiedTimeStamp = 6.18863391E+8 ; modelParameters_p
. mZcDisabled = false ; modelParameters_p . mUseModelRefSolver = false ;
modelParameters_p . mTargetFPGAHIL = false ; tmp_e = 0.001 ;
modelParameters_p . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_p . mFixedStepSize = tmp_e ; tmp = true ; modelParameters_p .
mVariableStepSolver = tmp ; tmp = false ; modelParameters_p . mIsUsingODEN =
tmp ; tmp = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp ) { val = ( val &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters_p . mLoadInitialState = val ;
modelParameters_p . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ky3wi3ssfa ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . amrlhqfbho , &
modelParameters_p , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg_e =
rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS , msg_e ) ;
} } tmp_j = ssc_rtw_make_logging_struct ( "HouseHeatingSystem" ,
"Solver Configuration/EVAL_KEY/SINK_1" , 701U ) ; rtDW . fugitqzd1f = ( void
* ) tmp_j ; rtDW . ldhg35dscz = calloc ( 701U , 8U ) ; directFeedThrough [ 0
] = true ; directFeedThrough [ 1 ] = true ; directFeedThrough [ 2 ] = true ;
directFeedThrough [ 3 ] = true ; directFeedThrough [ 4 ] = true ;
directFeedThrough [ 5 ] = true ; directFeedThrough [ 6 ] = true ;
rtwLogManager_p = ssc_lease_rtw_log_fcn_manager (
"HouseHeatingSystem/Solver Configuration_1" , 0 , 7U , directFeedThrough , 4U
, 701U ) ; rtwLogManager = rtwLogManager_p ; tmp = pointer_is_null (
rtwLogManager_p ) ; if ( tmp ) { HouseHeatingSystem_76122067_1_gateway ( ) ;
rtwLogManager = ssc_lease_rtw_log_fcn_manager (
"HouseHeatingSystem/Solver Configuration_1" , 0 , 7U , directFeedThrough , 4U
, 701U ) ; } rtDW . eqneqyldwu = ( void * ) rtwLogManager ; if ( rtDW .
eqneqyldwu != NULL ) { ssc_rtw_setup_log_fcn ( rtDW . eqneqyldwu ) ; }
ssc_logger_start ( rtDW . fugitqzd1f ) ; MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { NeParameterBundle expl_temp ; NeslSimulationData *
simulationData ; NeuDiagnosticManager * diag ; NeuDiagnosticTree * diagTree ;
NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree * diagnosticTree_p ;
char * msg ; char * msg_e ; char * msg_p ; real_T tmp_g [ 237 ] ; real_T
tmp_i [ 237 ] ; real_T tmp_p [ 24 ] ; real_T tmp [ 20 ] ; real_T opw20bd3wj [
4 ] ; real_T lsp40yg1hr ; real_T time ; real_T time_e ; real_T time_i ;
real_T time_p ; real_T * parameterBundle_mRealParameters_mX ; int_T tmp_m [ 8
] ; int_T tmp_e [ 7 ] ; int_T iy ; boolean_T ok ; rtB . jcuxftpgbe [ 0 ] =
rtP . speed_Value ; rtB . jcuxftpgbe [ 1 ] = 0.0 ; rtB . jcuxftpgbe [ 2 ] =
0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . akwnajywu4 [ 0 ] = ! ( rtB .
jcuxftpgbe [ 0 ] == rtDW . akwnajywu4 [ 1 ] ) ; rtDW . akwnajywu4 [ 1 ] = rtB
. jcuxftpgbe [ 0 ] ; } rtB . jcuxftpgbe [ 0 ] = rtDW . akwnajywu4 [ 1 ] ; rtB
. jcuxftpgbe [ 3 ] = rtDW . akwnajywu4 [ 0 ] ; rtB . hnbdpwqz2n = 0.0 ; rtB .
hnbdpwqz2n += rtP . Gasvalvelag_C * rtX . mi4chsjn5i ; rtB . j42ejggumw = rtP
. Valveopenmassflowrate_Gain * rtB . hnbdpwqz2n ; rtB . dhygcrhrhg [ 0 ] =
rtB . j42ejggumw ; rtB . dhygcrhrhg [ 1 ] = 0.0 ; rtB . dhygcrhrhg [ 2 ] =
0.0 ; rtB . dhygcrhrhg [ 3 ] = 0.0 ; rtB . n41c3y4pnu = muDoubleScalarSin (
rtP . Dailytemperaturevariation_Freq * ssGetTaskTime ( rtS , 0 ) + rtP .
Dailytemperaturevariation_Phase ) * rtP . Dailytemperaturevariation_Amp + rtP
. Dailytemperaturevariation_Bias ; rtB . ilmr4xzw55 [ 0 ] = rtB . n41c3y4pnu
+ 273.15 ; rtB . ilmr4xzw55 [ 1 ] = 0.0 ; rtB . ilmr4xzw55 [ 2 ] = 0.0 ; rtB
. ilmr4xzw55 [ 3 ] = 0.0 ; rtB . mitljv53sz [ 0 ] = rtB . n41c3y4pnu + 273.15
; rtB . mitljv53sz [ 1 ] = 0.0 ; rtB . mitljv53sz [ 2 ] = 0.0 ; rtB .
mitljv53sz [ 3 ] = 0.0 ; rtB . pgk32jnvcv [ 0 ] = rtB . n41c3y4pnu + 273.15 ;
rtB . pgk32jnvcv [ 1 ] = 0.0 ; rtB . pgk32jnvcv [ 2 ] = 0.0 ; rtB .
pgk32jnvcv [ 3 ] = 0.0 ; rtB . fmg02zskcs [ 0 ] = rtB . n41c3y4pnu + 273.15 ;
rtB . fmg02zskcs [ 1 ] = 0.0 ; rtB . fmg02zskcs [ 2 ] = 0.0 ; rtB .
fmg02zskcs [ 3 ] = 0.0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtDW .
gprv1nclhs ) { tmp [ 0 ] = rtP . RTP_DB4299FD_T_Value ; tmp [ 1 ] = rtP .
RTP_723C7CD8_T_Value ; tmp [ 2 ] = rtP . RTP_A29E2159_T_Value ; tmp [ 3 ] =
rtP . RTP_D61DC5A1_T_Value ; tmp [ 4 ] = rtP . RTP_DE69E3BD_T_Value ; tmp [ 5
] = rtP . RTP_A8C8D5D9_T_Value ; tmp [ 6 ] = rtP . RTP_41CF1C29_T_Value ; tmp
[ 7 ] = rtP . RTP_E7E0DA7A_T_Value ; tmp [ 8 ] = rtP . RTP_408D6EE7_T_Value ;
tmp [ 9 ] = rtP . RTP_A82CA1E5_T_Value ; tmp [ 10 ] = rtP .
RTP_4622C0C9_T_Value ; tmp [ 11 ] = rtP . RTP_D352D324_T_Value ; tmp [ 12 ] =
rtP . RTP_DE0D8F78_T_Value ; tmp [ 13 ] = rtP . RTP_AE677BF7_T_Value ; tmp [
14 ] = rtP . RTP_A39492E4_T_Value ; tmp [ 15 ] = rtP . RTP_4C5899FF_T_Value ;
tmp [ 16 ] = rtP . RTP_D23C0C5C_T_Value ; tmp [ 17 ] = rtP .
RTP_E622B04D_T_Value ; tmp [ 18 ] = rtP . RTP_0A6A6F38_T_Value ; tmp [ 19 ] =
rtP . RTP_7A009BB7_T_Value ; parameterBundle_mRealParameters_mX = & tmp [ 0 ]
; diag = rtw_create_diagnostics ( ) ; diagTree =
neu_diagnostic_manager_get_initial_tree ( diag ) ; expl_temp .
mRealParameters . mN = 20 ; expl_temp . mRealParameters . mX =
parameterBundle_mRealParameters_mX ; expl_temp . mLogicalParameters . mN = 0
; expl_temp . mLogicalParameters . mX = NULL ; expl_temp . mIntegerParameters
. mN = 0 ; expl_temp . mIntegerParameters . mX = NULL ; expl_temp .
mIndexParameters . mN = 0 ; expl_temp . mIndexParameters . mX = NULL ; ok =
nesl_rtp_manager_set_rtps ( ( NeslRtpManager * ) rtDW . j32iztpw5z , ssGetT (
rtS ) , expl_temp , diag ) ; if ( ! ok ) { ok = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( ok ) { msg = rtw_diagnostics_msg ( diagTree
) ; ssSetErrorStatus ( rtS , msg ) ; } } } rtDW . gprv1nclhs = false ; }
simulationData = ( NeslSimulationData * ) rtDW . bmoxdps0ci ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 131 ;
simulationData -> mData -> mContStates . mX = & rtX . erxoiy5pht [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . cv2lovyvj4 ; simulationData -> mData ->
mModeVector . mN = 82 ; simulationData -> mData -> mModeVector . mX = & rtDW
. ilpkpitgbn [ 0 ] ; ok = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = ok
; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
ok = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = ok ; ok =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = ok ; ok = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = ok ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; ok
= ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = ok ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . jcuxftpgbe [ 0 ] ; tmp_p [ 1 ] = rtB . jcuxftpgbe [ 1 ] ;
tmp_p [ 2 ] = rtB . jcuxftpgbe [ 2 ] ; tmp_p [ 3 ] = rtB . jcuxftpgbe [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . dhygcrhrhg [ 0 ] ; tmp_p [ 5 ] = rtB .
dhygcrhrhg [ 1 ] ; tmp_p [ 6 ] = rtB . dhygcrhrhg [ 2 ] ; tmp_p [ 7 ] = rtB .
dhygcrhrhg [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . ilmr4xzw55 [ 0 ] ;
tmp_p [ 9 ] = rtB . ilmr4xzw55 [ 1 ] ; tmp_p [ 10 ] = rtB . ilmr4xzw55 [ 2 ]
; tmp_p [ 11 ] = rtB . ilmr4xzw55 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . mitljv53sz [ 0 ] ; tmp_p [ 13 ] = rtB . mitljv53sz [ 1 ] ; tmp_p [ 14 ]
= rtB . mitljv53sz [ 2 ] ; tmp_p [ 15 ] = rtB . mitljv53sz [ 3 ] ; tmp_e [ 4
] = 16 ; tmp_p [ 16 ] = rtB . pgk32jnvcv [ 0 ] ; tmp_p [ 17 ] = rtB .
pgk32jnvcv [ 1 ] ; tmp_p [ 18 ] = rtB . pgk32jnvcv [ 2 ] ; tmp_p [ 19 ] = rtB
. pgk32jnvcv [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . fmg02zskcs [ 0 ]
; tmp_p [ 21 ] = rtB . fmg02zskcs [ 1 ] ; tmp_p [ 22 ] = rtB . fmg02zskcs [ 2
] ; tmp_p [ 23 ] = rtB . fmg02zskcs [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData
-> mData -> mInputValues . mN = 24 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 213 ; simulationData -> mData ->
mOutputs . mX = & rtB . n1aqtv5v4t [ 0 ] ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; time_p = ssGetTaskTime
( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData ->
mData -> mTime . mX = & time_p ; simulationData -> mData -> mSampleHits . mN
= 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData ->
mData -> mIsFundamentalSampleHit = false ; diag = ( NeuDiagnosticManager * )
rtDW . khebctcs3x ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diag ) ; iy = ne_simulator_method ( ( NeslSimulator * ) rtDW . mibc44iqh5 ,
NESL_SIM_OUTPUTS , simulationData , diag ) ; if ( iy != 0 ) { ok =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( ok ) { msg_p =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg_p ) ; }
} if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . cn5o1hwxu2 ; time_e = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_e ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . fuejd45s1j ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . e5c3vcpyz1 ; ok = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = ok ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; ok = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = ok ; ok = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = ok ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; ok = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = ok ; simulationData ->
mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_m [ 0 ]
= 0 ; tmp_i [ 0 ] = rtB . jcuxftpgbe [ 0 ] ; tmp_i [ 1 ] = rtB . jcuxftpgbe [
1 ] ; tmp_i [ 2 ] = rtB . jcuxftpgbe [ 2 ] ; tmp_i [ 3 ] = rtB . jcuxftpgbe [
3 ] ; tmp_m [ 1 ] = 4 ; tmp_i [ 4 ] = rtB . dhygcrhrhg [ 0 ] ; tmp_i [ 5 ] =
rtB . dhygcrhrhg [ 1 ] ; tmp_i [ 6 ] = rtB . dhygcrhrhg [ 2 ] ; tmp_i [ 7 ] =
rtB . dhygcrhrhg [ 3 ] ; tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB . ilmr4xzw55 [ 0
] ; tmp_i [ 9 ] = rtB . ilmr4xzw55 [ 1 ] ; tmp_i [ 10 ] = rtB . ilmr4xzw55 [
2 ] ; tmp_i [ 11 ] = rtB . ilmr4xzw55 [ 3 ] ; tmp_m [ 3 ] = 12 ; tmp_i [ 12 ]
= rtB . mitljv53sz [ 0 ] ; tmp_i [ 13 ] = rtB . mitljv53sz [ 1 ] ; tmp_i [ 14
] = rtB . mitljv53sz [ 2 ] ; tmp_i [ 15 ] = rtB . mitljv53sz [ 3 ] ; tmp_m [
4 ] = 16 ; tmp_i [ 16 ] = rtB . pgk32jnvcv [ 0 ] ; tmp_i [ 17 ] = rtB .
pgk32jnvcv [ 1 ] ; tmp_i [ 18 ] = rtB . pgk32jnvcv [ 2 ] ; tmp_i [ 19 ] = rtB
. pgk32jnvcv [ 3 ] ; tmp_m [ 5 ] = 20 ; tmp_i [ 20 ] = rtB . fmg02zskcs [ 0 ]
; tmp_i [ 21 ] = rtB . fmg02zskcs [ 1 ] ; tmp_i [ 22 ] = rtB . fmg02zskcs [ 2
] ; tmp_i [ 23 ] = rtB . fmg02zskcs [ 3 ] ; tmp_m [ 6 ] = 24 ; memcpy ( &
tmp_i [ 24 ] , & rtB . n1aqtv5v4t [ 0 ] , 213U * sizeof ( real_T ) ) ; tmp_m
[ 7 ] = 237 ; simulationData -> mData -> mInputValues . mN = 237 ;
simulationData -> mData -> mInputValues . mX = & tmp_i [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 8 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_m [ 0 ] ; simulationData -> mData -> mOutputs . mN = 4 ;
simulationData -> mData -> mOutputs . mX = & opw20bd3wj [ 0 ] ;
simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData ->
mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; time_i = ssGetTaskTime ( rtS , 0 ) ; simulationData -> mData -> mTime
. mN = 1 ; simulationData -> mData -> mTime . mX = & time_i ; simulationData
-> mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits .
mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ; diag
= ( NeuDiagnosticManager * ) rtDW . ky3wi3ssfa ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diag ) ; iy = ne_simulator_method (
( NeslSimulator * ) rtDW . amrlhqfbho , NESL_SIM_OUTPUTS , simulationData ,
diag ) ; if ( iy != 0 ) { ok = error_buffer_is_empty ( ssGetErrorStatus ( rtS
) ) ; if ( ok ) { msg_e = rtw_diagnostics_msg ( diagnosticTree_p ) ;
ssSetErrorStatus ( rtS , msg_e ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } lsp40yg1hr = ( (
opw20bd3wj [ 2 ] + opw20bd3wj [ 3 ] ) + opw20bd3wj [ 1 ] ) + opw20bd3wj [ 0 ]
; rtB . psybk0zlj0 = rtP . Gain_Gain * lsp40yg1hr ; rtB . pue0qcaqsp = rtX .
opnn4r3yvf ; lsp40yg1hr = rtP . cost * rtB . pue0qcaqsp ; { if ( rtDW .
cbgqpxj4mm . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
cbgqpxj4mm . AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & lsp40yg1hr
+ 0 ) ; } } rtB . bsadk0jbva = 1.0 / rtP . NG_density * rtB . j42ejggumw ;
rtB . m24c4vhtyg = rtP . T_expecteddegC_Value - rtB . psybk0zlj0 ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . ep3icowjz2 = ( ( rtB . m24c4vhtyg
>= rtP . Relay_OnVal ) || ( ( ! ( rtB . m24c4vhtyg <= rtP . Relay_OffVal ) )
&& rtDW . ep3icowjz2 ) ) ; } if ( rtDW . ep3icowjz2 ) { rtB . mwexkxe4pu =
rtP . Relay_YOn ; } else { rtB . mwexkxe4pu = rtP . Relay_YOff ; } if ( (
rtDW . eqneqyldwu != NULL ) && ssGetLogOutput ( rtS ) ) { tmp_g [ 0 ] = rtB .
jcuxftpgbe [ 0 ] ; tmp_g [ 1 ] = rtB . jcuxftpgbe [ 1 ] ; tmp_g [ 2 ] = rtB .
jcuxftpgbe [ 2 ] ; tmp_g [ 3 ] = rtB . jcuxftpgbe [ 3 ] ; tmp_g [ 4 ] = rtB .
dhygcrhrhg [ 0 ] ; tmp_g [ 5 ] = rtB . dhygcrhrhg [ 1 ] ; tmp_g [ 6 ] = rtB .
dhygcrhrhg [ 2 ] ; tmp_g [ 7 ] = rtB . dhygcrhrhg [ 3 ] ; tmp_g [ 8 ] = rtB .
ilmr4xzw55 [ 0 ] ; tmp_g [ 9 ] = rtB . ilmr4xzw55 [ 1 ] ; tmp_g [ 10 ] = rtB
. ilmr4xzw55 [ 2 ] ; tmp_g [ 11 ] = rtB . ilmr4xzw55 [ 3 ] ; tmp_g [ 12 ] =
rtB . mitljv53sz [ 0 ] ; tmp_g [ 13 ] = rtB . mitljv53sz [ 1 ] ; tmp_g [ 14 ]
= rtB . mitljv53sz [ 2 ] ; tmp_g [ 15 ] = rtB . mitljv53sz [ 3 ] ; tmp_g [ 16
] = rtB . pgk32jnvcv [ 0 ] ; tmp_g [ 17 ] = rtB . pgk32jnvcv [ 1 ] ; tmp_g [
18 ] = rtB . pgk32jnvcv [ 2 ] ; tmp_g [ 19 ] = rtB . pgk32jnvcv [ 3 ] ; tmp_g
[ 20 ] = rtB . fmg02zskcs [ 0 ] ; tmp_g [ 21 ] = rtB . fmg02zskcs [ 1 ] ;
tmp_g [ 22 ] = rtB . fmg02zskcs [ 2 ] ; tmp_g [ 23 ] = rtB . fmg02zskcs [ 3 ]
; memcpy ( & tmp_g [ 24 ] , & rtB . n1aqtv5v4t [ 0 ] , 213U * sizeof ( real_T
) ) ; ssc_rtw_log_fcn ( rtDW . eqneqyldwu , ssGetT ( rtS ) , & tmp_g [ 0 ] ,
rtDW . ldhg35dscz ) ; } if ( ( rtDW . eqneqyldwu != NULL ) && ssGetLogOutput
( rtS ) ) { ssc_logger_log ( rtDW . fugitqzd1f , ssGetT ( rtS ) , rtDW .
ldhg35dscz ) ; } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T tid
) { UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 24 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e [ 7 ] ; boolean_T
tmp ; simulationData = ( NeslSimulationData * ) rtDW . bmoxdps0ci ; time =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 131 ; simulationData -> mData -> mContStates . mX = & rtX . erxoiy5pht [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . cv2lovyvj4 ; simulationData -> mData ->
mModeVector . mN = 82 ; simulationData -> mData -> mModeVector . mX = & rtDW
. ilpkpitgbn [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . jcuxftpgbe [ 0 ] ; tmp_p [ 1 ] = rtB . jcuxftpgbe [ 1 ] ;
tmp_p [ 2 ] = rtB . jcuxftpgbe [ 2 ] ; tmp_p [ 3 ] = rtB . jcuxftpgbe [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . dhygcrhrhg [ 0 ] ; tmp_p [ 5 ] = rtB .
dhygcrhrhg [ 1 ] ; tmp_p [ 6 ] = rtB . dhygcrhrhg [ 2 ] ; tmp_p [ 7 ] = rtB .
dhygcrhrhg [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . ilmr4xzw55 [ 0 ] ;
tmp_p [ 9 ] = rtB . ilmr4xzw55 [ 1 ] ; tmp_p [ 10 ] = rtB . ilmr4xzw55 [ 2 ]
; tmp_p [ 11 ] = rtB . ilmr4xzw55 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . mitljv53sz [ 0 ] ; tmp_p [ 13 ] = rtB . mitljv53sz [ 1 ] ; tmp_p [ 14 ]
= rtB . mitljv53sz [ 2 ] ; tmp_p [ 15 ] = rtB . mitljv53sz [ 3 ] ; tmp_e [ 4
] = 16 ; tmp_p [ 16 ] = rtB . pgk32jnvcv [ 0 ] ; tmp_p [ 17 ] = rtB .
pgk32jnvcv [ 1 ] ; tmp_p [ 18 ] = rtB . pgk32jnvcv [ 2 ] ; tmp_p [ 19 ] = rtB
. pgk32jnvcv [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . fmg02zskcs [ 0 ]
; tmp_p [ 21 ] = rtB . fmg02zskcs [ 1 ] ; tmp_p [ 22 ] = rtB . fmg02zskcs [ 2
] ; tmp_p [ 23 ] = rtB . fmg02zskcs [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData
-> mData -> mInputValues . mN = 24 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . khebctcs3x ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . mibc44iqh5 ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; XDot * _rtXdot ;
char * msg ; real_T tmp_p [ 24 ] ; real_T time ; int_T tmp_e [ 7 ] ; int_T is
; boolean_T tmp ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdot ->
mi4chsjn5i = 0.0 ; _rtXdot -> mi4chsjn5i += rtP . Gasvalvelag_A * rtX .
mi4chsjn5i ; _rtXdot -> mi4chsjn5i += rtB . mwexkxe4pu ; simulationData = (
NeslSimulationData * ) rtDW . bmoxdps0ci ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 131 ;
simulationData -> mData -> mContStates . mX = & rtX . erxoiy5pht [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . cv2lovyvj4 ; simulationData -> mData ->
mModeVector . mN = 82 ; simulationData -> mData -> mModeVector . mX = & rtDW
. ilpkpitgbn [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . jcuxftpgbe [ 0 ] ; tmp_p [ 1 ] = rtB . jcuxftpgbe [ 1 ] ;
tmp_p [ 2 ] = rtB . jcuxftpgbe [ 2 ] ; tmp_p [ 3 ] = rtB . jcuxftpgbe [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . dhygcrhrhg [ 0 ] ; tmp_p [ 5 ] = rtB .
dhygcrhrhg [ 1 ] ; tmp_p [ 6 ] = rtB . dhygcrhrhg [ 2 ] ; tmp_p [ 7 ] = rtB .
dhygcrhrhg [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . ilmr4xzw55 [ 0 ] ;
tmp_p [ 9 ] = rtB . ilmr4xzw55 [ 1 ] ; tmp_p [ 10 ] = rtB . ilmr4xzw55 [ 2 ]
; tmp_p [ 11 ] = rtB . ilmr4xzw55 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . mitljv53sz [ 0 ] ; tmp_p [ 13 ] = rtB . mitljv53sz [ 1 ] ; tmp_p [ 14 ]
= rtB . mitljv53sz [ 2 ] ; tmp_p [ 15 ] = rtB . mitljv53sz [ 3 ] ; tmp_e [ 4
] = 16 ; tmp_p [ 16 ] = rtB . pgk32jnvcv [ 0 ] ; tmp_p [ 17 ] = rtB .
pgk32jnvcv [ 1 ] ; tmp_p [ 18 ] = rtB . pgk32jnvcv [ 2 ] ; tmp_p [ 19 ] = rtB
. pgk32jnvcv [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . fmg02zskcs [ 0 ]
; tmp_p [ 21 ] = rtB . fmg02zskcs [ 1 ] ; tmp_p [ 22 ] = rtB . fmg02zskcs [ 2
] ; tmp_p [ 23 ] = rtB . fmg02zskcs [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData
-> mData -> mInputValues . mN = 24 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 131 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> erxoiy5pht [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . khebctcs3x ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; is =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mibc44iqh5 ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( is != 0 )
{ tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg
= rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; }
} _rtXdot -> opnn4r3yvf = rtB . bsadk0jbva ; } void MdlProjection ( void ) {
} void MdlForcingFunction ( void ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; XDot * _rtXdot ; char * msg ; real_T tmp_p [ 24 ] ; real_T time ; int_T
tmp_e [ 7 ] ; int_T is ; boolean_T tmp ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS
) ) ; _rtXdot -> mi4chsjn5i = 0.0 ; _rtXdot -> mi4chsjn5i += rtP .
Gasvalvelag_A * rtX . mi4chsjn5i ; _rtXdot -> mi4chsjn5i += rtB . mwexkxe4pu
; simulationData = ( NeslSimulationData * ) rtDW . bmoxdps0ci ; time = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 131 ;
simulationData -> mData -> mContStates . mX = & rtX . erxoiy5pht [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . cv2lovyvj4 ; simulationData -> mData ->
mModeVector . mN = 82 ; simulationData -> mData -> mModeVector . mX = & rtDW
. ilpkpitgbn [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . jcuxftpgbe [ 0 ] ; tmp_p [ 1 ] = rtB . jcuxftpgbe [ 1 ] ;
tmp_p [ 2 ] = rtB . jcuxftpgbe [ 2 ] ; tmp_p [ 3 ] = rtB . jcuxftpgbe [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . dhygcrhrhg [ 0 ] ; tmp_p [ 5 ] = rtB .
dhygcrhrhg [ 1 ] ; tmp_p [ 6 ] = rtB . dhygcrhrhg [ 2 ] ; tmp_p [ 7 ] = rtB .
dhygcrhrhg [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . ilmr4xzw55 [ 0 ] ;
tmp_p [ 9 ] = rtB . ilmr4xzw55 [ 1 ] ; tmp_p [ 10 ] = rtB . ilmr4xzw55 [ 2 ]
; tmp_p [ 11 ] = rtB . ilmr4xzw55 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . mitljv53sz [ 0 ] ; tmp_p [ 13 ] = rtB . mitljv53sz [ 1 ] ; tmp_p [ 14 ]
= rtB . mitljv53sz [ 2 ] ; tmp_p [ 15 ] = rtB . mitljv53sz [ 3 ] ; tmp_e [ 4
] = 16 ; tmp_p [ 16 ] = rtB . pgk32jnvcv [ 0 ] ; tmp_p [ 17 ] = rtB .
pgk32jnvcv [ 1 ] ; tmp_p [ 18 ] = rtB . pgk32jnvcv [ 2 ] ; tmp_p [ 19 ] = rtB
. pgk32jnvcv [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . fmg02zskcs [ 0 ]
; tmp_p [ 21 ] = rtB . fmg02zskcs [ 1 ] ; tmp_p [ 22 ] = rtB . fmg02zskcs [ 2
] ; tmp_p [ 23 ] = rtB . fmg02zskcs [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData
-> mData -> mInputValues . mN = 24 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 131 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> erxoiy5pht [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . khebctcs3x ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; is =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mibc44iqh5 ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( is !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> opnn4r3yvf = rtB . bsadk0jbva ; } void MdlMassMatrix ( void
) { NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 24 ] ; real_T time ; real_T * tmp_i ; real_T * tmp_m ; int32_T tmp_g
; int_T tmp_e [ 7 ] ; boolean_T tmp ; simulationData = ( NeslSimulationData *
) rtDW . bmoxdps0ci ; time = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time ;
simulationData -> mData -> mContStates . mN = 131 ; simulationData -> mData
-> mContStates . mX = & rtX . erxoiy5pht [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
cv2lovyvj4 ; simulationData -> mData -> mModeVector . mN = 82 ;
simulationData -> mData -> mModeVector . mX = & rtDW . ilpkpitgbn [ 0 ] ; tmp
= ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . jcuxftpgbe [ 0 ] ; tmp_p [ 1 ] = rtB . jcuxftpgbe [ 1 ] ;
tmp_p [ 2 ] = rtB . jcuxftpgbe [ 2 ] ; tmp_p [ 3 ] = rtB . jcuxftpgbe [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . dhygcrhrhg [ 0 ] ; tmp_p [ 5 ] = rtB .
dhygcrhrhg [ 1 ] ; tmp_p [ 6 ] = rtB . dhygcrhrhg [ 2 ] ; tmp_p [ 7 ] = rtB .
dhygcrhrhg [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . ilmr4xzw55 [ 0 ] ;
tmp_p [ 9 ] = rtB . ilmr4xzw55 [ 1 ] ; tmp_p [ 10 ] = rtB . ilmr4xzw55 [ 2 ]
; tmp_p [ 11 ] = rtB . ilmr4xzw55 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . mitljv53sz [ 0 ] ; tmp_p [ 13 ] = rtB . mitljv53sz [ 1 ] ; tmp_p [ 14 ]
= rtB . mitljv53sz [ 2 ] ; tmp_p [ 15 ] = rtB . mitljv53sz [ 3 ] ; tmp_e [ 4
] = 16 ; tmp_p [ 16 ] = rtB . pgk32jnvcv [ 0 ] ; tmp_p [ 17 ] = rtB .
pgk32jnvcv [ 1 ] ; tmp_p [ 18 ] = rtB . pgk32jnvcv [ 2 ] ; tmp_p [ 19 ] = rtB
. pgk32jnvcv [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . fmg02zskcs [ 0 ]
; tmp_p [ 21 ] = rtB . fmg02zskcs [ 1 ] ; tmp_p [ 22 ] = rtB . fmg02zskcs [ 2
] ; tmp_p [ 23 ] = rtB . fmg02zskcs [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData
-> mData -> mInputValues . mN = 24 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ; tmp_i =
ssGetMassMatrixPr ( rtS ) ; tmp_m = double_pointer_shift ( tmp_i , rtDW .
ewxx0epgrq ) ; simulationData -> mData -> mMassMatrixPr . mN = 48 ;
simulationData -> mData -> mMassMatrixPr . mX = tmp_m ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . khebctcs3x ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_g =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mibc44iqh5 ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_g != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlZeroCrossings ( void ) { NeslSimulationData * simulationData
; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; ZCV * _rtZCSV ; char * msg ; real_T tmp_p [ 24 ] ; real_T
time ; int32_T tmp_i ; int_T tmp_e [ 7 ] ; boolean_T tmp ; _rtZCSV = ( ( ZCV
* ) ssGetSolverZcSignalVector ( rtS ) ) ; simulationData = (
NeslSimulationData * ) rtDW . bmoxdps0ci ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 131 ;
simulationData -> mData -> mContStates . mX = & rtX . erxoiy5pht [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . cv2lovyvj4 ; simulationData -> mData ->
mModeVector . mN = 82 ; simulationData -> mData -> mModeVector . mX = & rtDW
. ilpkpitgbn [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . jcuxftpgbe [ 0 ] ; tmp_p [ 1 ] = rtB . jcuxftpgbe [ 1 ] ;
tmp_p [ 2 ] = rtB . jcuxftpgbe [ 2 ] ; tmp_p [ 3 ] = rtB . jcuxftpgbe [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . dhygcrhrhg [ 0 ] ; tmp_p [ 5 ] = rtB .
dhygcrhrhg [ 1 ] ; tmp_p [ 6 ] = rtB . dhygcrhrhg [ 2 ] ; tmp_p [ 7 ] = rtB .
dhygcrhrhg [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . ilmr4xzw55 [ 0 ] ;
tmp_p [ 9 ] = rtB . ilmr4xzw55 [ 1 ] ; tmp_p [ 10 ] = rtB . ilmr4xzw55 [ 2 ]
; tmp_p [ 11 ] = rtB . ilmr4xzw55 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . mitljv53sz [ 0 ] ; tmp_p [ 13 ] = rtB . mitljv53sz [ 1 ] ; tmp_p [ 14 ]
= rtB . mitljv53sz [ 2 ] ; tmp_p [ 15 ] = rtB . mitljv53sz [ 3 ] ; tmp_e [ 4
] = 16 ; tmp_p [ 16 ] = rtB . pgk32jnvcv [ 0 ] ; tmp_p [ 17 ] = rtB .
pgk32jnvcv [ 1 ] ; tmp_p [ 18 ] = rtB . pgk32jnvcv [ 2 ] ; tmp_p [ 19 ] = rtB
. pgk32jnvcv [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . fmg02zskcs [ 0 ]
; tmp_p [ 21 ] = rtB . fmg02zskcs [ 1 ] ; tmp_p [ 22 ] = rtB . fmg02zskcs [ 2
] ; tmp_p [ 23 ] = rtB . fmg02zskcs [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData
-> mData -> mInputValues . mN = 24 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 91 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> apws2bjar3 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . khebctcs3x ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mibc44iqh5 ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } if ( rtDW . ep3icowjz2 ) { _rtZCSV -> gouhyk4ecq = rtB . m24c4vhtyg -
rtP . Relay_OffVal ; } else { _rtZCSV -> gouhyk4ecq = rtB . m24c4vhtyg - rtP
. Relay_OnVal ; } } void MdlTerminate ( void ) {
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . khebctcs3x
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . bmoxdps0ci
) ; nesl_erase_simulator ( "HouseHeatingSystem/Solver Configuration_1" ) ;
nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . ky3wi3ssfa ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . cn5o1hwxu2 ) ; nesl_erase_simulator (
"HouseHeatingSystem/Solver Configuration_1" ) ; nesl_destroy_registry ( ) ;
ssc_logger_terminate ( rtDW . fugitqzd1f ) ; free ( rtDW . ldhg35dscz ) ;
ssc_logger_destroy ( rtDW . fugitqzd1f ) ; { if ( rtDW . cbgqpxj4mm .
AQHandles ) { sdiTerminateStreaming ( & rtDW . cbgqpxj4mm . AQHandles ) ; } }
} static void mr_HouseHeatingSystem_cacheDataAsMxArray ( mxArray * destArray
, mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_HouseHeatingSystem_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_HouseHeatingSystem_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ;
static void mr_HouseHeatingSystem_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_HouseHeatingSystem_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) ; static void
mr_HouseHeatingSystem_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_HouseHeatingSystem_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_HouseHeatingSystem_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_HouseHeatingSystem_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_HouseHeatingSystem_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_HouseHeatingSystem_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void
mr_HouseHeatingSystem_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_HouseHeatingSystem_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_HouseHeatingSystem_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_HouseHeatingSystem_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_HouseHeatingSystem_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_HouseHeatingSystem_GetDWork ( ) {
static const char_T * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "rtPrevZCX" ,
} ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_HouseHeatingSystem_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) &
( rtB ) , sizeof ( rtB ) ) ; { static const char_T * rtdwDataFieldNames [ 14
] = { "rtDW.akwnajywu4" , "rtDW.ajutelgcg5" , "rtDW.ov5nxhifvo" ,
"rtDW.j350arjku2" , "rtDW.nerjst2vy3" , "rtDW.ealnthjniv" , "rtDW.cv2lovyvj4"
, "rtDW.fuejd45s1j" , "rtDW.ilpkpitgbn" , "rtDW.e5c3vcpyz1" ,
"rtDW.ewxx0epgrq" , "rtDW.njyusbtibv" , "rtDW.bel1u0w0gn" , "rtDW.ep3icowjz2"
, } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 14 ,
rtdwDataFieldNames ) ; mr_HouseHeatingSystem_cacheDataAsMxArray ( rtdwData ,
0 , 0 , ( const void * ) & ( rtDW . akwnajywu4 ) , sizeof ( rtDW . akwnajywu4
) ) ; mr_HouseHeatingSystem_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const
void * ) & ( rtDW . ajutelgcg5 ) , sizeof ( rtDW . ajutelgcg5 ) ) ;
mr_HouseHeatingSystem_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void *
) & ( rtDW . ov5nxhifvo ) , sizeof ( rtDW . ov5nxhifvo ) ) ;
mr_HouseHeatingSystem_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void *
) & ( rtDW . j350arjku2 ) , sizeof ( rtDW . j350arjku2 ) ) ;
mr_HouseHeatingSystem_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void *
) & ( rtDW . nerjst2vy3 ) , sizeof ( rtDW . nerjst2vy3 ) ) ;
mr_HouseHeatingSystem_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void *
) & ( rtDW . ealnthjniv ) , sizeof ( rtDW . ealnthjniv ) ) ;
mr_HouseHeatingSystem_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void *
) & ( rtDW . cv2lovyvj4 ) , sizeof ( rtDW . cv2lovyvj4 ) ) ;
mr_HouseHeatingSystem_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void *
) & ( rtDW . fuejd45s1j ) , sizeof ( rtDW . fuejd45s1j ) ) ;
mr_HouseHeatingSystem_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void *
) & ( rtDW . ilpkpitgbn ) , sizeof ( rtDW . ilpkpitgbn ) ) ;
mr_HouseHeatingSystem_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void *
) & ( rtDW . e5c3vcpyz1 ) , sizeof ( rtDW . e5c3vcpyz1 ) ) ;
mr_HouseHeatingSystem_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void *
) & ( rtDW . ewxx0epgrq ) , sizeof ( rtDW . ewxx0epgrq ) ) ;
mr_HouseHeatingSystem_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void *
) & ( rtDW . njyusbtibv ) , sizeof ( rtDW . njyusbtibv ) ) ;
mr_HouseHeatingSystem_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void *
) & ( rtDW . bel1u0w0gn ) , sizeof ( rtDW . bel1u0w0gn ) ) ;
mr_HouseHeatingSystem_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void *
) & ( rtDW . ep3icowjz2 ) , sizeof ( rtDW . ep3icowjz2 ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; }
mr_HouseHeatingSystem_cacheDataAsMxArray ( ssDW , 0 , 2 , ( const void * ) &
( rtPrevZCX ) , sizeof ( rtPrevZCX ) ) ; return ssDW ; } void
mr_HouseHeatingSystem_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_HouseHeatingSystem_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW ,
0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber (
ssDW , 0 , 1 ) ; mr_HouseHeatingSystem_restoreDataFromMxArray ( ( void * ) &
( rtDW . akwnajywu4 ) , rtdwData , 0 , 0 , sizeof ( rtDW . akwnajywu4 ) ) ;
mr_HouseHeatingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ajutelgcg5 ) , rtdwData , 0 , 1 , sizeof ( rtDW . ajutelgcg5 ) ) ;
mr_HouseHeatingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ov5nxhifvo ) , rtdwData , 0 , 2 , sizeof ( rtDW . ov5nxhifvo ) ) ;
mr_HouseHeatingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
j350arjku2 ) , rtdwData , 0 , 3 , sizeof ( rtDW . j350arjku2 ) ) ;
mr_HouseHeatingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nerjst2vy3 ) , rtdwData , 0 , 4 , sizeof ( rtDW . nerjst2vy3 ) ) ;
mr_HouseHeatingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ealnthjniv ) , rtdwData , 0 , 5 , sizeof ( rtDW . ealnthjniv ) ) ;
mr_HouseHeatingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cv2lovyvj4 ) , rtdwData , 0 , 6 , sizeof ( rtDW . cv2lovyvj4 ) ) ;
mr_HouseHeatingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fuejd45s1j ) , rtdwData , 0 , 7 , sizeof ( rtDW . fuejd45s1j ) ) ;
mr_HouseHeatingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ilpkpitgbn ) , rtdwData , 0 , 8 , sizeof ( rtDW . ilpkpitgbn ) ) ;
mr_HouseHeatingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
e5c3vcpyz1 ) , rtdwData , 0 , 9 , sizeof ( rtDW . e5c3vcpyz1 ) ) ;
mr_HouseHeatingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ewxx0epgrq ) , rtdwData , 0 , 10 , sizeof ( rtDW . ewxx0epgrq ) ) ;
mr_HouseHeatingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
njyusbtibv ) , rtdwData , 0 , 11 , sizeof ( rtDW . njyusbtibv ) ) ;
mr_HouseHeatingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bel1u0w0gn ) , rtdwData , 0 , 12 , sizeof ( rtDW . bel1u0w0gn ) ) ;
mr_HouseHeatingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ep3icowjz2 ) , rtdwData , 0 , 13 , sizeof ( rtDW . ep3icowjz2 ) ) ; }
mr_HouseHeatingSystem_restoreDataFromMxArray ( ( void * ) & ( rtPrevZCX ) ,
ssDW , 0 , 2 , sizeof ( rtPrevZCX ) ) ; } mxArray *
mr_HouseHeatingSystem_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 5 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char_T * blockType [ 5 ] = { "SimscapeRtp" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "Scope" , "SimscapeSinkBlock" , } ; static const
char_T * blockPath [ 5 ] = { "HouseHeatingSystem/Solver Configuration/RTP_1"
, "HouseHeatingSystem/Solver Configuration/EVAL_KEY/STATE_1" ,
"HouseHeatingSystem/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"HouseHeatingSystem/Temperature variation" ,
"HouseHeatingSystem/Solver Configuration/EVAL_KEY/SINK_1" , } ; static const
int reason [ 5 ] = { 0 , 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs [ 0
] < 5 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript
( data , 2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType
[ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data ,
2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [
0 ] ] ) ) ; subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs
) ; mxSetCell ( data , offset , mxCreateDoubleScalar ( ( real_T ) reason [
subs [ 0 ] ] ) ) ; } } return data ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 133 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 200 ) ;
ssSetNumBlockIO ( rtS , 16 ) ; ssSetNumBlockParams ( rtS , 37 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 2399311960U ) ; ssSetChecksumVal ( rtS , 1 ,
1810309545U ) ; ssSetChecksumVal ( rtS , 2 , 3210866627U ) ; ssSetChecksumVal
( rtS , 3 , 1950997752U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; executionInfo -> gblObjects_ . numToFiles = 0 ;
executionInfo -> gblObjects_ . numFrFiles = 0 ; executionInfo -> gblObjects_
. numFrWksBlocks = 0 ; executionInfo -> gblObjects_ . numModelInputs = 0 ;
executionInfo -> gblObjects_ . numRootInportBlks = 0 ; executionInfo ->
gblObjects_ . inportDataTypeIdx = NULL ; executionInfo -> gblObjects_ .
inportDims = NULL ; executionInfo -> gblObjects_ . inportComplex = NULL ;
executionInfo -> gblObjects_ . inportInterpoFlag = NULL ; executionInfo ->
gblObjects_ . inportContinuous = NULL ; ( void ) memset ( ( char_T * ) rtS ,
0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo , 0 ,
sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { rtDW . ewxx0epgrq = 1 ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 23 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
HouseHeatingSystem_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive
( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "HouseHeatingSystem" ) ;
ssSetPath ( rtS , "HouseHeatingSystem" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 259200.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 ,
2 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static
int_T rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 2 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T
* rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "Discrete" , "Discrete" , "Discrete" ,
"Discrete" , "Discrete" , "Discrete" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = { "HouseHeatingSystem/Control/Gas valve lag" ,
"HouseHeatingSystem/Heater/Boiler/E-NTU Heat Exchanger (TL)" ,
"HouseHeatingSystem/Heater/Boiler/E-NTU Heat Exchanger (TL)" ,
"HouseHeatingSystem/Heater/Gas-Charged Accumulator (TL)" ,
"HouseHeatingSystem/Heater/Gas-Charged Accumulator (TL)" ,
"HouseHeatingSystem/Heater/Pipe (TL)" , "HouseHeatingSystem/Heater/Pipe (TL)"
, "HouseHeatingSystem/House thermal network/Radiator1/Radiator thermal mass"
, "HouseHeatingSystem/House thermal network/Room 1/Air thermal mass" ,
"HouseHeatingSystem/House thermal network/Radiator1/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator1/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator2/Radiator thermal mass" ,
"HouseHeatingSystem/House thermal network/Room 2/Air thermal mass" ,
"HouseHeatingSystem/House thermal network/Radiator2/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator2/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator3/Radiator thermal mass" ,
"HouseHeatingSystem/House thermal network/Room 3/Air thermal mass" ,
"HouseHeatingSystem/House thermal network/Radiator3/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator3/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator4/Radiator thermal mass" ,
"HouseHeatingSystem/House thermal network/Room 4/Air thermal mass" ,
"HouseHeatingSystem/House thermal network/Radiator4/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator4/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Room 1/Roof  thermal mass" ,
"HouseHeatingSystem/House thermal network/Room 1/Wall  thermal mass" ,
"HouseHeatingSystem/House thermal network/Room 1/Window  thermal mass" ,
"HouseHeatingSystem/House thermal network/Room 2/Roof  thermal mass" ,
"HouseHeatingSystem/House thermal network/Room 2/Wall  thermal mass" ,
"HouseHeatingSystem/House thermal network/Room 2/Window  thermal mass" ,
"HouseHeatingSystem/House thermal network/Room 3/Roof  thermal mass" ,
"HouseHeatingSystem/House thermal network/Room 3/Wall  thermal mass" ,
"HouseHeatingSystem/House thermal network/Room 3/Window  thermal mass" ,
"HouseHeatingSystem/House thermal network/Room 4/Roof  thermal mass" ,
"HouseHeatingSystem/House thermal network/Room 4/Wall  thermal mass" ,
"HouseHeatingSystem/House thermal network/Room 4/Window  thermal mass" ,
"HouseHeatingSystem/Heater/Angular Velocity Source" ,
"HouseHeatingSystem/Heater/Boiler/E-NTU Heat Exchanger (TL)" ,
"HouseHeatingSystem/Heater/Boiler/E-NTU Heat Exchanger (TL)" ,
"HouseHeatingSystem/Heater/Boiler/E-NTU Heat Exchanger (TL)" ,
"HouseHeatingSystem/Heater/Boiler/E-NTU Heat Exchanger (TL)" ,
"HouseHeatingSystem/Heater/Boiler/E-NTU Heat Exchanger (TL)" ,
"HouseHeatingSystem/Heater/Boiler/E-NTU Heat Exchanger (TL)" ,
"HouseHeatingSystem/Heater/Boiler/E-NTU Heat Exchanger (TL)" ,
"HouseHeatingSystem/Heater/Boiler/E-NTU Heat Exchanger (TL)" ,
"HouseHeatingSystem/Heater/Boiler/E-NTU Heat Exchanger (TL)" ,
"HouseHeatingSystem/Heater/Boiler/E-NTU Heat Exchanger (TL)" ,
"HouseHeatingSystem/Heater/Gas-Charged Accumulator (TL)" ,
"HouseHeatingSystem/Heater/Pipe (TL)" ,
"HouseHeatingSystem/Heater/Boiler/E-NTU Heat Exchanger (TL)" ,
"HouseHeatingSystem/Heater/Gas-Charged Accumulator (TL)" ,
"HouseHeatingSystem/Heater/Pipe (TL)" ,
"HouseHeatingSystem/Heater/Boiler/E-NTU Heat Exchanger (TL)" ,
"HouseHeatingSystem/Heater/Boiler/E-NTU Heat Exchanger (TL)" ,
"HouseHeatingSystem/Heater/Boiler/E-NTU Heat Exchanger (TL)" ,
"HouseHeatingSystem/Heater/Boiler/E-NTU Heat Exchanger (TL)" ,
"HouseHeatingSystem/Heater/Boiler/E-NTU Heat Exchanger (TL)" ,
"HouseHeatingSystem/Heater/Boiler/Furnace" ,
"HouseHeatingSystem/Heater/Boiler/Furnace" ,
"HouseHeatingSystem/Heater/Fixed-Displacement Pump (TL)" ,
"HouseHeatingSystem/Heater/Fixed-Displacement Pump (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator1/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator2/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator3/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator4/Pipe (TL)" ,
"HouseHeatingSystem/Heater/Fixed-Displacement Pump (TL)" ,
"HouseHeatingSystem/Heater/Fixed-Displacement Pump (TL)" ,
"HouseHeatingSystem/Heater/Fixed-Displacement Pump (TL)" ,
"HouseHeatingSystem/Heater/Gas-Charged Accumulator (TL)" ,
"HouseHeatingSystem/Heater/Gas-Charged Accumulator (TL)" ,
"HouseHeatingSystem/Heater/Gas-Charged Accumulator (TL)" ,
"HouseHeatingSystem/Heater/Perfect Insulator3" ,
"HouseHeatingSystem/Heater/Pipe (TL)" , "HouseHeatingSystem/Heater/Pipe (TL)"
, "HouseHeatingSystem/House thermal network/Radiator1/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator2/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator3/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator4/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator1/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator2/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator3/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator4/Pipe (TL)" ,
"HouseHeatingSystem/Heater/Pipe (TL)" , "HouseHeatingSystem/Heater/Pipe (TL)"
, "HouseHeatingSystem/Heater/Pipe (TL)" ,
"HouseHeatingSystem/Heater/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator1/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator2/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator3/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator4/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator1/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator1/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator1/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator1/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator2/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator2/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator2/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator2/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator2/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator3/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator3/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator3/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator3/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator3/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator4/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator4/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator4/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator4/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Radiator4/Pipe (TL)" ,
"HouseHeatingSystem/House thermal network/Room 1/Air-roof  convection" ,
"HouseHeatingSystem/House thermal network/Room 1/Air-wall  convection" ,
"HouseHeatingSystem/House thermal network/Room 1/Air-window  convection" ,
"HouseHeatingSystem/House thermal network/Room 1/Roof  thermal mass" ,
"HouseHeatingSystem/House thermal network/Room 1/Wall  thermal mass" ,
 "HouseHeatingSystem/House thermal network/Room 1/Half window-atmosphere  conduction"
, "HouseHeatingSystem/House thermal network/Room 2/Air-roof  convection" ,
"HouseHeatingSystem/House thermal network/Room 2/Air-wall  convection" ,
"HouseHeatingSystem/House thermal network/Room 2/Air-window  convection" ,
"HouseHeatingSystem/House thermal network/Room 2/Roof  thermal mass" ,
"HouseHeatingSystem/House thermal network/Room 2/Wall  thermal mass" ,
 "HouseHeatingSystem/House thermal network/Room 2/Half window-atmosphere  conduction"
, "HouseHeatingSystem/House thermal network/Room 3/Air-roof  convection" ,
"HouseHeatingSystem/House thermal network/Room 3/Air-wall  convection" ,
"HouseHeatingSystem/House thermal network/Room 3/Air-window  convection" ,
"HouseHeatingSystem/House thermal network/Room 3/Roof  thermal mass" ,
"HouseHeatingSystem/House thermal network/Room 3/Wall  thermal mass" ,
 "HouseHeatingSystem/House thermal network/Room 3/Half window-atmosphere  conduction"
, "HouseHeatingSystem/House thermal network/Room 4/Air-roof  convection" ,
"HouseHeatingSystem/House thermal network/Room 4/Air-wall  convection" ,
"HouseHeatingSystem/House thermal network/Room 4/Air-window  convection" ,
"HouseHeatingSystem/House thermal network/Room 4/Roof  thermal mass" ,
"HouseHeatingSystem/House thermal network/Room 4/Wall  thermal mass" ,
 "HouseHeatingSystem/House thermal network/Room 4/Half window-atmosphere  conduction"
, "HouseHeatingSystem/Control/Integrator" ,
"HouseHeatingSystem/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"HouseHeatingSystem/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"HouseHeatingSystem/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
"HouseHeatingSystem/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ,
"HouseHeatingSystem/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ,
"HouseHeatingSystem/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1" } ; static
const char_T * rt_LoggedStateNames [ ] = { "" ,
"HouseHeatingSystem.Heater.Boiler.E_NTU_Heat_Exchanger_TL.thermal_liquid_1.T_I"
,
"HouseHeatingSystem.Heater.Boiler.E_NTU_Heat_Exchanger_TL.thermal_liquid_1.p_I"
, "HouseHeatingSystem.Heater.Gas_Charged_Accumulator_TL.T_I" ,
"HouseHeatingSystem.Heater.Gas_Charged_Accumulator_TL.p_I" ,
"HouseHeatingSystem.Heater.Pipe_TL.segment.p_I" ,
"HouseHeatingSystem.Heater.Pipe_TL.segment.T_I" ,
"HouseHeatingSystem.House_thermal_network.Radiator1.Radiator_thermal_mass.T"
, "HouseHeatingSystem.House_thermal_network.Room_1.Air_thermal_mass.T" ,
"HouseHeatingSystem.House_thermal_network.Radiator1.Pipe_TL.segment.p_I" ,
"HouseHeatingSystem.House_thermal_network.Radiator1.Pipe_TL.segment.T_I" ,
"HouseHeatingSystem.House_thermal_network.Radiator2.Radiator_thermal_mass.T"
, "HouseHeatingSystem.House_thermal_network.Room_2.Air_thermal_mass.T" ,
"HouseHeatingSystem.House_thermal_network.Radiator2.Pipe_TL.segment.p_I" ,
"HouseHeatingSystem.House_thermal_network.Radiator2.Pipe_TL.segment.T_I" ,
"HouseHeatingSystem.House_thermal_network.Radiator3.Radiator_thermal_mass.T"
, "HouseHeatingSystem.House_thermal_network.Room_3.Air_thermal_mass.T" ,
"HouseHeatingSystem.House_thermal_network.Radiator3.Pipe_TL.segment.p_I" ,
"HouseHeatingSystem.House_thermal_network.Radiator3.Pipe_TL.segment.T_I" ,
"HouseHeatingSystem.House_thermal_network.Radiator4.Radiator_thermal_mass.T"
, "HouseHeatingSystem.House_thermal_network.Room_4.Air_thermal_mass.T" ,
"HouseHeatingSystem.House_thermal_network.Radiator4.Pipe_TL.segment.p_I" ,
"HouseHeatingSystem.House_thermal_network.Radiator4.Pipe_TL.segment.T_I" ,
"HouseHeatingSystem.House_thermal_network.Room_1.Roof_thermal_mass.T" ,
"HouseHeatingSystem.House_thermal_network.Room_1.Wall_thermal_mass.T" ,
"HouseHeatingSystem.House_thermal_network.Room_1.Window_thermal_mass.T" ,
"HouseHeatingSystem.House_thermal_network.Room_2.Roof_thermal_mass.T" ,
"HouseHeatingSystem.House_thermal_network.Room_2.Wall_thermal_mass.T" ,
"HouseHeatingSystem.House_thermal_network.Room_2.Window_thermal_mass.T" ,
"HouseHeatingSystem.House_thermal_network.Room_3.Roof_thermal_mass.T" ,
"HouseHeatingSystem.House_thermal_network.Room_3.Wall_thermal_mass.T" ,
"HouseHeatingSystem.House_thermal_network.Room_3.Window_thermal_mass.T" ,
"HouseHeatingSystem.House_thermal_network.Room_4.Roof_thermal_mass.T" ,
"HouseHeatingSystem.House_thermal_network.Room_4.Wall_thermal_mass.T" ,
"HouseHeatingSystem.House_thermal_network.Room_4.Window_thermal_mass.T" ,
"HouseHeatingSystem.Heater.Angular_Velocity_Source.t" ,
"HouseHeatingSystem.Heater.Boiler.E_NTU_Heat_Exchanger_TL.A1.T" ,
"HouseHeatingSystem.Heater.Boiler.E_NTU_Heat_Exchanger_TL.A1.p" ,
"HouseHeatingSystem.Heater.Boiler.E_NTU_Heat_Exchanger_TL.B1.T" ,
"HouseHeatingSystem.Heater.Boiler.E_NTU_Heat_Exchanger_TL.C2" ,
"HouseHeatingSystem.Heater.Boiler.E_NTU_Heat_Exchanger_TL.H2.T" ,
"HouseHeatingSystem.Heater.Boiler.E_NTU_Heat_Exchanger_TL.heat_transfer.C1" ,
"HouseHeatingSystem.Heater.Boiler.E_NTU_Heat_Exchanger_TL.thermal_liquid_1.T_A"
,
"HouseHeatingSystem.Heater.Boiler.E_NTU_Heat_Exchanger_TL.thermal_liquid_1.T_B"
, "HouseHeatingSystem.Heater.Boiler.E_NTU_Heat_Exchanger_TL.heat_transfer.Q"
,
 "HouseHeatingSystem.Heater.Boiler.E_NTU_Heat_Exchanger_TL.thermal_liquid_1.Phi_A"
, "HouseHeatingSystem.Heater.Gas_Charged_Accumulator_TL.Phi_A" ,
"HouseHeatingSystem.Heater.Pipe_TL.segment.Phi_A" ,
 "HouseHeatingSystem.Heater.Boiler.E_NTU_Heat_Exchanger_TL.thermal_liquid_1.mdot_A"
, "HouseHeatingSystem.Heater.Gas_Charged_Accumulator_TL.convection_A.mdot" ,
"HouseHeatingSystem.Heater.Pipe_TL.segment.convection_A.mdot" ,
 "HouseHeatingSystem.Heater.Boiler.E_NTU_Heat_Exchanger_TL.thermal_liquid_1.rho_A"
,
 "HouseHeatingSystem.Heater.Boiler.E_NTU_Heat_Exchanger_TL.thermal_liquid_1.rho_B"
,
"HouseHeatingSystem.Heater.Boiler.E_NTU_Heat_Exchanger_TL.thermal_liquid_1.u_A"
,
"HouseHeatingSystem.Heater.Boiler.E_NTU_Heat_Exchanger_TL.thermal_liquid_1.u_B"
,
"HouseHeatingSystem.Heater.Boiler.E_NTU_Heat_Exchanger_TL.thermal_liquid_1.u_I"
, "HouseHeatingSystem.Heater.Boiler.Furnace.mdot_air_su" ,
"HouseHeatingSystem.Heater.Boiler.Furnace.mdot_mix" ,
"HouseHeatingSystem.Heater.Fixed_Displacement_Pump_TL.A.T" ,
"HouseHeatingSystem.Heater.Fixed_Displacement_Pump_TL.A.p" ,
"HouseHeatingSystem.House_thermal_network.Radiator1.Pipe_TL.segment.Phi_B" ,
"HouseHeatingSystem.House_thermal_network.Radiator2.Pipe_TL.segment.Phi_B" ,
"HouseHeatingSystem.House_thermal_network.Radiator3.Pipe_TL.segment.Phi_B" ,
"HouseHeatingSystem.House_thermal_network.Radiator4.Pipe_TL.segment.Phi_B" ,
"HouseHeatingSystem.Heater.Fixed_Displacement_Pump_TL.convection_A.T" ,
"HouseHeatingSystem.Heater.Fixed_Displacement_Pump_TL.convection_A.u_I" ,
"HouseHeatingSystem.Heater.Fixed_Displacement_Pump_TL.convection_B.T" ,
"HouseHeatingSystem.Heater.Gas_Charged_Accumulator_TL.convection_A.T" ,
"HouseHeatingSystem.Heater.Gas_Charged_Accumulator_TL.convection_A.u_I" ,
"HouseHeatingSystem.Heater.Gas_Charged_Accumulator_TL.liquid_volume" ,
"HouseHeatingSystem.Heater.Perfect_Insulator3.A.T" ,
"HouseHeatingSystem.Heater.Pipe_TL.B.T" ,
"HouseHeatingSystem.Heater.Pipe_TL.B.p" ,
"HouseHeatingSystem.House_thermal_network.Radiator1.Pipe_TL.segment.Phi_A" ,
"HouseHeatingSystem.House_thermal_network.Radiator2.Pipe_TL.segment.Phi_A" ,
"HouseHeatingSystem.House_thermal_network.Radiator3.Pipe_TL.segment.Phi_A" ,
"HouseHeatingSystem.House_thermal_network.Radiator4.Pipe_TL.segment.Phi_A" ,
 "HouseHeatingSystem.House_thermal_network.Radiator1.Pipe_TL.segment.convection_A.mdot"
,
 "HouseHeatingSystem.House_thermal_network.Radiator2.Pipe_TL.segment.convection_A.mdot"
,
 "HouseHeatingSystem.House_thermal_network.Radiator3.Pipe_TL.segment.convection_A.mdot"
,
 "HouseHeatingSystem.House_thermal_network.Radiator4.Pipe_TL.segment.convection_A.mdot"
, "HouseHeatingSystem.Heater.Pipe_TL.segment.convection_A.T" ,
"HouseHeatingSystem.Heater.Pipe_TL.segment.convection_A.u_I" ,
"HouseHeatingSystem.Heater.Pipe_TL.segment.convection_B.T" ,
"HouseHeatingSystem.Heater.Pipe_TL.segment.convection_B.u_I" ,
"HouseHeatingSystem.House_thermal_network.Radiator1.Pipe_TL.segment.Q_H" ,
 "HouseHeatingSystem.House_thermal_network.Radiator2.Pipe_TL.segment.convection_B.mdot"
,
 "HouseHeatingSystem.House_thermal_network.Radiator3.Pipe_TL.segment.convection_B.mdot"
,
 "HouseHeatingSystem.House_thermal_network.Radiator4.Pipe_TL.segment.convection_B.mdot"
,
 "HouseHeatingSystem.House_thermal_network.Radiator1.Pipe_TL.segment.convection_A.T"
,
 "HouseHeatingSystem.House_thermal_network.Radiator1.Pipe_TL.segment.convection_A.u_I"
,
 "HouseHeatingSystem.House_thermal_network.Radiator1.Pipe_TL.segment.convection_B.T"
,
 "HouseHeatingSystem.House_thermal_network.Radiator1.Pipe_TL.segment.convection_B.u_I"
, "HouseHeatingSystem.House_thermal_network.Radiator2.Pipe_TL.segment.Q_H" ,
 "HouseHeatingSystem.House_thermal_network.Radiator2.Pipe_TL.segment.convection_A.T"
,
 "HouseHeatingSystem.House_thermal_network.Radiator2.Pipe_TL.segment.convection_A.u_I"
,
 "HouseHeatingSystem.House_thermal_network.Radiator2.Pipe_TL.segment.convection_B.T"
,
 "HouseHeatingSystem.House_thermal_network.Radiator2.Pipe_TL.segment.convection_B.u_I"
, "HouseHeatingSystem.House_thermal_network.Radiator3.Pipe_TL.segment.Q_H" ,
 "HouseHeatingSystem.House_thermal_network.Radiator3.Pipe_TL.segment.convection_A.T"
,
 "HouseHeatingSystem.House_thermal_network.Radiator3.Pipe_TL.segment.convection_A.u_I"
,
 "HouseHeatingSystem.House_thermal_network.Radiator3.Pipe_TL.segment.convection_B.T"
,
 "HouseHeatingSystem.House_thermal_network.Radiator3.Pipe_TL.segment.convection_B.u_I"
, "HouseHeatingSystem.House_thermal_network.Radiator4.Pipe_TL.segment.Q_H" ,
 "HouseHeatingSystem.House_thermal_network.Radiator4.Pipe_TL.segment.convection_A.T"
,
 "HouseHeatingSystem.House_thermal_network.Radiator4.Pipe_TL.segment.convection_A.u_I"
,
 "HouseHeatingSystem.House_thermal_network.Radiator4.Pipe_TL.segment.convection_B.T"
,
 "HouseHeatingSystem.House_thermal_network.Radiator4.Pipe_TL.segment.convection_B.u_I"
, "HouseHeatingSystem.House_thermal_network.Room_1.Air_roof_convection.B.T" ,
"HouseHeatingSystem.House_thermal_network.Room_1.Air_wall_convection.Q" ,
"HouseHeatingSystem.House_thermal_network.Room_1.Air_window_convection.B.T" ,
"HouseHeatingSystem.House_thermal_network.Room_1.Roof_thermal_mass.Q" ,
"HouseHeatingSystem.House_thermal_network.Room_1.Wall_thermal_mass.Q" ,
 "HouseHeatingSystem.House_thermal_network.Room_1.Half_window_atmosphere_conduction.B.T"
, "HouseHeatingSystem.House_thermal_network.Room_2.Air_roof_convection.B.T" ,
"HouseHeatingSystem.House_thermal_network.Room_2.Air_wall_convection.Q" ,
"HouseHeatingSystem.House_thermal_network.Room_2.Air_window_convection.B.T" ,
"HouseHeatingSystem.House_thermal_network.Room_2.Roof_thermal_mass.Q" ,
"HouseHeatingSystem.House_thermal_network.Room_2.Wall_thermal_mass.Q" ,
 "HouseHeatingSystem.House_thermal_network.Room_2.Half_window_atmosphere_conduction.B.T"
, "HouseHeatingSystem.House_thermal_network.Room_3.Air_roof_convection.B.T" ,
"HouseHeatingSystem.House_thermal_network.Room_3.Air_wall_convection.Q" ,
"HouseHeatingSystem.House_thermal_network.Room_3.Air_window_convection.B.T" ,
"HouseHeatingSystem.House_thermal_network.Room_3.Roof_thermal_mass.Q" ,
"HouseHeatingSystem.House_thermal_network.Room_3.Wall_thermal_mass.Q" ,
 "HouseHeatingSystem.House_thermal_network.Room_3.Half_window_atmosphere_conduction.B.T"
, "HouseHeatingSystem.House_thermal_network.Room_4.Air_roof_convection.B.T" ,
"HouseHeatingSystem.House_thermal_network.Room_4.Air_wall_convection.Q" ,
"HouseHeatingSystem.House_thermal_network.Room_4.Air_window_convection.B.T" ,
"HouseHeatingSystem.House_thermal_network.Room_4.Roof_thermal_mass.Q" ,
"HouseHeatingSystem.House_thermal_network.Room_4.Wall_thermal_mass.Q" ,
 "HouseHeatingSystem.House_thermal_network.Room_4.Half_window_atmosphere_conduction.B.T"
, "" , "" , "" , "" , "" , "" , "" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } ,
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 0 , 1 , 2 , 3 , 4 , 5 } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 139 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 139 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . mi4chsjn5i ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . erxoiy5pht [ 0 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . erxoiy5pht [ 1 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . erxoiy5pht [ 2 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . erxoiy5pht [ 3 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . erxoiy5pht [ 4 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . erxoiy5pht [ 5 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . erxoiy5pht [ 6 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . erxoiy5pht [ 7 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . erxoiy5pht [ 8 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . erxoiy5pht [ 9 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . erxoiy5pht [ 10 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . erxoiy5pht [ 11 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . erxoiy5pht [ 12 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . erxoiy5pht [ 13 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . erxoiy5pht [ 14 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . erxoiy5pht [ 15 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . erxoiy5pht [ 16 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . erxoiy5pht [ 17 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . erxoiy5pht [ 18 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . erxoiy5pht [ 19 ] ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . erxoiy5pht [ 20 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . erxoiy5pht [ 21 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . erxoiy5pht [ 22 ] ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . erxoiy5pht [ 23 ] ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . erxoiy5pht [ 24 ] ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . erxoiy5pht [ 25 ] ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . erxoiy5pht [ 26 ] ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . erxoiy5pht [ 27 ] ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . erxoiy5pht [ 28 ] ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . erxoiy5pht [ 29 ] ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . erxoiy5pht [ 30 ] ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . erxoiy5pht [ 31 ] ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . erxoiy5pht [ 32 ] ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . erxoiy5pht [ 33 ] ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . erxoiy5pht [ 34 ] ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . erxoiy5pht [ 35 ] ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . erxoiy5pht [ 36 ] ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . erxoiy5pht [ 37 ] ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . erxoiy5pht [ 38 ] ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . erxoiy5pht [ 39 ] ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . erxoiy5pht [ 40 ] ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . erxoiy5pht [ 41 ] ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . erxoiy5pht [ 42 ] ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . erxoiy5pht [ 43 ] ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . erxoiy5pht [ 44 ] ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . erxoiy5pht [ 45 ] ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . erxoiy5pht [ 46 ] ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtX . erxoiy5pht [ 47 ] ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtX . erxoiy5pht [ 48 ] ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtX . erxoiy5pht [ 49 ] ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtX . erxoiy5pht [ 50 ] ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtX . erxoiy5pht [ 51 ] ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtX . erxoiy5pht [ 52 ] ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtX . erxoiy5pht [ 53 ] ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtX . erxoiy5pht [ 54 ] ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtX . erxoiy5pht [ 55 ] ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtX . erxoiy5pht [ 56 ] ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) & rtX . erxoiy5pht [ 57 ] ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) & rtX . erxoiy5pht [ 58 ] ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) & rtX . erxoiy5pht [ 59 ] ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) & rtX . erxoiy5pht [ 60 ] ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) & rtX . erxoiy5pht [ 61 ] ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) & rtX . erxoiy5pht [ 62 ] ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) & rtX . erxoiy5pht [ 63 ] ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) & rtX . erxoiy5pht [ 64 ] ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) & rtX . erxoiy5pht [ 65 ] ;
rt_LoggedStateSignalPtrs [ 67 ] = ( void * ) & rtX . erxoiy5pht [ 66 ] ;
rt_LoggedStateSignalPtrs [ 68 ] = ( void * ) & rtX . erxoiy5pht [ 67 ] ;
rt_LoggedStateSignalPtrs [ 69 ] = ( void * ) & rtX . erxoiy5pht [ 68 ] ;
rt_LoggedStateSignalPtrs [ 70 ] = ( void * ) & rtX . erxoiy5pht [ 69 ] ;
rt_LoggedStateSignalPtrs [ 71 ] = ( void * ) & rtX . erxoiy5pht [ 70 ] ;
rt_LoggedStateSignalPtrs [ 72 ] = ( void * ) & rtX . erxoiy5pht [ 71 ] ;
rt_LoggedStateSignalPtrs [ 73 ] = ( void * ) & rtX . erxoiy5pht [ 72 ] ;
rt_LoggedStateSignalPtrs [ 74 ] = ( void * ) & rtX . erxoiy5pht [ 73 ] ;
rt_LoggedStateSignalPtrs [ 75 ] = ( void * ) & rtX . erxoiy5pht [ 74 ] ;
rt_LoggedStateSignalPtrs [ 76 ] = ( void * ) & rtX . erxoiy5pht [ 75 ] ;
rt_LoggedStateSignalPtrs [ 77 ] = ( void * ) & rtX . erxoiy5pht [ 76 ] ;
rt_LoggedStateSignalPtrs [ 78 ] = ( void * ) & rtX . erxoiy5pht [ 77 ] ;
rt_LoggedStateSignalPtrs [ 79 ] = ( void * ) & rtX . erxoiy5pht [ 78 ] ;
rt_LoggedStateSignalPtrs [ 80 ] = ( void * ) & rtX . erxoiy5pht [ 79 ] ;
rt_LoggedStateSignalPtrs [ 81 ] = ( void * ) & rtX . erxoiy5pht [ 80 ] ;
rt_LoggedStateSignalPtrs [ 82 ] = ( void * ) & rtX . erxoiy5pht [ 81 ] ;
rt_LoggedStateSignalPtrs [ 83 ] = ( void * ) & rtX . erxoiy5pht [ 82 ] ;
rt_LoggedStateSignalPtrs [ 84 ] = ( void * ) & rtX . erxoiy5pht [ 83 ] ;
rt_LoggedStateSignalPtrs [ 85 ] = ( void * ) & rtX . erxoiy5pht [ 84 ] ;
rt_LoggedStateSignalPtrs [ 86 ] = ( void * ) & rtX . erxoiy5pht [ 85 ] ;
rt_LoggedStateSignalPtrs [ 87 ] = ( void * ) & rtX . erxoiy5pht [ 86 ] ;
rt_LoggedStateSignalPtrs [ 88 ] = ( void * ) & rtX . erxoiy5pht [ 87 ] ;
rt_LoggedStateSignalPtrs [ 89 ] = ( void * ) & rtX . erxoiy5pht [ 88 ] ;
rt_LoggedStateSignalPtrs [ 90 ] = ( void * ) & rtX . erxoiy5pht [ 89 ] ;
rt_LoggedStateSignalPtrs [ 91 ] = ( void * ) & rtX . erxoiy5pht [ 90 ] ;
rt_LoggedStateSignalPtrs [ 92 ] = ( void * ) & rtX . erxoiy5pht [ 91 ] ;
rt_LoggedStateSignalPtrs [ 93 ] = ( void * ) & rtX . erxoiy5pht [ 92 ] ;
rt_LoggedStateSignalPtrs [ 94 ] = ( void * ) & rtX . erxoiy5pht [ 93 ] ;
rt_LoggedStateSignalPtrs [ 95 ] = ( void * ) & rtX . erxoiy5pht [ 94 ] ;
rt_LoggedStateSignalPtrs [ 96 ] = ( void * ) & rtX . erxoiy5pht [ 95 ] ;
rt_LoggedStateSignalPtrs [ 97 ] = ( void * ) & rtX . erxoiy5pht [ 96 ] ;
rt_LoggedStateSignalPtrs [ 98 ] = ( void * ) & rtX . erxoiy5pht [ 97 ] ;
rt_LoggedStateSignalPtrs [ 99 ] = ( void * ) & rtX . erxoiy5pht [ 98 ] ;
rt_LoggedStateSignalPtrs [ 100 ] = ( void * ) & rtX . erxoiy5pht [ 99 ] ;
rt_LoggedStateSignalPtrs [ 101 ] = ( void * ) & rtX . erxoiy5pht [ 100 ] ;
rt_LoggedStateSignalPtrs [ 102 ] = ( void * ) & rtX . erxoiy5pht [ 101 ] ;
rt_LoggedStateSignalPtrs [ 103 ] = ( void * ) & rtX . erxoiy5pht [ 102 ] ;
rt_LoggedStateSignalPtrs [ 104 ] = ( void * ) & rtX . erxoiy5pht [ 103 ] ;
rt_LoggedStateSignalPtrs [ 105 ] = ( void * ) & rtX . erxoiy5pht [ 104 ] ;
rt_LoggedStateSignalPtrs [ 106 ] = ( void * ) & rtX . erxoiy5pht [ 105 ] ;
rt_LoggedStateSignalPtrs [ 107 ] = ( void * ) & rtX . erxoiy5pht [ 106 ] ;
rt_LoggedStateSignalPtrs [ 108 ] = ( void * ) & rtX . erxoiy5pht [ 107 ] ;
rt_LoggedStateSignalPtrs [ 109 ] = ( void * ) & rtX . erxoiy5pht [ 108 ] ;
rt_LoggedStateSignalPtrs [ 110 ] = ( void * ) & rtX . erxoiy5pht [ 109 ] ;
rt_LoggedStateSignalPtrs [ 111 ] = ( void * ) & rtX . erxoiy5pht [ 110 ] ;
rt_LoggedStateSignalPtrs [ 112 ] = ( void * ) & rtX . erxoiy5pht [ 111 ] ;
rt_LoggedStateSignalPtrs [ 113 ] = ( void * ) & rtX . erxoiy5pht [ 112 ] ;
rt_LoggedStateSignalPtrs [ 114 ] = ( void * ) & rtX . erxoiy5pht [ 113 ] ;
rt_LoggedStateSignalPtrs [ 115 ] = ( void * ) & rtX . erxoiy5pht [ 114 ] ;
rt_LoggedStateSignalPtrs [ 116 ] = ( void * ) & rtX . erxoiy5pht [ 115 ] ;
rt_LoggedStateSignalPtrs [ 117 ] = ( void * ) & rtX . erxoiy5pht [ 116 ] ;
rt_LoggedStateSignalPtrs [ 118 ] = ( void * ) & rtX . erxoiy5pht [ 117 ] ;
rt_LoggedStateSignalPtrs [ 119 ] = ( void * ) & rtX . erxoiy5pht [ 118 ] ;
rt_LoggedStateSignalPtrs [ 120 ] = ( void * ) & rtX . erxoiy5pht [ 119 ] ;
rt_LoggedStateSignalPtrs [ 121 ] = ( void * ) & rtX . erxoiy5pht [ 120 ] ;
rt_LoggedStateSignalPtrs [ 122 ] = ( void * ) & rtX . erxoiy5pht [ 121 ] ;
rt_LoggedStateSignalPtrs [ 123 ] = ( void * ) & rtX . erxoiy5pht [ 122 ] ;
rt_LoggedStateSignalPtrs [ 124 ] = ( void * ) & rtX . erxoiy5pht [ 123 ] ;
rt_LoggedStateSignalPtrs [ 125 ] = ( void * ) & rtX . erxoiy5pht [ 124 ] ;
rt_LoggedStateSignalPtrs [ 126 ] = ( void * ) & rtX . erxoiy5pht [ 125 ] ;
rt_LoggedStateSignalPtrs [ 127 ] = ( void * ) & rtX . erxoiy5pht [ 126 ] ;
rt_LoggedStateSignalPtrs [ 128 ] = ( void * ) & rtX . erxoiy5pht [ 127 ] ;
rt_LoggedStateSignalPtrs [ 129 ] = ( void * ) & rtX . erxoiy5pht [ 128 ] ;
rt_LoggedStateSignalPtrs [ 130 ] = ( void * ) & rtX . erxoiy5pht [ 129 ] ;
rt_LoggedStateSignalPtrs [ 131 ] = ( void * ) & rtX . erxoiy5pht [ 130 ] ;
rt_LoggedStateSignalPtrs [ 132 ] = ( void * ) & rtX . opnn4r3yvf ;
rt_LoggedStateSignalPtrs [ 133 ] = ( void * ) rtDW . akwnajywu4 ;
rt_LoggedStateSignalPtrs [ 134 ] = ( void * ) rtDW . ajutelgcg5 ;
rt_LoggedStateSignalPtrs [ 135 ] = ( void * ) rtDW . ov5nxhifvo ;
rt_LoggedStateSignalPtrs [ 136 ] = ( void * ) rtDW . j350arjku2 ;
rt_LoggedStateSignalPtrs [ 137 ] = ( void * ) rtDW . nerjst2vy3 ;
rt_LoggedStateSignalPtrs [ 138 ] = ( void * ) rtDW . ealnthjniv ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 0 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS ,
& statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 133 ] ; static real_T absTol [ 133 ] = { 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 } ; static uint8_T
absTolControl [ 133 ] = { 2U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 2U } ;
static real_T contStateJacPerturbBoundMinVec [ 133 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 133 ] ; static uint8_T zcAttributes [ 92 ] =
{ ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , (
0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_ALL
) } ; static ssNonContDerivSigInfo nonContDerivSigInfo [ 2 ] = { { 1 * sizeof
( real_T ) , ( char * ) ( & rtB . mwexkxe4pu ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . getpknuwvw ) , ( NULL ) } } ; { int i ; for (
i = 0 ; i < 133 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 5184.0 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
2 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "daessc" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; _ssSetSolverUpdateJacobianAtReset
( rtS , true ) ; ssSetAbsTolVector ( rtS , absTol ) ;
ssSetAbsTolControlVector ( rtS , absTolControl ) ; ssSetSolverAbsTol_Obsolete
( rtS , absTol ) ; ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl )
; ssSetJacobianPerturbationBoundsMinVec ( rtS ,
contStateJacPerturbBoundMinVec ) ; ssSetJacobianPerturbationBoundsMaxVec (
rtS , contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0
) ; ( void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) )
; ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetMassMatrixType ( rtS , ( ssMatrixType ) 3 ) ;
ssSetMassMatrixNzMax ( rtS , 50 ) ; ssSetModelMassMatrix ( rtS ,
MdlMassMatrix ) ; ssSetModelForcingFunction ( rtS , MdlForcingFunction ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 3 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 50 ) ; ssSetModelOutputs ( rtS ,
MdlOutputs ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives (
rtS , MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 92 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 92 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; { int_T
* ir = rtMassMatrix . ir ; int_T * jc = rtMassMatrix . jc ; real_T * pr =
rtMassMatrix . pr ; ssSetMassMatrixIr ( rtS , ir ) ; ssSetMassMatrixJc ( rtS
, jc ) ; ssSetMassMatrixPr ( rtS , pr ) ; ( void ) memset ( ( void * ) ir , 0
, 50 * sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) jc , 0 , ( 133 + 1 )
* sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) pr , 0 , 50 * sizeof (
real_T ) ) ; } } { ZCSigState * zc = ( ZCSigState * ) & rtPrevZCX ;
ssSetPrevZCSigState ( rtS , zc ) ; } { rtPrevZCX . ncw0skigpa =
UNINITIALIZED_ZCSIG ; rtPrevZCX . mh1us11q41 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . nd5mhp2ns2 = UNINITIALIZED_ZCSIG ; rtPrevZCX . gsr3spxvy4 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . ozd21vuisb = UNINITIALIZED_ZCSIG ;
rtPrevZCX . cbnv0dvuas = UNINITIALIZED_ZCSIG ; rtPrevZCX . pdqeseajyb =
UNINITIALIZED_ZCSIG ; rtPrevZCX . hsgfbpjl5p = UNINITIALIZED_ZCSIG ;
rtPrevZCX . jjw1zas2q0 = UNINITIALIZED_ZCSIG ; rtPrevZCX . l0mk21b4q5 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . arwbnyfeob = UNINITIALIZED_ZCSIG ;
rtPrevZCX . pgksk3tpof = UNINITIALIZED_ZCSIG ; rtPrevZCX . dwns4dhkbt =
UNINITIALIZED_ZCSIG ; rtPrevZCX . k1dsnm0ire = UNINITIALIZED_ZCSIG ;
rtPrevZCX . eztrand5sz = UNINITIALIZED_ZCSIG ; rtPrevZCX . fh2gzvkea2 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . iqoncempo0 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . b4hg1b35st = UNINITIALIZED_ZCSIG ; rtPrevZCX . piaayk2paw =
UNINITIALIZED_ZCSIG ; rtPrevZCX . azbto5i51i = UNINITIALIZED_ZCSIG ;
rtPrevZCX . iec5jm4p4h = UNINITIALIZED_ZCSIG ; rtPrevZCX . eomfrjtqfn =
UNINITIALIZED_ZCSIG ; rtPrevZCX . gft0prbamo = UNINITIALIZED_ZCSIG ;
rtPrevZCX . lh3cgfa5hw = UNINITIALIZED_ZCSIG ; rtPrevZCX . n24rq5q22e =
UNINITIALIZED_ZCSIG ; rtPrevZCX . mmznyr4nqj = UNINITIALIZED_ZCSIG ;
rtPrevZCX . m2440pedu4 = UNINITIALIZED_ZCSIG ; rtPrevZCX . asy1d3ovcu =
UNINITIALIZED_ZCSIG ; rtPrevZCX . bcmtx5i1zn = UNINITIALIZED_ZCSIG ;
rtPrevZCX . eu13q5cqkz = UNINITIALIZED_ZCSIG ; rtPrevZCX . coyqtgiuii =
UNINITIALIZED_ZCSIG ; rtPrevZCX . exfhjayhp3 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . lajnqiclty = UNINITIALIZED_ZCSIG ; rtPrevZCX . l3bt5f1wi2 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . eplpu0ma5z = UNINITIALIZED_ZCSIG ;
rtPrevZCX . jcbyzpuq4s = UNINITIALIZED_ZCSIG ; rtPrevZCX . iryxrctrwk =
UNINITIALIZED_ZCSIG ; rtPrevZCX . by11kkhlg2 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . cc1lflowlv = UNINITIALIZED_ZCSIG ; rtPrevZCX . ad0qyuzoby =
UNINITIALIZED_ZCSIG ; rtPrevZCX . msoul3kuv2 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . pxskhdnodc = UNINITIALIZED_ZCSIG ; rtPrevZCX . c4nuqx5r3j =
UNINITIALIZED_ZCSIG ; rtPrevZCX . loiqo33vxg = UNINITIALIZED_ZCSIG ;
rtPrevZCX . dmlwhnskkq = UNINITIALIZED_ZCSIG ; rtPrevZCX . bjqlhaudzu =
UNINITIALIZED_ZCSIG ; rtPrevZCX . exvrnwdlf2 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . onyij5dab1 = UNINITIALIZED_ZCSIG ; rtPrevZCX . ltjrihp5nt =
UNINITIALIZED_ZCSIG ; rtPrevZCX . ou1p5qj3gi = UNINITIALIZED_ZCSIG ;
rtPrevZCX . bdve24mlu2 = UNINITIALIZED_ZCSIG ; rtPrevZCX . calxs5qbqc =
UNINITIALIZED_ZCSIG ; rtPrevZCX . mwtyvlx0fo = UNINITIALIZED_ZCSIG ;
rtPrevZCX . k1cpgtavgy = UNINITIALIZED_ZCSIG ; rtPrevZCX . l1trjww0iz =
UNINITIALIZED_ZCSIG ; rtPrevZCX . lkupphkea3 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . o2ybono1l3 = UNINITIALIZED_ZCSIG ; rtPrevZCX . dj0lodxf2n =
UNINITIALIZED_ZCSIG ; rtPrevZCX . if3fj2bnjz = UNINITIALIZED_ZCSIG ;
rtPrevZCX . pnt2v3c1fs = UNINITIALIZED_ZCSIG ; rtPrevZCX . cxqdauontu =
UNINITIALIZED_ZCSIG ; rtPrevZCX . daftsy2scb = UNINITIALIZED_ZCSIG ;
rtPrevZCX . e1rk2sq2ta = UNINITIALIZED_ZCSIG ; rtPrevZCX . jovz2y1sl1 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . ksitqmjuvv = UNINITIALIZED_ZCSIG ;
rtPrevZCX . ete3xmowt5 = UNINITIALIZED_ZCSIG ; rtPrevZCX . ktmf0f2n5v =
UNINITIALIZED_ZCSIG ; rtPrevZCX . jfo435uo20 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . pkm05oobp3 = UNINITIALIZED_ZCSIG ; rtPrevZCX . c1h3z0qcsj =
UNINITIALIZED_ZCSIG ; rtPrevZCX . onezmf4rlw = UNINITIALIZED_ZCSIG ;
rtPrevZCX . hvzv5zaifu = UNINITIALIZED_ZCSIG ; rtPrevZCX . kkwir05lhs =
UNINITIALIZED_ZCSIG ; rtPrevZCX . ahd2xcideu = UNINITIALIZED_ZCSIG ;
rtPrevZCX . mlnjjse4hb = UNINITIALIZED_ZCSIG ; rtPrevZCX . bm24ubnq2a =
UNINITIALIZED_ZCSIG ; rtPrevZCX . bbrhmjac4n = UNINITIALIZED_ZCSIG ;
rtPrevZCX . iijequczg1 = UNINITIALIZED_ZCSIG ; rtPrevZCX . hd225h1pyq =
UNINITIALIZED_ZCSIG ; rtPrevZCX . hp0crqbz2j = UNINITIALIZED_ZCSIG ;
rtPrevZCX . h1tnb3tyef = UNINITIALIZED_ZCSIG ; rtPrevZCX . ougclzgoox =
UNINITIALIZED_ZCSIG ; rtPrevZCX . mncgqhrest = UNINITIALIZED_ZCSIG ;
rtPrevZCX . axhhl0c3m3 = UNINITIALIZED_ZCSIG ; rtPrevZCX . ontgz20qpd =
UNINITIALIZED_ZCSIG ; rtPrevZCX . gt3wjvtlan = UNINITIALIZED_ZCSIG ;
rtPrevZCX . cg43dcqtdy = UNINITIALIZED_ZCSIG ; rtPrevZCX . hpt5skm3d3 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . hpmzofyvpi = UNINITIALIZED_ZCSIG ;
rtPrevZCX . bzdnaxxz4o = UNINITIALIZED_ZCSIG ; rtPrevZCX . mfezycequb =
UNINITIALIZED_ZCSIG ; } ssSetChecksumVal ( rtS , 0 , 2399311960U ) ;
ssSetChecksumVal ( rtS , 1 , 1810309545U ) ; ssSetChecksumVal ( rtS , 2 ,
3210866627U ) ; ssSetChecksumVal ( rtS , 3 , 1950997752U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 1 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_HouseHeatingSystem_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_HouseHeatingSystem_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_HouseHeatingSystem_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
void MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID2 ( tid ) ; }
