library(lpSolve)
M=1000
obj = c(2,4,3,0,-M)
mat = matrix(c(1,1,2,1,0,
               2,3,4,0,1),ncol=5,byrow=TRUE)
dir = c("<=","=")
rhs = c(5,12)
lp = lp("max",obj,mat,dir,rhs)
cat("Optimal Solution :",lp$solution[1:3])
cat("Optimal Value :",lp$objval)