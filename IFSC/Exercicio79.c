#include <stdio.h>

/*79. Faça um algoritmo que leia a primeira letra do estado civil de uma pessoa e
mostre uma mensagem com a sua descrição (Solteiro, Casado, Viúvo,
Divorciado, Desquitado). Mostre uma mensagem de erro, se necessário.*/

int main() {
    char letra;

    printf("Digite a primeira letra do estado civil: ");
    scanf(" %c", &letra); // espaço antes de %c para ignorar ENTER anterior

    switch (letra) {
        case 'S':
        case 's':
            printf("Solteiro\n");
            break;

        case 'C':
        case 'c':
            printf("Casado\n");
            break;

        case 'V':
        case 'v':
            printf("Viúvo\n");
            break;

        case 'D':
        case 'd':
            printf("Divorciado\n");
            break;

        case 'Q':
        case 'q':
            printf("Desquitado\n");
            break;

        default:
            printf("Estado civil inválido!\n");
    }

    return 0;
}
