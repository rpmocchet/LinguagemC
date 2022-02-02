/* Capitulo 6 Parte 4 - Exemplo 4 */ 
#include <stdio.h>
#include <string.h>

int main()
{
    struct Cadastro_Aluno{
        char nome[41];
        float nota[4];
    };
    
    struct Cadastro_Aluno Aluno[3], x;
    
    int i, j;
    
    printf ("Entre com os dados conforme abaixo:");
    
    for (i=0; i<3; i++){
        printf ("\nInforme o nome do %do aluno: ", i+1);
        fflush (stdin); scanf ("%s", Aluno[i].nome);
        
        for (j=0; j<4; j++){
            printf ("Informe a %da nota: ", j+1);
            fflush(stdin); scanf ("%f", &Aluno[i].nota[j]);
        }
    }
    
    for (i=0; i<2; i++){
        for (j=i+1; j<3; j++){
            if (strcmp(Aluno[i].nome, Aluno[j].nome)>0){
                x = Aluno[i];
                Aluno[i] = Aluno[j];
                Aluno[j] = x;
            }
        }
    }
    
    printf ("\nApresentacao de notas:");
    
    for (i=0; i<3; i++){
        printf ("\n\nNome do %do aluno: ", i+1); puts (Aluno[i].nome);
        
        for (j=0; j<4; j++){
            printf ("\nNota %d: %.2f", j+1, Aluno[i].nota[j]);
        }
    }

    return 0;
}

