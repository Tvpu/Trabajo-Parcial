#pragma once
#include "Jugador.h"
#include <iostream>


class Jugador_Humano : public Jugador
{
public:
	Jugador_Humano(int x, int y) : Jugador(x, y) {};
	~Jugador_Humano() {};
	void dibujar() override {
		Dibujar_Humano();
	};
};
