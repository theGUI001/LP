#include <stdio.h>

#define MAX 100

int main()
{
    int numbers[MAX] = {[0 ... 99] = -2}, n, i = 0, sum = 0, elements = 0;
    float avg;

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

    for (int j = 0; j < MAX; j++)
    {
        if (numbers[j] != (-2))
        {
            elements++;
            sum += numbers[j];
        }
    }

    avg = (float)sum / elements;

    printf("\n");
    printf("Média: %.2f\n\n", avg);
}
