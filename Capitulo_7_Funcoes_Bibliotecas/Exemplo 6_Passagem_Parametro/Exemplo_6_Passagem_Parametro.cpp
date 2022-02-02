/* Capitulo 7 - Exemplo 6 - Funcao com Passagem de Parametro */

#include <stdio.h>

int ordena (int *A, int *B);

int main (void){
	
	int Matriz[10], i, j;
	
	printf ("Entre com os numeros conforme abaixo:\n");
	
	for (i=0; i<10; i++){
		printf ("Digite o %do numero: ", i+1);
		fflush (stdin); scanf ("%d", &Matriz[i]);
	}
	
	for (i=0; i<9; i++){
		for (j=i+1; j<10; j++){
			ordena (&Matriz[i], &Matriz[j]);
		}
	}
	
	printf ("\nOs dados ordenados sao:\n");
	for (i=0; i<10; i++){
		printf ("\nNumero %d: %d", i+1, Matriz[i]);
	}
	
	return 0;
}

int ordena (int *A, int *B){
	int x;
	
	if (*A > *B){
		x = *A;
		*A = *B;
		*B = x;
	}
	
	return 0;
}
