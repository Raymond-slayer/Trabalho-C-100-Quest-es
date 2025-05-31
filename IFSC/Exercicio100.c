#include <stdio.h>
#include <stdlib.h>

//100. Crie um programa que peça 10 números inteiros e apresente: a média, o maiore o menor.

int main()
{


    int numeros[10];
    int soma = 0;
    int maior, menor;



    for(int i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i +1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];

        if(i == 0){
             maior = numeros[i];
             menor = numeros[i];
        }else{
        if(numeros[i] > maior){
            maior = numeros[i];

        }
        if (numeros[i] < menor){
                menor = numeros[i];


        }


        }

    }

    float media = soma / 10.0;


    printf("\nMédia: %.2f\n", media);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);











    return 0;
}
