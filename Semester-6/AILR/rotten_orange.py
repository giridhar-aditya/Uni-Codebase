def check(matrix):
    for i in range(len(matrix)):
        for j in range(len(matrix)):
            if matrix[i][j] == 1:
                return False
    return True
def equal(matrix,new): #For cases where Dry cotton cannot become wet at all
    for i in range(len(matrix)):
        for j in range(len(matrix)):
            if matrix[i][j] != new[i][j]:
                return False
    return True
def solve(matrix,count):
    count =  count + 1 
    new = [row.copy() for row in matrix]
    for i in range(len(matrix)):
        for j in range(len(matrix)):
            if matrix[i][j] == 1:
                if i<len(matrix)-1 and matrix[i+1][j]==2:
                    new[i][j]=2
                elif j<len(matrix)-1 and matrix[i][j+1]==2:
                    new[i][j]=2
                elif i>0 and matrix[i-1][j]==2:
                    new[i][j]=2
                elif j>0 and matrix[i][j-1]==2:
                    new[i][j]=2
    print("Itertion ",count)
    print(new)
    if not check(new) and not equal(matrix,new):
        new,count=solve(new,count)
    return new,count                
matrix = [[2,0,1],[1,1,2],[0,1,0]]
#matrix = [[1, 2, 0], [0, 1, 1], [2, 0, 1]]  # Dry (1), Wet (2), Empty (0)
#matrix = [[2, 1, 0, 1], [1, 0, 2, 0], [0, 2, 1, 1], [1, 0, 1, 2]]
#matrix = [[2, 0, 1, 1, 0],[1, 1, 2, 0, 2],[0, 2, 1, 0, 1],[1, 0, 2, 1, 0],[0, 1, 0, 2, 1]]
mat,c = solve(matrix,0)
print("\nNumber of Iterations : ",c)
print("The Matrix : ",mat)