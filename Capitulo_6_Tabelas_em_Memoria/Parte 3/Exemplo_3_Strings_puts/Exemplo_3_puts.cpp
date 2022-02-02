/* Capitulo 6 - Exemplo 3 Strings fgets e puts*/ 
#include <stdio.h>

int main()
{
    char nome[20], sobrenome[20];
   
    puts ("Digite seu nome: "); fgets(nome, 20, stdin);
    puts ("Digite seu sobrenome: "); fgets(sobrenome, 20, stdin);
   
    printf ("\nOla %s %s, seja bem vindo!", nome, sobrenome);

    return 0;
}

