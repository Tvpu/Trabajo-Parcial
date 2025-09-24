#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Entidad.h"
#include "Jugador.h"
#include "Jugador_Humano.h"
#include "Jugador_IA.h"


using namespace System;
using namespace std;

void pruebas(){
	//se puede cambiar el Jugador_IA por el Jugador_humano, ambos funcionan
	Jugador_IA* j = new Jugador_IA(60, 20);
	j->dibujar();
	//para simular movimientos por ahora
	while (true) {
		if (kbhit()) {
			j->borrar(j->getAlto(), j->getAncho());
			j->mover();
			j->dibujar();
			_sleep(50);
		}
	}
}

int main() {
	Console::SetWindowSize(120, 40);
	pruebas();
	return 0;
}