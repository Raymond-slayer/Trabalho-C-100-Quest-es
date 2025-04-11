#include <stdio.h>
/*
16. Faça um algoritmo que leia dois valores para as variáveis A e B e efetue a troca
dos valores de forma que a variável A passe a possuir o valor da variável B e a
variável B passe a possuir o valor da variável A. Apresente os valores trocados.

*/

int main(){

int A, B, TEMP;


A =10;
B = 20;


TEMP = A;
A = B;
B = TEMP;

printf("Valor de A: %i\n", A);
printf("Valor de B: %i\n", B);















return 0;
}
