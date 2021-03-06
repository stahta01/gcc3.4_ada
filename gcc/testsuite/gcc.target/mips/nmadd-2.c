/* { dg-do compile } */
/* { dg-mips-options "-O2 -fno-fast-math -ffinite-math-only -mips4 -mhard-float" } */
/* { dg-final { scan-assembler "nmadd.s" } } */
/* { dg-final { scan-assembler "nmadd.d" } } */
/* { dg-final { scan-assembler "nmsub.s" } } */
/* { dg-final { scan-assembler "nmsub.d" } } */

NOMIPS16 float
sub1 (float f, float g, float h)
{
  return -((f * g) + h);
}

NOMIPS16 double
sub2 (double f, double g, double h)
{
  return -((f * g) + h);
}

NOMIPS16 float
sub3 (float f, float g, float h)
{
  return -((f * g) - h);
}

NOMIPS16 double
sub4 (double f, double g, double h)
{
  return -((f * g) - h);
}
