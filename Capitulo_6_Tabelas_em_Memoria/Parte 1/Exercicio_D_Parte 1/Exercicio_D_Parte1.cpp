 /* Exercicio parte 1 - D */ 
#include <stdio.h>

int main()
{
    int A[20], B[20], C[20];
    int i;
    
    for (i=0; i<20; i++){
        printf ("Digite o %do numero da Matriz A: ", i+1); scanf ("%d", &A[i]);
    }
    
    for (i=0; i<20; i++){
        printf ("Digite o %do numero da Matriz B: ", i+1); scanf ("%d", &B[i]);
    }
    
    for (i=0; i<20; i++){
        C[i] = A[i]-B[i];
    }
    
    for (i=0; i<20; i++){
        printf ("C[%d] = %d\n", i+1, C[i]);
    }

    return 0;
}
