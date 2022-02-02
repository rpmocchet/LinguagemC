/* Capitulo 6 - Exemplo 8 Pesquisa com Matrizes */ 
#include <stdio.h>
#include <string.h>

int main()
{
    int i, acha;
    char nome[10][40], pesq[40], resp;
    
    printf ("Digite os nomes conforme solicitado:\n");
    
    for (i=0; i<10; i++){
        printf ("Informe o %do nome: ", i+1);
        fflush(stdin); fgets(nome[i], 40, stdin);
    }
    
    resp = 's';
    
    while (resp == 's' || resp == 'S'){
        printf ("\nDigite o nome que deseja pesquisar: ");
        fflush (stdin); fgets (pesq, 40, stdin);
        
        i=0;
        acha=0;
        
        while (i<10 && acha == 0){
            if (strcmp(pesq,nome[i]) == 0){
                acha = 1;
            }
            else{
                i++;
            }
        }
        if (acha == 1){
            printf ("%s foi localizado na posicao %d", pesq, i+1);
        }
        else{
            printf ("%s nao foi localizado", pesq);
        }
        
        printf ("Digite S para continuar. Para finalizar digite qualquer tecla.");
        fflush(stdin); resp = getchar();
    }

    return 0;
}

