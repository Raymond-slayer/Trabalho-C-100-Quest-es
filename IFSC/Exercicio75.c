#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*75. Fa�a um programa que receba o valor da venda, escolha a condi��o de
pagamento no menu e mostre o total da venda final conforme condi��es a seguir:
Venda a Vista - desconto de 10%
Venda a Prazo 30 dias - desconto de 5%
Venda a Prazo 60 dias - mesmo pre�o
Venda a Prazo 90 dias - acr�scimo de 5%
Venda com cart�o de d�bito - desconto de 8%
Venda com cart�o de cr�dito - desconto de 7%*/

int main()
{

    setlocale(LC_ALL, "C");
    float venda;


    printf("Digite o valor venda: ");
    scanf("%f", &venda);

    printf("Escolha a condi��o de pagamento:\n");
    printf("1 Venda a vista desconto de 10%%\n");
    printf("2 Venda a prazo 30 dias desconto de 5%% \n");
    printf("3 Venda a prazo 60 dias\n");
    printf("4 Venda a prazo 90 dias acrescimo de 5%%\n");
    printf("5 Venda com cart�o de d�bito desconto de 8%%\n");
    printf("6 Venda com cart�o de cr�dito desconto de 7%%\n");

    int opcao;

    printf("\n\n");

    printf("Op��o: ");
    scanf("%d", &opcao);

printf("Op��o informada %d\n\n", opcao);
printf("\n\n");

    float VendaAvista = venda -venda * 0.10;
    float VendaAprazo30dias =venda - venda * 0.05;
    float VendaAprazo60dias = venda;
    float VendaAprazo90dias = venda + venda * 0.05;
    float VendaCartaodebito = venda - venda * 0.08;
    float VendaCartaocredito =venda - venda * 0.07;

    if (opcao == 1){
        printf("Venda a vista valor total: %.3f", VendaAvista );
    }else if (opcao == 2){
    printf("Venda a prazo 30 dias valor total: %.3f",VendaAprazo30dias );
    }else if (opcao == 3){
    printf("Venda a prazo 60 dias valor total: %.3f", venda);
    }else if (opcao == 4 ){
    printf("Venda a prazo 90 dias valor total: %.3f",VendaAprazo90dias);
    }else if(opcao == 5 ){
    printf("Venda com cart�o de d�bito valor total: %.3f",VendaCartaodebito);
    }else if(opcao == 6 ){
    printf("Venda com cart�o de cr�dito valor total: %.3f",VendaCartaocredito);
    }else{
    printf("Op��o inv�lida digite de 1 a 6\n\n");
    }










    return 0;
}
