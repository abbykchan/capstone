#include "ne_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_sys_struct.h"
#include "HouseHeatingSystem_76122067_1_ds_tduf_p.h"
#include "HouseHeatingSystem_76122067_1_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_externals.h"
#include "HouseHeatingSystem_76122067_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T HouseHeatingSystem_76122067_1_ds_tduf_p ( const NeDynamicSystem * LC
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mTDUF_P ; out
. mNumCol = 6UL ; out . mNumRow = 131UL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 2 ; out . mJc [ 2 ] = 6 ; out . mJc [ 3 ] = 12 ; out . mJc [ 4 ] = 18 ;
out . mJc [ 5 ] = 24 ; out . mJc [ 6 ] = 30 ; out . mIr [ 0 ] = 55 ; out .
mIr [ 1 ] = 56 ; out . mIr [ 2 ] = 47 ; out . mIr [ 3 ] = 48 ; out . mIr [ 4
] = 49 ; out . mIr [ 5 ] = 50 ; out . mIr [ 6 ] = 107 ; out . mIr [ 7 ] = 108
; out . mIr [ 8 ] = 109 ; out . mIr [ 9 ] = 110 ; out . mIr [ 10 ] = 111 ;
out . mIr [ 11 ] = 112 ; out . mIr [ 12 ] = 113 ; out . mIr [ 13 ] = 114 ;
out . mIr [ 14 ] = 115 ; out . mIr [ 15 ] = 116 ; out . mIr [ 16 ] = 117 ;
out . mIr [ 17 ] = 118 ; out . mIr [ 18 ] = 119 ; out . mIr [ 19 ] = 120 ;
out . mIr [ 20 ] = 121 ; out . mIr [ 21 ] = 122 ; out . mIr [ 22 ] = 123 ;
out . mIr [ 23 ] = 124 ; out . mIr [ 24 ] = 125 ; out . mIr [ 25 ] = 126 ;
out . mIr [ 26 ] = 127 ; out . mIr [ 27 ] = 128 ; out . mIr [ 28 ] = 129 ;
out . mIr [ 29 ] = 130 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
