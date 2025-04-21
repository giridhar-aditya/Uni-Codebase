#GoldMine Problem
import numpy as np

def maxpath(M):
    rows, cols = M.shape
    currow = np.argmax(M[:, 0])
    path = [(currow, 0)]
    for col in range(1, cols):
        pair = [(currow, M[currow,col])]
        if currow > 0:
            pair.append((currow - 1, M[currow - 1, col]))
        if currow < rows - 1:
            pair.append((currow + 1, M[currow + 1, col]))
        currow, _ = max(pair, key=lambda x: x[1])
        path.append((currow, col))
    return path
M = np.array([
    [1, 2, 15],
    [7, 2, 8],
    [9, 5, 5]
])

path = maxpath(M)
print("Maximum Path:", ' -> '.join(f"({r}, {c})" for r, c in path))
print("Values:", ' -> '.join(str(M[r, c]) for r, c in path))