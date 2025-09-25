#pragma once
#include "Jugador.h"
#include <iostream>

class Jugador_IA : public Jugador
{
public:
	Jugador_IA(int x, int y) : Jugador(x, y) {};
	~Jugador_IA() {};
	void dibujar() override {
		Dibujar_IA();
	};
};
