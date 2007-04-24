/* { dg-do compile } */
/* { dg-mips-options "-O2 -march=vr4130 -mgp32" } */
/* { dg-final { scan-assembler-times "\tmaccu\t\\\$1," 3 } } */

typedef unsigned int ui;
typedef unsigned long long ull;

ull
f1 (ui x, ui y, ull z)
{
  return (ull) x * y + z;
}

ull
f2 (ui x, ui y, ull z)
{
  return z + (ull) y * x;
}

ull
f3 (ui x, ui y, ull z)
{
  ull t = (ull) x * y;
  int temp = 5;
  if (temp == 5)
    z += t;
  return z;
}
