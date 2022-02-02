/* Exercicio parte 1 - C */ 
#include <stdio.h>

int main()
{
    int A[15], B[15];
    int i, fatorial = 1;
    
    for (i = 0; i < 15; i++){
        printf ("Digite o %do numero da matriz: ", i+1); scanf ("%d", &A[i]);
        
        while (A[i] > 0){
            fatorial *= A[i];
            A[i] --;
        }
        B[i] = fatorial;
        fatorial = 1;
    }
    
    for (i = 0; i < 15; i++){
        printf ("\nB[%d] = %d", i + 1, B[i]);
    }

    return 0;
}
