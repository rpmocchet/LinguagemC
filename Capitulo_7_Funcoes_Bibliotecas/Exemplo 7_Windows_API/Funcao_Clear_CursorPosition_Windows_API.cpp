/* Capitulo 7 - Exemplo 7 - Windows API */

#include <stdio.h>
#include <windows.h>

void clear (void);
void position (int line, int row);

int main (void){
	
	clear ();
	position (12,23);
	printf ("Teste de Limpeza e Posicionamento.");
	position (23,1);
	return 0;
}

void clear(void){
	HANDLE tela;
	DWORD escrita = 0;
	COORD POS;
	
	tela = GetStdHandle (STD_OUTPUT_HANDLE);
	POS.X = 0;
	POS.Y = 0;
	FillConsoleOutputCharacter (tela, 32, 80 * 25, POS, &escrita);
	return;
}

void position (int line, int row){
	HANDLE tela;
	COORD POS;
	tela = GetStdHandle (STD_OUTPUT_HANDLE);
	POS.X = row - 1;
	POS.Y = line - 1;
	SetConsoleCursorPosition (tela,POS);
	return;
}
