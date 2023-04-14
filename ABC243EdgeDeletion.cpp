#include <bits/stdc++.h>

#define INF 1000000001

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n, vector<int>(n, INF));
    vector<vector<int>> dist(n, vector<int>(n, INF));
    vector<vector<bool>> count(n, vector<bool>(n, false)); // matrix to count edges to be deleted

    for (int i = 0; i < m; i++) { // distance matrix
        int u, v, w;
        cin >> u >> v >> w;
        u--;
        v--;
        dist[u][v] = dist[v][u] = graph[u][v] = graph[v][u] = w;
    }

    for (int i = 0; i < n; i++) { // no self-loops
        graph[i][i] = dist[i][i] = 0;
    }


    // INF kapag walang connection sa vertex
    for (int k = 0; k < n; k++) { // floyd-warshall. starts from K (dist initial graph) which is serving as the "connecting" vertex.
        for (int i = 0; i < n; i++) { //rows
            for (int j = 0; j < n; j++) { // columns
                if (dist[i][j] >= dist[i][k] + dist[k][j]) { // basing from k-1.
                    if (dist[i][k] != 0 && dist[k][j] != 0 && dist[i][j] != INF) count[i][j] = true; // meaning hindi siya shortest path, so it can be deleted

                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }


    int toDelete = 0;

    //graph is the intial graph from initialization
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { //
            if (graph[i][j] != INF) {
                toDelete += count[i][j];
            }
        }
    }

    cout << toDelete << "\n";

    return 0;
}
