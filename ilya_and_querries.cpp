#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;
    int n, l, r;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        int count = 0;
        for (int j = l - 1; j < r - 1; j++)
        {
            if (s[j] == s[j + 1])
            {
                count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}