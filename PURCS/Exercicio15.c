
#include <stdio.h>

//Exercicio15

int main() {
    int numero;
    int faixa1 = 0; // [0 - 25]
    int faixa2 = 0; // [26 - 50]
    int faixa3 = 0; // [51 - 75]
    int faixa4 = 0; // [76 - 100]

    printf("Digite um número (negativo para sair): ");
    scanf("%d", &numero);

    while (numero >= 0) {
        if (numero >= 0 && numero <= 25) {
            faixa1++;
        } else if (numero >= 26 && numero <= 50) {
            faixa2++;
        } else if (numero >= 51 && numero <= 75) {
            faixa3++;
        } else if (numero >= 76 && numero <= 100) {
            faixa4++;
        }

        printf("Digite outro número (negativo para sair): ");
        scanf("%d", &numero);
    }

    printf("\nQuantidade nos intervalos:\n");
    printf("[ 0 - 25 ]: %d\n", faixa1);
    printf("[26 - 50 ]: %d\n", faixa2);
    printf("[51 - 75 ]: %d\n", faixa3);
    printf("[76 - 100]: %d\n", faixa4);

    return 0;
}
