/* Looping infinito While */
#include <stdio.h>

int main()
{
   int A, B, R, var;
   
   var = 1;
   
   while (var == 1){
       
       printf ("Digite um valor para A: "); scanf ("%d", &A);
       printf ("Digite um valor para B: "); scanf ("%d", &B);
       printf ("\nO resultado da soma e: %d", A + B);
       printf ("\n\nPara continuar, digite 1. Para sair, digite 2: "); scanf ("%d", &var);
       
       if (var != 1){
           printf ("\nPrograma finalizado!");
       }
   }

    return 0;
}
