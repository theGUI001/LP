#include <stdio.h>

double factorial(int x);

int main()
{

    int n, i = 1;
    double h;

    printf("Escolha um valor de N: ");
    scanf("%d", &n);

    while (i <= n)
    {
        h += (1.0 / factorial(i));
        i++;
    }

    printf("O valor de H eh: %lf\n", h);
}

/**
 * @brief Calculates the factorial of a number (!)
 *
 * @param x number
 * @return Factorial of x
 */
double factorial(int x)
{

    if (x == 0)
    {
        return 1;
    }

    return x * factorial(x - 1);
}
