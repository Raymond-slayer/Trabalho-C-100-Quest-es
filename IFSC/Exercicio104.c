#include <stdio.h>

int main() {
    int num1, num2;
    int resultado = 0;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    // Multiplica��o usando soma repetida
    for (int i = 0; i < num2; i++) {
        resultado += num1;
    }

    printf("\nResultado de %d x %d = %d\n", num1, num2, resultado);

    return 0;
}
