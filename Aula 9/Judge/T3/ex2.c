#include <stdio.h>

int main()
{
    int sum = 0, st, ed, counter = 0;

    scanf("%i %i", &st, &ed);

    if (st == 0)
    {
        st = 1;
    }

    for (int j = st; j <= ed; j++)
    {
        sum = 0;

        for (int i = 1; i <= (j / 2); i++)
        {
            if ((j % i) == 0)
            {
                sum += i;
            }
        }

        if (sum == j)
        {
            printf("%i ", j);
            counter++;
        }
    }

    printf("\n");
}