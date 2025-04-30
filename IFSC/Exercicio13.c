#include <stdio.h>

int main(){

float F;

printf("Temperaturas em FAHRENHEIT: ");
scanf("%f",  &F);

float C = (F - 32) * 5 / 9;

printf("\n\n");

printf("Convertido para Celcius e: %.1f", C);
printf("\n\n ");

return 0;

}
