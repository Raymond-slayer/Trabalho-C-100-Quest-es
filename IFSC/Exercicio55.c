#include <stdio.h>
#include <stdlib.h>


/*55. Calcule a m�dia aritm�tica das tr�s notas de um aluno e mostre, al�m do valor
da m�dia, uma mensagem de "Aprovado", caso a m�dia seja igual ou superior a
7; a mensagem �em prova final� caso a m�dia seja menor que 7 e maior ou igual
a 4; e "reprovado", caso contr�rio.*/

int main()
{

    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1 );
    printf("\n\n");

        printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2 );
    printf("\n\n");

        printf("Digite a terceira nota do aluno: ");
    scanf("%f", &nota3 );
    printf("\n\n");


    media = (nota1 + nota2+ nota3) / 3;

    printf("Media do aluno: %.1f", media);
    printf("\n\n");


    if(media >= 7){
        printf("Aprovado");
        printf("\n\n");

    }else if(media < 7 && media > 4){
    printf("Prova final");
    printf("\n\n");

    }else{
    printf("Reprovado");
    printf("\n\n");

    }

















    return 0;
}
