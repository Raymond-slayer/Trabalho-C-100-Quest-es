#include <stdio.h>
#include <stdlib.h>


/*29. Admitindo que uma data � lida pelo algoritmo em uma vari�vel inteira, e n�o em
uma vari�vel do tipo data, crie um algoritmo que leia uma data no formato
DDMMAA e imprima essa data no formato AAMMDD, onde:
� A letra D corresponde a dois algarismos representando o dia;
� A letra M corresponde a dois algarismos representando o m�s;
� A letra A corresponde aos dois �ltimos algarismos representando o ano.
*/

int main()
{


    char data [7];
    int dia,mes, ano;


    printf("Digite a data no formato aammdd:  ");
    scanf("%6s", data);




    sscanf(data, "%2d%2d%2d", &ano, &mes, &dia);

    printf("Ano: %02d\n", ano);
    printf("Mes: %02d\n", mes);
    printf("Dia: %02d\n", dia );























    return 0;
}
