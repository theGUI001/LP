#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, swap;

    printf("Digite os lados dos triângulos os separando por espaços: ");
    scanf("%i %i %i", &a, &b, &c);

    // Sort sides in ASC order
    if (a > b)
    {
        swap = a;
        a = b;
        b = swap;
    }

    if (b > c)
    {
        swap = b;
        b = c;
        c = swap;
    }

    if (a > b)
    {
        swap = a;
        a = b;
        b = swap;
    }

    // Verifies if is a triangle
    if (a + b <= c)
    {
        printf("Não é um triângulo válido.");
        return 1;
    }

    // Verifies what "kind" of triangle it's
    if (pow(c, 2) == pow(a, 2) + pow(b, 2))
    {
        printf("Triângulo Retângulo");
        return 0;
    }

    if (pow(c, 2) > pow(a, 2) + pow(b, 2))
    {
        printf("Triângulo Obtusângulo");
        return 0;
    }

    printf("Triângulo Acutângulo");
    return 0;
}