/* Capitulo 7_Exercicio_B */
#include <stdio.h>

int fibonacci (int x);

int main()
{
    int n;
    
    printf ("Digite o numero de termos de fibonacci desejado: ");
    fflush(stdin); scanf ("%d", &n);
    
    printf ("\nA sequencia de fibonacci ate o %do termo e:", n);
    fibonacci(n);

    return 0;
}

int fibonacci (int x){
    int i, fibo_anterior, fibo_atual, fibo_prox;
    
    for (i=0; i<=x; i++){
        if (i<=1){
            fibo_prox = 1;
        }
        else{
            fibo_prox = fibo_anterior + fibo_atual;
        }
        
        printf ("\n%d", fibo_prox);
        
        fibo_anterior = fibo_atual;
        fibo_atual = fibo_prox;
    }
    
    return 0;
}
