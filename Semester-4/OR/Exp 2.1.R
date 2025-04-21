library(boot)
obj = c(4,10)
c1 = c(2,1) #constraint 1
c2 = c(2,5) #constraint 2
c3 = c(2,3) #Constraint 3
simplex(a=obj,A1=rbind(c1,c2,c3),b1=c(50,100,90),maxi=T)