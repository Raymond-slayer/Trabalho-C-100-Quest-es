#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*5. Construir um algoritmo que calcule a média aritmética de vários valores inteiros
positivos, lidos externamente. O final da leitura acontecerá quando for lido um valor
negativo.*/

int main()
{

    setlocale(LC_ALL, "");

    int numero;
    int i = 0;
    float soma = 0;
    float media;


    printf("Digite numero: ");
    scanf("%d", &numero);

    while(numero >= 0){

        soma = soma + numero;


        i++;
          printf("Digite outro número: ");
    scanf("%d", &numero);

    }
            if (i > 0) {
    media = soma / i;

    printf("Média dos valores: %.2f\n", media);

} else {
    printf("Nenhum numero positivo foi digitado");
}







































    return 0;
}
