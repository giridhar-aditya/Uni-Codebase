def dfs(graph,start,visited=set()):
    visited.add(start)
    for next in graph[start]:
        if next not in visited:
            dfs(graph,next,visited)  
    return visited
graph = {
    "A": [],
    
    "B": ["C"],
    "C": ["B"],

    "D": ["E"],
    "E": ["D", "F"],
    "F": ["E"],

    "G": ["H", "I", "J"],
    "H": ["G", "I", "J"],
    "I": ["G", "H", "J"],
    "J": ["G", "H", "I"]
}
nodes = ['A','B','C','D','E','F','G','H','I','J']
components = 0
while nodes:
    components += 1
    start = nodes.pop(0)
    visit = set()
    visited = dfs(graph,start,visit)
    print(visit)
    for i in nodes.copy():
        if i in visit:
            nodes.remove(i)
print("No of Components :",components)



