#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string resAluno;
    string resCorretas;
    cin >> resAluno;
    cin >> resCorretas;
    int contador = 0;

    for (int i = 0; i < n; i++)
    {
        if (resAluno[i] == resCorretas[i])
            contador++;
    }
    cout << contador << "\n";

    return 0;
}