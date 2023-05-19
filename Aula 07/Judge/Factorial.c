#include <stdio.h>

int main()
{

    int n;
    double fact = 1;

    scanf("%i", &n);

    if (n < 0)
    {
        printf("NaN\n");
        return 0;
    }

    for (n; n > 1; n--)
    {
        fact *= n;
    }

    printf("%.0lf\n", fact);
    return 0;
};
