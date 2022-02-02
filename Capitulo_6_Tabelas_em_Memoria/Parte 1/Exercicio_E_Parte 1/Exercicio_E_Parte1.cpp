/* Exercicio parte 1 - E */ 
#include<stdio.h> 

int main() {
    
    int A[10], B[10], C[20];
    int i;
    
    for (i=0; i<10; i++){
        printf ("Digite o %do numero da Matriz A: ", i+1);
        scanf ("%d", &A[i]);
        C[i] = A[i];
    }
    
    for (i=0; i<10; i++){
        printf ("Digite o %do numero da Matriz B: ", i+1);
        scanf ("%d", &B[i]);
        C[i+10] = B[i];
    }
    
    for (i=0; i<20; i++){
        printf ("\nC[%d] = %d", i+1, C[i]);
    }
    
    return 0;
}
