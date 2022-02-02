/* Capitulo 6 Parte 4 - Exemplo 1 (Cadastro aluno) */ 
#include <stdio.h>

int main()
{
    struct CadastroAluno{
        char Nome[41];
        float N1, N2, N3, N4;
    };
    
    struct CadastroAluno Aluno;
    
    printf ("Informe o nome do Aluno: ");
    fflush (stdin); fgets (Aluno.Nome, 40, stdin);
    
    printf ("Informe a primeira Nota: "); scanf ("%f", &Aluno.N1);
    printf ("Informe a segunda Nota: "); scanf ("%f", &Aluno.N2);
    printf ("Informe a terceira Nota: "); scanf ("%f", &Aluno.N3);
    printf ("Informe a quarta Nota: "); scanf ("%f", &Aluno.N4);
    
    printf ("\nNome do Aluno: %s", Aluno.Nome);
    printf ("\nNota 1: %.2f", Aluno.N1);
    printf ("\nNota 2: %.2f", Aluno.N2);
    printf ("\nNota 3: %.2f", Aluno.N3);
    printf ("\nNota 4: %.2f", Aluno.N4);
    
    return 0;
}

