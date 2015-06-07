
##' Lorentzian
##'
##' Lorentzian lineshape function
##' @title Lorentz
##' @param x numeric vector
##' @param x0 scalar, peak position
##' @param gamma parameter of the lorentzian
##' @return numeric vector
##' @describeIn Voigt
##' @export
##' @family helper_function
##' @author baptiste Auguie
Lorentz <- function(x, x0, gamma){
  gamma / (pi*((x -x0)^2 + gamma^2))
}

##' Gaussian
##'
##' Gaussian lineshape function
##' @title Gauss
##' @param x numeric vector
##' @param x0 scalar, peak position
##' @param sigma parameter of the gaussian
##' @return numeric vector
##' @describeIn Voigt
##' @export
##' @family helper_function
##' @author baptiste Auguie
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
##' @describeIn Voigt
##' @family helper_function
##' @examples
##' ## should integrate to 1 in all cases
##' integrate(Voigt, -Inf, Inf, x0=400, sigma=50, gamma=100)
##' x <- seq(-1000, 1000)
##' x0 <- 200
##' l <- Lorentz(x, x0, 30)
##' g <- Gauss(x, x0, 100)
##' N <- length(x)
##' c <- convolve(Gauss(x, 200, 100), 
##'               Lorentz(x, 0, 30), type="o")[seq(N/2, length=N)]
##' v <- Voigt(x, x0, 100, 30)
##' matplot(x, cbind(v, l, g, c), t="l", lty=c(1,2,2,1), xlab="x", ylab="")
##' legend("topleft", legend = c("Voigt", "Lorentz", "Gauss", "Convolution"), bty="n",
##'       lty=c(1,2,2,1), col=1:4)
##' @export
Voigt <- function(x, x0, sigma, gamma, real = TRUE, ...){
  
  z <- (x - x0 + gamma*1i) / (sigma * sqrt(2))
  w <- Faddeeva_w(z, ...)
  if(real) return(Re(w) / (sigma * sqrt(2*pi))) else
                     w / (sigma * sqrt(2*pi))
  
}
