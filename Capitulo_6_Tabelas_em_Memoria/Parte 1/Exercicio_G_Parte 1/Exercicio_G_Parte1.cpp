/* Exercicio parte 1 - G */ 
#include<stdio.h>

int main() {
    
    int A[10], B[10];
    int i;
    
    for (i = 0; i<10; i++){
        printf ("Digite o %do numero da Matriz A: ", i+1); scanf ("%d", &A[i]);
        B[i] = A[i]*A[i];
    }
    
    for (i=0; i<10; i++){
        printf ("\nA[%d] = %d // B[%d] = %d", i+1, A[i], i+1, B[i]);
    }
   
    return 0;
}

