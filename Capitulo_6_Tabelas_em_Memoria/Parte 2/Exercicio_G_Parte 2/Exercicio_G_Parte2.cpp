/* Exercicio Parte 2 -  G */ 
#include <stdio.h>

int main()
{
    int A[4][4];
    int i, j;
    
    printf ("Matriz A:\n");
    for (i = 0; i<4; i++){
        printf ("%da linha da Matriz A: \n", i+1);
        
        for (j=0; j<4; j++){
            printf ("Digite o %do numero da %da linha da Matriz A: ", j+1, i+1); scanf ("%d", &A[i][j]);
        }
    }
    
    printf ("Diagonais da Matriz A:\n");
    
    for (i = 0; i<4; i++){
        for (j = 0; j<4; j++){
            if (i == j){
                printf ("\n[%d][%d] = %d", i+1, j+1, A[i][j]);
            }
        }
    }

    return 0;
}
