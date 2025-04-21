n = int(input("Enter the number of nodes (n): "))  # Number of nodes
p = int(input("Enter the number of connections (p): "))  # Number of connections
parent = [0] * (n + 1)  # Stores the parent node (reverse dependency)
weight = [0] * (n + 1)  # Stores the weight of each connection
child = [0] * (n + 1)  # Stores the child node (direct dependency)
start_nodes = []  # Stores start nodes of paths
end_nodes = []  # Stores end nodes of paths
min_weights = []  # Stores minimum weights along paths
ans = 0  # Variable to store the minimum weight in a path
def dfs(w):
    global ans
    if child[w] == 0:
        return w  # If there is no child node, return current node (end of path)
    if weight[w] < ans:
        ans = weight[w]  # Update ans with the minimum weight encountered
    return dfs(child[w])  # Recursively continue traversal
def solve(arr):
    global ans
    for i in range(p):
        q, h, t = arr[i]  # q -> h with weight t
        child[q] = h  # Store the child node
        weight[q] = t  # Store the weight
        parent[h] = q  # Store the reverse dependency (parent node)    
    start_nodes.clear()
    end_nodes.clear()
    min_weights.clear()
    for j in range(1, n + 1):
        if parent[j] == 0 and child[j]:  # If node has no parent but has a child
            ans = float('inf')  # Reset ans to a large value for tracking minimum weight
            w = dfs(j)  # Perform DFS to find the end of the sequence            
            start_nodes.append(j)  # Start node of path
            end_nodes.append(w)  # End node of path
            min_weights.append(ans)  # Minimum weight in path
    print("Number of independent paths:", len(start_nodes))
    for j in range(len(start_nodes)):
        print("Start Node:", start_nodes[j], "End Node:", end_nodes[j], "Minimum Weight:", min_weights[j])
arr = []
print("Enter the connections (q h t) one by one:")
for _ in range(p):
    q, h, t = map(int, input().split())
    arr.append([q, h, t])
solve(arr)