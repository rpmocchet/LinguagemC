/* Verifica Triangulo */
#include <stdio.h>

int main (void){
	
	int A, B, C;
	
	printf ("Digite o valor do primeiro lado: "); scanf ("%d", &A);
	printf ("Digite o valor do segundo lado: "); scanf ("%d", &B);
	printf ("Digite o valor do ultimo lado: "); scanf ("%d", &C);
	
	if ((A < B + C) && (B < A + C) && (C < A + B)){
		
		if ((A == B) && (B == C)){
			printf ("\nO triangulo e EQUILATERO!");
		}
		
		else if ((A == B) || (A == C) || (B == C)){
			printf ("\nO triangulo e ISOCELES!");
		}
		
		else{
			printf ("\nO triango e ESCALENO!");
		}
	}
	
	else {
		printf("\nOs lados informados nao formam um triangulo! Tente novamente.");
	}
	
	return 0;
}
