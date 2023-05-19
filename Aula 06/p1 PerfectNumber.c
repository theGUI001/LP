#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Digite o número: ");
    scanf("%i", &n);

    for (int i = 1; i <= (n / 2); i++)
    {
        if ((n % i) == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        printf("O número %i é um número perfeito\n", n);
        return 0;
    }

    printf("O número %i não é um número perfeito\n", n);
    return 0;
}