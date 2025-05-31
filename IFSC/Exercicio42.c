#include <stdio.h>
#include <stdlib.h>

/*42. Uma pessoa comprou quatro artigos em uma loja. Para cada artigo, tem-se
nome, preço e percentual de desconto. Faça um algoritmo que imprima nome,
preço e preço com desconto de cada artigo e o total a pagar.*/

int main()
{

    char artigos[4][20] = {"caneca","Chicara","copo","caneta"};
    float valores[4];
    float desconto;
    float soma = 0;





    for(int i = 0; i < 4; i++){


        printf("Artigo %d: %s\n", i, artigos[i]);
        printf("Digite o valor do produto: ");
        scanf("%f", &valores[i]);
        printf("Valor %.2f\n\n", valores[i]);
        desconto = valores[i] * 0.10;
        float totalParcial = valores[i] - desconto;
        printf("10%% de desconto total do produto %.2f\n\n",totalParcial);



    }




        for(int i = 0; i < 4; i++){
                printf("Artigos %d: %s - R$ %.2f\n", i +1, artigos[i], valores[i]);



        soma = soma + valores[i] - desconto;


        }

        printf("\n\n");

        printf("Total a pagar com desconto %.2f\n\n\n\n\n" , soma);
















    return 0;
}
