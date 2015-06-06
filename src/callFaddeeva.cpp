
#include <Rcpp.h>
using namespace Rcpp;

#include "Faddeeva.h"

// [[Rcpp::export]]
std::vector< std::complex<double> > erfcx(ComplexVector z_, double relerr=0) { 
  std::vector< std::complex<double> > z = as< std::vector< std::complex<double> > >(z_);
  int N = z_.size(), i;
  std::vector< std::complex<double> > result(N);
  for(int i=0; i<N; i++) {
    result[i] = Faddeeva::erfcx(z[i], relerr);
  }
  return result;
}

// [[Rcpp::export]]
std::vector< std::complex<double> > erf(ComplexVector z_, double relerr=0) { 
  std::vector< std::complex<double> > z = as< std::vector< std::complex<double> > >(z_);
  int N = z_.size(), i;
  std::vector< std::complex<double> > result(N);
  for(int i=0; i<N; i++) {
    result[i] = Faddeeva::erf(z[i], relerr);
  }
  return result;
}

// [[Rcpp::export]]
std::vector< std::complex<double> > erfi(ComplexVector z_, double relerr=0) { 
  std::vector< std::complex<double> > z = as< std::vector< std::complex<double> > >(z_);
  int N = z_.size(), i;
  std::vector< std::complex<double> > result(N);
  for(int i=0; i<N; i++) {
    result[i] = Faddeeva::erfi(z[i], relerr);
  }
  return result;
}

// [[Rcpp::export]]
std::vector< std::complex<double> > erfc(ComplexVector z_, double relerr=0) { 
  std::vector< std::complex<double> > z = as< std::vector< std::complex<double> > >(z_);
  int N = z_.size(), i;
  std::vector< std::complex<double> > result(N);
  for(int i=0; i<N; i++) {
    result[i] = Faddeeva::erfc(z[i], relerr);
  }
  return result;
}

// [[Rcpp::export]]
std::vector< std::complex<double> > Dawson(ComplexVector z_, double relerr=0) { 
  std::vector< std::complex<double> > z = as< std::vector< std::complex<double> > >(z_);
  int N = z_.size(), i;
  std::vector< std::complex<double> > result(N);
  for(int i=0; i<N; i++) {
    result[i] = Faddeeva::Dawson(z[i], relerr);
  }
  return result;
}

// [[Rcpp::export]]
std::vector< std::complex<double> > Faddeeva_w(ComplexVector z_, double relerr=0) { 
  std::vector< std::complex<double> > z = as< std::vector< std::complex<double> > >(z_);
  int N = z_.size(), i;
  std::vector< std::complex<double> > result(N);
  for(int i=0; i<N; i++) {
    result[i] = Faddeeva::w(z[i], relerr);
  }
  return result;
}


