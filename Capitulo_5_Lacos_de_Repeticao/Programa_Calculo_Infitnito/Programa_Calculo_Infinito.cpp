/* Programa Calculo Laço Infinito */

#include<stdio.h>

int main (void){
	
	int controle = 1, num1, num2, resultado;
	
	
	while (controle == 1) {
		
		printf ("\nDigite o primeiro numero: "); scanf ("%d", &num1);
		printf ("Digite o segundo numero: "); scanf ("%d", &num2);
		
		printf ("\nO resultado da some e: %d\n\n", num1 + num2);
		
		printf ("\nContinuar = [1]\nParar = [2]\nDigite a opcao desejada: "); scanf("%d", &controle);	
	}
	
	return 0;
}
