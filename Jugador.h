#pragma once
#include "Entidad.h"
#include <iostream>
#include <conio.h>

using namespace System;
using namespace std;

class Jugador : public Entidad
{
protected:
	int confianza;
public:
	Jugador(int x, int y) : Entidad(x, y) { confianza = 0; Entidad::ancho = 3; Entidad::alto = 3; };
	~Jugador() {};

	void mover(char tecla) override {
		if (tecla == 'a' && x > 0) { x--; }
		if (tecla == 'd' && x + ancho < 120) { x++; }
		if (tecla == 'w' && y > 0) { y--; }
		if (tecla == 's' && y + alto < 40) { y++; }
		//falta analisis de colisiones 
	};

	bool colision() {
		return true;
	}; //necesito el mapa para poder hacer las colisiones

	void dibujar() {

	};

	void interactuar() {

	};

	//getters y setters
	int getPuntos() { return confianza; };
	int getAncho() { return ancho; };
	int getAlto() { return alto; };
	void setPuntos(int p) { confianza = p; };
};