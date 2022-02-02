/*Ordena 2 variaveis em ordem crescente*/
#include<stdio.h>

int main (void){
	
	int A, B, Aux;
	
	printf ("Digite o valor de A: "); scanf ("%d", &A);
	printf ("Digite o valor de B: "); scanf ("%d", &B);
	
	if (A > B){
		Aux = A;
		A = B;
		B = Aux;
	}
	
	printf ("\nOs valores em ordem crescente sao: %d e %d", A, B);
	
	return 0;
}
