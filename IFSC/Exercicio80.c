#include <stdio.h>

int main() {
    int numero;

    printf("Digite um n�mero de 1 a 7: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Ter�a-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("S�bado\n");
            break;
        default:
            printf("N�mero inv�lido! N�o corresponde a um dia da semana.\n");
    }

    return 0;
}
