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
    x = (get_x() - pos.x)/1;
    y = (get_y() - pos.y)/1;
    for(int i=0;i<=max(x,y);i++)
    {
        if(get_x()<pos.x)set_x(get_x()+1);
        else if(get_x()>pos.x)set_x(get_x()-1);
        if(get_y()<pos.y)set_y(get_y()+1);
        else if(get_y()>pos.y)set_y(get_y()-1);
    }
}