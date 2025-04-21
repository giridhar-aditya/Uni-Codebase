#A-Star Algorithm (Small Map)
graph = {
    'A': [('B', 1), ('C', 4)],
    'B': [('A', 1), ('C', 2), ('D', 5)],
    'C': [('A', 4), ('B', 2), ('D', 1)],
    'D': [('B', 5), ('C', 1)]
}
md = {
    'A': 3,
    'B': 2,
    'C': 1,
    'D': 0
}
def a_star(graph,md,start,end):
    q = []
    q.append((0,md[start],start,[start]))
    while q:
        tc,sc,node,path = min(q, key=lambda x: x[1])
        q.remove((tc,sc,node,path))
        if node == end:
            return path,tc
        for neighbor,dist in graph[node]:
            if neighbor not in path:
                q.append((tc+dist,tc+dist+md[node],neighbor,path+[neighbor]))
    print("Path Not Found")
start = input("Enter Start City :")
path,tc = a_star(graph,md,start,'D')
print(f"Path from {start} to D: {' -> '.join(path)}")
print(f"Total cost: {tc} km")  