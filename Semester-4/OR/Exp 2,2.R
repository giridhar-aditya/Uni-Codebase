library(boot)
obj = c(3,5,4)
c1 = c(2,3,0) #constraint 1
c2 = c(0,2,5) #constraint 2
c3 = c(3,2,4) #Constraint 3
simplex(a=obj,A1=rbind(c1,c2,c3),b1=c(3,10,15),maxi=T)