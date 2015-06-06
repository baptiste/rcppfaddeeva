
#include <Rcpp.h>
using namespace Rcpp;

#include "Faddeeva.h"

// [[Rcpp::export]]
double Dawson(double x) { // special case for real x
  return Faddeeva::Dawson(x);
}
