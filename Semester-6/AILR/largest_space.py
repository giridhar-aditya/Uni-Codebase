def largest_zero_region(matrix):
    rows, cols = len(matrix), len(matrix[0])
    visited = [[False] * cols for _ in range(rows)]    
    def dfs(r, c):
        if r < 0 or r >= rows or c < 0 or c >= cols:
            return 0
        if visited[r][c] or matrix[r][c] != 0:
            return 0        
        visited[r][c] = True
        size = 1        
        size += dfs(r+1, c)
        size += dfs(r-1, c)
        size += dfs(r, c+1)
        size += dfs(r, c-1)        
        return size
    max_region = 0    
    for i in range(rows):
        for j in range(cols):
            if matrix[i][j] == 0 and not visited[i][j]:
                max_region = max(max_region, dfs(i, j))    
    return max_region
matrix = [
    [1, 0, 0, 1],
    [1, 0, 1, 1],
    [0, 0, 1, 0],
    [1, 1, 1, 0]]
print("Largest region of 0's:", largest_zero_region(matrix))
