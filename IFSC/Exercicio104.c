#include <stdio.h>

int main() {
    int num1, num2;
    int resultado = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Multiplicação usando soma repetida
    for (int i = 0; i < num2; i++) {
        resultado += num1;
    }

    printf("\nResultado de %d x %d = %d\n", num1, num2, resultado);

    return 0;
}
