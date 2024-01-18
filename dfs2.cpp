
#include <iostream>
#include <vector>

using namespace std;

vector<int> g[1000]; // Assuming a maximum of 1000 vertices
int vis[1000];

void dfs_visit(int u) {
    vis[u] = 1;
    printf("%d ", u);

    for (int v = 0; v < g[u].size(); v++) {
        if (!vis[g[u][v]]) {
            dfs_visit(g[u][v]);
        }
    }
}

int main() {
    // Example usage
    int n, m; // n = number of vertices, m = number of edges
    cin >> n >> m;

    // Assuming the graph is represented as an adjacency list
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u); // Uncomment this line if the graph is undirected
    }

    // Initialize the vis array to mark all vertices as not visited
    fill(vis, vis + n, 0);

    // Perform DFS starting from each unvisited node
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs_visit(i);
        }
    }

    return 0;
}
