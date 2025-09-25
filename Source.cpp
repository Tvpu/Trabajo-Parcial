#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Enemigos.h"
#include "Entidad.h"
#include "Jugador.h"
#include "Jugador_Humano.h"
#include "Jugador_IA.h"


using namespace System;
using namespace std;

void pruebas() {
	//se puede cambiar el Jugador_IA por el Jugador_humano, ambos funcionan
	Jugador_Humano* j = new Jugador_Humano(60, 20);
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
	Console::SetWindowSize(120, 40);
	pruebas();
	return 0;
}