#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
41. A revendedora de carros Pica-Pau Ltda. paga aos seus funcionários vendedores
dois salários mínimos fixos, mais uma comissão fixa de R$ 50,00 por carro
vendido e mais 5% do valor das vendas. Faça um algoritmo que determine o
salário total de um vendedor.*/




int main()
{
    setlocale(LC_ALL, "");


    float salariobase = 2036.00;

    float fusca = 70.000;
    float uno = 80.000;
    float monza = 90.000;
    float comfixa = 50.00;
    int numero_de_vendas;


    printf(".....................Revendendora de carros  PICAPAU.........................");
    printf("\n\n");

    printf("Digite o numero de veículo vendidos: ");
    scanf("%d", &numero_de_vendas);























    return 0;
}
