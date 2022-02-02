/* Capitulo 6 - Exemplo 7 Ordenação de Matrizes */ 
#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char nome[10][40], x[40];
    
    printf ("Entre com os nomes conforme abaixo:\n");
    
    for (i=0; i<10; i++){
        printf ("Digite o %do nome: ", i+1);
        fflush(stdin); fgets(nome[i], 40, stdin);
    }
    
    for (i=0; i<10; i++){
        for (j=i+1; j<10; j++){
            if (strcmp(nome[i], nome[j]) > 0){
                strcpy(x, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], x);
            }
        }
    }
    
    printf ("\nOs nomes em ordem alfabética: \n");
    
    for (i=0; i<10; i++){
        printf ("%s", nome[i]);
    }

    return 0;
}

