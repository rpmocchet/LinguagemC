/* Capitulo 7 Exerecicio F */ 
#include <stdio.h>

int crescente (int *A, int *B);
int decrescente (int *C, int *D);

int main()
{
    int A[12], B[12], C[12];
    int i, j, x;
    
    printf ("Digite os numeros para a Matriz A conforme abaixo:\n");
    
    for (i=0; i<12; i++){
        printf ("Digite o %do numero: ", i+1);
        fflush (stdin); scanf ("%d", &A[i]);
    }

    printf ("\nDigite os numeros para a Matriz B conforme abaixo:\n");
    
    for (i=0; i<12; i++){
        printf ("Digite o %do numero: ", i+1);
        fflush (stdin); scanf ("%d", &B[i]);
    }
    
    for (i=0; i<11; i++){
        for (j=i+1; j<12; j++){
            crescente (&A[i], &A[j]);
        }
    }
    
    for (i=0; i<11; i++){
        for (j=i+1; j<12; j++){
            crescente (&B[i], &B[j]);
        }
    }

    for (i=0; i<12; i++){
        C[i] = A[i] + B[i];
    }
    
    for (i=0; i<11; i++){
        for (j=i+1; j<12; j++){
            decrescente(&C[i], &C[j]);
        }
    }
    
    for (i=0; i<12; i++){
        printf ("\nMatriz C[%d] = %d", i+1, C[i]);
    }

    return 0;
}

int crescente (int *A, int *B){
    int x;
    
    if (*A > *B){
        x = *A;
        *A = *B;
        *B = x;
    }
    
    return 0;
}

int decrescente (int *C, int *D){
    int y;
    
    if (*C < *D){
        y = *C;
        *C = *D;
        *D = y;
    }
    
    return 0;
}
