#include <bits/stdc++.h>

using namespace std;

int main()
{
    // quadro magico
    int n;
    cin >> n;
    int quadro[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> quadro[i][j];

    int soma_linha[n];
    for (int i = 0; i < n; i++)
    {
        soma_linha[i] = 0;
        for (int j = 0; j < n; j++)
            soma_linha[i] += quadro[i][j];
    }

    int soma_coluna[n];
    for (int j = 0; j < n; j++)
    {
        soma_coluna[j] = 0;
        for (int i = 0; i < n; i++)
            soma_coluna[j] += quadro[i][j];
    }
    int soma_diagonal1 = 0;
    for (int i = 0; i < n; i++)
        soma_diagonal1 += quadro[i][i];

    int soma_diagonal2 = 0;
    for (int i = 0; i < n; i++)
        soma_diagonal2 += quadro[i][n - i - 1];

    bool eh_magico = true;
    for (int i = 0; i < n; i++)
        if (soma_linha[i] != soma_coluna[i] || soma_linha[i] != soma_diagonal1 || soma_linha[i] != soma_diagonal2)
            eh_magico = false;

    if (eh_magico)
        cout << soma_diagonal1 << "\n";
    else
        cout << "-1"
             << "\n";

    return 0;
}