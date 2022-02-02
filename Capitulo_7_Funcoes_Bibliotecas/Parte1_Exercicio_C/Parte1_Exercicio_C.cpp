/* Capitulo 7_Exercicio_C */
#include <stdio.h>

int entrada_matrizes();
int saida_matrizes (int x, int n);

int main()
{
    printf ("Informe os numeros conforme abaixo:\n");
    
    entrada_matrizes();

    return 0;
}

int entrada_matrizes (){
    
    int i;
    int A[10], B[10], C[20];
    
    for (i=0; i<10; i++){
        printf ("Digite o %do numero da Matriz A: ", i+1);
        fflush (stdin); scanf ("%d", &A[i]);
    }
    
    printf ("\n");
    
    for (i=0; i<10; i++){
        printf ("Digite o %do numero da Matriz B: ", i+1);
        fflush (stdin); scanf ("%d", &B[i]);
    }
    
    for (i=0; i<20; i++){
        if (i<10){
            C[i] = A[i];
        }
        else{
            C[i] = B[i-10];
        }
    }
    
    for (i=0; i<20; i++){
        saida_matrizes (i, C[i]);
    }
    
    return 0;
}

int saida_matrizes (int x, int n){

    printf ("\nMatriz C[%d] = %d", x+1, n);
    
    return 0;
}
