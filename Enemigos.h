#pragma once
#include "Jugador.h"
#include "Entidad.h"
#include <iostream>
#include <conio.h>

using namespace System;
using namespace std;

class Enemigos : public Entidad
{
protected:
	int dx, dy;
	Jugador* jugador; //para que los enemigos puedan interactuar con el jugador
public:
	Enemigos(int x, int y, Jugador* jugador) : Entidad(x, y) { dx = 0; dy = 0; Entidad::ancho = 3; Entidad::alto = 3; this->jugador = jugador; };
	~Enemigos() {};
	void mover(char p) override {
		/*
		x += dx;
		y += dy;
		if (x <= 0 || x + ancho >= 120) { dx = -dx; }
		if (y <= 0 || y + alto >= 40) { dy = -dy; }
		*/
	};

	bool activar_Dialogo() {
		if (x + ancho + 1 < jugador->getX() &&
			x - 1 < jugador->getX() + jugador->getAncho() &&
			y + alto + 1 < jugador->getY() &&
			y - 1 < jugador->getY() + jugador->getAlto()) {
			return true;
		}
		else {
			return false;
		}
	};

	void dibujar() override {
		Dibujar_IA();
	};
};
