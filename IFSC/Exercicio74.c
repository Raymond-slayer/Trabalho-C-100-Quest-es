#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*74. O programa de uma loja de móveis mostra o seguinte menu na tela de vendas:
1-Venda a Vista
2-Venda a Prazo 30 dias
3-Venda a Prazo 60 dias
4-Venda a Prazo com 90 dias
5-Venda com cartão de débito
6-Venda com cartão de crédito
Escolha a opção:*/

int main()
{

    setlocale(LC_ALL, "");

    int opcao;


    printf("Digite as opções de venda \n1-Venda a Vista\n2-Venda a Prazo 30 dias\n3-Venda a Prazo 60 dias\n4-Venda a Prazo com 90 dia\n5-Venda com cartão de débito\n6-Venda com cartão de crédito");
    printf("\n\n");
scanf("%d", &opcao);

printf("\n\n");
        switch(opcao){

    case 1:
        printf("Venda a vista");
        break;
         case 2:
        printf("Venda a prazo 30 dias");
        break;
         case 3:
        printf("Venda a prazo 60 dias");
        break;
         case 4:
        printf("Venda a prazo 90 dias");
        break;
         case 5:
        printf("Venda com cartão");
        break;
         case 6:
        printf("Venda com cartão de crédito");
        break;

         default:
            printf("Opção inválida");



        }


printf("\n\n");















    return 0;
}
