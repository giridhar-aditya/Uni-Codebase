visited = []
def minimax(depth, nodeIndex, maximizingPlayer,values, alpha, beta):
    if depth == 3:
        return values[nodeIndex]
    if maximizingPlayer:
        best = -10000
        for i in range(0, 2):
            val = minimax(depth + 1, nodeIndex * 2 + i,False, values, alpha, beta)
            best = max(best, val)
            alpha = max(alpha, best)
            visited.append(val)
            if beta <= alpha:
                break
        return best
    else:
        best = 10000
        for i in range(0, 2):
            val = minimax(depth + 1, nodeIndex * 2 + i,True, values, alpha, beta)
            best = min(best, val)
            beta = min(beta, best)
            visited.append(val)
            if beta <= alpha:
                break
        return best
#values = [3, 5, 6, 9, 1, 2, 0, -1]
values = [4, 7, 3, 8, 2, 5, 6, 9, 1, 0, -1, 10, 11, -2, 12, 13]
print("The optimal value is :", minimax(0, 0, True, values, -10000, 10000))
print("Pruned Nodes :",end='')
for i in values:
    if i not in visited:
        print(i,end=' ') #Doesn't work for duplicate leaf nodes