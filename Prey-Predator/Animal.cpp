//
// Created by PC1 on 21.10.2022.
//

#include "Animal.h"
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

Animal::Animal()
{
    position = Coordinates();
    alive = true;
    num_of_animals++;
}
Animal::Animal(int x, int y)
{
    position = Coordinates(x, y);
    alive = true;
    num_of_animals++;
}
int Animal::get_x()
{
    return position.getX();
}
int Animal::get_y()
{
    return position.getY();
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
    position.setX(x);
}
void Animal::set_y(int y)
{
    position.setY(y);
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
    return sqrt(pow(2,position.getX()-x)+pow(2,position.getY()-y));
}

void Animal::wandering()
{
    int rand_side = rand()%4+1;
    switch(rand_side)
    {
        case 1:
            set_x(get_x()+1);
            break;
        case 2:
            set_x(get_x()-1);
            break;
        case 3:
            set_y(get_y()+1);
            break;
        case 4:
            set_y(get_y()-1);
            break;
    }
}
void Animal::move_to(Coordinates& pos)
{
    int x,y;
    x = (get_x() - pos.getX())/1;
    y = (get_y() - pos.getY())/1;
    for(int i=0;i<=max(x,y);i++)
    {
        if(get_x()<pos.getX())set_x(get_x()+1);
        else if(get_x()>pos.getX())set_x(get_x()-1);
        if(get_y()<pos.getY())set_y(get_y()+1);
        else if(get_y()>pos.getY())set_y(get_y()-1);
    }
}