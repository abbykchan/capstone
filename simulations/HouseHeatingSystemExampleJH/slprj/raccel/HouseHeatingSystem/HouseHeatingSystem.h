#ifndef RTW_HEADER_HouseHeatingSystem_h_
#define RTW_HEADER_HouseHeatingSystem_h_
#ifndef HouseHeatingSystem_COMMON_INCLUDES_
#define HouseHeatingSystem_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw_rtp.h"
#include "HouseHeatingSystem_76122067_1_gateway.h"
#include "nesl_rtw.h"
#include "physmod/common/logging2/core/rtw/SscRTWLogging.h"
#include "stdlib.h"
#include "ssc_rtw_logging.h"
#include "physmod/common/logging2/core/rtw/rtw_log_fcn_manager.h"
#endif
#include "HouseHeatingSystem_types.h"
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "zero_crossing_types.h"
#define MODEL_NAME HouseHeatingSystem
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (16) 
#define NUM_ZC_EVENTS (91) 
#ifndef NCSTATES
#define NCSTATES (133)   
#elif NCSTATES != 133
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T jcuxftpgbe [ 4 ] ; real_T hnbdpwqz2n ; real_T
j42ejggumw ; real_T dhygcrhrhg [ 4 ] ; real_T n41c3y4pnu ; real_T ilmr4xzw55
[ 4 ] ; real_T mitljv53sz [ 4 ] ; real_T pgk32jnvcv [ 4 ] ; real_T fmg02zskcs
[ 4 ] ; real_T getpknuwvw ; real_T n1aqtv5v4t [ 213 ] ; real_T psybk0zlj0 ;
real_T pue0qcaqsp ; real_T bsadk0jbva ; real_T m24c4vhtyg ; real_T mwexkxe4pu
; } B ; typedef struct { real_T akwnajywu4 [ 2 ] ; real_T ajutelgcg5 [ 2 ] ;
real_T ov5nxhifvo [ 2 ] ; real_T j350arjku2 [ 2 ] ; real_T nerjst2vy3 [ 2 ] ;
real_T ealnthjniv [ 2 ] ; real_T cv2lovyvj4 ; real_T fuejd45s1j ; void *
j32iztpw5z ; void * mibc44iqh5 ; void * bmoxdps0ci ; void * khebctcs3x ; void
* j2xlwkdfkt ; void * duwgk5zijk ; void * amrlhqfbho ; void * cn5o1hwxu2 ;
void * ky3wi3ssfa ; void * bepurh4j31 ; void * javex1fpbe ; struct { void *
LoggedData ; } bvotwtgmnr ; struct { void * AQHandles ; } cbgqpxj4mm ; void *
fugitqzd1f ; void * ldhg35dscz ; void * eqneqyldwu ; int_T ilpkpitgbn [ 82 ]
; int_T e5c3vcpyz1 ; int32_T ewxx0epgrq ; boolean_T gprv1nclhs ; boolean_T
njyusbtibv ; boolean_T bel1u0w0gn ; boolean_T ep3icowjz2 ; } DW ; typedef
struct { real_T mi4chsjn5i ; real_T erxoiy5pht [ 131 ] ; real_T opnn4r3yvf ;
} X ; typedef struct { real_T mi4chsjn5i ; real_T erxoiy5pht [ 131 ] ; real_T
opnn4r3yvf ; } XDot ; typedef struct { boolean_T mi4chsjn5i ; boolean_T
erxoiy5pht [ 131 ] ; boolean_T opnn4r3yvf ; } XDis ; typedef struct { real_T
mi4chsjn5i ; real_T erxoiy5pht [ 131 ] ; real_T opnn4r3yvf ; } CStateAbsTol ;
typedef struct { real_T mi4chsjn5i ; real_T erxoiy5pht [ 131 ] ; real_T
opnn4r3yvf ; } CXPtMin ; typedef struct { real_T mi4chsjn5i ; real_T
erxoiy5pht [ 131 ] ; real_T opnn4r3yvf ; } CXPtMax ; typedef struct { real_T
apws2bjar3 ; real_T mww1icmk0x ; real_T fnylwwmnvu ; real_T evidxx4igy ;
real_T jppm2nnojw ; real_T lvjfwab5uj ; real_T fyterccenv ; real_T c3qara1e1h
; real_T j53s5sbxfh ; real_T goiawy4t3j ; real_T e25r5sbigf ; real_T
oiiczvxnwd ; real_T elmemotlyj ; real_T aygunlp5wc ; real_T alor4ldath ;
real_T oq4z42nzfk ; real_T khovu2isuv ; real_T nbgdt2urin ; real_T kqfegbroua
; real_T oyqicjzy3n ; real_T nhbryhih1x ; real_T c3g4go3otk ; real_T
gy442ywxri ; real_T k3bdnbyzte ; real_T jb3t3g411z ; real_T gchrmlur10 ;
real_T dq1en3z4l2 ; real_T dktrbnmdoz ; real_T hm5u5ujngf ; real_T hlp2h1vhsf
; real_T getcenzajr ; real_T bfghk0x0db ; real_T np0dwgsli2 ; real_T
pnb4vkigld ; real_T d3to2bz4wr ; real_T okpgzbywcn ; real_T hbwsacor52 ;
real_T mxjmc4sxi4 ; real_T fdjcy5orof ; real_T dx5gvmudvz ; real_T lihcrxxocr
; real_T ill1lzg3rh ; real_T fhu22ugznh ; real_T ji4l1d51b0 ; real_T
b4soy5pwld ; real_T baqyrcxkcm ; real_T n1k3nry5ef ; real_T jod0ru5u3a ;
real_T hw1oopzgti ; real_T if2r0iropx ; real_T nnlhgxiv2v ; real_T bmnbcf4iee
; real_T licx0kgiyc ; real_T bzwq5aajdf ; real_T pxnyhtorj3 ; real_T
fmjbwjxbhy ; real_T f10wnwflxf ; real_T cnq2efv0vf ; real_T jsxdtyo20o ;
real_T flhneogoua ; real_T ls2xpgsa5b ; real_T psxhjkwu41 ; real_T oned3kkjph
; real_T mfhx3ytict ; real_T cacibs3aez ; real_T mnkig414jj ; real_T
bsfhs5nc30 ; real_T o1smectb2n ; real_T jf4xvrtmlq ; real_T nchveh3na4 ;
real_T gbugafimzz ; real_T kgb3rkrsti ; real_T kvts3r3dzg ; real_T cnn1hhxtkm
; real_T hjg32tlesr ; real_T ou0eminkfl ; real_T nbivwf4x44 ; real_T
dlslakqqht ; real_T dge4c3a3yl ; real_T dzgw0ztz2h ; real_T kc2trgmmqt ;
real_T m2bmyzfjet ; real_T n1u2lskgyf ; real_T gxrncf3arj ; real_T htrhogmsqu
; real_T dmccghhfdx ; real_T msbrlcsxqz ; real_T afv4wr5nq1 ; real_T
bueon3l2m0 ; real_T ieb4wxvfjn ; real_T enilkmmy3i ; real_T gouhyk4ecq ; }
ZCV ; typedef struct { ZCSigState ncw0skigpa ; ZCSigState mh1us11q41 ;
ZCSigState nd5mhp2ns2 ; ZCSigState gsr3spxvy4 ; ZCSigState ozd21vuisb ;
ZCSigState cbnv0dvuas ; ZCSigState pdqeseajyb ; ZCSigState hsgfbpjl5p ;
ZCSigState jjw1zas2q0 ; ZCSigState l0mk21b4q5 ; ZCSigState arwbnyfeob ;
ZCSigState pgksk3tpof ; ZCSigState dwns4dhkbt ; ZCSigState k1dsnm0ire ;
ZCSigState eztrand5sz ; ZCSigState fh2gzvkea2 ; ZCSigState iqoncempo0 ;
ZCSigState b4hg1b35st ; ZCSigState piaayk2paw ; ZCSigState azbto5i51i ;
ZCSigState iec5jm4p4h ; ZCSigState eomfrjtqfn ; ZCSigState gft0prbamo ;
ZCSigState lh3cgfa5hw ; ZCSigState n24rq5q22e ; ZCSigState mmznyr4nqj ;
ZCSigState m2440pedu4 ; ZCSigState asy1d3ovcu ; ZCSigState bcmtx5i1zn ;
ZCSigState eu13q5cqkz ; ZCSigState coyqtgiuii ; ZCSigState exfhjayhp3 ;
ZCSigState lajnqiclty ; ZCSigState l3bt5f1wi2 ; ZCSigState eplpu0ma5z ;
ZCSigState jcbyzpuq4s ; ZCSigState iryxrctrwk ; ZCSigState by11kkhlg2 ;
ZCSigState cc1lflowlv ; ZCSigState ad0qyuzoby ; ZCSigState msoul3kuv2 ;
ZCSigState pxskhdnodc ; ZCSigState c4nuqx5r3j ; ZCSigState loiqo33vxg ;
ZCSigState dmlwhnskkq ; ZCSigState bjqlhaudzu ; ZCSigState exvrnwdlf2 ;
ZCSigState onyij5dab1 ; ZCSigState ltjrihp5nt ; ZCSigState ou1p5qj3gi ;
ZCSigState bdve24mlu2 ; ZCSigState calxs5qbqc ; ZCSigState mwtyvlx0fo ;
ZCSigState k1cpgtavgy ; ZCSigState l1trjww0iz ; ZCSigState lkupphkea3 ;
ZCSigState o2ybono1l3 ; ZCSigState dj0lodxf2n ; ZCSigState if3fj2bnjz ;
ZCSigState pnt2v3c1fs ; ZCSigState cxqdauontu ; ZCSigState daftsy2scb ;
ZCSigState e1rk2sq2ta ; ZCSigState jovz2y1sl1 ; ZCSigState ksitqmjuvv ;
ZCSigState ete3xmowt5 ; ZCSigState ktmf0f2n5v ; ZCSigState jfo435uo20 ;
ZCSigState pkm05oobp3 ; ZCSigState c1h3z0qcsj ; ZCSigState onezmf4rlw ;
ZCSigState hvzv5zaifu ; ZCSigState kkwir05lhs ; ZCSigState ahd2xcideu ;
ZCSigState mlnjjse4hb ; ZCSigState bm24ubnq2a ; ZCSigState bbrhmjac4n ;
ZCSigState iijequczg1 ; ZCSigState hd225h1pyq ; ZCSigState hp0crqbz2j ;
ZCSigState h1tnb3tyef ; ZCSigState ougclzgoox ; ZCSigState mncgqhrest ;
ZCSigState axhhl0c3m3 ; ZCSigState ontgz20qpd ; ZCSigState gt3wjvtlan ;
ZCSigState cg43dcqtdy ; ZCSigState hpt5skm3d3 ; ZCSigState hpmzofyvpi ;
ZCSigState bzdnaxxz4o ; ZCSigState mfezycequb ; } PrevZCX ; typedef struct {
int_T ir [ 50 ] ; int_T jc [ 134 ] ; real_T pr [ 50 ] ; } MassMatrix ;
typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ {
real_T NG_density ; real_T cost ; real_T Gasvalvelag_A ; real_T Gasvalvelag_C
; real_T Valveopenmassflowrate_Gain ; real_T Dailytemperaturevariation_Amp ;
real_T Dailytemperaturevariation_Bias ; real_T Dailytemperaturevariation_Freq
; real_T Dailytemperaturevariation_Phase ; real_T Gain_Gain ; real_T
Integrator_IC ; real_T Relay_OnVal ; real_T Relay_OffVal ; real_T Relay_YOn ;
real_T Relay_YOff ; real_T speed_Value ; real_T RTP_408D6EE7_T_Value ; real_T
RTP_4622C0C9_T_Value ; real_T RTP_723C7CD8_T_Value ; real_T
RTP_A82CA1E5_T_Value ; real_T RTP_AE677BF7_T_Value ; real_T
RTP_D352D324_T_Value ; real_T RTP_D61DC5A1_T_Value ; real_T
RTP_DE0D8F78_T_Value ; real_T RTP_4C5899FF_T_Value ; real_T
RTP_A39492E4_T_Value ; real_T RTP_A8C8D5D9_T_Value ; real_T
RTP_D23C0C5C_T_Value ; real_T RTP_0A6A6F38_T_Value ; real_T
RTP_7A009BB7_T_Value ; real_T RTP_E622B04D_T_Value ; real_T
RTP_E7E0DA7A_T_Value ; real_T RTP_DB4299FD_T_Value ; real_T
RTP_A29E2159_T_Value ; real_T RTP_DE69E3BD_T_Value ; real_T
RTP_41CF1C29_T_Value ; real_T T_expecteddegC_Value ; } ; extern const char_T
* RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern PrevZCX rtPrevZCX ; extern MassMatrix rtMassMatrix ; extern P rtP ;
extern mxArray * mr_HouseHeatingSystem_GetDWork ( ) ; extern void
mr_HouseHeatingSystem_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_HouseHeatingSystem_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * HouseHeatingSystem_GetCAPIStaticMap ( void )
; extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs (
int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void
MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
