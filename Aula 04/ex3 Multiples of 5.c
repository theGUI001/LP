#include <stdio.h>

int main()
{
    printf("Lista dos multiplos de 5 até 500: \n");
    
    for (int i = 0; i <= 500; i++)
    {
        if(i%5 == 0){
            printf("%i\n", i);
        }
    }
}
