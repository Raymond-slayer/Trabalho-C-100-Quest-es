#include <stdio.h>
#include <stdlib.h>

/*89. Construa um Algoritmo que, para um grupo de 50 valores inteiros, determine:
a) A soma dos números positivos;
b) A quantidade de valores negativos;
*/
int main()
{
    int numeros[50];
    int i;
    int somaPositivos = 0;
    int qtdNegativos = 0;

    for(i = 0; i < 50; i++){
       printf("Digite o valor %d: ", i+1);
        scanf("%d", &numeros[i]);
        if(numeros[i] > 0){

    somaPositivos += numeros[i];


        }else if(numeros[i] < 0){
    qtdNegativos++;

        }

    }

    printf("Soma dos positivos: %d\n", somaPositivos);
    printf("Quantidade de negativos: %d\n", qtdNegativos);

























    return 0;
}
