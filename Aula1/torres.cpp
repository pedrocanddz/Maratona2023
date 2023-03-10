#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int tabuleiro[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> tabuleiro[i][j];

    int soma_linha[n];
    for (int i = 0; i < n; i++)
    {
        soma_linha[i] = 0;
        for (int j = 0; j < n; j++)
            soma_linha[i] += tabuleiro[i][j];
    }
    int soma_coluna[n];
    for (int j = 0; j < n; j++)
    {
        soma_coluna[j] = 0;
        for (int i = 0; i < n; i++)
            soma_coluna[j] += tabuleiro[i][j];
    }
    int soma_max = 0;
    int soma_aux = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            soma_aux = soma_linha[i] + soma_coluna[j] - tabuleiro[i][j] * 2;
            if (soma_aux > soma_max)
                soma_max = soma_aux;
        }
    }
    cout << soma_max << endl;
    return 0;
}