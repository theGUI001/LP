#include <stdio.h>
#include <math.h>

int main()
{

    unsigned long long int s = 0;
    int n = 0;

    scanf("%i", &n);

    if (n == 0)
    {
        printf("1\n");
        return 0;
    }

    if (n > 15 || n < 0)
    {
        printf("NaN\n");
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        s += pow(i, i);
    }

    printf("%llu\n", s);
    return 0;
}