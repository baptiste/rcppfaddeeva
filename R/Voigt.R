
##' @export
Lorentz <- function(x, x0, gamma){
  gamma / (pi*((x -x0)^2 + gamma^2))
}

##' @export
Gauss <- function(x, x0, sigma){
  dnorm(x, x0, sd = sigma)
}

##' @export
Voigt <- function(x, x0, sigma, gamma, ...){
  
  z <- (x - x0 + gamma*1i) / (sigma * sqrt(2))
  w <- Faddeeva_w(z, ...)
  Re(w) / (sigma * sqrt(2*pi))
  
}
