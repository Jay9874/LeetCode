class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    // Return false if the input edges array is empty
    if (source == destination) {
        return true;
    }
    // Create an adjacency list representation of the graph
    std::vector<std::unordered_set<int>> adjacencyList(n);
    for (const auto& edge : edges) {
        int u = edge[0], v = edge[1];
        adjacencyList[u].insert(v);
        adjacencyList[v].insert(u);
    }

    // Use a breadth-first search to check whether there is a path from source to destination
    std::vector<bool> visited(n);
    std::vector<int> queue{source};
    visited[source] = true;
    while (!queue.empty()) {
        int u = queue.front();
        queue.erase(queue.begin());
        for (int v : adjacencyList[u]) {
            if (v == destination) {
                return true;
            }
            if (!visited[v]) {
                queue.push_back(v);
                visited[v] = true;
            }
        }
    }
    return false;

    }
};