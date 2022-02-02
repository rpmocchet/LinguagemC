/* Capitulo 7 - Exemplo 3 - Calculadora */
#include <stdio.h>
#include "crtw.h"

float A, B, R;

int rotadicao(void);
int rotsubtracao(void);
int rotmultiplicacao(void);
int rotdivisao(void);

void entrada(void);
void saida (void);

float calculo(float x, float y, char operador);

int main(void)
{
    char tecla;
    int opcao = 0;
    
    while (opcao != 5){
    	clear();
        position(1,1); printf ("\nMenu Principal\n");
        position(3,1); printf ("\n1 - Adicao");
        position(4,1); printf ("\n2 - Subtracao");
        position(5,1); printf ("\n3 - Multiplicacao");
        position(6,1); printf ("\n4 - Divisao");
        position(7,1); printf ("\n5 - Fim do Programa");
        
        position(9,1); printf ("\nDigite a opcao desejada: ");
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
    
    position (5,1); printf ("Entre um valor para A: ");
    fflush (stdin); scanf ("%f", &A);
    
    position (6,1); printf ("Entre um valor para B: ");
    fflush (stdin); scanf ("%f", &B);
    return;
}

void saida (void){
    position (9,1); printf ("\nO resultado entre A e B: %.2f\n", R);
    position (11,1); printf ("\nTecle <Enter> para voltar ao menu principal.\n");
    getchar() + scanf ("Enter");
    return;
}

float calculo(float x, float y, char operador){
	float result;
	
	switch (operador){
		case '+': result = x + y; break;
		case '-': result = x - y; break;
		case '*': result = x * y; break;
		case '/': result = x / y; break;
	}
	
	return result;
}

int rotadicao(void){
	clear();
    position(1,1); printf ("\nRotina de Soma\n");
    entrada();
    R = calculo (A, B, '+');
    saida();
    return 0;
}

int rotsubtracao(void){
    clear();
    position(1,1); printf ("\nRotina de Subtracao\n");
    entrada();
    R = calculo (A, B, '-');
    saida();
    return 0;
}

int rotmultiplicacao(void){
    clear();
    position(1,1); printf ("\nRotina de Multiplicacao\n");
    entrada();
    R = calculo (A, B, '*');
    saida();
    return 0;
}

int rotdivisao(void){
    clear();
    position(1,1); printf ("\nRotina de Divisao\n");
    entrada();
    
    if (B == 0){
        position (9,1); printf ("\nErro na Divisao!\n");
        position(11,1); printf ("\nTecle <Enter> para voltar ao menu principal.\n");
        getchar() + scanf ("Enter");
    }
    
    else{
        R = calculo (A, B, '/');
        saida();
    }
    return 0;
}
