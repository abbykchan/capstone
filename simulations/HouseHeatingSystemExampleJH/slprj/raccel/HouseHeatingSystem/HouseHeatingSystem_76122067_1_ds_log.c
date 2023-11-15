#include "ne_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_sys_struct.h"
#include "HouseHeatingSystem_76122067_1_ds_log.h"
#include "HouseHeatingSystem_76122067_1_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_externals.h"
#include "HouseHeatingSystem_76122067_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T HouseHeatingSystem_76122067_1_ds_log ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t431 , NeDsMethodOutput * t432 ) { ETTSf3049b48
ab_efOut ; ETTSf3049b48 ac_efOut ; ETTSf3049b48 b_efOut ; ETTSf3049b48
cb_efOut ; ETTSf3049b48 d_efOut ; ETTSf3049b48 db_efOut ; ETTSf3049b48
dc_efOut ; ETTSf3049b48 e_efOut ; ETTSf3049b48 ec_efOut ; ETTSf3049b48 efOut
; ETTSf3049b48 g_efOut ; ETTSf3049b48 gb_efOut ; ETTSf3049b48 gc_efOut ;
ETTSf3049b48 h_efOut ; ETTSf3049b48 hb_efOut ; ETTSf3049b48 ic_efOut ;
ETTSf3049b48 j_efOut ; ETTSf3049b48 jb_efOut ; ETTSf3049b48 k_efOut ;
ETTSf3049b48 kc_efOut ; ETTSf3049b48 lb_efOut ; ETTSf3049b48 lc_efOut ;
ETTSf3049b48 m_efOut ; ETTSf3049b48 n_efOut ; ETTSf3049b48 nb_efOut ;
ETTSf3049b48 ob_efOut ; ETTSf3049b48 oc_efOut ; ETTSf3049b48 p_efOut ;
ETTSf3049b48 pc_efOut ; ETTSf3049b48 q_efOut ; ETTSf3049b48 rb_efOut ;
ETTSf3049b48 rc_efOut ; ETTSf3049b48 sb_efOut ; ETTSf3049b48 t15 ;
ETTSf3049b48 t2 ; ETTSf3049b48 t35 ; ETTSf3049b48 t36 ; ETTSf3049b48 t40 ;
ETTSf3049b48 t41 ; ETTSf3049b48 t42 ; ETTSf3049b48 t_efOut ; ETTSf3049b48
tc_efOut ; ETTSf3049b48 u_efOut ; ETTSf3049b48 ub_efOut ; ETTSf3049b48
vc_efOut ; ETTSf3049b48 w_efOut ; ETTSf3049b48 wb_efOut ; ETTSf3049b48
wc_efOut ; ETTSf3049b48 y_efOut ; ETTSf3049b48 yb_efOut ; PmRealVector out ;
real_T t268 [ 701 ] ; real_T X [ 131 ] ; real_T bb_efOut [ 1 ] ; real_T
bc_efOut [ 1 ] ; real_T c_efOut [ 1 ] ; real_T cc_efOut [ 1 ] ; real_T
eb_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T fb_efOut [ 1 ] ; real_T
fc_efOut [ 1 ] ; real_T hc_efOut [ 1 ] ; real_T i_efOut [ 1 ] ; real_T
ib_efOut [ 1 ] ; real_T jc_efOut [ 1 ] ; real_T kb_efOut [ 1 ] ; real_T
l_efOut [ 1 ] ; real_T mb_efOut [ 1 ] ; real_T mc_efOut [ 1 ] ; real_T
nc_efOut [ 1 ] ; real_T o_efOut [ 1 ] ; real_T pb_efOut [ 1 ] ; real_T
qb_efOut [ 1 ] ; real_T qc_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T
s_efOut [ 1 ] ; real_T sc_efOut [ 1 ] ; real_T t244 [ 1 ] ; real_T tb_efOut [
1 ] ; real_T uc_efOut [ 1 ] ; real_T v_efOut [ 1 ] ; real_T vb_efOut [ 1 ] ;
real_T x_efOut [ 1 ] ; real_T xb_efOut [ 1 ] ; real_T xc_efOut [ 1 ] ; real_T
yc_efOut [ 1 ] ; real_T Heater_Angular_Velocity_Source_R_w ; real_T
Heater_Boiler_E_NTU_Heat_Exchanger_TL_heat_transfer_CR ; real_T
Heater_Boiler_E_NTU_Heat_Exchanger_TL_heat_transfer_NTU ; real_T
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B ; real_T
Heater_Fixed_Displacement_Pump_TL_mechanical_power ; real_T
Heater_Pipe_TL_segment_h_I ; real_T Heater_Pipe_TL_segment_rho_I ; real_T
Heater_Pipe_TL_segment_u_I ; real_T
House_thermal_network_Radiator1_Convective_Heat_Transfer_Q ; real_T
House_thermal_network_Radiator1_Pipe_TL_segment_convection_A_rh ; real_T
House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_m0 ; real_T
House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_rh ; real_T
House_thermal_network_Radiator1_Pipe_TL_segment_h_I ; real_T
House_thermal_network_Radiator1_Pipe_TL_segment_rho_I ; real_T
House_thermal_network_Radiator1_Pipe_TL_segment_u_I ; real_T
House_thermal_network_Radiator2_Convective_Heat_Transfer_Q ; real_T
House_thermal_network_Radiator2_Pipe_TL_segment_convection_A_rh ; real_T
House_thermal_network_Radiator2_Pipe_TL_segment_convection_B_rh ; real_T
House_thermal_network_Radiator2_Pipe_TL_segment_h_I ; real_T
House_thermal_network_Radiator2_Pipe_TL_segment_rho_I ; real_T
House_thermal_network_Radiator2_Pipe_TL_segment_u_I ; real_T
House_thermal_network_Radiator3_Convective_Heat_Transfer_Q ; real_T
House_thermal_network_Radiator3_Pipe_TL_segment_convection_A_rh ; real_T
House_thermal_network_Radiator3_Pipe_TL_segment_convection_B_rh ; real_T
House_thermal_network_Radiator3_Pipe_TL_segment_h_I ; real_T
House_thermal_network_Radiator3_Pipe_TL_segment_rho_I ; real_T
House_thermal_network_Radiator3_Pipe_TL_segment_u_I ; real_T
House_thermal_network_Radiator4_Convective_Heat_Transfer_Q ; real_T
House_thermal_network_Radiator4_Pipe_TL_segment_convection_A_rh ; real_T
House_thermal_network_Radiator4_Pipe_TL_segment_rho_I ; real_T
House_thermal_network_Radiator4_Pipe_TL_segment_u_I ; real_T
House_thermal_network_Room_1_Air_roof_convection_Q ; real_T
House_thermal_network_Room_1_Air_wall_convection_B_T ; real_T
House_thermal_network_Room_1_Air_window_convection_Q ; real_T
House_thermal_network_Room_1_Half_roof_air_conduction_Q ; real_T
House_thermal_network_Room_1_Half_roof_atmosphere_conduction_B_ ; real_T
House_thermal_network_Room_1_Half_roof_atmosphere_conduction_Q ; real_T
House_thermal_network_Room_1_Half_wall_air_conduction_Q ; real_T
House_thermal_network_Room_1_Half_wall_atmosphere_conduction_B_ ; real_T
House_thermal_network_Room_1_Half_wall_atmosphere_conduction_Q ; real_T
House_thermal_network_Room_1_Half_window_air_conduction_Q ; real_T
House_thermal_network_Room_1_Half_window_atmosphere_conduction_ ; real_T
House_thermal_network_Room_1_Roof_atmosphere_leakage_Q ; real_T
House_thermal_network_Room_1_Wall_atmosphere_leakage_Q ; real_T
House_thermal_network_Room_1_Window_atmosphere_leakage_Q ; real_T
House_thermal_network_Room_2_Air_roof_convection_Q ; real_T
House_thermal_network_Room_2_Air_wall_convection_B_T ; real_T
House_thermal_network_Room_2_Air_window_convection_Q ; real_T
House_thermal_network_Room_2_Half_roof_air_conduction_Q ; real_T
House_thermal_network_Room_2_Half_roof_atmosphere_conduction_B_ ; real_T
House_thermal_network_Room_2_Half_roof_atmosphere_conduction_Q ; real_T
House_thermal_network_Room_2_Half_wall_air_conduction_Q ; real_T
House_thermal_network_Room_2_Half_wall_atmosphere_conduction_B_ ; real_T
House_thermal_network_Room_2_Half_wall_atmosphere_conduction_Q ; real_T
House_thermal_network_Room_2_Half_window_air_conduction_Q ; real_T
House_thermal_network_Room_2_Half_window_atmosphere_conduction_ ; real_T
House_thermal_network_Room_2_Roof_atmosphere_leakage_Q ; real_T
House_thermal_network_Room_2_Wall_atmosphere_leakage_Q ; real_T
House_thermal_network_Room_2_Window_atmosphere_leakage_Q ; real_T
House_thermal_network_Room_3_Air_roof_convection_Q ; real_T
House_thermal_network_Room_3_Air_wall_convection_B_T ; real_T
House_thermal_network_Room_3_Air_window_convection_Q ; real_T
House_thermal_network_Room_3_Half_roof_air_conduction_Q ; real_T
House_thermal_network_Room_3_Half_roof_atmosphere_conduction_B_ ; real_T
House_thermal_network_Room_3_Half_roof_atmosphere_conduction_Q ; real_T
House_thermal_network_Room_3_Half_wall_air_conduction_Q ; real_T
House_thermal_network_Room_3_Half_wall_atmosphere_conduction_B_ ; real_T
House_thermal_network_Room_3_Half_wall_atmosphere_conduction_Q ; real_T
House_thermal_network_Room_3_Half_window_air_conduction_Q ; real_T
House_thermal_network_Room_3_Half_window_atmosphere_conduction_ ; real_T
House_thermal_network_Room_3_Roof_atmosphere_leakage_Q ; real_T
House_thermal_network_Room_3_Wall_atmosphere_leakage_Q ; real_T
House_thermal_network_Room_3_Window_atmosphere_leakage_Q ; real_T
House_thermal_network_Room_4_Air_roof_convection_Q ; real_T
House_thermal_network_Room_4_Air_wall_convection_B_T ; real_T
House_thermal_network_Room_4_Air_window_convection_Q ; real_T
House_thermal_network_Room_4_Half_roof_air_conduction_Q ; real_T
House_thermal_network_Room_4_Half_roof_atmosphere_conduction_B_ ; real_T
House_thermal_network_Room_4_Half_roof_atmosphere_conduction_Q ; real_T
House_thermal_network_Room_4_Half_wall_air_conduction_Q ; real_T
House_thermal_network_Room_4_Half_wall_atmosphere_conduction_B_ ; real_T
House_thermal_network_Room_4_Half_wall_atmosphere_conduction_Q ; real_T
House_thermal_network_Room_4_Half_window_air_conduction_Q ; real_T
House_thermal_network_Room_4_Half_window_atmosphere_conduction_ ; real_T
House_thermal_network_Room_4_Roof_atmosphere_leakage_Q ; real_T
House_thermal_network_Room_4_Wall_atmosphere_leakage_Q ; real_T
House_thermal_network_Room_4_Window_atmosphere_leakage_Q ; real_T U_idx_0 ;
real_T U_idx_1 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4 ; real_T
U_idx_5 ; real_T intrm_sf_mf_172 ; real_T intrm_sf_mf_217 ; real_T
intrm_sf_mf_266 ; real_T intrm_sf_mf_268 ; real_T intrm_sf_mf_78 ; real_T
intrm_sf_mf_84 ; real_T t297_idx_0 ; real_T t301 ; real_T t302 ; real_T t304
; real_T t305 ; real_T t306 ; real_T t307 ; real_T t309 ; real_T t310 ;
real_T t311 ; real_T t315 ; real_T t316 ; real_T t317 ; real_T t319 ; real_T
t320 ; real_T t321 ; real_T t322 ; real_T t323 ; real_T t341 ; real_T t342 ;
real_T t343 ; real_T t344 ; real_T t345 ; real_T t346 ; real_T t418 ; real_T
t420 ; real_T t425 ; size_t t44 [ 1 ] ; size_t t45 [ 1 ] ; size_t t47 [ 1 ] ;
int32_T b ; boolean_T intrm_sf_mf_0 ; U_idx_0 = t431 -> mU . mX [ 0 ] ;
U_idx_1 = t431 -> mU . mX [ 1 ] ; U_idx_2 = t431 -> mU . mX [ 2 ] ; U_idx_3 =
t431 -> mU . mX [ 3 ] ; U_idx_4 = t431 -> mU . mX [ 4 ] ; U_idx_5 = t431 ->
mU . mX [ 5 ] ; for ( b = 0 ; b < 131 ; b ++ ) { X [ b ] = t431 -> mX . mX [
b ] ; } out = t432 -> mLOG ; Heater_Angular_Velocity_Source_R_w = U_idx_0 *
0.10471975511965977 ; Heater_Boiler_E_NTU_Heat_Exchanger_TL_heat_transfer_CR
= tanh ( X [ 40UL ] * 3.0 / 0.0049900060159512524 ) * X [ 40UL ] ; t301 =
tanh ( X [ 38UL ] * 3.0 / 0.0049900060159512524 ) * X [ 38UL ] ;
intrm_sf_mf_0 = ( Heater_Boiler_E_NTU_Heat_Exchanger_TL_heat_transfer_CR >=
t301 ) ; t302 = intrm_sf_mf_0 ?
Heater_Boiler_E_NTU_Heat_Exchanger_TL_heat_transfer_CR : t301 ;
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B = intrm_sf_mf_0
? t301 : Heater_Boiler_E_NTU_Heat_Exchanger_TL_heat_transfer_CR ;
Heater_Boiler_E_NTU_Heat_Exchanger_TL_heat_transfer_CR = (
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B +
0.0049900060159512524 ) / ( t302 + 0.0049900060159512524 == 0.0 ? 1.0E-16 :
t302 + 0.0049900060159512524 ) ; t301 =
Heater_Boiler_E_NTU_Heat_Exchanger_TL_heat_transfer_CR * 0.99 ; t302 = ( - X
[ 0UL ] + X [ 41UL ] ) + X [ 42UL ] ; t305 = 0.05136 ; if (
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B >= 1.0 / ( t305
== 0.0 ? 1.0E-16 : t305 ) ) { t306 =
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B * 0.00856 ;
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B = pmf_exp ( -
1.0 / ( t306 == 0.0 ? 1.0E-16 : t306 ) ) ; } else {
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B =
0.0024787521766663585 ; }
Heater_Boiler_E_NTU_Heat_Exchanger_TL_heat_transfer_NTU = - pmf_log (
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B ) ; t307 = 1.0 -
pmf_pow ( Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B , 1.0
- t301 ) ; Heater_Fixed_Displacement_Pump_TL_mechanical_power = 1.0 - pmf_pow
( Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B , 1.0 - t301 )
* t301 ; t309 = 1.0 - pmf_pow (
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B ,
Heater_Boiler_E_NTU_Heat_Exchanger_TL_heat_transfer_CR + 1.0 ) ;
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B = tanh ( X [
40UL ] * 4.0 / 0.0049900060159512524 ) * tanh ( X [ 38UL ] * 4.0 /
0.0049900060159512524 ) ; t301 = (
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B + 1.0 ) * ( t309
/ ( Heater_Boiler_E_NTU_Heat_Exchanger_TL_heat_transfer_CR + 1.0 == 0.0 ?
1.0E-16 : Heater_Boiler_E_NTU_Heat_Exchanger_TL_heat_transfer_CR + 1.0 ) ) /
2.0 + ( 1.0 - Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B )
* ( t307 / ( Heater_Fixed_Displacement_Pump_TL_mechanical_power == 0.0 ?
1.0E-16 : Heater_Fixed_Displacement_Pump_TL_mechanical_power ) ) / 2.0 ; t244
[ 0UL ] = X [ 0UL ] ; t44 [ 0 ] = 11UL ; t45 [ 0 ] = 1UL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0UL ] , & efOut . mField1
[ 0UL ] , & efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 , & t244 [ 0UL ] , & t44 [ 0UL ] , & t45 [ 0UL ] ) ; t42 = efOut ;
t244 [ 0UL ] = X [ 1UL ] ; t47 [ 0 ] = 12UL ; tlu2_linear_linear_prelookup (
& b_efOut . mField0 [ 0UL ] , & b_efOut . mField1 [ 0UL ] , & b_efOut .
mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t244 [ 0UL
] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t41 = b_efOut ;
tlu2_2d_linear_linear_value ( & c_efOut [ 0UL ] , & t42 . mField0 [ 0UL ] , &
t42 . mField2 [ 0UL ] , & t41 . mField0 [ 0UL ] , & t41 . mField2 [ 0UL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t44 [ 0UL ] , & t47 [ 0UL ] ,
& t45 [ 0UL ] ) ; t297_idx_0 = c_efOut [ 0 ] ; t304 = t297_idx_0 ; t305 = ( (
- X [ 59UL ] - X [ 60UL ] ) - X [ 61UL ] ) - X [ 62UL ] ; t244 [ 0UL ] = X [
63UL ] ; tlu2_linear_linear_prelookup ( & d_efOut . mField0 [ 0UL ] , &
d_efOut . mField1 [ 0UL ] , & d_efOut . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL ] , &
t45 [ 0UL ] ) ; t41 = d_efOut ; t244 [ 0UL ] = X [ 58UL ] ;
tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0UL ] , & e_efOut .
mField1 [ 0UL ] , & e_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField1 , & t244 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t35 =
e_efOut ; tlu2_2d_linear_linear_value ( & f_efOut [ 0UL ] , & t41 . mField0 [
0UL ] , & t41 . mField2 [ 0UL ] , & t35 . mField0 [ 0UL ] , & t35 . mField2 [
0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t44 [ 0UL ] , & t47
[ 0UL ] , & t45 [ 0UL ] ) ; t297_idx_0 = f_efOut [ 0 ] ; t306 = t297_idx_0 ;
t244 [ 0UL ] = X [ 65UL ] ; tlu2_linear_linear_prelookup ( & g_efOut .
mField0 [ 0UL ] , & g_efOut . mField1 [ 0UL ] , & g_efOut . mField2 [ 0UL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL ]
, & t45 [ 0UL ] ) ; t42 = g_efOut ; t244 [ 0UL ] = X [ 36UL ] ;
tlu2_linear_linear_prelookup ( & h_efOut . mField0 [ 0UL ] , & h_efOut .
mField1 [ 0UL ] , & h_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField1 , & t244 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t41 =
h_efOut ; tlu2_2d_linear_linear_value ( & i_efOut [ 0UL ] , & t42 . mField0 [
0UL ] , & t42 . mField2 [ 0UL ] , & t41 . mField0 [ 0UL ] , & t41 . mField2 [
0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t44 [ 0UL ] , & t47
[ 0UL ] , & t45 [ 0UL ] ) ; t297_idx_0 = i_efOut [ 0 ] ; t307 = t297_idx_0 ;
Heater_Fixed_Displacement_Pump_TL_mechanical_power = tanh (
Heater_Angular_Velocity_Source_R_w * 4.0 / 0.0075000000000000006 ) ; t309 = X
[ 36UL ] - X [ 58UL ] ; t310 = ( fabs ( t309 ) * 0.22272727272727275 + 0.05 )
* Heater_Fixed_Displacement_Pump_TL_mechanical_power ;
Heater_Fixed_Displacement_Pump_TL_mechanical_power = ( t306 + t297_idx_0 ) /
2.0 ; t311 = X [ 47UL ] * t309 / (
Heater_Fixed_Displacement_Pump_TL_mechanical_power == 0.0 ? 1.0E-16 :
Heater_Fixed_Displacement_Pump_TL_mechanical_power ) ; t244 [ 0UL ] = X [
63UL ] ; tlu2_linear_nearest_prelookup ( & j_efOut . mField0 [ 0UL ] , &
j_efOut . mField1 [ 0UL ] , & j_efOut . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL ] , &
t45 [ 0UL ] ) ; t41 = j_efOut ; t244 [ 0UL ] = X [ 58UL ] ;
tlu2_linear_nearest_prelookup ( & k_efOut . mField0 [ 0UL ] , & k_efOut .
mField1 [ 0UL ] , & k_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField1 , & t244 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t42 =
k_efOut ; tlu2_2d_linear_nearest_value ( & l_efOut [ 0UL ] , & t41 . mField0
[ 0UL ] , & t41 . mField2 [ 0UL ] , & t42 . mField0 [ 0UL ] , & t42 . mField2
[ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , & t44 [ 0UL ] , &
t47 [ 0UL ] , & t45 [ 0UL ] ) ; t297_idx_0 = l_efOut [ 0 ] ;
Heater_Fixed_Displacement_Pump_TL_mechanical_power = t297_idx_0 ; t244 [ 0UL
] = X [ 65UL ] ; tlu2_linear_nearest_prelookup ( & m_efOut . mField0 [ 0UL ]
, & m_efOut . mField1 [ 0UL ] , & m_efOut . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL ] , &
t45 [ 0UL ] ) ; t42 = m_efOut ; t244 [ 0UL ] = X [ 36UL ] ;
tlu2_linear_nearest_prelookup ( & n_efOut . mField0 [ 0UL ] , & n_efOut .
mField1 [ 0UL ] , & n_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField1 , & t244 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t41 =
n_efOut ; tlu2_2d_linear_nearest_value ( & o_efOut [ 0UL ] , & t42 . mField0
[ 0UL ] , & t42 . mField2 [ 0UL ] , & t41 . mField0 [ 0UL ] , & t41 . mField2
[ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , & t44 [ 0UL ] , &
t47 [ 0UL ] , & t45 [ 0UL ] ) ; t297_idx_0 = o_efOut [ 0 ] ;
Heater_Fixed_Displacement_Pump_TL_mechanical_power = (
Heater_Fixed_Displacement_Pump_TL_mechanical_power + t297_idx_0 ) / 2.0 ;
t244 [ 0UL ] = X [ 2UL ] ; tlu2_linear_linear_prelookup ( & p_efOut . mField0
[ 0UL ] , & p_efOut . mField1 [ 0UL ] , & p_efOut . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL ] , &
t45 [ 0UL ] ) ; t36 = p_efOut ; t244 [ 0UL ] = X [ 3UL ] ;
tlu2_linear_linear_prelookup ( & q_efOut . mField0 [ 0UL ] , & q_efOut .
mField1 [ 0UL ] , & q_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField1 , & t244 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t2 =
q_efOut ; tlu2_2d_linear_linear_value ( & r_efOut [ 0UL ] , & t36 . mField0 [
0UL ] , & t36 . mField2 [ 0UL ] , & t2 . mField0 [ 0UL ] , & t2 . mField2 [
0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t44 [ 0UL ] , & t47
[ 0UL ] , & t45 [ 0UL ] ) ; t297_idx_0 = r_efOut [ 0 ] ; t315 = t297_idx_0 ;
tlu2_2d_linear_linear_value ( & s_efOut [ 0UL ] , & t36 . mField0 [ 0UL ] , &
t36 . mField2 [ 0UL ] , & t2 . mField0 [ 0UL ] , & t2 . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField5 , & t44 [ 0UL ] , & t47 [ 0UL ] , &
t45 [ 0UL ] ) ; t297_idx_0 = s_efOut [ 0 ] ; t316 = t297_idx_0 ; t317 = X [
3UL ] / ( t315 == 0.0 ? 1.0E-16 : t315 ) * 100.0 + t297_idx_0 ; t319 = ( ( -
X [ 72UL ] - X [ 73UL ] ) - X [ 74UL ] ) - X [ 75UL ] ; t320 = ( ( - X [ 76UL
] - X [ 77UL ] ) - X [ 78UL ] ) - X [ 79UL ] ; t244 [ 0UL ] = X [ 5UL ] ;
tlu2_linear_nearest_prelookup ( & t_efOut . mField0 [ 0UL ] , & t_efOut .
mField1 [ 0UL ] , & t_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL ] , & t45 [ 0UL ] ) ; t42 =
t_efOut ; t244 [ 0UL ] = X [ 4UL ] ; tlu2_linear_nearest_prelookup ( &
u_efOut . mField0 [ 0UL ] , & u_efOut . mField1 [ 0UL ] , & u_efOut . mField2
[ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t244 [ 0UL ] , &
t47 [ 0UL ] , & t45 [ 0UL ] ) ; t41 = u_efOut ; tlu2_2d_linear_nearest_value
( & v_efOut [ 0UL ] , & t42 . mField0 [ 0UL ] , & t42 . mField2 [ 0UL ] , &
t41 . mField0 [ 0UL ] , & t41 . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t44 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ;
t297_idx_0 = v_efOut [ 0 ] ; t321 = t297_idx_0 ; t244 [ 0UL ] = X [ 80UL ] ;
tlu2_linear_linear_prelookup ( & w_efOut . mField0 [ 0UL ] , & w_efOut .
mField1 [ 0UL ] , & w_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL ] , & t45 [ 0UL ] ) ; t36 =
w_efOut ; tlu2_2d_linear_linear_value ( & x_efOut [ 0UL ] , & t36 . mField0 [
0UL ] , & t36 . mField2 [ 0UL ] , & t2 . mField0 [ 0UL ] , & t2 . mField2 [
0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t44 [ 0UL ] , & t47
[ 0UL ] , & t45 [ 0UL ] ) ; t297_idx_0 = x_efOut [ 0 ] ; t322 = t297_idx_0 ;
t244 [ 0UL ] = X [ 82UL ] ; tlu2_linear_linear_prelookup ( & y_efOut .
mField0 [ 0UL ] , & y_efOut . mField1 [ 0UL ] , & y_efOut . mField2 [ 0UL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL ]
, & t45 [ 0UL ] ) ; t41 = y_efOut ; t244 [ 0UL ] = X [ 71UL ] ;
tlu2_linear_linear_prelookup ( & ab_efOut . mField0 [ 0UL ] , & ab_efOut .
mField1 [ 0UL ] , & ab_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t244 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t15 =
ab_efOut ; tlu2_2d_linear_linear_value ( & bb_efOut [ 0UL ] , & t41 . mField0
[ 0UL ] , & t41 . mField2 [ 0UL ] , & t15 . mField0 [ 0UL ] , & t15 . mField2
[ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t44 [ 0UL ] , &
t47 [ 0UL ] , & t45 [ 0UL ] ) ; t297_idx_0 = bb_efOut [ 0 ] ; t323 =
t297_idx_0 ; t244 [ 0UL ] = X [ 5UL ] ; tlu2_linear_linear_prelookup ( &
cb_efOut . mField0 [ 0UL ] , & cb_efOut . mField1 [ 0UL ] , & cb_efOut .
mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL
] , & t44 [ 0UL ] , & t45 [ 0UL ] ) ; t42 = cb_efOut ; t244 [ 0UL ] = X [ 4UL
] ; tlu2_linear_linear_prelookup ( & db_efOut . mField0 [ 0UL ] , & db_efOut
. mField1 [ 0UL ] , & db_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t244 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t41 =
db_efOut ; tlu2_2d_linear_linear_value ( & eb_efOut [ 0UL ] , & t42 . mField0
[ 0UL ] , & t42 . mField2 [ 0UL ] , & t41 . mField0 [ 0UL ] , & t41 . mField2
[ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t44 [ 0UL ] , &
t47 [ 0UL ] , & t45 [ 0UL ] ) ; t297_idx_0 = eb_efOut [ 0 ] ;
Heater_Pipe_TL_segment_rho_I = t297_idx_0 ; tlu2_2d_linear_linear_value ( &
fb_efOut [ 0UL ] , & t42 . mField0 [ 0UL ] , & t42 . mField2 [ 0UL ] , & t41
. mField0 [ 0UL ] , & t41 . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t44 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t297_idx_0 =
fb_efOut [ 0 ] ; Heater_Pipe_TL_segment_u_I = t297_idx_0 ;
Heater_Pipe_TL_segment_h_I = X [ 4UL ] / ( Heater_Pipe_TL_segment_rho_I ==
0.0 ? 1.0E-16 : Heater_Pipe_TL_segment_rho_I ) * 100.0 + t297_idx_0 ;
House_thermal_network_Radiator1_Convective_Heat_Transfer_Q = X [ 6UL ] * 0.5
+ X [ 7UL ] * - 0.5 ;
House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_m0 = ( ( - X [
47UL ] - X [ 85UL ] ) - X [ 86UL ] ) - X [ 87UL ] ; t244 [ 0UL ] = X [ 9UL ]
; tlu2_linear_nearest_prelookup ( & gb_efOut . mField0 [ 0UL ] , & gb_efOut .
mField1 [ 0UL ] , & gb_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL ] , & t45 [ 0UL ] ) ; t36 =
gb_efOut ; t244 [ 0UL ] = X [ 8UL ] ; tlu2_linear_nearest_prelookup ( &
hb_efOut . mField0 [ 0UL ] , & hb_efOut . mField1 [ 0UL ] , & hb_efOut .
mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t244 [ 0UL
] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t2 = hb_efOut ;
tlu2_2d_linear_nearest_value ( & ib_efOut [ 0UL ] , & t36 . mField0 [ 0UL ] ,
& t36 . mField2 [ 0UL ] , & t2 . mField0 [ 0UL ] , & t2 . mField2 [ 0UL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t44 [ 0UL ] , & t47 [ 0UL ] ,
& t45 [ 0UL ] ) ; t297_idx_0 = ib_efOut [ 0 ] ; intrm_sf_mf_84 = t297_idx_0 ;
t244 [ 0UL ] = X [ 88UL ] ; tlu2_linear_linear_prelookup ( & jb_efOut .
mField0 [ 0UL ] , & jb_efOut . mField1 [ 0UL ] , & jb_efOut . mField2 [ 0UL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL
] , & t45 [ 0UL ] ) ; t41 = jb_efOut ; tlu2_2d_linear_linear_value ( &
kb_efOut [ 0UL ] , & t41 . mField0 [ 0UL ] , & t41 . mField2 [ 0UL ] , & t15
. mField0 [ 0UL ] , & t15 . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t44 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t297_idx_0 =
kb_efOut [ 0 ] ;
House_thermal_network_Radiator1_Pipe_TL_segment_convection_A_rh = t297_idx_0
; t244 [ 0UL ] = X [ 90UL ] ; tlu2_linear_linear_prelookup ( & lb_efOut .
mField0 [ 0UL ] , & lb_efOut . mField1 [ 0UL ] , & lb_efOut . mField2 [ 0UL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL
] , & t45 [ 0UL ] ) ; t2 = lb_efOut ; tlu2_2d_linear_linear_value ( &
mb_efOut [ 0UL ] , & t2 . mField0 [ 0UL ] , & t2 . mField2 [ 0UL ] , & t35 .
mField0 [ 0UL ] , & t35 . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) )
-> mField4 , & t44 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t297_idx_0 =
mb_efOut [ 0 ] ;
House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_rh = t297_idx_0
; t244 [ 0UL ] = X [ 9UL ] ; tlu2_linear_linear_prelookup ( & nb_efOut .
mField0 [ 0UL ] , & nb_efOut . mField1 [ 0UL ] , & nb_efOut . mField2 [ 0UL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL
] , & t45 [ 0UL ] ) ; t36 = nb_efOut ; t244 [ 0UL ] = X [ 8UL ] ;
tlu2_linear_linear_prelookup ( & ob_efOut . mField0 [ 0UL ] , & ob_efOut .
mField1 [ 0UL ] , & ob_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t244 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t42 =
ob_efOut ; tlu2_2d_linear_linear_value ( & pb_efOut [ 0UL ] , & t36 . mField0
[ 0UL ] , & t36 . mField2 [ 0UL ] , & t42 . mField0 [ 0UL ] , & t42 . mField2
[ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t44 [ 0UL ] , &
t47 [ 0UL ] , & t45 [ 0UL ] ) ; t297_idx_0 = pb_efOut [ 0 ] ;
House_thermal_network_Radiator1_Pipe_TL_segment_rho_I = t297_idx_0 ;
tlu2_2d_linear_linear_value ( & qb_efOut [ 0UL ] , & t36 . mField0 [ 0UL ] ,
& t36 . mField2 [ 0UL ] , & t42 . mField0 [ 0UL ] , & t42 . mField2 [ 0UL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , & t44 [ 0UL ] , & t47 [ 0UL ]
, & t45 [ 0UL ] ) ; t297_idx_0 = qb_efOut [ 0 ] ;
House_thermal_network_Radiator1_Pipe_TL_segment_u_I = t297_idx_0 ;
House_thermal_network_Radiator1_Pipe_TL_segment_h_I = X [ 8UL ] / (
House_thermal_network_Radiator1_Pipe_TL_segment_rho_I == 0.0 ? 1.0E-16 :
House_thermal_network_Radiator1_Pipe_TL_segment_rho_I ) * 100.0 + t297_idx_0
; House_thermal_network_Radiator2_Convective_Heat_Transfer_Q = X [ 10UL ] *
0.5 + X [ 11UL ] * - 0.5 ; t244 [ 0UL ] = X [ 13UL ] ;
tlu2_linear_nearest_prelookup ( & rb_efOut . mField0 [ 0UL ] , & rb_efOut .
mField1 [ 0UL ] , & rb_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL ] , & t45 [ 0UL ] ) ; t41 =
rb_efOut ; t244 [ 0UL ] = X [ 12UL ] ; tlu2_linear_nearest_prelookup ( &
sb_efOut . mField0 [ 0UL ] , & sb_efOut . mField1 [ 0UL ] , & sb_efOut .
mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t244 [ 0UL
] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t40 = sb_efOut ;
tlu2_2d_linear_nearest_value ( & tb_efOut [ 0UL ] , & t41 . mField0 [ 0UL ] ,
& t41 . mField2 [ 0UL ] , & t40 . mField0 [ 0UL ] , & t40 . mField2 [ 0UL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t44 [ 0UL ] , & t47 [ 0UL ]
, & t45 [ 0UL ] ) ; t297_idx_0 = tb_efOut [ 0 ] ; intrm_sf_mf_268 =
t297_idx_0 ; t244 [ 0UL ] = X [ 93UL ] ; tlu2_linear_linear_prelookup ( &
ub_efOut . mField0 [ 0UL ] , & ub_efOut . mField1 [ 0UL ] , & ub_efOut .
mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL
] , & t44 [ 0UL ] , & t45 [ 0UL ] ) ; t41 = ub_efOut ;
tlu2_2d_linear_linear_value ( & vb_efOut [ 0UL ] , & t41 . mField0 [ 0UL ] ,
& t41 . mField2 [ 0UL ] , & t15 . mField0 [ 0UL ] , & t15 . mField2 [ 0UL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t44 [ 0UL ] , & t47 [ 0UL ]
, & t45 [ 0UL ] ) ; t297_idx_0 = vb_efOut [ 0 ] ;
House_thermal_network_Radiator2_Pipe_TL_segment_convection_A_rh = t297_idx_0
; t244 [ 0UL ] = X [ 95UL ] ; tlu2_linear_linear_prelookup ( & wb_efOut .
mField0 [ 0UL ] , & wb_efOut . mField1 [ 0UL ] , & wb_efOut . mField2 [ 0UL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL
] , & t45 [ 0UL ] ) ; t36 = wb_efOut ; tlu2_2d_linear_linear_value ( &
xb_efOut [ 0UL ] , & t36 . mField0 [ 0UL ] , & t36 . mField2 [ 0UL ] , & t35
. mField0 [ 0UL ] , & t35 . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t44 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t297_idx_0 =
xb_efOut [ 0 ] ;
House_thermal_network_Radiator2_Pipe_TL_segment_convection_B_rh = t297_idx_0
; t244 [ 0UL ] = X [ 13UL ] ; tlu2_linear_linear_prelookup ( & yb_efOut .
mField0 [ 0UL ] , & yb_efOut . mField1 [ 0UL ] , & yb_efOut . mField2 [ 0UL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL
] , & t45 [ 0UL ] ) ; t42 = yb_efOut ; t244 [ 0UL ] = X [ 12UL ] ;
tlu2_linear_linear_prelookup ( & ac_efOut . mField0 [ 0UL ] , & ac_efOut .
mField1 [ 0UL ] , & ac_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t244 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t41 =
ac_efOut ; tlu2_2d_linear_linear_value ( & bc_efOut [ 0UL ] , & t42 . mField0
[ 0UL ] , & t42 . mField2 [ 0UL ] , & t41 . mField0 [ 0UL ] , & t41 . mField2
[ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t44 [ 0UL ] , &
t47 [ 0UL ] , & t45 [ 0UL ] ) ; t297_idx_0 = bc_efOut [ 0 ] ;
House_thermal_network_Radiator2_Pipe_TL_segment_rho_I = t297_idx_0 ;
tlu2_2d_linear_linear_value ( & cc_efOut [ 0UL ] , & t42 . mField0 [ 0UL ] ,
& t42 . mField2 [ 0UL ] , & t41 . mField0 [ 0UL ] , & t41 . mField2 [ 0UL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , & t44 [ 0UL ] , & t47 [ 0UL ]
, & t45 [ 0UL ] ) ; t297_idx_0 = cc_efOut [ 0 ] ;
House_thermal_network_Radiator2_Pipe_TL_segment_u_I = t297_idx_0 ;
House_thermal_network_Radiator2_Pipe_TL_segment_h_I = X [ 12UL ] / (
House_thermal_network_Radiator2_Pipe_TL_segment_rho_I == 0.0 ? 1.0E-16 :
House_thermal_network_Radiator2_Pipe_TL_segment_rho_I ) * 100.0 + t297_idx_0
; House_thermal_network_Radiator3_Convective_Heat_Transfer_Q = X [ 14UL ] *
0.5 + X [ 15UL ] * - 0.5 ; t244 [ 0UL ] = X [ 17UL ] ;
tlu2_linear_nearest_prelookup ( & dc_efOut . mField0 [ 0UL ] , & dc_efOut .
mField1 [ 0UL ] , & dc_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL ] , & t45 [ 0UL ] ) ; t36 =
dc_efOut ; t244 [ 0UL ] = X [ 16UL ] ; tlu2_linear_nearest_prelookup ( &
ec_efOut . mField0 [ 0UL ] , & ec_efOut . mField1 [ 0UL ] , & ec_efOut .
mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t244 [ 0UL
] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t41 = ec_efOut ;
tlu2_2d_linear_nearest_value ( & fc_efOut [ 0UL ] , & t36 . mField0 [ 0UL ] ,
& t36 . mField2 [ 0UL ] , & t41 . mField0 [ 0UL ] , & t41 . mField2 [ 0UL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t44 [ 0UL ] , & t47 [ 0UL ]
, & t45 [ 0UL ] ) ; t297_idx_0 = fc_efOut [ 0 ] ; intrm_sf_mf_266 =
t297_idx_0 ; t244 [ 0UL ] = X [ 98UL ] ; tlu2_linear_linear_prelookup ( &
gc_efOut . mField0 [ 0UL ] , & gc_efOut . mField1 [ 0UL ] , & gc_efOut .
mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL
] , & t44 [ 0UL ] , & t45 [ 0UL ] ) ; t36 = gc_efOut ;
tlu2_2d_linear_linear_value ( & hc_efOut [ 0UL ] , & t36 . mField0 [ 0UL ] ,
& t36 . mField2 [ 0UL ] , & t15 . mField0 [ 0UL ] , & t15 . mField2 [ 0UL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t44 [ 0UL ] , & t47 [ 0UL ]
, & t45 [ 0UL ] ) ; t297_idx_0 = hc_efOut [ 0 ] ;
House_thermal_network_Radiator3_Pipe_TL_segment_convection_A_rh = t297_idx_0
; t244 [ 0UL ] = X [ 100UL ] ; tlu2_linear_linear_prelookup ( & ic_efOut .
mField0 [ 0UL ] , & ic_efOut . mField1 [ 0UL ] , & ic_efOut . mField2 [ 0UL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL
] , & t45 [ 0UL ] ) ; t2 = ic_efOut ; tlu2_2d_linear_linear_value ( &
jc_efOut [ 0UL ] , & t2 . mField0 [ 0UL ] , & t2 . mField2 [ 0UL ] , & t35 .
mField0 [ 0UL ] , & t35 . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) )
-> mField4 , & t44 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t297_idx_0 =
jc_efOut [ 0 ] ;
House_thermal_network_Radiator3_Pipe_TL_segment_convection_B_rh = t297_idx_0
; t244 [ 0UL ] = X [ 17UL ] ; tlu2_linear_linear_prelookup ( & kc_efOut .
mField0 [ 0UL ] , & kc_efOut . mField1 [ 0UL ] , & kc_efOut . mField2 [ 0UL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL
] , & t45 [ 0UL ] ) ; t42 = kc_efOut ; t244 [ 0UL ] = X [ 16UL ] ;
tlu2_linear_linear_prelookup ( & lc_efOut . mField0 [ 0UL ] , & lc_efOut .
mField1 [ 0UL ] , & lc_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t244 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t41 =
lc_efOut ; tlu2_2d_linear_linear_value ( & mc_efOut [ 0UL ] , & t42 . mField0
[ 0UL ] , & t42 . mField2 [ 0UL ] , & t41 . mField0 [ 0UL ] , & t41 . mField2
[ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t44 [ 0UL ] , &
t47 [ 0UL ] , & t45 [ 0UL ] ) ; t297_idx_0 = mc_efOut [ 0 ] ;
House_thermal_network_Radiator3_Pipe_TL_segment_rho_I = t297_idx_0 ;
tlu2_2d_linear_linear_value ( & nc_efOut [ 0UL ] , & t42 . mField0 [ 0UL ] ,
& t42 . mField2 [ 0UL ] , & t41 . mField0 [ 0UL ] , & t41 . mField2 [ 0UL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , & t44 [ 0UL ] , & t47 [ 0UL ]
, & t45 [ 0UL ] ) ; t297_idx_0 = nc_efOut [ 0 ] ;
House_thermal_network_Radiator3_Pipe_TL_segment_u_I = t297_idx_0 ;
House_thermal_network_Radiator3_Pipe_TL_segment_h_I = X [ 16UL ] / (
House_thermal_network_Radiator3_Pipe_TL_segment_rho_I == 0.0 ? 1.0E-16 :
House_thermal_network_Radiator3_Pipe_TL_segment_rho_I ) * 100.0 + t297_idx_0
; House_thermal_network_Radiator4_Convective_Heat_Transfer_Q = X [ 18UL ] *
0.5 + X [ 19UL ] * - 0.5 ; t244 [ 0UL ] = X [ 21UL ] ;
tlu2_linear_nearest_prelookup ( & oc_efOut . mField0 [ 0UL ] , & oc_efOut .
mField1 [ 0UL ] , & oc_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL ] , & t45 [ 0UL ] ) ; t2 =
oc_efOut ; t244 [ 0UL ] = X [ 20UL ] ; tlu2_linear_nearest_prelookup ( &
pc_efOut . mField0 [ 0UL ] , & pc_efOut . mField1 [ 0UL ] , & pc_efOut .
mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t244 [ 0UL
] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t41 = pc_efOut ;
tlu2_2d_linear_nearest_value ( & qc_efOut [ 0UL ] , & t2 . mField0 [ 0UL ] ,
& t2 . mField2 [ 0UL ] , & t41 . mField0 [ 0UL ] , & t41 . mField2 [ 0UL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t44 [ 0UL ] , & t47 [ 0UL ]
, & t45 [ 0UL ] ) ; t297_idx_0 = qc_efOut [ 0 ] ; intrm_sf_mf_78 = t297_idx_0
; t244 [ 0UL ] = X [ 103UL ] ; tlu2_linear_linear_prelookup ( & rc_efOut .
mField0 [ 0UL ] , & rc_efOut . mField1 [ 0UL ] , & rc_efOut . mField2 [ 0UL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL
] , & t45 [ 0UL ] ) ; t41 = rc_efOut ; tlu2_2d_linear_linear_value ( &
sc_efOut [ 0UL ] , & t41 . mField0 [ 0UL ] , & t41 . mField2 [ 0UL ] , & t15
. mField0 [ 0UL ] , & t15 . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t44 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t297_idx_0 =
sc_efOut [ 0 ] ;
House_thermal_network_Radiator4_Pipe_TL_segment_convection_A_rh = t297_idx_0
; t244 [ 0UL ] = X [ 105UL ] ; tlu2_linear_linear_prelookup ( & tc_efOut .
mField0 [ 0UL ] , & tc_efOut . mField1 [ 0UL ] , & tc_efOut . mField2 [ 0UL ]
, ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL ] , & t44 [ 0UL
] , & t45 [ 0UL ] ) ; t2 = tc_efOut ; tlu2_2d_linear_linear_value ( &
uc_efOut [ 0UL ] , & t2 . mField0 [ 0UL ] , & t2 . mField2 [ 0UL ] , & t35 .
mField0 [ 0UL ] , & t35 . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) )
-> mField4 , & t44 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t297_idx_0 =
uc_efOut [ 0 ] ; t244 [ 0UL ] = X [ 21UL ] ; tlu2_linear_linear_prelookup ( &
vc_efOut . mField0 [ 0UL ] , & vc_efOut . mField1 [ 0UL ] , & vc_efOut .
mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t244 [ 0UL
] , & t44 [ 0UL ] , & t45 [ 0UL ] ) ; t42 = vc_efOut ; t244 [ 0UL ] = X [
20UL ] ; tlu2_linear_linear_prelookup ( & wc_efOut . mField0 [ 0UL ] , &
wc_efOut . mField1 [ 0UL ] , & wc_efOut . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t244 [ 0UL ] , & t47 [ 0UL ] , &
t45 [ 0UL ] ) ; t41 = wc_efOut ; tlu2_2d_linear_linear_value ( & xc_efOut [
0UL ] , & t42 . mField0 [ 0UL ] , & t42 . mField2 [ 0UL ] , & t41 . mField0 [
0UL ] , & t41 . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField4 , & t44 [ 0UL ] , & t47 [ 0UL ] , & t45 [ 0UL ] ) ; t244 [ 0 ] =
xc_efOut [ 0 ] ; House_thermal_network_Radiator4_Pipe_TL_segment_rho_I = t244
[ 0UL ] ; tlu2_2d_linear_linear_value ( & yc_efOut [ 0UL ] , & t42 . mField0
[ 0UL ] , & t42 . mField2 [ 0UL ] , & t41 . mField0 [ 0UL ] , & t41 . mField2
[ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , & t44 [ 0UL ] , &
t47 [ 0UL ] , & t45 [ 0UL ] ) ; t244 [ 0 ] = yc_efOut [ 0 ] ;
House_thermal_network_Radiator4_Pipe_TL_segment_u_I = t244 [ 0UL ] ;
House_thermal_network_Room_1_Air_roof_convection_Q = X [ 7UL ] *
0.90225628552289616 + X [ 107UL ] * - 0.90225628552289616 ;
House_thermal_network_Room_1_Air_wall_convection_B_T = X [ 108UL ] * -
0.43554006968641112 + X [ 7UL ] ;
House_thermal_network_Room_1_Air_window_convection_Q = X [ 7UL ] * 0.075 + X
[ 109UL ] * - 0.075 ; House_thermal_network_Room_1_Half_roof_air_conduction_Q
= X [ 22UL ] * - 0.028571449041558377 + X [ 107UL ] * 0.028571449041558377 ;
House_thermal_network_Room_1_Half_roof_atmosphere_conduction_B_ = ( ( X [
22UL ] * - 0.0099999999999999985 + X [ 107UL ] * 0.0099999999999999985 ) + X
[ 110UL ] * - 0.34999974924108951 ) + U_idx_2 ;
House_thermal_network_Room_1_Half_roof_atmosphere_conduction_Q = ( X [ 22UL ]
* - 0.028571449041558377 + X [ 107UL ] * 0.028571449041558377 ) - X [ 110UL ]
; House_thermal_network_Room_1_Half_wall_air_conduction_Q = ( X [ 7UL ] *
0.036353333333333335 + X [ 23UL ] * - 0.036353333333333335 ) + X [ 108UL ] *
- 0.015833333333333335 ;
House_thermal_network_Room_1_Half_wall_atmosphere_conduction_B_ = ( ( ( X [
7UL ] * 0.011176470588235293 + X [ 23UL ] * - 0.011176470588235293 ) + X [
108UL ] * - 0.0048678007788481243 ) + X [ 111UL ] * - 0.30744004919040785 ) +
U_idx_2 ; House_thermal_network_Room_1_Half_wall_atmosphere_conduction_Q = (
( X [ 7UL ] * 0.036353333333333335 + X [ 23UL ] * - 0.036353333333333335 ) +
X [ 108UL ] * - 0.015833333333333335 ) - X [ 111UL ] ;
House_thermal_network_Room_1_Half_window_air_conduction_Q = X [ 24UL ] * -
0.468 + X [ 109UL ] * 0.468 ;
House_thermal_network_Room_1_Half_window_atmosphere_conduction_ = X [ 24UL ]
* 0.468 + X [ 112UL ] * - 0.468 ;
House_thermal_network_Room_1_Roof_atmosphere_leakage_Q = X [ 107UL ] *
0.28571449041558383 + U_idx_2 * - 0.28571449041558383 ;
House_thermal_network_Room_1_Wall_atmosphere_leakage_Q = ( X [ 7UL ] * 0.4879
+ X [ 108UL ] * - 0.2125 ) + U_idx_2 * - 0.4879 ;
House_thermal_network_Room_1_Window_atmosphere_leakage_Q = X [ 109UL ] *
0.019200000000000002 + U_idx_2 * - 0.019200000000000002 ;
House_thermal_network_Room_2_Air_roof_convection_Q = X [ 11UL ] *
0.90225628552289616 + X [ 113UL ] * - 0.90225628552289616 ;
House_thermal_network_Room_2_Air_wall_convection_B_T = X [ 114UL ] * - 0.5 +
X [ 11UL ] ; House_thermal_network_Room_2_Air_window_convection_Q = X [ 11UL
] * 0.05 + X [ 115UL ] * - 0.05 ;
House_thermal_network_Room_2_Half_roof_air_conduction_Q = X [ 25UL ] * -
0.028571449041558377 + X [ 113UL ] * 0.028571449041558377 ;
House_thermal_network_Room_2_Half_roof_atmosphere_conduction_B_ = ( ( X [
25UL ] * - 0.0099999999999999985 + X [ 113UL ] * 0.0099999999999999985 ) + X
[ 116UL ] * - 0.34999974924108951 ) + U_idx_3 ;
House_thermal_network_Room_2_Half_roof_atmosphere_conduction_Q = ( X [ 25UL ]
* - 0.028571449041558377 + X [ 113UL ] * 0.028571449041558377 ) - X [ 116UL ]
; House_thermal_network_Room_2_Half_wall_air_conduction_Q = ( X [ 11UL ] *
0.031666666666666662 + X [ 26UL ] * - 0.031666666666666662 ) + X [ 114UL ] *
- 0.015833333333333331 ;
House_thermal_network_Room_2_Half_wall_atmosphere_conduction_B_ = ( ( ( X [
11UL ] * 0.011176470588235293 + X [ 26UL ] * - 0.011176470588235293 ) + X [
114UL ] * - 0.0055882352941176465 ) + X [ 117UL ] * - 0.35294117647058826 ) +
U_idx_3 ; House_thermal_network_Room_2_Half_wall_atmosphere_conduction_Q = (
( X [ 11UL ] * 0.031666666666666662 + X [ 26UL ] * - 0.031666666666666662 ) +
X [ 114UL ] * - 0.015833333333333331 ) - X [ 117UL ] ;
House_thermal_network_Room_2_Half_window_air_conduction_Q = X [ 27UL ] * -
0.312 + X [ 115UL ] * 0.312 ;
House_thermal_network_Room_2_Half_window_atmosphere_conduction_ = X [ 27UL ]
* 0.312 + X [ 118UL ] * - 0.312 ;
House_thermal_network_Room_2_Roof_atmosphere_leakage_Q = X [ 113UL ] *
0.28571449041558383 + U_idx_3 * - 0.28571449041558383 ;
House_thermal_network_Room_2_Wall_atmosphere_leakage_Q = ( X [ 11UL ] *
0.42499999999999993 + X [ 114UL ] * - 0.21249999999999997 ) + U_idx_3 * -
0.42499999999999993 ;
House_thermal_network_Room_2_Window_atmosphere_leakage_Q = X [ 115UL ] *
0.0128 + U_idx_3 * - 0.0128 ;
House_thermal_network_Room_3_Air_roof_convection_Q = X [ 15UL ] *
0.90225628552289616 + X [ 119UL ] * - 0.90225628552289616 ;
House_thermal_network_Room_3_Air_wall_convection_B_T = X [ 120UL ] * -
0.573394495412844 + X [ 15UL ] ;
House_thermal_network_Room_3_Air_window_convection_Q = X [ 15UL ] * 0.05 + X
[ 121UL ] * - 0.05 ; House_thermal_network_Room_3_Half_roof_air_conduction_Q
= X [ 28UL ] * - 0.028571449041558377 + X [ 119UL ] * 0.028571449041558377 ;
House_thermal_network_Room_3_Half_roof_atmosphere_conduction_B_ = ( ( X [
28UL ] * - 0.0099999999999999985 + X [ 119UL ] * 0.0099999999999999985 ) + X
[ 122UL ] * - 0.34999974924108951 ) + U_idx_4 ;
House_thermal_network_Room_3_Half_roof_atmosphere_conduction_Q = ( X [ 28UL ]
* - 0.028571449041558377 + X [ 119UL ] * 0.028571449041558377 ) - X [ 122UL ]
; House_thermal_network_Room_3_Half_wall_air_conduction_Q = ( X [ 15UL ] *
0.02761333333333333 + X [ 29UL ] * - 0.02761333333333333 ) + X [ 120UL ] * -
0.015833333333333331 ;
House_thermal_network_Room_3_Half_wall_atmosphere_conduction_B_ = ( ( ( X [
15UL ] * 0.011176470588235289 + X [ 29UL ] * - 0.011176470588235289 ) + X [
120UL ] * - 0.006408526713437666 ) + X [ 123UL ] * - 0.40474905558553687 ) +
U_idx_4 ; House_thermal_network_Room_3_Half_wall_atmosphere_conduction_Q = (
( X [ 15UL ] * 0.02761333333333333 + X [ 29UL ] * - 0.02761333333333333 ) + X
[ 120UL ] * - 0.015833333333333331 ) - X [ 123UL ] ;
House_thermal_network_Room_3_Half_window_air_conduction_Q = X [ 30UL ] * -
0.312 + X [ 121UL ] * 0.312 ;
House_thermal_network_Room_3_Half_window_atmosphere_conduction_ = X [ 30UL ]
* 0.312 + X [ 124UL ] * - 0.312 ;
House_thermal_network_Room_3_Roof_atmosphere_leakage_Q = X [ 119UL ] *
0.28571449041558383 + U_idx_4 * - 0.28571449041558383 ;
House_thermal_network_Room_3_Wall_atmosphere_leakage_Q = ( X [ 15UL ] *
0.3706 + X [ 120UL ] * - 0.2125 ) + U_idx_4 * - 0.3706 ;
House_thermal_network_Room_3_Window_atmosphere_leakage_Q = X [ 121UL ] *
0.0128 + U_idx_4 * - 0.0128 ;
House_thermal_network_Room_4_Air_roof_convection_Q = X [ 19UL ] *
0.90225628552289616 + X [ 125UL ] * - 0.90225628552289616 ;
House_thermal_network_Room_4_Air_wall_convection_B_T = X [ 126UL ] * -
0.702247191011236 + X [ 19UL ] ;
House_thermal_network_Room_4_Air_window_convection_Q = X [ 19UL ] * 0.05 + X
[ 127UL ] * - 0.05 ; House_thermal_network_Room_4_Half_roof_air_conduction_Q
= X [ 31UL ] * - 0.028571449041558377 + X [ 125UL ] * 0.028571449041558377 ;
House_thermal_network_Room_4_Half_roof_atmosphere_conduction_B_ = ( ( X [
31UL ] * - 0.0099999999999999985 + X [ 125UL ] * 0.0099999999999999985 ) + X
[ 128UL ] * - 0.34999974924108951 ) + U_idx_5 ;
House_thermal_network_Room_4_Half_roof_atmosphere_conduction_Q = ( X [ 31UL ]
* - 0.028571449041558377 + X [ 125UL ] * 0.028571449041558377 ) - X [ 128UL ]
; House_thermal_network_Room_4_Half_wall_air_conduction_Q = ( X [ 19UL ] *
0.022546666666666666 + X [ 32UL ] * - 0.022546666666666666 ) + X [ 126UL ] *
- 0.015833333333333335 ;
House_thermal_network_Room_4_Half_wall_atmosphere_conduction_B_ = ( ( ( X [
19UL ] * 0.011176470588235293 + X [ 32UL ] * - 0.011176470588235293 ) + X [
126UL ] * - 0.00784864507600793 ) + X [ 129UL ] * - 0.49570389953734295 ) +
U_idx_5 ; House_thermal_network_Room_4_Half_wall_atmosphere_conduction_Q = (
( X [ 19UL ] * 0.022546666666666666 + X [ 32UL ] * - 0.022546666666666666 ) +
X [ 126UL ] * - 0.015833333333333335 ) - X [ 129UL ] ;
House_thermal_network_Room_4_Half_window_air_conduction_Q = X [ 33UL ] * -
0.312 + X [ 127UL ] * 0.312 ;
House_thermal_network_Room_4_Half_window_atmosphere_conduction_ = X [ 33UL ]
* 0.312 + X [ 130UL ] * - 0.312 ;
House_thermal_network_Room_4_Roof_atmosphere_leakage_Q = X [ 125UL ] *
0.28571449041558383 + U_idx_5 * - 0.28571449041558383 ;
House_thermal_network_Room_4_Wall_atmosphere_leakage_Q = ( X [ 19UL ] *
0.30260000000000004 + X [ 126UL ] * - 0.21250000000000005 ) + U_idx_5 * -
0.30260000000000004 ;
House_thermal_network_Room_4_Window_atmosphere_leakage_Q = X [ 127UL ] *
0.0128 + U_idx_5 * - 0.0128 ; intrm_sf_mf_217 = X [ 76UL ] >= 0.0 ? X [ 76UL
] : - X [ 76UL ] ; t342 = intrm_sf_mf_84 * 0.01 ; intrm_sf_mf_172 =
intrm_sf_mf_217 * 0.1128 / ( t342 == 0.0 ? 1.0E-16 : t342 ) ; t341 =
intrm_sf_mf_172 >= 2000.0 ? intrm_sf_mf_172 : 1.0 ; t343 = pmf_log10 ( 6.9 /
( t341 == 0.0 ? 1.0E-16 : t341 ) + 1.1659885434329368E-5 ) * pmf_log10 ( 6.9
/ ( t341 == 0.0 ? 1.0E-16 : t341 ) + 1.1659885434329368E-5 ) * 3.24 ; t341 =
1.0 / ( t343 == 0.0 ? 1.0E-16 : t343 ) * 2.5 / 0.1128 ; t346 =
House_thermal_network_Radiator1_Pipe_TL_segment_rho_I * 0.0002544768 ; t343 =
X [ 76UL ] * intrm_sf_mf_84 * 160.0 / ( t346 == 0.0 ? 1.0E-16 : t346 ) ;
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B =
House_thermal_network_Radiator1_Pipe_TL_segment_rho_I * 0.0002 ;
intrm_sf_mf_217 = X [ 76UL ] * intrm_sf_mf_217 * t341 / (
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B == 0.0 ? 1.0E-16
: Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B ) ; t341 = (
intrm_sf_mf_172 - 2000.0 ) / 2000.0 ; t344 = t341 * t341 * 3.0 - t341 * t341
* t341 * 2.0 ; if ( intrm_sf_mf_172 <= 2000.0 ) { t341 = t343 * 1.0E-5 ; }
else if ( intrm_sf_mf_172 >= 4000.0 ) { t341 = intrm_sf_mf_217 * 1.0E-5 ; }
else { t341 = ( ( 1.0 - t344 ) * t343 + intrm_sf_mf_217 * t344 ) * 1.0E-5 ; }
intrm_sf_mf_217 =
House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_m0 >= 0.0 ?
House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_m0 : -
House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_m0 ;
intrm_sf_mf_172 = intrm_sf_mf_217 * 0.1128 / ( t342 == 0.0 ? 1.0E-16 : t342 )
; t343 = intrm_sf_mf_172 >= 2000.0 ? intrm_sf_mf_172 : 1.0 ; t425 = pmf_log10
( 6.9 / ( t343 == 0.0 ? 1.0E-16 : t343 ) + 1.1659885434329368E-5 ) *
pmf_log10 ( 6.9 / ( t343 == 0.0 ? 1.0E-16 : t343 ) + 1.1659885434329368E-5 )
* 3.24 ; intrm_sf_mf_84 =
House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_m0 *
intrm_sf_mf_84 * 160.0 / ( t346 == 0.0 ? 1.0E-16 : t346 ) ; intrm_sf_mf_217 =
House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_m0 *
intrm_sf_mf_217 * ( 1.0 / ( t425 == 0.0 ? 1.0E-16 : t425 ) * 2.5 / 0.1128 ) /
( Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B == 0.0 ?
1.0E-16 : Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B ) ;
t343 = ( intrm_sf_mf_172 - 2000.0 ) / 2000.0 ; t344 = t343 * t343 * 3.0 -
t343 * t343 * t343 * 2.0 ; if ( intrm_sf_mf_172 <= 2000.0 ) { t343 =
intrm_sf_mf_84 * 1.0E-5 ; } else if ( intrm_sf_mf_172 >= 4000.0 ) { t343 =
intrm_sf_mf_217 * 1.0E-5 ; } else { t343 = ( ( 1.0 - t344 ) * intrm_sf_mf_84
+ intrm_sf_mf_217 * t344 ) * 1.0E-5 ; } intrm_sf_mf_84 = X [ 77UL ] >= 0.0 ?
X [ 77UL ] : - X [ 77UL ] ; t425 = intrm_sf_mf_268 * 0.01 ; intrm_sf_mf_217 =
intrm_sf_mf_84 * 0.1128 / ( t425 == 0.0 ? 1.0E-16 : t425 ) ; intrm_sf_mf_172
= intrm_sf_mf_217 >= 2000.0 ? intrm_sf_mf_217 : 1.0 ;
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B = pmf_log10 (
6.9 / ( intrm_sf_mf_172 == 0.0 ? 1.0E-16 : intrm_sf_mf_172 ) +
1.1659885434329368E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_172 == 0.0 ?
1.0E-16 : intrm_sf_mf_172 ) + 1.1659885434329368E-5 ) * 3.24 ; t418 =
House_thermal_network_Radiator2_Pipe_TL_segment_rho_I * 0.0002544768 ; t344 =
X [ 77UL ] * intrm_sf_mf_268 * 160.0 / ( t418 == 0.0 ? 1.0E-16 : t418 ) ;
t420 = House_thermal_network_Radiator2_Pipe_TL_segment_rho_I * 0.0002 ;
intrm_sf_mf_84 = X [ 77UL ] * intrm_sf_mf_84 * ( 1.0 / (
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B == 0.0 ? 1.0E-16
: Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B ) * 2.5 /
0.1128 ) / ( t420 == 0.0 ? 1.0E-16 : t420 ) ; intrm_sf_mf_172 = (
intrm_sf_mf_217 - 2000.0 ) / 2000.0 ; t342 = intrm_sf_mf_172 *
intrm_sf_mf_172 * 3.0 - intrm_sf_mf_172 * intrm_sf_mf_172 * intrm_sf_mf_172 *
2.0 ; if ( intrm_sf_mf_217 <= 2000.0 ) { intrm_sf_mf_172 = t344 * 1.0E-5 ; }
else if ( intrm_sf_mf_217 >= 4000.0 ) { intrm_sf_mf_172 = intrm_sf_mf_84 *
1.0E-5 ; } else { intrm_sf_mf_172 = ( ( 1.0 - t342 ) * t344 + intrm_sf_mf_84
* t342 ) * 1.0E-5 ; } intrm_sf_mf_84 = X [ 85UL ] >= 0.0 ? X [ 85UL ] : - X [
85UL ] ; intrm_sf_mf_217 = intrm_sf_mf_84 * 0.1128 / ( t425 == 0.0 ? 1.0E-16
: t425 ) ; t344 = intrm_sf_mf_217 >= 2000.0 ? intrm_sf_mf_217 : 1.0 ;
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B = pmf_log10 (
6.9 / ( t344 == 0.0 ? 1.0E-16 : t344 ) + 1.1659885434329368E-5 ) * pmf_log10
( 6.9 / ( t344 == 0.0 ? 1.0E-16 : t344 ) + 1.1659885434329368E-5 ) * 3.24 ;
intrm_sf_mf_268 = X [ 85UL ] * intrm_sf_mf_268 * 160.0 / ( t418 == 0.0 ?
1.0E-16 : t418 ) ; intrm_sf_mf_84 = X [ 85UL ] * intrm_sf_mf_84 * ( 1.0 / (
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B == 0.0 ? 1.0E-16
: Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B ) * 2.5 /
0.1128 ) / ( t420 == 0.0 ? 1.0E-16 : t420 ) ; t344 = ( intrm_sf_mf_217 -
2000.0 ) / 2000.0 ; t342 = t344 * t344 * 3.0 - t344 * t344 * t344 * 2.0 ; if
( intrm_sf_mf_217 <= 2000.0 ) { t344 = intrm_sf_mf_268 * 1.0E-5 ; } else if (
intrm_sf_mf_217 >= 4000.0 ) { t344 = intrm_sf_mf_84 * 1.0E-5 ; } else { t344
= ( ( 1.0 - t342 ) * intrm_sf_mf_268 + intrm_sf_mf_84 * t342 ) * 1.0E-5 ; }
intrm_sf_mf_84 = X [ 78UL ] >= 0.0 ? X [ 78UL ] : - X [ 78UL ] ; t425 =
intrm_sf_mf_266 * 0.01 ; intrm_sf_mf_268 = intrm_sf_mf_84 * 0.1128 / ( t425
== 0.0 ? 1.0E-16 : t425 ) ; intrm_sf_mf_217 = intrm_sf_mf_268 >= 2000.0 ?
intrm_sf_mf_268 : 1.0 ;
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B = pmf_log10 (
6.9 / ( intrm_sf_mf_217 == 0.0 ? 1.0E-16 : intrm_sf_mf_217 ) +
1.1659885434329368E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_217 == 0.0 ?
1.0E-16 : intrm_sf_mf_217 ) + 1.1659885434329368E-5 ) * 3.24 ; t418 =
House_thermal_network_Radiator3_Pipe_TL_segment_rho_I * 0.0002544768 ; t342 =
X [ 78UL ] * intrm_sf_mf_266 * 160.0 / ( t418 == 0.0 ? 1.0E-16 : t418 ) ;
t420 = House_thermal_network_Radiator3_Pipe_TL_segment_rho_I * 0.0002 ;
intrm_sf_mf_84 = X [ 78UL ] * intrm_sf_mf_84 * ( 1.0 / (
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B == 0.0 ? 1.0E-16
: Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B ) * 2.5 /
0.1128 ) / ( t420 == 0.0 ? 1.0E-16 : t420 ) ; intrm_sf_mf_217 = (
intrm_sf_mf_268 - 2000.0 ) / 2000.0 ; t345 = intrm_sf_mf_217 *
intrm_sf_mf_217 * 3.0 - intrm_sf_mf_217 * intrm_sf_mf_217 * intrm_sf_mf_217 *
2.0 ; if ( intrm_sf_mf_268 <= 2000.0 ) { intrm_sf_mf_217 = t342 * 1.0E-5 ; }
else if ( intrm_sf_mf_268 >= 4000.0 ) { intrm_sf_mf_217 = intrm_sf_mf_84 *
1.0E-5 ; } else { intrm_sf_mf_217 = ( ( 1.0 - t345 ) * t342 + intrm_sf_mf_84
* t345 ) * 1.0E-5 ; } intrm_sf_mf_84 = X [ 86UL ] >= 0.0 ? X [ 86UL ] : - X [
86UL ] ; intrm_sf_mf_268 = intrm_sf_mf_84 * 0.1128 / ( t425 == 0.0 ? 1.0E-16
: t425 ) ; t342 = intrm_sf_mf_268 >= 2000.0 ? intrm_sf_mf_268 : 1.0 ;
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B = pmf_log10 (
6.9 / ( t342 == 0.0 ? 1.0E-16 : t342 ) + 1.1659885434329368E-5 ) * pmf_log10
( 6.9 / ( t342 == 0.0 ? 1.0E-16 : t342 ) + 1.1659885434329368E-5 ) * 3.24 ;
intrm_sf_mf_266 = X [ 86UL ] * intrm_sf_mf_266 * 160.0 / ( t418 == 0.0 ?
1.0E-16 : t418 ) ; intrm_sf_mf_84 = X [ 86UL ] * intrm_sf_mf_84 * ( 1.0 / (
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B == 0.0 ? 1.0E-16
: Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B ) * 2.5 /
0.1128 ) / ( t420 == 0.0 ? 1.0E-16 : t420 ) ; t342 = ( intrm_sf_mf_268 -
2000.0 ) / 2000.0 ; t345 = t342 * t342 * 3.0 - t342 * t342 * t342 * 2.0 ; if
( intrm_sf_mf_268 <= 2000.0 ) { t342 = intrm_sf_mf_266 * 1.0E-5 ; } else if (
intrm_sf_mf_268 >= 4000.0 ) { t342 = intrm_sf_mf_84 * 1.0E-5 ; } else { t342
= ( ( 1.0 - t345 ) * intrm_sf_mf_266 + intrm_sf_mf_84 * t345 ) * 1.0E-5 ; }
intrm_sf_mf_84 = X [ 79UL ] >= 0.0 ? X [ 79UL ] : - X [ 79UL ] ; t425 =
intrm_sf_mf_78 * 0.01 ; intrm_sf_mf_268 = intrm_sf_mf_84 * 0.1128 / ( t425 ==
0.0 ? 1.0E-16 : t425 ) ; intrm_sf_mf_266 = intrm_sf_mf_268 >= 2000.0 ?
intrm_sf_mf_268 : 1.0 ;
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B = pmf_log10 (
6.9 / ( intrm_sf_mf_266 == 0.0 ? 1.0E-16 : intrm_sf_mf_266 ) +
1.1659885434329368E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_266 == 0.0 ?
1.0E-16 : intrm_sf_mf_266 ) + 1.1659885434329368E-5 ) * 3.24 ; t418 =
House_thermal_network_Radiator4_Pipe_TL_segment_rho_I * 0.0002544768 ; t345 =
X [ 79UL ] * intrm_sf_mf_78 * 160.0 / ( t418 == 0.0 ? 1.0E-16 : t418 ) ; t420
= House_thermal_network_Radiator4_Pipe_TL_segment_rho_I * 0.0002 ;
intrm_sf_mf_84 = X [ 79UL ] * intrm_sf_mf_84 * ( 1.0 / (
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B == 0.0 ? 1.0E-16
: Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B ) * 2.5 /
0.1128 ) / ( t420 == 0.0 ? 1.0E-16 : t420 ) ; intrm_sf_mf_266 = (
intrm_sf_mf_268 - 2000.0 ) / 2000.0 ; t346 = intrm_sf_mf_266 *
intrm_sf_mf_266 * 3.0 - intrm_sf_mf_266 * intrm_sf_mf_266 * intrm_sf_mf_266 *
2.0 ; if ( intrm_sf_mf_268 <= 2000.0 ) { intrm_sf_mf_266 = t345 * 1.0E-5 ; }
else if ( intrm_sf_mf_268 >= 4000.0 ) { intrm_sf_mf_266 = intrm_sf_mf_84 *
1.0E-5 ; } else { intrm_sf_mf_266 = ( ( 1.0 - t346 ) * t345 + intrm_sf_mf_84
* t346 ) * 1.0E-5 ; } intrm_sf_mf_84 = X [ 87UL ] >= 0.0 ? X [ 87UL ] : - X [
87UL ] ; intrm_sf_mf_268 = intrm_sf_mf_84 * 0.1128 / ( t425 == 0.0 ? 1.0E-16
: t425 ) ; t345 = intrm_sf_mf_268 >= 2000.0 ? intrm_sf_mf_268 : 1.0 ;
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B = pmf_log10 (
6.9 / ( t345 == 0.0 ? 1.0E-16 : t345 ) + 1.1659885434329368E-5 ) * pmf_log10
( 6.9 / ( t345 == 0.0 ? 1.0E-16 : t345 ) + 1.1659885434329368E-5 ) * 3.24 ;
intrm_sf_mf_78 = X [ 87UL ] * intrm_sf_mf_78 * 160.0 / ( t418 == 0.0 ?
1.0E-16 : t418 ) ; intrm_sf_mf_84 = X [ 87UL ] * intrm_sf_mf_84 * ( 1.0 / (
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B == 0.0 ? 1.0E-16
: Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B ) * 2.5 /
0.1128 ) / ( t420 == 0.0 ? 1.0E-16 : t420 ) ; t345 = ( intrm_sf_mf_268 -
2000.0 ) / 2000.0 ; t346 = t345 * t345 * 3.0 - t345 * t345 * t345 * 2.0 ; if
( intrm_sf_mf_268 <= 2000.0 ) { t345 = intrm_sf_mf_78 * 1.0E-5 ; } else if (
intrm_sf_mf_268 >= 4000.0 ) { t345 = intrm_sf_mf_84 * 1.0E-5 ; } else { t345
= ( ( 1.0 - t346 ) * intrm_sf_mf_78 + intrm_sf_mf_84 * t346 ) * 1.0E-5 ; }
intrm_sf_mf_84 = X [ 49UL ] >= 0.0 ? X [ 49UL ] : - X [ 49UL ] ; t425 = t321
* 0.01 ; intrm_sf_mf_268 = intrm_sf_mf_84 * 0.1128 / ( t425 == 0.0 ? 1.0E-16
: t425 ) ; intrm_sf_mf_78 = intrm_sf_mf_268 >= 2000.0 ? intrm_sf_mf_268 : 1.0
; Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B = pmf_log10 (
6.9 / ( intrm_sf_mf_78 == 0.0 ? 1.0E-16 : intrm_sf_mf_78 ) +
1.1659885434329368E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_78 == 0.0 ? 1.0E-16
: intrm_sf_mf_78 ) + 1.1659885434329368E-5 ) * 3.24 ; t418 =
Heater_Pipe_TL_segment_rho_I * 0.0002544768 ; t346 = X [ 49UL ] * t321 *
992.0 / ( t418 == 0.0 ? 1.0E-16 : t418 ) ; t420 =
Heater_Pipe_TL_segment_rho_I * 0.0002 ; intrm_sf_mf_84 = X [ 49UL ] *
intrm_sf_mf_84 * ( 1.0 / (
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B == 0.0 ? 1.0E-16
: Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B ) * 15.5 /
0.1128 ) / ( t420 == 0.0 ? 1.0E-16 : t420 ) ; intrm_sf_mf_78 = (
intrm_sf_mf_268 - 2000.0 ) / 2000.0 ;
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B = intrm_sf_mf_78
* intrm_sf_mf_78 * 3.0 - intrm_sf_mf_78 * intrm_sf_mf_78 * intrm_sf_mf_78 *
2.0 ; if ( intrm_sf_mf_268 <= 2000.0 ) { intrm_sf_mf_78 = t346 * 1.0E-5 ; }
else if ( intrm_sf_mf_268 >= 4000.0 ) { intrm_sf_mf_78 = intrm_sf_mf_84 *
1.0E-5 ; } else { intrm_sf_mf_78 = ( ( 1.0 -
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B ) * t346 +
intrm_sf_mf_84 * Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B
) * 1.0E-5 ; } intrm_sf_mf_84 = t320 >= 0.0 ? t320 : - t320 ; intrm_sf_mf_268
= intrm_sf_mf_84 * 0.1128 / ( t425 == 0.0 ? 1.0E-16 : t425 ) ; t346 =
intrm_sf_mf_268 >= 2000.0 ? intrm_sf_mf_268 : 1.0 ;
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B = pmf_log10 (
6.9 / ( t346 == 0.0 ? 1.0E-16 : t346 ) + 1.1659885434329368E-5 ) * pmf_log10
( 6.9 / ( t346 == 0.0 ? 1.0E-16 : t346 ) + 1.1659885434329368E-5 ) * 3.24 ;
t321 = t320 * t321 * 992.0 / ( t418 == 0.0 ? 1.0E-16 : t418 ) ;
intrm_sf_mf_84 = t320 * intrm_sf_mf_84 * ( 1.0 / (
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B == 0.0 ? 1.0E-16
: Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B ) * 15.5 /
0.1128 ) / ( t420 == 0.0 ? 1.0E-16 : t420 ) ; t346 = ( intrm_sf_mf_268 -
2000.0 ) / 2000.0 ;
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B = t346 * t346 *
3.0 - t346 * t346 * t346 * 2.0 ; if ( intrm_sf_mf_268 <= 2000.0 ) { t346 =
t321 * 1.0E-5 ; } else if ( intrm_sf_mf_268 >= 4000.0 ) { t346 =
intrm_sf_mf_84 * 1.0E-5 ; } else { t346 = ( ( 1.0 -
Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B ) * t321 +
intrm_sf_mf_84 * Heater_Boiler_E_NTU_Heat_Exchanger_TL_thermal_liquid_1_Phi_B
) * 1.0E-5 ; } t268 [ 0UL ] = Heater_Angular_Velocity_Source_R_w ; t268 [ 1UL
] = Heater_Angular_Velocity_Source_R_w ; t268 [ 2UL ] = X [ 34UL ] ; t268 [
3UL ] = Heater_Angular_Velocity_Source_R_w ; t268 [ 4UL ] = X [ 35UL ] ; t268
[ 5UL ] = X [ 36UL ] * 0.1 ; t268 [ 6UL ] = X [ 37UL ] ; t268 [ 7UL ] = X [
3UL ] * 0.1 ; t268 [ 8UL ] = X [ 38UL ] ; t268 [ 9UL ] = X [ 39UL ] ; t268 [
10UL ] = X [ 40UL ] ; t268 [ 11UL ] = X [ 38UL ] ; t268 [ 12UL ] =
Heater_Boiler_E_NTU_Heat_Exchanger_TL_heat_transfer_CR ; t268 [ 13UL ] = t302
; t268 [ 14UL ] = X [ 39UL ] ; t268 [ 15UL ] =
Heater_Boiler_E_NTU_Heat_Exchanger_TL_heat_transfer_NTU ; t268 [ 16UL ] = X [
43UL ] ; t268 [ 17UL ] = t301 ; t268 [ 18UL ] = X [ 35UL ] ; t268 [ 19UL ] =
X [ 36UL ] * 0.1 ; t268 [ 20UL ] = X [ 37UL ] ; t268 [ 21UL ] = X [ 3UL ] *
0.1 ; t268 [ 22UL ] = X [ 44UL ] ; t268 [ 23UL ] = - X [ 45UL ] - X [ 46UL ]
; t268 [ 24UL ] = X [ 41UL ] ; t268 [ 25UL ] = X [ 42UL ] ; t268 [ 26UL ] = X
[ 0UL ] ; t268 [ 27UL ] = X [ 47UL ] ; t268 [ 28UL ] = - X [ 48UL ] - X [
49UL ] ; t268 [ 29UL ] = X [ 1UL ] * 0.1 ; t268 [ 30UL ] = X [ 50UL ] ; t268
[ 31UL ] = X [ 51UL ] ; t268 [ 32UL ] = X [ 52UL ] ; t268 [ 33UL ] = X [ 53UL
] ; t268 [ 34UL ] = X [ 54UL ] ; t268 [ 35UL ] = X [ 40UL ] ; t268 [ 36UL ] =
t302 ; t268 [ 37UL ] = - X [ 43UL ] ; t268 [ 38UL ] = t304 ; t268 [ 39UL ] =
X [ 38UL ] ; t268 [ 40UL ] = X [ 39UL ] ; t268 [ 41UL ] = U_idx_1 ; t268 [
42UL ] = X [ 43UL ] * 1000.0 ; t268 [ 43UL ] = X [ 39UL ] ; t268 [ 44UL ] = X
[ 55UL ] ; t268 [ 45UL ] = X [ 56UL ] ; t268 [ 46UL ] = X [ 35UL ] ; t268 [
47UL ] = X [ 36UL ] * 0.1 ; t268 [ 48UL ] = X [ 37UL ] ; t268 [ 49UL ] = X [
3UL ] * 0.1 ; t268 [ 50UL ] = U_idx_1 ; t268 [ 51UL ] = X [ 57UL ] ; t268 [
52UL ] = X [ 58UL ] * 0.1 ; t268 [ 53UL ] = X [ 35UL ] ; t268 [ 54UL ] = X [
36UL ] * 0.1 ; t268 [ 55UL ] = t305 ; t268 [ 56UL ] = - X [ 44UL ] ; t268 [
57UL ] = Heater_Angular_Velocity_Source_R_w ; t268 [ 58UL ] = X [ 57UL ] ;
t268 [ 59UL ] = X [ 58UL ] * 0.1 ; t268 [ 60UL ] = t305 ; t268 [ 61UL ] = X [
63UL ] ; t268 [ 62UL ] = X [ 47UL ] ; t268 [ 63UL ] = X [ 64UL ] ; t268 [
64UL ] = X [ 35UL ] ; t268 [ 65UL ] = X [ 36UL ] * 0.1 ; t268 [ 66UL ] = - X
[ 44UL ] ; t268 [ 67UL ] = X [ 65UL ] ; t268 [ 68UL ] = - X [ 47UL ] ; t268 [
69UL ] = X [ 64UL ] ; t268 [ 70UL ] = t309 * 0.1 ; t268 [ 71UL ] =
Heater_Angular_Velocity_Source_R_w * 9.5492965855137211 ; t268 [ 72UL ] = - X
[ 34UL ] ; t268 [ 73UL ] = t310 ; t268 [ 74UL ] = X [ 47UL ] ; t268 [ 75UL ]
= t306 ; t268 [ 76UL ] = t307 ; t268 [ 77UL ] = t311 * 100.0 ; t268 [ 78UL ]
= - X [ 47UL ] ; t268 [ 79UL ] = t309 * 2.1599999999999993E-12 / (
Heater_Fixed_Displacement_Pump_TL_mechanical_power == 0.0 ? 1.0E-16 :
Heater_Fixed_Displacement_Pump_TL_mechanical_power ) * 100000.0 ; t268 [ 80UL
] = - ( X [ 34UL ] * Heater_Angular_Velocity_Source_R_w ) * 0.001 ; t268 [
81UL ] = X [ 47UL ] / ( t306 == 0.0 ? 1.0E-16 : t306 ) ; t268 [ 82UL ] = - X
[ 47UL ] / ( t307 == 0.0 ? 1.0E-16 : t307 ) ; t268 [ 83UL ] = X [ 37UL ] ;
t268 [ 84UL ] = X [ 3UL ] * 0.1 ; t268 [ 85UL ] = X [ 2UL ] ; t268 [ 86UL ] =
X [ 45UL ] ; t268 [ 87UL ] = X [ 2UL ] ; t268 [ 88UL ] = X [ 3UL ] * 0.1 ;
t268 [ 89UL ] = X [ 68UL ] * 0.001 ; t268 [ 90UL ] = X [ 48UL ] ; t268 [ 91UL
] = t315 ; t268 [ 92UL ] = X [ 37UL ] ; t268 [ 93UL ] = X [ 3UL ] * 0.1 ;
t268 [ 94UL ] = X [ 45UL ] ; t268 [ 95UL ] = X [ 66UL ] ; t268 [ 96UL ] = X [
48UL ] ; t268 [ 97UL ] = X [ 67UL ] ; t268 [ 98UL ] = t316 ; t268 [ 99UL ] =
t317 ; t268 [ 100UL ] = X [ 68UL ] * t315 * 0.001 ; t268 [ 101UL ] = X [ 2UL
] ; t268 [ 102UL ] = X [ 2UL ] ; t268 [ 103UL ] = X [ 69UL ] ; t268 [ 104UL ]
= X [ 69UL ] ; t268 [ 105UL ] = X [ 37UL ] ; t268 [ 106UL ] = X [ 3UL ] * 0.1
; t268 [ 107UL ] = X [ 70UL ] ; t268 [ 108UL ] = X [ 71UL ] * 0.1 ; t268 [
109UL ] = X [ 69UL ] ; t268 [ 110UL ] = X [ 37UL ] ; t268 [ 111UL ] = X [ 3UL
] * 0.1 ; t268 [ 112UL ] = X [ 70UL ] ; t268 [ 113UL ] = X [ 71UL ] * 0.1 ;
t268 [ 114UL ] = X [ 4UL ] * 0.1 ; t268 [ 115UL ] = X [ 69UL ] ; t268 [ 116UL
] = X [ 46UL ] ; t268 [ 117UL ] = t319 ; t268 [ 118UL ] = X [ 5UL ] ; t268 [
119UL ] = X [ 49UL ] ; t268 [ 120UL ] = t320 ; t268 [ 121UL ] = X [ 37UL ] ;
t268 [ 122UL ] = X [ 3UL ] * 0.1 ; t268 [ 123UL ] = X [ 46UL ] ; t268 [ 124UL
] = X [ 80UL ] ; t268 [ 125UL ] = X [ 49UL ] ; t268 [ 126UL ] = X [ 81UL ] ;
t268 [ 127UL ] = X [ 70UL ] ; t268 [ 128UL ] = X [ 71UL ] * 0.1 ; t268 [
129UL ] = t319 ; t268 [ 130UL ] = X [ 82UL ] ; t268 [ 131UL ] = t320 ; t268 [
132UL ] = X [ 83UL ] ; t268 [ 133UL ] = Heater_Pipe_TL_segment_rho_I ; t268 [
134UL ] = Heater_Pipe_TL_segment_u_I ; t268 [ 135UL ] =
Heater_Pipe_TL_segment_h_I ; t268 [ 136UL ] = intrm_sf_mf_78 * 0.1 ; t268 [
137UL ] = t346 * 0.1 ; t268 [ 138UL ] = t322 ; t268 [ 139UL ] = X [ 49UL ] /
( t322 == 0.0 ? 1.0E-16 : t322 ) ; t268 [ 140UL ] = t323 ; t268 [ 141UL ] =
t320 / ( t323 == 0.0 ? 1.0E-16 : t323 ) ; t268 [ 142UL ] = U_idx_0 ; t268 [
143UL ] = X [ 70UL ] ; t268 [ 144UL ] = X [ 71UL ] * 0.1 ; t268 [ 145UL ] = X
[ 57UL ] ; t268 [ 146UL ] = X [ 58UL ] * 0.1 ; t268 [ 147UL ] = X [ 70UL ] ;
t268 [ 148UL ] = X [ 71UL ] * 0.1 ; t268 [ 149UL ] = X [ 57UL ] ; t268 [
150UL ] = X [ 58UL ] * 0.1 ; t268 [ 151UL ] = X [ 7UL ] ; t268 [ 152UL ] = X
[ 6UL ] ; t268 [ 153UL ] = X [ 7UL ] ; t268 [ 154UL ] =
House_thermal_network_Radiator1_Convective_Heat_Transfer_Q * 1000.0 ; t268 [
155UL ] = House_thermal_network_Radiator1_Convective_Heat_Transfer_Q * 2.0 ;
t268 [ 156UL ] = X [ 70UL ] ; t268 [ 157UL ] = X [ 71UL ] * 0.1 ; t268 [
158UL ] = X [ 57UL ] ; t268 [ 159UL ] = X [ 58UL ] * 0.1 ; t268 [ 160UL ] = X
[ 70UL ] ; t268 [ 161UL ] = X [ 71UL ] * 0.1 ; t268 [ 162UL ] = X [ 57UL ] ;
t268 [ 163UL ] = X [ 58UL ] * 0.1 ; t268 [ 164UL ] = X [ 6UL ] ; t268 [ 165UL
] = X [ 70UL ] ; t268 [ 166UL ] = X [ 71UL ] * 0.1 ; t268 [ 167UL ] = X [
57UL ] ; t268 [ 168UL ] = X [ 58UL ] * 0.1 ; t268 [ 169UL ] = X [ 8UL ] * 0.1
; t268 [ 170UL ] = X [ 6UL ] ; t268 [ 171UL ] = X [ 72UL ] ; t268 [ 172UL ] =
X [ 59UL ] ; t268 [ 173UL ] = X [ 9UL ] ; t268 [ 174UL ] = X [ 76UL ] ; t268
[ 175UL ] = House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_m0 ;
t268 [ 176UL ] = X [ 84UL ] ; t268 [ 177UL ] = X [ 70UL ] ; t268 [ 178UL ] =
X [ 71UL ] * 0.1 ; t268 [ 179UL ] = X [ 72UL ] ; t268 [ 180UL ] = X [ 88UL ]
; t268 [ 181UL ] = X [ 76UL ] ; t268 [ 182UL ] = X [ 89UL ] ; t268 [ 183UL ]
= X [ 57UL ] ; t268 [ 184UL ] = X [ 58UL ] * 0.1 ; t268 [ 185UL ] = X [ 59UL
] ; t268 [ 186UL ] = X [ 90UL ] ; t268 [ 187UL ] =
House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_m0 ; t268 [
188UL ] = X [ 91UL ] ; t268 [ 189UL ] =
House_thermal_network_Radiator1_Pipe_TL_segment_rho_I ; t268 [ 190UL ] =
House_thermal_network_Radiator1_Pipe_TL_segment_u_I ; t268 [ 191UL ] =
House_thermal_network_Radiator1_Pipe_TL_segment_h_I ; t268 [ 192UL ] = t341 *
0.1 ; t268 [ 193UL ] = t343 * 0.1 ; t268 [ 194UL ] =
House_thermal_network_Radiator1_Pipe_TL_segment_convection_A_rh ; t268 [
195UL ] = X [ 76UL ] / (
House_thermal_network_Radiator1_Pipe_TL_segment_convection_A_rh == 0.0 ?
1.0E-16 : House_thermal_network_Radiator1_Pipe_TL_segment_convection_A_rh ) ;
t268 [ 196UL ] =
House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_rh ; t268 [
197UL ] = House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_m0 / (
House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_rh == 0.0 ?
1.0E-16 : House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_rh ) ;
t268 [ 198UL ] = X [ 6UL ] ; t268 [ 199UL ] = X [ 6UL ] ; t268 [ 200UL ] = (
( X [ 6UL ] * - 0.5 + X [ 7UL ] * 0.5 ) - X [ 84UL ] ) * 1000.0 ; t268 [
201UL ] = X [ 6UL ] - 273.15 ; t268 [ 202UL ] = X [ 11UL ] ; t268 [ 203UL ] =
X [ 10UL ] ; t268 [ 204UL ] = X [ 11UL ] ; t268 [ 205UL ] =
House_thermal_network_Radiator2_Convective_Heat_Transfer_Q * 1000.0 ; t268 [
206UL ] = House_thermal_network_Radiator2_Convective_Heat_Transfer_Q * 2.0 ;
t268 [ 207UL ] = X [ 70UL ] ; t268 [ 208UL ] = X [ 71UL ] * 0.1 ; t268 [
209UL ] = X [ 57UL ] ; t268 [ 210UL ] = X [ 58UL ] * 0.1 ; t268 [ 211UL ] = X
[ 70UL ] ; t268 [ 212UL ] = X [ 71UL ] * 0.1 ; t268 [ 213UL ] = X [ 57UL ] ;
t268 [ 214UL ] = X [ 58UL ] * 0.1 ; t268 [ 215UL ] = X [ 10UL ] ; t268 [
216UL ] = X [ 70UL ] ; t268 [ 217UL ] = X [ 71UL ] * 0.1 ; t268 [ 218UL ] = X
[ 57UL ] ; t268 [ 219UL ] = X [ 58UL ] * 0.1 ; t268 [ 220UL ] = X [ 12UL ] *
0.1 ; t268 [ 221UL ] = X [ 10UL ] ; t268 [ 222UL ] = X [ 73UL ] ; t268 [
223UL ] = X [ 60UL ] ; t268 [ 224UL ] = X [ 13UL ] ; t268 [ 225UL ] = X [
77UL ] ; t268 [ 226UL ] = X [ 85UL ] ; t268 [ 227UL ] = X [ 92UL ] ; t268 [
228UL ] = X [ 70UL ] ; t268 [ 229UL ] = X [ 71UL ] * 0.1 ; t268 [ 230UL ] = X
[ 73UL ] ; t268 [ 231UL ] = X [ 93UL ] ; t268 [ 232UL ] = X [ 77UL ] ; t268 [
233UL ] = X [ 94UL ] ; t268 [ 234UL ] = X [ 57UL ] ; t268 [ 235UL ] = X [
58UL ] * 0.1 ; t268 [ 236UL ] = X [ 60UL ] ; t268 [ 237UL ] = X [ 95UL ] ;
t268 [ 238UL ] = X [ 85UL ] ; t268 [ 239UL ] = X [ 96UL ] ; t268 [ 240UL ] =
House_thermal_network_Radiator2_Pipe_TL_segment_rho_I ; t268 [ 241UL ] =
House_thermal_network_Radiator2_Pipe_TL_segment_u_I ; t268 [ 242UL ] =
House_thermal_network_Radiator2_Pipe_TL_segment_h_I ; t268 [ 243UL ] =
intrm_sf_mf_172 * 0.1 ; t268 [ 244UL ] = t344 * 0.1 ; t268 [ 245UL ] =
House_thermal_network_Radiator2_Pipe_TL_segment_convection_A_rh ; t268 [
246UL ] = X [ 77UL ] / (
House_thermal_network_Radiator2_Pipe_TL_segment_convection_A_rh == 0.0 ?
1.0E-16 : House_thermal_network_Radiator2_Pipe_TL_segment_convection_A_rh ) ;
t268 [ 247UL ] =
House_thermal_network_Radiator2_Pipe_TL_segment_convection_B_rh ; t268 [
248UL ] = X [ 85UL ] / (
House_thermal_network_Radiator2_Pipe_TL_segment_convection_B_rh == 0.0 ?
1.0E-16 : House_thermal_network_Radiator2_Pipe_TL_segment_convection_B_rh ) ;
t268 [ 249UL ] = X [ 10UL ] ; t268 [ 250UL ] = X [ 10UL ] ; t268 [ 251UL ] =
( ( X [ 10UL ] * - 0.5 + X [ 11UL ] * 0.5 ) - X [ 92UL ] ) * 1000.0 ; t268 [
252UL ] = X [ 10UL ] - 273.15 ; t268 [ 253UL ] = X [ 15UL ] ; t268 [ 254UL ]
= X [ 14UL ] ; t268 [ 255UL ] = X [ 15UL ] ; t268 [ 256UL ] =
House_thermal_network_Radiator3_Convective_Heat_Transfer_Q * 1000.0 ; t268 [
257UL ] = House_thermal_network_Radiator3_Convective_Heat_Transfer_Q * 2.0 ;
t268 [ 258UL ] = X [ 70UL ] ; t268 [ 259UL ] = X [ 71UL ] * 0.1 ; t268 [
260UL ] = X [ 57UL ] ; t268 [ 261UL ] = X [ 58UL ] * 0.1 ; t268 [ 262UL ] = X
[ 70UL ] ; t268 [ 263UL ] = X [ 71UL ] * 0.1 ; t268 [ 264UL ] = X [ 57UL ] ;
t268 [ 265UL ] = X [ 58UL ] * 0.1 ; t268 [ 266UL ] = X [ 14UL ] ; t268 [
267UL ] = X [ 70UL ] ; t268 [ 268UL ] = X [ 71UL ] * 0.1 ; t268 [ 269UL ] = X
[ 57UL ] ; t268 [ 270UL ] = X [ 58UL ] * 0.1 ; t268 [ 271UL ] = X [ 16UL ] *
0.1 ; t268 [ 272UL ] = X [ 14UL ] ; t268 [ 273UL ] = X [ 74UL ] ; t268 [
274UL ] = X [ 61UL ] ; t268 [ 275UL ] = X [ 17UL ] ; t268 [ 276UL ] = X [
78UL ] ; t268 [ 277UL ] = X [ 86UL ] ; t268 [ 278UL ] = X [ 97UL ] ; t268 [
279UL ] = X [ 70UL ] ; t268 [ 280UL ] = X [ 71UL ] * 0.1 ; t268 [ 281UL ] = X
[ 74UL ] ; t268 [ 282UL ] = X [ 98UL ] ; t268 [ 283UL ] = X [ 78UL ] ; t268 [
284UL ] = X [ 99UL ] ; t268 [ 285UL ] = X [ 57UL ] ; t268 [ 286UL ] = X [
58UL ] * 0.1 ; t268 [ 287UL ] = X [ 61UL ] ; t268 [ 288UL ] = X [ 100UL ] ;
t268 [ 289UL ] = X [ 86UL ] ; t268 [ 290UL ] = X [ 101UL ] ; t268 [ 291UL ] =
House_thermal_network_Radiator3_Pipe_TL_segment_rho_I ; t268 [ 292UL ] =
House_thermal_network_Radiator3_Pipe_TL_segment_u_I ; t268 [ 293UL ] =
House_thermal_network_Radiator3_Pipe_TL_segment_h_I ; t268 [ 294UL ] =
intrm_sf_mf_217 * 0.1 ; t268 [ 295UL ] = t342 * 0.1 ; t268 [ 296UL ] =
House_thermal_network_Radiator3_Pipe_TL_segment_convection_A_rh ; t268 [
297UL ] = X [ 78UL ] / (
House_thermal_network_Radiator3_Pipe_TL_segment_convection_A_rh == 0.0 ?
1.0E-16 : House_thermal_network_Radiator3_Pipe_TL_segment_convection_A_rh ) ;
t268 [ 298UL ] =
House_thermal_network_Radiator3_Pipe_TL_segment_convection_B_rh ; t268 [
299UL ] = X [ 86UL ] / (
House_thermal_network_Radiator3_Pipe_TL_segment_convection_B_rh == 0.0 ?
1.0E-16 : House_thermal_network_Radiator3_Pipe_TL_segment_convection_B_rh ) ;
t268 [ 300UL ] = X [ 14UL ] ; t268 [ 301UL ] = X [ 14UL ] ; t268 [ 302UL ] =
( ( X [ 14UL ] * - 0.5 + X [ 15UL ] * 0.5 ) - X [ 97UL ] ) * 1000.0 ; t268 [
303UL ] = X [ 14UL ] - 273.15 ; t268 [ 304UL ] = X [ 19UL ] ; t268 [ 305UL ]
= X [ 18UL ] ; t268 [ 306UL ] = X [ 19UL ] ; t268 [ 307UL ] =
House_thermal_network_Radiator4_Convective_Heat_Transfer_Q * 1000.0 ; t268 [
308UL ] = House_thermal_network_Radiator4_Convective_Heat_Transfer_Q * 2.0 ;
t268 [ 309UL ] = X [ 70UL ] ; t268 [ 310UL ] = X [ 71UL ] * 0.1 ; t268 [
311UL ] = X [ 57UL ] ; t268 [ 312UL ] = X [ 58UL ] * 0.1 ; t268 [ 313UL ] = X
[ 70UL ] ; t268 [ 314UL ] = X [ 71UL ] * 0.1 ; t268 [ 315UL ] = X [ 57UL ] ;
t268 [ 316UL ] = X [ 58UL ] * 0.1 ; t268 [ 317UL ] = X [ 18UL ] ; t268 [
318UL ] = X [ 70UL ] ; t268 [ 319UL ] = X [ 71UL ] * 0.1 ; t268 [ 320UL ] = X
[ 57UL ] ; t268 [ 321UL ] = X [ 58UL ] * 0.1 ; t268 [ 322UL ] = X [ 20UL ] *
0.1 ; t268 [ 323UL ] = X [ 18UL ] ; t268 [ 324UL ] = X [ 75UL ] ; t268 [
325UL ] = X [ 62UL ] ; t268 [ 326UL ] = X [ 21UL ] ; t268 [ 327UL ] = X [
79UL ] ; t268 [ 328UL ] = X [ 87UL ] ; t268 [ 329UL ] = X [ 102UL ] ; t268 [
330UL ] = X [ 70UL ] ; t268 [ 331UL ] = X [ 71UL ] * 0.1 ; t268 [ 332UL ] = X
[ 75UL ] ; t268 [ 333UL ] = X [ 103UL ] ; t268 [ 334UL ] = X [ 79UL ] ; t268
[ 335UL ] = X [ 104UL ] ; t268 [ 336UL ] = X [ 57UL ] ; t268 [ 337UL ] = X [
58UL ] * 0.1 ; t268 [ 338UL ] = X [ 62UL ] ; t268 [ 339UL ] = X [ 105UL ] ;
t268 [ 340UL ] = X [ 87UL ] ; t268 [ 341UL ] = X [ 106UL ] ; t268 [ 342UL ] =
House_thermal_network_Radiator4_Pipe_TL_segment_rho_I ; t268 [ 343UL ] =
House_thermal_network_Radiator4_Pipe_TL_segment_u_I ; t268 [ 344UL ] = X [
20UL ] / ( House_thermal_network_Radiator4_Pipe_TL_segment_rho_I == 0.0 ?
1.0E-16 : House_thermal_network_Radiator4_Pipe_TL_segment_rho_I ) * 100.0 +
House_thermal_network_Radiator4_Pipe_TL_segment_u_I ; t268 [ 345UL ] =
intrm_sf_mf_266 * 0.1 ; t268 [ 346UL ] = t345 * 0.1 ; t268 [ 347UL ] =
House_thermal_network_Radiator4_Pipe_TL_segment_convection_A_rh ; t268 [
348UL ] = X [ 79UL ] / (
House_thermal_network_Radiator4_Pipe_TL_segment_convection_A_rh == 0.0 ?
1.0E-16 : House_thermal_network_Radiator4_Pipe_TL_segment_convection_A_rh ) ;
t268 [ 349UL ] = t297_idx_0 ; t268 [ 350UL ] = X [ 87UL ] / ( t297_idx_0 ==
0.0 ? 1.0E-16 : t297_idx_0 ) ; t268 [ 351UL ] = X [ 18UL ] ; t268 [ 352UL ] =
X [ 18UL ] ; t268 [ 353UL ] = ( ( X [ 18UL ] * - 0.5 + X [ 19UL ] * 0.5 ) - X
[ 102UL ] ) * 1000.0 ; t268 [ 354UL ] = X [ 18UL ] - 273.15 ; t268 [ 355UL ]
= X [ 7UL ] ; t268 [ 356UL ] = X [ 107UL ] ; t268 [ 357UL ] =
House_thermal_network_Room_1_Air_roof_convection_Q * 1000.0 ; t268 [ 358UL ]
= House_thermal_network_Room_1_Air_roof_convection_Q * 1.1083325392634502 ;
t268 [ 359UL ] = X [ 7UL ] ; t268 [ 360UL ] = X [ 7UL ] ; t268 [ 361UL ] = (
( ( ( X [ 6UL ] * 0.5 + X [ 7UL ] * - 1.4772562855228961 ) + X [ 107UL ] *
0.90225628552289616 ) - X [ 108UL ] ) + X [ 109UL ] * 0.075 ) * 1000.0 ; t268
[ 362UL ] = X [ 7UL ] - 273.15 ; t268 [ 363UL ] = X [ 7UL ] ; t268 [ 364UL ]
= House_thermal_network_Room_1_Air_wall_convection_B_T ; t268 [ 365UL ] = X [
108UL ] * 1000.0 ; t268 [ 366UL ] = X [ 108UL ] * 0.43554006968641112 ; t268
[ 367UL ] = X [ 7UL ] ; t268 [ 368UL ] = X [ 109UL ] ; t268 [ 369UL ] =
House_thermal_network_Room_1_Air_window_convection_Q * 1000.0 ; t268 [ 370UL
] = House_thermal_network_Room_1_Air_window_convection_Q * 13.333333333333334
; t268 [ 371UL ] = X [ 107UL ] ; t268 [ 372UL ] = X [ 22UL ] ; t268 [ 373UL ]
= House_thermal_network_Room_1_Half_roof_air_conduction_Q * 1000.0 ; t268 [
374UL ] = House_thermal_network_Room_1_Half_roof_air_conduction_Q *
34.999974924108955 ; t268 [ 375UL ] = X [ 22UL ] ; t268 [ 376UL ] =
House_thermal_network_Room_1_Half_roof_atmosphere_conduction_B_ ; t268 [
377UL ] = House_thermal_network_Room_1_Half_roof_atmosphere_conduction_Q *
1000.0 ; t268 [ 378UL ] =
House_thermal_network_Room_1_Half_roof_atmosphere_conduction_Q *
34.999974924108955 ; t268 [ 379UL ] =
House_thermal_network_Room_1_Air_wall_convection_B_T ; t268 [ 380UL ] = X [
23UL ] ; t268 [ 381UL ] =
House_thermal_network_Room_1_Half_wall_air_conduction_Q * 1000.0 ; t268 [
382UL ] = House_thermal_network_Room_1_Half_wall_air_conduction_Q *
27.507793874931231 ; t268 [ 383UL ] = X [ 23UL ] ; t268 [ 384UL ] =
House_thermal_network_Room_1_Half_wall_atmosphere_conduction_B_ ; t268 [
385UL ] = House_thermal_network_Room_1_Half_wall_atmosphere_conduction_Q *
1000.0 ; t268 [ 386UL ] =
House_thermal_network_Room_1_Half_wall_atmosphere_conduction_Q *
27.507793874931231 ; t268 [ 387UL ] = X [ 109UL ] ; t268 [ 388UL ] = X [ 24UL
] ; t268 [ 389UL ] =
House_thermal_network_Room_1_Half_window_air_conduction_Q * 1000.0 ; t268 [
390UL ] = House_thermal_network_Room_1_Half_window_air_conduction_Q *
2.1367521367521367 ; t268 [ 391UL ] = X [ 24UL ] ; t268 [ 392UL ] = X [ 112UL
] ; t268 [ 393UL ] =
House_thermal_network_Room_1_Half_window_atmosphere_conduction_ * 1000.0 ;
t268 [ 394UL ] =
House_thermal_network_Room_1_Half_window_atmosphere_conduction_ *
2.1367521367521367 ; t268 [ 395UL ] = X [ 7UL ] ; t268 [ 396UL ] =
House_thermal_network_Room_1_Half_roof_atmosphere_conduction_B_ ; t268 [
397UL ] = U_idx_2 ; t268 [ 398UL ] =
House_thermal_network_Room_1_Half_roof_atmosphere_conduction_Q * 1000.0 ;
t268 [ 399UL ] =
House_thermal_network_Room_1_Half_roof_atmosphere_conduction_Q *
0.34999974924108951 ; t268 [ 400UL ] = X [ 107UL ] ; t268 [ 401UL ] = U_idx_2
; t268 [ 402UL ] = House_thermal_network_Room_1_Roof_atmosphere_leakage_Q *
1000.0 ; t268 [ 403UL ] =
House_thermal_network_Room_1_Roof_atmosphere_leakage_Q * 3.4999974924108948 ;
t268 [ 404UL ] = X [ 22UL ] ; t268 [ 405UL ] = X [ 22UL ] ; t268 [ 406UL ] =
X [ 110UL ] * 1000.0 ; t268 [ 407UL ] = X [ 22UL ] - 273.15 ; t268 [ 408UL ]
= U_idx_2 ; t268 [ 409UL ] = X [ 7UL ] ; t268 [ 410UL ] = X [ 7UL ] ; t268 [
411UL ] = X [ 7UL ] ; t268 [ 412UL ] = X [ 7UL ] - 273.15 ; t268 [ 413UL ] =
U_idx_2 ; t268 [ 414UL ] = ( ( ( ( ( ( ( ( ( ( X [ 7UL ] *
0.52425333333333335 + X [ 22UL ] * - 0.028571449041558377 ) + X [ 23UL ] * -
0.036353333333333335 ) + X [ 24UL ] * 0.468 ) + X [ 107UL ] *
0.31428593945714223 ) + X [ 108UL ] * - 0.22833333333333333 ) + X [ 109UL ] *
0.019200000000000002 ) + X [ 112UL ] * - 0.468 ) - X [ 110UL ] ) - X [ 111UL
] ) + U_idx_2 * - 0.79281449041558383 ) * 1000.0 ; t268 [ 415UL ] = U_idx_2 ;
t268 [ 416UL ] = U_idx_2 ; t268 [ 417UL ] =
House_thermal_network_Room_1_Half_wall_atmosphere_conduction_B_ ; t268 [
418UL ] = U_idx_2 ; t268 [ 419UL ] =
House_thermal_network_Room_1_Half_wall_atmosphere_conduction_Q * 1000.0 ;
t268 [ 420UL ] =
House_thermal_network_Room_1_Half_wall_atmosphere_conduction_Q *
0.30744004919040785 ; t268 [ 421UL ] =
House_thermal_network_Room_1_Air_wall_convection_B_T ; t268 [ 422UL ] =
U_idx_2 ; t268 [ 423UL ] =
House_thermal_network_Room_1_Wall_atmosphere_leakage_Q * 1000.0 ; t268 [
424UL ] = House_thermal_network_Room_1_Wall_atmosphere_leakage_Q *
2.0496003279360524 ; t268 [ 425UL ] = X [ 23UL ] ; t268 [ 426UL ] = X [ 23UL
] ; t268 [ 427UL ] = X [ 111UL ] * 1000.0 ; t268 [ 428UL ] = X [ 23UL ] -
273.15 ; t268 [ 429UL ] = X [ 112UL ] ; t268 [ 430UL ] = U_idx_2 ; t268 [
431UL ] = House_thermal_network_Room_1_Half_window_atmosphere_conduction_ *
1000.0 ; t268 [ 432UL ] =
House_thermal_network_Room_1_Half_window_atmosphere_conduction_ *
10.416666666666666 ; t268 [ 433UL ] = X [ 109UL ] ; t268 [ 434UL ] = U_idx_2
; t268 [ 435UL ] = House_thermal_network_Room_1_Window_atmosphere_leakage_Q *
1000.0 ; t268 [ 436UL ] =
House_thermal_network_Room_1_Window_atmosphere_leakage_Q * 52.083333333333329
; t268 [ 437UL ] = X [ 24UL ] ; t268 [ 438UL ] = X [ 24UL ] ; t268 [ 439UL ]
= ( ( X [ 24UL ] * - 0.936 + X [ 109UL ] * 0.468 ) + X [ 112UL ] * 0.468 ) *
1000.0 ; t268 [ 440UL ] = X [ 24UL ] - 273.15 ; t268 [ 441UL ] = X [ 11UL ] ;
t268 [ 442UL ] = X [ 113UL ] ; t268 [ 443UL ] =
House_thermal_network_Room_2_Air_roof_convection_Q * 1000.0 ; t268 [ 444UL ]
= House_thermal_network_Room_2_Air_roof_convection_Q * 1.1083325392634502 ;
t268 [ 445UL ] = X [ 11UL ] ; t268 [ 446UL ] = X [ 11UL ] ; t268 [ 447UL ] =
( ( ( ( X [ 10UL ] * 0.5 + X [ 11UL ] * - 1.4522562855228962 ) + X [ 113UL ]
* 0.90225628552289616 ) - X [ 114UL ] ) + X [ 115UL ] * 0.05 ) * 1000.0 ;
t268 [ 448UL ] = X [ 11UL ] - 273.15 ; t268 [ 449UL ] = X [ 11UL ] ; t268 [
450UL ] = House_thermal_network_Room_2_Air_wall_convection_B_T ; t268 [ 451UL
] = X [ 114UL ] * 1000.0 ; t268 [ 452UL ] = X [ 114UL ] * 0.5 ; t268 [ 453UL
] = X [ 11UL ] ; t268 [ 454UL ] = X [ 115UL ] ; t268 [ 455UL ] =
House_thermal_network_Room_2_Air_window_convection_Q * 1000.0 ; t268 [ 456UL
] = House_thermal_network_Room_2_Air_window_convection_Q * 20.0 ; t268 [
457UL ] = X [ 113UL ] ; t268 [ 458UL ] = X [ 25UL ] ; t268 [ 459UL ] =
House_thermal_network_Room_2_Half_roof_air_conduction_Q * 1000.0 ; t268 [
460UL ] = House_thermal_network_Room_2_Half_roof_air_conduction_Q *
34.999974924108955 ; t268 [ 461UL ] = X [ 25UL ] ; t268 [ 462UL ] =
House_thermal_network_Room_2_Half_roof_atmosphere_conduction_B_ ; t268 [
463UL ] = House_thermal_network_Room_2_Half_roof_atmosphere_conduction_Q *
1000.0 ; t268 [ 464UL ] =
House_thermal_network_Room_2_Half_roof_atmosphere_conduction_Q *
34.999974924108955 ; t268 [ 465UL ] =
House_thermal_network_Room_2_Air_wall_convection_B_T ; t268 [ 466UL ] = X [
26UL ] ; t268 [ 467UL ] =
House_thermal_network_Room_2_Half_wall_air_conduction_Q * 1000.0 ; t268 [
468UL ] = House_thermal_network_Room_2_Half_wall_air_conduction_Q *
31.578947368421058 ; t268 [ 469UL ] = X [ 26UL ] ; t268 [ 470UL ] =
House_thermal_network_Room_2_Half_wall_atmosphere_conduction_B_ ; t268 [
471UL ] = House_thermal_network_Room_2_Half_wall_atmosphere_conduction_Q *
1000.0 ; t268 [ 472UL ] =
House_thermal_network_Room_2_Half_wall_atmosphere_conduction_Q *
31.578947368421058 ; t268 [ 473UL ] = X [ 115UL ] ; t268 [ 474UL ] = X [ 27UL
] ; t268 [ 475UL ] =
House_thermal_network_Room_2_Half_window_air_conduction_Q * 1000.0 ; t268 [
476UL ] = House_thermal_network_Room_2_Half_window_air_conduction_Q *
3.2051282051282053 ; t268 [ 477UL ] = X [ 27UL ] ; t268 [ 478UL ] = X [ 118UL
] ; t268 [ 479UL ] =
House_thermal_network_Room_2_Half_window_atmosphere_conduction_ * 1000.0 ;
t268 [ 480UL ] =
House_thermal_network_Room_2_Half_window_atmosphere_conduction_ *
3.2051282051282053 ; t268 [ 481UL ] = X [ 11UL ] ; t268 [ 482UL ] =
House_thermal_network_Room_2_Half_roof_atmosphere_conduction_B_ ; t268 [
483UL ] = U_idx_3 ; t268 [ 484UL ] =
House_thermal_network_Room_2_Half_roof_atmosphere_conduction_Q * 1000.0 ;
t268 [ 485UL ] =
House_thermal_network_Room_2_Half_roof_atmosphere_conduction_Q *
0.34999974924108951 ; t268 [ 486UL ] = X [ 113UL ] ; t268 [ 487UL ] = U_idx_3
; t268 [ 488UL ] = House_thermal_network_Room_2_Roof_atmosphere_leakage_Q *
1000.0 ; t268 [ 489UL ] =
House_thermal_network_Room_2_Roof_atmosphere_leakage_Q * 3.4999974924108948 ;
t268 [ 490UL ] = X [ 25UL ] ; t268 [ 491UL ] = X [ 25UL ] ; t268 [ 492UL ] =
X [ 116UL ] * 1000.0 ; t268 [ 493UL ] = X [ 25UL ] - 273.15 ; t268 [ 494UL ]
= U_idx_3 ; t268 [ 495UL ] = X [ 11UL ] ; t268 [ 496UL ] = X [ 11UL ] ; t268
[ 497UL ] = X [ 11UL ] ; t268 [ 498UL ] = X [ 11UL ] - 273.15 ; t268 [ 499UL
] = U_idx_3 ; t268 [ 500UL ] = ( ( ( ( ( ( ( ( ( ( X [ 11UL ] *
0.45666666666666661 + X [ 25UL ] * - 0.028571449041558377 ) + X [ 26UL ] * -
0.031666666666666662 ) + X [ 27UL ] * 0.312 ) + X [ 113UL ] *
0.31428593945714223 ) + X [ 114UL ] * - 0.2283333333333333 ) + X [ 115UL ] *
0.0128 ) + X [ 118UL ] * - 0.312 ) - X [ 116UL ] ) - X [ 117UL ] ) + U_idx_3
* - 0.7235144904155838 ) * 1000.0 ; t268 [ 501UL ] = U_idx_3 ; t268 [ 502UL ]
= U_idx_3 ; t268 [ 503UL ] =
House_thermal_network_Room_2_Half_wall_atmosphere_conduction_B_ ; t268 [
504UL ] = U_idx_3 ; t268 [ 505UL ] =
House_thermal_network_Room_2_Half_wall_atmosphere_conduction_Q * 1000.0 ;
t268 [ 506UL ] =
House_thermal_network_Room_2_Half_wall_atmosphere_conduction_Q *
0.35294117647058826 ; t268 [ 507UL ] =
House_thermal_network_Room_2_Air_wall_convection_B_T ; t268 [ 508UL ] =
U_idx_3 ; t268 [ 509UL ] =
House_thermal_network_Room_2_Wall_atmosphere_leakage_Q * 1000.0 ; t268 [
510UL ] = House_thermal_network_Room_2_Wall_atmosphere_leakage_Q *
2.3529411764705888 ; t268 [ 511UL ] = X [ 26UL ] ; t268 [ 512UL ] = X [ 26UL
] ; t268 [ 513UL ] = X [ 117UL ] * 1000.0 ; t268 [ 514UL ] = X [ 26UL ] -
273.15 ; t268 [ 515UL ] = X [ 118UL ] ; t268 [ 516UL ] = U_idx_3 ; t268 [
517UL ] = House_thermal_network_Room_2_Half_window_atmosphere_conduction_ *
1000.0 ; t268 [ 518UL ] =
House_thermal_network_Room_2_Half_window_atmosphere_conduction_ * 15.625 ;
t268 [ 519UL ] = X [ 115UL ] ; t268 [ 520UL ] = U_idx_3 ; t268 [ 521UL ] =
House_thermal_network_Room_2_Window_atmosphere_leakage_Q * 1000.0 ; t268 [
522UL ] = House_thermal_network_Room_2_Window_atmosphere_leakage_Q * 78.125 ;
t268 [ 523UL ] = X [ 27UL ] ; t268 [ 524UL ] = X [ 27UL ] ; t268 [ 525UL ] =
( ( X [ 27UL ] * - 0.624 + X [ 115UL ] * 0.312 ) + X [ 118UL ] * 0.312 ) *
1000.0 ; t268 [ 526UL ] = X [ 27UL ] - 273.15 ; t268 [ 527UL ] = X [ 15UL ] ;
t268 [ 528UL ] = X [ 119UL ] ; t268 [ 529UL ] =
House_thermal_network_Room_3_Air_roof_convection_Q * 1000.0 ; t268 [ 530UL ]
= House_thermal_network_Room_3_Air_roof_convection_Q * 1.1083325392634502 ;
t268 [ 531UL ] = X [ 15UL ] ; t268 [ 532UL ] = X [ 15UL ] ; t268 [ 533UL ] =
( ( ( ( X [ 14UL ] * 0.5 + X [ 15UL ] * - 1.4522562855228962 ) + X [ 119UL ]
* 0.90225628552289616 ) - X [ 120UL ] ) + X [ 121UL ] * 0.05 ) * 1000.0 ;
t268 [ 534UL ] = X [ 15UL ] - 273.15 ; t268 [ 535UL ] = X [ 15UL ] ; t268 [
536UL ] = House_thermal_network_Room_3_Air_wall_convection_B_T ; t268 [ 537UL
] = X [ 120UL ] * 1000.0 ; t268 [ 538UL ] = X [ 120UL ] * 0.573394495412844 ;
t268 [ 539UL ] = X [ 15UL ] ; t268 [ 540UL ] = X [ 121UL ] ; t268 [ 541UL ] =
House_thermal_network_Room_3_Air_window_convection_Q * 1000.0 ; t268 [ 542UL
] = House_thermal_network_Room_3_Air_window_convection_Q * 20.0 ; t268 [
543UL ] = X [ 119UL ] ; t268 [ 544UL ] = X [ 28UL ] ; t268 [ 545UL ] =
House_thermal_network_Room_3_Half_roof_air_conduction_Q * 1000.0 ; t268 [
546UL ] = House_thermal_network_Room_3_Half_roof_air_conduction_Q *
34.999974924108955 ; t268 [ 547UL ] = X [ 28UL ] ; t268 [ 548UL ] =
House_thermal_network_Room_3_Half_roof_atmosphere_conduction_B_ ; t268 [
549UL ] = House_thermal_network_Room_3_Half_roof_atmosphere_conduction_Q *
1000.0 ; t268 [ 550UL ] =
House_thermal_network_Room_3_Half_roof_atmosphere_conduction_Q *
34.999974924108955 ; t268 [ 551UL ] =
House_thermal_network_Room_3_Air_wall_convection_B_T ; t268 [ 552UL ] = X [
29UL ] ; t268 [ 553UL ] =
House_thermal_network_Room_3_Half_wall_air_conduction_Q * 1000.0 ; t268 [
554UL ] = House_thermal_network_Room_3_Half_wall_air_conduction_Q *
36.214389183969104 ; t268 [ 555UL ] = X [ 29UL ] ; t268 [ 556UL ] =
House_thermal_network_Room_3_Half_wall_atmosphere_conduction_B_ ; t268 [
557UL ] = House_thermal_network_Room_3_Half_wall_atmosphere_conduction_Q *
1000.0 ; t268 [ 558UL ] =
House_thermal_network_Room_3_Half_wall_atmosphere_conduction_Q *
36.214389183969104 ; t268 [ 559UL ] = X [ 121UL ] ; t268 [ 560UL ] = X [ 30UL
] ; t268 [ 561UL ] =
House_thermal_network_Room_3_Half_window_air_conduction_Q * 1000.0 ; t268 [
562UL ] = House_thermal_network_Room_3_Half_window_air_conduction_Q *
3.2051282051282053 ; t268 [ 563UL ] = X [ 30UL ] ; t268 [ 564UL ] = X [ 124UL
] ; t268 [ 565UL ] =
House_thermal_network_Room_3_Half_window_atmosphere_conduction_ * 1000.0 ;
t268 [ 566UL ] =
House_thermal_network_Room_3_Half_window_atmosphere_conduction_ *
3.2051282051282053 ; t268 [ 567UL ] = X [ 15UL ] ; t268 [ 568UL ] =
House_thermal_network_Room_3_Half_roof_atmosphere_conduction_B_ ; t268 [
569UL ] = U_idx_4 ; t268 [ 570UL ] =
House_thermal_network_Room_3_Half_roof_atmosphere_conduction_Q * 1000.0 ;
t268 [ 571UL ] =
House_thermal_network_Room_3_Half_roof_atmosphere_conduction_Q *
0.34999974924108951 ; t268 [ 572UL ] = X [ 119UL ] ; t268 [ 573UL ] = U_idx_4
; t268 [ 574UL ] = House_thermal_network_Room_3_Roof_atmosphere_leakage_Q *
1000.0 ; t268 [ 575UL ] =
House_thermal_network_Room_3_Roof_atmosphere_leakage_Q * 3.4999974924108948 ;
t268 [ 576UL ] = X [ 28UL ] ; t268 [ 577UL ] = X [ 28UL ] ; t268 [ 578UL ] =
X [ 122UL ] * 1000.0 ; t268 [ 579UL ] = X [ 28UL ] - 273.15 ; t268 [ 580UL ]
= U_idx_4 ; t268 [ 581UL ] = X [ 15UL ] ; t268 [ 582UL ] = X [ 15UL ] ; t268
[ 583UL ] = X [ 15UL ] ; t268 [ 584UL ] = X [ 15UL ] - 273.15 ; t268 [ 585UL
] = U_idx_4 ; t268 [ 586UL ] = ( ( ( ( ( ( ( ( ( ( X [ 15UL ] *
0.39821333333333331 + X [ 28UL ] * - 0.028571449041558377 ) + X [ 29UL ] * -
0.02761333333333333 ) + X [ 30UL ] * 0.312 ) + X [ 119UL ] *
0.31428593945714223 ) + X [ 120UL ] * - 0.22833333333333333 ) + X [ 121UL ] *
0.0128 ) + X [ 124UL ] * - 0.312 ) - X [ 122UL ] ) - X [ 123UL ] ) + U_idx_4
* - 0.6691144904155838 ) * 1000.0 ; t268 [ 587UL ] = U_idx_4 ; t268 [ 588UL ]
= U_idx_4 ; t268 [ 589UL ] =
House_thermal_network_Room_3_Half_wall_atmosphere_conduction_B_ ; t268 [
590UL ] = U_idx_4 ; t268 [ 591UL ] =
House_thermal_network_Room_3_Half_wall_atmosphere_conduction_Q * 1000.0 ;
t268 [ 592UL ] =
House_thermal_network_Room_3_Half_wall_atmosphere_conduction_Q *
0.40474905558553687 ; t268 [ 593UL ] =
House_thermal_network_Room_3_Air_wall_convection_B_T ; t268 [ 594UL ] =
U_idx_4 ; t268 [ 595UL ] =
House_thermal_network_Room_3_Wall_atmosphere_leakage_Q * 1000.0 ; t268 [
596UL ] = House_thermal_network_Room_3_Wall_atmosphere_leakage_Q *
2.698327037236913 ; t268 [ 597UL ] = X [ 29UL ] ; t268 [ 598UL ] = X [ 29UL ]
; t268 [ 599UL ] = X [ 123UL ] * 1000.0 ; t268 [ 600UL ] = X [ 29UL ] -
273.15 ; t268 [ 601UL ] = X [ 124UL ] ; t268 [ 602UL ] = U_idx_4 ; t268 [
603UL ] = House_thermal_network_Room_3_Half_window_atmosphere_conduction_ *
1000.0 ; t268 [ 604UL ] =
House_thermal_network_Room_3_Half_window_atmosphere_conduction_ * 15.625 ;
t268 [ 605UL ] = X [ 121UL ] ; t268 [ 606UL ] = U_idx_4 ; t268 [ 607UL ] =
House_thermal_network_Room_3_Window_atmosphere_leakage_Q * 1000.0 ; t268 [
608UL ] = House_thermal_network_Room_3_Window_atmosphere_leakage_Q * 78.125 ;
t268 [ 609UL ] = X [ 30UL ] ; t268 [ 610UL ] = X [ 30UL ] ; t268 [ 611UL ] =
( ( X [ 30UL ] * - 0.624 + X [ 121UL ] * 0.312 ) + X [ 124UL ] * 0.312 ) *
1000.0 ; t268 [ 612UL ] = X [ 30UL ] - 273.15 ; t268 [ 613UL ] = X [ 19UL ] ;
t268 [ 614UL ] = X [ 125UL ] ; t268 [ 615UL ] =
House_thermal_network_Room_4_Air_roof_convection_Q * 1000.0 ; t268 [ 616UL ]
= House_thermal_network_Room_4_Air_roof_convection_Q * 1.1083325392634502 ;
t268 [ 617UL ] = X [ 19UL ] ; t268 [ 618UL ] = X [ 19UL ] ; t268 [ 619UL ] =
( ( ( ( X [ 18UL ] * 0.5 + X [ 19UL ] * - 1.4522562855228962 ) + X [ 125UL ]
* 0.90225628552289616 ) - X [ 126UL ] ) + X [ 127UL ] * 0.05 ) * 1000.0 ;
t268 [ 620UL ] = X [ 19UL ] - 273.15 ; t268 [ 621UL ] = X [ 19UL ] ; t268 [
622UL ] = House_thermal_network_Room_4_Air_wall_convection_B_T ; t268 [ 623UL
] = X [ 126UL ] * 1000.0 ; t268 [ 624UL ] = X [ 126UL ] * 0.702247191011236 ;
t268 [ 625UL ] = X [ 19UL ] ; t268 [ 626UL ] = X [ 127UL ] ; t268 [ 627UL ] =
House_thermal_network_Room_4_Air_window_convection_Q * 1000.0 ; t268 [ 628UL
] = House_thermal_network_Room_4_Air_window_convection_Q * 20.0 ; t268 [
629UL ] = X [ 125UL ] ; t268 [ 630UL ] = X [ 31UL ] ; t268 [ 631UL ] =
House_thermal_network_Room_4_Half_roof_air_conduction_Q * 1000.0 ; t268 [
632UL ] = House_thermal_network_Room_4_Half_roof_air_conduction_Q *
34.999974924108955 ; t268 [ 633UL ] = X [ 31UL ] ; t268 [ 634UL ] =
House_thermal_network_Room_4_Half_roof_atmosphere_conduction_B_ ; t268 [
635UL ] = House_thermal_network_Room_4_Half_roof_atmosphere_conduction_Q *
1000.0 ; t268 [ 636UL ] =
House_thermal_network_Room_4_Half_roof_atmosphere_conduction_Q *
34.999974924108955 ; t268 [ 637UL ] =
House_thermal_network_Room_4_Air_wall_convection_B_T ; t268 [ 638UL ] = X [
32UL ] ; t268 [ 639UL ] =
House_thermal_network_Room_4_Half_wall_air_conduction_Q * 1000.0 ; t268 [
640UL ] = House_thermal_network_Room_4_Half_wall_air_conduction_Q *
44.352454169130695 ; t268 [ 641UL ] = X [ 32UL ] ; t268 [ 642UL ] =
House_thermal_network_Room_4_Half_wall_atmosphere_conduction_B_ ; t268 [
643UL ] = House_thermal_network_Room_4_Half_wall_atmosphere_conduction_Q *
1000.0 ; t268 [ 644UL ] =
House_thermal_network_Room_4_Half_wall_atmosphere_conduction_Q *
44.352454169130695 ; t268 [ 645UL ] = X [ 127UL ] ; t268 [ 646UL ] = X [ 33UL
] ; t268 [ 647UL ] =
House_thermal_network_Room_4_Half_window_air_conduction_Q * 1000.0 ; t268 [
648UL ] = House_thermal_network_Room_4_Half_window_air_conduction_Q *
3.2051282051282053 ; t268 [ 649UL ] = X [ 33UL ] ; t268 [ 650UL ] = X [ 130UL
] ; t268 [ 651UL ] =
House_thermal_network_Room_4_Half_window_atmosphere_conduction_ * 1000.0 ;
t268 [ 652UL ] =
House_thermal_network_Room_4_Half_window_atmosphere_conduction_ *
3.2051282051282053 ; t268 [ 653UL ] = X [ 19UL ] ; t268 [ 654UL ] =
House_thermal_network_Room_4_Half_roof_atmosphere_conduction_B_ ; t268 [
655UL ] = U_idx_5 ; t268 [ 656UL ] =
House_thermal_network_Room_4_Half_roof_atmosphere_conduction_Q * 1000.0 ;
t268 [ 657UL ] =
House_thermal_network_Room_4_Half_roof_atmosphere_conduction_Q *
0.34999974924108951 ; t268 [ 658UL ] = X [ 125UL ] ; t268 [ 659UL ] = U_idx_5
; t268 [ 660UL ] = House_thermal_network_Room_4_Roof_atmosphere_leakage_Q *
1000.0 ; t268 [ 661UL ] =
House_thermal_network_Room_4_Roof_atmosphere_leakage_Q * 3.4999974924108948 ;
t268 [ 662UL ] = X [ 31UL ] ; t268 [ 663UL ] = X [ 31UL ] ; t268 [ 664UL ] =
X [ 128UL ] * 1000.0 ; t268 [ 665UL ] = X [ 31UL ] - 273.15 ; t268 [ 666UL ]
= U_idx_5 ; t268 [ 667UL ] = X [ 19UL ] ; t268 [ 668UL ] = X [ 19UL ] ; t268
[ 669UL ] = X [ 19UL ] ; t268 [ 670UL ] = X [ 19UL ] - 273.15 ; t268 [ 671UL
] = U_idx_5 ; t268 [ 672UL ] = ( ( ( ( ( ( ( ( ( ( X [ 19UL ] *
0.32514666666666669 + X [ 31UL ] * - 0.028571449041558377 ) + X [ 32UL ] * -
0.022546666666666666 ) + X [ 33UL ] * 0.312 ) + X [ 125UL ] *
0.31428593945714223 ) + X [ 126UL ] * - 0.22833333333333339 ) + X [ 127UL ] *
0.0128 ) + X [ 130UL ] * - 0.312 ) - X [ 128UL ] ) - X [ 129UL ] ) + U_idx_5
* - 0.601114490415584 ) * 1000.0 ; t268 [ 673UL ] = U_idx_5 ; t268 [ 674UL ]
= U_idx_5 ; t268 [ 675UL ] =
House_thermal_network_Room_4_Half_wall_atmosphere_conduction_B_ ; t268 [
676UL ] = U_idx_5 ; t268 [ 677UL ] =
House_thermal_network_Room_4_Half_wall_atmosphere_conduction_Q * 1000.0 ;
t268 [ 678UL ] =
House_thermal_network_Room_4_Half_wall_atmosphere_conduction_Q *
0.49570389953734295 ; t268 [ 679UL ] =
House_thermal_network_Room_4_Air_wall_convection_B_T ; t268 [ 680UL ] =
U_idx_5 ; t268 [ 681UL ] =
House_thermal_network_Room_4_Wall_atmosphere_leakage_Q * 1000.0 ; t268 [
682UL ] = House_thermal_network_Room_4_Wall_atmosphere_leakage_Q *
3.3046926635822866 ; t268 [ 683UL ] = X [ 32UL ] ; t268 [ 684UL ] = X [ 32UL
] ; t268 [ 685UL ] = X [ 129UL ] * 1000.0 ; t268 [ 686UL ] = X [ 32UL ] -
273.15 ; t268 [ 687UL ] = X [ 130UL ] ; t268 [ 688UL ] = U_idx_5 ; t268 [
689UL ] = House_thermal_network_Room_4_Half_window_atmosphere_conduction_ *
1000.0 ; t268 [ 690UL ] =
House_thermal_network_Room_4_Half_window_atmosphere_conduction_ * 15.625 ;
t268 [ 691UL ] = X [ 127UL ] ; t268 [ 692UL ] = U_idx_5 ; t268 [ 693UL ] =
House_thermal_network_Room_4_Window_atmosphere_leakage_Q * 1000.0 ; t268 [
694UL ] = House_thermal_network_Room_4_Window_atmosphere_leakage_Q * 78.125 ;
t268 [ 695UL ] = X [ 33UL ] ; t268 [ 696UL ] = X [ 33UL ] ; t268 [ 697UL ] =
( ( X [ 33UL ] * - 0.624 + X [ 127UL ] * 0.312 ) + X [ 130UL ] * 0.312 ) *
1000.0 ; t268 [ 698UL ] = X [ 33UL ] - 273.15 ; t268 [ 699UL ] = X [ 57UL ] ;
t268 [ 700UL ] = X [ 58UL ] * 0.1 ; for ( b = 0 ; b < 701 ; b ++ ) { out . mX
[ b ] = t268 [ b ] ; } ( void ) LC ; ( void ) t432 ; return 0 ; }
