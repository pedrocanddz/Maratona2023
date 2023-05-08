#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testes;
    cin >> testes;
    while (testes--)
    {
        int n, c;
        cin >> n >> c;
        int stalls[n];
        for (int i = 0; i < n; i++)
        {
            cin >> stalls[i];
        }
        sort(stalls, stalls + n);
        int left = 0, right = stalls[n - 1] - stalls[0] + 1;
        while (right - left > 1)
        {
            int mid = (left + right) / 2;
            int cont = 1, ant = stalls[0];
            for (int i = 1; i < n; i++)
            {
                if (stalls[i] - ant >= mid)
                {
                    cont++;
                    ant = stalls[i];
                }
                if (cont == c)
                    break;
            }
            if (cont >= c)
            {
                left = mid;
            }
            else
            {
                right = mid;
            }
        }
        cout << left << endl;
    }
    return 0;
}