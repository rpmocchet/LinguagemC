/* Teste ! */

#include <stdio.h>

int main (void){
	
	int A;
	
	printf  ("Digite um valor positivo: "); scanf ("%d", &A);
	
	if (!(A >= 0)){
		printf ("\nValor INVALIDO!\nVoce nao digitou um valor positivo");
	}
	else {
		printf ("\nValor VALIDO!\nVoce digitou o valor %d", A);
	}
	
	return 0;
}
