#include <stdio.h>

int main() {
    int anos, meses, dias, totalDias;

    printf("Digite sua idade (anos): ");
    scanf("%d", &anos);

    printf("Digite os meses al�m dos anos: ");
    scanf("%d", &meses);

    printf("Digite os dias al�m dos meses: ");
    scanf("%d", &dias);

    totalDias = (anos * 365) + (meses * 30) + dias;

    printf("\nVoc� j� viveu aproximadamente %d dias.\n", totalDias);

    return 0;
}
