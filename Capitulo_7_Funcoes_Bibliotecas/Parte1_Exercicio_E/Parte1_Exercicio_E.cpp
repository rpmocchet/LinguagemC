 /* Capitulo 7 Exerecicio E */
#include <stdio.h>
#include <math.h>

void potencia (float x, float y);

int main()
{
    float n, a;
    
    printf ("Digite um numero: ");
    fflush(stdin); scanf ("%f", &n);
    
    printf ("Digite a potencia: ");
    fflush(stdin); scanf ("%f", &a);
    
    potencia (n,a);

    return 0;
}

void potencia (float x, float y){
    
    printf ("\n%.2f elevado a %.2fa potencia e: %.2f", x, y, pow(x,y));
    
    return;
}
