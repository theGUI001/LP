#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, nDigits, sum = 0;

    printf("Digite um número: ");
    scanf("%i", &n);

    printf("A soma dos algarismos de %i é: ", n);

    if (n == 0)
        nDigits = 1;
    else
        nDigits = floor(log10(abs(n))) + 1;

    for (int i = 0; i < nDigits; i++)
    {
        sum += n % 10;
        n = floor((n / 10));
    }

    printf("%i\n", sum);
    return 0;
}