#include <stdio.h>
#include <stdlib.h>

/*66. Escreva um algoritmo que leia dois n�meros inteiros e determine qual � o menor
e qual � o maior tamb�m.*/


int main(){

int number1;

int number2;


printf("Digite um numero: ");
scanf("%d", &number1);
printf("\n\n");

printf("digite outro numero: ");
scanf("%d", &number2);


if(number1 > number2){
    printf("%d � o maior numero", number1);


}else{

printf("%d � o maior n�mero", number2);
}


















    return 0;
}
