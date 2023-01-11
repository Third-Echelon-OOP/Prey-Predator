//
// Created by PC1 on 21.10.2022.
//

#include "Animal.h"
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

Animal::Animal()
{
    position = Coordinates();
    alive = true;
    speed = 1;
    hunger = 100;
}
Animal::Animal(int x, int y, int speed)
{
    position = Coordinates(x, y);
    alive = true;
    this->speed = speed;
    hunger=100;
}
int Animal::get_x()
{
    return position.getX();
}
int Animal::get_y()
{
    return position.getY();
}
void Animal::death_from_starvation()
{
    if(hunger<=0) alive = false;
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

double Animal::Distance_between_objects(int x, int y)
{
    return sqrt(pow(2,position.getX()-x)+pow(2,position.getY()-y));
}

void Animal::wandering()
{
    int rand_side = rand()%8+1;
    switch(rand_side)
    {
        case 1:
            set_x(get_x() + get_speed());
            break;
        case 2:
            set_x(get_x()- get_speed());
            break;
        case 3:
            set_y(get_y()+ get_speed());
            break;
        case 4:
            set_y(get_y()- get_speed());
            break;
        case 5:
            set_y(get_y() + get_speed());
            set_x(get_x() + get_speed());
            break;
        case 6:
            set_y(get_y() - get_speed());
            set_x(get_x() + get_speed());
            break;
        case 7:
            set_y(get_y() - get_speed());
            set_x(get_x() - get_speed());
            break;
        case 8:
            set_y(get_y() + get_speed());
            set_x(get_x() - get_speed());
            break;
    }
}
void Animal::move_to(Coordinates& pos)
{
    int x,y;
    x = (get_x() - pos.getX())/ get_speed();
    y = (get_y() - pos.getY())/ get_speed();
    for(int i=0;i<=max(x,y);i++)
    {
        if(get_x()<pos.getX())set_x(get_x()+ get_speed());
        else if(get_x()>pos.getX())set_x(get_x()- get_speed());
        if(get_y()<pos.getY())set_y(get_y()+ get_speed());
        else if(get_y()>pos.getY())set_y(get_y()- get_speed());
    }
}
void Animal::set_speed(int speed)
{
    this->speed = speed;
}
int Animal::get_speed()
{
    return speed;
}
void Animal::hunger_reduction()
{
    hunger-=10;
}
int Animal::get_hunger(){
    return hunger;
}
void Animal::set_hunger(int hunger)
{
    this->hunger=hunger;
}
void Animal::go_straight_in_random_side()
{
    int rand_side = rand()%8+1;
    for(int i=0;i<10;i++)
    {
        switch(rand_side)
        {
            case 1:
                set_x(get_x() + get_speed());
                break;
            case 2:
                set_x(get_x()- get_speed());
                break;
            case 3:
                set_y(get_y()+ get_speed());
                break;
            case 4:
                set_y(get_y()- get_speed());
                break;
            case 5:
                set_y(get_y() + get_speed());
                set_x(get_x() + get_speed());
                break;
            case 6:
                set_y(get_y() - get_speed());
                set_x(get_x() + get_speed());
                break;
            case 7:
                set_y(get_y() - get_speed());
                set_x(get_x() - get_speed());
                break;
            case 8:
                set_y(get_y() + get_speed());
                set_x(get_x() - get_speed());
                break;
        }
    }
}
void Animal::kill()
{
    alive=false;
}