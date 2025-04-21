library(lpSolve)
obj = c(3,-1)
mat = matrix(c(2,1,1,3,0,1),ncol=2,byrow=TRUE)
dir = c(">=","<=","<=")
rhs = c(2,2,4)
na = ncol(mat)
c1 = c(rep(0,length(obj)),rep(1,na))
lp = lp(direction="max",objective.in=c1,const.mat=mat,const.dir=dir,const.rhs=rhs)
if(lp$status!=0 || any(is.na(lp$solution))){
  cat("Feasible Solution Not Found in Phase 1")
}else{ cat("Feasible Solution Found in Phase 1")}
lp2 = lp("max",obj,mat,dir,rhs)
if(lp$status!=0 || any(is.na(lp2$solution))){
  cat("Optimal Solution Not Found in Phase 2")
}else{"Optimal Solution Found in Phase 2"}
cat("Optimal Solution :",lp2$solution[1:2])
cat("Optimal Value :",lp2$objval)
