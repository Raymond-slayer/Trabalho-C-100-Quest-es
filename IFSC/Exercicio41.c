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




     float fusca = 70000.00;
    float uno = 80000.00;
    float monza = 90000.00;
    float comfixa = 50.00;
    int numero_de_vendas;


    printf(".....................Revendendora de carros  PICAPAU.........................");
    printf("\n\n");


    int venda;

    printf("Lista de veículos com respectivos valores: ");
    printf("\n\n");
    printf("Fusca cod (1) -70.000\nUno   cod (2) - 80.000\nMonza cod (3) - 90.000");
    printf("\n\n");

    printf("Digite o cod do veiculo para venda: ");
    scanf("%d", &venda);
    printf("\n\n");



    switch(venda){






    case 1:



    printf("fusca\n\n\n");
    printf("Digite a quantidade de veículos: ");
    scanf("%d", &numero_de_vendas);
    float venda1 = numero_de_vendas * fusca;
    printf("Total da venda %.2f\n", venda1);
    float comissao_da_venda = venda1 * 0.05;
    printf("Comissão da venda é de: %.2f\n", comissao_da_venda);
    float salariobase = 2036.00;
    float comissao_extra = numero_de_vendas * comfixa;
    printf("Valor da comissão fixa %.2f\n",comissao_extra );
    float salario_total = comissao_da_venda + comissao_extra + salariobase;
    printf("Salario total do vendedor %.2f + %.2f + %.2f = %.2f",comissao_da_venda, comissao_extra, salariobase, salario_total );
    break;




    case 2:
    printf("Uno\n\n\n");
     printf("Digite a quantidade de veículos: ");
    scanf("%d", &numero_de_vendas);
    float venda2 = numero_de_vendas * uno;
    printf("Total da venda %.2f\n", venda2);
    float comissao_da_venda2 = venda2 * 0.05;
    printf("Comissão da venda é de: %.2f\n", comissao_da_venda2);
    float salariobase2 = 2036.00;
    float comissao_extra2 = numero_de_vendas * comfixa;
    printf("Valor da comissão fixa %.2f\n",comissao_extra2 );
    float salario_total2 = comissao_da_venda2 + comissao_extra2 + salariobase2;
    printf("Salario total do vendedor %.2f + %.2f + %.2f = %.2f",comissao_da_venda2, comissao_extra2, salariobase2, salario_total2 );

    break;

    case 3:
    printf("Monza\n\n");
        printf("Digite a quantidade de veículos: ");
    scanf("%d", &numero_de_vendas);
    float venda3 = numero_de_vendas * monza;
    printf("Total da venda %.2f\n", venda3);
    float comissao_da_venda3 = venda3 * 0.05;
    printf("Comissão da venda é de: %.2f\n", comissao_da_venda3);
    float salariobase3 = 2036.00;
    float comissao_extra3 = numero_de_vendas * comfixa;
    printf("Valor da comissão fixa %.2f\n",comissao_extra3 );
    float salario_total3 = comissao_da_venda3 + comissao_extra3 + salariobase3;
    printf("Salario total do vendedor %.2f + %.2f + %.2f = %.2f",comissao_da_venda3, comissao_extra3, salariobase3, salario_total3 );
    break;


    }


printf("\n\n");

















    return 0;
}
