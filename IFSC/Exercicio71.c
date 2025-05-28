#include <stdio.h>
#include <stdlib.h>

//71. Crie um algoritmo que peça o nome, a altura e o peso de duas pessoas e apresente o nome da mais pesada e o nome da mais alta.

int main()
{


    char nome[20];
    int peso;
    float altura;



    printf("Digite o nome: ");
    scanf(" %[^\n]", nome);
    //fgets(nome, sizeof(nome), stdin);
    printf("\n\n");

    printf("Digite a altura e peso ");
    scanf("%f%d", &altura, &peso);


printf("\n\n");

printf("Nome informado: %s\n", nome);
printf("Altura informada: %.2f\n", altura);
printf("Peso informado: %d\n", peso);

printf("\n\n");


  char nome2[20];
    int peso2;
    float altura2;



    printf("Digite o nome: ");
    scanf(" %[^\n]", nome2);
    //fgets(nome, sizeof(nome), stdin);
    printf("\n\n");

    printf("Digite a altura e peso ");
    scanf("%f%d", &altura2, &peso2);

printf("\n\n");

 printf("\n--- Resultados ---\n");
    if (peso > peso2)
        printf("%s é mais pesado(a).\n", nome);
    else if (peso2 > peso)
        printf("%s é mais pesado(a).\n", nome2);
    else
        printf("Ambos têm o mesmo peso.\n");

    if (altura > altura2)
        printf("%s é mais alto(a).\n", nome);
    else if (altura2 > altura)
        printf("%s é mais alto(a).\n", nome2);
    else
        printf("Ambos têm a mesma altura.\n");












    return 0;
}
