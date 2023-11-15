#include "ne_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_sys_struct.h"
#include "HouseHeatingSystem_76122067_1_ds_ic.h"
#include "HouseHeatingSystem_76122067_1_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_externals.h"
#include "HouseHeatingSystem_76122067_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T HouseHeatingSystem_76122067_1_ds_ic ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out
; real_T t0 [ 131 ] ; real_T P_R_idx_0 ; real_T P_R_idx_1 ; real_T P_R_idx_10
; real_T P_R_idx_11 ; real_T P_R_idx_12 ; real_T P_R_idx_13 ; real_T
P_R_idx_14 ; real_T P_R_idx_15 ; real_T P_R_idx_16 ; real_T P_R_idx_17 ;
real_T P_R_idx_18 ; real_T P_R_idx_19 ; real_T P_R_idx_2 ; real_T P_R_idx_3 ;
real_T P_R_idx_4 ; real_T P_R_idx_5 ; real_T P_R_idx_6 ; real_T P_R_idx_7 ;
real_T P_R_idx_8 ; real_T P_R_idx_9 ; int32_T b ; ( void ) LC ; P_R_idx_0 =
t1 -> mP_R . mX [ 0 ] ; P_R_idx_1 = t1 -> mP_R . mX [ 1 ] ; P_R_idx_2 = t1 ->
mP_R . mX [ 2 ] ; P_R_idx_3 = t1 -> mP_R . mX [ 3 ] ; P_R_idx_4 = t1 -> mP_R
. mX [ 4 ] ; P_R_idx_5 = t1 -> mP_R . mX [ 5 ] ; P_R_idx_6 = t1 -> mP_R . mX
[ 6 ] ; P_R_idx_7 = t1 -> mP_R . mX [ 7 ] ; P_R_idx_8 = t1 -> mP_R . mX [ 8 ]
; P_R_idx_9 = t1 -> mP_R . mX [ 9 ] ; P_R_idx_10 = t1 -> mP_R . mX [ 10 ] ;
P_R_idx_11 = t1 -> mP_R . mX [ 11 ] ; P_R_idx_12 = t1 -> mP_R . mX [ 12 ] ;
P_R_idx_13 = t1 -> mP_R . mX [ 13 ] ; P_R_idx_14 = t1 -> mP_R . mX [ 14 ] ;
P_R_idx_15 = t1 -> mP_R . mX [ 15 ] ; P_R_idx_16 = t1 -> mP_R . mX [ 16 ] ;
P_R_idx_17 = t1 -> mP_R . mX [ 17 ] ; P_R_idx_18 = t1 -> mP_R . mX [ 18 ] ;
P_R_idx_19 = t1 -> mP_R . mX [ 19 ] ; out = t2 -> mIC ; t0 [ 0UL ] = 300.0 ;
t0 [ 1UL ] = 1.01325 ; t0 [ 2UL ] = 293.15 ; t0 [ 3UL ] = 1.01325 ; t0 [ 4UL
] = 1.01325 ; t0 [ 5UL ] = 293.15 ; t0 [ 6UL ] = P_R_idx_0 + 273.15 ; t0 [
7UL ] = P_R_idx_1 + 273.15 ; t0 [ 8UL ] = 1.01325 ; t0 [ 9UL ] = 293.15 ; t0
[ 10UL ] = P_R_idx_2 + 273.15 ; t0 [ 11UL ] = P_R_idx_3 + 273.15 ; t0 [ 12UL
] = 1.01325 ; t0 [ 13UL ] = 293.15 ; t0 [ 14UL ] = P_R_idx_4 + 273.15 ; t0 [
15UL ] = P_R_idx_5 + 273.15 ; t0 [ 16UL ] = 1.01325 ; t0 [ 17UL ] = 293.15 ;
t0 [ 18UL ] = P_R_idx_6 + 273.15 ; t0 [ 19UL ] = P_R_idx_7 + 273.15 ; t0 [
20UL ] = 1.01325 ; t0 [ 21UL ] = 293.15 ; t0 [ 22UL ] = P_R_idx_8 + 273.15 ;
t0 [ 23UL ] = P_R_idx_9 + 273.15 ; t0 [ 24UL ] = P_R_idx_10 + 273.15 ; t0 [
25UL ] = P_R_idx_11 + 273.15 ; t0 [ 26UL ] = P_R_idx_12 + 273.15 ; t0 [ 27UL
] = P_R_idx_13 + 273.15 ; t0 [ 28UL ] = P_R_idx_14 + 273.15 ; t0 [ 29UL ] =
P_R_idx_15 + 273.15 ; t0 [ 30UL ] = P_R_idx_16 + 273.15 ; t0 [ 31UL ] =
P_R_idx_17 + 273.15 ; t0 [ 32UL ] = P_R_idx_18 + 273.15 ; t0 [ 33UL ] =
P_R_idx_19 + 273.15 ; t0 [ 34UL ] = 0.0 ; t0 [ 35UL ] = 300.0 ; t0 [ 36UL ] =
1.0 ; t0 [ 37UL ] = 300.0 ; t0 [ 38UL ] = 0.0 ; t0 [ 39UL ] = 293.15 ; t0 [
40UL ] = 0.0 ; t0 [ 41UL ] = 300.0 ; t0 [ 42UL ] = 300.0 ; t0 [ 43UL ] = 0.0
; t0 [ 44UL ] = 0.0 ; t0 [ 45UL ] = 0.0 ; t0 [ 46UL ] = 0.0 ; t0 [ 47UL ] =
1.0 ; t0 [ 48UL ] = 0.0 ; t0 [ 49UL ] = 0.0 ; t0 [ 50UL ] = 1000.0 ; t0 [
51UL ] = 1000.0 ; t0 [ 52UL ] = 85.0 ; t0 [ 53UL ] = 85.0 ; t0 [ 54UL ] =
85.0 ; t0 [ 55UL ] = 1.0 ; t0 [ 56UL ] = 1.0 ; t0 [ 57UL ] = 300.0 ; t0 [
58UL ] = 1.0 ; t0 [ 59UL ] = 0.0 ; t0 [ 60UL ] = 0.0 ; t0 [ 61UL ] = 0.0 ; t0
[ 62UL ] = 0.0 ; t0 [ 63UL ] = 300.0 ; t0 [ 64UL ] = 85.0 ; t0 [ 65UL ] =
300.0 ; t0 [ 66UL ] = 300.0 ; t0 [ 67UL ] = 85.0 ; t0 [ 68UL ] = 5.0 ; t0 [
69UL ] = 293.15 ; t0 [ 70UL ] = 300.0 ; t0 [ 71UL ] = 1.0 ; t0 [ 72UL ] = 0.0
; t0 [ 73UL ] = 0.0 ; t0 [ 74UL ] = 0.0 ; t0 [ 75UL ] = 0.0 ; t0 [ 76UL ] =
0.0 ; t0 [ 77UL ] = 0.0 ; t0 [ 78UL ] = 0.0 ; t0 [ 79UL ] = 0.0 ; t0 [ 80UL ]
= 300.0 ; t0 [ 81UL ] = 85.0 ; t0 [ 82UL ] = 300.0 ; t0 [ 83UL ] = 85.0 ; t0
[ 84UL ] = 0.0 ; t0 [ 85UL ] = 0.0 ; t0 [ 86UL ] = 0.0 ; t0 [ 87UL ] = 0.0 ;
t0 [ 88UL ] = 300.0 ; t0 [ 89UL ] = 85.0 ; t0 [ 90UL ] = 300.0 ; t0 [ 91UL ]
= 85.0 ; t0 [ 92UL ] = 0.0 ; t0 [ 93UL ] = 300.0 ; t0 [ 94UL ] = 85.0 ; t0 [
95UL ] = 300.0 ; t0 [ 96UL ] = 85.0 ; t0 [ 97UL ] = 0.0 ; t0 [ 98UL ] = 300.0
; t0 [ 99UL ] = 85.0 ; t0 [ 100UL ] = 300.0 ; t0 [ 101UL ] = 85.0 ; t0 [
102UL ] = 0.0 ; t0 [ 103UL ] = 300.0 ; t0 [ 104UL ] = 85.0 ; t0 [ 105UL ] =
300.0 ; t0 [ 106UL ] = 85.0 ; t0 [ 107UL ] = 293.15 ; t0 [ 108UL ] = 0.0 ; t0
[ 109UL ] = 293.15 ; t0 [ 110UL ] = 0.0 ; t0 [ 111UL ] = 0.0 ; t0 [ 112UL ] =
293.15 ; t0 [ 113UL ] = 293.15 ; t0 [ 114UL ] = 0.0 ; t0 [ 115UL ] = 293.15 ;
t0 [ 116UL ] = 0.0 ; t0 [ 117UL ] = 0.0 ; t0 [ 118UL ] = 293.15 ; t0 [ 119UL
] = 293.15 ; t0 [ 120UL ] = 0.0 ; t0 [ 121UL ] = 293.15 ; t0 [ 122UL ] = 0.0
; t0 [ 123UL ] = 0.0 ; t0 [ 124UL ] = 293.15 ; t0 [ 125UL ] = 293.15 ; t0 [
126UL ] = 0.0 ; t0 [ 127UL ] = 293.15 ; t0 [ 128UL ] = 0.0 ; t0 [ 129UL ] =
0.0 ; t0 [ 130UL ] = 293.15 ; for ( b = 0 ; b < 131 ; b ++ ) { out . mX [ b ]
= t0 [ b ] ; } ( void ) LC ; ( void ) t2 ; return 0 ; }
