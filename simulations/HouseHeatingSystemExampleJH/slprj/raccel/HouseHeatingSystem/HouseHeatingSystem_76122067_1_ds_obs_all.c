#include "ne_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_sys_struct.h"
#include "HouseHeatingSystem_76122067_1_ds_obs_all.h"
#include "HouseHeatingSystem_76122067_1_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_externals.h"
#include "HouseHeatingSystem_76122067_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T HouseHeatingSystem_76122067_1_ds_obs_all ( const NeDynamicSystem * LC
, const NeDynamicSystemInput * t18 , NeDsMethodOutput * t19 ) { ETTSf3049b48
b_efOut ; ETTSf3049b48 efOut ; ETTSf3049b48 t0 ; ETTSf3049b48 t1 ;
PmRealVector out ; real_T t11 [ 820 ] ; real_T X [ 131 ] ; real_T c_efOut [ 1
] ; real_T t5 [ 1 ] ; real_T Heater_Angular_Velocity_Source_R_w ; real_T
Heater_Boiler_E_NTU_Heat_Exchanger_TL_heat_transfer_H1_T ; real_T
Heater_Fixed_Displacement_Pump_TL_Phi_A ; real_T
Heater_Gas_Charged_Accumulator_TL_liquid_mass ; real_T
Heater_Pipe_TL_segment_convection_B_mdot ; real_T
House_thermal_network_Radiator1_Convective_Heat_Transfer_Q ; real_T
House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_m0 ; real_T
House_thermal_network_Radiator2_Convective_Heat_Transfer_Q ; real_T
House_thermal_network_Radiator3_Convective_Heat_Transfer_Q ; real_T
House_thermal_network_Radiator4_Convective_Heat_Transfer_Q ; real_T
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
U_idx_5 ; real_T t13 ; size_t t3 [ 1 ] ; size_t t4 [ 1 ] ; size_t t6 [ 1 ] ;
int32_T b ; U_idx_0 = t18 -> mU . mX [ 0 ] ; U_idx_1 = t18 -> mU . mX [ 1 ] ;
U_idx_2 = t18 -> mU . mX [ 2 ] ; U_idx_3 = t18 -> mU . mX [ 3 ] ; U_idx_4 =
t18 -> mU . mX [ 4 ] ; U_idx_5 = t18 -> mU . mX [ 5 ] ; for ( b = 0 ; b < 131
; b ++ ) { X [ b ] = t18 -> mX . mX [ b ] ; } out = t19 -> mOBS_ALL ;
Heater_Angular_Velocity_Source_R_w = U_idx_0 * 0.10471975511965977 ;
Heater_Boiler_E_NTU_Heat_Exchanger_TL_heat_transfer_H1_T = ( - X [ 0UL ] + X
[ 41UL ] ) + X [ 42UL ] ; Heater_Fixed_Displacement_Pump_TL_Phi_A = ( ( - X [
59UL ] - X [ 60UL ] ) - X [ 61UL ] ) - X [ 62UL ] ; t5 [ 0UL ] = X [ 2UL ] ;
t3 [ 0 ] = 11UL ; t4 [ 0 ] = 1UL ; tlu2_linear_linear_prelookup ( & efOut .
mField0 [ 0UL ] , & efOut . mField1 [ 0UL ] , & efOut . mField2 [ 0UL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t5 [ 0UL ] , & t3 [ 0UL ] , & t4
[ 0UL ] ) ; t1 = efOut ; t5 [ 0UL ] = X [ 3UL ] ; t6 [ 0 ] = 12UL ;
tlu2_linear_linear_prelookup ( & b_efOut . mField0 [ 0UL ] , & b_efOut .
mField1 [ 0UL ] , & b_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField1 , & t5 [ 0UL ] , & t6 [ 0UL ] , & t4 [ 0UL ] ) ; t0 = b_efOut
; tlu2_2d_linear_linear_value ( & c_efOut [ 0UL ] , & t1 . mField0 [ 0UL ] ,
& t1 . mField2 [ 0UL ] , & t0 . mField0 [ 0UL ] , & t0 . mField2 [ 0UL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t3 [ 0UL ] , & t6 [ 0UL ] , &
t4 [ 0UL ] ) ; t5 [ 0 ] = c_efOut [ 0 ] ;
Heater_Gas_Charged_Accumulator_TL_liquid_mass = t5 [ 0UL ] ;
Heater_Gas_Charged_Accumulator_TL_liquid_mass = X [ 68UL ] *
Heater_Gas_Charged_Accumulator_TL_liquid_mass * 0.001 ; t13 = ( ( - X [ 72UL
] - X [ 73UL ] ) - X [ 74UL ] ) - X [ 75UL ] ;
Heater_Pipe_TL_segment_convection_B_mdot = ( ( - X [ 76UL ] - X [ 77UL ] ) -
X [ 78UL ] ) - X [ 79UL ] ;
House_thermal_network_Radiator1_Convective_Heat_Transfer_Q = X [ 6UL ] * 0.5
+ X [ 7UL ] * - 0.5 ;
House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_m0 = ( ( - X [
47UL ] - X [ 85UL ] ) - X [ 86UL ] ) - X [ 87UL ] ;
House_thermal_network_Radiator2_Convective_Heat_Transfer_Q = X [ 10UL ] * 0.5
+ X [ 11UL ] * - 0.5 ;
House_thermal_network_Radiator3_Convective_Heat_Transfer_Q = X [ 14UL ] * 0.5
+ X [ 15UL ] * - 0.5 ;
House_thermal_network_Radiator4_Convective_Heat_Transfer_Q = X [ 18UL ] * 0.5
+ X [ 19UL ] * - 0.5 ; House_thermal_network_Room_1_Air_roof_convection_Q = X
[ 7UL ] * 0.90225628552289616 + X [ 107UL ] * - 0.90225628552289616 ;
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
0.0128 + U_idx_5 * - 0.0128 ; t11 [ 0UL ] = 0.0 ; t11 [ 1UL ] =
Heater_Angular_Velocity_Source_R_w ; t11 [ 2UL ] =
Heater_Angular_Velocity_Source_R_w ; t11 [ 3UL ] = X [ 34UL ] ; t11 [ 4UL ] =
Heater_Angular_Velocity_Source_R_w ; t11 [ 5UL ] = X [ 35UL ] ; t11 [ 6UL ] =
X [ 36UL ] * 0.1 ; t11 [ 7UL ] = X [ 37UL ] ; t11 [ 8UL ] = X [ 3UL ] * 0.1 ;
t11 [ 9UL ] = X [ 38UL ] ; t11 [ 10UL ] = X [ 39UL ] ; t11 [ 11UL ] = 500.0 ;
t11 [ 12UL ] = X [ 40UL ] ; t11 [ 13UL ] = X [ 38UL ] ; t11 [ 14UL ] =
Heater_Boiler_E_NTU_Heat_Exchanger_TL_heat_transfer_H1_T ; t11 [ 15UL ] = X [
39UL ] ; t11 [ 16UL ] = 500.0 ; t11 [ 17UL ] = 500.0 ; t11 [ 18UL ] = X [
43UL ] ; t11 [ 19UL ] = X [ 35UL ] ; t11 [ 20UL ] = X [ 36UL ] * 0.1 ; t11 [
21UL ] = X [ 37UL ] ; t11 [ 22UL ] = X [ 3UL ] * 0.1 ; t11 [ 23UL ] = X [
44UL ] ; t11 [ 24UL ] = - X [ 45UL ] - X [ 46UL ] ; t11 [ 25UL ] = X [ 41UL ]
; t11 [ 26UL ] = X [ 42UL ] ; t11 [ 27UL ] = X [ 0UL ] ; t11 [ 28UL ] = X [
47UL ] ; t11 [ 29UL ] = - X [ 48UL ] - X [ 49UL ] ; t11 [ 30UL ] = X [ 1UL ]
* 0.1 ; t11 [ 31UL ] = X [ 50UL ] ; t11 [ 32UL ] = X [ 51UL ] ; t11 [ 33UL ]
= X [ 52UL ] ; t11 [ 34UL ] = X [ 53UL ] ; t11 [ 35UL ] = X [ 54UL ] ; t11 [
36UL ] = X [ 40UL ] ; t11 [ 37UL ] =
Heater_Boiler_E_NTU_Heat_Exchanger_TL_heat_transfer_H1_T ; t11 [ 38UL ] =
500.0 ; t11 [ 39UL ] = - X [ 43UL ] ; t11 [ 40UL ] = X [ 38UL ] ; t11 [ 41UL
] = X [ 39UL ] ; t11 [ 42UL ] = 0.005 ; t11 [ 43UL ] = U_idx_1 ; t11 [ 44UL ]
= X [ 43UL ] * 1000.0 ; t11 [ 45UL ] = 288.15 ; t11 [ 46UL ] = 283.15 ; t11 [
47UL ] = X [ 39UL ] ; t11 [ 48UL ] = X [ 55UL ] ; t11 [ 49UL ] = X [ 56UL ] ;
t11 [ 50UL ] = 500.0 ; t11 [ 51UL ] = 0.005 ; t11 [ 52UL ] = X [ 35UL ] ; t11
[ 53UL ] = X [ 36UL ] * 0.1 ; t11 [ 54UL ] = X [ 37UL ] ; t11 [ 55UL ] = X [
3UL ] * 0.1 ; t11 [ 56UL ] = U_idx_1 ; t11 [ 57UL ] = 288.15 ; t11 [ 58UL ] =
283.15 ; t11 [ 59UL ] = X [ 57UL ] ; t11 [ 60UL ] = X [ 58UL ] * 0.1 ; t11 [
61UL ] = X [ 35UL ] ; t11 [ 62UL ] = X [ 36UL ] * 0.1 ; t11 [ 63UL ] = 0.0 ;
t11 [ 64UL ] = 0.0 ; t11 [ 65UL ] = 0.0 ; t11 [ 66UL ] = 0.0 ; t11 [ 67UL ] =
0.0 ; t11 [ 68UL ] = Heater_Fixed_Displacement_Pump_TL_Phi_A ; t11 [ 69UL ] =
- X [ 44UL ] ; t11 [ 70UL ] = Heater_Angular_Velocity_Source_R_w ; t11 [ 71UL
] = X [ 57UL ] ; t11 [ 72UL ] = X [ 58UL ] * 0.1 ; t11 [ 73UL ] =
Heater_Fixed_Displacement_Pump_TL_Phi_A ; t11 [ 74UL ] = X [ 63UL ] ; t11 [
75UL ] = X [ 47UL ] ; t11 [ 76UL ] = X [ 64UL ] ; t11 [ 77UL ] = X [ 35UL ] ;
t11 [ 78UL ] = X [ 36UL ] * 0.1 ; t11 [ 79UL ] = - X [ 44UL ] ; t11 [ 80UL ]
= X [ 65UL ] ; t11 [ 81UL ] = - X [ 47UL ] ; t11 [ 82UL ] = X [ 64UL ] ; t11
[ 83UL ] = - X [ 34UL ] ; t11 [ 84UL ] = X [ 47UL ] ; t11 [ 85UL ] = - X [
47UL ] ; t11 [ 86UL ] = X [ 37UL ] ; t11 [ 87UL ] = X [ 3UL ] * 0.1 ; t11 [
88UL ] = X [ 2UL ] ; t11 [ 89UL ] = X [ 45UL ] ; t11 [ 90UL ] = 0.0 ; t11 [
91UL ] = X [ 2UL ] ; t11 [ 92UL ] = X [ 3UL ] * 0.1 ; t11 [ 93UL ] = X [ 68UL
] * 0.001 ; t11 [ 94UL ] = X [ 48UL ] ; t11 [ 95UL ] = X [ 37UL ] ; t11 [
96UL ] = X [ 3UL ] * 0.1 ; t11 [ 97UL ] = X [ 45UL ] ; t11 [ 98UL ] = X [
66UL ] ; t11 [ 99UL ] = X [ 48UL ] ; t11 [ 100UL ] = X [ 67UL ] ; t11 [ 101UL
] = Heater_Gas_Charged_Accumulator_TL_liquid_mass ; t11 [ 102UL ] = 0.0 ; t11
[ 103UL ] = 0.0 ; t11 [ 104UL ] = X [ 2UL ] ; t11 [ 105UL ] = X [ 2UL ] ; t11
[ 106UL ] = X [ 69UL ] ; t11 [ 107UL ] = X [ 69UL ] ; t11 [ 108UL ] = X [
37UL ] ; t11 [ 109UL ] = X [ 3UL ] * 0.1 ; t11 [ 110UL ] = X [ 70UL ] ; t11 [
111UL ] = X [ 71UL ] * 0.1 ; t11 [ 112UL ] = 0.0 ; t11 [ 113UL ] = 0.0 ; t11
[ 114UL ] = X [ 69UL ] ; t11 [ 115UL ] = X [ 37UL ] ; t11 [ 116UL ] = X [ 3UL
] * 0.1 ; t11 [ 117UL ] = X [ 70UL ] ; t11 [ 118UL ] = X [ 71UL ] * 0.1 ; t11
[ 119UL ] = 0.0 ; t11 [ 120UL ] = X [ 4UL ] * 0.1 ; t11 [ 121UL ] = 0.0 ; t11
[ 122UL ] = X [ 69UL ] ; t11 [ 123UL ] = X [ 46UL ] ; t11 [ 124UL ] = t13 ;
t11 [ 125UL ] = X [ 5UL ] ; t11 [ 126UL ] = X [ 49UL ] ; t11 [ 127UL ] =
Heater_Pipe_TL_segment_convection_B_mdot ; t11 [ 128UL ] = 0.0 ; t11 [ 129UL
] = X [ 37UL ] ; t11 [ 130UL ] = X [ 3UL ] * 0.1 ; t11 [ 131UL ] = X [ 46UL ]
; t11 [ 132UL ] = X [ 80UL ] ; t11 [ 133UL ] = X [ 49UL ] ; t11 [ 134UL ] = X
[ 81UL ] ; t11 [ 135UL ] = X [ 70UL ] ; t11 [ 136UL ] = X [ 71UL ] * 0.1 ;
t11 [ 137UL ] = t13 ; t11 [ 138UL ] = X [ 82UL ] ; t11 [ 139UL ] =
Heater_Pipe_TL_segment_convection_B_mdot ; t11 [ 140UL ] = X [ 83UL ] ; t11 [
141UL ] = U_idx_0 ; t11 [ 142UL ] = X [ 70UL ] ; t11 [ 143UL ] = X [ 71UL ] *
0.1 ; t11 [ 144UL ] = X [ 57UL ] ; t11 [ 145UL ] = X [ 58UL ] * 0.1 ; t11 [
146UL ] = X [ 70UL ] ; t11 [ 147UL ] = X [ 71UL ] * 0.1 ; t11 [ 148UL ] = X [
57UL ] ; t11 [ 149UL ] = X [ 58UL ] * 0.1 ; t11 [ 150UL ] = X [ 7UL ] ; t11 [
151UL ] = X [ 6UL ] ; t11 [ 152UL ] = X [ 7UL ] ; t11 [ 153UL ] =
House_thermal_network_Radiator1_Convective_Heat_Transfer_Q * 1000.0 ; t11 [
154UL ] = House_thermal_network_Radiator1_Convective_Heat_Transfer_Q * 2.0 ;
t11 [ 155UL ] = 0.0 ; t11 [ 156UL ] = X [ 70UL ] ; t11 [ 157UL ] = X [ 71UL ]
* 0.1 ; t11 [ 158UL ] = X [ 57UL ] ; t11 [ 159UL ] = X [ 58UL ] * 0.1 ; t11 [
160UL ] = X [ 70UL ] ; t11 [ 161UL ] = X [ 71UL ] * 0.1 ; t11 [ 162UL ] = X [
57UL ] ; t11 [ 163UL ] = X [ 58UL ] * 0.1 ; t11 [ 164UL ] = 0.0 ; t11 [ 165UL
] = 0.0 ; t11 [ 166UL ] = X [ 6UL ] ; t11 [ 167UL ] = X [ 70UL ] ; t11 [
168UL ] = X [ 71UL ] * 0.1 ; t11 [ 169UL ] = X [ 57UL ] ; t11 [ 170UL ] = X [
58UL ] * 0.1 ; t11 [ 171UL ] = 0.0 ; t11 [ 172UL ] = X [ 8UL ] * 0.1 ; t11 [
173UL ] = 0.0 ; t11 [ 174UL ] = X [ 6UL ] ; t11 [ 175UL ] = X [ 72UL ] ; t11
[ 176UL ] = X [ 59UL ] ; t11 [ 177UL ] = X [ 9UL ] ; t11 [ 178UL ] = X [ 76UL
] ; t11 [ 179UL ] =
House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_m0 ; t11 [ 180UL
] = X [ 84UL ] ; t11 [ 181UL ] = X [ 70UL ] ; t11 [ 182UL ] = X [ 71UL ] *
0.1 ; t11 [ 183UL ] = X [ 72UL ] ; t11 [ 184UL ] = X [ 88UL ] ; t11 [ 185UL ]
= X [ 76UL ] ; t11 [ 186UL ] = X [ 89UL ] ; t11 [ 187UL ] = X [ 57UL ] ; t11
[ 188UL ] = X [ 58UL ] * 0.1 ; t11 [ 189UL ] = X [ 59UL ] ; t11 [ 190UL ] = X
[ 90UL ] ; t11 [ 191UL ] =
House_thermal_network_Radiator1_Pipe_TL_segment_convection_B_m0 ; t11 [ 192UL
] = X [ 91UL ] ; t11 [ 193UL ] = X [ 6UL ] ; t11 [ 194UL ] = 0.0 ; t11 [
195UL ] = X [ 6UL ] ; t11 [ 196UL ] = ( ( X [ 6UL ] * - 0.5 + X [ 7UL ] * 0.5
) - X [ 84UL ] ) * 1000.0 ; t11 [ 197UL ] = X [ 6UL ] - 273.15 ; t11 [ 198UL
] = 0.0 ; t11 [ 199UL ] = 1.0 ; t11 [ 200UL ] = X [ 11UL ] ; t11 [ 201UL ] =
X [ 10UL ] ; t11 [ 202UL ] = X [ 11UL ] ; t11 [ 203UL ] =
House_thermal_network_Radiator2_Convective_Heat_Transfer_Q * 1000.0 ; t11 [
204UL ] = House_thermal_network_Radiator2_Convective_Heat_Transfer_Q * 2.0 ;
t11 [ 205UL ] = 0.0 ; t11 [ 206UL ] = X [ 70UL ] ; t11 [ 207UL ] = X [ 71UL ]
* 0.1 ; t11 [ 208UL ] = X [ 57UL ] ; t11 [ 209UL ] = X [ 58UL ] * 0.1 ; t11 [
210UL ] = X [ 70UL ] ; t11 [ 211UL ] = X [ 71UL ] * 0.1 ; t11 [ 212UL ] = X [
57UL ] ; t11 [ 213UL ] = X [ 58UL ] * 0.1 ; t11 [ 214UL ] = 0.0 ; t11 [ 215UL
] = 0.0 ; t11 [ 216UL ] = X [ 10UL ] ; t11 [ 217UL ] = X [ 70UL ] ; t11 [
218UL ] = X [ 71UL ] * 0.1 ; t11 [ 219UL ] = X [ 57UL ] ; t11 [ 220UL ] = X [
58UL ] * 0.1 ; t11 [ 221UL ] = 0.0 ; t11 [ 222UL ] = X [ 12UL ] * 0.1 ; t11 [
223UL ] = 0.0 ; t11 [ 224UL ] = X [ 10UL ] ; t11 [ 225UL ] = X [ 73UL ] ; t11
[ 226UL ] = X [ 60UL ] ; t11 [ 227UL ] = X [ 13UL ] ; t11 [ 228UL ] = X [
77UL ] ; t11 [ 229UL ] = X [ 85UL ] ; t11 [ 230UL ] = X [ 92UL ] ; t11 [
231UL ] = X [ 70UL ] ; t11 [ 232UL ] = X [ 71UL ] * 0.1 ; t11 [ 233UL ] = X [
73UL ] ; t11 [ 234UL ] = X [ 93UL ] ; t11 [ 235UL ] = X [ 77UL ] ; t11 [
236UL ] = X [ 94UL ] ; t11 [ 237UL ] = X [ 57UL ] ; t11 [ 238UL ] = X [ 58UL
] * 0.1 ; t11 [ 239UL ] = X [ 60UL ] ; t11 [ 240UL ] = X [ 95UL ] ; t11 [
241UL ] = X [ 85UL ] ; t11 [ 242UL ] = X [ 96UL ] ; t11 [ 243UL ] = X [ 10UL
] ; t11 [ 244UL ] = 0.0 ; t11 [ 245UL ] = X [ 10UL ] ; t11 [ 246UL ] = ( ( X
[ 10UL ] * - 0.5 + X [ 11UL ] * 0.5 ) - X [ 92UL ] ) * 1000.0 ; t11 [ 247UL ]
= X [ 10UL ] - 273.15 ; t11 [ 248UL ] = 0.0 ; t11 [ 249UL ] = 1.0 ; t11 [
250UL ] = X [ 15UL ] ; t11 [ 251UL ] = X [ 14UL ] ; t11 [ 252UL ] = X [ 15UL
] ; t11 [ 253UL ] =
House_thermal_network_Radiator3_Convective_Heat_Transfer_Q * 1000.0 ; t11 [
254UL ] = House_thermal_network_Radiator3_Convective_Heat_Transfer_Q * 2.0 ;
t11 [ 255UL ] = 0.0 ; t11 [ 256UL ] = X [ 70UL ] ; t11 [ 257UL ] = X [ 71UL ]
* 0.1 ; t11 [ 258UL ] = X [ 57UL ] ; t11 [ 259UL ] = X [ 58UL ] * 0.1 ; t11 [
260UL ] = X [ 70UL ] ; t11 [ 261UL ] = X [ 71UL ] * 0.1 ; t11 [ 262UL ] = X [
57UL ] ; t11 [ 263UL ] = X [ 58UL ] * 0.1 ; t11 [ 264UL ] = 0.0 ; t11 [ 265UL
] = 0.0 ; t11 [ 266UL ] = X [ 14UL ] ; t11 [ 267UL ] = X [ 70UL ] ; t11 [
268UL ] = X [ 71UL ] * 0.1 ; t11 [ 269UL ] = X [ 57UL ] ; t11 [ 270UL ] = X [
58UL ] * 0.1 ; t11 [ 271UL ] = 0.0 ; t11 [ 272UL ] = X [ 16UL ] * 0.1 ; t11 [
273UL ] = 0.0 ; t11 [ 274UL ] = X [ 14UL ] ; t11 [ 275UL ] = X [ 74UL ] ; t11
[ 276UL ] = X [ 61UL ] ; t11 [ 277UL ] = X [ 17UL ] ; t11 [ 278UL ] = X [
78UL ] ; t11 [ 279UL ] = X [ 86UL ] ; t11 [ 280UL ] = X [ 97UL ] ; t11 [
281UL ] = X [ 70UL ] ; t11 [ 282UL ] = X [ 71UL ] * 0.1 ; t11 [ 283UL ] = X [
74UL ] ; t11 [ 284UL ] = X [ 98UL ] ; t11 [ 285UL ] = X [ 78UL ] ; t11 [
286UL ] = X [ 99UL ] ; t11 [ 287UL ] = X [ 57UL ] ; t11 [ 288UL ] = X [ 58UL
] * 0.1 ; t11 [ 289UL ] = X [ 61UL ] ; t11 [ 290UL ] = X [ 100UL ] ; t11 [
291UL ] = X [ 86UL ] ; t11 [ 292UL ] = X [ 101UL ] ; t11 [ 293UL ] = X [ 14UL
] ; t11 [ 294UL ] = 0.0 ; t11 [ 295UL ] = X [ 14UL ] ; t11 [ 296UL ] = ( ( X
[ 14UL ] * - 0.5 + X [ 15UL ] * 0.5 ) - X [ 97UL ] ) * 1000.0 ; t11 [ 297UL ]
= X [ 14UL ] - 273.15 ; t11 [ 298UL ] = 0.0 ; t11 [ 299UL ] = 1.0 ; t11 [
300UL ] = X [ 19UL ] ; t11 [ 301UL ] = X [ 18UL ] ; t11 [ 302UL ] = X [ 19UL
] ; t11 [ 303UL ] =
House_thermal_network_Radiator4_Convective_Heat_Transfer_Q * 1000.0 ; t11 [
304UL ] = House_thermal_network_Radiator4_Convective_Heat_Transfer_Q * 2.0 ;
t11 [ 305UL ] = 0.0 ; t11 [ 306UL ] = X [ 70UL ] ; t11 [ 307UL ] = X [ 71UL ]
* 0.1 ; t11 [ 308UL ] = X [ 57UL ] ; t11 [ 309UL ] = X [ 58UL ] * 0.1 ; t11 [
310UL ] = X [ 70UL ] ; t11 [ 311UL ] = X [ 71UL ] * 0.1 ; t11 [ 312UL ] = X [
57UL ] ; t11 [ 313UL ] = X [ 58UL ] * 0.1 ; t11 [ 314UL ] = 0.0 ; t11 [ 315UL
] = 0.0 ; t11 [ 316UL ] = X [ 18UL ] ; t11 [ 317UL ] = X [ 70UL ] ; t11 [
318UL ] = X [ 71UL ] * 0.1 ; t11 [ 319UL ] = X [ 57UL ] ; t11 [ 320UL ] = X [
58UL ] * 0.1 ; t11 [ 321UL ] = 0.0 ; t11 [ 322UL ] = X [ 20UL ] * 0.1 ; t11 [
323UL ] = 0.0 ; t11 [ 324UL ] = X [ 18UL ] ; t11 [ 325UL ] = X [ 75UL ] ; t11
[ 326UL ] = X [ 62UL ] ; t11 [ 327UL ] = X [ 21UL ] ; t11 [ 328UL ] = X [
79UL ] ; t11 [ 329UL ] = X [ 87UL ] ; t11 [ 330UL ] = X [ 102UL ] ; t11 [
331UL ] = X [ 70UL ] ; t11 [ 332UL ] = X [ 71UL ] * 0.1 ; t11 [ 333UL ] = X [
75UL ] ; t11 [ 334UL ] = X [ 103UL ] ; t11 [ 335UL ] = X [ 79UL ] ; t11 [
336UL ] = X [ 104UL ] ; t11 [ 337UL ] = X [ 57UL ] ; t11 [ 338UL ] = X [ 58UL
] * 0.1 ; t11 [ 339UL ] = X [ 62UL ] ; t11 [ 340UL ] = X [ 105UL ] ; t11 [
341UL ] = X [ 87UL ] ; t11 [ 342UL ] = X [ 106UL ] ; t11 [ 343UL ] = X [ 18UL
] ; t11 [ 344UL ] = 0.0 ; t11 [ 345UL ] = X [ 18UL ] ; t11 [ 346UL ] = ( ( X
[ 18UL ] * - 0.5 + X [ 19UL ] * 0.5 ) - X [ 102UL ] ) * 1000.0 ; t11 [ 347UL
] = X [ 18UL ] - 273.15 ; t11 [ 348UL ] = 0.0 ; t11 [ 349UL ] = 1.0 ; t11 [
350UL ] = X [ 7UL ] ; t11 [ 351UL ] = X [ 107UL ] ; t11 [ 352UL ] =
House_thermal_network_Room_1_Air_roof_convection_Q * 1000.0 ; t11 [ 353UL ] =
House_thermal_network_Room_1_Air_roof_convection_Q * 1.1083325392634502 ; t11
[ 354UL ] = 0.0 ; t11 [ 355UL ] = X [ 7UL ] ; t11 [ 356UL ] = 0.0 ; t11 [
357UL ] = X [ 7UL ] ; t11 [ 358UL ] = ( ( ( ( X [ 6UL ] * 0.5 + X [ 7UL ] * -
1.4772562855228961 ) + X [ 107UL ] * 0.90225628552289616 ) - X [ 108UL ] ) +
X [ 109UL ] * 0.075 ) * 1000.0 ; t11 [ 359UL ] = X [ 7UL ] - 273.15 ; t11 [
360UL ] = 0.0 ; t11 [ 361UL ] = 1.0 ; t11 [ 362UL ] = X [ 7UL ] ; t11 [ 363UL
] = House_thermal_network_Room_1_Air_wall_convection_B_T ; t11 [ 364UL ] = X
[ 108UL ] * 1000.0 ; t11 [ 365UL ] = X [ 108UL ] * 0.43554006968641112 ; t11
[ 366UL ] = 0.0 ; t11 [ 367UL ] = X [ 7UL ] ; t11 [ 368UL ] = X [ 109UL ] ;
t11 [ 369UL ] = House_thermal_network_Room_1_Air_window_convection_Q * 1000.0
; t11 [ 370UL ] = House_thermal_network_Room_1_Air_window_convection_Q *
13.333333333333334 ; t11 [ 371UL ] = 0.0 ; t11 [ 372UL ] = X [ 107UL ] ; t11
[ 373UL ] = X [ 22UL ] ; t11 [ 374UL ] =
House_thermal_network_Room_1_Half_roof_air_conduction_Q * 1000.0 ; t11 [
375UL ] = House_thermal_network_Room_1_Half_roof_air_conduction_Q *
34.999974924108955 ; t11 [ 376UL ] = 0.0 ; t11 [ 377UL ] = X [ 22UL ] ; t11 [
378UL ] = House_thermal_network_Room_1_Half_roof_atmosphere_conduction_B_ ;
t11 [ 379UL ] =
House_thermal_network_Room_1_Half_roof_atmosphere_conduction_Q * 1000.0 ; t11
[ 380UL ] = House_thermal_network_Room_1_Half_roof_atmosphere_conduction_Q *
34.999974924108955 ; t11 [ 381UL ] = 0.0 ; t11 [ 382UL ] =
House_thermal_network_Room_1_Air_wall_convection_B_T ; t11 [ 383UL ] = X [
23UL ] ; t11 [ 384UL ] =
House_thermal_network_Room_1_Half_wall_air_conduction_Q * 1000.0 ; t11 [
385UL ] = House_thermal_network_Room_1_Half_wall_air_conduction_Q *
27.507793874931231 ; t11 [ 386UL ] = 0.0 ; t11 [ 387UL ] = X [ 23UL ] ; t11 [
388UL ] = House_thermal_network_Room_1_Half_wall_atmosphere_conduction_B_ ;
t11 [ 389UL ] =
House_thermal_network_Room_1_Half_wall_atmosphere_conduction_Q * 1000.0 ; t11
[ 390UL ] = House_thermal_network_Room_1_Half_wall_atmosphere_conduction_Q *
27.507793874931231 ; t11 [ 391UL ] = 0.0 ; t11 [ 392UL ] = X [ 109UL ] ; t11
[ 393UL ] = X [ 24UL ] ; t11 [ 394UL ] =
House_thermal_network_Room_1_Half_window_air_conduction_Q * 1000.0 ; t11 [
395UL ] = House_thermal_network_Room_1_Half_window_air_conduction_Q *
2.1367521367521367 ; t11 [ 396UL ] = 0.0 ; t11 [ 397UL ] = X [ 24UL ] ; t11 [
398UL ] = X [ 112UL ] ; t11 [ 399UL ] =
House_thermal_network_Room_1_Half_window_atmosphere_conduction_ * 1000.0 ;
t11 [ 400UL ] =
House_thermal_network_Room_1_Half_window_atmosphere_conduction_ *
2.1367521367521367 ; t11 [ 401UL ] = 0.0 ; t11 [ 402UL ] = X [ 7UL ] ; t11 [
403UL ] = House_thermal_network_Room_1_Half_roof_atmosphere_conduction_B_ ;
t11 [ 404UL ] = U_idx_2 ; t11 [ 405UL ] =
House_thermal_network_Room_1_Half_roof_atmosphere_conduction_Q * 1000.0 ; t11
[ 406UL ] = House_thermal_network_Room_1_Half_roof_atmosphere_conduction_Q *
0.34999974924108951 ; t11 [ 407UL ] = 0.0 ; t11 [ 408UL ] = X [ 107UL ] ; t11
[ 409UL ] = U_idx_2 ; t11 [ 410UL ] =
House_thermal_network_Room_1_Roof_atmosphere_leakage_Q * 1000.0 ; t11 [ 411UL
] = House_thermal_network_Room_1_Roof_atmosphere_leakage_Q *
3.4999974924108948 ; t11 [ 412UL ] = 0.0 ; t11 [ 413UL ] = X [ 22UL ] ; t11 [
414UL ] = 0.0 ; t11 [ 415UL ] = X [ 22UL ] ; t11 [ 416UL ] = X [ 110UL ] *
1000.0 ; t11 [ 417UL ] = X [ 22UL ] - 273.15 ; t11 [ 418UL ] = 0.0 ; t11 [
419UL ] = 1.0 ; t11 [ 420UL ] = U_idx_2 ; t11 [ 421UL ] = 0.0 ; t11 [ 422UL ]
= X [ 7UL ] ; t11 [ 423UL ] = 0.0 ; t11 [ 424UL ] = X [ 7UL ] ; t11 [ 425UL ]
= 0.0 ; t11 [ 426UL ] = X [ 7UL ] ; t11 [ 427UL ] = X [ 7UL ] - 273.15 ; t11
[ 428UL ] = 0.0 ; t11 [ 429UL ] = U_idx_2 ; t11 [ 430UL ] = ( ( ( ( ( ( ( ( (
( X [ 7UL ] * 0.52425333333333335 + X [ 22UL ] * - 0.028571449041558377 ) + X
[ 23UL ] * - 0.036353333333333335 ) + X [ 24UL ] * 0.468 ) + X [ 107UL ] *
0.31428593945714223 ) + X [ 108UL ] * - 0.22833333333333333 ) + X [ 109UL ] *
0.019200000000000002 ) + X [ 112UL ] * - 0.468 ) - X [ 110UL ] ) - X [ 111UL
] ) + U_idx_2 * - 0.79281449041558383 ) * 1000.0 ; t11 [ 431UL ] = U_idx_2 ;
t11 [ 432UL ] = U_idx_2 ; t11 [ 433UL ] =
House_thermal_network_Room_1_Half_wall_atmosphere_conduction_B_ ; t11 [ 434UL
] = U_idx_2 ; t11 [ 435UL ] =
House_thermal_network_Room_1_Half_wall_atmosphere_conduction_Q * 1000.0 ; t11
[ 436UL ] = House_thermal_network_Room_1_Half_wall_atmosphere_conduction_Q *
0.30744004919040785 ; t11 [ 437UL ] = 0.0 ; t11 [ 438UL ] =
House_thermal_network_Room_1_Air_wall_convection_B_T ; t11 [ 439UL ] =
U_idx_2 ; t11 [ 440UL ] =
House_thermal_network_Room_1_Wall_atmosphere_leakage_Q * 1000.0 ; t11 [ 441UL
] = House_thermal_network_Room_1_Wall_atmosphere_leakage_Q *
2.0496003279360524 ; t11 [ 442UL ] = 0.0 ; t11 [ 443UL ] = X [ 23UL ] ; t11 [
444UL ] = 0.0 ; t11 [ 445UL ] = X [ 23UL ] ; t11 [ 446UL ] = X [ 111UL ] *
1000.0 ; t11 [ 447UL ] = X [ 23UL ] - 273.15 ; t11 [ 448UL ] = 0.0 ; t11 [
449UL ] = 1.0 ; t11 [ 450UL ] = X [ 112UL ] ; t11 [ 451UL ] = U_idx_2 ; t11 [
452UL ] = House_thermal_network_Room_1_Half_window_atmosphere_conduction_ *
1000.0 ; t11 [ 453UL ] =
House_thermal_network_Room_1_Half_window_atmosphere_conduction_ *
10.416666666666666 ; t11 [ 454UL ] = 0.0 ; t11 [ 455UL ] = X [ 109UL ] ; t11
[ 456UL ] = U_idx_2 ; t11 [ 457UL ] =
House_thermal_network_Room_1_Window_atmosphere_leakage_Q * 1000.0 ; t11 [
458UL ] = House_thermal_network_Room_1_Window_atmosphere_leakage_Q *
52.083333333333329 ; t11 [ 459UL ] = 0.0 ; t11 [ 460UL ] = X [ 24UL ] ; t11 [
461UL ] = 0.0 ; t11 [ 462UL ] = X [ 24UL ] ; t11 [ 463UL ] = ( ( X [ 24UL ] *
- 0.936 + X [ 109UL ] * 0.468 ) + X [ 112UL ] * 0.468 ) * 1000.0 ; t11 [
464UL ] = X [ 24UL ] - 273.15 ; t11 [ 465UL ] = 0.0 ; t11 [ 466UL ] = 1.0 ;
t11 [ 467UL ] = X [ 11UL ] ; t11 [ 468UL ] = X [ 113UL ] ; t11 [ 469UL ] =
House_thermal_network_Room_2_Air_roof_convection_Q * 1000.0 ; t11 [ 470UL ] =
House_thermal_network_Room_2_Air_roof_convection_Q * 1.1083325392634502 ; t11
[ 471UL ] = 0.0 ; t11 [ 472UL ] = X [ 11UL ] ; t11 [ 473UL ] = 0.0 ; t11 [
474UL ] = X [ 11UL ] ; t11 [ 475UL ] = ( ( ( ( X [ 10UL ] * 0.5 + X [ 11UL ]
* - 1.4522562855228962 ) + X [ 113UL ] * 0.90225628552289616 ) - X [ 114UL ]
) + X [ 115UL ] * 0.05 ) * 1000.0 ; t11 [ 476UL ] = X [ 11UL ] - 273.15 ; t11
[ 477UL ] = 0.0 ; t11 [ 478UL ] = 1.0 ; t11 [ 479UL ] = X [ 11UL ] ; t11 [
480UL ] = House_thermal_network_Room_2_Air_wall_convection_B_T ; t11 [ 481UL
] = X [ 114UL ] * 1000.0 ; t11 [ 482UL ] = X [ 114UL ] * 0.5 ; t11 [ 483UL ]
= 0.0 ; t11 [ 484UL ] = X [ 11UL ] ; t11 [ 485UL ] = X [ 115UL ] ; t11 [
486UL ] = House_thermal_network_Room_2_Air_window_convection_Q * 1000.0 ; t11
[ 487UL ] = House_thermal_network_Room_2_Air_window_convection_Q * 20.0 ; t11
[ 488UL ] = 0.0 ; t11 [ 489UL ] = X [ 113UL ] ; t11 [ 490UL ] = X [ 25UL ] ;
t11 [ 491UL ] = House_thermal_network_Room_2_Half_roof_air_conduction_Q *
1000.0 ; t11 [ 492UL ] =
House_thermal_network_Room_2_Half_roof_air_conduction_Q * 34.999974924108955
; t11 [ 493UL ] = 0.0 ; t11 [ 494UL ] = X [ 25UL ] ; t11 [ 495UL ] =
House_thermal_network_Room_2_Half_roof_atmosphere_conduction_B_ ; t11 [ 496UL
] = House_thermal_network_Room_2_Half_roof_atmosphere_conduction_Q * 1000.0 ;
t11 [ 497UL ] =
House_thermal_network_Room_2_Half_roof_atmosphere_conduction_Q *
34.999974924108955 ; t11 [ 498UL ] = 0.0 ; t11 [ 499UL ] =
House_thermal_network_Room_2_Air_wall_convection_B_T ; t11 [ 500UL ] = X [
26UL ] ; t11 [ 501UL ] =
House_thermal_network_Room_2_Half_wall_air_conduction_Q * 1000.0 ; t11 [
502UL ] = House_thermal_network_Room_2_Half_wall_air_conduction_Q *
31.578947368421058 ; t11 [ 503UL ] = 0.0 ; t11 [ 504UL ] = X [ 26UL ] ; t11 [
505UL ] = House_thermal_network_Room_2_Half_wall_atmosphere_conduction_B_ ;
t11 [ 506UL ] =
House_thermal_network_Room_2_Half_wall_atmosphere_conduction_Q * 1000.0 ; t11
[ 507UL ] = House_thermal_network_Room_2_Half_wall_atmosphere_conduction_Q *
31.578947368421058 ; t11 [ 508UL ] = 0.0 ; t11 [ 509UL ] = X [ 115UL ] ; t11
[ 510UL ] = X [ 27UL ] ; t11 [ 511UL ] =
House_thermal_network_Room_2_Half_window_air_conduction_Q * 1000.0 ; t11 [
512UL ] = House_thermal_network_Room_2_Half_window_air_conduction_Q *
3.2051282051282053 ; t11 [ 513UL ] = 0.0 ; t11 [ 514UL ] = X [ 27UL ] ; t11 [
515UL ] = X [ 118UL ] ; t11 [ 516UL ] =
House_thermal_network_Room_2_Half_window_atmosphere_conduction_ * 1000.0 ;
t11 [ 517UL ] =
House_thermal_network_Room_2_Half_window_atmosphere_conduction_ *
3.2051282051282053 ; t11 [ 518UL ] = 0.0 ; t11 [ 519UL ] = X [ 11UL ] ; t11 [
520UL ] = House_thermal_network_Room_2_Half_roof_atmosphere_conduction_B_ ;
t11 [ 521UL ] = U_idx_3 ; t11 [ 522UL ] =
House_thermal_network_Room_2_Half_roof_atmosphere_conduction_Q * 1000.0 ; t11
[ 523UL ] = House_thermal_network_Room_2_Half_roof_atmosphere_conduction_Q *
0.34999974924108951 ; t11 [ 524UL ] = 0.0 ; t11 [ 525UL ] = X [ 113UL ] ; t11
[ 526UL ] = U_idx_3 ; t11 [ 527UL ] =
House_thermal_network_Room_2_Roof_atmosphere_leakage_Q * 1000.0 ; t11 [ 528UL
] = House_thermal_network_Room_2_Roof_atmosphere_leakage_Q *
3.4999974924108948 ; t11 [ 529UL ] = 0.0 ; t11 [ 530UL ] = X [ 25UL ] ; t11 [
531UL ] = 0.0 ; t11 [ 532UL ] = X [ 25UL ] ; t11 [ 533UL ] = X [ 116UL ] *
1000.0 ; t11 [ 534UL ] = X [ 25UL ] - 273.15 ; t11 [ 535UL ] = 0.0 ; t11 [
536UL ] = 1.0 ; t11 [ 537UL ] = U_idx_3 ; t11 [ 538UL ] = 0.0 ; t11 [ 539UL ]
= X [ 11UL ] ; t11 [ 540UL ] = 0.0 ; t11 [ 541UL ] = X [ 11UL ] ; t11 [ 542UL
] = 0.0 ; t11 [ 543UL ] = X [ 11UL ] ; t11 [ 544UL ] = X [ 11UL ] - 273.15 ;
t11 [ 545UL ] = 0.0 ; t11 [ 546UL ] = U_idx_3 ; t11 [ 547UL ] = ( ( ( ( ( ( (
( ( ( X [ 11UL ] * 0.45666666666666661 + X [ 25UL ] * - 0.028571449041558377
) + X [ 26UL ] * - 0.031666666666666662 ) + X [ 27UL ] * 0.312 ) + X [ 113UL
] * 0.31428593945714223 ) + X [ 114UL ] * - 0.2283333333333333 ) + X [ 115UL
] * 0.0128 ) + X [ 118UL ] * - 0.312 ) - X [ 116UL ] ) - X [ 117UL ] ) +
U_idx_3 * - 0.7235144904155838 ) * 1000.0 ; t11 [ 548UL ] = U_idx_3 ; t11 [
549UL ] = U_idx_3 ; t11 [ 550UL ] =
House_thermal_network_Room_2_Half_wall_atmosphere_conduction_B_ ; t11 [ 551UL
] = U_idx_3 ; t11 [ 552UL ] =
House_thermal_network_Room_2_Half_wall_atmosphere_conduction_Q * 1000.0 ; t11
[ 553UL ] = House_thermal_network_Room_2_Half_wall_atmosphere_conduction_Q *
0.35294117647058826 ; t11 [ 554UL ] = 0.0 ; t11 [ 555UL ] =
House_thermal_network_Room_2_Air_wall_convection_B_T ; t11 [ 556UL ] =
U_idx_3 ; t11 [ 557UL ] =
House_thermal_network_Room_2_Wall_atmosphere_leakage_Q * 1000.0 ; t11 [ 558UL
] = House_thermal_network_Room_2_Wall_atmosphere_leakage_Q *
2.3529411764705888 ; t11 [ 559UL ] = 0.0 ; t11 [ 560UL ] = X [ 26UL ] ; t11 [
561UL ] = 0.0 ; t11 [ 562UL ] = X [ 26UL ] ; t11 [ 563UL ] = X [ 117UL ] *
1000.0 ; t11 [ 564UL ] = X [ 26UL ] - 273.15 ; t11 [ 565UL ] = 0.0 ; t11 [
566UL ] = 1.0 ; t11 [ 567UL ] = X [ 118UL ] ; t11 [ 568UL ] = U_idx_3 ; t11 [
569UL ] = House_thermal_network_Room_2_Half_window_atmosphere_conduction_ *
1000.0 ; t11 [ 570UL ] =
House_thermal_network_Room_2_Half_window_atmosphere_conduction_ * 15.625 ;
t11 [ 571UL ] = 0.0 ; t11 [ 572UL ] = X [ 115UL ] ; t11 [ 573UL ] = U_idx_3 ;
t11 [ 574UL ] = House_thermal_network_Room_2_Window_atmosphere_leakage_Q *
1000.0 ; t11 [ 575UL ] =
House_thermal_network_Room_2_Window_atmosphere_leakage_Q * 78.125 ; t11 [
576UL ] = 0.0 ; t11 [ 577UL ] = X [ 27UL ] ; t11 [ 578UL ] = 0.0 ; t11 [
579UL ] = X [ 27UL ] ; t11 [ 580UL ] = ( ( X [ 27UL ] * - 0.624 + X [ 115UL ]
* 0.312 ) + X [ 118UL ] * 0.312 ) * 1000.0 ; t11 [ 581UL ] = X [ 27UL ] -
273.15 ; t11 [ 582UL ] = 0.0 ; t11 [ 583UL ] = 1.0 ; t11 [ 584UL ] = X [ 15UL
] ; t11 [ 585UL ] = X [ 119UL ] ; t11 [ 586UL ] =
House_thermal_network_Room_3_Air_roof_convection_Q * 1000.0 ; t11 [ 587UL ] =
House_thermal_network_Room_3_Air_roof_convection_Q * 1.1083325392634502 ; t11
[ 588UL ] = 0.0 ; t11 [ 589UL ] = X [ 15UL ] ; t11 [ 590UL ] = 0.0 ; t11 [
591UL ] = X [ 15UL ] ; t11 [ 592UL ] = ( ( ( ( X [ 14UL ] * 0.5 + X [ 15UL ]
* - 1.4522562855228962 ) + X [ 119UL ] * 0.90225628552289616 ) - X [ 120UL ]
) + X [ 121UL ] * 0.05 ) * 1000.0 ; t11 [ 593UL ] = X [ 15UL ] - 273.15 ; t11
[ 594UL ] = 0.0 ; t11 [ 595UL ] = 1.0 ; t11 [ 596UL ] = X [ 15UL ] ; t11 [
597UL ] = House_thermal_network_Room_3_Air_wall_convection_B_T ; t11 [ 598UL
] = X [ 120UL ] * 1000.0 ; t11 [ 599UL ] = X [ 120UL ] * 0.573394495412844 ;
t11 [ 600UL ] = 0.0 ; t11 [ 601UL ] = X [ 15UL ] ; t11 [ 602UL ] = X [ 121UL
] ; t11 [ 603UL ] = House_thermal_network_Room_3_Air_window_convection_Q *
1000.0 ; t11 [ 604UL ] = House_thermal_network_Room_3_Air_window_convection_Q
* 20.0 ; t11 [ 605UL ] = 0.0 ; t11 [ 606UL ] = X [ 119UL ] ; t11 [ 607UL ] =
X [ 28UL ] ; t11 [ 608UL ] =
House_thermal_network_Room_3_Half_roof_air_conduction_Q * 1000.0 ; t11 [
609UL ] = House_thermal_network_Room_3_Half_roof_air_conduction_Q *
34.999974924108955 ; t11 [ 610UL ] = 0.0 ; t11 [ 611UL ] = X [ 28UL ] ; t11 [
612UL ] = House_thermal_network_Room_3_Half_roof_atmosphere_conduction_B_ ;
t11 [ 613UL ] =
House_thermal_network_Room_3_Half_roof_atmosphere_conduction_Q * 1000.0 ; t11
[ 614UL ] = House_thermal_network_Room_3_Half_roof_atmosphere_conduction_Q *
34.999974924108955 ; t11 [ 615UL ] = 0.0 ; t11 [ 616UL ] =
House_thermal_network_Room_3_Air_wall_convection_B_T ; t11 [ 617UL ] = X [
29UL ] ; t11 [ 618UL ] =
House_thermal_network_Room_3_Half_wall_air_conduction_Q * 1000.0 ; t11 [
619UL ] = House_thermal_network_Room_3_Half_wall_air_conduction_Q *
36.214389183969104 ; t11 [ 620UL ] = 0.0 ; t11 [ 621UL ] = X [ 29UL ] ; t11 [
622UL ] = House_thermal_network_Room_3_Half_wall_atmosphere_conduction_B_ ;
t11 [ 623UL ] =
House_thermal_network_Room_3_Half_wall_atmosphere_conduction_Q * 1000.0 ; t11
[ 624UL ] = House_thermal_network_Room_3_Half_wall_atmosphere_conduction_Q *
36.214389183969104 ; t11 [ 625UL ] = 0.0 ; t11 [ 626UL ] = X [ 121UL ] ; t11
[ 627UL ] = X [ 30UL ] ; t11 [ 628UL ] =
House_thermal_network_Room_3_Half_window_air_conduction_Q * 1000.0 ; t11 [
629UL ] = House_thermal_network_Room_3_Half_window_air_conduction_Q *
3.2051282051282053 ; t11 [ 630UL ] = 0.0 ; t11 [ 631UL ] = X [ 30UL ] ; t11 [
632UL ] = X [ 124UL ] ; t11 [ 633UL ] =
House_thermal_network_Room_3_Half_window_atmosphere_conduction_ * 1000.0 ;
t11 [ 634UL ] =
House_thermal_network_Room_3_Half_window_atmosphere_conduction_ *
3.2051282051282053 ; t11 [ 635UL ] = 0.0 ; t11 [ 636UL ] = X [ 15UL ] ; t11 [
637UL ] = House_thermal_network_Room_3_Half_roof_atmosphere_conduction_B_ ;
t11 [ 638UL ] = U_idx_4 ; t11 [ 639UL ] =
House_thermal_network_Room_3_Half_roof_atmosphere_conduction_Q * 1000.0 ; t11
[ 640UL ] = House_thermal_network_Room_3_Half_roof_atmosphere_conduction_Q *
0.34999974924108951 ; t11 [ 641UL ] = 0.0 ; t11 [ 642UL ] = X [ 119UL ] ; t11
[ 643UL ] = U_idx_4 ; t11 [ 644UL ] =
House_thermal_network_Room_3_Roof_atmosphere_leakage_Q * 1000.0 ; t11 [ 645UL
] = House_thermal_network_Room_3_Roof_atmosphere_leakage_Q *
3.4999974924108948 ; t11 [ 646UL ] = 0.0 ; t11 [ 647UL ] = X [ 28UL ] ; t11 [
648UL ] = 0.0 ; t11 [ 649UL ] = X [ 28UL ] ; t11 [ 650UL ] = X [ 122UL ] *
1000.0 ; t11 [ 651UL ] = X [ 28UL ] - 273.15 ; t11 [ 652UL ] = 0.0 ; t11 [
653UL ] = 1.0 ; t11 [ 654UL ] = U_idx_4 ; t11 [ 655UL ] = 0.0 ; t11 [ 656UL ]
= X [ 15UL ] ; t11 [ 657UL ] = 0.0 ; t11 [ 658UL ] = X [ 15UL ] ; t11 [ 659UL
] = 0.0 ; t11 [ 660UL ] = X [ 15UL ] ; t11 [ 661UL ] = X [ 15UL ] - 273.15 ;
t11 [ 662UL ] = 0.0 ; t11 [ 663UL ] = U_idx_4 ; t11 [ 664UL ] = ( ( ( ( ( ( (
( ( ( X [ 15UL ] * 0.39821333333333331 + X [ 28UL ] * - 0.028571449041558377
) + X [ 29UL ] * - 0.02761333333333333 ) + X [ 30UL ] * 0.312 ) + X [ 119UL ]
* 0.31428593945714223 ) + X [ 120UL ] * - 0.22833333333333333 ) + X [ 121UL ]
* 0.0128 ) + X [ 124UL ] * - 0.312 ) - X [ 122UL ] ) - X [ 123UL ] ) +
U_idx_4 * - 0.6691144904155838 ) * 1000.0 ; t11 [ 665UL ] = U_idx_4 ; t11 [
666UL ] = U_idx_4 ; t11 [ 667UL ] =
House_thermal_network_Room_3_Half_wall_atmosphere_conduction_B_ ; t11 [ 668UL
] = U_idx_4 ; t11 [ 669UL ] =
House_thermal_network_Room_3_Half_wall_atmosphere_conduction_Q * 1000.0 ; t11
[ 670UL ] = House_thermal_network_Room_3_Half_wall_atmosphere_conduction_Q *
0.40474905558553687 ; t11 [ 671UL ] = 0.0 ; t11 [ 672UL ] =
House_thermal_network_Room_3_Air_wall_convection_B_T ; t11 [ 673UL ] =
U_idx_4 ; t11 [ 674UL ] =
House_thermal_network_Room_3_Wall_atmosphere_leakage_Q * 1000.0 ; t11 [ 675UL
] = House_thermal_network_Room_3_Wall_atmosphere_leakage_Q *
2.698327037236913 ; t11 [ 676UL ] = 0.0 ; t11 [ 677UL ] = X [ 29UL ] ; t11 [
678UL ] = 0.0 ; t11 [ 679UL ] = X [ 29UL ] ; t11 [ 680UL ] = X [ 123UL ] *
1000.0 ; t11 [ 681UL ] = X [ 29UL ] - 273.15 ; t11 [ 682UL ] = 0.0 ; t11 [
683UL ] = 1.0 ; t11 [ 684UL ] = X [ 124UL ] ; t11 [ 685UL ] = U_idx_4 ; t11 [
686UL ] = House_thermal_network_Room_3_Half_window_atmosphere_conduction_ *
1000.0 ; t11 [ 687UL ] =
House_thermal_network_Room_3_Half_window_atmosphere_conduction_ * 15.625 ;
t11 [ 688UL ] = 0.0 ; t11 [ 689UL ] = X [ 121UL ] ; t11 [ 690UL ] = U_idx_4 ;
t11 [ 691UL ] = House_thermal_network_Room_3_Window_atmosphere_leakage_Q *
1000.0 ; t11 [ 692UL ] =
House_thermal_network_Room_3_Window_atmosphere_leakage_Q * 78.125 ; t11 [
693UL ] = 0.0 ; t11 [ 694UL ] = X [ 30UL ] ; t11 [ 695UL ] = 0.0 ; t11 [
696UL ] = X [ 30UL ] ; t11 [ 697UL ] = ( ( X [ 30UL ] * - 0.624 + X [ 121UL ]
* 0.312 ) + X [ 124UL ] * 0.312 ) * 1000.0 ; t11 [ 698UL ] = X [ 30UL ] -
273.15 ; t11 [ 699UL ] = 0.0 ; t11 [ 700UL ] = 1.0 ; t11 [ 701UL ] = X [ 19UL
] ; t11 [ 702UL ] = X [ 125UL ] ; t11 [ 703UL ] =
House_thermal_network_Room_4_Air_roof_convection_Q * 1000.0 ; t11 [ 704UL ] =
House_thermal_network_Room_4_Air_roof_convection_Q * 1.1083325392634502 ; t11
[ 705UL ] = 0.0 ; t11 [ 706UL ] = X [ 19UL ] ; t11 [ 707UL ] = 0.0 ; t11 [
708UL ] = X [ 19UL ] ; t11 [ 709UL ] = ( ( ( ( X [ 18UL ] * 0.5 + X [ 19UL ]
* - 1.4522562855228962 ) + X [ 125UL ] * 0.90225628552289616 ) - X [ 126UL ]
) + X [ 127UL ] * 0.05 ) * 1000.0 ; t11 [ 710UL ] = X [ 19UL ] - 273.15 ; t11
[ 711UL ] = 0.0 ; t11 [ 712UL ] = 1.0 ; t11 [ 713UL ] = X [ 19UL ] ; t11 [
714UL ] = House_thermal_network_Room_4_Air_wall_convection_B_T ; t11 [ 715UL
] = X [ 126UL ] * 1000.0 ; t11 [ 716UL ] = X [ 126UL ] * 0.702247191011236 ;
t11 [ 717UL ] = 0.0 ; t11 [ 718UL ] = X [ 19UL ] ; t11 [ 719UL ] = X [ 127UL
] ; t11 [ 720UL ] = House_thermal_network_Room_4_Air_window_convection_Q *
1000.0 ; t11 [ 721UL ] = House_thermal_network_Room_4_Air_window_convection_Q
* 20.0 ; t11 [ 722UL ] = 0.0 ; t11 [ 723UL ] = X [ 125UL ] ; t11 [ 724UL ] =
X [ 31UL ] ; t11 [ 725UL ] =
House_thermal_network_Room_4_Half_roof_air_conduction_Q * 1000.0 ; t11 [
726UL ] = House_thermal_network_Room_4_Half_roof_air_conduction_Q *
34.999974924108955 ; t11 [ 727UL ] = 0.0 ; t11 [ 728UL ] = X [ 31UL ] ; t11 [
729UL ] = House_thermal_network_Room_4_Half_roof_atmosphere_conduction_B_ ;
t11 [ 730UL ] =
House_thermal_network_Room_4_Half_roof_atmosphere_conduction_Q * 1000.0 ; t11
[ 731UL ] = House_thermal_network_Room_4_Half_roof_atmosphere_conduction_Q *
34.999974924108955 ; t11 [ 732UL ] = 0.0 ; t11 [ 733UL ] =
House_thermal_network_Room_4_Air_wall_convection_B_T ; t11 [ 734UL ] = X [
32UL ] ; t11 [ 735UL ] =
House_thermal_network_Room_4_Half_wall_air_conduction_Q * 1000.0 ; t11 [
736UL ] = House_thermal_network_Room_4_Half_wall_air_conduction_Q *
44.352454169130695 ; t11 [ 737UL ] = 0.0 ; t11 [ 738UL ] = X [ 32UL ] ; t11 [
739UL ] = House_thermal_network_Room_4_Half_wall_atmosphere_conduction_B_ ;
t11 [ 740UL ] =
House_thermal_network_Room_4_Half_wall_atmosphere_conduction_Q * 1000.0 ; t11
[ 741UL ] = House_thermal_network_Room_4_Half_wall_atmosphere_conduction_Q *
44.352454169130695 ; t11 [ 742UL ] = 0.0 ; t11 [ 743UL ] = X [ 127UL ] ; t11
[ 744UL ] = X [ 33UL ] ; t11 [ 745UL ] =
House_thermal_network_Room_4_Half_window_air_conduction_Q * 1000.0 ; t11 [
746UL ] = House_thermal_network_Room_4_Half_window_air_conduction_Q *
3.2051282051282053 ; t11 [ 747UL ] = 0.0 ; t11 [ 748UL ] = X [ 33UL ] ; t11 [
749UL ] = X [ 130UL ] ; t11 [ 750UL ] =
House_thermal_network_Room_4_Half_window_atmosphere_conduction_ * 1000.0 ;
t11 [ 751UL ] =
House_thermal_network_Room_4_Half_window_atmosphere_conduction_ *
3.2051282051282053 ; t11 [ 752UL ] = 0.0 ; t11 [ 753UL ] = X [ 19UL ] ; t11 [
754UL ] = House_thermal_network_Room_4_Half_roof_atmosphere_conduction_B_ ;
t11 [ 755UL ] = U_idx_5 ; t11 [ 756UL ] =
House_thermal_network_Room_4_Half_roof_atmosphere_conduction_Q * 1000.0 ; t11
[ 757UL ] = House_thermal_network_Room_4_Half_roof_atmosphere_conduction_Q *
0.34999974924108951 ; t11 [ 758UL ] = 0.0 ; t11 [ 759UL ] = X [ 125UL ] ; t11
[ 760UL ] = U_idx_5 ; t11 [ 761UL ] =
House_thermal_network_Room_4_Roof_atmosphere_leakage_Q * 1000.0 ; t11 [ 762UL
] = House_thermal_network_Room_4_Roof_atmosphere_leakage_Q *
3.4999974924108948 ; t11 [ 763UL ] = 0.0 ; t11 [ 764UL ] = X [ 31UL ] ; t11 [
765UL ] = 0.0 ; t11 [ 766UL ] = X [ 31UL ] ; t11 [ 767UL ] = X [ 128UL ] *
1000.0 ; t11 [ 768UL ] = X [ 31UL ] - 273.15 ; t11 [ 769UL ] = 0.0 ; t11 [
770UL ] = 1.0 ; t11 [ 771UL ] = U_idx_5 ; t11 [ 772UL ] = 0.0 ; t11 [ 773UL ]
= X [ 19UL ] ; t11 [ 774UL ] = 0.0 ; t11 [ 775UL ] = X [ 19UL ] ; t11 [ 776UL
] = 0.0 ; t11 [ 777UL ] = X [ 19UL ] ; t11 [ 778UL ] = X [ 19UL ] - 273.15 ;
t11 [ 779UL ] = 0.0 ; t11 [ 780UL ] = U_idx_5 ; t11 [ 781UL ] = ( ( ( ( ( ( (
( ( ( X [ 19UL ] * 0.32514666666666669 + X [ 31UL ] * - 0.028571449041558377
) + X [ 32UL ] * - 0.022546666666666666 ) + X [ 33UL ] * 0.312 ) + X [ 125UL
] * 0.31428593945714223 ) + X [ 126UL ] * - 0.22833333333333339 ) + X [ 127UL
] * 0.0128 ) + X [ 130UL ] * - 0.312 ) - X [ 128UL ] ) - X [ 129UL ] ) +
U_idx_5 * - 0.601114490415584 ) * 1000.0 ; t11 [ 782UL ] = U_idx_5 ; t11 [
783UL ] = U_idx_5 ; t11 [ 784UL ] =
House_thermal_network_Room_4_Half_wall_atmosphere_conduction_B_ ; t11 [ 785UL
] = U_idx_5 ; t11 [ 786UL ] =
House_thermal_network_Room_4_Half_wall_atmosphere_conduction_Q * 1000.0 ; t11
[ 787UL ] = House_thermal_network_Room_4_Half_wall_atmosphere_conduction_Q *
0.49570389953734295 ; t11 [ 788UL ] = 0.0 ; t11 [ 789UL ] =
House_thermal_network_Room_4_Air_wall_convection_B_T ; t11 [ 790UL ] =
U_idx_5 ; t11 [ 791UL ] =
House_thermal_network_Room_4_Wall_atmosphere_leakage_Q * 1000.0 ; t11 [ 792UL
] = House_thermal_network_Room_4_Wall_atmosphere_leakage_Q *
3.3046926635822866 ; t11 [ 793UL ] = 0.0 ; t11 [ 794UL ] = X [ 32UL ] ; t11 [
795UL ] = 0.0 ; t11 [ 796UL ] = X [ 32UL ] ; t11 [ 797UL ] = X [ 129UL ] *
1000.0 ; t11 [ 798UL ] = X [ 32UL ] - 273.15 ; t11 [ 799UL ] = 0.0 ; t11 [
800UL ] = 1.0 ; t11 [ 801UL ] = X [ 130UL ] ; t11 [ 802UL ] = U_idx_5 ; t11 [
803UL ] = House_thermal_network_Room_4_Half_window_atmosphere_conduction_ *
1000.0 ; t11 [ 804UL ] =
House_thermal_network_Room_4_Half_window_atmosphere_conduction_ * 15.625 ;
t11 [ 805UL ] = 0.0 ; t11 [ 806UL ] = X [ 127UL ] ; t11 [ 807UL ] = U_idx_5 ;
t11 [ 808UL ] = House_thermal_network_Room_4_Window_atmosphere_leakage_Q *
1000.0 ; t11 [ 809UL ] =
House_thermal_network_Room_4_Window_atmosphere_leakage_Q * 78.125 ; t11 [
810UL ] = 0.0 ; t11 [ 811UL ] = X [ 33UL ] ; t11 [ 812UL ] = 0.0 ; t11 [
813UL ] = X [ 33UL ] ; t11 [ 814UL ] = ( ( X [ 33UL ] * - 0.624 + X [ 127UL ]
* 0.312 ) + X [ 130UL ] * 0.312 ) * 1000.0 ; t11 [ 815UL ] = X [ 33UL ] -
273.15 ; t11 [ 816UL ] = 0.0 ; t11 [ 817UL ] = 1.0 ; t11 [ 818UL ] = X [ 57UL
] ; t11 [ 819UL ] = X [ 58UL ] * 0.1 ; for ( b = 0 ; b < 820 ; b ++ ) { out .
mX [ b ] = t11 [ b ] ; } ( void ) LC ; ( void ) t19 ; return 0 ; }
