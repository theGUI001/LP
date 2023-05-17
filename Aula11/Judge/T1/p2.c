#include <stdio.h>

long long int myPow(int x, int p);

int main()
{

    int V[5] = {0, 0, 0, 0, 0}, i = 0, p = -1;

    while (i < 5)
    {
        scanf("%i", &V[i]);
        if (V[i] <= 10 && V[i] >= -10)
        {
            i++;
        }
    }

    while (p < 0 || p > 10)
    {
        scanf("%i", &p);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%lld ", myPow(V[i], p));
    }
}

long long int myPow(int x, int p)
{
    int resultado = 1;

    for (int i = 1; i <= p; i++)
    {
        resultado *= x;
    }

    return resultado;
}