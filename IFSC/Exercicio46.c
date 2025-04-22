#include <stdio.h>
#include <stdlib.h>

/*
46. Um hotel cobra R$ 60.00 a diária e mais uma taxa de serviços. A taxa de
serviços é de:
• R$ 5.50 por diária, se o número de diárias for maior que 15;
• R$ 6.00 por diária, se o número de diárias for igual a 15;
• R$ 8.00 por diária, se o número de diárias for menor que 15.
Construa um algoritmo que mostre o nome e o total da conta de um cliente.*/

int main()
{
    float valor = 60.00;
    int diarias;

    char msg[] = "Seja bem vindo";
    char nome [30];

    printf("Digite o nome do cliente: ");
    //fgets(nome,sizeof(nome), stdin);
    scanf("%30[^\n]", nome);
    printf("%s %s\n\n", msg, nome);


    printf("Valor da diaria: %.2f\n\n", valor );
    printf("Digite o numero de diarias: ");
    scanf("%d", &diarias);

    float Total = valor * diarias;

    printf("O valor total e de: %.2f\n\n", Total);
    float taxa1 = 5.50 * diarias;
    float taxa2 = 6.00 * diarias;
    float taxa3 = 8.00 * diarias;

    if(diarias > 15){
        printf("Taxa de servico: %.2f\n\n ", taxa1 );
        printf("Valor geral: %.2f ", Total + taxa1);
    }else if(diarias == 15){
        printf("Taxa de servico: %.2f\n\n ", taxa2 );
    printf("Valor geral: %.2f", Total + taxa2);
    }else{
        printf("Taxa de servico: %.2f\n\n ", taxa3 );
    printf("Valor geral: %.2f", Total + taxa3);
    }

























    return 0;
}
