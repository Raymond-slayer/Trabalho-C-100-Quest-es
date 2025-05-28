#include <stdio.h>
#include <stdlib.h>

/*
72. Um determinado clube de futebol pretende classificar seus atletas em categorias
e para isto ele contratou um programador para criar um programa que
executasse esta tarefa. Para isso o clube criou uma tabela que continha*/

int main()
{
    int idade;
    char nome[20];

    printf(".....................Mirim futebol clube.........................");

    printf("\n\n");

    printf("Digite o nome do atleta: ");
    fgets(nome,sizeof(nome), stdin );
    printf("Digite a idade do atleta: ");
    scanf("%d", &idade);

    printf("\n\n");

    switch(idade){
    case 5: case 6: case 7:
        case 8: case 9: case 10:
    printf("Categoria Infantil");
    break;
     case 11: case 12: case 13:
        case 14: case 15:
            printf("Categoria Juvenil");
            break;
            case 16: case 17: case 18:
        case 19: case 20:
            printf("Categoria Junior");
            break;
                 case 21: case 22: case 23:
        case 24: case 25:
            break;

        default:
            printf("Fora de categoria");
printf("\n\n");



    }




















    return 0;
}
