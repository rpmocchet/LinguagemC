/* Capitulo 6 Parte 3 - Exercicio G */ 
#include <stdio.h>

int main()
{
    char resp;
    int A[18], B[18];
    int i, pesq;
    
     printf ("Digite os numeros conforme abaixo:\n");
       
       for (i=0; i<18; i++){
           printf ("Digite o %do numero: ", i+1);
           fflush (stdin); scanf ("%d", &A[i]);
           B[i] = A[i] + 2;
       }
    
    resp = 's';
    
    do{
        printf ("\nDigite o indice desejado: ");
        fflush (stdin); scanf ("%d", &pesq);
       
        printf ("\nNumero na Matriz B[%d] = %d", pesq, B[pesq]);
        
        printf ("\n\nPara pesquisar outro numero, digite S. Para sair, digite qualquer tecla.");
        fflush(stdin); scanf ("%s", &resp);
        
    }while (resp == 's' || resp == 'S');

    return 0;
}

