/* Capitulo 6 Parte 4 Exercicio */ 
#include <stdio.h>
#include <string.h>

int main()
{
    struct Cadastro{
        char nome[41], email[100], telefone[12];
    };
    
    struct Cadastro Agenda[10], x;
    
    int i, j, loop, acha;
    char resp, pesq[41];
    
    resp ='s';
    loop = 1;
    
    printf ("Bem-vindo a Agenda Eletrônica!\n\n");
    
    do{
        printf ("Digite a opcao desejada:\n");
        printf ("1 - Cadastro de contatos.\n");
        printf ("2 - Pesquisa por nome.\n");
        printf ("3 - Listagem dos nomes.\n");
        scanf ("%d", &loop);
        
        if (loop == 1){
            printf ("\nDigite os dados conforme segue:\n");
    
            for (i=0; i<10; i++){
                printf ("\nDigite o nome do %do contato: ", i+1);
                fflush(stdin);
                scanf ("%s", Agenda[i].nome);
        
                printf ("Digite o endereco de email do %do contato: ", i+1);
                fflush (stdin);
                scanf ("%s", Agenda[i].email);
        
                printf ("Digite o numero de telefone do %do contato: ", i+1);
                fflush (stdin);
                scanf ("%s", Agenda[i].telefone);
            }
    
            for (i=0; i<9; i++){
                for (j=i+1; j<10; j++)
                if (strcmp(Agenda[i].nome, Agenda[j].nome) > 0){
                    x = Agenda[i];
                    Agenda[i] = Agenda[j];
                    Agenda[j] = x;
                }
            }
        }
        
        if (loop == 2){
            printf ("\nDigite o nome do contato desejado: ");
            fflush(stdin);
            scanf ("%s", pesq);
            acha = 0;
            
            while (i<10 && acha == 0){
                if (strcmp(pesq,Agenda[i].nome) == 0){
                    acha = 1;
                }
                else{
                    i++;
                }
            }
                
            if (acha == 1){
                printf ("\nNome: %s", Agenda[i].nome);
                printf ("\nEmail: %s", Agenda[i].email);
                printf ("\nTelefone: %s\n", Agenda[i].telefone); 
            }
            else{
                printf ("\nContato nao encontrado!\n");
            }  
        }
        
        if (loop == 3){
            printf ("Os contatos da sua Agenda sao:");
            for (i=0; i<10; i++){
                printf ("\n%s", Agenda[i].nome);
            }
        }
        
        printf ("\n\nDigite a opcao desejada:");
        printf ("\nDeseja continuar? [S]im ou [N]ao.\n");
        fflush(stdin); scanf ("%s", &resp);
        
    }while(resp == 's' || resp == 'S');

    return 0;
}

