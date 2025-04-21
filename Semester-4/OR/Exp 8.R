library(lpSolve)
mat = matrix(c(11,8,9,
               14,10,6,
               6,11,7),ncol=3,byrow=TRUE)
lp.assign(mat)$solution