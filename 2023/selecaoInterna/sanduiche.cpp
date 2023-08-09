#include <bits/stdc++.h>

using namespace std;

const int maxn = 21;

bitset<maxn> bad[maxn];

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        u--;
        v--; 

        bad[u][v] = true;
        bad[v][u] = true;
    }

    int ans = 0;

    for (int S = 1; S < (1 << n); S++) {
        bool isValid = true;

        for (int i = 0; i < n; i++) {
            if (S & (1 << i)) {
                if ((bad[i] & bitset<maxn>(S)).any()) {
                    isValid = false;
                    break;
                }
            }
        }
        if (isValid) 
            ans++;
    }

    cout << ans << endl;
    return 0;
}