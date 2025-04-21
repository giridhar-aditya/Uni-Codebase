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
  }else if(lp$status == 2){
    cat("Problem is Infeasible")
  }else{ cat("Problem is Invalid")}
  return(lp)
}
obj = c(2,1,4,-1,0,0,0)
mat = matrix(c(1,2,1,-3,1,0,0,
               0,-1,1,2,0,1,0,
               2,7,-5,10,0,0,1),ncol=7,byrow=TRUE)
dir = c("<=","<=","<=")
og = solve_lp(obj,mat,dir,c(8,0,21))
og = solve_lp(obj,mat,dir,c(8,11,21))
og = solve_lp(obj,mat,dir,c(3,2,-4))