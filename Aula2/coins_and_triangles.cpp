#include <bits/stdc++.h>
using namespace std;

int altura(int n)
{
    if (n == 1)
        return n;
    return n + altura(n - 1);
}

int main()
{
    int testes;
    cin >> testes;

    int n;
    for (int i = 0; i < testes; i++)
    {
        scanf("%d", &n);
        /*
         altura 1 = 1 moeda
         2 = 3
         3 = 6
         4 = 10
         5 = 15
        */
        int j = 0, altura = 0;
        while (altura <= n)
        {
            j++;
            altura += j;
        }
        printf("%d\n", j - 1);
    }
    return 0;
}
