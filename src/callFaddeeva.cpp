#include <Rcpp.h>

using namespace Rcpp;

#include "Faddeeva.h"

//' the scaled complementary error function
//'
//' @inheritParams Faddeeva_w 
//' @describeIn wrap compute erfcx(z) = exp(z^2) erfc(z)
//' @family wrapper
//' @examples 
//' erfcx(1:10 + 1i)
//' @export
// [[Rcpp::export]]
ComplexVector erfcx(const ComplexVector& z, double relerr=0) { 
  std::vector<std::complex<double> > z_ = as< std::vector< std::complex<double> > >(z);
  int N = z.size(), i;
  std::vector< std::complex<double> > result(N);
  for(int i=0; i<N; i++) {
    result[i] = Faddeeva::erfcx(z_[i], relerr);
  }
  return wrap(result);
}

//'  the error function of complex arguments
//'
//' @inheritParams Faddeeva_w 
//' @describeIn wrap compute erf(z)
//' @family wrapper
//' @examples 
//' erf(1:10 + 1i)
//' @export
// [[Rcpp::export]]
ComplexVector erf(const ComplexVector& z, double relerr=0) { 
  std::vector<std::complex<double> > z_ = as< std::vector< std::complex<double> > >(z);
  int N = z.size(), i;
  std::vector< std::complex<double> > result(N);
  for(int i=0; i<N; i++) {
    result[i] = Faddeeva::erf(z_[i], relerr);
  }
  return wrap(result);
}

//' the imaginary error function 
//'
//' @inheritParams Faddeeva_w 
//' @describeIn wrap compute erfi(z) = -i erf(iz)
//' @family wrapper
//' @examples 
//' erfi(1:10 + 1i)
//' @export
// [[Rcpp::export]]
ComplexVector erfi(const ComplexVector& z, double relerr=0) { 
  std::vector<std::complex<double> > z_ = as< std::vector< std::complex<double> > >(z);
  int N = z.size(), i;
  std::vector< std::complex<double> > result(N);
  for(int i=0; i<N; i++) {
    result[i] = Faddeeva::erfi(z_[i], relerr);
  }
  return wrap(result);
}

//' the complementary error function
//'
//' @inheritParams Faddeeva_w 
//' @describeIn wrap compute erfc(z) = 1 - erf(z)
//' @family wrapper
//' @examples 
//' erfc(1:10 + 1i)
//' @export
// [[Rcpp::export]]
ComplexVector erfc(const ComplexVector& z, double relerr=0) { 
  std::vector< std::complex<double> > z_ = as< std::vector< std::complex<double> > >(z);
  int N = z.size(), i;
  std::vector< std::complex<double> > result(N);
  for(int i=0; i<N; i++) {
    result[i] = Faddeeva::erfc(z_[i], relerr);
  }
  return wrap(result);
}

//' the Dawson function
//'
//' @inheritParams Faddeeva_w 
//' @describeIn wrap compute Dawson(z) = sqrt(pi)/2  *  exp(-z^2) * erfi(z)
//' @family wrapper
//' @examples 
//' Dawson(1:10 + 1i)
//' @export
// [[Rcpp::export]]
ComplexVector Dawson(const ComplexVector& z, double relerr=0) { 
  std::vector< std::complex<double> > z_ = as< std::vector< std::complex<double> > >(z);
  int N = z.size(), i;
  std::vector< std::complex<double> > result(N);
  for(int i=0; i<N; i++) {
    result[i] = Faddeeva::Dawson(z_[i], relerr);
  }
  return wrap(result);
}

//' the Faddeeva function
//' @title Faddeeva_w
//' @param z complex vector
//' @param relerr double, requested error
//' @return complex vector
//' @describeIn wrap compute w(z) = exp(-z^2) erfc(-iz)
//' @family wrapper
//' @examples 
//' Faddeeva_w(1:10 + 1i)
//' @export
// [[Rcpp::export]]
ComplexVector Faddeeva_w(const ComplexVector& z, double relerr=0) { 
  std::vector< std::complex<double> > z_ = as< std::vector< std::complex<double> > >(z);
  int N = z.size(), i;
  std::vector< std::complex<double> > result(N);
  for(int i=0; i<N; i++) {
    result[i] = Faddeeva::w(z_[i], relerr);
  }
  return wrap(result);
}


