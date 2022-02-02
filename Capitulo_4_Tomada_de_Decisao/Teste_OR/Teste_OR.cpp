/* Teste || */
#include<stdio.h>

int main (void){
	
	int CODE;
	
	printf("Digite o CODIGO: "); scanf ("%d", &CODE);
	
	if (CODE == 1 || CODE == 2 || CODE == 3){
		if (CODE == 1){
			printf ("\nCodigo 1!");
		}
		if (CODE == 2){
			printf ("\nCodigo 2!");
		}
		if (CODE == 3) {
			printf ("\nCodigo 3!");
		}
	}
	else {
		printf ("\nCodigo INVALIDO!");
	}
	
	return 0;
}
