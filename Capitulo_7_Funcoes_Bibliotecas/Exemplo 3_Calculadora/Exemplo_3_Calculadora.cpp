/* Capitulo 7 - Exemplo 3 - Calculadora */
#include <stdio.h>

float A, B, R;

int rotadicao(void);
int rotsubtracao(void);
int rotmultiplicacao(void);
int rotdivisao(void);

void entrada(void);
void saida (void);

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
            
            switch (opcao){
                case 1: rotadicao(); break;
                case 2: rotsubtracao(); break;
                case 3: rotmultiplicacao(); break;
                case 4: rotdivisao(); break;
                default: {
                    printf ("\nOpcao invalida!\n");
                    printf ("\nTecle <Enter> para voltar ao menu principal.");
                    getchar() + scanf ("Enter"); break;
                }
            }
        }
    }
    
    printf("\n\nPrograma Finalizado com Sucesso!\n");
    
    return 0;
}

void entrada (void){
    
    printf ("Entre um valor para A: ");
    fflush (stdin); scanf ("%f", &A);
    
    printf ("Entre um valor para B: ");
    fflush (stdin); scanf ("%f", &B);
    return;
}

void saida (void){
    printf ("\nO resultado entre A e B: %.2f\n", R);
    printf ("\nTecle <Enter> para voltar ao menu principal.\n");
    getchar() + scanf ("Enter");
    return;
}

int rotadicao(void){
    printf ("\nRotina de Soma\n");
    entrada();
    R = A + B;
    saida();
    return 0;
}

int rotsubtracao(void){
    printf ("\nRotina de Subtracao\n");
    entrada();
    R = A - B;
    saida();
    return 0;
}

int rotmultiplicacao(void){
    printf ("\nRotina de Multiplicacao\n");
    entrada();
    R = A * B;
    saida();
    return 0;
}

int rotdivisao(void){
    printf ("\nRotina de Divisao\n");
    entrada();
    
    if (B == 0){
        printf ("\nErro na Divisao!\n");
        printf ("\nTecle <Enter> para voltar ao menu principal.\n");
        getchar() + scanf ("Enter");
    }
    
    else{
        R = A / B;
        saida();
    }
    return 0;
}
