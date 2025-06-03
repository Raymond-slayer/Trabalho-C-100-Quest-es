#include <stdio.h>

int main() {
    int numero;
    int somaNegativos = 0;

    printf("Digite um número inteiro (0 para encerrar): ");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero < 0) {
            somaNegativos += numero;
        }

        printf("Digite outro número (0 para encerrar): ");
        scanf("%d", &numero);
    }

    printf("\nSoma dos números negativos: %d\n", somaNegativos);

    return 0;
}
