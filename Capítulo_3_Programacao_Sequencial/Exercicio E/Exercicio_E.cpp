//Capitulo 3 - Exercicio E
#include <stdio.h>
#include <math.h>

int main (void){
	
	float Vol, Diam, Alt, pi = 3.14159;
	
	printf ("Digite o valor do DIAMETRO em metro: "); scanf ("%f", &Diam);
	printf ("Digite o valor da ALTURA em metro: "); scanf ("%f", &Alt);
	
	Vol = pi * (pow(Diam / 2,2)) * Alt;
	
	printf ("O valor do VOLUME e: %.2f Litros.", Vol);
	
	return 0;
}
