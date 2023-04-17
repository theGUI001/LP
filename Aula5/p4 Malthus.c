#include <stdio.h>

int main()
{
    int N = 0, iter;
    float r;

    printf("Informe o valor do parâmetro r: ");
    scanf("%f", &r);

    printf("Informe o número de iterações: ");
    scanf("%d", &iter);

    for (int i = 1; i <= iter; i++)
    {
        // TODO: fix formula
        N = N + r * N * (1 - N);
        printf("Iteração %d: População = %d\n", i, N);
    }

    return 0;
}
