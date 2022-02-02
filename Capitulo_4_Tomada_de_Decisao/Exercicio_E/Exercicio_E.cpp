/* Capitulo 4 - Exercicio E */

#include<stdio.h>

int main (void){
	
	int A, B;
	
	printf ("Digite o valor de A: "); scanf ("%d", &A);
	printf ("Digite o valor de B: "); scanf ("%d", &B);
	
	if (A >= B){
		printf ("\nDiferenca: %d", A - B);
	}
	else{
		printf ("\nDiferenca: %d", B - A);
	}
	
	return 0;
}
