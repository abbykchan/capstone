#include "ne_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_sys_struct.h"
#include "HouseHeatingSystem_76122067_1_ds_dxm_p.h"
#include "HouseHeatingSystem_76122067_1_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_externals.h"
#include "HouseHeatingSystem_76122067_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T HouseHeatingSystem_76122067_1_ds_dxm_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static int32_T
_cg_const_1 [ 132 ] = { 0 , 4 , 8 , 12 , 16 , 20 , 24 , 24 , 24 , 28 , 32 ,
32 , 32 , 36 , 40 , 40 , 40 , 44 , 48 , 48 , 48 , 52 , 56 , 56 , 56 , 56 , 56
, 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 , 56 ,
56 , 56 , 56 , 56 , 56 , 56 , 56 , 58 , 58 , 58 , 58 , 58 , 58 , 60 , 60 , 60
, 60 , 60 , 60 , 60 , 60 , 60 , 60 , 60 , 60 , 60 , 60 , 64 , 64 , 64 , 64 ,
64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64
, 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 ,
64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64
, 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 } ;
PmSparsityPattern out ; int32_T b ; ( void ) t1 ; ( void ) LC ; out = t2 ->
mDXM_P ; out . mNumCol = 131UL ; out . mNumRow = 48UL ; for ( b = 0 ; b < 132
; b ++ ) { out . mJc [ b ] = _cg_const_1 [ b ] ; } out . mIr [ 0 ] = 0 ; out
. mIr [ 1 ] = 1 ; out . mIr [ 2 ] = 2 ; out . mIr [ 3 ] = 3 ; out . mIr [ 4 ]
= 0 ; out . mIr [ 5 ] = 1 ; out . mIr [ 6 ] = 2 ; out . mIr [ 7 ] = 3 ; out .
mIr [ 8 ] = 4 ; out . mIr [ 9 ] = 5 ; out . mIr [ 10 ] = 6 ; out . mIr [ 11 ]
= 7 ; out . mIr [ 12 ] = 4 ; out . mIr [ 13 ] = 5 ; out . mIr [ 14 ] = 6 ;
out . mIr [ 15 ] = 7 ; out . mIr [ 16 ] = 8 ; out . mIr [ 17 ] = 9 ; out .
mIr [ 18 ] = 10 ; out . mIr [ 19 ] = 11 ; out . mIr [ 20 ] = 8 ; out . mIr [
21 ] = 9 ; out . mIr [ 22 ] = 10 ; out . mIr [ 23 ] = 11 ; out . mIr [ 24 ] =
14 ; out . mIr [ 25 ] = 15 ; out . mIr [ 26 ] = 16 ; out . mIr [ 27 ] = 17 ;
out . mIr [ 28 ] = 14 ; out . mIr [ 29 ] = 15 ; out . mIr [ 30 ] = 16 ; out .
mIr [ 31 ] = 17 ; out . mIr [ 32 ] = 20 ; out . mIr [ 33 ] = 21 ; out . mIr [
34 ] = 22 ; out . mIr [ 35 ] = 23 ; out . mIr [ 36 ] = 20 ; out . mIr [ 37 ]
= 21 ; out . mIr [ 38 ] = 22 ; out . mIr [ 39 ] = 23 ; out . mIr [ 40 ] = 26
; out . mIr [ 41 ] = 27 ; out . mIr [ 42 ] = 28 ; out . mIr [ 43 ] = 29 ; out
. mIr [ 44 ] = 26 ; out . mIr [ 45 ] = 27 ; out . mIr [ 46 ] = 28 ; out . mIr
[ 47 ] = 29 ; out . mIr [ 48 ] = 32 ; out . mIr [ 49 ] = 33 ; out . mIr [ 50
] = 34 ; out . mIr [ 51 ] = 35 ; out . mIr [ 52 ] = 32 ; out . mIr [ 53 ] =
33 ; out . mIr [ 54 ] = 34 ; out . mIr [ 55 ] = 35 ; out . mIr [ 56 ] = 6 ;
out . mIr [ 57 ] = 7 ; out . mIr [ 58 ] = 1 ; out . mIr [ 59 ] = 3 ; out .
mIr [ 60 ] = 4 ; out . mIr [ 61 ] = 5 ; out . mIr [ 62 ] = 6 ; out . mIr [ 63
] = 7 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
