def tic_tac_toe(mat):
    x,o = 0,0
    coord = []
    for i in range(3):
        for j in range(3):
            if mat[i][j]==1:
                x+=1
            elif mat[i][j]==2:
                o+=1
            else:
                coord.append([i,j])
    return "Player X" if o>x else "Player O",coord  
matrix = [[1, 0, 2],[0, 2, 0],[1, 0, 1]]
move,coord = tic_tac_toe(matrix)
print("Next Move Belongs to",move)
print("Available Moves :",coord)
