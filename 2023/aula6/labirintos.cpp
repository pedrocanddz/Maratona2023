#include <iostream>
#include <vector>

#define maxV 10000

using namespace std;

int adj[maxV][maxV];

int main() {
    int casos, origem, V, A, orig, dest;
    cin >> casos;

    while (casos--) {
        cin >> origem >> V;

        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                adj[i][j] = 0;
            }
        }

        cin >> A;
        for (int i = 0; i < A; i++) {
            cin >> orig >> dest;
            adj[orig][dest] = adj[dest][orig] = 1;
        }
        int movimentos = 0;
        for(int i = 0; i < V; i++) 
            for(int j = 0; j < V; j++) 
                if(adj[i][j])
                    movimentos++; 
        cout << movimentos << "\n";
    }


    return 0;
}