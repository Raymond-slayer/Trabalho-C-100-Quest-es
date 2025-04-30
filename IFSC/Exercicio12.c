 #include <stdio.h>

int main(){

float C;

printf("Temperaturas em CELCIUS: ");
scanf("%f",  &C);

float F = (9 * C + 160) / 5;

printf("\n\n");

printf("Convertido para FAHRENHEIT e: %.1f", F);
printf("\n\n ");

return 0;

}
