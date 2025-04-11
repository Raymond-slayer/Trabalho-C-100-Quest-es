#include <stdio.h>
#include <stdlib.h>

int main()
{

    float salario = 5000.0;
    float D1 = 0.10;
    float D2 = 0.05;
    float resultado =  D1*salario;
    float resultado2 = D2 *salario;
    float liquido = (resultado + resultado2) - salario;



    printf("Salario bruto %.2f\n", salario);
    printf("Desconto previdencia social  %.2f\n", D1);
    printf("Demais desconto %.2f\n", D2);
    printf("Salario liquido %.2f\n\n\n\n", liquido);

























    return 0;
}
