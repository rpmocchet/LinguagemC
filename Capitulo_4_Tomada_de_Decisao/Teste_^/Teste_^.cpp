/* Teste ^ */
#include<stdio.h>

int main (void){
	
	int S1, S2;
	
	printf ("[1] = Masculino\n[2] = Feminino\n");
	printf ("\nDigite o sexo do 1o participante: "); scanf ("%d", &S1);
	printf ("Digite o sexo do 2o participante: "); scanf ("%d", &S2);
	
	if (((S1 == 1) && (S2 == 2)) || ((S1 == 2) && (S2 == 1))){
		printf ("\nPar formado com sucesso!");
	}
	else {
		printf ("\nPar INVALIDO!");
	}
	
	return 0;
}
