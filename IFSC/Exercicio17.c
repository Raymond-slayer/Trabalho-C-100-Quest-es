#include <stdio.h>
#include <stdlib.h>






int main()
{

    float a, b, c, d;
    float soma, multiplicacao;



    printf("Digite o valor da letra A: ");
    scanf("%f", &a);
    printf("\n\n");

     printf("Digite o valor da letra B: ");
    scanf("%f", &b);
    printf("\n\n");

     printf("Digite o valor da letra C: ");
    scanf("%f", &c);
    printf("\n\n");

     printf("Digite o valor da letra D: ");
    scanf("%f", &d);
    printf("\n\n");


    printf("Resultados");
    printf("\n\n");

// A com B
    soma = a + b;
    multiplicacao = a * b;
    printf("A + B = %.2f | A * B", soma, multiplicacao);
    printf("\n\n");

    //A com C
     soma = a + c;
    multiplicacao = a * c;
    printf("A + C = %.2f | A * C", soma, multiplicacao);
    printf("\n\n");

    //A com D
     soma = a + d;
    multiplicacao = a * d;
    printf("A + D = %.2f | A * D", soma, multiplicacao);
    printf("\n\n");

    //B com C
     soma = b + c;
    multiplicacao = b * c;
    printf("B + C = %.2f | B * C", soma, multiplicacao);
    printf("\n\n");


    //B com D
     soma = b + d;
    multiplicacao = b * d;
    printf("B + D = %.2f | B * D", soma, multiplicacao);
    printf("\n\n");

     //C com D
     soma = c + d;
    multiplicacao = c * d;
    printf("C + D = %.2f | C * D", soma, multiplicacao);
    printf("\n\n");










    return 0;
}
