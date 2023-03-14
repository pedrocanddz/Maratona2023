#include <bits/stdc++.h>
using namespace std;

int order(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int bsearch_custom(int *sequence, int n, int queries)
{
    int left = 0;
    int right = n - 1;
    int middle;

    while (left <= right)
    {
        middle = (left + right) / 2;
        if (sequence[middle] == queries)
        {
            if (middle > 0 && sequence[middle] == sequence[middle - 1])
            {
                int retorno = bsearch_custom(sequence, middle, queries);
                if (retorno == -1)
                    return middle;
                middle = retorno;
            }
            return middle;
        }
        else if (sequence[middle] < queries)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    return -1;
}

int main()
{
    int n, q;

    scanf("%d%d", &n, &q);
    int sequence[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sequence[i]);
    }
    int result, queries;

    for (int i = 0; i < q; i++)
    {
        scanf("%d", &queries);
        result = bsearch_custom(sequence, n, queries);

        printf("%d\n", result);
    }

    return 0;
}