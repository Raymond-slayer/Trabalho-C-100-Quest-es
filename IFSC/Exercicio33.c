#include <stdio.h>
#include <stdlib.h>

int main()
{

    int pesoA, pesoB, pesoC, totalpesoA, totalpesoB, totalpesoC, totalpeso;

    int provaA, provaB, provaC;




    printf("Digite a nota da primeira prova: " );
    scanf("%i", &provaA);

    printf("Digite a nota da segunda prova: " );
    scanf("%i", &provaB);

    printf("Digite a nota da terceira prova: ");
    scanf("%i", &provaC);


    pesoA = 2 * provaA;
    pesoB = 3 * provaB;
    pesoC = 5 * provaC;
    float TotalProvaCopesos = pesoA + pesoB + pesoC;

    totalpesoA = 2;
    totalpesoB = 3;
    totalpesoC = 5;

    totalpeso = totalpesoA + totalpesoB + totalpesoC;

float mediaDiciplina = TotalProvaCopesos / totalpeso;

    printf("A soma do total das prova e %.f\n", TotalProvaCopesos);
    printf("O peso total calculado e de %i\n", totalpeso);
    printf("A media final e %.1f\n", mediaDiciplina);


    if(mediaDiciplina >=6 || 10){
        printf("Aluno aprovado");

    }else{
    printf("Aluno reprovado");

    }








































    return 0;
}
