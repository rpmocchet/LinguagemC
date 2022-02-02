/* TESTE && */
#include<stdio.h>

int main (void){
	
	int N;
	
	printf ("Digite um valor para N: "); scanf ("%d", &N);
	
	if (N >= 0 && N <= 9){
		printf ("\nValor VALIDO!");
	}
	else {
		printf ("\nValor INVALIDO!");
	}
	
	return 0;
}
