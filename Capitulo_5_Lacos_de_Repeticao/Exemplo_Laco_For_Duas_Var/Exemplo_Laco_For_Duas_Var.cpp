/* Exemplro laço FOR com duas variaveis */

#include <stdio.h>

int main()
{
    int A, B;
   
    for (A = 1, B = 1; A + B <= 15; A += 2, B += 1){
        printf ("%d\n", A + B);
    }

    return 0;
}
