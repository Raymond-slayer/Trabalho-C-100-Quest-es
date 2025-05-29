#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
83. Crie um algoritmo para uma calculadora utilizando a instrução escolha-caso para
determinar a operação que deve ser executada, conforme o usuário escolher no
menu de opções. Conforme a opção escolhida pelo usuário, uma operação
diferente da calculadora deve ser executada.*/

int main()
{

    setlocale(LC_ALL, "");

    int a, b;
    float soma, sub, mult, div, mod;
        int calculadora;


        printf("Digite o codigo da operação: ");
        scanf("%d", &calculadora);


        switch(calculadora){

    case 1:
        printf("\n\n");
        printf("............Adição............");
        printf("\n\n");
        printf("Digite o primeiro  valor: ");

        scanf("%d", &a);
        printf("\n\n");
        printf("Digite um segundo valor: ");
        scanf("%d", &b);
        printf("\n\n");
        float resultado = a + b;
        printf("Valor total %.2f: ", resultado);
        printf("\n\n");
        break;

         case 2:
        printf("\n\n");
        printf("............Subtração............");
        printf("\n\n");
        printf("Digite o primeiro  valor: ");

        scanf("%d", &a);
        printf("\n\n");
        printf("Digite um segundo valor: ");
        scanf("%d", &b);
        printf("\n\n");
        float resultado2 = a - b;
        printf("Valor total %.2f: ", resultado2);
        printf("\n\n");
        break;


         case 3:
        printf("\n\n");
        printf("............Multiplicação............");
        printf("\n\n");
        printf("Digite o primeiro  valor: ");

        scanf("%d", &a);
        printf("\n\n");
        printf("Digite um segundo valor: ");
        scanf("%d", &b);
        printf("\n\n");
        float resultado3 = a * b;
        printf("Valor total %.2f: ", resultado3);
        printf("\n\n");
        break;

         case 4:
        printf("\n\n");
        printf("............Divisão............");
        printf("\n\n");
        printf("Digite o primeiro  valor: ");

        scanf("%d", &a);
        printf("\n\n");
        printf("Digite um segundo valor: ");
        scanf("%d", &b);
        printf("\n\n");
        float resultado4 = a / b;
        printf("Valor total %.2f: ", resultado4);
        printf("\n\n");
        break;

             case 5:
        printf("\n\n");
        printf("............Módulo............");
        printf("\n\n");
        printf("Digite o primeiro  valor: ");

        scanf("%d", &a);
        printf("\n\n");
        printf("Digite um segundo valor: ");
        scanf("%d", &b);
        printf("\n\n");
        float resultado5 = a % b;
        printf("Valor total %.2f: ", resultado5);
        printf("\n\n");
        break;

        default:
        printf("Número indevido");
        printf("\n\n");









        }










    return 0;
}
