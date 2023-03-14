#include <bits/stdc++.h>

using namespace std;

void merge(int *array, int start, int mid, int end)
{
    int i, j, k;
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = array[start + i];
    for (j = 0; j < n2; j++)
        R[j] = array[mid + 1 + j];
    i = 0;
    j = 0;
    k = start;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            array[k] = L[i];
            i++;
        }
        else
        {
            array[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        array[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        array[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int *array, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;

        mergeSort(array, start, mid);
        mergeSort(array, mid + 1, end);

        merge(array, start, mid, end);
    }
}

int main()
{
    int testes;

    cin >> testes;

    int n;

    int a[2 * 1000000 + 1] = {0};

    for (int i = 0; i < testes; i++)
    {
        cin >> n;
        for (int k = 0; k < n; k++)
        {
            cin >> a[k];
        }
        mergeSort(a, 0, n - 1);

        int maior = a[0];

        for (int j = 0; j < n - 1; j++)
        {
            if (maior < (a[j + 1] - a[j]))
                maior = (a[j + 1] - a[j]);
            a[j] = a[j] + a[j + 1];
        }
        cout << maior << '\n';
    }
    return 0;
}