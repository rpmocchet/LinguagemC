/* Capitulo 7 Exercicio A_Valor */ 
#include <stdio.h>
 
void soma (int x);
 
int main()
{
    int n;
    char tecla = 's';
    
    do{
    
        printf ("\nDigite o numero: ");
        fflush(stdin); scanf ("%d", &n);
    
        soma (n);
        
        printf ("\nDeseja continuar?");
        printf ("\n[S]im ou [N]ao");
        printf ("\nDigite a opcao desejada: ");
        fflush (stdin); scanf ("%s", &tecla);
        
    }while (tecla == 's' || tecla == 'S');
    
    printf ("\n\nPrograma finalizado com sucesso!");
 
    return 0;
}
 
void soma (int x){
    int i, soma = 0;
    
    for (i=1; i<=x; i++){
        soma += i;
    }
    
    printf ("A soma de 1 ate %d e: %d\n", x, soma);
    
    return;
}
