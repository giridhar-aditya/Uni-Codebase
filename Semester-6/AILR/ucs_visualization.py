import networkx as nx
import matplotlib.pyplot as plt

def create_graph(graph_data):
    G = nx.DiGraph()
    for node, edges in graph_data.items():
        for neighbor, cost in edges:
            G.add_edge(node, neighbor, weight=cost)
    return G, nx.spring_layout(G)

def display_graph(G, pos, path=None):
    plt.figure(figsize=(8, 6))
    nx.draw(G, pos, with_labels=True, node_color='lightblue', node_size=2000, font_size=15, font_weight='bold', edge_color='gray')
    nx.draw_networkx_edge_labels(G, pos, edge_labels=nx.get_edge_attributes(G, 'weight'), font_size=12)
    if path:
        path_edges = list(zip(path, path[1:]))
        nx.draw_networkx_edges(G, pos, edgelist=path_edges, edge_color='red', width=2.5)
    plt.title("Uniform Cost Search Visualization")
    plt.show()
def uniform_cost_search(graph, start, goal):
    pq = [(0, start, [start])]  # (cost, node, path)
    visited = set()

    while pq:
        cost, node, path = min(pq,key = lambda x: x[0])
        pq.remove((cost, node, path))
        if node in visited:
            continue
        visited.add(node)

        if node == goal:
            return cost, path

        for neighbor, edge_cost in graph.get(node, []):
            if neighbor not in visited:
                pq = pq + [(cost+edge_cost,neighbor,path + [neighbor])]
    return None
graph_data = {
    'A': [('B', 1), ('C', 4)],
    'B': [('D', 1), ('E', 3)],
    'C': [('F', 5)],
    'D': [('G', 2)],
    'E': [('G', 1)],
    'F': [('G', 2)],
    'G': []
}

# Create graph visualization
G, pos = create_graph(graph_data)

# Run UCS
start_node, goal_node = 'A', 'F'
result = uniform_cost_search(graph_data, start_node, goal_node)

# Display graph and path
display_graph(G, pos)  # Base graph

if result:
    total_cost, path = result
    print(f"Least cost path from {start_node} to {goal_node}: {' -> '.join(path)} with total cost {total_cost}")
    display_graph(G, pos, path)
else:
    print(f"No path found from {start_node} to {goal_node}")
