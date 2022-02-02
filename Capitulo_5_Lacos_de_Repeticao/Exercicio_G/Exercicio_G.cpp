/* Capitulo 5 - Exercicio G */
#include <stdio.h>

int main()
{
	int fibo_anterior = 0, fibo_atual = 0, fibo_proximo;
	
    for (int i = 0; i <= 15; i++){
    	
        if (i == 0){
        	
        	fibo_proximo = 1;
			}
			
        else {
        	
            fibo_proximo = fibo_anterior + fibo_atual;
        }
        
        printf ("%d\n", fibo_proximo);
        fibo_anterior = fibo_atual;
        fibo_atual = fibo_proximo;
    }
   
    return 0;
}

