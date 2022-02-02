/* Exemplo DO_WHILE enquanto usuario quiser*/
#include <stdio.h>

int main()
{
   int A, B, contador = 1;
   
   do{
       printf ("Digite o valor de A: "); scanf ("%d", &A);
       printf ("Digite o valor de B: "); scanf ("%d", &B);
       
       printf ("O resultado da soma e: %d\n\n", A + B);
       
       printf ("Para continuar, digite 1. Para encerrar, digite 2: "); scanf ("%d", &contador);
   }
   while (contador == 1 );
   
   printf ("Programa Encerrado com sucesso!");

    return 0;
}
