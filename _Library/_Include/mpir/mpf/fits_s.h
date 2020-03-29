////////////////////////////////////////////////////////////////////////////////
// fits_s.h
/* mpf_fits_s*_p -- test whether an mpf fits a C signed type.

Copyright 2001, 2002 Free Software Foundation, Inc.

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

#include "mpir.h"
#include "gmp-impl.h"


/* Notice this is equivalent to mpz_set_f + mpz_fits_s*_p.  */

int
FUNCTION (mpf_srcptr f)
{
  mp_size_t  fs, fn;
  mp_srcptr  fp;
  mp_exp_t   exp;
  mp_limb_t  fl;

  fs = SIZ(f);
  if (fs == 0)
    return 1;  /* zero fits */

  exp = EXP(f);
  if (exp < 1)
    return 1;  /* -1 < f < 1 truncates to zero, so fits */

  fp = PTR(f);
  fn = ABS (fs);

  if (exp == 1)
    {
      fl = fp[fn-1];
    }
#if GMP_NAIL_BITS != 0
  else if (exp == 2 && MAXIMUM > GMP_NUMB_MAX)
    {
      fl = fp[fn-1];
      if ((fl >> GMP_NAIL_BITS) != 0)
	return 0;
      fl = (fl << GMP_NUMB_BITS);
      if (fn >= 2)
        fl |= fp[fn-2];
    }
#endif
  else
    return 0;

  return fl <= (fs >= 0 ? (mp_limb_t) MAXIMUM : - (mp_limb_t) MINIMUM);
}


/////////////////////////////////////////////////
//  vnDev.Games - Trong.LIVE - DAO VAN TRONG   //
////////////////////////////////////////////////////////////////////////////////

