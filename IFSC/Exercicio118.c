#include <stdio.h>

int main() {
    float alturaChico = 1.50;
    float alturaZe = 1.10;
    int anos = 0;

    while (alturaZe <= alturaChico) {
        alturaChico += 0.02;
        alturaZe += 0.03;
        anos++;
    }

    printf("Ser�o necess�rios %d anos para que Z� seja mais alto que Chico.\n", anos);

    return 0;
}
