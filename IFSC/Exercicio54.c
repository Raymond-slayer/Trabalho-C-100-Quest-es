#include <stdio.h>
#include <stdlib.h>

int main()
{


    int num1 = 1000, num2 = 2000, num3 = 3000;
    int numero;


    printf("Digite o numero: ");
    scanf("%d", &numero );

printf("\n\n");
    if(numero == 2){
        printf("2 corresponde ao valor num1 %d ", num1);
    }
      else if(numero == 3){
        printf("3 corresponde ao valor num2 %d ", num2);
    }
      else if(numero == 4){
        printf("3 corresponde ao valor num3 %d ", num3);
    }else{
    printf("Valor digitado nao corresponde com os informados");
    }
printf("\n\n");



















    return 0;
}
