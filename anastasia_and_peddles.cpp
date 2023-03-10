#include <bits/stdc++.h>

using namespace std;

//     She has only two pockets. She can put at most k pebbles in each pocket at the same time. There are n different pebble types in the park, and there are wi pebbles of the i-th type. Anastasia is very responsible, so she never mixes pebbles of different types in same pocket. However, she can put different kinds of pebbles in different pockets at the same time. Unfortunately, she can't spend all her time collecting pebbles, so she can collect pebbles from the park only once a day.
// Help her to find the minimum number of days needed to collect all the pebbles of Uzhlyandian Central Park, taking into consideration that Anastasia can't place pebbles of different types in same pocket.
// Input
// The first line contains two integers n and k (1 ≤ n, k ≤ 100) — the number of different pebble types in the park and the maximum number of pebbles Anastasia can put in each pocket at the same time.
// The second line contains n integers w1, w2, ..., wn (0 ≤ wi ≤ 100) — the number of pebbles of the i-th type in the park.
// Output
// Print a single integer — the minimum number of days needed to collect all the pebbles of Uzhlyandian Central Park.
// Examples
// inputCopy
// 3 2
// 2 3 4
// outputCopy
// 3
int main()
{
    int n, k;
    cin >> n >> k;
    int num_peddles[n];
    for (int i = 0; i < n; i++)
        cin >> num_peddles[i];
    int dias = 0;
    for (int i = 0; i < n; i++)
    {
        dias += num_peddles[i] / k;
        if (num_peddles[i] % k != 0)
            dias++;
    }
    if (dias % 2 == 0)
        cout << dias / 2 << "\n";
    else
        cout << dias / 2 + 1 << "\n";
    // cout << dias / 2 << "\n";
    return 0;
}