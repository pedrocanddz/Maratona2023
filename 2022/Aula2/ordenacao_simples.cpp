#include <bits/stdc++.h>

using namespace std;

int ordem(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int n;
    cin >> n;

    int sequencia[n];
    for (int i = 0; i < n; i++)
    {
        cin >> sequencia[i];
    }

    qsort(sequencia, n, sizeof(int), ordem);

    for (int i = 0; i < n; i++)
    {
        cout << sequencia[i] << " ";
    }
    cout << endl;
    return 0;
}