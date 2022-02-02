/* Capitulo 6 Parte 3 - Exercicio C */ 
#include <stdio.h>

int main()
{
    int A[20], B[20];
    int i, j, x, fatorial;
    
    printf ("Digite os numeros conforme abaixo:\n");
    
    for (i=0; i<15; i++){
        printf ("Informe o %do numero: ", i+1);
        fflush(stdin); scanf ("%d", &A[i]);
        B[i] = A[i];
    }
    
    for (i=0; i<15; i++){
        x = 1;
        fatorial = 1;
        
        while (x <= A[i]){
            fatorial *= x;
            x++;
        }
        
        B[i] = fatorial;
    }
    
    for (i=0; i<15; i++){
        for (j=i+1; j<15; j++){
            if (B[i] > B[j]){
                x = B[i];
                B[i] = B[j];
                B[j] = x;
            }
        }
    }
    
    for (i=0; i<15; i++){
        printf ("Matriz A[%d] = %d  // Matriz B[%d] = %d\n", i+1, A[i], i+1, B[i]);
    }

    return 0;
}

