#include <stdio.h>

#define MAX 30

int main()
{
    int A[MAX][MAX], A2[MAX][MAX], B[MAX][MAX], P[MAX][MAX], cA, cB, lA, lB, sum = 0;

    scanf("%i %i", &lA, &cA);
    scanf("%i %i", &lB, &cB);

    for (int i = 0; i < lA; i++)
    {
        for (int j = 0; j < cA; j++)
        {
            scanf("%i", &A[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < lB; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            scanf("%i", &B[i][j]);
        }
    }

    if (lA > MAX || lB > MAX || cA > MAX || cB > MAX || cA != lB)
    {
        printf("ERRO");
        return 0;
    }

    for (int i = 0; i < lA; i++)
    {
        for (int j = 0; j < cA; j++)
        {
            for (int w = 0; w < lB; w++)
            {
                sum = sum + A[i][w] * A[w][j];
            }
            A2[i][j] = sum;
            sum = 0;
        }
    }

    for (int i = 0; i < lA; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            for (int w = 0; w < lB; w++)
            {
                sum = sum + A2[i][w] * B[w][j];
            }
            P[i][j] = sum;
            sum = 0;
        }
    }

    for (int i = 0; i < lA; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            printf("%i ", P[i][j]);
        }
        printf("\n");
    }
}