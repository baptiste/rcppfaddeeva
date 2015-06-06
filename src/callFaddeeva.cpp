
#include <Rcpp.h>
using namespace Rcpp;

#include "Faddeeva.h"

// [[Rcpp::export]]
double Dawson(double x) { // special case for real x
  return Faddeeva::Dawson(x);
}

// [[Rcpp::export]]
std::complex<double> Faddeeva_w(std::complex<double> z, double relerr) { 
  return Faddeeva::w(z, relerr);
}
