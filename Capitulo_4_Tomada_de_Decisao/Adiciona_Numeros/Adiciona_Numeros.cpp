/*Adiciona Números e printa se soma >= 10*/
#include<stdio.h>

int main (void){
	
	int A, B;
	
	printf ("Digite o valor de A: "); scanf ("%d", &A);
	printf ("Digite o valor de B: "); scanf ("%d", &B);
	
	if (A + B >= 10){
		printf ("\nO valor de A + B e: %d", A + B);
	}
	
	return 0;
}
