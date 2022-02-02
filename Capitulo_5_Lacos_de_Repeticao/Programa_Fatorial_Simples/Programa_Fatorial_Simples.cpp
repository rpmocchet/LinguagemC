/* Fatorial simples */
#include <stdio.h>

int main()
{
   int fator = 1, contador = 1, N;
   
   printf ("Digite o numero desejado: "); scanf ("%d", &N);
   
   while (contador <= N){
       fator *= contador;
       contador ++;
   }
   
   printf ("O resultador do fatorial de %d e %d", N, fator);

    return 0;
}
