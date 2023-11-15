#include "ne_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_sys_struct.h"
#include "HouseHeatingSystem_76122067_1_ds_m.h"
#include "HouseHeatingSystem_76122067_1_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_externals.h"
#include "HouseHeatingSystem_76122067_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T HouseHeatingSystem_76122067_1_ds_m ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t289 , NeDsMethodOutput * t290 ) { ETTSf3049b48
ab_efOut ; ETTSf3049b48 b_efOut ; ETTSf3049b48 bb_efOut ; ETTSf3049b48
e_efOut ; ETTSf3049b48 efOut ; ETTSf3049b48 f_efOut ; ETTSf3049b48 hb_efOut ;
ETTSf3049b48 ib_efOut ; ETTSf3049b48 l_efOut ; ETTSf3049b48 m_efOut ;
ETTSf3049b48 ob_efOut ; ETTSf3049b48 pb_efOut ; ETTSf3049b48 s_efOut ;
ETTSf3049b48 t12 ; ETTSf3049b48 t13 ; ETTSf3049b48 t5 ; ETTSf3049b48 t8 ;
ETTSf3049b48 t9 ; ETTSf3049b48 t_efOut ; PmRealVector out ; real_T X [ 131 ]
; real_T c_efOut [ 1 ] ; real_T cb_efOut [ 1 ] ; real_T d_efOut [ 1 ] ;
real_T db_efOut [ 1 ] ; real_T eb_efOut [ 1 ] ; real_T fb_efOut [ 1 ] ;
real_T g_efOut [ 1 ] ; real_T gb_efOut [ 1 ] ; real_T h_efOut [ 1 ] ; real_T
i_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T jb_efOut [ 1 ] ; real_T k_efOut
[ 1 ] ; real_T kb_efOut [ 1 ] ; real_T lb_efOut [ 1 ] ; real_T mb_efOut [ 1 ]
; real_T n_efOut [ 1 ] ; real_T nb_efOut [ 1 ] ; real_T o_efOut [ 1 ] ;
real_T p_efOut [ 1 ] ; real_T q_efOut [ 1 ] ; real_T qb_efOut [ 1 ] ; real_T
r_efOut [ 1 ] ; real_T rb_efOut [ 1 ] ; real_T sb_efOut [ 1 ] ; real_T t193 [
1 ] ; real_T tb_efOut [ 1 ] ; real_T u_efOut [ 1 ] ; real_T ub_efOut [ 1 ] ;
real_T v_efOut [ 1 ] ; real_T vb_efOut [ 1 ] ; real_T w_efOut [ 1 ] ; real_T
wb_efOut [ 1 ] ; real_T x_efOut [ 1 ] ; real_T y_efOut [ 1 ] ; real_T
House_thermal_network_Radiator2_Pipe_TL_segment_dUdp ; real_T
House_thermal_network_Radiator3_Pipe_TL_segment_dUdT ; real_T
House_thermal_network_Radiator3_Pipe_TL_segment_rho_I ; real_T
House_thermal_network_Radiator4_Pipe_TL_segment_alpha_I ; real_T
House_thermal_network_Radiator4_Pipe_TL_segment_dUdT ; real_T
House_thermal_network_Radiator4_Pipe_TL_segment_rho_I ; real_T
intrm_sf_mf_293 ; real_T t187_idx_0 ; real_T t224 ; real_T t225 ; real_T t227
; real_T t228 ; real_T t229 ; real_T t230 ; real_T t231 ; real_T t232 ;
real_T t233 ; real_T t235 ; real_T t236 ; real_T t237 ; real_T t238 ; real_T
t239 ; real_T t241 ; real_T t242 ; real_T t243 ; real_T t244 ; real_T t247 ;
real_T t248 ; real_T t249 ; real_T t250 ; real_T t251 ; real_T t252 ; real_T
t254 ; real_T t256 ; real_T t260 ; real_T t261 ; real_T t263 ; real_T t264 ;
real_T t274 ; real_T t284 ; real_T t288 ; size_t t17 [ 1 ] ; size_t t18 [ 1 ]
; size_t t20 [ 1 ] ; int32_T M_idx_0 ; int32_T M_idx_1 ; int32_T b ; M_idx_0
= t289 -> mM . mX [ 0 ] ; M_idx_1 = t289 -> mM . mX [ 1 ] ; for ( b = 0 ; b <
131 ; b ++ ) { X [ b ] = t289 -> mX . mX [ b ] ; } out = t290 -> mM ; t193 [
0UL ] = X [ 0UL ] ; t17 [ 0 ] = 11UL ; t18 [ 0 ] = 1UL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0UL ] , & efOut . mField1
[ 0UL ] , & efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 , & t193 [ 0UL ] , & t17 [ 0UL ] , & t18 [ 0UL ] ) ; t12 = efOut ;
t193 [ 0UL ] = X [ 1UL ] ; t20 [ 0 ] = 12UL ; tlu2_linear_linear_prelookup (
& b_efOut . mField0 [ 0UL ] , & b_efOut . mField1 [ 0UL ] , & b_efOut .
mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t193 [ 0UL
] , & t20 [ 0UL ] , & t18 [ 0UL ] ) ; t13 = b_efOut ;
tlu2_2d_linear_linear_value ( & c_efOut [ 0UL ] , & t12 . mField0 [ 0UL ] , &
t12 . mField2 [ 0UL ] , & t13 . mField0 [ 0UL ] , & t13 . mField2 [ 0UL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t17 [ 0UL ] , & t20 [ 0UL ] ,
& t18 [ 0UL ] ) ; t187_idx_0 = c_efOut [ 0 ] ; intrm_sf_mf_293 = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & d_efOut [ 0UL ] , & t12 . mField0 [ 0UL ] , &
t12 . mField2 [ 0UL ] , & t13 . mField0 [ 0UL ] , & t13 . mField2 [ 0UL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t17 [ 0UL ] , & t20 [ 0UL ] ,
& t18 [ 0UL ] ) ; t187_idx_0 = d_efOut [ 0 ] ; t227 = t187_idx_0 ; t193 [ 0UL
] = X [ 2UL ] ; tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0UL ] ,
& e_efOut . mField1 [ 0UL ] , & e_efOut . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t193 [ 0UL ] , & t17 [ 0UL ] , &
t18 [ 0UL ] ) ; t9 = e_efOut ; t193 [ 0UL ] = X [ 3UL ] ;
tlu2_linear_linear_prelookup ( & f_efOut . mField0 [ 0UL ] , & f_efOut .
mField1 [ 0UL ] , & f_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField1 , & t193 [ 0UL ] , & t20 [ 0UL ] , & t18 [ 0UL ] ) ; t8 =
f_efOut ; tlu2_2d_linear_linear_value ( & g_efOut [ 0UL ] , & t9 . mField0 [
0UL ] , & t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [
0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t17 [ 0UL ] , & t20
[ 0UL ] , & t18 [ 0UL ] ) ; t187_idx_0 = g_efOut [ 0 ] ; t228 = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & h_efOut [ 0UL ] , & t9 . mField0 [ 0UL ] , &
t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = h_efOut [ 0 ] ; t229 = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & i_efOut [ 0UL ] , & t9 . mField0 [ 0UL ] , &
t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = i_efOut [ 0 ] ; t230 = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & j_efOut [ 0UL ] , & t9 . mField0 [ 0UL ] , &
t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = j_efOut [ 0 ] ; t231 = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & k_efOut [ 0UL ] , & t9 . mField0 [ 0UL ] , &
t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = k_efOut [ 0 ] ; t233 = X [ 3UL ] / ( t231 == 0.0
? 1.0E-16 : t231 ) * 100.0 + t187_idx_0 ; t232 = ( t230 - t228 * t233 *
1000.0 ) * X [ 68UL ] * t231 * 0.001 ; t230 = ( t233 * t231 / ( t229 == 0.0 ?
1.0E-16 : t229 ) * 0.01 - X [ 2UL ] * t228 ) * X [ 68UL ] * 0.001 ; t251 =
0.02 - X [ 68UL ] * 0.001 ; t252 = t251 > 1.0E-9 ? t251 : 1.0E-9 ; t251 =
pmf_pow ( 0.02 / ( t252 == 0.0 ? 1.0E-16 : t252 ) , 1.4 ) * 1.01325 ; t224 =
X [ 48UL ] < 0.0 ? X [ 48UL ] : 0.0 ; t225 = X [ 48UL ] > 0.0 ? X [ 48UL ] :
0.0 ; t251 = t251 * 1.4 / ( t252 == 0.0 ? 1.0E-16 : t252 ) ; t193 [ 0UL ] = X
[ 5UL ] ; tlu2_linear_linear_prelookup ( & l_efOut . mField0 [ 0UL ] , &
l_efOut . mField1 [ 0UL ] , & l_efOut . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t193 [ 0UL ] , & t17 [ 0UL ] , &
t18 [ 0UL ] ) ; t9 = l_efOut ; t193 [ 0UL ] = X [ 4UL ] ;
tlu2_linear_linear_prelookup ( & m_efOut . mField0 [ 0UL ] , & m_efOut .
mField1 [ 0UL ] , & m_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField1 , & t193 [ 0UL ] , & t20 [ 0UL ] , & t18 [ 0UL ] ) ; t8 =
m_efOut ; tlu2_2d_linear_linear_value ( & n_efOut [ 0UL ] , & t9 . mField0 [
0UL ] , & t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [
0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t17 [ 0UL ] , & t20
[ 0UL ] , & t18 [ 0UL ] ) ; t187_idx_0 = n_efOut [ 0 ] ; t252 = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & o_efOut [ 0UL ] , & t9 . mField0 [ 0UL ] , &
t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = o_efOut [ 0 ] ; t235 = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & p_efOut [ 0UL ] , & t9 . mField0 [ 0UL ] , &
t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = p_efOut [ 0 ] ; t236 = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & q_efOut [ 0UL ] , & t9 . mField0 [ 0UL ] , &
t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = q_efOut [ 0 ] ; t237 = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & r_efOut [ 0UL ] , & t9 . mField0 [ 0UL ] , &
t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = r_efOut [ 0 ] ; t239 = X [ 4UL ] / ( t237 == 0.0
? 1.0E-16 : t237 ) * 100.0 + t187_idx_0 ; t238 = ( t236 - t252 * t239 *
1000.0 ) * t237 * 0.3 ; t236 = ( t239 * t237 / ( t235 == 0.0 ? 1.0E-16 : t235
) * 0.01 - X [ 5UL ] * t252 ) * 0.3 ; t193 [ 0UL ] = X [ 9UL ] ;
tlu2_linear_linear_prelookup ( & s_efOut . mField0 [ 0UL ] , & s_efOut .
mField1 [ 0UL ] , & s_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField0 , & t193 [ 0UL ] , & t17 [ 0UL ] , & t18 [ 0UL ] ) ; t5 =
s_efOut ; t193 [ 0UL ] = X [ 8UL ] ; tlu2_linear_linear_prelookup ( & t_efOut
. mField0 [ 0UL ] , & t_efOut . mField1 [ 0UL ] , & t_efOut . mField2 [ 0UL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t193 [ 0UL ] , & t20 [ 0UL
] , & t18 [ 0UL ] ) ; t8 = t_efOut ; tlu2_2d_linear_linear_value ( & u_efOut
[ 0UL ] , & t5 . mField0 [ 0UL ] , & t5 . mField2 [ 0UL ] , & t8 . mField0 [
0UL ] , & t8 . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7
, & t17 [ 0UL ] , & t20 [ 0UL ] , & t18 [ 0UL ] ) ; t187_idx_0 = u_efOut [ 0
] ; t239 = t187_idx_0 ; tlu2_2d_linear_linear_value ( & v_efOut [ 0UL ] , &
t5 . mField0 [ 0UL ] , & t5 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8
. mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , & t17 [
0UL ] , & t20 [ 0UL ] , & t18 [ 0UL ] ) ; t187_idx_0 = v_efOut [ 0 ] ; t254 =
t187_idx_0 ; tlu2_2d_linear_linear_value ( & w_efOut [ 0UL ] , & t5 . mField0
[ 0UL ] , & t5 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [
0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t17 [ 0UL ] , & t20
[ 0UL ] , & t18 [ 0UL ] ) ; t187_idx_0 = w_efOut [ 0 ] ; t241 = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & x_efOut [ 0UL ] , & t5 . mField0 [ 0UL ] , &
t5 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = x_efOut [ 0 ] ; t242 = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & y_efOut [ 0UL ] , & t5 . mField0 [ 0UL ] , &
t5 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = y_efOut [ 0 ] ; t244 = X [ 8UL ] / ( t242 == 0.0
? 1.0E-16 : t242 ) * 100.0 + t187_idx_0 ; t243 = ( t241 - t239 * t244 *
1000.0 ) * t242 * 0.04 ; t241 = ( t244 * t242 / ( t254 == 0.0 ? 1.0E-16 :
t254 ) * 0.01 - X [ 9UL ] * t239 ) * 0.04 ; t193 [ 0UL ] = X [ 13UL ] ;
tlu2_linear_linear_prelookup ( & ab_efOut . mField0 [ 0UL ] , & ab_efOut .
mField1 [ 0UL ] , & ab_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField0 , & t193 [ 0UL ] , & t17 [ 0UL ] , & t18 [ 0UL ] ) ; t5 =
ab_efOut ; t193 [ 0UL ] = X [ 12UL ] ; tlu2_linear_linear_prelookup ( &
bb_efOut . mField0 [ 0UL ] , & bb_efOut . mField1 [ 0UL ] , & bb_efOut .
mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t193 [ 0UL
] , & t20 [ 0UL ] , & t18 [ 0UL ] ) ; t8 = bb_efOut ;
tlu2_2d_linear_linear_value ( & cb_efOut [ 0UL ] , & t5 . mField0 [ 0UL ] , &
t5 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = cb_efOut [ 0 ] ; t244 = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & db_efOut [ 0UL ] , & t5 . mField0 [ 0UL ] , &
t5 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = db_efOut [ 0 ] ; t256 = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & eb_efOut [ 0UL ] , & t5 . mField0 [ 0UL ] , &
t5 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = eb_efOut [ 0 ] ;
House_thermal_network_Radiator2_Pipe_TL_segment_dUdp = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & fb_efOut [ 0UL ] , & t5 . mField0 [ 0UL ] , &
t5 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = fb_efOut [ 0 ] ; t247 = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & gb_efOut [ 0UL ] , & t5 . mField0 [ 0UL ] , &
t5 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = gb_efOut [ 0 ] ; t249 = X [ 12UL ] / ( t247 ==
0.0 ? 1.0E-16 : t247 ) * 100.0 + t187_idx_0 ; t248 = (
House_thermal_network_Radiator2_Pipe_TL_segment_dUdp - t244 * t249 * 1000.0 )
* t247 * 0.04 ; House_thermal_network_Radiator2_Pipe_TL_segment_dUdp = ( t249
* t247 / ( t256 == 0.0 ? 1.0E-16 : t256 ) * 0.01 - X [ 13UL ] * t244 ) * 0.04
; t193 [ 0UL ] = X [ 17UL ] ; tlu2_linear_linear_prelookup ( & hb_efOut .
mField0 [ 0UL ] , & hb_efOut . mField1 [ 0UL ] , & hb_efOut . mField2 [ 0UL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t193 [ 0UL ] , & t17 [ 0UL
] , & t18 [ 0UL ] ) ; t9 = hb_efOut ; t193 [ 0UL ] = X [ 16UL ] ;
tlu2_linear_linear_prelookup ( & ib_efOut . mField0 [ 0UL ] , & ib_efOut .
mField1 [ 0UL ] , & ib_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t193 [ 0UL ] , & t20 [ 0UL ] , & t18 [ 0UL ] ) ; t8 =
ib_efOut ; tlu2_2d_linear_linear_value ( & jb_efOut [ 0UL ] , & t9 . mField0
[ 0UL ] , & t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [
0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t17 [ 0UL ] , & t20
[ 0UL ] , & t18 [ 0UL ] ) ; t187_idx_0 = jb_efOut [ 0 ] ; t249 = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & kb_efOut [ 0UL ] , & t9 . mField0 [ 0UL ] , &
t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = kb_efOut [ 0 ] ; t250 = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & lb_efOut [ 0UL ] , & t9 . mField0 [ 0UL ] , &
t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = lb_efOut [ 0 ] ; t288 = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & mb_efOut [ 0UL ] , & t9 . mField0 [ 0UL ] , &
t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = mb_efOut [ 0 ] ;
House_thermal_network_Radiator3_Pipe_TL_segment_rho_I = t187_idx_0 ;
tlu2_2d_linear_linear_value ( & nb_efOut [ 0UL ] , & t9 . mField0 [ 0UL ] , &
t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t187_idx_0 = nb_efOut [ 0 ] ;
House_thermal_network_Radiator4_Pipe_TL_segment_alpha_I = X [ 16UL ] / (
House_thermal_network_Radiator3_Pipe_TL_segment_rho_I == 0.0 ? 1.0E-16 :
House_thermal_network_Radiator3_Pipe_TL_segment_rho_I ) * 100.0 + t187_idx_0
; House_thermal_network_Radiator3_Pipe_TL_segment_dUdT = ( t288 - t249 *
House_thermal_network_Radiator4_Pipe_TL_segment_alpha_I * 1000.0 ) *
House_thermal_network_Radiator3_Pipe_TL_segment_rho_I * 0.04 ; t288 = (
House_thermal_network_Radiator4_Pipe_TL_segment_alpha_I *
House_thermal_network_Radiator3_Pipe_TL_segment_rho_I / ( t250 == 0.0 ?
1.0E-16 : t250 ) * 0.01 - X [ 17UL ] * t249 ) * 0.04 ; t193 [ 0UL ] = X [
21UL ] ; tlu2_linear_linear_prelookup ( & ob_efOut . mField0 [ 0UL ] , &
ob_efOut . mField1 [ 0UL ] , & ob_efOut . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t193 [ 0UL ] , & t17 [ 0UL ] , &
t18 [ 0UL ] ) ; t9 = ob_efOut ; t193 [ 0UL ] = X [ 20UL ] ;
tlu2_linear_linear_prelookup ( & pb_efOut . mField0 [ 0UL ] , & pb_efOut .
mField1 [ 0UL ] , & pb_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t193 [ 0UL ] , & t20 [ 0UL ] , & t18 [ 0UL ] ) ; t8 =
pb_efOut ; tlu2_2d_linear_linear_value ( & qb_efOut [ 0UL ] , & t9 . mField0
[ 0UL ] , & t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [
0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t17 [ 0UL ] , & t20
[ 0UL ] , & t18 [ 0UL ] ) ; t193 [ 0 ] = qb_efOut [ 0 ] ;
House_thermal_network_Radiator4_Pipe_TL_segment_alpha_I = t193 [ 0UL ] ;
tlu2_2d_linear_linear_value ( & rb_efOut [ 0UL ] , & t9 . mField0 [ 0UL ] , &
t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t193 [ 0 ] = rb_efOut [ 0 ] ; t260 = t193 [ 0UL ] ;
tlu2_2d_linear_linear_value ( & sb_efOut [ 0UL ] , & t9 . mField0 [ 0UL ] , &
t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t193 [ 0 ] = sb_efOut [ 0 ] ; t261 = t193 [ 0UL ] ;
tlu2_2d_linear_linear_value ( & tb_efOut [ 0UL ] , & t9 . mField0 [ 0UL ] , &
t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField4 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t193 [ 0 ] = tb_efOut [ 0 ] ;
House_thermal_network_Radiator4_Pipe_TL_segment_rho_I = t193 [ 0UL ] ;
tlu2_2d_linear_linear_value ( & ub_efOut [ 0UL ] , & t9 . mField0 [ 0UL ] , &
t9 . mField2 [ 0UL ] , & t8 . mField0 [ 0UL ] , & t8 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t17 [ 0UL ] , & t20 [ 0UL ] , &
t18 [ 0UL ] ) ; t193 [ 0 ] = ub_efOut [ 0 ] ;
House_thermal_network_Radiator4_Pipe_TL_segment_dUdT = t193 [ 0UL ] ; t284 =
X [ 20UL ] / ( House_thermal_network_Radiator4_Pipe_TL_segment_rho_I == 0.0 ?
1.0E-16 : House_thermal_network_Radiator4_Pipe_TL_segment_rho_I ) * 100.0 +
House_thermal_network_Radiator4_Pipe_TL_segment_dUdT ;
House_thermal_network_Radiator4_Pipe_TL_segment_dUdT = ( t261 -
House_thermal_network_Radiator4_Pipe_TL_segment_alpha_I * t284 * 1000.0 ) *
House_thermal_network_Radiator4_Pipe_TL_segment_rho_I * 0.04 ; t261 = ( t284
* House_thermal_network_Radiator4_Pipe_TL_segment_rho_I / ( t260 == 0.0 ?
1.0E-16 : t260 ) * 0.01 - X [ 21UL ] *
House_thermal_network_Radiator4_Pipe_TL_segment_alpha_I ) * 0.04 ;
tlu2_2d_linear_linear_value ( & vb_efOut [ 0UL ] , & t12 . mField0 [ 0UL ] ,
& t12 . mField2 [ 0UL ] , & t13 . mField0 [ 0UL ] , & t13 . mField2 [ 0UL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , & t17 [ 0UL ] , & t20 [ 0UL ]
, & t18 [ 0UL ] ) ; t193 [ 0 ] = vb_efOut [ 0 ] ; t284 = t193 [ 0UL ] ;
tlu2_2d_linear_linear_value ( & wb_efOut [ 0UL ] , & t12 . mField0 [ 0UL ] ,
& t12 . mField2 [ 0UL ] , & t13 . mField0 [ 0UL ] , & t13 . mField2 [ 0UL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , & t17 [ 0UL ] , & t20 [ 0UL ]
, & t18 [ 0UL ] ) ; t193 [ 0 ] = wb_efOut [ 0 ] ; t274 = t193 [ 0UL ] ; t263
= X [ 1UL ] / ( t227 == 0.0 ? 1.0E-16 : t227 ) * 100.0 + X [ 54UL ] ; t264 =
( intrm_sf_mf_293 - t274 * t263 * 1000.0 ) * t227 * 0.01 ; intrm_sf_mf_293 =
( t227 * t263 / ( t284 == 0.0 ? 1.0E-16 : t284 ) * 0.01 - X [ 0UL ] * t274 )
* 0.01 ; if ( M_idx_0 != 0 ) { t187_idx_0 = ( t251 * 100000.0 + t225 *
1.0E+10 / ( t231 == 0.0 ? 1.0E-16 : t231 ) ) + 1.0E+10 ; t263 = 1.0 / (
t187_idx_0 == 0.0 ? 1.0E-16 : t187_idx_0 ) * 1.0E+11 ; } else if ( M_idx_1 !=
0 ) { t187_idx_0 = ( t251 * 100000.0 + 1.0E+10 ) - t224 * 1.0E+10 / ( t231 ==
0.0 ? 1.0E-16 : t231 ) ; t263 = 1.0 / ( t187_idx_0 == 0.0 ? 1.0E-16 :
t187_idx_0 ) * 1.0E+11 ; } else { t263 = 1.0 / ( t251 == 0.0 ? 1.0E-16 : t251
) * 1.0E+6 ; } if ( M_idx_0 != 0 ) { t187_idx_0 = ( t251 * 100000.0 + t225 *
1.0E+10 / ( t231 == 0.0 ? 1.0E-16 : t231 ) ) + 1.0E+10 ; t187_idx_0 = 1.0 / (
t187_idx_0 == 0.0 ? 1.0E-16 : t187_idx_0 ) * 1.0E+11 ; } else if ( M_idx_1 !=
0 ) { t187_idx_0 = ( t251 * 100000.0 + 1.0E+10 ) - t224 * 1.0E+10 / ( t231 ==
0.0 ? 1.0E-16 : t231 ) ; t187_idx_0 = 1.0 / ( t187_idx_0 == 0.0 ? 1.0E-16 :
t187_idx_0 ) * 1.0E+11 ; } else { t187_idx_0 = 1.0 / ( t251 == 0.0 ? 1.0E-16
: t251 ) * 1.0E+6 ; } t251 = - t274 * t227 * 0.01 ; t225 = 1.0 / ( t284 ==
0.0 ? 1.0E-16 : t284 ) * t227 * 0.01 ; intrm_sf_mf_293 = intrm_sf_mf_293 *
100.0 / 41.4301666903956 ; t227 = - t228 * X [ 68UL ] * t231 * 0.001 /
7.0561036966346204 ; t228 = t232 * 0.001 / 592.73559890933916 ; t229 = ( 1.0
/ ( t229 == 0.0 ? 1.0E-16 : t229 ) * X [ 68UL ] * t231 * 0.001 + t263 * t231
* 1.0E-6 ) / 7.0561036966346204 ; t230 = ( t230 * 100.0 + t187_idx_0 * t233 *
t231 * 1.0E-6 ) / 592.73559890933916 ; t231 = 1.0 / ( t235 == 0.0 ? 1.0E-16 :
t235 ) * t237 * 0.3 ; t233 = - t252 * t237 * 0.3 ; out . mX [ 0 ] = t251 ;
out . mX [ 1 ] = t264 * 0.001 / 41.4301666903956 ; out . mX [ 2 ] = t225 ;
out . mX [ 3 ] = intrm_sf_mf_293 ; out . mX [ 4 ] = t227 ; out . mX [ 5 ] =
t228 ; out . mX [ 6 ] = t229 ; out . mX [ 7 ] = t230 ; out . mX [ 8 ] = t231
; out . mX [ 9 ] = t236 * 100.0 / 1247.7433452330715 ; out . mX [ 10 ] = t233
; out . mX [ 11 ] = t238 * 0.001 / 1247.7433452330715 ; out . mX [ 12 ] = -
1.0 ; out . mX [ 13 ] = - 1.0 ; out . mX [ 14 ] = 1.0 / ( t254 == 0.0 ?
1.0E-16 : t254 ) * t242 * 0.04 ; out . mX [ 15 ] = t241 * 100.0 /
166.36577936440958 ; out . mX [ 16 ] = - t239 * t242 * 0.04 ; out . mX [ 17 ]
= t243 * 0.001 / 166.36577936440958 ; out . mX [ 18 ] = - 1.0 ; out . mX [ 19
] = - 1.0 ; out . mX [ 20 ] = 1.0 / ( t256 == 0.0 ? 1.0E-16 : t256 ) * t247 *
0.04 ; out . mX [ 21 ] = House_thermal_network_Radiator2_Pipe_TL_segment_dUdp
* 100.0 / 166.36577936440958 ; out . mX [ 22 ] = - t244 * t247 * 0.04 ; out .
mX [ 23 ] = t248 * 0.001 / 166.36577936440958 ; out . mX [ 24 ] = - 1.0 ; out
. mX [ 25 ] = - 1.0 ; out . mX [ 26 ] = 1.0 / ( t250 == 0.0 ? 1.0E-16 : t250
) * House_thermal_network_Radiator3_Pipe_TL_segment_rho_I * 0.04 ; out . mX [
27 ] = t288 * 100.0 / 166.36577936440958 ; out . mX [ 28 ] = - t249 *
House_thermal_network_Radiator3_Pipe_TL_segment_rho_I * 0.04 ; out . mX [ 29
] = House_thermal_network_Radiator3_Pipe_TL_segment_dUdT * 0.001 /
166.36577936440958 ; out . mX [ 30 ] = - 1.0 ; out . mX [ 31 ] = - 1.0 ; out
. mX [ 32 ] = 1.0 / ( t260 == 0.0 ? 1.0E-16 : t260 ) *
House_thermal_network_Radiator4_Pipe_TL_segment_rho_I * 0.04 ; out . mX [ 33
] = t261 * 100.0 / 166.36577936440958 ; out . mX [ 34 ] = -
House_thermal_network_Radiator4_Pipe_TL_segment_alpha_I *
House_thermal_network_Radiator4_Pipe_TL_segment_rho_I * 0.04 ; out . mX [ 35
] = House_thermal_network_Radiator4_Pipe_TL_segment_dUdT * 0.001 /
166.36577936440958 ; out . mX [ 36 ] = - 1.0 ; out . mX [ 37 ] = - 1.0 ; out
. mX [ 38 ] = - 1.0 ; out . mX [ 39 ] = - 1.0 ; out . mX [ 40 ] = - 1.0 ; out
. mX [ 41 ] = - 1.0 ; out . mX [ 42 ] = - 1.0 ; out . mX [ 43 ] = - 1.0 ; out
. mX [ 44 ] = - 1.0 ; out . mX [ 45 ] = - 1.0 ; out . mX [ 46 ] = - 1.0 ; out
. mX [ 47 ] = - 1.0 ; ( void ) LC ; ( void ) t290 ; return 0 ; }
