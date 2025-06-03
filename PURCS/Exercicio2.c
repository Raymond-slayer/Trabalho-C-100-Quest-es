#include <stdio.h>

int main() {
    int N, i, j;
    float E = 1.0;
    int fatorial;

    printf("Digite um valor inteiro positivo para N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("N deve ser positivo!\n");
        return 1;
    }

    for(i = 1; i <= N; i++) {
        fatorial = 1;
        for(j = 1; j <= i; j++) {
            fatorial *= j;
        }
        E += 1.0 / fatorial;
    }

    printf("O valor de E = %.6f\n", E);

    return 0;
}
