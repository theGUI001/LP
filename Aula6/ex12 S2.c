#include <stdio.h>
#include <math.h>

double factorial(int x);

int main()
{

    float S3;
    int x, n;

    printf("Digite um valor para X: ");
    scanf("%i", &x);

    printf("Digite um valor para N: ");
    scanf("%i", &n);

    S3 = x;

    for (int i = 1, j = 3; i < n; i++, j += 2)
    {
        S3 += pow(-1, i) * (pow(x, j) / factorial(j));
    }

    printf("O valor de S3 é: %f\n", S3);
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