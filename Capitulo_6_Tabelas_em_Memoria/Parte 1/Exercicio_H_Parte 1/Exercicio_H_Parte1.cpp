/* Exercicio parte 1 - H */ 
#include<stdio.h>

int main() {
    
    int A[20], B[20];
    int i, y;
    
    for (i=0; i<20; i++){
        printf ("Digite o %do numero da Matriz A: ", i+1); scanf ("%d", &A[i]);
    }
    
    for (i=0, y=19; i<20, y>=0; i++, y--){
        B[y] = A[i];
    }
    
    for (i=0; i<20; i++){
        printf ("\nA[%d] = %d /// B[%d] = %d", i+1, A[i], i+1, B[i]);
    }
   
    return 0;
}
