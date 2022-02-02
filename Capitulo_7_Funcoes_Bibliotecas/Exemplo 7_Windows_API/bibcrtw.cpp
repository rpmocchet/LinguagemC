/* Biblioteca limpa Tela, Linha e Posiciona Cursor_Windows_API */

#include <stdio.h>
#include <windows.h>

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
	tela = GetStdHandle(STD_OUTPUT_HANDLE);
	POS.X = row - 1;
	POS.Y = line - 1;
	SetConsoleCursorPosition (tela, POS);
	return;
}

void clearline (void){
	HANDLE tela;
	COORD POS;
	CONSOLE_SCREEN_BUFFER_INFO video;
	DWORD escrita = 0;
	tela = GetStdHandle (STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(tela, &video);
	POS.Y = video.dwCursorPosition.Y;
	POS.X = video.dwCursorPosition.X;
	FillConsoleOutputCharacter (tela, 32, 80 - POS.X, POS, &escrita);
	return;
}
