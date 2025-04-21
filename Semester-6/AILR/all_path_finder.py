#All Path Finder
def find_all_paths(graph, start, end, path=[]):
    path = path + [start]
    if start == end:
        return [path]
    paths = []
    for node in graph[start]:
        if node not in path:
            newpaths = find_all_paths(graph, node, end, path)
            for newpath in newpaths:
                paths.append(newpath)
    return paths
graph = {
    'A': ['B', 'C'],
    'B': ['A', 'D'],
    'C': ['A','D','E'],
    'D': ['C','B','E'],
    'E': ['D','C']
}
start_node = 'A'
end_node = 'E'
all_paths = find_all_paths(graph, start_node, end_node)
print(f"All paths from {start_node} to {end_node}:")
for path in all_paths:
    print(path)