#include <stdio.h>

#define QNT 128

int main()
{

    int A[QNT], k, i;
    short R = 0;

    for (i = 0; i < QNT; i++)
    {
        printf("Item posição %i: ", i);
        scanf("%i", &A[i]);
    }

    printf("Valor da chave K: ");
    scanf("%i", &k);

    printf("\nResultado(s) encontrado(s) na posição:\n");

    for (i = 0; i < QNT; i++)
    {
        if (A[i] == k)
        {
            printf("Posição: %i\n", i);
            R = 1;
        }
    }

    if (R == 0)
    {
        printf("A chave K não está presente na lista\n");
    }

    return 0;
}