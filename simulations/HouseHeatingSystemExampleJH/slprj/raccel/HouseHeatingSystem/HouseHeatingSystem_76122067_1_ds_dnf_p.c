#include "ne_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_sys_struct.h"
#include "HouseHeatingSystem_76122067_1_ds_dnf_p.h"
#include "HouseHeatingSystem_76122067_1_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_externals.h"
#include "HouseHeatingSystem_76122067_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T HouseHeatingSystem_76122067_1_ds_dnf_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static int32_T
_cg_const_1 [ 471 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 ,
2 , 2 , 2 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 4 , 6
, 6 , 6 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 ,
7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 9 , 9 , 9 , 9 , 9 , 10 , 10 , 10 , 10 , 11 ,
11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11
, 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 , 11 ,
11 , 11 , 11 , 11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 13
, 13 , 13 , 13 , 13 , 13 , 13 , 13 , 13 , 13 , 13 , 13 , 13 , 13 , 13 , 13 ,
13 , 13 , 13 , 13 , 13 , 15 , 16 , 17 , 19 , 19 , 19 , 19 , 19 , 19 , 19 , 19
, 19 , 19 , 19 , 19 , 19 , 19 , 19 , 19 , 19 , 21 , 21 , 21 , 21 , 21 , 21 ,
21 , 21 , 21 , 21 , 21 , 21 , 21 , 21 , 21 , 21 , 21 , 21 , 21 , 21 , 21 , 21
, 21 , 21 , 21 , 21 , 21 , 21 , 23 , 25 , 25 , 25 , 25 , 25 , 25 , 25 , 25 ,
25 , 25 , 25 , 25 , 25 , 25 , 25 , 25 , 25 , 25 , 25 , 25 , 26 , 26 , 26 , 26
, 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 ,
26 , 26 , 26 , 28 , 28 , 28 , 28 , 28 , 28 , 28 , 28 , 28 , 28 , 28 , 28 , 28
, 28 , 28 , 28 , 28 , 28 , 29 , 29 , 29 , 29 , 29 , 29 , 29 , 29 , 29 , 29 ,
29 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31
, 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 ,
31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 31 , 33 , 33 , 33
, 33 , 33 , 33 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 , 34 ,
34 , 34 , 34 , 34 , 34 , 36 , 36 , 36 , 36 , 36 , 36 , 37 , 37 , 37 , 37 , 37
, 37 , 37 , 37 , 37 , 37 , 37 , 37 , 37 , 38 , 38 , 38 , 38 , 38 , 38 , 38 ,
38 , 38 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39 , 39
, 39 , 39 , 39 , 39 , 41 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 , 42 ,
42 , 42 , 42 , 42 , 43 , 43 , 43 , 43 , 43 , 44 , 44 , 44 , 44 , 44 , 44 , 44
, 44 , 44 , 44 , 44 , 44 , 45 , 46 , 46 , 46 , 46 , 47 , 47 , 47 , 47 , 47 ,
47 , 47 , 47 , 47 , 48 , 48 , 48 , 48 , 48 , 49 , 49 , 49 , 49 , 49 , 49 , 49
, 49 , 49 , 49 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 50 , 51 , 51 ,
51 , 51 , 51 , 51 , 51 , 51 , 51 , 51 , 51 } ; PmSparsityPattern out ;
int32_T b ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDNF_P ; out . mNumCol =
470UL ; out . mNumRow = 131UL ; for ( b = 0 ; b < 471 ; b ++ ) { out . mJc [
b ] = _cg_const_1 [ b ] ; } out . mIr [ 0 ] = 56 ; out . mIr [ 1 ] = 66 ; out
. mIr [ 2 ] = 45 ; out . mIr [ 3 ] = 106 ; out . mIr [ 4 ] = 49 ; out . mIr [
5 ] = 50 ; out . mIr [ 6 ] = 105 ; out . mIr [ 7 ] = 97 ; out . mIr [ 8 ] =
96 ; out . mIr [ 9 ] = 69 ; out . mIr [ 10 ] = 93 ; out . mIr [ 11 ] = 79 ;
out . mIr [ 12 ] = 75 ; out . mIr [ 13 ] = 103 ; out . mIr [ 14 ] = 104 ; out
. mIr [ 15 ] = 70 ; out . mIr [ 16 ] = 84 ; out . mIr [ 17 ] = 105 ; out .
mIr [ 18 ] = 106 ; out . mIr [ 19 ] = 96 ; out . mIr [ 20 ] = 97 ; out . mIr
[ 21 ] = 94 ; out . mIr [ 22 ] = 95 ; out . mIr [ 23 ] = 87 ; out . mIr [ 24
] = 88 ; out . mIr [ 25 ] = 93 ; out . mIr [ 26 ] = 85 ; out . mIr [ 27 ] =
86 ; out . mIr [ 28 ] = 75 ; out . mIr [ 29 ] = 69 ; out . mIr [ 30 ] = 70 ;
out . mIr [ 31 ] = 78 ; out . mIr [ 32 ] = 79 ; out . mIr [ 33 ] = 66 ; out .
mIr [ 34 ] = 76 ; out . mIr [ 35 ] = 77 ; out . mIr [ 36 ] = 57 ; out . mIr [
37 ] = 102 ; out . mIr [ 38 ] = 55 ; out . mIr [ 39 ] = 67 ; out . mIr [ 40 ]
= 68 ; out . mIr [ 41 ] = 84 ; out . mIr [ 42 ] = 102 ; out . mIr [ 43 ] = 46
; out . mIr [ 44 ] = 60 ; out . mIr [ 45 ] = 78 ; out . mIr [ 46 ] = 61 ; out
. mIr [ 47 ] = 60 ; out . mIr [ 48 ] = 55 ; out . mIr [ 49 ] = 88 ; out . mIr
[ 50 ] = 87 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
