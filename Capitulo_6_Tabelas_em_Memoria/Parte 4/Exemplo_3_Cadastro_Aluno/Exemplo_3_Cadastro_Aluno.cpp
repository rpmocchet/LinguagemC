/* Capitulo 6 Parte 4 - Exemplo 3 */ 
#include <stdio.h>

int main()
{
    struct Cadastro_Aluno{
        char nome[41];
        float nota[4];
    };
    
    struct Cadastro_Aluno Aluno[8];
    
    int i, j;
    
    printf ("Entre com os dados conforme abaixo:");
    
    for (i=0; i<8; i++){
        printf ("\nInforme o nome do %do aluno: ", i+1);
        fflush (stdin); scanf ("%s", Aluno[i].nome);
        
        for (j=0; j<4; j++){
            printf ("Informe a %da nota: ", j+1);
            fflush(stdin); scanf ("%f", &Aluno[i].nota[j]);
        }
    }
    
    printf ("\nApresentacao de notas:");
    
    for (i=0; i<8; i++){
        printf ("\nNome do %do aluno: ", i+1); puts (Aluno[i].nome);
        
        for (j=0; j<4; j++){
            printf ("\nNota %d: %.2f", j+1, Aluno[i].nota[j]);
        }
    }

    return 0;
}

