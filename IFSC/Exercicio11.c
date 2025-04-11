#include <stdio.h>
#include <stdlib.h>

int main()
{

    float HT;
    float VH;


    printf("Digite as horas trabalhadas no mes: ");
    scanf("%f", &HT);
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &VH);

    float PD = 15.0;
    float SB = HT * VH;
    float TD = PD/100 * SB;
    float SL = TD - SB;




    printf("Percentual de desconto 15% valor: \n");
    printf("Salario bruto: %.2f\n",SB);
    printf("Total do desconto: %.2f\n", TD);
    printf("Salario liquido %f\n", SL);
    printf("Valor Hora trabalhada: %.2f", HT); printf("\t Salario Bruto %.2f", SB); printf("\tValor do desconto %.2f", PD); printf("\tSalario liquido %.2f", SL);










































    return 0;
}
