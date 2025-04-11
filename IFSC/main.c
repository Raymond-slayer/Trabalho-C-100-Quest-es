#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int a;
    int b;

    printf("Digite o valor de A: " );
    scanf("%i", &a);

    printf("Digite o valor de B: ");
    scanf("%i", &b);


    int soma  = a + b;
    printf("O resultado desta soma e %i\n", soma);


    int quadrado = (int)pow(soma,2);
    printf("O quadrado da soma e %i",quadrado );








    return 0;
}
