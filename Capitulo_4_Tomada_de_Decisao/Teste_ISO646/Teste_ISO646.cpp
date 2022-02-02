/* Teste ISO 646 */
#include <stdio.h>
#include <iso646.h>

int main (void){
	
	int num;
	
	printf ("Digite um valor entre 0 e 9: "); scanf ("%d", &num);
	
	if (num >= 0 and num <= 9) {
		printf ("\nValor na faixa de 0 a 9!");
	}
	else {
		printf ("\nValor FORA da faixa de 0 a 9!");
	}
	
	return 0;
}
