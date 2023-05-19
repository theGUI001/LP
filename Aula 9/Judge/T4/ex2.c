#include <stdio.h>

int pot(int a, int x)
{
    int resultado = 1;

    for (int i = 1; i <= x; i++)
    {
        resultado *= a;
    }

    return resultado;
}

int main()
{

    unsigned long int binary;
    int decimal = 0;

    scanf("%lu", &binary);

    for (int i = 0; binary > 0; i++)
    {
        decimal += (pot(2, i) * (binary % 10));
        binary /= 10;
    }

    printf("%i\n", decimal);
}