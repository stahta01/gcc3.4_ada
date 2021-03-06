// { dg-options "-std=gnu++0x" }

// Copyright (C) 2007
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
// USA.

// 19.1 Exception classes

#include <string>
#include <system_error>
#include <cstring>
#include <testsuite_hooks.h>

// libstdc++/1972
void test01()
{
  bool test __attribute__((unused)) = true;
  std::string s("lack of sunlight, no water error");

  // 1
  std::system_error obj1 = std::system_error(s);

  // 2
  std::system_error obj2(s);

  VERIFY( std::strcmp(obj1.what(), s.data()) == 0 );
  VERIFY( std::strcmp(obj2.what(), s.data()) == 0 );
}

void test02()
{
  bool test __attribute__((unused)) = true;
  std::string s("lack of sunlight error");
  std::system_error x(s);
  
  VERIFY( std::strcmp(x.what(), s.data()) == 0 );
}

int main(void)
{
  test01();
  test02();
  return 0;
}
