#include <stdio.h>
#include <stdlib.h>

int main() {
    int codigo;
    float nota1, nota2, nota3, media;

    while (1) {
        printf("\nDigite o código do aluno (0 para sair): ");
        scanf("%d", &codigo);

        if (codigo == 0) {
            break; // Encerra o programa
        }

        printf("Digite as 3 notas do aluno:\n");
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        // Estrutura switch-case apenas para mostrar a média
        switch (1) {
            case 1:
                printf("Código do aluno: %d\n", codigo);
                printf("Média das notas: %.2f\n", media);
                break;
        }
    }

    printf("\nEncerrando o programa.\n");
    return 0;
}
