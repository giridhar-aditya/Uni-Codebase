library(lpSolve)
solve_lp = function(obj,mat,dir,rhs){
  lp = lp("max",obj,mat,dir,rhs)
  if(lp$status == 0){
    cat("Optimal Solution Found")
    cat("Optimal Solution :",lp$solution[1:length(obj)])
    cat("Optimal Value :",lp$objval)
    cat("Sensitivity Analysis")
    for(i in 1:length(rhs)){
      cat("C",i," :",lp$pi[i])
    }
    for(j in 1:length(obj)){
      cat("R",i," :",lp$rc[i])
    }
  }else if(lp$status == 2){
    cat("Problem is Infeasible")
  }else{ cat("Problem is Invalid")}
  return(lp)
}
mat = matrix(c(1,1,1,1,0,1,4,7,0,1),ncol=5,byrow=TRUE)
dir = c("<=","<=")
rhs = c(3,9)
og = solve_lp(c(4,6,2,0,0),mat,dir,rhs)
og = solve_lp(c(4,6,12,0,0),mat,dir,rhs)
og = solve_lp(c(2,8,4,0,0),mat,dir,rhs)