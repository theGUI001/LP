#include <stdio.h>

int main()
{
    int N, iter;
    float r;

    printf("Informe o valor do parâmetro r: ");
    scanf("%f", &r);

    printf("Informe a população inicial (N(0)): ");
    scanf("%d", &N);

    printf("Informe o número de iterações: ");
    scanf("%d", &iter);

    for (int i = 1; i <= iter; i++)
    {
        N = N + r * N;
        printf("Iteração %d: População = %d\n", i, N);
    }

    return 0;
}
