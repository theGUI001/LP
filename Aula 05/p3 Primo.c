#include <stdio.h>

int main()
{

    int N, i = 2;

    printf("Digite o número que deseja verificar se é primo: ");
    scanf("%i", &N);

    while (N > i)
    {
        if ((N % i) == 0)
        {
            printf("O número %i não é primo.\n", N);
            return 0;
        }
        i++;
    }

    printf("O número %i é primo.\n", N);
}