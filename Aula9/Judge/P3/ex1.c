#include <stdio.h>

int main()
{

    int a, b, counter = 0;
    float med;

    scanf("%i %i", &a, &b);

    while (a <= b)
    {
        if (a % 7 == 0 && a % 2 == 0)
        {
            counter++;
            med += a;
        }
        a++;
    }

    med /= (float)counter;

    printf("%f", med);
}