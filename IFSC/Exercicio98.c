#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*98. Escreva um algoritmo que calcule os quadrados e cubos dos números de 0 a 10
e imprima os valores resultantes no formato de tabela, como segue:*/

int main()
{

    setlocale(LC_ALL, "");
    float  resultado, resultado2;

    int quadrado = 2;
    int cubo = 3;
    char N[15] = {"Numero"};
    char N2[15] = {"Quadrado"};
    char N3[15] = {"Cubo"};
    int i, j;


    int base[11] = {0,1,2,3,4,5,6,7,8,9,10,11};


printf("%s \t\t%s \t\t%s \n", N,N2, N3);


   for(i = 0; i < 11; i++){

    resultado = pow(base[i], quadrado);
    resultado2 = pow(base[i], cubo);

    printf("%d \t\t%.2f \t\t\t%.2f\n", base[i], resultado, resultado2 );

   }













    return 0;
}
