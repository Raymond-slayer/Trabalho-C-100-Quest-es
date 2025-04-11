#include <stdio.h>
#include <stdlib.h>

int main()
{


int comprimento , largura, altura;



printf("Digite o comprimento: ");
scanf("%d", &comprimento);


printf("Digite o largura: ");
scanf("%d", &largura);

printf("Digite a altura: ");
scanf("%d", &altura);

int volume = comprimento * largura * altura;

printf("O volume da caixa e: %d * %d * %d = %d", comprimento, largura, altura, volume);


























    return 0;
}
