#include "ne_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_sys_struct.h"
#include "HouseHeatingSystem_76122067_1_ds_m_p.h"
#include "HouseHeatingSystem_76122067_1_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_externals.h"
#include "HouseHeatingSystem_76122067_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T HouseHeatingSystem_76122067_1_ds_m_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static int32_T
_cg_const_1 [ 132 ] = { 0 , 2 , 4 , 6 , 8 , 10 , 12 , 13 , 14 , 16 , 18 , 19
, 20 , 22 , 24 , 25 , 26 , 28 , 30 , 31 , 32 , 34 , 36 , 37 , 38 , 39 , 40 ,
41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48
, 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 ,
48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48
, 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 ,
48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48
, 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 ,
48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 , 48 } ;
PmSparsityPattern out ; int32_T b ; ( void ) t1 ; ( void ) LC ; out = t2 ->
mM_P ; out . mNumCol = 131UL ; out . mNumRow = 131UL ; for ( b = 0 ; b < 132
; b ++ ) { out . mJc [ b ] = _cg_const_1 [ b ] ; } out . mIr [ 0 ] = 0 ; out
. mIr [ 1 ] = 1 ; out . mIr [ 2 ] = 0 ; out . mIr [ 3 ] = 1 ; out . mIr [ 4 ]
= 2 ; out . mIr [ 5 ] = 3 ; out . mIr [ 6 ] = 2 ; out . mIr [ 7 ] = 3 ; out .
mIr [ 8 ] = 4 ; out . mIr [ 9 ] = 5 ; out . mIr [ 10 ] = 4 ; out . mIr [ 11 ]
= 5 ; out . mIr [ 12 ] = 8 ; out . mIr [ 13 ] = 18 ; out . mIr [ 14 ] = 6 ;
out . mIr [ 15 ] = 7 ; out . mIr [ 16 ] = 6 ; out . mIr [ 17 ] = 7 ; out .
mIr [ 18 ] = 11 ; out . mIr [ 19 ] = 22 ; out . mIr [ 20 ] = 9 ; out . mIr [
21 ] = 10 ; out . mIr [ 22 ] = 9 ; out . mIr [ 23 ] = 10 ; out . mIr [ 24 ] =
14 ; out . mIr [ 25 ] = 26 ; out . mIr [ 26 ] = 12 ; out . mIr [ 27 ] = 13 ;
out . mIr [ 28 ] = 12 ; out . mIr [ 29 ] = 13 ; out . mIr [ 30 ] = 17 ; out .
mIr [ 31 ] = 30 ; out . mIr [ 32 ] = 15 ; out . mIr [ 33 ] = 16 ; out . mIr [
34 ] = 15 ; out . mIr [ 35 ] = 16 ; out . mIr [ 36 ] = 19 ; out . mIr [ 37 ]
= 20 ; out . mIr [ 38 ] = 21 ; out . mIr [ 39 ] = 23 ; out . mIr [ 40 ] = 24
; out . mIr [ 41 ] = 25 ; out . mIr [ 42 ] = 27 ; out . mIr [ 43 ] = 28 ; out
. mIr [ 44 ] = 29 ; out . mIr [ 45 ] = 31 ; out . mIr [ 46 ] = 32 ; out . mIr
[ 47 ] = 33 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
