#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    char c;
    int soma_max[100000];
    while (scanf("%c", &c))
    {
        if (c == '\n')
            break;
        if (s.length() == 0)
        {
            soma_max[0] = 1;
        }
        else
        {
            if (s[s.length() - 1] == c)
                soma_max[s.length()] = soma_max[s.length() - 1] + 1;
            else
                soma_max[s.length()] = soma_max[s.length() - 1];
        }
        s += c;
    }
    int n, l, r;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        int soma = soma_max[r - 1] - soma_max[l - 1];
        cout << soma << "\n";
    }

    return 0;
}