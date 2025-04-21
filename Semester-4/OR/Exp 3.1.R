library(lpSolve)
M=1000
obj = c(6,4,0,0,0,-M)
mat = matrix(c(2,3,1,0,0,0,
               3,2,0,1,0,0,
               1,1,0,0,-1,1),ncol=6,byrow=TRUE)
dir = c("<=","<=",">=")
rhs - c(30,24,3)
lp = lp("max",obj,mat,dir,rhs)
cat("Optimal Solution :",lp$solution[1:2])
cat("Optimal Value :",lp$objval)