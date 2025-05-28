#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*73. Faça um programa, utilizando estrutura de condição, que receba um número
real, digitado pelo usuário e mostre o menu para selecionar o tipo de cálculo que
deve ser realizado:
101-Raiz quadrada
102-A metade
103-10% do número
104-O dobro
Escolha a opção:*/

int main(){

    setlocale(LC_ALL, "");
    float numero;


    printf("Digite um numero: ");
    scanf("%f", &numero);

    printf("Número digitado %.1f\n", numero);
    printf("\n\n");


    int opcao;
    printf("Selecione a opção de calculo\n 101- Raiz quadrada \n 102-A metatde\n 103- 10porcento do numero\n 104-O dobro");
    printf("\n\n");
    scanf("%d", &opcao);




    if( opcao == 101){
        printf("Raiz quadrada do numero é: %f", sqrt(numero));

    }else if(opcao == 102){
    printf("A metade do numero %.1f", numero /2);

    }else if(opcao == 103){
    printf(" 10%% de %.1f é: %.2f",numero, numero * 10/100);

    }else if(opcao == 104){
    printf("O dobro de %.2f é: ", numero * 2);

    }


    printf("\n\n");
    printf("\n\n");















    return 0;
}
