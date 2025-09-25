#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Enemigos.h"
#include "Entidad.h"
#include "Jugador.h"
#include "Jugador_Humano.h"
#include "Jugador_IA.h"

//esto es temporal, luego creo q se puede incluir en el algun.h
#include "mapas.h"

void ubicar(int x, int y) {
	Console::SetCursorPosition(x, y);
}

using namespace System;
using namespace std;

//IA SUPREMA
void IAsuprema(int x, int y) {
	ubicar(x - 5, y - 4); cout << char(201); ubicar(x - 4, y - 4); cout << char(205); ubicar(x - 3, y - 4); cout << char(205); ubicar(x - 2, y - 4); cout << char(205); ubicar(x - 1, y - 4); cout << char(205); ubicar(x, y - 4); cout << char(205); ubicar(x + 1, y - 4); cout << char(205); ubicar(x + 2, y - 4); cout << char(205); ubicar(x + 3, y - 4); cout << char(205);  ubicar(x + 4, y - 4); cout << char(205); ubicar(x + 5, y - 4); cout << char(187);
	ubicar(x - 5, y - 3); cout << char(186); ubicar(x + 5, y - 3); cout << char(186);
	ubicar(x - 5, y - 2); cout << char(186); ubicar(x - 1, y - 2); cout << "\\";  ubicar(x, y - 2); cout << "_"; ubicar(x + 1, y - 2); cout << "/";  ubicar(x + 5, y - 2); cout << char(186);
	ubicar(x - 5, y - 1); cout << char(186); ubicar(x - 2, y - 1); cout << char(220); ubicar(x - 1, y - 1); cout << char(220); ubicar(x + 1, y - 1); cout << char(220); ubicar(x + 2, y - 1); cout << char(220); ubicar(x + 5, y - 1); cout << char(186);
	ubicar(x - 5, y); cout << char(186); ubicar(x - 1, y); cout << char(220); ubicar(x, y); cout << char(220); ubicar(x + 1, y); cout << char(220); ubicar(x + 5, y); cout << char(186);
	ubicar(x - 5, y + 1); cout << char(186); ubicar(x + 5, y + 1); cout << char(186);
	ubicar(x - 5, y + 2); cout << char(186); ubicar(x + 5, y + 2); cout << char(186);
	ubicar(x - 5, y + 3); cout << char(186); ubicar(x + 5, y + 3); cout << char(186);
	ubicar(x - 5, y + 4); cout << char(200); ubicar(x - 4, y + 4); cout << char(205); ubicar(x - 3, y + 4); cout << char(205); ubicar(x - 2, y + 4); cout << char(205); ubicar(x - 1, y + 4); cout << char(205); ubicar(x, y + 4); cout << char(205); ubicar(x + 1, y + 4); cout << char(205); ubicar(x + 2, y + 4); cout << char(205); ubicar(x + 3, y + 4); cout << char(205); ubicar(x + 4, y + 4); cout << char(205); ubicar(x + 5, y + 4); cout << char(188);
}

void imprimirMapa(int mapa[FILAS][COLUMNAS]) {
	for (int fila = 0; fila < FILAS; fila++) {
		for (int columna = 0; columna < COLUMNAS; columna++) {
			ubicar(columna, fila);
			if (mapa[fila][columna] == 1) {
				cout << char(178);
			}
			else if (mapa[fila][columna] == 2) {
				cout << char(176);
			}
			else if (mapa[fila][columna] == 3) {
				cout << "O";
			}
			else if (mapa[fila][columna] == 6) {
				cout << "I";
			}
		}
		cout << endl;
	}
}


void pruebas() {
	//se puede cambiar el Jugador_IA por el Jugador_humano, ambos funcionan
	Jugador_Humano* j = new Jugador_Humano(49, 18);
	Enemigos* e = new Enemigos(10, 10, j);

	e->dibujar();
	j->dibujar();
	//para simular movimientos por ahora
	while (true) {
		if (kbhit()) {
			char tecla = getch();
			tecla = tolower(tecla);
			if (tecla == 'w' || tecla == 'a' || tecla == 's' || tecla == 'd') {
				j->borrar(j->getAlto(), j->getAncho());
				j->mover(tecla);
				j->dibujar();
			}
			else if (e->activar_Dialogo() && tecla == 'e') {
				Console::SetCursorPosition(0, 35); cout << "Enemigo: Hola humano, que tal todo?";
				_sleep(200);
				Console::SetCursorPosition(0, 35); cout << "                                   ";
			}
			_sleep(50);
		}
	}
}

int main() {
	Console::SetBufferSize(COLUMNAS, FILAS);
	Console::SetWindowSize(COLUMNAS, FILAS);
	Console::CursorVisible = false;
	
	IAsuprema(50, 6);
	imprimirMapa(mapa1);
	pruebas();

	system("pause>nul");
	return 0;
}