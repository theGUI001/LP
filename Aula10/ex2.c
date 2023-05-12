#include <stdio.h>

int main()
{

    int m1[3][5], m2[3][5];

    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 5; j++)
        {
            printf("Valor do elemento da matriz m1 na posição [%i][%i]: ", i, j);
            scanf("%i", &m1[i][j]);
        }
    }

    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 5; j++)
        {
            printf("Valor do elemento da matriz m2 na posição [%i][%i]: ", i, j);
            scanf("%i", &m2[i][j]);
        }
    }

    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 5; j++)
        {
            printf("%i ", (m1[i][j] + m2[i][j]));
        }
        printf("\n");
    }
}