/* Fatorial usando laço FOR */

#include <stdio.h>

int main()
{
    int Fatorial, Contador, N;
   
    printf ("Digite o numero desejado: "); scanf ("%d", &N);
   
    for (Contador = 1, Fatorial = 1; Contador <= N; Contador ++){
        Fatorial *= Contador;
    }
   
    printf ("O resultado do fatorial de %d e: %d", N, Fatorial);

    return 0;
}
