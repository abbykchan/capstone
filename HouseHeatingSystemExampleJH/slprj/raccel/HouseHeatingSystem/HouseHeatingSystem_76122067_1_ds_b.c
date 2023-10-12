#include "ne_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_sys_struct.h"
#include "HouseHeatingSystem_76122067_1_ds_b.h"
#include "HouseHeatingSystem_76122067_1_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_externals.h"
#include "HouseHeatingSystem_76122067_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T HouseHeatingSystem_76122067_1_ds_b ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t8 , NeDsMethodOutput * t9 ) { PmRealVector out
; real_T t0 [ 24 ] ; real_T t1 [ 6 ] ; real_T t2 [ 6 ] ; real_T t3 [ 6 ] ;
real_T t4 [ 6 ] ; size_t t7 ; ( void ) t8 ; ( void ) LC ; out = t9 -> mB ; t1
[ 0UL ] = 0.028571449041558377 ; t1 [ 1UL ] = 0.036353333333333335 ; t1 [ 2UL
] = 0.096 ; t1 [ 3UL ] = - 0.28571449041558383 ; t1 [ 4UL ] = - 0.4879 ; t1 [
5UL ] = - 0.019200000000000002 ; t2 [ 0UL ] = 0.028571449041558377 ; t2 [ 1UL
] = 0.031666666666666662 ; t2 [ 2UL ] = 0.064 ; t2 [ 3UL ] = -
0.28571449041558383 ; t2 [ 4UL ] = - 0.42499999999999993 ; t2 [ 5UL ] = -
0.0128 ; t3 [ 0UL ] = 0.028571449041558377 ; t3 [ 1UL ] = 0.02761333333333333
; t3 [ 2UL ] = 0.064 ; t3 [ 3UL ] = - 0.28571449041558383 ; t3 [ 4UL ] = -
0.3706 ; t3 [ 5UL ] = - 0.0128 ; t4 [ 0UL ] = 0.028571449041558377 ; t4 [ 1UL
] = 0.022546666666666666 ; t4 [ 2UL ] = 0.064 ; t4 [ 3UL ] = -
0.28571449041558383 ; t4 [ 4UL ] = - 0.30260000000000004 ; t4 [ 5UL ] = -
0.0128 ; for ( t7 = 0UL ; t7 < 6UL ; t7 ++ ) { t0 [ t7 ] = t1 [ t7 ] ; } for
( t7 = 0UL ; t7 < 6UL ; t7 ++ ) { t0 [ t7 + 6UL ] = t2 [ t7 ] ; } for ( t7 =
0UL ; t7 < 6UL ; t7 ++ ) { t0 [ t7 + 12UL ] = t3 [ t7 ] ; } for ( t7 = 0UL ;
t7 < 6UL ; t7 ++ ) { t0 [ t7 + 18UL ] = t4 [ t7 ] ; } out . mX [ 0 ] = t0 [ 0
] ; out . mX [ 1 ] = t0 [ 1 ] ; out . mX [ 2 ] = t0 [ 2 ] ; out . mX [ 3 ] =
t0 [ 3 ] ; out . mX [ 4 ] = t0 [ 4 ] ; out . mX [ 5 ] = t0 [ 5 ] ; out . mX [
6 ] = t0 [ 6 ] ; out . mX [ 7 ] = t0 [ 7 ] ; out . mX [ 8 ] = t0 [ 8 ] ; out
. mX [ 9 ] = t0 [ 9 ] ; out . mX [ 10 ] = t0 [ 10 ] ; out . mX [ 11 ] = t0 [
11 ] ; out . mX [ 12 ] = t0 [ 12 ] ; out . mX [ 13 ] = t0 [ 13 ] ; out . mX [
14 ] = t0 [ 14 ] ; out . mX [ 15 ] = t0 [ 15 ] ; out . mX [ 16 ] = t0 [ 16 ]
; out . mX [ 17 ] = t0 [ 17 ] ; out . mX [ 18 ] = t0 [ 18 ] ; out . mX [ 19 ]
= t0 [ 19 ] ; out . mX [ 20 ] = t0 [ 20 ] ; out . mX [ 21 ] = t0 [ 21 ] ; out
. mX [ 22 ] = t0 [ 22 ] ; out . mX [ 23 ] = t0 [ 23 ] ; ( void ) LC ; ( void
) t9 ; return 0 ; }
