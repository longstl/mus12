////////////////////////////////////////////////////////////////////////////////
// gmp-mparam.h
/* Generated by tuneup.c, 2011-12-03, gcc 4.6 */

#define MUL_KARATSUBA_THRESHOLD          34
#define MUL_TOOM3_THRESHOLD              97
#define MUL_TOOM4_THRESHOLD             438
#define MUL_TOOM8H_THRESHOLD            438

#define SQR_BASECASE_THRESHOLD           11
#define SQR_KARATSUBA_THRESHOLD          68
#define SQR_TOOM3_THRESHOLD              95
#define SQR_TOOM4_THRESHOLD             494
#define SQR_TOOM8_THRESHOLD             494

#define POWM_THRESHOLD                  984

#define HGCD_THRESHOLD                  156
#define GCD_DC_THRESHOLD                527
#define GCDEXT_DC_THRESHOLD             454
#define JACOBI_BASE_METHOD                3

#define DIVREM_1_NORM_THRESHOLD           3
#define DIVREM_1_UNNORM_THRESHOLD         3
#define MOD_1_NORM_THRESHOLD              3
#define MOD_1_UNNORM_THRESHOLD            3
#define USE_PREINV_DIVREM_1               1
#define USE_PREINV_MOD_1                  1
#define DIVREM_2_THRESHOLD                0  /* always */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always */
#define MOD_1_1_THRESHOLD                10
#define MOD_1_2_THRESHOLD                10
#define MOD_1_3_THRESHOLD                23
#define DIVREM_HENSEL_QR_1_THRESHOLD    996
#define RSH_DIVREM_HENSEL_QR_1_THRESHOLD    996
#define DIVREM_EUCLID_HENSEL_THRESHOLD     40

#define ROOTREM_THRESHOLD                 3

#define GET_STR_DC_THRESHOLD             13
#define GET_STR_PRECOMPUTE_THRESHOLD     18
#define SET_STR_DC_THRESHOLD            290
#define SET_STR_PRECOMPUTE_THRESHOLD   1394

#define MUL_FFT_TABLE  { 240, 480, 1216, 1792, 7168, 20480, 81920, 327680, 1835008, 5242880, 0 }
#define MUL_FFT_MODF_THRESHOLD          232
#define MUL_FFT_FULL_THRESHOLD         1312

#define SQR_FFT_TABLE  { 304, 608, 1344, 2304, 7168, 20480, 81920, 196608, 1835008, 5242880, 0 }
#define SQR_FFT_MODF_THRESHOLD          264
#define SQR_FFT_FULL_THRESHOLD         1440

#define MULLOW_BASECASE_THRESHOLD        30
#define MULLOW_DC_THRESHOLD              30
#define MULLOW_MUL_THRESHOLD           1877

#define MULHIGH_BASECASE_THRESHOLD       42
#define MULHIGH_DC_THRESHOLD             42
#define MULHIGH_MUL_THRESHOLD          1877

#define MULMOD_2EXPM1_THRESHOLD          14

#define FAC_UI_THRESHOLD              12757
#define DC_DIV_QR_THRESHOLD              17
#define DC_DIVAPPR_Q_N_THRESHOLD        122
#define INV_DIV_QR_THRESHOLD            693
#define INV_DIVAPPR_Q_N_THRESHOLD       122
#define DC_DIV_Q_THRESHOLD              180
#define INV_DIV_Q_THRESHOLD             595
#define DC_DIVAPPR_Q_THRESHOLD          118
#define INV_DIVAPPR_Q_THRESHOLD        1975
#define DC_BDIV_QR_THRESHOLD             28
#define DC_BDIV_Q_THRESHOLD              84
/* Tuneup completed successfully, took 2566 seconds */

#define MUL_FFT_TABLE2 {{1, 4}, {278, 5}, {292, 4}, {306, 5}, {622, 6}, {650, 5}, {680, 6}, {1476, 7}, {1543, 6}, {1612, 7}, {2727, 8}, {2787, 7}, {3248, 8}, {6957, 9}, {7756, 8}, {8278, 9}, {9850, 8}, {10066, 9}, {13939, 10}, {15535, 9}, {18084, 10}, {19722, 9}, {20154, 10}, {20596, 9}, {21047, 10}, {23970, 9}, {24495, 10}, {27898, 11}, {31091, 10}, {40326, 11}, {47962, 10}, {52305, 11}, {53451, 12}, {63570, 10}, {66386, 11}, {67840, 10}, {69326, 11}, {80681, 10}, {82448, 11}, {98051, 12}, {100199, 11}, {102394, 12}, {127165, 11}, {164920, 12}, {196129, 13}, {254354, 12}, {259924, 11}, {277377, 12}, {329862, 11}, {359720, 12}, {392279, 11}, {427785, 12}, {437153, 13}, {519871, 12}, {531255, 10}, {566925, 11}, {592026, 12}, {719463, 13}, {784582, 12}, {933036, 11}, {995682, 12}, {MP_SIZE_T_MAX,0}}

