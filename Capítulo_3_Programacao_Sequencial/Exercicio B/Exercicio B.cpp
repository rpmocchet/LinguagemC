//Capitulo 3 - Exercicio B
#include <stdio.h>

int main (void){
	
	float TEMPO, V_MEDIA, DIST, LITROS;
	
	printf ("Digite o TEMPO de viagem em HORAS: "); scanf ("%f", &TEMPO);
	printf ("Digite a VELOCIDADE MEDIA durante a viagem em KM/H: "); scanf ("%f", &V_MEDIA);
	
	DIST = TEMPO * V_MEDIA;
	LITROS = DIST / 12;
	
	printf ("\nTempo total de viagem: %.2f Horas", TEMPO);
	printf ("\nVelocidade Media durante viagem: %.2f KM/H", V_MEDIA);
	printf ("\nDistancia percorrida durante a viagem: %.2f KM", DIST);
	printf ("\nConsumo de combustivel durante a viagem: %.2f Litros", LITROS);
	
	return 0;
}
