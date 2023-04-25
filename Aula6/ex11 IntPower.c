#include <stdio.h>
#include <math.h>

int main()
{

    int n, out;

    printf("Escolha um número (positivo e inteiro): ");
    scanf("%i", &n);

    if (fmod((sqrt(n) * 10), 10) == 0)
    {
        out = ceil(sqrt(n)) + 1;
    }
    else
    {
        out = ceil(sqrt(n));
    }

    printf("O menor número inteiro cujo quadrado é maior que %i é: %i\n", n, out);
}