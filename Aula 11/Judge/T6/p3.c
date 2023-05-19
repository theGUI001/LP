#include <stdio.h>

#define MAX 30

int main()
{
    int m, n, p, q, c, d, k, sum = 0;
    int first[MAX][MAX], second[MAX][MAX], multiply[MAX][MAX];

    scanf("%i %i", &m, &n);
    scanf("%i %i", &p, &q);

    if (m > MAX || n > MAX || p > MAX || q > MAX || n != p)
    {
        printf("ERRO");
        return 0;
    }

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
            scanf("%i", &first[c][d]);
    }

    for (c = 0; c < p; c++)
        for (d = 0; d < q; d++)
            scanf("%i", &second[c][d]);

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < q; d++)
        {
            for (k = 0; k < p; k++)
            {
                sum = sum + first[c][k] * second[k][d];
            }

            multiply[c][d] = sum;
            sum = 0;
        }
    }

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < q; d++)
            printf("%i\t", multiply[c][d]);

        printf("\n");
    }

    return 0;
}