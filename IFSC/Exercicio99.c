#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
99. Faça um algoritmo que calcule a média de salários de uma empresa, pedindo ao
usuário a quantidade de funcionários, o nome e o salário de cada funcionário e
devolvendo a média, o salário mais alto e o salário mais baixo.*/

int main()
{

    setlocale(LC_ALL, "c");
    int Numero_funcionarios;
    char nome[3][20];
    float salario[3];
    float media;
    float soma = 0;
    float maior;
    float menor;


        printf("Digite o numero de funcionarios: " );
        scanf("%d", &Numero_funcionarios);
        printf("\n\n");
    for(int i = 0; i < 3; i++){

        printf("Digite o nome do funcionario %d:", i + 1);
        getchar();
        fgets(nome[i],sizeof(nome[i]), stdin);


        printf("Digite o salario: ");
        scanf("%f", &salario[i]);

        printf("\n\n");

        soma += salario[i];


    if (i == 0) {
        maior = salario[i];
        menor = salario[i];
    }
       else if(salario[i] > maior){
            maior = salario[i];

        }
         if (salario[i] < menor){

        menor = salario[i];

        }



        }

        printf("Soma salarial da empresa %.3f\n", soma);

    media = soma / 3;

    printf("\n\n");
    printf("Media salarial da empresa %.3f\n", media);
    printf("Maior salario: %.3f\n", maior);
    printf("Menor salario: %.3f\n", menor);


printf("\n\n");


















    return 0;
}
