#include<stdio.h>

int main()
{

int pares[21] ={85,86,87,88,89,90,91,92,93,94,95,96,96,97,98,99,100,101,102,103,104};

int i;
int soma = 0;

for(i = 0; i < 21; i++){
if(pares[i] % 2 == 0){
printf("Numeros pares [%d] %d \n",i, pares[i] );
}

soma += pares[1];

}

printf("\n\n ");
printf("Total dos valores pares %d ", soma);







    return 0;
}
