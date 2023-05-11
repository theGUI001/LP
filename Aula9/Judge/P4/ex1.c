#include <stdio.h>

int main()
{

    int tmp = 0, intcount = 0, prod = 1;
    short x = 1;
    float mult7 = 0, countMult7 = 0;

    while (x != 0)
    {
        scanf("%i", &tmp);
        if (tmp > -1)
        {
            intcount++;
            if (tmp % 7 == 0)
            {
                mult7 += tmp;
                countMult7++;
            }
            if (tmp % 15 == 0)
            {
                prod *= tmp;
            }
        }
        else if (tmp == -1)
        {
            x = 0;
        }
    }

    if (countMult7 <= 0)
        mult7 = 0.0;
    else
        mult7 /= countMult7;

    printf("%i %f %i\n", intcount, mult7, prod);
}