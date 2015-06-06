## for testing
Lorentz <- function(x, x0, gamma){
  gamma / (pi*((x -x0)^2 + gamma^2))
}

## for testing
Gauss <- function(x, x0, sigma){
  dnorm(x, x0, sd = sigma)
}


##' Voigt distribution
##'
##' The Voigt function, corresponding to the convolution of a lorentzian and a gaussian distribution
##' @title Voigt
##' @param x numeric vector
##' @param x0 scalar, peak position
##' @param sigma parameter of the gaussian
##' @param gamma parameter of the lorentzian
##' @param real logical, return only the real part of the complex Faddeeva
##' @param ... passed to Faddeeva_w
##' @return numeric or complex vector
##' @author baptiste Auguie
##' @export
Voigt <- function(x, x0, sigma, gamma, real = TRUE, ...){
  
  z <- (x - x0 + gamma*1i) / (sigma * sqrt(2))
  w <- Faddeeva_w(z, ...)
  if(real) return(w / (sigma * sqrt(2*pi)))
  Re(w) / (sigma * sqrt(2*pi))
  
}
