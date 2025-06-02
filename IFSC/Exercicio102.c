#include <stdio.h>
#include <stdlib.h>

/*
102. Um hotel com 30 quartos cobra R$ 50,00 por diária e mais uma taxa de
serviços. A taxa de serviços é de:
• R$ 4,00 por diária, se o número de diárias for < 15;
• R$ 3,60 por diária, se o número de diárias for = 15;
• R$ 3,00 por diária, se o número de diárias for > 15.
Faça um algoritmo que imprima o nome e o total da conta de cada cliente do hotel.
Imprima também o total ganho pelo hotel.*/

void limpaBuffer(){
int c;
while ((c = getchar()) != '\n' && c != EOF);
}


int main()
{
    float valor = 50.00;
    int diarias;


    char nome [3][50];
    int i;

    float totalGeral = 0;

    float soma = 0;




for(i = 0; i < 3; i++){
    printf("\nDigite o nome do cliente : " );

    scanf("%s", &nome[i]);

    printf("%s",nome[i]);
    printf("\n\n");

    printf("Valor da diaria: %.2f\n\n", valor );
    printf("Digite o numero de diarias: ");
    scanf("%d", &diarias);



    float Total = valor * diarias;

    printf("O valor total e de: %.2f\n\n", Total);
    float taxa1 = 4.00 * diarias;
    float taxa2 = 3.60 * diarias;
    float taxa3 = 3.00 * diarias;

    float Totalcliente;

    if(diarias < 15){
            Totalcliente = Total + taxa1;
        printf("Taxa de servico: %.2f\n\n ", taxa1 );
        printf("Valor geral: %.2f", Totalcliente);

    }else if(diarias == 15){
        Totalcliente = Total + taxa2;
        printf("Taxa de servico: %.2f\n\n ", taxa2 );
    printf("Valor geral: %.2f",Totalcliente);

    }else{
        Totalcliente = Total + taxa3;
        printf("Taxa de servico: %.2f\n\n ", taxa3 );
    printf("Valor geral: %.2f", Totalcliente);


    }

    printf("\n\n");

soma += Totalcliente;







}

printf("Total geral %.2f", soma);






















    return 0;
}




