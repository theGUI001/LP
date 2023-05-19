#include <stdio.h>

int main()
{

    double t2 = 0, t1 = 1, t;
    int n, counter = 2;

    printf("Digite o número da sequencia de fibonacci: ");
    scanf("%i", &n);

    if (n == 1)
    {
        printf("%.0lf\n", t2);
        return 0;
    }

    if (n == 2)
    {
        printf("%.0lf\n", t1);
        return 0;
    }

    printf("%.0lf ", t2);
    printf("%.0lf ", t1);
    while (counter < n)
    {
        t = t2 + t1;
        printf("%.0lf ", t);
        t2 = t1;
        t1 = t;
        counter++;
    }

    printf("\n");
    return 0;
}