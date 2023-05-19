#include <stdio.h>

int main()
{

    int st = 0, end = 0;
    short flag;

    scanf("%i %i", &st, &end);

    if (end < st)
    {
        printf("O valor final do intervalor é maior que o inicial. Tente novamente com outros valores\n");
    }

    if (st < 2)
    {
        st = 2;
    }

    for (st; st <= end; st++)
    {
        flag = 0;

        for (int i = 2; i <= (st / 2); i++)
        {
            if ((st % i) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%i ", st);
        }
    }
}