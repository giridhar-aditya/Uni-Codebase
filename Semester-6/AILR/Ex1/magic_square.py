#Magic Sqaure 
matrix = [
    [8, 1, 6],
    [3, 5, 7],
    [4, 9, 2]
]
n = len(matrix)
magic_sum = n * (n**2 + 1) // 2
rows = all(sum(row) == magic_sum for row in matrix)
cols = all(sum(matrix[j][i] for j in range(n)) == magic_sum for i in range(n))
main_diag = sum(matrix[i][i] for i in range(n)) == magic_sum
sec_diag = sum(matrix[i][n-i-1] for i in range(n)) == magic_sum
if rows and cols and main_diag and sec_diag:
    print("Magic Square!")
else:
    print("Not a Magic Square")
