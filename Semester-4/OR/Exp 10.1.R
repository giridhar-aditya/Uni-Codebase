c = 6100
s = 100
mc = c(100,250,400,600,900,1200,1600,2000)
tc = c-s+cumsum(mc)
ac = tc / 1:length(mc)
oc = which.min(ac)
cat("Optimal Year :",oc)
cat("Optimal Cost :",ac[oc])
