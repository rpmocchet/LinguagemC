/* Capitulo 6 Parte 3 - Exercicio B */ 
#include <stdio.h>

int main()
{
    int A[8], B[8];
    int i;
    
    printf ("Digite os numeros conforme abaixo:\n");
    
    for (i=0; i<8; i++){
        printf ("Informe o %do numero: ", i+1);
        fflush(stdin); scanf ("%d", &A[i]);
        B[i] = A[i] * 3;
    }
    
    for (i=0; i<8; i++){
        printf ("Matriz A[%d] = %d  // Matriz B[%d] = %d\n", i+1, A[i], i+1, B[i]);
    }

    return 0;
}

