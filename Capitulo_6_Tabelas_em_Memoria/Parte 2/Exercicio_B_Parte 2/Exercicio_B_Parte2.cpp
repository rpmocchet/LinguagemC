/* Exercicio parte 2 - B */ 
#include <stdio.h>

int main()
{
    int A[7], B[7], C[7][2];
    int i, j;
    
    printf ("Matriz A:\n");
    for (i=0; i<7; i++){
        printf ("Digite o %do numero da Matriz A: ", i+1); scanf ("%d", &A[i]);
    }
    
    printf ("\nMatriz B:\n");
    for (i=0; i<7; i++){
        printf ("Digite o %do numero da Matriz B: ", i+1); scanf("%d", &B[i]);
    }
    
    for (i=0; i<7; i++){
        for (j=0; j<2; j++){
            if (j==0){
                C[i][j] = A[i];
            }
            
            if (j==1){
                C[i][j] = B[i];
            }
        }
    }
    
    printf("\nMatriz C:");
    for (i=0; i<7; i++){
        for (j=0; j<2; j++){
            printf ("\nMatriz C[%d][%d] = %d", i+1, j+1, C[i][j]);
        }
    }
    
    return 0;
}
