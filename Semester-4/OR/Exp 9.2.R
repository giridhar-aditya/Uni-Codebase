L = 20
M = 11
S = 2
P = L / (M*S)
find_ps = function(L,M,S,P){
  if(P >=1){cat("P value is Greater than 1")}
  sum =0
  fact = 1
  for(i in 0:(S-1)){
    sum = sum + ((S*P)^i)/fact
    fact = fact * (i+1)
  }
  p0 = sum + ((S*P)^S)/(fact*(1-P))
  p0 = 1/p0
  ps = ((L/M)^S)*p0/fact
  cat(p0,ps)
  return(ps)
}
LQ = find_ps(L,M,S,P)*P/((1-P)^2)
LS = LQ + L/M
WS = LS/L
WQ = LQ/L
cat(P,LQ,LS,WS,WQ)