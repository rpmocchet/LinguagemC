//Capitulo 3 - Exercicio D
#include <stdio.h>

int main (void){
	
	float C, F;
	
	printf ("Digite a temperatura em graus Fahrenheit: "); scanf ("%f", &F);
	
	C = (((F - 32)* 5) / 9);
	
	printf ("\nTemperatura em Fahrenheit: %.2f F.\n", F);
	printf ("Temperatura em Celsius: %.2f C.", C);
	
	return 0;
}
