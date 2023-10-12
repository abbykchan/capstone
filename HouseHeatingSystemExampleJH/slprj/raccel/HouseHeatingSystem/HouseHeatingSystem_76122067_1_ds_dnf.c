#include "ne_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_sys_struct.h"
#include "HouseHeatingSystem_76122067_1_ds_dnf.h"
#include "HouseHeatingSystem_76122067_1_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_externals.h"
#include "HouseHeatingSystem_76122067_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T HouseHeatingSystem_76122067_1_ds_dnf ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out
; ( void ) t1 ; ( void ) LC ; out = t2 -> mDNF ; out . mX [ 0 ] = -
0.037500000000000006 ; out . mX [ 1 ] = - 17.717409766898584 ; out . mX [ 2 ]
= - 1.0 ; out . mX [ 3 ] = - 1.0 ; out . mX [ 4 ] = - 18.816827586206898 ;
out . mX [ 5 ] = - 0.99502487562189068 ; out . mX [ 6 ] = - 1.0 ; out . mX [
7 ] = - 1.0 ; out . mX [ 8 ] = - 1.0 ; out . mX [ 9 ] = - 1.0 ; out . mX [ 10
] = - 1.0 ; out . mX [ 11 ] = - 1.0 ; out . mX [ 12 ] = - 1.0 ; out . mX [ 13
] = - 0.23873212145434708 ; out . mX [ 14 ] = - 0.23873212145434708 ; out .
mX [ 15 ] = - 1.0 ; out . mX [ 16 ] = - 1.0 ; out . mX [ 17 ] = - 0.0 ; out .
mX [ 18 ] = 0.0 ; out . mX [ 19 ] = - 0.0 ; out . mX [ 20 ] = 0.0 ; out . mX
[ 21 ] = - 0.23873212145434708 ; out . mX [ 22 ] = - 0.23873212145434708 ;
out . mX [ 23 ] = - 0.0 ; out . mX [ 24 ] = 0.0 ; out . mX [ 25 ] = - 0.001 ;
out . mX [ 26 ] = - 0.23873212145434708 ; out . mX [ 27 ] = -
0.23873212145434708 ; out . mX [ 28 ] = - 0.001 ; out . mX [ 29 ] = - 0.0 ;
out . mX [ 30 ] = 0.0 ; out . mX [ 31 ] = - 0.0 ; out . mX [ 32 ] = 0.0 ; out
. mX [ 33 ] = - 0.017717409766898583 ; out . mX [ 34 ] = -
0.23873212145434708 ; out . mX [ 35 ] = - 0.23873212145434708 ; out . mX [ 36
] = 100.0 ; out . mX [ 37 ] = - 1.0 ; out . mX [ 38 ] = - 1.0 ; out . mX [ 39
] = - 0.23873212145434708 ; out . mX [ 40 ] = - 0.23873212145434708 ; out .
mX [ 41 ] = - 0.001 ; out . mX [ 42 ] = - 0.001 ; out . mX [ 43 ] = - 1.0 ;
out . mX [ 44 ] = - 1.0 ; out . mX [ 45 ] = - 1.0 ; out . mX [ 46 ] = -
0.23873212145434708 ; out . mX [ 47 ] = - 1.0 ; out . mX [ 48 ] = 100000.0 ;
out . mX [ 49 ] = - 1.0 ; out . mX [ 50 ] = - 1.0 ; ( void ) LC ; ( void ) t2
; return 0 ; }
