 /* Capitulo 7 - Exemplo 1  - Calculadora*/
#include <stdio.h>

float A, B;

int rotadicao(void);
int rotsubtracao(void);
int rotmultiplicacao(void);
int rotdivisao(void);

int main(void)
{
    char tecla;
    int opcao = 0;
    
    while (opcao != 5){
        printf ("\nMenu Principal\n");
        printf ("\n1 - Adicao");
        printf ("\n2 - Subtracao");
        printf ("\n3 - Multiplicacao");
        printf ("\n4 - Divisao");
        printf ("\n5 - Fim do Programa");
        
        printf ("\nDigite a opcao desejada: ");
        fflush (stdin); scanf ("%d", &opcao);
        
        if (opcao != 5){
            if(opcao == 1){
                rotadicao();
            }
            
            if (opcao == 2){
                rotsubtracao();
            }
            
            if (opcao == 3){
                rotmultiplicacao();
            }
            
            if (opcao == 4){
                rotdivisao();
            }
            
            else{
                printf ("\nOpcao invalida! Tente novamente.\n\n");
            }
        }
    }
    
    printf("\n\nPrograma Finalizado com Sucesso!\n");
    
    return 0;
}

int rotadicao(void){
    printf ("\nRotina de Soma\n");
    printf ("Entre um valor para A: ");
    fflush (stdin); scanf ("%f", &A);
    
    printf ("Entre um valor para B: ");
    fflush (stdin); scanf ("%f", &B);
    
    printf ("\nO resultado da soma entre A e B: %.2f\n", A+B);
    
    printf ("\nTecle <Enter> para voltar ao menu principal.\n");
    getchar() + scanf ("Enter");
    return 0;
}

int rotsubtracao(void){
    printf ("\nRotina de Subtracao\n");
    printf ("Entre um valor para A: ");
    fflush (stdin); scanf ("%f", &A);
    
    printf ("Entre um valor para B: ");
    fflush (stdin); scanf ("%f", &B);
    
    printf ("\nO resultado da subtracao entre A e B: %.2f\n", A-B);
    
    printf ("\nTecle <Enter> para voltar ao menu principal.\n");
    getchar() + scanf ("Enter");
    return 0;
}

int rotmultiplicacao(void){
    printf ("\nRotina de Multiplicacao\n");
    printf ("Entre um valor para A: ");
    fflush (stdin); scanf ("%f", &A);
    
    printf ("Entre um valor para B: ");
    fflush (stdin); scanf ("%f", &B);
    
    printf ("\nO resultado da multiplicacao entre A e B: %.2f\n", A*B);
    
    printf ("\nTecle <Enter> para voltar ao menu principal.\n");
    getchar() + scanf ("Enter");
    return 0;
}

int rotdivisao(void){
    printf ("\nRotina de Divisao\n");
    printf ("Entre um valor para A: ");
    fflush (stdin); scanf ("%f", &A);
    
    printf ("Entre um valor para B: ");
    fflush (stdin); scanf ("%f", &B);
    
    if (B == 0){
        printf ("\nErro na Divisao!\n");
    }
    
    else{
        printf ("\nO resultado da divisao entre A e B: %.2f\n", A/B);
    }
    
    printf ("\nTecle <Enter> para voltar ao menu principal.\n");
    getchar() + scanf ("Enter");
    return 0;
} 
