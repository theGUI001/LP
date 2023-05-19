#include <stdio.h>

int main()
{

    int R[10], S[10], Y[10], X[20], sr = 0, ss = 0, i;

    for (i = 0; i < 10; i++)
    {
        scanf("%i", &R[i]);
        X[i] = R[i];
    }

    for (int w = 0; w < 10; w++)
    {
        scanf("%i", &S[w]);
        i++;
        X[i] = S[w];
    }

    for (int j = 0; j < 10; j++)
    {
        sr += R[j];
        ss += S[j];
        Y[j] = R[j] * S[j];
    }

    printf("Soma de R: %i\n", sr);
    printf("Soma de S: %i\n", ss);
}