R = 200
C1 = 1
C3 = 25
EOQ = sqrt((2*C1*R)/C3)
Cmin = sqrt(2*C1*C3*R)
N = R/EOQ
T = 1/N
Opt = R + Cmin
cat("Economic Order Quantity :",EOQ)
cat("Minimum Average Yearly Cost :",Cmin)
cat("Number of Orders Annualy :",N)
cat("Time Between Orders :",T)
cat("Optimal Cost :",Opt)