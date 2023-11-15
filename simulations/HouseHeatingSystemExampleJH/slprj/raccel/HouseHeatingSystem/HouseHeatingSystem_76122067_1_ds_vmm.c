#include "ne_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_sys_struct.h"
#include "HouseHeatingSystem_76122067_1_ds_vmm.h"
#include "HouseHeatingSystem_76122067_1_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_externals.h"
#include "HouseHeatingSystem_76122067_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T HouseHeatingSystem_76122067_1_ds_vmm ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out
; ( void ) t1 ; ( void ) LC ; out = t2 -> mVMM ; out . mX [ 0 ] = true ; out
. mX [ 1 ] = true ; out . mX [ 2 ] = true ; out . mX [ 3 ] = true ; out . mX
[ 4 ] = true ; out . mX [ 5 ] = true ; out . mX [ 6 ] = true ; out . mX [ 7 ]
= true ; out . mX [ 8 ] = true ; out . mX [ 9 ] = true ; out . mX [ 10 ] =
true ; out . mX [ 11 ] = true ; out . mX [ 12 ] = false ; out . mX [ 13 ] =
false ; out . mX [ 14 ] = true ; out . mX [ 15 ] = true ; out . mX [ 16 ] =
true ; out . mX [ 17 ] = true ; out . mX [ 18 ] = false ; out . mX [ 19 ] =
false ; out . mX [ 20 ] = true ; out . mX [ 21 ] = true ; out . mX [ 22 ] =
true ; out . mX [ 23 ] = true ; out . mX [ 24 ] = false ; out . mX [ 25 ] =
false ; out . mX [ 26 ] = true ; out . mX [ 27 ] = true ; out . mX [ 28 ] =
true ; out . mX [ 29 ] = true ; out . mX [ 30 ] = false ; out . mX [ 31 ] =
false ; out . mX [ 32 ] = true ; out . mX [ 33 ] = true ; out . mX [ 34 ] =
true ; out . mX [ 35 ] = true ; out . mX [ 36 ] = false ; out . mX [ 37 ] =
false ; out . mX [ 38 ] = false ; out . mX [ 39 ] = false ; out . mX [ 40 ] =
false ; out . mX [ 41 ] = false ; out . mX [ 42 ] = false ; out . mX [ 43 ] =
false ; out . mX [ 44 ] = false ; out . mX [ 45 ] = false ; out . mX [ 46 ] =
false ; out . mX [ 47 ] = false ; ( void ) LC ; ( void ) t2 ; return 0 ; }
