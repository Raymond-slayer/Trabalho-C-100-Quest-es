#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{



setlocale(LC_ALL, "pt_BR.UTF-8");



    char nome [50];
    char sobrenome [50];
    char nomeCompleto [100];


    printf("Digite o seu nome:");
    scanf("%s", nome );

    printf("Digite o seu sobrenome: ");
    scanf("%s", sobrenome );

 strcpy(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);




    printf("O seu nome completo e: %s\n", nomeCompleto);





    return 0;
}
