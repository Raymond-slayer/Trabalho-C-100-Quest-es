#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int main()
{


    double raio1 = 4.2;
    double raio2 = pow(raio1,2.0);
    double altura = 18.3;
    double resultado = PI * raio2 * altura;
    double volumeML = resultado * 1.0068;


    printf("O valor em  cm cubcos e: %.2lf \n",resultado );
    printf("Capacidade maxima em ML e de: %.2lf", volumeML);














    return 0;
}
