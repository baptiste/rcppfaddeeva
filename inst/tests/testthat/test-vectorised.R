library(RcppFaddeeva)
library(testthat)

z <- 1:10 + 1i

context("Checking the vectorised interface")

test_that("All functions are vectorised", {
  
  stopifnot(all.equal(length(z),
                      length(erfcx(z)), 
                      length(erf(z)),
                      length(erfi(z)),
                      length(erfc(z)),
                      length(Dawson(z)),
                      length(Faddeeva_w(z))))
  
})
