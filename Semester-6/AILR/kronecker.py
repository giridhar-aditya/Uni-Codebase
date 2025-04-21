#Kronecker Product Matrix
A = [[1, 2], 
     [3, 4]]
B = [[0, 5], 
     [6, 7]]
m, n = len(A), len(A[0])
p, q = len(B), len(B[0])
result = [[0] * (n * q) for _ in range(m * p)]
print(result)
for i in range(m):
    for j in range(n):
        for k in range(p):
            for l in range(q):
                result[i * p + k][j * q + l] = A[i][j] * B[k][l]
for row in result:
    print(row)
