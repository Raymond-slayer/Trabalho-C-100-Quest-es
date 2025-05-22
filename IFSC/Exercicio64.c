 #include <stdio.h>
#include <string.h>

int main() {
    char codigo[10]; // para armazenar c�digos como 'ABCD'
    int quantidade;
    float preco_unitario, total;

    // Entrada de dados
    printf("Digite o c�digo do produto (ex: ABCD): ");
    scanf("%s", codigo);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    // Verifica��o do c�digo
    if (strcmp(codigo, "ABCD") == 0) {
        preco_unitario = 5.30;
    } else if (strcmp(codigo, "XYPK") == 0) {
        preco_unitario = 6.00;
    } else if (strcmp(codigo, "KLMP") == 0) {
        preco_unitario = 3.20;
    } else if (strcmp(codigo, "QRST") == 0) {
        preco_unitario = 2.50;
    } else {
        printf("C�digo inv�lido.\n");
        return 1; // Encerra o programa
    }

    // C�lculo e sa�da
    total = preco_unitario * quantidade;
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
