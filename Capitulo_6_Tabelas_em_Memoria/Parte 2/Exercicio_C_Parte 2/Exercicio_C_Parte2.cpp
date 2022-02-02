/* Exercicio Parte 2 -  C */ 
#include <stdio.h>

int main()
{
    int A[5],B[5][3];
    int i, j, fatorial, x;
    
    for (i = 0; i<5; i++){
        printf ("Digite o %do numero da Matriz A: ", i+1); scanf ("%d", &A[i]);
    }
    
    for (i = 0; i<5; i++){
        for (j = 0; j<3; j++){
            if (j==0){
                B[i][j] = A[i] + 5;
            }
            
            if (j==1){
                fatorial = 1;
                x = 1;
                while (x <= A[i]){
                    fatorial *= x;
                    x++;
                }
                B[i][j] = fatorial;
            }
            
            if (j==2){
                B[i][j] = A[i] * A[i];
            }
        }
    }
    
    for (i = 0; i<5; i++){
        for (j = 0; j<3; j++){
            printf ("\nMatriz B[%d][%d] = %d", i+1, j+1, B[i][j]);
        }
    }

    return 0;
}
