#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
58. Escreva um algoritmo que leia o c�digo de um aluno e suas tr�s notas. Calcule a
m�dia ponderada do aluno, considerando que o peso para a maior nota seja 4 e
para as duas restantes, 3. Mostre o c�digo do aluno, suas tr�s notas, a m�dia
calculada e uma mensagem: "APROVADO" se a m�dia for maior ou igual a 5 e
"REPROVADO" se a m�dia for menor que 5.
*/
#include <stdio.h>

int main() {
int Cod_aluno;


printf("Digite o c�digo do aluno de 100 a 104: ");
scanf("%d", &Cod_aluno);
printf("\n\n");

switch(Cod_aluno){
    case 100:
        printf("Jos� Raimundo");
        break;

    case 101:
        printf("Jos� Antonio");
        break;

    case 102:
        printf("Jos� Carlos");
        break;

    case 103:
        printf("Jos� Rodrigo");
        break;

    case 104:
        printf("Jos� Alfredo");
        break;
default:
printf("Op��o inv�lida aluno n�o existe");

}
printf("\n\n");

float nota1;
float nota2;
float nota3;
int peso4 = 4;
int peso3 = 3;


printf("Digite a primeira nota do aluno:");
scanf("%f", &nota1);
printf("Digite a segunda nota do aluno:");
scanf("%f", &nota2);
printf("Digite a terceira nota do aluno:");
scanf("%f", &nota3);

printf("\n\n");



printf("primeira nota do aluno :%.2f\n", nota1 * 4   );

printf("segunda nota do aluno :%.2f\n", nota2 * 3  );

printf("terceira nota do aluno :%.2f\n",nota3 * 3  );

printf("\n\n");

float soma  = (nota1 * peso4) + (nota2 * peso3) + (nota3 * peso3);

printf("%.2f � a soma das notas", soma);
printf("\n\n");

int pesos = peso4 + peso3 + peso3;

printf("Soma dos pesos %d", pesos);


float media = soma / pesos;

printf("\n\n");


printf("Media ponderada � de: %.2f", media);
printf("\n\n");


if(media >= 5){
    printf("Aluno aprovado");

}else{
    printf("Aluno reprovado");

}













    return 0;
}
    return 0;
}
