//
// Created by PC1 on 23.10.2022.
//
#include "Tiger.h"
#include "Deer.h"

void Tiger::fierceness()
{
    if(get_hunger()<=20) set_speed(4);
    else if(get_hunger()>20) set_speed(3);
}

bool Tiger::is_prey_near(std::vector<Deer>& prey)
{
    for(int i=0;i<prey.size();i++)
    {
        if(Distance_between_objects(prey[i].get_x(),prey[i].get_y())<=100 && prey[i].get_alive())
            return true;
    }
    return false;
}

void Tiger::born_predator(std::vector<Tiger>& predators)
{
    if(get_hunger()>=90)
    {
        Tiger baby(get_x(),get_y());
        predators.push_back(baby);
        set_hunger(get_hunger()-60);
    }
}
