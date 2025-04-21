library(ggplot2)
c1 = function(x)(36-6*x)/6
c2 = function(x)(10-x)/2
c3 = function(x)(4)
p = ggplot(data = data.frame(x=0),aes(x=x))+
  stat_function(fun=c1,color = 'green')+
  stat_function(fun=c2,color = 'red')+
  geom_vline(xintercept=4,color = 'blue')+
  geom_vline(xintercept=0,color='black')+
  geom_hline(yintercept=0,color='black')+
  scale_x_continuous(breaks=seq(0,10,1),lim=c(0,10))+
  scale_y_continuous(breaks=seq(0,10,1),lim=c(0,10))+
  labs(title='Optimization Problem',subtitle='Graphical Representation',x='x',y='y')
  theme_bw()
f_region = data.frame(x=c(0,4,4,2,0),y=c(0,0,2,4,5))
p = p + geom_polygon(data=f_region,aes(x=x,y=y),fill = '#dddddd') +
  geom_point(data=f_region,aes(x=x,y=y),color='black')
library(lpSolve)
obj = c(4,5)
mat = matrix(c(1,2,6,6,1,0),ncol=2,byrow=TRUE)
dir = c("<=","<=","<=")
rhs = c(10,36,4)
lp = lp("max",obj,mat,dir,rhs)
p = p + geom_point(aes(x=lp$solution[1],y=lp$solution[2]),color='yellow',size=3)
print(p)