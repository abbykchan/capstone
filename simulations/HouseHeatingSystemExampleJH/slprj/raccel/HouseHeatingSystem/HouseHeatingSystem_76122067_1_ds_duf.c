#include "ne_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_sys_struct.h"
#include "HouseHeatingSystem_76122067_1_ds_duf.h"
#include "HouseHeatingSystem_76122067_1_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_externals.h"
#include "HouseHeatingSystem_76122067_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T HouseHeatingSystem_76122067_1_ds_duf ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t46 , NeDsMethodOutput * t47 ) { ETTSf3049b48
b_efOut ; ETTSf3049b48 d_efOut ; ETTSf3049b48 e_efOut ; ETTSf3049b48 efOut ;
ETTSf3049b48 t2 ; ETTSf3049b48 t3 ; PmRealVector out ; real_T X [ 131 ] ;
real_T t22 [ 6 ] ; real_T t26 [ 4 ] ; real_T c_efOut [ 1 ] ; real_T f_efOut [
1 ] ; real_T t24 [ 1 ] ; real_T U_idx_0 ; real_T U_idx_1 ; real_T
intermediate_der1296 ; real_T intermediate_der1310 ; real_T intrm_sf_mf_304 ;
real_T t23_idx_0 ; real_T t29 ; real_T t30 ; real_T t31 ; real_T t40 ; real_T
t41 ; real_T t45 ; size_t t5 [ 1 ] ; size_t t6 [ 1 ] ; size_t t8 [ 1 ] ;
size_t t28 ; int32_T b ; U_idx_0 = t46 -> mU . mX [ 0 ] ; U_idx_1 = t46 -> mU
. mX [ 1 ] ; for ( b = 0 ; b < 131 ; b ++ ) { X [ b ] = t46 -> mX . mX [ b ]
; } out = t47 -> mDUF ; t24 [ 0UL ] = X [ 63UL ] ; t5 [ 0 ] = 11UL ; t6 [ 0 ]
= 1UL ; tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0UL ] , & efOut .
mField1 [ 0UL ] , & efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t24 [ 0UL ] , & t5 [ 0UL ] , & t6 [ 0UL ] ) ; t3 = efOut ;
t24 [ 0UL ] = X [ 58UL ] ; t8 [ 0 ] = 12UL ; tlu2_linear_linear_prelookup ( &
b_efOut . mField0 [ 0UL ] , & b_efOut . mField1 [ 0UL ] , & b_efOut . mField2
[ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t24 [ 0UL ] , & t8
[ 0UL ] , & t6 [ 0UL ] ) ; t2 = b_efOut ; tlu2_2d_linear_linear_value ( &
c_efOut [ 0UL ] , & t3 . mField0 [ 0UL ] , & t3 . mField2 [ 0UL ] , & t2 .
mField0 [ 0UL ] , & t2 . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) )
-> mField4 , & t5 [ 0UL ] , & t8 [ 0UL ] , & t6 [ 0UL ] ) ; t23_idx_0 =
c_efOut [ 0 ] ; t24 [ 0UL ] = X [ 65UL ] ; tlu2_linear_linear_prelookup ( &
d_efOut . mField0 [ 0UL ] , & d_efOut . mField1 [ 0UL ] , & d_efOut . mField2
[ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t24 [ 0UL ] , & t5
[ 0UL ] , & t6 [ 0UL ] ) ; t3 = d_efOut ; t24 [ 0UL ] = X [ 36UL ] ;
tlu2_linear_linear_prelookup ( & e_efOut . mField0 [ 0UL ] , & e_efOut .
mField1 [ 0UL ] , & e_efOut . mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField1 , & t24 [ 0UL ] , & t8 [ 0UL ] , & t6 [ 0UL ] ) ; t2 = e_efOut
; tlu2_2d_linear_linear_value ( & f_efOut [ 0UL ] , & t3 . mField0 [ 0UL ] ,
& t3 . mField2 [ 0UL ] , & t2 . mField0 [ 0UL ] , & t2 . mField2 [ 0UL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t5 [ 0UL ] , & t8 [ 0UL ] , &
t6 [ 0UL ] ) ; t24 [ 0 ] = f_efOut [ 0 ] ; t31 = t24 [ 0UL ] ;
intermediate_der1296 = ( t23_idx_0 + t31 ) / 2.0 ; t31 = U_idx_1 >= 1.0E-5 ?
U_idx_1 : 1.0E-5 ; t40 = X [ 55UL ] * 1014.1 ; intermediate_der1310 = t31 *
1880.0 ; t31 = X [ 55UL ] * 0.005 + t31 * 2.2288401253918497 ; t45 = X [ 56UL
] - t31 ; intrm_sf_mf_304 = t31 / ( t45 == 0.0 ? 1.0E-16 : t45 ) * 1820.0 +
1005.0 ; t41 = U_idx_0 * 0.10471975511965977 * 4.0 ; t29 = cosh ( t41 /
0.0075000000000000006 ) * cosh ( t41 / 0.0075000000000000006 ) ; t30 =
55.850536063818538 * ( 1.0 / ( t29 == 0.0 ? 1.0E-16 : t29 ) ) ; t29 =
intermediate_der1296 * 0.10471975511965977 * 2.0E-5 ; intermediate_der1296 =
( real_T ) ( U_idx_1 >= 1.0E-5 ) ; t41 = intermediate_der1296 * 1880.0 ;
t23_idx_0 = ( t40 + intermediate_der1310 ) * ( t40 + intermediate_der1310 ) ;
U_idx_0 = t40 + intermediate_der1310 ; t23_idx_0 = - ( 288.15 * t40 + 283.15
* intermediate_der1310 ) / ( t23_idx_0 == 0.0 ? 1.0E-16 : t23_idx_0 ) * t41 +
283.15 * t41 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) ; U_idx_0 =
intermediate_der1296 * 2.2288401253918497 ; intermediate_der1310 = - U_idx_0
; t41 = t45 * t45 ; U_idx_0 = ( - t31 / ( t41 == 0.0 ? 1.0E-16 : t41 ) * -
U_idx_0 + U_idx_0 / ( t45 == 0.0 ? 1.0E-16 : t45 ) ) * 1820.0 ; t31 = ( fabs
( X [ 36UL ] - X [ 58UL ] ) * 0.22272727272727275 + 0.05 ) * t30 ; t31 = -
t31 / 26.666666666666664 ; t26 [ 0UL ] = - ( intermediate_der1310 *
intrm_sf_mf_304 + U_idx_0 * t45 ) / 1005.0 ; t26 [ 1UL ] = - (
intermediate_der1296 * 41000.0 / ( X [ 38UL ] == 0.0 ? 1.0E-16 : X [ 38UL ] )
* 1000.0 + t23_idx_0 ) ; t26 [ 2UL ] = - ( intermediate_der1296 /
0.053143921068449361 ) ; t26 [ 3UL ] = - intermediate_der1296 / 1.005 ; t22 [
0UL ] = - t29 ; t22 [ 1UL ] = t31 ; for ( t28 = 0UL ; t28 < 4UL ; t28 ++ ) {
t22 [ t28 + 2UL ] = t26 [ t28 ] ; } out . mX [ 0 ] = t22 [ 0 ] ; out . mX [ 1
] = t22 [ 1 ] ; out . mX [ 2 ] = t22 [ 2 ] ; out . mX [ 3 ] = t22 [ 3 ] ; out
. mX [ 4 ] = t22 [ 4 ] ; out . mX [ 5 ] = t22 [ 5 ] ; ( void ) LC ; ( void )
t47 ; return 0 ; }
