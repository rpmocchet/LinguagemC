 /* Capitulo 5 - Exercicio C */

#include <stdio.h>

int main()
{
    int N, i;
   
    printf ("Digite o numero desejado: "); scanf ("%d", &N);
    printf ("O resultado da tabuada de %d e:\n", N);
   
    for (i = 0; i < 10; i++){
        printf ("%d x %d = %d\n", N, i, N*i);
    }
   
    return 0;
}
