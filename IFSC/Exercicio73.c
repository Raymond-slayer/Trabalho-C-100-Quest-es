#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*73. Fa�a um programa, utilizando estrutura de condi��o, que receba um n�mero
real, digitado pelo usu�rio e mostre o menu para selecionar o tipo de c�lculo que
deve ser realizado:
101-Raiz quadrada
102-A metade
103-10% do n�mero
104-O dobro
Escolha a op��o:*/

int main(){

    setlocale(LC_ALL, "");
    float numero;


    printf("Digite um numero: ");
    scanf("%f", &numero);

    printf("N�mero digitado %.1f\n", numero);
    printf("\n\n");


    int opcao;
    printf("Selecione a op��o de calculo\n 101- Raiz quadrada \n 102-A metatde\n 103- 10porcento do numero\n 104-O dobro");
    printf("\n\n");
    scanf("%d", &opcao);




    if( opcao == 101){
        printf("Raiz quadrada do numero �: %f", sqrt(numero));

    }else if(opcao == 102){
    printf("A metade do numero %.1f", numero /2);

    }else if(opcao == 103){
    printf(" 10%% de %.1f �: %.2f",numero, numero * 10/100);

    }else if(opcao == 104){
    printf("O dobro de %.2f �: ", numero * 2);

    }


    printf("\n\n");
    printf("\n\n");















    return 0;
}
