#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiro1;
    int inteiro2;


    printf("Calcule o numero: ");
    scanf("%i", &inteiro1);

    printf("E o numero:");
    scanf("%i", &inteiro2);


   int Quociente = inteiro1 / inteiro2;
   int resto = inteiro1 % inteiro2;

   printf("Quonciente %i / %i = %i\n", inteiro1, inteiro2, Quociente);
   printf("Resto %i %% %i = %i", inteiro1, inteiro2, resto);





















    return 0;
}
