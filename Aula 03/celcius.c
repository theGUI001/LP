#include <stdio.h>

int main()
{
    int c, f;

    printf("Digite a temperatura, em graus celcius, que deseja converter para fahrenheit: ");
    scanf("%i", &c);

    f = (c * 9 / 5) + 32;

    printf("%i graus celcius em fahrenheit é: %i\n", c, f);
    return 0;
}