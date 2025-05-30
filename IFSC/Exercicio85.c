#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/*85. Faça um algoritmo para o jogo “pedra-papel-tesoura”. O jogo deve imprimir
vitória, empate ou derrota conforme a opção que o jogador escolher e a opção
que for sorteada aleatoriamente pelo computador. Obs.: pedra ganha de tesoura;
que ganha de papel; que ganha de pedra.*/


int main(){

    int pedra = 0, papel = 1, tesoura = 2;
    int jogador, computador;
    srand(time(NULL));


    setlocale(LC_ALL, "");


   computador = rand() % 3;




printf("Digite uma das opções\n\n\n (0)pedra\n (2)papel\n (3) tesoura\n\n");
scanf("%d",&jogador);

printf("Você escolheu: %d\n", jogador);
printf("O computador escolheu %d\n", computador);


    if (jogador == computador) {
        printf("Empate!\n");
    } else if ((jogador == 0 && computador == 2) ||
               (jogador == 1 && computador == 0) ||
               (jogador == 2 && computador == 1)) {
        printf("Você venceu!\n");
    } else {
        printf("Você perdeu!\n");
    }
























    return 0;
}
