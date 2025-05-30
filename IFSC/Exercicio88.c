    #include <stdio.h>
    #include <stdlib.h>

    /*
    88. Some os números de 1 a 100 e imprima o valor.
    */

    int main()
    {
        int valor[100];
        int i ;
        int soma = 0;


        for(i = 0; i < 100; i++){
                valor[i] = i + 1;
    soma = soma + valor[i];
            printf("valor [%d] = %d\n", i , valor[i] );



        }

    printf("A soma total: %d\n", soma);





















    return 0;
}
