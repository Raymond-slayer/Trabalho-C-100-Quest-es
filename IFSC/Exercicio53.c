#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &a);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &b);

    printf("Digite o terceiro n�mero: ");
    scanf("%d", &c);

    printf("\nN�meros em ordem decrescente:\n");

    if (a >= b && a >= c) {
        if (b >= c)
            printf("%d, %d, %d\n", a, b, c);
        else
            printf("%d, %d, %d\n", a, c, b);
    } else if (b >= a && b >= c) {
        if (a >= c)
            printf("%d, %d, %d\n", b, a, c);
        else
            printf("%d, %d, %d\n", b, c, a);
    } else {
        if (a >= b)
            printf("%d, %d, %d\n", c, a, b);
        else
            printf("%d, %d, %d\n", c, b, a);
    }

    return 0;
}
