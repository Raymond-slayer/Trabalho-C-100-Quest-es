


#include <stdio.h>

int main() {
int Cod_aluno;


printf("Digite o c�digo do aluno de 100 a 104: ");
scanf("%d", &Cod_aluno);

if (Cod_aluno < 100 || Cod_aluno > 104) {
    printf("Op��o inv�lida! Aluno n�o existe.\n\n");
    return 1;  // Encerra o programa se o c�digo for inv�lido
}


printf("\n\n");

while(Cod_aluno >= 0){

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



  printf("\n\nDigite o c�digo do aluno (negativo para sair): ");
    scanf("%d", &Cod_aluno);
}










    return 0;
}
