/* Exercicio Parte 2 - D */ 
#include <stdio.h>1

int main()
{
    int A[6],B[6], C[5][2];
    int i, j;
    
    printf ("Matriz A:\n");
    for (i = 0; i<6; i++){
        printf ("Digite o %do numero da Matriz A: ", i+1); scanf ("%d", &A[i]);
    }
    
    printf ("Matriz B:\n");
    for (i = 0; i<6; i++){
        printf ("Digite o %do numero da Matriz B: ", i+1); scanf ("%d", &B[i]);
    }
    
    for (i = 0; i<6; i++){
        for (j = 0; j<2; j++){
            if (j==0){
                C[i][j] = A[i] * 2;
            }
            
            if (j==1){
                C[i][j] = B[i] - 5;
            }
        }
    }
    
    for (i = 0; i<6; i++){
        for (j = 0; j<2; j++){
            printf ("\nMatriz C[%d][%d] = %d", i+1, j+1, C[i][j]);
        }
    }

    return 0;
}
