/* Capitulo 6 - Exemplo 2 Strings fgets*/ 
#include <stdio.h>

int main()
{
    char nome[20], sobrenome[20];
   
    printf ("Digite seu nome: "); fgets(nome, 20, stdin);
    printf ("Digite seu sobrenome: "); fgets(sobrenome, 20, stdin);
   
    printf ("\nOla %s %s, seja bem vindo!", nome, sobrenome);

    return 0;
}

