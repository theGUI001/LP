#include <stdio.h>

int main()
{

    int st = 0, end = 0;
    short flag;

    printf("Digite o valor inicial do intervalo (inclusivo): ");
    scanf("%i", &st);

    printf("Digite o valor final do intervalo (inclusivo): ");
    scanf("%i", &end);

    if (end < st)
    {
        printf("O valor final do intervalor é maior que o inicial. Tente novamente com outros valores\n");
    }

    printf("\nOs números primos no intervalo de %i a %i são: ", st, end);

    if (st < 2)
    {
        st = 2;
    }

    for (st; st <= end; st++)
    {
        flag = 0;

        for (int i = 2; i <= (st / 2); i++)
        {
            if ((st % i) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%i ", st);
        }
    }
    printf("\n\n");
}