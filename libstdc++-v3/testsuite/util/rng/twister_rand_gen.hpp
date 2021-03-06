// -*- C++ -*-

// Copyright (C) 2005, 2006 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the terms
// of the GNU General Public License as published by the Free Software
// Foundation; either version 2, or (at your option) any later
// version.

// This library is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
// USA.

// As a special exception, you may use this file as part of a free
// software library without restriction.  Specifically, if other files
// instantiate templates or use macros or inline functions from this
// file, or you compile this file and link it with other files to
// produce an executable, this file does not by itself cause the
// resulting executable to be covered by the GNU General Public
// License.  This exception does not however invalidate any other
// reasons why the executable file might be covered by the GNU General
// Public License.

// Copyright (C) 2004 Ami Tavory and Vladimir Dreizin, IBM-HRL.

// Permission to use, copy, modify, sell, and distribute this software
// is hereby granted without fee, provided that the above copyright
// notice appears in all copies, and that both that copyright notice
// and this permission notice appear in supporting documentation. None
// of the above authors, nor IBM Haifa Research Laboratories, make any
// representation about the suitability of this software for any
// purpose. It is provided "as is" without express or implied
// warranty.

/**
 * @file twister_rand_gen.hpp
 */

#ifndef PB_DS_TWISTER_RAND_GEN_HPP
#define PB_DS_TWISTER_RAND_GEN_HPP

#include <ctime>
#include <limits.h>
#include <tr1/random>

namespace __gnu_pbds
{
  namespace test
  {
    class twister_rand_gen
    {
    public:
      twister_rand_gen(unsigned int seed = 
		       static_cast<unsigned int>(std::time(0)));

      void
      init(unsigned int seed);

      static unsigned int
      get_time_determined_seed()
      { return(static_cast<unsigned int>(std::time(0))); }

      unsigned long
      get_unsigned_long(unsigned long min = 0, 
			unsigned long max = UINT_MAX - 1);

      double
      get_prob();

    private:
      typedef std::tr1::mt19937 base_generator_t;

    private:
      base_generator_t m_base_generator;
    };
  } // namespace test
} // namespace __gnu_pbds

#endif // #ifndef PB_DS_TWISTER_RAND_GEN_HPP
