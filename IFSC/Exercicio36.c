#include<stdio.h>


/*
36. Uma empresa de vendas tem tr�s corretores. A empresa paga ao corretor uma
comiss�o calculada de acordo com o valor de suas vendas. Se o valor da venda
de um corretor for maior que R$ 50.000.00 a comiss�o ser� de 12% do valor
vendido. Se o valor da venda do corretor estiver entre R$ 30.000.00 e R$
50.000.00 (incluindo extremos) a comiss�o ser� de 9.5%. Em qualquer outro
caso, a comiss�o ser� de 7%. Escreva um algoritmo que gere um relat�rio
contendo nome, valor da venda e comiss�o de cada um dos corretores. O
relat�rio deve mostrar tamb�m o total de vendas da empresa.




*/

int main()
{

char vendas[3][50]={"vendedorA", "vendedorB", "vendedorC"};
int i = 0;

float vtotalA = 43.000;
float ComVa = 9.5;
float valorComA =vtotalA * (ComVa /100);



float vtotalB = 70.000;
float ComVB = 12.0;
float valorComB =vtotalB * (ComVB /100);


float vtotalC = 18.000;
float ComVC = 7.0;
float valorComC =vtotalC * (ComVC /100);


printf("Relatorio de vendas..............");

printf(" \n\n");


printf("Total de vendas %s\n", vendas[0]);
printf("Total das vendas %.3f\n " , vtotalA);
printf("Total comissao %.3f\n " ,valorComA);
printf(" \n\n");

printf("Total de vendas %s\n", vendas[1]);
printf("Total das vendas %.3f\n " , vtotalB);
printf("Total comissao %.3f\n " ,valorComB);
printf(" \n\n");

printf("Total de vendas %s\n", vendas[2]);
printf("Total das vendas %.3f\n " , vtotalC);
printf("Total comissao %.3f\n " ,valorComC);
printf(" \n\n");


printf(" \n\n");
float soma = vtotalA + vtotalB + vtotalC;


printf("Valor total das vendas %.3f", soma);
printf(" \n\n");
printf(".....................................................................");





printf(" \n\n");










//for(i = 0; i < 3; i++){

//printf("%s\n", vendas[i]);

















    return 0;
}
