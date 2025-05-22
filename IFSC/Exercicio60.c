#include <stdio.h>

/*60. O cardápio de uma lanchonete é o seguinte:
Especificação Preço unitário
100 Cachorro quente 1,10
101 Bauru simples 1,30
102 Bauru c/ovo 1,50
103 Hamburger 1,10
104 Cheeseburger 1,30
105 Refrigerante 1,00
Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule
o valor a ser pago por aquele lanche. Considere que a cada execução somente
será calculado um item.*/

int main() {
    int Cod;
     int total;
    float valor_final;
    float cachorro_quente = 1.10;
    float Bauru_simple = 1.30;
    float Bauru_com_ovo = 1.50;
    float Hamburger = 1.10;
    float Cheeseburger = 1.30;
    float Refrigerante = 1.00;

    printf("Digite um numero de 100 a 105: ");
    printf("\n\n");
    scanf("%d", &Cod);

    switch (Cod) {
        case 100:
            printf("Cachorro quente\n");

printf("Digite total de Cachorro quente: ");
scanf("%d", &total);
printf("\n\n");

printf("Total de cachorro quente %d: ", total);

printf("\n\n");

valor_final = cachorro_quente * total;

printf("\n\n");
printf("Valor final %.2f: ", valor_final);
            break;
        case 101:
            printf("Bauru simples\n");
            printf("Digite total de Bauru simples: ");
scanf("%d", &total);
printf("\n\n");

printf("Total de Bauru simples %d: ", total);

printf("\n\n");

valor_final = Bauru_simple * total;

printf("\n\n");
printf("Valor final %.2f: ", valor_final);
            break;
        case 102:
            printf("Bauru com ovo\n");
              printf("Digite total de Bauru com ovo: ");
scanf("%d", &total);
printf("\n\n");

printf("Total de Bauru com ovo %d: ", total);

printf("\n\n");

valor_final = Bauru_com_ovo * total;

printf("\n\n");
printf("Valor final %.2f: ", valor_final);
            break;
        case 103:
            printf("Hamburguer\n");
                    printf("Digite total de Hamburger: ");
scanf("%d", &total);
printf("\n\n");

printf("Total de Hamburger %d: ", total);

printf("\n\n");

valor_final = Hamburger * total;

printf("\n\n");
printf("Valor final %.2f: ", valor_final);
            break;
        case 104:
            printf("Cheeseburger\n");
                 printf("Digite total de Cheeseburger: ");
scanf("%d", &total);
printf("\n\n");

printf("Total de Cheeseburger %d: ", total);

printf("\n\n");

valor_final = Cheeseburger * total;

printf("\n\n");
printf("Valor final %.2f: ", valor_final);
            break;
        case 105:
            printf("Refrigerante\n");
              printf("Digite total de Refrigerante: ");
scanf("%d", &total);
printf("\n\n");

printf("Total de Refrigerante %d: ", total);

printf("\n\n");

valor_final = Refrigerante * total;

printf("\n\n");
printf("Valor final %.2f: ", valor_final);
printf("\n\n");
            break;

        default:
            printf("Codigo inválido\n");
            break;
    }

    return 0;
}
