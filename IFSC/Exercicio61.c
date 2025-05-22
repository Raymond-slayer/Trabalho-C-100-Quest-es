#include <stdio.h>
#include <locale.h>

int main() {





    float nota1, nota2, nota3, media;

    printf("Média aritimetica\n\n");

    // Entrada das notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\n\n");

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("\n\n");

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("\n\n");

    // Cálculo da média
    media = (nota1 + nota2 + nota3) / 3;

    // Exibição da média
    printf("A media do aluno é: %.2f\n", media);

    return 0;
}
