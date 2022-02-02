//Capitulo 3 - Exercicio A
#include <stdio.h>

int main (void){
	
	int A, B, C, D;
	
	printf ("Digite o valor de A: "); scanf ("%d", &A);
	printf ("Digite o valor de B: "), scanf ("%d", &B);
	printf ("Digite o valor de C: "), scanf ("%d", &C);
	printf ("Digite o valor de D: "), scanf ("%d", &D);
	
	printf ("\nResultados Adicao: \n");
	printf ("A + B = %d \n", A + B);
	printf ("A + C = %d \n", A + C);
	printf ("A + D = %d \n", A + D);
	printf ("B + C = %d \n", B + C);
	printf ("B + D = %d \n", B + D);
	printf ("C + D = %d \n", C + D);
	
	printf ("\nResultados Multiplicacao: \n");
	printf ("A * B = %d \n", A * B);
	printf ("A * C = %d \n", A * C);
	printf ("A * D = %d \n", A * D);
	printf ("B * C = %d \n", B * C);
	printf ("B * D = %d \n", B * D);
	printf ("C * D = %d \n", C * D);
	
	return 0;
}
