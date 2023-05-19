#include <stdio.h>

#define MAX 30

int main()
{

    int M[MAX][MAX], c, l;

    scanf("%i %i", &l, &c);

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%i", &M[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("%i ", M[j][i]);
        }
        printf("\n");
    }
}