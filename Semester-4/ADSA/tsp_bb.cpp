#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

// Function to find the minimum cost using branch and bound
int tsp(vector<vector<int>>& graph, int start) {
    int n = graph.size();
    vector<int> visited(n, 0);
    visited[start] = 1;

    // Priority queue to store the next vertices to explore
    priority_queue<pair<int, pair<int, vector<int>>>> pq;

    // Add initial state to the priority queue
    pq.push({0, {start, visited}});

    int minCost = INF;

    while (!pq.empty()) {
        auto top = pq.top();
        pq.pop();

        int cost = -top.first;
        int node = top.second.first;
        vector<int> path = top.second.second;

        // If all cities are visited
        if (count(path.begin(), path.end(), 0) == 0) {
            minCost = min(minCost, cost + graph[node][start]);
            continue;
        }

        // Branching
        for (int i = 0; i < n; ++i) {
            if (graph[node][i] > 0 && !path[i]) {
                vector<int> newPath = path;
                newPath[i] = 1;
                pq.push({-(cost + graph[node][i]), {i, newPath}});
            }
        }
    }

    return minCost;
}

int main() {
    // Example graph
    vector<vector<int>> graph = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int start = 0; // Starting vertex
    int minCost = tsp(graph, start);

    cout << "Minimum cost of the Traveling Salesman Problem: " << minCost << endl;

    return 0;
}
