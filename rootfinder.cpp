#include "rootfinder.h"

double rootfinder::newton(double x, double f, double fp) {
  return x - ( f / fp );
}

double rootfinder::halley(double x, double f, double fp, double fpp) {
  double n = 2 * f * fp;
  double d = ( 2 * fp * fp ) - ( f * fpp );
  return x - ( n / d );
}
