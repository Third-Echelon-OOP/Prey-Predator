//
// Created by PC1 on 21.10.2022.
//

#include "Animal.h"
#include <cmath>
#include <cstdlib>
#include <ctime>
Animal::Animal()
{
    position.x = 0;
    position.y = 0;
    alive = true;
    num_of_animals++;
}
Animal::Animal(int x, int y)
{
    position.x = x;
    position.y = y;
    alive = true;
    num_of_animals++;
}
int Animal::get_x()
{
    return position.x;
}
int Animal::get_y()
{
    return position.y;
}
void Animal::death()
{
    alive = false;
}
void Animal::live()
{
    alive = true;
}
void Animal::set_x(int x)
{
    position.x = x;
}
void Animal::set_y(int y)
{
    position.y = y;
}
bool Animal::get_alive()
{
    return alive;
}
int Animal::get_num_of_animals()
{
    return num_of_animals;
}
double Animal::Distance_between_objects(int x, int y)
{
    return sqrt(pow(2,position.x-x)+pow(2,position.y-y));
}