/* Capitulo 6 Parte 4 - Exemplo 2 (Cadastro aluno usando matriz) */ 
#include <stdio.h>

int main()
{
    struct CadastroAluno{
        char nome[41];
        float nota[4];
    };
    
    struct CadastroAluno Aluno;
    
    int i;
    
    printf ("Informe o nome do Aluno: ");
    fflush (stdin); fgets (Aluno.nome, 40, stdin);
    
    for (i=0; i<4; i++){
        printf ("Informe a %da Nota: ", i+1); scanf ("%f", &Aluno.nota[i]);
    }
    
    printf ("\nNome do Aluno: %s", Aluno.nome);
    
    for (i=0; i<4; i++){
        printf ("\nNota %d: %.2f", i+1, Aluno.nota[i]);
    }
    
    return 0;
}

