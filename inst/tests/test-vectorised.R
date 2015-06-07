library(RcppFaddeeva)

z <- 1:10 + 1i

stopifnot(all.equal(length(z),
                    length(erfcx(z)), 
                    length(erf(z)),
                    length(erfi(z)),
                    length(erfc(z)),
                    length(Dawson(z)),
                    length(Faddeeva_w(z))))
          