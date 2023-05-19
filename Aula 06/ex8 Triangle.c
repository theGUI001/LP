#include <stdio.h>

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
        printf("Não é um triângulo válido.\n");
        return 1;
    }

    // Verifies what "kind" of triangle it's
    if (a == b == c)
    {
        printf("Triângulo Equilátero\n");
        return 0;
    }

    if (a == b | b == c)
    {
        printf("Triângulo Isóceles\n");
        return 0;
    }

    printf("Triângulo Escaleno\n");
    return 0;
}