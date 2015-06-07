## RcppFaddeeva [![Build Status](https://travis-ci.org/eddelbuettel/rcppfaddeeva.svg)](https://travis-ci.org/eddelbuettel/rcppfaddeeva) [![License](http://img.shields.io/badge/license-GPL%20%28%3E=%202%29-brightgreen.svg?style=flat)](http://www.gnu.org/licenses/gpl-2.0.html)

Wrapper to the
[Faddeeva Package by Steven G. Johnson](http://ab-initio.mit.edu/wiki/index.php/Faddeeva_Package)

## What is Faddeeva?

The [Faddeeva](http://ab-initio.mit.edu/wiki/index.php/Faddeeva_Package)
package provides C++ code to compute the various error functions of arbitrary
complex arguments, in particular the Faddeeva function, error function,
complementary error function, scalad complementary error function and
imaginary error function as well as the Dawson function.  With these, Voigt
functions, Fresnel integrals and more can be computed.

### Why this package?

It provides a nice example for creating Rcpp wrappers for a small and
self-contained C++ library, in this case a single header file along with a
single code file.

## Authors

Baptiste Auguie and Dirk Eddelbuettel

### License

GPL (>= 2)


