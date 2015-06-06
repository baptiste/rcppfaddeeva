#include <Rcpp.h>

using namespace Rcpp;

#include "Faddeeva.h"

//' compute erfcx(z) = exp(z^2) erfc(z)
//'
//' @param z complex vector
//' @param relerr double, requested error
//' @return complex vector
//' @useDynLib RcppFaddeeva
//' @importFrom Rcpp evalCpp
//' @export
// [[Rcpp::export]]
std::vector<std::complex<double> > erfcx(const ComplexVector& z, 
					  double relerr=0) { 
  std::vector<std::complex<double> > z_ = as< std::vector< std::complex<double> > >(z);
  int N = z.size(), i;
  std::vector< std::complex<double> > result(N);
  for(int i=0; i<N; i++) {
    result[i] = Faddeeva::erfcx(z_[i], relerr);
  }
  return result;
}

//' compute erf(z), the error function of complex arguments
//'
//' @param z complex vector
//' @param relerr double, requested error
//' @return complex vector
//' @export
// [[Rcpp::export]]
std::vector<std::complex<double> > erf(const ComplexVector& z, 
					double relerr=0) { 
  std::vector<std::complex<double> > z_ = as< std::vector< std::complex<double> > >(z);
  int N = z.size(), i;
  std::vector< std::complex<double> > result(N);
  for(int i=0; i<N; i++) {
    result[i] = Faddeeva::erf(z_[i], relerr);
  }
  return result;
}

//' compute erfi(z) = -i erf(iz), the imaginary error function
//'
//' @param z complex vector
//' @param relerr double, requested error
//' @return complex vector
//' @export
// [[Rcpp::export]]
std::vector<std::complex<double> > erfi(const ComplexVector& z, 
					 double relerr=0) { 
  std::vector<std::complex<double> > z_ = as< std::vector< std::complex<double> > >(z);
  int N = z.size(), i;
  std::vector< std::complex<double> > result(N);
  for(int i=0; i<N; i++) {
    result[i] = Faddeeva::erfi(z_[i], relerr);
  }
  return result;
}

//' compute erfc(z) = 1 - erf(z), the complementary error function
//'
//' @param z complex vector
//' @param relerr double, requested error
//' @return complex vector
//' @export
// [[Rcpp::export]]
std::vector< std::complex<double> > erfc(const ComplexVector& z, 
					 double relerr=0) { 
  std::vector< std::complex<double> > z_ = as< std::vector< std::complex<double> > >(z);
  int N = z.size(), i;
  std::vector< std::complex<double> > result(N);
  for(int i=0; i<N; i++) {
    result[i] = Faddeeva::erfc(z_[i], relerr);
  }
  return result;
}

//' compute Dawson(z) = sqrt(pi)/2  *  exp(-z^2) * erfi(z)
//'
//' @param z complex vector
//' @param relerr double, requested error
//' @return complex vector
//' @export
// [[Rcpp::export]]
std::vector< std::complex<double> > Dawson(const ComplexVector& z, 
					   double relerr=0) { 
  std::vector< std::complex<double> > z_ = as< std::vector< std::complex<double> > >(z);
  int N = z.size(), i;
  std::vector< std::complex<double> > result(N);
  for(int i=0; i<N; i++) {
    result[i] = Faddeeva::Dawson(z_[i], relerr);
  }
  return result;
}

//' compute w(z) = exp(-z^2) erfc(-iz) (Faddeeva function)
//'
//' @param z complex vector
//' @param relerr double, requested error
//' @return complex vector
//' @export
// [[Rcpp::export]]
std::vector< std::complex<double> > Faddeeva_w(const ComplexVector& z,
					      double relerr=0) { 
  std::vector< std::complex<double> > z_ = as< std::vector< std::complex<double> > >(z);
  int N = z.size(), i;
  std::vector< std::complex<double> > result(N);
  for(int i=0; i<N; i++) {
    result[i] = Faddeeva::w(z_[i], relerr);
  }
  return result;
}


