#include <stdio.h>
#include <math.h>

double factorial(int x);

int main()
{

   double S = 1;
   int x = 0;

   printf("Digite o valor de X: ");
   scanf("%i", &x);

   for (int i = 2, j = 3; i <= 40 && j <= 41; i = i + 2, j = j + 2)
   {
      S = S + (pow(x, i) / factorial(j)) * (-1);
   }

   printf("O Valor do somatório é: %lf", S);
}

/**
 * @brief Calculates the factorial of a number (!)
 *
 * @param x number
 * @return Factorial of x
 */
double factorial(int x)
{

   if (x == 0)
   {
      return 1;
   }

   return x * factorial(x - 1);
}