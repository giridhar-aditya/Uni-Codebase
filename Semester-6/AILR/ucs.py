#Uniform Cost Search
def find_all_paths(graph, start, end, path=[]):
    path = path + [start]
    if start == end:
        return [path]
    if start not in graph:
        return []
    paths = []
    for node in graph[start]:
        if node[0] not in path:
            newpaths = find_all_paths(graph, node[0], end, path)
            for newpath in newpaths:
                paths.append(newpath)
    return paths
def find_end(graph,start,end):
  count = 0
  for node in graph[start]:
    if node[0] == end:
      return count
    count += 1
def ucs(graph,paths,min = 100,tc=0,index=0,min_path=[]):
  for path in paths:
    while index < len(path)-1:
      start,end = path[index],path[index+1]
      end = find_end(graph,start,end)
      tc += graph[start][end][1]
      index += 1
    #print(f"Total Cost of {path} : {tc}")
    if tc < min:
      min_path = path
      min = tc
    tc,index = 0,0
  return min,min_path
graph = {
    'A': [('B', 1), ('C', 4)],
    'B': [('D', 1), ('E', 3)],
    'C': [('F', 5)],
    'D': [('G', 2)],
    'E': [('G', 1)],
    'F': [('G', 2)],
    'G': []
}
start_node,end_node = 'A','F'
min,min_path = ucs(graph,find_all_paths(graph, start_node, end_node))
print(f"Minimum Cost : {min}\nMinimum Cost Path : {min_path}")