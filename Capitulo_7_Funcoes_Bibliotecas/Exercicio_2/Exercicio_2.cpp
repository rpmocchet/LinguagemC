/* Capitulo 7 Exercicio 2 */ 
#include <stdio.h>

int main()
{
    struct CAD_AGENDA {
        char nome[40];
        char email[40];
        char telefone[12];
    };
    struct CAD_AGENDA Cadastro_Agenda[3];
    
    int i, j, opcao, repeticao;
    
    opcao = 0;
    repeticao == 1;
    
    do{
        printf ("Bem vindo a Agenda!");
        printf ("\nOpcao 1 -- Cadastro de contatos");
        printf ("\nOpcao 2 -- Pesquisa de contatos");
        printf ("\nOpcao 3 -- Editar contatos");
        printf ("\nOpcao 4 -- Exclusao de contatos");
        printf ("\nOpcao 5 -- Apresentacao de contatos");
        printf ("\nOpcao 6 -- Sair da Agenda");
        printf ("\n\nDigite a opcao desejada: ");
        fflush (stdin); scanf ("%d", &opcao);
    
    
        switch (opcao){
            case 1: {
                printf ("\nCadastro de Contatos!\n");
                
                for (i=0; i<3; i++){
                    printf ("Cadastro do %do contato: \n", i+1);
                    printf ("Digite o nome do contato: ");
                    fflush (stdin); scanf ("%s", Cadastro_Agenda[i].nome);
                    printf ("Digite o email do contato: ");
                    fflush (stdin); scanf ("%s", Cadastro_Agenda[i].email);
                    printf ("Digite o telefone do contato: ");
                    fflush (stdin); scanf ("%s", Cadastro_Agenda[i].telefone);
                    printf ("\n");
                };
                repeticao = 1;
                break;
            }
        
            case 2: {
                printf ("\nApresentacao dos contatos:\n");
   
                for (i=0; i<3; i++){
                    printf ("\nNome: "); puts(Cadastro_Agenda[i].nome);
                    printf ("Email: "); puts(Cadastro_Agenda[i].email);
                    printf ("Telefone: "); puts (Cadastro_Agenda[i].telefone);
                };
                repeticao = 1;
                break;
            }
        
            case 3: {
                repeticao = 1;
                break;
            }
        
            case 4: {
                repeticao = 1;
                break;
            }
        
            case 5: {
                repeticao = 1;
                break;
            }
        
            case 6:{
                printf ("\nSaindo da Agenda!\n");
                repeticao = 0;
                break;
            }
        
            default: {
                printf ("\nOpcao invalida, tente novamente.\n\n");
                repeticao = 1;
                break;
            }
        }
    }while (repeticao == 1);
    
    printf ("\nAgenda finalizada com sucesso!");

    return 0;
} 
