#include <stdio.h>

int main()
{

    int A = 0, B = 0, C = 0, r;

    printf("Digite o valor de A: ");
    scanf("%i", &A);

    printf("Digite o valor de B: ");
    scanf("%i", &B);

    do
    {
        printf("Digite o valor de C (Maior que 5): ");
        scanf("%i", &C);
    } while (C <= 5);

    printf("Os números que divididos por %i resultam em resto 5 são: ", C);

    for (A; A <= B; A++)
    {
        r = A % C;

        if (r == 5)
        {
            printf("%i ", A);
        }
    }
}