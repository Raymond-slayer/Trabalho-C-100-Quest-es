
// Online C compiler to run C program online
#include <stdio.h>
   /* 59. Fa�a um algoritmo que leia um n�mero inteiro e mostre uma mensagem
indicando se este n�mero � par ou �mpar e se � positivo ou negativo.*/

int main() {
    int numero;



    printf("Digite um numero: ");
    scanf("%d", &numero);


    printf("O numero digitado foi: %d\n ", numero);


    if(numero %2 == 0){

        printf("Numero par\n\n");
    }else{
        printf("Numero � �mpar\n");

    }


    if(numero < 0){
        printf("Numero negativo\n");
    }else{
        printf("Numero Positivo");

    }














    return 0;
}
