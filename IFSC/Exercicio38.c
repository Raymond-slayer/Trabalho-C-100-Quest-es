#include <stdio.h>

int main() {
    float A, B, C, soma;

    // Entrada de dados
    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    printf("Digite o valor de C: ");
    scanf("%f", &C);

    // Processamento
    soma = A + B;

    // Condicional para comparação
    if(soma > C) {
        printf("A soma de A e B (%.2f) é MAIOR que C (%.2f).\n", soma, C);
    }
    else if(soma < C) {
        printf("A soma de A e B (%.2f) é MENOR que C (%.2f).\n", soma, C);
    }
    else {
        printf("A soma de A e B (%.2f) é IGUAL a C (%.2f).\n", soma, C);
    }

    return 0;
}

