/* Exemplo DO_WHILE */
#include <stdio.h>

int main()
{
   int A, B, contador = 1;
   
   do{
       printf ("Digite o valor de A: "); scanf ("%d", &A);
       printf ("Digite o valor de B: "); scanf ("%d", &B);
       
       printf ("O resultado da soma e: %d\n\n", A + B);
       
       contador ++;
   }
   while (contador <= 5 );

    return 0;
}
