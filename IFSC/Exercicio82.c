#include <stdio.h>
#include <stdlib.h>
/*82. Construa um algoritmo que, tendo como dados de entrada o pre�o de um
produto e um c�digo de origem, mostre o pre�o junto de sua proced�ncia (ex.
500,00 � Sul). Caso o c�digo n�o seja nenhum dos especificados, o produto
deve ser encarado como importado.
C�digo de origem
1 � Sul 5 ou 6 � Nordeste
2 � Norte 7 ou 8 ou 9 � Sudeste
3 � Leste 10 at� 20 � Centro Oeste
4 � Oeste 25 at� 35 � Nordeste
*/



int main()
{
    int produto;

    printf("digite o codigo do produto: ");
    scanf("%d", &produto);


    switch(produto){

    case 5:
    case 6:
        printf("Nordeste 500,00");
        break;

        case 7:
    case 8:
        case 9:
        printf("Sudeste 1.000,00");
        break;

     case 10:
     case 11:
     case 12:
     case 13:
     case 14:
     case 15:
     case 16:
     case 17:
     case 18:
     case 19:
     case 20:
        printf("Leste 1.500,00");
        break;

    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
        printf("Nordeste 3.000,00");
        break;


    default:
        printf("Produto importado");
    }

    printf("\n\n");
    printf("\n\n");

    return 0;
}
