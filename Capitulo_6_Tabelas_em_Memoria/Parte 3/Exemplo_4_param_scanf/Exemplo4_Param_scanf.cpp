/* Capitulo 6 - Exemplo 4 Strings scanf %[^\n]*/ 
#include <stdio.h>

int main()
{
    char nome[40];
   
    printf ("Digite seu nome completo: "); scanf("%[^\n]",nome);
   
    printf ("\nOla %s, seja bem vindo!", nome);

    return 0;
}

