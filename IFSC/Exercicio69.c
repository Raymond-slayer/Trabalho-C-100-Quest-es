#include <stdio.h>
#include <stdlib.h>




int main()
{


    char data [9];
    int dia,mes, ano;


    printf("Digite a data no formato ddmmaa:  ");
    scanf("%8s", data);




    sscanf(data, "%2d%2d%4d", &dia, &mes, &ano);

    printf("dia: %02d\n", dia);
    printf("Mes: %02d\n", mes);
    printf("ano: %04d\n", ano );

printf(" \n\n");

if(mes == 1 && dia >= 21 || mes == 2 && dia <= 19){
printf("Signo do zodiaco AQUARIO");
}
if(mes == 2 && dia >= 20 || mes == 3 && dia <= 20){
printf("Signo do zodiaco PEIXE");
}
if(mes == 3 && dia >= 21 || mes == 4 && dia <= 20){
printf("Signo do zodiaco ARIES");
}if(mes == 4 && dia >= 21 || mes == 5 && dia <= 20){
printf("Signo do zodiaco TOURO");
}if(mes == 5 && dia >= 21 || mes == 6 && dia <= 20){
printf("Signo do zodiaco GÊMEOS");
}if(mes == 6 && dia >= 21 || mes == 7 && dia <= 20){
printf("Signo do zodiaco CANCER");
}if(mes == 7 && dia >= 21 || mes == 8 && dia <= 22){
printf("Signo do zodiaco LEÃO");
}if(mes == 8 && dia >= 23 || mes == 9 && dia <= 23){
printf("Signo do zodiaco VIRGEM");
}if(mes == 9 && dia >= 23 || mes == 10 && dia <= 22){
printf("Signo do zodiaco LIBRA");
}if(mes == 10 && dia >= 23 || mes == 11 && dia <= 22){
printf("Signo do zodiaco ESCORPIÃO");
}if(mes == 11 && dia >= 22 || mes == 12 && dia <= 21){
printf("Signo do zodiaco SARGITARIO");
}if(mes == 12 && dia >= 22 || mes == 1 && dia <= 20){
printf("Signo do zodiaco CAPRICÓRNIO");
}







    return 0;
}
