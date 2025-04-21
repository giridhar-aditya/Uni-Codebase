library(lpSolve)
obj = c(6,21)
mat = matrix(c(1,2,1,4),ncol=2,byrow=TRUE)
dir = c(">=",">=")
rhs = c(3,4)
na = ncol(mat)
c1 = c(rep(0,length(obj)),rep(1,na))
lp = lp(direction="max",objective.in=c1,const.mat=mat,const.dir=dir,const.rhs=rhs)
if(lp$status!=0 || any(is.na(lp$solution))){
  cat("Feasible Solution Not Found in Phase 1")
}else{ cat("Feasible Solution Found in Phase 1")}
lp2 = lp("min",obj,mat,dir,rhs)
if(lp$status!=0 || any(is.na(lp2$solution))){
  cat("Optimal Solution Not Found in Phase 2")
}else{"Optimal Solution Found in Phase 2"}
cat("Optimal Solution :",lp2$solution[1:2])
cat("Optimal Value :",lp2$objval)
