#include <stdio.h>

int main()
{
    int multiplicando, multiplicador, produto;

    printf("Digite o multiplicando: ");
    scanf("%i", &multiplicando);

    printf("Digite o multiplicador: ");
    scanf("%i", &multiplicador);

    for (int i = 0; i < multiplicador; i++)
    {
        produto += multiplicando;
    }
    
    printf("O produto é: %i\n", produto);
}
