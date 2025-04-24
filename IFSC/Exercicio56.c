#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b ,c;

    printf("Escreva o primeiro valor: ");
    scanf("%i", &a);

    printf("Escreva o segundo valor: ");
    scanf("%i", &b);

    printf("Escreva o terceiro valor: ");
    scanf("%i", &c);

    if(a > b || a > c){
        printf("a e o maior valor");

    }else if(b > a || b > c){
        printf("b e o maior valor");

    }else if(c > a || c > b){
    printf("C e o maior valo");
    }














    return 0;
}
