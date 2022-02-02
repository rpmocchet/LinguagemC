/* Capitulo 4 - Exercicio A */

#include<stdio.h>

int main (void){
	
	int A, B, C, aux;
	
	printf ("Digite um valor para a variavel A: "); scanf ("%d", &A);
	printf ("Digite um valor para a variavel B: "); scanf ("%d", &B);
	printf ("Digite um valor para a variavel C: "); scanf ("%d", &C);
	
	if ((A > B) or (A > C) or (B > C)){
		
		if (A > B){
			aux = A;
			A = B;
			B = aux;
		}
		
		if (A > C){
			aux = A;
			A = C;
			C = aux;
		}
		
		if (B > C){
			aux = B;
			B = C;
			C = aux;
		}
	}
	
	printf ("%d, %d e %d.", A, B, C);
	
	return 0;
}
