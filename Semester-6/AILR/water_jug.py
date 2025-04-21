from math import gcd
def water_jug(m, n, d):
    if d > max(m, n) or d % gcd(m, n) != 0:
        return -1
    visited = set()
    queue = [[0, 0, 0]]
    visited.add((0, 0))
    while queue:
        j1, j2, step = queue.pop(0)        
        if j1 == d or j2 == d:
            return step
        if (m, j2) not in visited:  # Fill Jug 1
            visited.add((m, j2))
            queue.append([m, j2, step + 1])
        if (j1, n) not in visited:  # Fill Jug 2
            visited.add((j1, n))
            queue.append([j1, n, step + 1])
        if (0, j2) not in visited:  # Empty Jug 1
            visited.add((0, j2))
            queue.append([0, j2, step + 1])
        if (j1, 0) not in visited:  # Empty Jug 2
            visited.add((j1, 0))
            queue.append([j1, 0, step + 1])
        p1_2 = min(j1, n - j2)  # Pour Jug 1 -> Jug 2
        if (j1 - p1_2, j2 + p1_2) not in visited:
            visited.add((j1 - p1_2, j2 + p1_2))
            queue.append([j1 - p1_2, j2 + p1_2, step + 1])
        p2_1 = min(j2, m - j1)  # Pour Jug 2 -> Jug 1
        if (j1 + p2_1, j2 - p2_1) not in visited:
            visited.add((j1 + p2_1, j2 - p2_1))
            queue.append([j1 + p2_1, j2 - p2_1, step + 1])    
    return -1
m, n, d = 4,3,2
print(f"No of Steps : {water_jug(m, n, d)}")
