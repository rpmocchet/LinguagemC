/* Capitulo 6 - Exemplo 9 Pesquisa com Matrizes */ 
#include <stdio.h>

int main()
{
    int num[5], i, acha, pesq;
    char resp;
    
    printf ("Informe os numeros conforme abaixo.\n");
    
    for (i=0; i<5; i++){
        printf ("Informe o %do numero: ", i+1);
        fflush(stdin); scanf ("%d", &num[i]);
    }
    
    resp = 'S';
    
    do{
        printf ("\nInforme o numero a ser pesquisado: ");
        fflush(stdin); scanf ("%d", &pesq);
        
        i = 0;
        acha = 0;
        
        while (i<5 && acha == 0){
            if (pesq == num[i]){
                acha = 1;
            }
            else{
                i++;
            }
        }
        
        if (acha == 1){
            printf ("\n%d foi localizado na posicao %d.", pesq, i+1);
        }
        else{
            printf ("\n%d nao foi localizado.", pesq);
        }
        
        printf ("\nDigite S para continuar. Para sair, aperte qualquer tecla.");
        fflush(stdin); scanf ("%s", &resp);
    }while (resp == 's' || resp == 'S');
    
    return 0;
}

