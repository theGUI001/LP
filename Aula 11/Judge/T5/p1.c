#include <stdio.h>
#define MAX 50

int main()
{
    int V1[MAX];
    int n, i;

    scanf("%d", &n);

    if (n < 2 || n > MAX)
    {
        printf("Erro");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &V1[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", V1[n - i - 1]);
    }
    printf("\n");

    return 0;
}