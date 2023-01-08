//
// Created by PC1 on 23.10.2022.
//

#include "Deer.h"
#include <cmath>


void Deer::live_process(TIme_of_year time,std::vector<Grass>&food_objects,std::vector<Deer> &deer_vector)//треба обсудити метод
{
    hunger_reduction();
    if(get_hunger()<=10)eat(food_objects);
    if(get_hunger()>=50 && is_another_Deer_near(deer_vector) && time.get_season()=="spring")
    {
        go_to_another_deer(deer_vector);
        give_birth(time,deer_vector);
    }
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
bool Deer::is_another_Deer_near(std::vector<Deer> &deer_vector)
{
    for(int i=0;i<deer_vector.size();i++)
    {
        if(Distance_between_objects(deer_vector[i].get_x(),deer_vector[i].get_y())<=100)
        {
            return true;
        }
    }
    return false;
}
void Deer::give_birth(TIme_of_year time,std::vector<Deer> &deer_vector)
{
    stay_for(time_to_birth,time);
    Deer baby(get_x(),get_y());
    deer_vector.push_back(baby);
    set_hunger(get_hunger()-30);
}
void Deer::go_to_another_deer(std::vector<Deer> &deer_vector)
{
    for(int i=0;i<deer_vector.size();i++)
    {
        if(Distance_between_objects(deer_vector[i].get_x(),deer_vector[i].get_y())<=100)
        {
            Coordinates deer_pos(deer_vector[i].get_x(),deer_vector[i].get_y());
            this->Animal::move_to(deer_pos);
        }
    }
}
void Deer::stay_for(int num_of_days,TIme_of_year time)
{
    for(int i=0;i<num_of_days;i++)
    {
        time.next_day();
    }
}
bool Deer::is_predator_near(std::vector<Tiger> &tigers)
{
    for(int i=0;i<tigers.size();i++)
    {
        if(Distance_between_objects(tigers[i].get_x(),tigers[i].get_y())<=100)
        {
            return true;
        }
    }
    return false;
}