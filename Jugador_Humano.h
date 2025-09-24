#pragma once
#include "Jugador.h"
#include <iostream>


class Jugador_Humano : public Jugador
{
	public:
	Jugador_Humano(int x, int y) : Jugador(x, y) {};
	~Jugador_Humano() {};
	void dibujar() override {
		Console::SetCursorPosition(x, y); cout << " O" << endl;
		Console::SetCursorPosition(x, y + 1); cout << "/" << char(219) << "\\" << endl;
		Console::SetCursorPosition(x, y + 2); cout << "/" << " \\";
	};
};

