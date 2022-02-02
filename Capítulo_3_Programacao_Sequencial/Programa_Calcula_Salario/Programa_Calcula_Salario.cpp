//Programa Calcula Salário
#include <stdio.h>

int main (void){
	
	float HORA_TRAB, VALOR_HORA, PERC_DESC, BRUTO, DESCONTO, LIQUIDO;
	
	printf ("Digite a quantidade de HORAS TRABALHADAS: ");
	scanf ("%f", &HORA_TRAB);
	printf ("Digite o valor da HORA TRABALHADA: ");
	scanf ("%f", &VALOR_HORA);
	printf ("Digite o PERCENTUAL DE DESCONTO: ");
	scanf ("%f", &PERC_DESC);
	
	BRUTO = HORA_TRAB * VALOR_HORA;
	DESCONTO = BRUTO * (PERC_DESC / 100);
	LIQUIDO = BRUTO - DESCONTO;
	
	printf ("SALARIO BRUTO: R$ %0.2f \n", BRUTO);
	printf ("VALOR DESCONTO: R$ %0.2f \n", DESCONTO);
	printf ("SALARIO LIQUIDO: R$ %0.2f \n", LIQUIDO);
	
	return 0;
}
