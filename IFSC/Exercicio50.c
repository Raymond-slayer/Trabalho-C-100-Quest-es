#include <stdio.h>
#include <string.h>

int main() {

char nome[50];
int notas;






printf("Digite o nome do aluno (a) : ");
fgets(nome, sizeof(nome), stdin);
printf ("\n\n");
printf("Digite a nota do aluno (a):  ");
scanf("%d", &notas);

printf("A nota do aluno: %d\n\n", notas);







if(notas <= 49 ){
printf("Nota considerada Insuficiente");
}else if(notas <= 64){
printf("Nota considerada Regular");
}else if(notas <= 84){
printf("Nota considerado Bom");
}else if(notas <= 100 ){
printf(" Nota considerado Otimo");

}


return 0;
}
