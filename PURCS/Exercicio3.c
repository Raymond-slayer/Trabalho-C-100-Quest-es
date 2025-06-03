#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "");


    char nomeHabitante[10][20];
    float  salario[10];
    int Nfilhos[10];
    int i;

    float somaSalario = 0;
    int somafilhos = 0;
    float maiorSalario = 0;
    int contadorSalarioate100 = 0;


    printf("Senso da cidade\n\n");


    while(i < 10){
        printf("Digite o nome do habitante %d: ",i +1 );
        scanf("%s",nomeHabitante[i] );

        printf("digite o salario de %s: ", nomeHabitante[i]);
        scanf("%f", &salario[i]);


        printf("Digite o numero de filhos de %s: ", nomeHabitante[i]);
            scanf("%d", &Nfilhos[i]);



        somaSalario += salario[i];
        somafilhos += Nfilhos[i];

        if(salario[i] > maiorSalario){
            maiorSalario = salario[i];
        }


        if(salario[i] <= 100){

            contadorSalarioate100++;
        }


            i++;



    }



        float mediaSalario = somaSalario / 10;
        float mediaFilhos = somafilhos /10;
        float percentualSalariobaixo = (float)contadorSalarioate100 * 100.00 / 10;

        printf("\nRESULTADOS DA PESQUISA:\n");
printf("Média salarial: R$ %.2f\n", mediaSalario);
printf("Média de filhos: %.2f\n", mediaFilhos);
printf("Maior salário informado: R$ %.2f\n", maiorSalario);
printf("Percentual de pessoas com salário até R$100,00: %.2f%%\n", percentualSalariobaixo);
























    return 0;
}
