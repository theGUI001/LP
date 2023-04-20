#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, e, tot;

    printf("Escolha o número de lançamento: ");
    scanf("%i", &N);

    // 1 + rand() % 6;

    for (int i = 0; i < N; i++)
    {
        switch (e = 1 + rand() % 6)
        {
        case 1:
            c1++;
            break;

        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;
        case 5:
            c5++;
            break;
        case 6:
            c6++;
            break;
        }
    }

    tot = c1 + c2 + c3 + c4 + c5 + c6;

    printf("A face 1 caiu %i vezes, isso representa %.2f");
}