#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "");

    float Chico = 1.50;
    float Cumprimento_cm = 0.02;
    float Cumprimento_total_chico = Cumprimento_cm * 8 ;
    float Cumprimento_total = Cumprimento_total_chico + Chico;

    float Ze = 1.10;
    float Cumprimento_cm2 = 0.03;
    float Cumprimento_total_Ze = 0.03 * 19;
    float Cumprimento_total2 = Cumprimento_total_Ze + Ze;




    printf("Altura de Chico é de %.2f_cm\n\n",Chico);
    printf("Chico terá o o cumprimento total de %.2f após 8 anos", Cumprimento_total);

    printf("\n\n");

    printf("Altura de Zé é de %.2f_cm\n",Ze);
    printf("Chico terá o o cumprimento total de %.2f após 19 anos", Cumprimento_total2);

    printf("\n\n");

    printf("Será necessário 19 anos para Ze ser maior que Chico");



















    return 0;
}
