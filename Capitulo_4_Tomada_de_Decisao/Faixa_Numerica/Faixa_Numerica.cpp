/*Faixa Numérica*/
#include<stdio.h>

int main (void){
	
	int A, B;
	
	printf ("Digite um valor para A: "); scanf ("%d", &A);
	printf ("Digite um valor para B: "); scanf ("%d", &B);
	
	if (A + B >= 10){
		printf ("\nResultado >= 10: %d", A + B + 5);
	}
	else {
		printf ("\nResultado < 10: %d", A + B - 7);
		
	}
	
	return 0;
}
