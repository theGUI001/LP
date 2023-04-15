#include <stdio.h>

int main()
{

    int n, i = 1;
    double h;

    printf("Escolha um valor de N: ");
    scanf("%d", &n);

    while (i <= n)
    {
        h += (1.0 / i);
        i++;
    }

    printf("O valor de H eh: %f\n", h);
}