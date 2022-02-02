/* Capitulo 6 Parte 3 - Exercicio H */ 
#include <stdio.h>
#include<string.h>

int main()
{
    char A[10][40], B[10][40];
    int i, j;
    
    printf ("Digite os nomes confome abaixo:\n");
    
    for (i=0, j=9; i<10, j>=0; i++, j--){
        printf ("Digite o %do nome: ", i+1);
        fflush(stdin); fgets (A[i], 40, stdin);
        strcpy (B[j], A[i]);
    }
    
    for (i=0; i<10; i++){
        printf ("Matriz B[%d] = %s", i+1, B[i]);
    }

    return 0;
}

