/* Calculo de media com Matriz 2 dimensões */ 
#include <stdio.h>

int main()
{
    float MD[8][4];
    int i, j;
    
    for (i=0; i<8; i++){
        printf ("Digite as notas do %do Aluno: \n", i+1);
        
        for (j=0; j<4; j++){
            printf ("Digite a %da nota: ", j+1); scanf ("%f", &MD[i][j]);
        }
    }
    
    for (i=0; i<8; i++){
        printf ("\nAs notas do %do Aluno sao:", i+1);
        
        for (j=0; j<4; j++){
            printf ("\nNota %d: %.2f", j+1, MD[i][j]);
        }
    }

    return 0;
}
