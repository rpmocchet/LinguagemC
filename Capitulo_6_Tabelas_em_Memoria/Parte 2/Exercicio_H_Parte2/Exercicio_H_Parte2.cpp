/* Exercicio Parte 2 -  H */ 
#include <stdio.h>

int main()
{
    int A[3][3];
    int i, j;
    
    printf ("Matriz A:\n");
    for (i = 0; i<3; i++){
        printf ("%da linha da Matriz A: \n", i+1);
        
        for (j=0; j<3; j++){
            printf ("Digite o %do numero da %da linha da Matriz A: ", j+1, i+1); scanf ("%d", &A[i][j]);
        }
    }
    
    for (i = 0; i<3; i++){
        for (j = 0; j<3; j++){
            if (i == j){
                printf ("\nMatriz A[%d][%d] = %d", i+1, j+1, A[i][j] * 2);
            }
            
            if (i != j){
                printf ("\nMatriz A[%d][%d] = %d", i+1, j+1, A[i][j] * 3);
            }
        }
    }

    return 0;
}
