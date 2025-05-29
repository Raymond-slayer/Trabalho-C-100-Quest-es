#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
84. Crie um algoritmo que execute as funcionalidades da conta-corrente de uma
pessoa. Toda a conta tem um número, uma pessoa vinculada e um saldo. O saldo é atualizado conforme o tipo de movimentação bancária: depósito ou
retirada. Se for um depósito, o dinheiro é creditado ao saldo; se for retirada, o
dinheiro é debitado do saldo.*/



int main()
{
    setlocale(LC_ALL, "");
    int C_corrente;
    float saldo = 1000.00;


    printf("Digite o numero da C. corrente de 100 a 105: ");
    scanf("%d", &C_corrente);
    printf("\n\n");

    switch(C_corrente){

        case 100:
            printf("Valor da C.corrente: %.2f\n", saldo);

            int sacarDepositar;

            printf("Escolha as opções: Sacar (10) ou Depositar (20): ");
            scanf("%d", &sacarDepositar);

            switch(sacarDepositar){
        case 10:
            printf("Sacar\n");
               float sacar;
        printf("Informe o valor do saque: ");
        scanf("%f", &sacar);
        float saldoC_corrente10 =  saldo - sacar;
        printf("Saldo atual em conta %.2f\n", saldoC_corrente10);
            break;
             case 20:
            printf("Depositar\n");
              float depositar;
        printf("Informe o valor do deposito: ");
        scanf("%f", &depositar);
        float saldoC_corrente20 = depositar + saldo;
        printf("Saldo atual em conta %.2f\n", saldoC_corrente20);
            break;
            }
            break;

  case 101:
            printf("Valor da C.corrente: %.2f\n", saldo);

            int sacarDepositar2;

            printf("Escolha as opções: Sacar (10) ou Depositar (20): ");
            scanf("%d", &sacarDepositar2);

            switch(sacarDepositar2){
        case 10:
            printf("Sacar\n");
               float sacar;
        printf("Informe o valor do saque: ");
        scanf("%f", &sacar);
        float saldoC_corrente10 =  saldo - sacar;
        printf("Saldo atual em conta %.2f\n", saldoC_corrente10);
            break;
             case 20:
            printf("Depositar\n");
              float depositar;
        printf("Informe o valor do deposito: ");
        scanf("%f", &depositar);
        float saldoC_corrente20 = depositar + saldo;
        printf("Saldo atual em conta %.2f\n", saldoC_corrente20);
            break;
            }
            break;

 case 102:
            printf("Valor da C.corrente: %.2f\n", saldo);

            int sacarDepositar3;

            printf("Escolha as opções: Sacar (10) ou Depositar (20): ");
            scanf("%d", &sacarDepositar3);

            switch(sacarDepositar3){
        case 10:
            printf("Sacar\n");
               float sacar;
        printf("Informe o valor do saque: ");
        scanf("%f", &sacar);
        float saldoC_corrente10 =  saldo - sacar;
        printf("Saldo atual em conta %.2f\n", saldoC_corrente10);
            break;
             case 20:
            printf("Depositar\n");
              float depositar;
        printf("Informe o valor do deposito: ");
        scanf("%f", &depositar);
        float saldoC_corrente20 = depositar + saldo;
        printf("Saldo atual em conta %.2f\n", saldoC_corrente20);
            break;
            }



            break;

            case 103:
            printf("Valor da C.corrente: %.2f\n", saldo);

            int sacarDepositar4;

            printf("Escolha as opções: Sacar (10) ou Depositar (20): ");
            scanf("%d", &sacarDepositar4);

            switch(sacarDepositar4){
        case 10:
            printf("Sacar\n");
               float sacar;
        printf("Informe o valor do saque: ");
        scanf("%f", &sacar);
        float saldoC_corrente10 =  saldo - sacar;
        printf("Saldo atual em conta %.2f\n", saldoC_corrente10);
            break;
             case 20:
            printf("Depositar\n");
              float depositar;
        printf("Informe o valor do deposito: ");
        scanf("%f", &depositar);
        float saldoC_corrente20 = depositar + saldo;
        printf("Saldo atual em conta %.2f\n", saldoC_corrente20);
            break;
            }



            break;

                case 104:
            printf("Valor da C.corrente: %.2f\n", saldo);

            int sacarDepositar5;

            printf("Escolha as opções: Sacar (10) ou Depositar (20): ");
            scanf("%d", &sacarDepositar5);

            switch(sacarDepositar5){
        case 10:
            printf("Sacar\n");
               float sacar;
        printf("Informe o valor do saque: ");
        scanf("%f", &sacar);
        float saldoC_corrente10 =  saldo - sacar;
        printf("Saldo atual em conta %.2f\n", saldoC_corrente10);
            break;
             case 20:
            printf("Depositar\n");
              float depositar;
        printf("Informe o valor do deposito: ");
        scanf("%f", &depositar);
        float saldoC_corrente20 = depositar + saldo;
        printf("Saldo atual em conta %.2f\n", saldoC_corrente20);
        printf("\n\n");
            break;
            }

            break;

                  case 105:
            printf("Valor da C.corrente: %.2f\n", saldo);

            int sacarDepositar6;

            printf("Escolha as opções: Sacar (10) ou Depositar (20): ");
            scanf("%d", &sacarDepositar6);

            switch(sacarDepositar6){
        case 10:
            printf("Sacar\n");
               float sacar;
        printf("Informe o valor do saque: ");
        scanf("%f", &sacar);
        float saldoC_corrente10 =  saldo - sacar;
        printf("Saldo atual em conta %.2f\n", saldoC_corrente10);
            break;
             case 20:
            printf("Depositar\n");
              float depositar;
        printf("Informe o valor do deposito: ");
        scanf("%f", &depositar);
        float saldoC_corrente20 = depositar + saldo;
        printf("Saldo atual em conta %.2f\n", saldoC_corrente20);
        printf("\n\n");
            break;
            }

            break;

             default:
                printf("Conta corrente inválida!! Tente novamente!!");
                printf("\n\n");



    }



















    return 0;
}
