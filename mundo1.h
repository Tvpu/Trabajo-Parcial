#pragma once
//mundo1.h
#include "Mundos.h"

extern const int mundo_1[40][120];

class mundo1 : public Mundos {
protected:

public:
    mundo1() : Mundos(mundo_1) {};
    void dibujar() override {
        for (int i = 0; i <= 40; i++) {
            for (int j = 0; j <= 120; j++) {
                Console::SetCursorPosition(j, i);
                if (mapa[i][j] == 0) cout << " ";
                else if (mapa[i][j] == 1) cout << char(219); // 
                else if (mapa[i][j] == 2) cout << "*";       // 
                else if (mapa[i][j] == 3) cout << "#";       // 
            }
        }
    }

};