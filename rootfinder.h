#ifndef __ROOTFINDER_INCLUDED__
#define __ROOTFINDER_INCLUDED__

namespace rootfinder {

  double newton(double x, double f, double fp);

  double halley(double x, double f, double fp, double fpp);

}

#endif
