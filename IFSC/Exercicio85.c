#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/*85. Fa�a um algoritmo para o jogo �pedra-papel-tesoura�. O jogo deve imprimir
vit�ria, empate ou derrota conforme a op��o que o jogador escolher e a op��o
que for sorteada aleatoriamente pelo computador. Obs.: pedra ganha de tesoura;
que ganha de papel; que ganha de pedra.*/


int main(){

    int pedra = 0, papel = 1, tesoura = 2;
    int jogador, computador;
    srand(time(NULL));


    setlocale(LC_ALL, "");


   computador = rand() % 3;




printf("Digite uma das op��es\n\n\n (0)pedra\n (2)papel\n (3) tesoura\n\n");
scanf("%d",&jogador);

printf("Voc� escolheu: %d\n", jogador);
printf("O computador escolheu %d\n", computador);


    if (jogador == computador) {
        printf("Empate!\n");
    } else if ((jogador == 0 && computador == 2) ||
               (jogador == 1 && computador == 0) ||
               (jogador == 2 && computador == 1)) {
        printf("Voc� venceu!\n");
    } else {
        printf("Voc� perdeu!\n");
    }
























    return 0;
}
