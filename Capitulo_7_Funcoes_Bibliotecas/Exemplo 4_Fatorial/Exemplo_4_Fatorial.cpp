/* Capitulo 7 - Exemplo 4 - Fatorial */
#include <stdio.h>

void fatorial (int N);
int main(void)
{
    int limite;
    
    printf ("Digite o numero desejado: ");
    fflush (stdin); scanf ("%d", &limite);
    fatorial (limite);
    
    printf ("\nTecle <Enter> para finalizar.");
    getchar () + scanf ("Enter");
    
    return 0;
}

void fatorial (int N){
    int i, fatorial = 1;
    for (i=1; i<=N; i++){
        fatorial *= i;
    }
    
    printf ("\nFatorial de %d: %d\n", N, fatorial);
    
    return;
}

/* Capitulo 7 - Exemplo 5 - Fatorial */
#include <stdio.h>

int fatorial (int N);
int main(void)
{
    int limite;
    
    printf ("Digite o fatorial desejado: ");
    fflush (stdin); scanf ("%d", &limite);
    
    printf ("\nFatorial de %d: %d\n", limite, fatorial (limite));
    
    printf ("\nTecle <Enter> para finalizar.");
    getchar () + scanf ("Enter");
    
    return 0;
}

int fatorial (int N){
    int i, fatorial = 1;
    for (i=1; i<=N; i++){
        fatorial *= i;
    }
    
    return fatorial;
}
