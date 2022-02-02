//Capitulo 3 - Exercicio F
#include <stdio.h>

int main (void){
	
	int A, B, aux;
	
	printf ("Digite o valor de A: "); scanf("%d", &A);
	printf ("Digite o valor de B: "); scanf ("%d", &B);
	
	aux = B;
	B = A;
	A = aux;
	
	printf ("A = %d\n", A);
	printf ("B = %d", B);
	
	return 0;
}
