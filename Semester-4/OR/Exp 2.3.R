library(boot)
obj = c(1,-3,1)
c1 = c(3,-1,3) #constraint 1
c2 = c(-2,4,0) #constraint 2
c3 = c(-4,3,8) #Constraint 3
simplex(a=obj,A1=rbind(c1,c2,c3),b1=c(7,12,10),maxi=F)