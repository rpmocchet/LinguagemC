/* Capitulo 5 - Exercicio F */
#include <stdio.h>

int main()
{
    for (int i = 0; i <= 9; i++){
        if (i != 0 && i != 1){
            printf ("%d\n", i*i*i);
        }
        else {
            printf ("1\n");
        }
    }
   
    return 0;
}

