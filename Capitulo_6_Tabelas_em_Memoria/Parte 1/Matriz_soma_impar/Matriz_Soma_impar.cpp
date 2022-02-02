/* Matriz soma impar */ 
#include<stdio.h>

int main (void){
    
    int i, soma = 0;
    int A[5];
    
    for (i = 0; i < 5; i++){
        
        printf ("Digite o %do numero: ", i + 1); scanf ("%d", &A[i]);
        
        if (A[i] % 2 != 0){
            soma += A[i];
        }
    }
    
    printf ("A soma dos elementos impares e: %d", soma);
    
    return 0;
}
