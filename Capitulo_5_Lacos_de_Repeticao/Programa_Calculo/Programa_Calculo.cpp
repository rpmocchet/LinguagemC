/* Programa Calculo */

#include<stdio.h>

int main (void){
	
	int controle = 0, num1, num2, resultado;
	
	
	while (controle < 5) {
		
		printf ("Digite o primeiro numero: "); scanf ("%d", &num1);
		printf ("Digite o segundo numero: "); scanf ("%d", &num2);
		
		printf ("\nO resultado da some e: %d\n\n", num1 + num2);
		
		controle ++;
	}
	
	return 0;
}
