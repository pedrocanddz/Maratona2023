#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testes;
    scanf("%d", &testes);

    for (int i = 0; i < testes; i++)
    {
        int length = 0;
        scanf("%d", &length);
        int array[length] = {0};
        for (int j = 0; j < length; j++)
        {
            scanf("%d", &array[j]);
        }
        int sum = array[0];
        int auxsum = sum;

        for (int j = 1; j < length; j++)
        {
            auxsum = max(array[j], array[j] + auxsum);
            sum = max(auxsum, sum);
        }
        printf("%d\n", sum);
    }
    return 0;
}