/* Capitulo 6 Parte 3 - Exercicio A */ 
#include <stdio.h>
#include <string.h>

int main()
{
    char A[12][40], x[40];
    int i, j;
    
    printf ("Digite os nomes conforme abaixo:\n");
    
    for (i=0; i<12; i++){
        printf ("Informe o %do nome: ", i+1);
        fflush(stdin); fgets(A[i], 40, stdin);
    }
    
    for (i=0; i<12; i++){
        for (j=i+1; j<12; j++){
            if (strcmp(A[i], A[j]) < 0){
                strcpy (x, A[i]);
                strcpy (A[i], A[j]);
                strcpy (A[j], x);
            }
        }
    }
    
    printf ("\nNomes ordenados em ordem decrescente:\n");
    
    for (i=0; i<12; i++){
        printf ("%do nome: %s", i+1, A[i]);
    }

    return 0;
}

