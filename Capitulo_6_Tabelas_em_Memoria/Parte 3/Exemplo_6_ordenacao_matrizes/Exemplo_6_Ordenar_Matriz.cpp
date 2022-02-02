/* Capitulo 6 - Exemplo 6 Ordenação de Matrizes*/ 
#include <stdio.h>

int main()
{
    int i, j, aux;
    int A[5];
    
    printf ("Entre com os numeros: \n");
    
    for (i=0; i<5; i++){
        printf ("Entre com o %do numero: ", i+1);
        fflush(stdin); scanf ("%d", &A[i]);
    }
    
    for (i=0; i<5; i++){
        for (j= i+1; j<5; j++){
            if (A[i] > A[j]){
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
        }
    }
    
    printf ("\nSeguem os dados ordenados:");
    
    for (i=0; i<5; i++){
        printf ("\nA[%d] = %d", i+1, A[i]);
    }

    return 0;
}

