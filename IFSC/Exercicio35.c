


    /*35. Considere que o �ltimo concurso vestibular apresentou tr�s provas: Portugu�s,
Matem�tica e Conhecimentos Gerais. Considerando que para cada candidato
tem-se um registro contendo o seu nome e as notas obtidas em cada uma das
provas, construa um algoritmo que forne�a:
a) o nome e as notas em cada prova do candidato
b) a m�dia do candidato
c) uma informa��o dizendo se o candidato foi aprovado ou n�o. Considere que
um candidato � aprovado se sua m�dia for maior que 7.0 e se n�o apresentou
nenhuma nota abaixo de 5.0*/


#include <stdio.h>


int main(){


float notas[3];
char curso[3][50] = {"Portugues","Matem�tica","C_Gerais"};
int i = 0;
float soma;
float media;


printf("Aluno: Jose Raimundo\n\n");
soma = 0;
for(i = 0; i < 3; i++){

printf(" Digite a nota para %s: ",curso[i]);

scanf("%f", &notas[i]);

soma = soma + notas[i];
media = soma / 3;


}


printf("Total de notas %.2f ", soma);
printf(" \n\n");
printf("Media das notas %.2f", media);


printf(" \n\n");

if(media >= 7.0){
    printf("Aprovado");
}else if(media < 7.0  && media >= 5){
printf("Aluno em recuperacao");
}else if(media < 5.0 ){
printf("Aluno reprovado");
}

printf(" \n\n");

    return 0;
}
