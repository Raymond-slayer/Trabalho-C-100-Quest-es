#include <stdio.h>

int main() {
    int anos, meses, dias, totalDias;

    printf("Digite sua idade (anos): ");
    scanf("%d", &anos);

    printf("Digite os meses além dos anos: ");
    scanf("%d", &meses);

    printf("Digite os dias além dos meses: ");
    scanf("%d", &dias);

    totalDias = (anos * 365) + (meses * 30) + dias;

    printf("\nVocê já viveu aproximadamente %d dias.\n", totalDias);

    return 0;
}
