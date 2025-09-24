#pragma once
class Entidad
{
protected:
    int x, y;
    int dx, dy;
public:
    Entidad();
    ~Entidad();
    int getX() { return x; };
    int getY() { return y; };
    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }
    virtual void borrar() {};
    virtual void mover() {};
    virtual void dibujar() {};
    virtual bool colision() {};
};