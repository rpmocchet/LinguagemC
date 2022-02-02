/* Exercicio parte 2 - A */ 
#include <stdio.h>

int main()
{
    int A[5][3], B[5][3], C[5][3];
    int i, j;
    
    printf ("Matriz A:\n");
    
    for (i=0; i<5; i++){
        printf ("%da linha da Matriz A:\n", i+1);
        for (j=0; j<3; j++){
            printf ("Digite o %do numero da %da linha da Matriz A: ", j+1, i+1);
            scanf ("%d", &A[i][j]);
        }
    }
    
    printf ("\nMatriz B:\n");
    for (i=0; i<5; i++){
        printf ("%da linha da Matriz B:\n", i+1);
        for (j=0; j<3; j++){
            printf ("Digite o %do numero da %da linha da Matriz B: ", j+1, i+1);
            scanf ("%d", &B[i][j]);
            
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    
    for (i=0; i<5; i++){
        for (j=0; j<3; j++){
            printf ("\nMatriz C[%d][%d] = %d", i+1, j+1, C[i][j]);
        }
    }

    return 0;
}

