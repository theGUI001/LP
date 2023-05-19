#include <stdio.h>

int main()
{

    int Mat[4][5] = {{1, 8, 15, 7, 9},
                     {0, 3, 14, 38, 0},
                     {62, 7, 88, 44, 1},
                     {4, 10, 57, 4, 6}};
    int somaLinha[4] = {0, 0, 0, 0};
    int sumTot = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            somaLinha[i] += Mat[i][j];
        }
        sumTot += somaLinha[i];
    }
    printf("Soma total: %i\n", sumTot);
}