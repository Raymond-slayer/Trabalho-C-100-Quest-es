#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alfabeto;

    printf("digite uma letra do alfabeto: ");
    scanf("%c", &alfabeto);


    switch(alfabeto){

    case 'a':
        printf("Vogal");
        break;

        case 'e':
        printf("Vogal");
        break;

    case 'i':
        printf("Vogal");
        break;

    case 'o':
        printf("Vogal");
        break;

    case 'u':
        printf("Vogal");
        break;

    default:
        printf("Consoante");
    }

    return 0;
}
