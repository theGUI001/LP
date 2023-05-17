#include <stdio.h>

int main()
{
    int m, n, p, q, c, d, k, sum = 0;
    int first[10][10], second[10][10], multiply[10][10];

    printf("Entre com o número de linhas e colunas da primeira matriz\n");
    scanf("%i %i", &m, &n);
    printf("Entre com os elementos da primeira matriz\n");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
            scanf("%i", &first[c][d]);
    }

    printf("Entre com o número de linhas e colunas da segunda matriz\n");
    scanf("%i %i", &p, &q);

    if (n != p)
        printf("Matrizes não podem ser multiplicadas por causa do número de colunas da primeira matriz não ser igual ao número de linhas da segunda matriz.\n");
    else
    {
        printf("Entre com os elementos da segunda matriz\n");

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

        printf("Produto das matrizes:\n");

        for (c = 0; c < m; c++)
        {
            for (d = 0; d < q; d++)
                printf("%i\t", multiply[c][d]);

            printf("\n");
        }
    }

    return 0;
}