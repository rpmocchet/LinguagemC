/* Capitulo 7_Exercicio_D */ 
#include <stdio.h>
 
void calculo(float a, float b, float c);
 
int main()
{
    float V, TX, T;
    char resp = 's';
    
    do{
        printf ("Digite o valor em reais: R$ ");
        fflush(stdin); scanf ("%f", &V);
    
        printf ("Digite a porcentagem de atraso por dia: ");
        fflush(stdin); scanf ("%f", &TX);
    
        printf ("Digite o numero de dias em atraso: ");
        fflush(stdin); scanf ("%f", &T);
    
        calculo (V, TX, T);
        
        printf ("\n\nDeseja cotinuar? [S]im ou [N]ao.");
        fflush (stdin); scanf ("%s", &resp);
    }while (resp == 's' || resp == 'S');
 
    return 0;
}
 
void calculo (float a, float b, float c){
    float P;
    P = a + (a * (b/100) * c);
    printf ("\nO valor da parcela em atraso e: R$ %.2f", P);
    
    return;
}
