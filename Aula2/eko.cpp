#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    sort(array, array + n);
    // 4 7
    // 10 15 17 20
    // 20 - 17 = 3
    // 3 > 7 ?
    // 20 + 3 = 23
    // 23 - 15 = 7
    // 7 > 7
    // while 7 > 7
    // 15++
    //
    int left = 0, right = array[n - 1], H;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (array[i] > mid)
            {
                sum += array[i] - mid;
            }
        }
        if (sum >= m)
        {
            H = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << H << "\n";

    return 0;
}