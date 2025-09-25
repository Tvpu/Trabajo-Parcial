#pragma once
//mundos.h
#include <iostream>
#include <Windows.h>

using namespace std;
using namespace System;

class Mundos{
protected:
	int mapa[40][120];
public:
    Mundos(const int mundo[40][120]){
        for (int i = 0; i < 40; i++)
        {
            for (int j = 0; j < 120; j++)
            {
                mapa[i][j] = mundo[i][j];
            }
        }
    }

	virtual void dibujar() = 0;
};