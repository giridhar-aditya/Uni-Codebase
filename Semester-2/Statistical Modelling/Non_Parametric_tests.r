# Non-parametric tests

# Wilcoxon signed rank test
# if 2 vectors are provided, U-test is done
x <- c(1.83, 0.50, 1.62, 2.48, 1.68, 1.88, 1.55, 3.06, 1.30)
y <- c(0.878, 0.647, 0.598, 2.05, 1.06, 1.29, 1.06, 1.29, 1.06, 3.14, 1.29)

# exact - if exact p value should be eval
# cant use it when the values in the vectors have ties , ties means same value repeated.
# correct - if continuity correction should be done (default: TRUE)
# alternative - two.sided/less/greater (first letter is enough)
wilcox.test(y, x, alternative="less", exact=FALSE, correct=TRUE)

count<-c(9,25,15,2,14,25,24,47)
speed<-c(2,3,5,9,14,24,29,34)
cor(count,speed)
cor(count,speed,method = "spearman")

vars<-c("mpp","hp","wt")
head(mtcars[vars])
summary(mtcars[vars])
