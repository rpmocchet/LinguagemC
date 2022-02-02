/* Exercicio parte 1 - B */ 
#include<stdio.h>

int main (void){
    
    int i;
    int A[8], B[8];
    
    for (i = 0; i < 8; i++){
        printf ("Digite o %do elemento da matriz: ", i + 1); scanf ("%d", &A[i]);
        B[i] = A[i] * 3;
    }
    
    for (i = 0; i < 8; i++){
        printf ("\nA[%d] = %d   |   B[%d] = %d", i+1, A[i], i+1, B[i]);
    }
    
    return 0;
}
