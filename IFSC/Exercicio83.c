#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
83. Crie um algoritmo para uma calculadora utilizando a instru��o escolha-caso para
determinar a opera��o que deve ser executada, conforme o usu�rio escolher no
menu de op��es. Conforme a op��o escolhida pelo usu�rio, uma opera��o
diferente da calculadora deve ser executada.*/

int main()
{

    setlocale(LC_ALL, "");

    int a, b;
    float soma, sub, mult, div, mod;
        int calculadora;


        printf("Digite o codigo da opera��o: ");
        scanf("%d", &calculadora);


        switch(calculadora){

    case 1:
        printf("\n\n");
        printf("............Adi��o............");
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
        printf("............Subtra��o............");
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
        printf("............Multiplica��o............");
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
        printf("............Divis�o............");
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
        printf("............M�dulo............");
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
        printf("N�mero indevido");
        printf("\n\n");









        }










    return 0;
}
