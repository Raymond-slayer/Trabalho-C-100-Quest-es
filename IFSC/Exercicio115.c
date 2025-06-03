#include <stdio.h>

int main() {
    int N;
    float E = 1.0; // começa com 1
    int i, j;
    int fatorial;

    printf("Digite um número inteiro e positivo (N): ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        fatorial = 1;

        // Calcula i!
        for(j = 1; j <= i; j++) {
            fatorial *= j;
        }

        // Soma 1 / i!
        E += 1.0 / fatorial;
    }

    printf("\nValor de E com N = %d: %.6f\n", N, E);

    return 0;
}
