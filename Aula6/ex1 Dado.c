#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, e, tot;
    srand(time(NULL));

    printf("Escolha o número de lançamento: ");
    scanf("%i", &N);

    for (int i = 0; i < N; i++)
    {
        e = 1 + rand() % 6;
        switch (e)
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

    printf("\n\nA face 1 caiu %i vezes, isso representa %.2f% \n", c1, ((float)c1 / tot * 100));
    printf("A face 2 caiu %i vezes, isso representa %.2f% \n", c2, ((float)c2 / tot * 100));
    printf("A face 3 caiu %i vezes, isso representa %.2f% \n", c3, ((float)c3 / tot * 100));
    printf("A face 4 caiu %i vezes, isso representa %.2f% \n", c4, ((float)c4 / tot * 100));
    printf("A face 5 caiu %i vezes, isso representa %.2f% \n", c5, ((float)c5 / tot * 100));
    printf("A face 6 caiu %i vezes, isso representa %.2f% \n\n\n", c6, ((float)c6 / tot * 100));

    return 0;
}