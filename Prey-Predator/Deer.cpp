//
// Created by PC1 on 23.10.2022.
//

#include "Deer.h"
#include <cmath>


void Deer::live_process(std::vector<Grass>&food_objects)
{
    hunger_reduction();
    if(get_hunger()<=10)eat(food_objects);
}
int Deer::find_food(std::vector<Grass>&food_objects)
{
    for(int i=0;i<food_objects.size();i++)
    {
        if(Distance_between_objects(food_objects[i].get_x(),food_objects[i].get_y())<=double(100))
        {
            Coordinates food_pos(food_objects[i].get_x(),food_objects[i].get_y());
            this->Animal::move_to(food_pos);
        }
    }
}
bool Deer::is_food_near(std::vector<Grass> &food_objects)
{
    for(int i=0;i<food_objects.size();i++)
    {
        if(Distance_between_objects(food_objects[i].get_x(),food_objects[i].get_y())<=this->get_speed())
        {
            return true;
        }
    }
    return false;
}
void Deer::eat(std::vector<Grass>&food_objects)
{
    while(is_satisfied()!=1)
    {
        find_food(food_objects);
        if(is_food_near(food_objects)&&get_hunger()<=10)
        {
            set_hunger(get_hunger()+80);
        }
        else
        {
            go_straight_in_random_side();
        }
    }
}
bool Deer::is_satisfied()
{
    if(this->get_hunger()>=80)return true;
    else return false;
}