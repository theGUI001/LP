#include <stdio.h>

double factorial(int x);

int main()
{

    int n;

    printf("Digite o número que deseja calcular o fatorial: ");
    scanf("%i", &n);

    printf("O fatoria de %i é: %.0lf\n", n, factorial(n));
};

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
