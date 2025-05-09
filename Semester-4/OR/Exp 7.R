library(lpSolve)
cm = matrix(c(2,2,3,4,1,2,1,3,1),ncol=3,byrow = TRUE)
col_rhs = c(20,15,30)
col_signs = rep(">=",3)
row_rhs = c(10,15,40)
row_signs = rep("<=",3)
lp = lp.transport(cm,"min",row_signs,row_rhs,col_signs,col_rhs)
cat("Optimal Value :",lp$solution)
cat("Optimal Cost :",lp$objval)