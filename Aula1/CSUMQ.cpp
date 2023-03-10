#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Cumulative sum query
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int k, j; // k = i na query
        cin >> k >> j;
        int sum = 0;
        for (int a = k; a <= j; a++)
            sum += v[a];
        cout << sum << "\n";
    }
    return 0;
}