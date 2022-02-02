/* Exercicio parte 1 - A */ 
#include<stdio.h>

int main (void){
    
    int i;
    int A[10];
    
    for (i = 0; i < 10; i++){
        printf ("Digite o valor do %do elemento da matriz: ", i + 1); scanf ("%d", &A[i]);
    }
    
    for (i = 0; i < 10; i++){
        printf ("\nA[%d] = %d", i + 1, A[i]);
    }
    
    return 0;
}
