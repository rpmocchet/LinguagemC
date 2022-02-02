/* Capitulo 7 Exercicio 3 */ 
#include <stdio.h>

int main()
{
    struct CAD_ALUNO {
        char nome[40];
        float nota[4];
        float media;
    };
    struct CAD_ALUNO Aluno[3];
   
    int i, j;
    
    printf ("Informe os dados conforme abaixo:\n");
   
    for (i=0; i<3; i++){
       printf ("\nDigite o nome do %do aluno: ", i+1);
       fflush (stdin); scanf ("%s", Aluno[i].nome);
       for (j=0; j<4; j++){
           printf ("Digite a %da nota: ", j+1);
           fflush (stdin); scanf ("%f", &Aluno[i].nota[j]);
           Aluno[i].media += Aluno[i].nota[j];
       }
       Aluno[i].media = Aluno[i].media / 4;
    }
    
    printf ("\nApresentacao de dados:");
   
    for (i=0; i<3; i++){
        printf ("\n\nAluno: %s", Aluno[i].nome);
        for (j=0; j<4; j++){
           printf ("\nNota %d: %.2f", j+1, Aluno[i].nota[j]);
        }
        printf ("\nMedia: %.2f", Aluno[i].media);
    }
    
    return 0;
}
