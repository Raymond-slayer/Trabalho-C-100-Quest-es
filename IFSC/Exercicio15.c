#include <stdio.h>
#include <stdlib.h>
/*15. Fa�a um algoritmo que calcule a quantidade de litros de combust�vel gasta em
uma viagem, utilizando um autom�vel que faz 12Km por litro. Para obter o
c�lculo, o usu�rio deve fornecer o tempo gasto na viagem e a velocidade m�dia
durante ela. Desta forma, ser� poss�vel obter a dist�ncia percorrida com a
f�rmula DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da dist�ncia,
basta calcular a quantidade de litros de combust�vel utilizada na viagem com a
f�rmula: LITROS_USADOS = DISTANCIA / 12. O programa deve apresentar os
valores da velocidade m�dia, tempo gasto na viagem, a dist�ncia percorrida e a
quantidade de litros utilizada na viagem.*/







int main()
{

    float tempo;
    float velocidade;

    printf("Digite o tempo da viagem: ");
    scanf("%f", &tempo);
    printf("\n\n");
    printf("Digite a velocidade media: ");
    scanf("%f", &velocidade);

    printf("\n\n");

    printf("Tempo da viagem %.2fHs\n", tempo);
    printf("Velocidade media %.2fV", velocidade);



    float distancia = tempo * velocidade;
    printf("\n\n");

    printf("A dist�ncia percorrida foi %.2f * %.2f = %.2fKm: ", tempo, velocidade, distancia);
printf("\n\n");

    float Litros_usados = distancia / 12;

    printf("Quantidade de litros consumida %.2fLts", Litros_usados);

    printf("\n\n");
    printf("\n\n");






















    return 0;
}
