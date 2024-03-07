#include <iostream>
#include <cstdio>

using namespace std;

int count;
int auxV[10000];
int vertices, arestas, matrix[25][25];
int entrou = 0;

void pathR (int v,string espacos) {
    int w;
    auxV[v] = count++;
    espacos = espacos + "  ";
    for (w = 0; w < vertices; w++) {
        if (matrix[v][w] == 1) {
            entrou = 1;
            cout << espacos << v << "-" << w ;
            if (auxV[w] == -1) {
                cout << " pathR(G," << w << ")" << endl;
                pathR(w, espacos);
            } else {
                cout << endl;;
            }
        }
    }
}

int graphPath(void) {
    string espacos="";
    int v;
    for( v = 0; v < vertices; v++) 
        auxV[v]=-1;
    

    count = 0;
    for (v = 0; v < vertices; v++) {
        if (auxV[v] == -1) {
            entrou=false;
            pathR (v,espacos);
            if (entrou) cout << endl;
        }
    }
}

int main() {
    int orig, dest;
    int casos;
    cin >> casos;

    for(int u = 1; u <= casos; u++) {
        cin >> vertices;

        for (int i = 0; i < vertices; i++) {
            for (int j = 0; j < vertices; j++) {
                matrix[i][j] = 0;
            }
        }
        cin >> arestas;
        for (int i = 0; i < arestas; i++) {
            cin >> orig >> dest;
            matrix[orig][dest] = 1;
        }
        cout << "Caso " << u << ":" << endl;
        graphPath();
    }
    return 0;
}