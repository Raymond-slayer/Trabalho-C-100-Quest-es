#include <stdio.h>
#include <stdlib.h>

/*66. Escreva um algoritmo que leia dois números inteiros e determine qual é o menor
e qual é o maior também.*/


int main(){

int number1;

int number2;


printf("Digite um numero: ");
scanf("%d", &number1);
printf("\n\n");

printf("digite outro numero: ");
scanf("%d", &number2);


if(number1 > number2){
    printf("%d é o maior numero", number1);


}else{

printf("%d é o maior número", number2);
}


















    return 0;
}
