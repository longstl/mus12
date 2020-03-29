/* Alpha EV4 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 1999, 2000, 2001, 2002, 2004, 2005 Free Software
Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
MA 02110-1301, USA. */

#define BITS_PER_MP_LIMB 64
#define BYTES_PER_MP_LIMB 8


/* 175MHz 21064 */

/* Generated by tuneup.c, 2005-03-18, gcc 3.2 */

#define MUL_KARATSUBA_THRESHOLD          12
#define MUL_TOOM3_THRESHOLD              68

#define SQR_BASECASE_THRESHOLD            0  /* always */
#define SQR_KARATSUBA_THRESHOLD          22
#define SQR_TOOM3_THRESHOLD              66

#define MULLOW_BASECASE_THRESHOLD         0  /* always */
#define MULLOW_DC_THRESHOLD              36
#define MULLOW_MUL_N_THRESHOLD          236

#define DIV_SB_PREINV_THRESHOLD           0  /* preinv always */
#define DIV_DC_THRESHOLD                 38
#define POWM_THRESHOLD                   53

#define GCD_ACCEL_THRESHOLD               3
#define JACOBI_BASE_METHOD                2

#define DIVREM_1_NORM_THRESHOLD           0  /* preinv always */
#define DIVREM_1_UNNORM_THRESHOLD         0  /* always */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1  /* preinv always */
#define USE_PREINV_MOD_1                  1  /* preinv always */
#define DIVREM_2_THRESHOLD                0  /* preinv always */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always */

#define GET_STR_DC_THRESHOLD             20
#define GET_STR_PRECOMPUTE_THRESHOLD     35
#define SET_STR_THRESHOLD              3296

#define MUL_FFT_TABLE  { 336, 800, 1856, 3328, 7168, 20480, 49152, 196608, 786432, 0 }
#define MUL_FFT_MODF_THRESHOLD          280
#define MUL_FFT_THRESHOLD              1920

#define SQR_FFT_TABLE  { 368, 736, 1728, 3328, 7168, 20480, 49152, 196608, 786432, 0 }
#define SQR_FFT_MODF_THRESHOLD          296
#define SQR_FFT_THRESHOLD              1920


/////////////////////////////////////////////////
//  vnDev.Games - Trong.LIVE - DAO VAN TRONG   //
////////////////////////////////////////////////////////////////////////////////

