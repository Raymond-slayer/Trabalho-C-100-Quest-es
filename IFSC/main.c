#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    int b;


    printf("Digite um numero:");
    scanf("%i", &a);
    int quadradoA = (int)pow(a,2);
    printf("O quadrado e %i\n", quadradoA);


    printf("Digite outro numero: ");
    scanf("%i", &b);
    int quadradoB = (int)pow(b,2);
    printf("O quadrado e %i\n", quadradoB);


int soma = quadradoA + quadradoB;

printf("A soma dos quadrados e %i", soma);



















    return 0;
}
