#pragma once
#pragma once
#include <iostream>
#include <conio.h>

using namespace System;
using namespace std;

class Entidad
{
protected:
    int x, y;
    int dx, dy;
    int ancho, alto;
public:
    Entidad(int x, int y) { this->x = x; this->y = y; };
    ~Entidad() {};
    int getX() { return x; };
    int getY() { return y; };

    virtual void borrar(int alto, int ancho) {
        for (int i = 0; i < alto; i++){   
            for (int j = 0; j < ancho; j++){
                Console::SetCursorPosition(x + j, y + i);
                cout << " ";
            }
        }
    };
    virtual void mover() {};
    virtual void dibujar() {};
    virtual bool colision() { return true;  }; //para que no de bugs, le pongo un valor random
};