/* Capitulo 6 Parte 3 - Exercicio E */ 
#include <stdio.h>
#include <string.h>

int main()
{
    char A[5][40], B[4][40], C[9][40], x[40];
    int i, j;
    
    printf ("Digite os nomes conforme abaixo para a Matriz A:\n");
    
    for (i=0; i<5; i++){
        printf ("Informe o %do nome feminino: ", i+1);
        fflush(stdin); fgets (A[i], 40, stdin);
    }
    
    printf ("\nDigite os nomes conforme abaixo para a Matriz B:\n");
    
    for (i=0; i<4; i++){
        printf ("Informe o %do nome masculino: ", i+1);
        fflush(stdin); fgets(B[i], 40, stdin);
    }
    
    for (i=0; i<9; i++){
    }
    
    /*for (i=0; i<5; i++){
        strcpy (C[i], A[i]);
    }
    
    for (i=0; i<4; i++){
        strcpy (C[i+5], B[i]);
    }*/

    for (i=0; i<9; i++){
        for (j=i+1; j<9; j++){
            if(strcmp(C[i], C[j]) > 0){
                strcpy (x, C[i]);
                strcpy (C[i], C[j]);
                strcpy (C[j], x);
            }
        }
    }
    
    for (i=0; i<9; i++){
        printf ("C[%d] = %s", i+1, C[i]);
    }

    return 0;
}

