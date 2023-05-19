#include <stdio.h>

int main()
{

    double t2 = 0, t1 = 1, t;
    int n, counter = 2;

    printf("Digite o número da sequencia de fibonacci: ");
    scanf("%i", &n);

    if (n == 1)
    {
        printf("A o número %i da sequência de fibonacci é: %.0lf\n", n, t2);
        return 0;
    }

    if (n == 2)
    {
        printf("A o número %i da sequência de fibonacci é: %.0lf\n", n, t1);
        return 0;
    }

    while (counter < n)
    {
        t = t2 + t1;
        t2 = t1;
        t1 = t;
        counter++;
    }

    printf("A o número %i da sequência de fibonacci é: %.0lf\n", n, t);
    return 0;
}