#define MUL_FFTM_TABLE2 {{1, 4}, {254, 5}, {260, 4}, {278, 5}, {299, 4}, {306, 5}, {622, 6}, {650, 5}, {680, 6}, {1238, 7}, {1294, 6}, {1352, 7}, {3248, 8}, {3393, 7}, {3468, 8}, {3622, 7}, {3784, 8}, {6518, 9}, {6661, 8}, {6807, 9}, {13939, 10}, {15535, 9}, {15876, 10}, {16580, 9}, {16944, 10}, {17696, 9}, {18084, 10}, {27898, 11}, {31091, 10}, {36184, 11}, {39461, 10}, {42113, 11}, {47962, 10}, {49013, 11}, {55819, 12}, {58292, 13}, {62207, 12}, {63570, 11}, {80681, 12}, {95949, 11}, {104637, 12}, {111664, 13}, {114110, 12}, {119163, 13}, {121773, 12}, {127165, 11}, {138676, 12}, {161386, 11}, {164920, 12}, {196129, 13}, {254354, 12}, {329862, 13}, {392279, 14}, {508731, 13}, {519871, 12}, {554776, 13}, {659749, 12}, {719463, 13}, {784582, 12}, {855595, 13}, {874331, 14}, {MP_SIZE_T_MAX,0}}

#define SQR_FFT_TABLE2 {{1, 4}, {344, 5}, {743, 6}, {777, 5}, {813, 6}, {1612, 7}, {2727, 8}, {2849, 7}, {3248, 8}, {3393, 7}, {3468, 8}, {6518, 9}, {6661, 8}, {6957, 9}, {7756, 8}, {8100, 9}, {13939, 10}, {15535, 9}, {16944, 10}, {19722, 9}, {20154, 10}, {23970, 9}, {24495, 10}, {27898, 11}, {31091, 10}, {40326, 11}, {47962, 10}, {52305, 11}, {53451, 12}, {63570, 10}, {64963, 11}, {80681, 10}, {82448, 11}, {98051, 12}, {127165, 11}, {164920, 12}, {196129, 13}, {254354, 12}, {259924, 11}, {265616, 10}, {296001, 11}, {302483, 12}, {329862, 11}, {359720, 12}, {392279, 13}, {519871, 12}, {531255, 11}, {592026, 10}, {631776, 11}, {645611, 12}, {719463, 13}, {784582, 12}, {995682, 13}, {MP_SIZE_T_MAX,0}}

#define SQR_FFTM_TABLE2 {{1, 4}, {306, 5}, {320, 4}, {344, 5}, {368, 4}, {377, 5}, {727, 6}, {777, 5}, {813, 6}, {1476, 7}, {3468, 8}, {6518, 9}, {6661, 8}, {6957, 9}, {13061, 10}, {13347, 9}, {13939, 10}, {15535, 9}, {15876, 10}, {27898, 11}, {31091, 10}, {36184, 11}, {39461, 10}, {40326, 11}, {47962, 10}, {49013, 11}, {55819, 12}, {58292, 13}, {62207, 12}, {63570, 11}, {80681, 12}, {95949, 11}, {104637, 12}, {106929, 13}, {124440, 12}, {127165, 11}, {129950, 12}, {161386, 11}, {164920, 12}, {196129, 13}, {254354, 12}, {329862, 13}, {392279, 14}, {508731, 13}, {519871, 12}, {531255, 11}, {592026, 10}, {631776, 11}, {645611, 12}, {719463, 13}, {784582, 14}, {819320, 12}, {855595, 13}, {874331, 14}, {MP_SIZE_T_MAX,0}}

