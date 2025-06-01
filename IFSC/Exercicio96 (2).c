#include<stdio.h>
#include <locale.h>

int main()
{

setlocale(LC_ALL, "");

int impares[15] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,};

int i;
int produto = 1;

for(i = 0; i < 16; i++){
if(impares[i] % 2 != 0){
printf("Numeros ímpares [%d] %d \n",i, impares[i] );
produto *= impares[i];
}


}

printf("\n\n ");
printf("Total dos valores Ímpares %d ", produto);

printf("\n\n");





    return 0;
}
