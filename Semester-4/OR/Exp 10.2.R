c = 6000
rs = c(3000,1500,750,375,200,200)
mc = c(1000,1200,1400,1800,2300,2800)
tc = c-rs+cumsum(mc)
ac = tc / 1:length(mc)
oc = which.min(ac)
cat("Optimal Year :",oc)
cat("Optimal Cost :",ac[oc])