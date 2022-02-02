/* Matriz impar ou par */ 
#include<stdio.h>

int main (void){
    
    int i;
    int A[10], B[10];
    
    for (i = 0; i < 10; i++){
        
        printf ("Informe o %do valor: ", i + 1); scanf ("%d", &A[i]);
        
        if (i % 2 == 0){
            B[i] = A[i] * 5;
        }
        
        else {
            B[i] = A[i] + 5;
        }
    }
    
    for (i = 0; i < 10; i++){
        printf ("\nA[%d] = %d   ||  B[%d] = %d", i + 1, A[i], i + 1, B[i]);
    }
    
    return 0;
}
