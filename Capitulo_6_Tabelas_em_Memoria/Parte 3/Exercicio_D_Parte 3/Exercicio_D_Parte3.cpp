/* Capitulo 6 Parte 3 - Exercicio D */ 
#include <stdio.h>

int main()
{
    int A[12], B[12], C[12];
    int i, j, x;
    
    printf ("Digite os numeros conforme abaixo para a Matriz A:\n");
    
    for (i=0; i<12; i++){
        printf ("Informe o %do numero: ", i+1);
        fflush(stdin); scanf ("%d", &A[i]);
    }
    
    for (i=0; i<12; i++){
        for (j=i+1; j<12; j++){
            if (A[i] < A[j]){
                x = A[i];
                A[i] = A[j];
                A[j] = x;
            }
        }
    }
    
    printf ("\nDigite os numeros conforme abaixo para a Matriz B:\n");
    
    for (i=0; i<12; i++){
        printf ("Informe o %do numero: ", i+1);
        fflush(stdin); scanf ("%d", &B[i]);
    }
    
    for (i=0; i<12; i++){
        for (j=i+1; j<12; j++){
            if (B[i] < B[j]){
                x = B[i];
                B[i] = B[j];
                B[j] = x;
            }
        }
    }
    
    for (i=0; i<12; i++){
        C[i] = A[i] + B[i];
    }
    
    for (i=0; i<12; i++){
        printf ("Matriz C[%d] = %d\n", i+1, C[i]);
    }

    return 0;
}

