#include <stdio.h>

/*79. Fa�a um algoritmo que leia a primeira letra do estado civil de uma pessoa e
mostre uma mensagem com a sua descri��o (Solteiro, Casado, Vi�vo,
Divorciado, Desquitado). Mostre uma mensagem de erro, se necess�rio.*/

int main() {
    char letra;

    printf("Digite a primeira letra do estado civil: ");
    scanf(" %c", &letra); // espa�o antes de %c para ignorar ENTER anterior

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
            printf("Vi�vo\n");
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
            printf("Estado civil inv�lido!\n");
    }

    return 0;
}
