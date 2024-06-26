#include "ne_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_sys_struct.h"
#include "HouseHeatingSystem_76122067_1_ds_dxf_p.h"
#include "HouseHeatingSystem_76122067_1_ds.h"
#include "HouseHeatingSystem_76122067_1_ds_externals.h"
#include "HouseHeatingSystem_76122067_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T HouseHeatingSystem_76122067_1_ds_dxf_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static int32_T
_cg_const_2 [ 350 ] = { 34 , 43 , 44 , 45 , 46 , 43 , 44 , 45 , 46 , 60 , 61
, 36 , 38 , 40 , 42 , 58 , 59 , 60 , 61 , 62 , 63 , 4 , 5 , 66 , 67 , 68 , 69
, 70 , 4 , 5 , 66 , 67 , 68 , 69 , 70 , 75 , 6 , 7 , 75 , 76 , 77 , 78 , 79 ,
6 , 7 , 75 , 76 , 77 , 78 , 79 , 84 , 9 , 10 , 84 , 85 , 86 , 87 , 88 , 9 ,
10 , 84 , 85 , 86 , 87 , 88 , 93 , 12 , 13 , 93 , 94 , 95 , 96 , 97 , 12 , 13
, 93 , 94 , 95 , 96 , 97 , 102 , 15 , 16 , 102 , 103 , 104 , 105 , 106 , 15 ,
16 , 102 , 103 , 104 , 105 , 106 , 37 , 39 , 53 , 54 , 35 , 37 , 39 , 41 , 53
, 54 , 55 , 56 , 57 , 38 , 40 , 58 , 59 , 62 , 63 , 66 , 34 , 48 , 34 , 34 ,
34 , 35 , 41 , 34 , 36 , 42 , 37 , 53 , 38 , 58 , 38 , 62 , 37 , 39 , 43 , 45
, 51 , 52 , 53 , 54 , 57 , 73 , 74 , 75 , 79 , 38 , 40 , 43 , 46 , 58 , 59 ,
60 , 38 , 40 , 43 , 46 , 62 , 63 , 66 , 69 , 37 , 38 , 37 , 38 , 39 , 40 , 47
, 48 , 47 , 51 , 52 , 73 , 74 , 75 , 82 , 83 , 84 , 91 , 92 , 93 , 100 , 101
, 102 , 51 , 52 , 55 , 56 , 57 , 73 , 74 , 82 , 83 , 91 , 92 , 100 , 101 , 51
, 73 , 51 , 82 , 51 , 91 , 51 , 100 , 51 , 52 , 55 , 57 , 51 , 52 , 53 , 54 ,
53 , 54 , 55 , 57 , 58 , 59 , 58 , 59 , 60 , 66 , 64 , 65 , 66 , 71 , 72 , 75
, 80 , 81 , 84 , 89 , 90 , 93 , 98 , 99 , 102 , 64 , 65 , 71 , 72 , 80 , 81 ,
89 , 90 , 98 , 99 , 64 , 71 , 64 , 80 , 64 , 89 , 64 , 98 , 64 , 65 , 66 , 70
, 71 , 72 , 75 , 78 , 64 , 65 , 66 , 70 , 80 , 81 , 84 , 87 , 64 , 65 , 66 ,
70 , 89 , 90 , 93 , 96 , 64 , 65 , 66 , 70 , 98 , 99 , 102 , 105 , 62 , 63 ,
62 , 63 , 64 , 65 , 64 , 65 , 73 , 74 , 75 , 79 , 82 , 83 , 84 , 88 , 73 , 74
, 75 , 79 , 91 , 92 , 93 , 97 , 73 , 74 , 75 , 79 , 100 , 101 , 102 , 106 ,
71 , 72 , 71 , 72 , 73 , 74 , 73 , 74 , 80 , 81 , 80 , 81 , 82 , 83 , 82 , 83
, 89 , 90 , 89 , 90 , 91 , 92 , 91 , 92 , 98 , 99 , 98 , 99 , 100 , 101 , 100
, 101 } ; static int32_T _cg_const_1 [ 132 ] = { 0 , 5 , 9 , 11 , 21 , 28 ,
35 , 36 , 36 , 43 , 50 , 51 , 51 , 58 , 65 , 66 , 66 , 73 , 80 , 81 , 81 , 88
, 95 , 95 , 95 , 95 , 95 , 95 , 95 , 95 , 95 , 95 , 95 , 95 , 95 , 95 , 99 ,
108 , 115 , 117 , 118 , 119 , 122 , 125 , 125 , 127 , 129 , 131 , 144 , 151 ,
159 , 160 , 161 , 161 , 161 , 165 , 167 , 168 , 182 , 195 , 197 , 199 , 201 ,
203 , 207 , 211 , 215 , 217 , 219 , 220 , 221 , 236 , 246 , 248 , 250 , 252 ,
254 , 262 , 270 , 278 , 286 , 288 , 290 , 292 , 294 , 294 , 302 , 310 , 318 ,
320 , 322 , 324 , 326 , 326 , 328 , 330 , 332 , 334 , 334 , 336 , 338 , 340 ,
342 , 342 , 344 , 346 , 348 , 350 , 350 , 350 , 350 , 350 , 350 , 350 , 350 ,
350 , 350 , 350 , 350 , 350 , 350 , 350 , 350 , 350 , 350 , 350 , 350 , 350 ,
350 , 350 , 350 , 350 } ; PmSparsityPattern out ; int32_T b ; ( void ) t1 ; (
void ) LC ; out = t2 -> mDXF_P ; out . mNumCol = 131UL ; out . mNumRow =
131UL ; for ( b = 0 ; b < 132 ; b ++ ) { out . mJc [ b ] = _cg_const_1 [ b ]
; } for ( b = 0 ; b < 350 ; b ++ ) { out . mIr [ b ] = _cg_const_2 [ b ] ; }
( void ) LC ; ( void ) t2 ; return 0 ; }
