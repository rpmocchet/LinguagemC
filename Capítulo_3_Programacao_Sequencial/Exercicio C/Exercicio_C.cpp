//Capitulo 3 - Exercicio C
#include <stdio.h>

int main (void){
	
	float C, F;
	
	printf ("Digite a temperatura em graus Celsius: "); scanf ("%f", &C);
	
	F = ((9 * C)+ 160) / 5;
	
	printf ("\nTemperatura em Celsius: %.2f C.\n", C);
	printf ("Temperatura em Fahrenheit: %.2f F.", F);
	
	return 0;
}
