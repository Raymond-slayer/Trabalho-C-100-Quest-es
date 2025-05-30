#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
86. Crie um algoritmo chamado Estacoes. Este algoritmo deve ler uma data e
armazenar na variável mes um número entre 1 e 12, correspondendo a um dos
meses do ano. No final, você deve imprimir uma mensagem conforme o exemplo:
"A estação do ano correspondente ao mês 3 é Verão"*/


int main()
{
    setlocale(LC_ALL, "");

    int data;
    printf("Digite a data no formato DDMMAAAA: ");
    scanf("%d", &data);




int ano = data % 10000;
int resto = data / 10000;



int mes = resto % 100;
int dia = resto / 100;


printf("\nDia %d/%d/%d\n", dia, mes, ano);



printf("\n\n");


    if((mes == 1 || mes == 2 || mes == 3)){
        printf("Estação Verão");

        }else if((mes == 4 || mes == 5 || mes == 6)){
        printf("Estação Outono");

        }else if((mes == 7 || mes == 8 || mes == 9)){
        printf("Estação Inverno");

        }else if((mes == 10 || mes == 11 || mes == 12)){
        printf("Estação primavera");

        }
        printf("\n\n");





















    return 0;
}
