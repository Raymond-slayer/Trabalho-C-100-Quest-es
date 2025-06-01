#include<stdio.h>
#include <locale.h>


//Exercici 90

int main()
{

    setlocale(LC_ALL, "");
    int mult[26] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
    int i;

    for(i = 0; i < 26; i++){
    printf("  7 × %d = %d\n",mult[i], mult[i] * 7 );

    }













    return 0;
}
