#include <stdio.h>

int main()
{

    double t2 = 0, t1 = 1, t;
    int n, counter = 2;

    scanf("%i", &n);

    if (n <= 0)
    {
        printf("NaN\n");
        return 0;
    }

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

    while (counter < n)
    {
        t = t2 + t1;
        t2 = t1;
        t1 = t;
        counter++;
    }

    printf("%.0lf\n", t);
    return 0;
}