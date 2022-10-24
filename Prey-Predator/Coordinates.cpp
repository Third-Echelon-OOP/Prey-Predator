#include "Coordinates.h"

Coordinates::Coordinates() {
    x = 0;
    y = 0;
}

Coordinates::Coordinates(int x, int y) {
    this->x = x;
    this->y = y;
}

Coordinates Coordinates::operator +(Coordinates const& arg) {
    Coordinates res;
    res.x = x + arg.x;
    res.y = y + arg.y;
    return res;
}

Coordinates Coordinates::operator -(Coordinates const& arg) {
    Coordinates res;
    res.x = x - arg.x;
    res.y = y - arg.y;
    return res;
}

int Coordinates::getX()
{
    return x;
}

int Coordinates::getY()
{
    return y;
}

void Coordinates::setX(int newX)
{
    x = newX;
}

void Coordinates::setY(int newY)
{
    y = newY;
}
