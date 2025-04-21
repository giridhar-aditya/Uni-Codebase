#dfs
def dfs(graph,start,visited=set()):
  visited.add(start)
  print(start,end=" ")
  for next in graph[start]:
    if next not in visited:
      dfs(graph,next,visited)
graph = {0 : [1,2],1 : [3,4],2 : [0],
  	      3 : [1],4 : [2,3]}
start = int(input("Enter the Starting Node :"))
dfs(graph,start)