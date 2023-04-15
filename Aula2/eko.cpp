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
    int aux = array[n - 1];
    int diff = 0;
    for (int i = n - 1; i > 0; i--)
    {
        diff = (aux + 1) - array[i];
        cout << "diff : " << diff << " aux : " << aux << " array[i] " << array[i] << endl;
        aux += diff;
        if (diff >= m)
        {
            aux = array[i];
            break;
        }
    }

    cout << aux << "\n";

    return 0;
}