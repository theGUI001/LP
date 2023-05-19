#include <stdio.h>
#include <math.h>

int main()
{

    int i, j;

    printf("Digite a base e o expoente, respectivamente e separado por um espaço: ");
    scanf("%i %i", &i, &j);

    printf("%i elevado a %i potencia é: %.0lf\n", i, j, pow(i, j));
}