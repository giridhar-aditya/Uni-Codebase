def minimax(depth, n, d, b, maximizingPlayer,values): 
    if depth == d: 
        return values[n]  
    if maximizingPlayer:       
        best = -10000
        for i in range(b):              
            val = minimax(depth + 1, n * b + i,d,b,False, values)
            best = max(best, val)      
        return best       
    else:
        best = 10000
        for i in range(b):           
            val = minimax(depth + 1, n * b + i,d,b,True, values)
            best = min(best, val)      
        return best   
values = [3, 5, 6, 9, 1, 2, 0, -1]  
d = int(input("Enter Depth Factor :"))
b = int(input("Enter Branching Factor Factor :"))
m = input("Enter max/min for Top Evaluator :")
maxi = True if m=="max" else False
print("The optimal value is :", minimax(0, 0, d, b, maxi, values)) 