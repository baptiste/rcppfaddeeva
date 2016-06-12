// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RcppFaddeeva.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// Faddeeva_w
std::vector< std::complex<double> > Faddeeva_w(const std::vector< std::complex<double> >& z, double relerr);
static SEXP RcppFaddeeva_Faddeeva_w_try(SEXP zSEXP, SEXP relerrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< const std::vector< std::complex<double> >& >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type relerr(relerrSEXP);
    __result = Rcpp::wrap(Faddeeva_w(z, relerr));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP RcppFaddeeva_Faddeeva_w(SEXP zSEXP, SEXP relerrSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(RcppFaddeeva_Faddeeva_w_try(zSEXP, relerrSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// erfcx
std::vector< std::complex<double> > erfcx(const std::vector< std::complex<double> >& z, double relerr);
static SEXP RcppFaddeeva_erfcx_try(SEXP zSEXP, SEXP relerrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< const std::vector< std::complex<double> >& >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type relerr(relerrSEXP);
    __result = Rcpp::wrap(erfcx(z, relerr));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP RcppFaddeeva_erfcx(SEXP zSEXP, SEXP relerrSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(RcppFaddeeva_erfcx_try(zSEXP, relerrSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// erf
std::vector< std::complex<double> > erf(const std::vector< std::complex<double> >& z, double relerr);
static SEXP RcppFaddeeva_erf_try(SEXP zSEXP, SEXP relerrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< const std::vector< std::complex<double> >& >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type relerr(relerrSEXP);
    __result = Rcpp::wrap(erf(z, relerr));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP RcppFaddeeva_erf(SEXP zSEXP, SEXP relerrSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(RcppFaddeeva_erf_try(zSEXP, relerrSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// erfi
std::vector< std::complex<double> > erfi(const std::vector< std::complex<double> >& z, double relerr);
static SEXP RcppFaddeeva_erfi_try(SEXP zSEXP, SEXP relerrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< const std::vector< std::complex<double> >& >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type relerr(relerrSEXP);
    __result = Rcpp::wrap(erfi(z, relerr));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP RcppFaddeeva_erfi(SEXP zSEXP, SEXP relerrSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(RcppFaddeeva_erfi_try(zSEXP, relerrSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// erfc
std::vector< std::complex<double> > erfc(const std::vector< std::complex<double> >& z, double relerr);
static SEXP RcppFaddeeva_erfc_try(SEXP zSEXP, SEXP relerrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< const std::vector< std::complex<double> >& >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type relerr(relerrSEXP);
    __result = Rcpp::wrap(erfc(z, relerr));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP RcppFaddeeva_erfc(SEXP zSEXP, SEXP relerrSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(RcppFaddeeva_erfc_try(zSEXP, relerrSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// Dawson
std::vector< std::complex<double> > Dawson(const std::vector< std::complex<double> >& z, double relerr);
static SEXP RcppFaddeeva_Dawson_try(SEXP zSEXP, SEXP relerrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< const std::vector< std::complex<double> >& >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type relerr(relerrSEXP);
    __result = Rcpp::wrap(Dawson(z, relerr));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP RcppFaddeeva_Dawson(SEXP zSEXP, SEXP relerrSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(RcppFaddeeva_Dawson_try(zSEXP, relerrSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}

// validate (ensure exported C++ functions exist before calling them)
static int RcppFaddeeva_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("std::vector< std::complex<double> >(*Faddeeva_w)(const std::vector< std::complex<double> >&,double)");
        signatures.insert("std::vector< std::complex<double> >(*erfcx)(const std::vector< std::complex<double> >&,double)");
        signatures.insert("std::vector< std::complex<double> >(*erf)(const std::vector< std::complex<double> >&,double)");
        signatures.insert("std::vector< std::complex<double> >(*erfi)(const std::vector< std::complex<double> >&,double)");
        signatures.insert("std::vector< std::complex<double> >(*erfc)(const std::vector< std::complex<double> >&,double)");
        signatures.insert("std::vector< std::complex<double> >(*Dawson)(const std::vector< std::complex<double> >&,double)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP RcppFaddeeva_RcppExport_registerCCallable() { 
    R_RegisterCCallable("RcppFaddeeva", "RcppFaddeeva_Faddeeva_w", (DL_FUNC)RcppFaddeeva_Faddeeva_w_try);
    R_RegisterCCallable("RcppFaddeeva", "RcppFaddeeva_erfcx", (DL_FUNC)RcppFaddeeva_erfcx_try);
    R_RegisterCCallable("RcppFaddeeva", "RcppFaddeeva_erf", (DL_FUNC)RcppFaddeeva_erf_try);
    R_RegisterCCallable("RcppFaddeeva", "RcppFaddeeva_erfi", (DL_FUNC)RcppFaddeeva_erfi_try);
    R_RegisterCCallable("RcppFaddeeva", "RcppFaddeeva_erfc", (DL_FUNC)RcppFaddeeva_erfc_try);
    R_RegisterCCallable("RcppFaddeeva", "RcppFaddeeva_Dawson", (DL_FUNC)RcppFaddeeva_Dawson_try);
    R_RegisterCCallable("RcppFaddeeva", "RcppFaddeeva_RcppExport_validate", (DL_FUNC)RcppFaddeeva_RcppExport_validate);
    return R_NilValue;
}
