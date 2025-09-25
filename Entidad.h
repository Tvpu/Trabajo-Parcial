#pragma once
#include <iostream>
#include <conio.h>

using namespace System;
using namespace std;

class Entidad
{
protected:
    int x, y;
    int ancho, alto;
public:
    Entidad(int x, int y) : x(x), y(y) {}
    ~Entidad() {};

    void borrar(int alto, int ancho) {
        for (int i = 0; i < alto; i++) {
            for (int j = 0; j < ancho; j++) {
                Console::SetCursorPosition(x + j, y + i);
                cout << " ";
            }
        }
    };
    virtual void mover(char) {};
    virtual void dibujar() {};
    virtual bool colision() { return true; }; //para que no de bugs, le pongo un valor random

    //getters y setters
    int getX() { return x; };
    int getY() { return y; };

    //dibujos especificos
    void Dibujar_Humano() {
        Console::SetCursorPosition(x, y); cout << char(219) << char(219) << char(219);
        Console::SetCursorPosition(x, y + 1); cout << "/" << char(190) << "\\";
        Console::SetCursorPosition(x, y + 2); cout << " " << char(226);
    };
    void Dibujar_IA() {
        Console::SetCursorPosition(x, y); cout << char(219) << char(219) << char(219);
        Console::SetCursorPosition(x, y + 1); cout << "/" << char(190) << "\\";
        Console::SetCursorPosition(x, y + 2); cout << " " << char(226);
    };
};