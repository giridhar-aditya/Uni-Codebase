library(lpSolve)
M=1000
obj = c(1,2,0,0,-M)
mat = matrix(c(1,-1,0,-1,1,
               2,1,1,0,0),ncol=5,byrow=TRUE)
dir = c(">=","<=")
rhs = c(3,10)
lp = lp("max",obj,mat,dir,rhs)
cat("Optimal Solution :",lp$solution[1:2])
cat("Optimal Value :",lp$objval)