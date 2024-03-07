#include <iostream>
#include <vector>

using namespace std;

void DFS(int node, vector<bool>& visited, const vector<vector<int>>& adjacencyMatrix) {
    visited[node] = true;

    for (int i = 0; i < adjacencyMatrix.size(); ++i) {
        if (adjacencyMatrix[node][i] && !visited[i]) {
            DFS(i, visited, adjacencyMatrix);
        }
    }
}

int connectedComponents(const vector<vector<int>>& adjacencyMatrix) {
    int n = adjacencyMatrix.size();
    vector<bool> visited(n, false); 
    int count = 0;

    for (int node = 0; node < n; ++node) {
        if (!visited[node]) {
            DFS(node, visited, adjacencyMatrix); 
            count++; 
        }
    }

    return count;
}

int main() {
    int n, m, num1, num2;
    cin >> n >> m;
    vector<vector<int>> graph(n, vector<int>(n, 0));

    for(int i = 0; i < m; i++) {
        cin >> num1 >> num2;
        graph[num1-1][num2-1] = 1;
        graph[num2-1][num1-1] = 1;
    }

    cout << connectedComponents(graph) << "\n";
}
