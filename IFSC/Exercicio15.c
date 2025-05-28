#include <stdio.h>
#include <stdlib.h>
/*15. Faça um algoritmo que calcule a quantidade de litros de combustível gasta em
uma viagem, utilizando um automóvel que faz 12Km por litro. Para obter o
cálculo, o usuário deve fornecer o tempo gasto na viagem e a velocidade média
durante ela. Desta forma, será possível obter a distância percorrida com a
fórmula DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da distância,
basta calcular a quantidade de litros de combustível utilizada na viagem com a
fórmula: LITROS_USADOS = DISTANCIA / 12. O programa deve apresentar os
valores da velocidade média, tempo gasto na viagem, a distância percorrida e a
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

    printf("A distância percorrida foi %.2f * %.2f = %.2fKm: ", tempo, velocidade, distancia);
printf("\n\n");

    float Litros_usados = distancia / 12;

    printf("Quantidade de litros consumida %.2fLts", Litros_usados);

    printf("\n\n");
    printf("\n\n");






















    return 0;
}
