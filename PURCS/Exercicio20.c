#include <stdio.h>

int main() {
    int numero;
    int somaNegativos = 0;

    printf("Digite um n�mero inteiro (0 para encerrar): ");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero < 0) {
            somaNegativos += numero;
        }

        printf("Digite outro n�mero (0 para encerrar): ");
        scanf("%d", &numero);
    }

    printf("\nSoma dos n�meros negativos: %d\n", somaNegativos);

    return 0;
}
