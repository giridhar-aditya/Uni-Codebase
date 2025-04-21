#Matrix Multiplication
A = [[1,1],[1,1]]
B = [[2,2],[2,2]]
C = [[0,0],[0,0]]
for i in range(len(A)):
    for j in range(len(B[0])):
        for k in range(len(B)):
            C[i][j] += A[i][k] + B[k][j]
print(C)