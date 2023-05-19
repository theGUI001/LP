#include <stdio.h>

#define MAX 100

int main()
{
    int numbers[MAX] = {[0 ... 99] = -2}, n, i = 0, sum = 0, elements = 0, ma, me;
    float med;

    while (i < MAX)
    {
        printf("Digite o número que deseja (-1 finaliza): ");
        scanf("%i", &n);

        if (n == (-1))
        {
            break;
        }

        numbers[i] = n;
        i++;
    }

    ma = me = numbers[0];

    for (int i = 0; i < MAX; i++)
    {
        if (numbers[i] != (-2))
        {
            elements++;
            sum += numbers[i];

            if (ma < numbers[i])
            {
                ma = numbers[i];
            }

            if (me > numbers[i])
            {
                me = numbers[i];
            }
        }
    }

    med = sum / elements;

    printf("\n\nSoma dos elementos: %i\nMenor elemento: %i\nMaior elemento: %i\nNúmero de elementos: %i\nMédia: %.2f\n\n", sum, me, ma, elements, med);
}
