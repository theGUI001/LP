#include <stdio.h>

int main()
{

    int n, sum = 0, prod = 1;

    printf("Digite um valor de N: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        if ((i % 2) == 0)
        {
            sum += i;
            prod *= i;
        }
    }

    printf("A soma dos números pares do intervalo [1,%i] é: %i\n", n, sum);
    printf("O produto dos números pares do intervalo [1,%i] é: %i\n", n, prod);
}