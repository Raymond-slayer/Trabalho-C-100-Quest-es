#include<stdio.h>
#include <locale.h>


//Exercici 96

int main()
{

    setlocale(LC_ALL, "");
    int mult[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int numero;
    int i;


printf("Digite um numero para multiplicação: ");
    scanf("%d", &numero);
printf("\n\n");


    for(i = 0; i < 13; i++){
    printf("%d x %d = %d\n", numero, mult[i], numero * mult[i] );


    }













    return 0;
}