#define MUL_FFT_FULL_TABLE2 {{16, 1}, {1045, 2}, {1068, 1}, {1219, 2}, {1274, 1}, {1422, 2}, {1454, 1}, {1553, 4}, {1588, 5}, {1623, 1}, {1696, 2}, {1734, 1}, {1811, 2}, {1851, 1}, {2066, 2}, {2112, 1}, {2306, 4}, {2357, 5}, {2409, 1}, {2462, 3}, {2572, 1}, {2807, 2}, {2932, 1}, {2997, 4}, {3063, 3}, {3131, 6}, {3200, 2}, {3271, 1}, {3343, 4}, {3417, 2}, {3492, 3}, {3648, 2}, {3728, 1}, {3894, 2}, {4068, 1}, {4158, 2}, {4250, 1}, {4638, 4}, {4844, 1}, {4951, 3}, {5171, 1}, {5401, 4}, {5520, 1}, {5641, 2}, {5765, 1}, {5892, 4}, {6154, 6}, {6289, 2}, {6568, 1}, {6712, 4}, {6859, 2}, {7321, 4}, {7482, 1}, {7814, 2}, {8161, 1}, {8710, 2}, {8901, 5}, {9296, 1}, {9922, 3}, {10363, 1}, {11803, 4}, {12327, 1}, {12873, 2}, {13155, 1}, {14040, 2}, {14663, 1}, {15993, 2}, {16344, 1}, {17068, 2}, {17824, 1}, {19865, 3}, {20745, 1}, {23628, 2}, {24146, 4}, {24675, 1}, {25769, 2}, {26334, 1}, {28104, 4}, {28720, 1}, {32007, 2}, {35670, 1}, {36452, 4}, {37251, 5}, {38901, 1}, {40624, 3}, {41514, 1}, {47280, 4}, {49374, 3}, {53845, 2}, {55025, 1}, {58721, 4}, {60007, 3}, {62664, 6}, {64037, 9}, {65440, 12}, {66873, 15}, {69835, 12}, {71365, 8}, {72928, 5}, {74525, 4}, {79530, 1}, {81272, 3}, {83052, 2}, {88630, 1}, {94582, 4}, {96654, 7}, {98771, 10}, {100934, 11}, {103145, 9}, {107713, 5}, {110072, 1}, {130905, 2}, {142755, 5}, {149076, 6}, {152341, 3}, {166130, 2}, {197567, 4}, {201894, 1}, {261830, 2}, {267564, 5}, {273423, 7}, {279411, 9}, {291783, 7}, {298173, 6}, {304703, 4}, {325163, 3}, {346997, 2}, {395159, 4}, {412655, 6}, {421691, 8}, {430925, 6}, {450005, 5}, {459859, 1}, {523686, 2}, {535154, 5}, {546873, 2}, {583592, 3}, {609431, 1}, {650350, 2}, {709213, 1}, {790340, 4}, {825333, 1}, {861875, 4}, {880748, 1}, {939883, 3}, {960464, 1}, {MP_SIZE_T_MAX,0}}

#define SQR_FFT_FULL_TABLE2 {{16, 1}, {1422, 2}, {1454, 1}, {1486, 3}, {1519, 1}, {1553, 2}, {1659, 1}, {1696, 2}, {1734, 1}, {1811, 2}, {1851, 1}, {2066, 4}, {2112, 1}, {2306, 4}, {2409, 1}, {2516, 3}, {2572, 4}, {2629, 1}, {2807, 2}, {2932, 1}, {2997, 4}, {3063, 1}, {3131, 2}, {3271, 1}, {3343, 4}, {3417, 1}, {3492, 3}, {3569, 1}, {3648, 4}, {3728, 1}, {3980, 2}, {4068, 1}, {4158, 2}, {4250, 1}, {4740, 4}, {4844, 1}, {4951, 3}, {5171, 1}, {5401, 4}, {5520, 2}, {5765, 1}, {5892, 4}, {6154, 6}, {6289, 2}, {6568, 4}, {6859, 2}, {7321, 1}, {7814, 2}, {8161, 1}, {8710, 2}, {8901, 5}, {9296, 1}, {9922, 3}, {10363, 1}, {10822, 2}, {11550, 1}, {11803, 4}, {12327, 1}, {12873, 2}, {13155, 1}, {14040, 4}, {14348, 2}, {14663, 4}, {14985, 1}, {15993, 2}, {17824, 1}, {19865, 3}, {20745, 1}, {22625, 2}, {23121, 1}, {23628, 2}, {24146, 4}, {24675, 1}, {32007, 2}, {35670, 1}, {37251, 4}, {38067, 5}, {38901, 1}, {40624, 3}, {41514, 1}, {47280, 4}, {49374, 3}, {53845, 1}, {55025, 2}, {56230, 1}, {58721, 4}, {60007, 3}, {62664, 6}, {64037, 8}, {65440, 11}, {66873, 10}, {69835, 6}, {71365, 8}, {72928, 5}, {74525, 4}, {79530, 1}, {81272, 3}, {83052, 2}, {86730, 1}, {94582, 4}, {96654, 7}, {98771, 10}, {103145, 9}, {107713, 5}, {112483, 4}, {114947, 1}, {128099, 2}, {142755, 5}, {149076, 6}, {152341, 3}, {166130, 2}, {185136, 1}, {189190, 2}, {197567, 4}, {201894, 1}, {261830, 2}, {267564, 5}, {273423, 7}, {279411, 9}, {291783, 7}, {298173, 6}, {304703, 4}, {325163, 3}, {346997, 2}, {395159, 4}, {403812, 1}, {523686, 2}, {535154, 5}, {546873, 2}, {583592, 1}, {596372, 3}, {609431, 2}, {622776, 4}, {650350, 2}, {664591, 3}, {694016, 2}, {790340, 4}, {825333, 1}, {981496, 3}, {MP_SIZE_T_MAX,0}}



/////////////////////////////////////////////////
//  vnDev.Games - Trong.LIVE - DAO VAN TRONG   //
////////////////////////////////////////////////////////////////////////////////

