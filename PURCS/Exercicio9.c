#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valores[10];
    int i = 0;



      printf("Digite valor: ");
        scanf("%d", &valores[i]);

    int maior = valores[0];
    int menor = valores[0];

    i = 1;


    while(i < 11){

        printf("Digite valor: ");
        scanf("%d", &valores[i]);


        if(valores[i] > maior){
            maior = valores[i];

        }
        if(valores[i] < menor){
            menor = valores[i];

        }


        i++;


    }
    printf("\n\n");

    printf("Maior valor: %d \n\n", maior);
    printf("Menor valor: %d ", menor);















    return 0;
}
