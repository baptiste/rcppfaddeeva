library(RcppFaddeeva)

## should integrate to 1
integrate(Voigt, -Inf, Inf, x0=400, sigma=50, gamma=100)

x <- seq(-1000, 1000)
x0 <- 200
v <- Voigt(x, x0, 100, 30)
l <- Lorentz(x, x0, 30)
g <- Gauss(x, x0, 100)
N <- length(x)
c <- convolve(Gauss(x, 200, 100), Lorentz(x, 0, 30), type="o")[seq(N/2, length=N)]

matplot(x, cbind(v, l, g, c), t="l", lty=c(1,2,2,1), xlab="x", ylab="")
legend("topleft", legend = c("Voigt", "Lorentz", "Gauss", "convolution"), bty="n",
       lty=c(1,2,2,1), col=1:4)
