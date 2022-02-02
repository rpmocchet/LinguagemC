/*  Teste % */

#include <stdio.h>

int main (void){
	
	int N;
	
	printf ("Digite um valor para N: "); scanf ("%d", &N);
	
	if ((N % 4 == 0) && (N % 5 == 0)){
		printf ("\nValor %d e divisivel por 4 e 5.", N);
	}
	
	else{
		printf ("\nO valor %d nao e divisivel por 4 e 5!", N);
	}
	return 0;
}
