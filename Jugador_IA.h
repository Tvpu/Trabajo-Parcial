#pragma once
#include "Jugador.h"
#include <iostream>

class Jugador_IA : public Jugador
{
public:
	Jugador_IA(int x, int y) : Jugador(x, y) {};
	~Jugador_IA() {};
	void dibujar() override {
		Console::SetCursorPosition(x, y); cout << char(219) << char(219) << char(219);
		Console::SetCursorPosition(x, y + 1); cout << "/" << char(190) << "\\";
		Console::SetCursorPosition(x, y + 2); cout << " " << char(226);
	};
};

