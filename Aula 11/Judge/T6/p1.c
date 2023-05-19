#include <stdio.h>

#define MAX 30

int main()
{
    int i, j, M[MAX][MAX], F[101] = {0};

    scanf("%i %i", &i, &j);

    for (int w = 0; w < i; w++)
        for (int z = 0; z < j; z++)
        {
            scanf("%i", &M[w][z]);

            F[M[w][z]]++;
        }

    for (int r = 0; r <= 100; r++)
        if (F[r] > 0)
            printf("%i %i\n", r, F[r]);
}
