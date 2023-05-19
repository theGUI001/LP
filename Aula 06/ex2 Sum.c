#include <stdio.h>
#include <math.h>

int main()
{

    unsigned long long int s = 0;
    int n = 0;

    printf("Digite o número de elemetos a serem somados: ");
    scanf("%i", &n);

    if (n > 15)
    {
        printf("Devido a questões de memória o programa só funciona para valores de N <= a 15. Por favor tente novamente com outro valor inferior");
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        s += pow(i, i);
    }

    printf("O valor de S é: %llu", s);
    return 0;
}