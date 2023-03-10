#include <bits/stdc++.h>

using namespace std;

int main()
{
    // botas trocadas
    int n;
    cin >> n;
    int numero[n];
    char pe[n];
    for (int i = 0; i < n; i++)
        cin >> numero[i] >> pe[i];

    // analisar pares
    int pares = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (numero[i] == numero[j] && pe[i] != pe[j])
            {
                pares++;
                numero[i] = 0;
                numero[j] = 0;
                pe[i] = '0';
                pe[j] = '0';
                break;
            }
        }
    }
    cout << pares << endl;
    return 0;
}