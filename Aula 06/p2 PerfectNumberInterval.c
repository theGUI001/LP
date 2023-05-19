#include <stdio.h>

int main()
{
    int sum = 0, st, ed, counter = 0;

    printf("Digite o número inicial do intervalo (incluso): ");
    scanf("%i", &st);

    printf("Digite o número final do intervalo (incluso): ");
    scanf("%i", &ed);

    if (st == 0)
    {
        st = 1;
    }

    printf("Os números perfeitos no intervalo de [%i,%i] são: ", st, ed);

    for (int j = st; j <= ed; j++)
    {
        sum = 0;

        for (int i = 1; i <= (j / 2); i++)
        {
            if ((j % i) == 0)
            {
                sum += i;
            }
        }

        if (sum == j)
        {
            printf("%i ", j);
            counter++;
        }
    }

    if (counter == 0)
    {
        printf("Não existem números perfeitos nesse intervalo.\n");
    }

    printf("\n");
}