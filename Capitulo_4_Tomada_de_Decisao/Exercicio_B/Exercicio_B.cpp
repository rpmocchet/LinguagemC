/* Capitulo 4 - Exercicio B */

#include<stdio.h>
#include<math.h>

int main (void){
	
	int A, B, C;
	float delta, x1, x2;
	
	printf ("Digite o valor de A: "); scanf ("%d", &A);
	printf ("Digite o valor de B: "); scanf ("%d", &B);
	printf ("Digite o valor de C: "); scanf ("%d", &C);
	
	if (A > 0){
		delta = (pow(B,2)) - (4 * A * C);
		
		if (delta > 0){
			x1 = (- B + (sqrt(delta)))/ (2 * A);
			
			x2 = (- B - (sqrt(delta)))/ (2 * A);
			
			printf ("\nO valor de X1 e: %.2f", x1);
			printf ("\nO valor de X2 e: %.2f", x2);
			
		}
		else{
			printf ("\nEquacao de segundo grau tem como resultado um numero nao real.");
		}
		
	}
	else {
		printf ("\nO valor de A nao pode ser 0!");
	}
	
	return 0;
}
