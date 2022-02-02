/* Exemplo Fatorial usando DO_WHILE */
#include <stdio.h>

int main()
{
   int N, fatorial = 1, contador = 1;
   
   printf ("Digite o numero do fatorial: "); scanf ("%d", &N);
   
   do{
       fatorial *= contador;
       contador ++;
   }
   while (contador <= N );
   
   printf ("O resultado do fatorial de %d e: %d", N, fatorial);

    return 0;
}
