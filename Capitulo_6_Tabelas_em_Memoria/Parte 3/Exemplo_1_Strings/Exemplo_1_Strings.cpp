/* Capitulo 6 - Exemplo 1 Strings */ 
#include <stdio.h>

int main()
{
    char nome[10], sobrenome[15];
    
    printf ("Digite seu nome: "); scanf("%s", nome);
    printf ("Digite seu sobrenome: "); scanf("%s", sobrenome);
    
    printf ("\nOla %s %s, seja bem vindo!", nome, sobrenome);

    return 0;
}
