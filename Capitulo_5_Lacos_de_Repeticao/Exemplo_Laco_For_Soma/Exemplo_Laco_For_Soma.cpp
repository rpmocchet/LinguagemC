/* Exemplro laço FOR soma cinco vezes */

#include <stdio.h>

int main()
{
    int A, B, i;
   
    for (i = 0; i < 5; i ++){
        printf ("Digite o valor para A: "); scanf ("%d", &A);
        printf ("Digite o valor de B: "); scanf ("%d", &B);
       
        printf ("Resultado de A + B: %d\n", A + B);
    }

    return 0;
}
