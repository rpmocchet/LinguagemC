/* Capitulo 4 - Exercicio D */

#include<stdio.h>

int main (void){
	
	float N1, N2, N3, N4, Exame, Media;
	
	printf ("Digite a Nota 1: "); scanf ("%f", &N1);
	printf ("Digite a Nota 2: "); scanf ("%f", &N2);
	printf ("Digite a Nota 3: "); scanf ("%f", &N3);
	printf ("Digite a Nota 4: "); scanf ("%f", &N4);
	
	Media = (N1 + N2 + N3 + N4) / 4;
	
	if (Media >= 7){
		printf ("\nAluno APROVADO com Media %.2f", Media);
	}
	else {
		printf ("\nAluno REPROVADO. Informar nota de EXAME: "); scanf("%f", &Exame);
		
		Media = (N1 + N2 + N3 + N4 + Exame) / 5;
		
		if (Media >= 5){
			printf ("\nAluno APROVADO com Media %.2f", Media);
		}
		else{
			printf ("\nAluno REPROVADO com Media %.2f", Media);
		}
	}
	
	return 0;
}
