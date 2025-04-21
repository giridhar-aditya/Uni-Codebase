#Diagonals Shift
mat = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]]
n = len(mat)
for i in range(n // 2):
    mat[i][i], mat[i][n-1-i] = mat[i][n-1-i], mat[i][i]
for row in mat:
    print(row)
