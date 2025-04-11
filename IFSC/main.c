#include <stdio.h>

int main() {

   int matricula = 2514321;


   do{
       printf("Digite a sua matricula: ");
       scanf("%d", &matricula);

       if (matricula != 2514321){
           printf("Senha incorreta. Tente novamente.\n");
       }


   }
       while(matricula != 2514321);
       printf("Acesso permitido\n");




















    return 0;
}
