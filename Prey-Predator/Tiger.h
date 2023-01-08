//
// Created by PC1 on 23.10.2022.
//

#ifndef PREY_PREDATOR_TIGER_H
#define PREY_PREDATOR_TIGER_H
#include "Animal.h"
#include <vector>


using namespace std;

class Deer;

class Tiger:public Animal {
private:
    int max_hp;
    int current_hp;
public:
    Tiger():Animal()
    {
        max_hp=100;
        current_hp=max_hp;
        set_speed(3);
    }
    Tiger(int x,int y, int speed=3):Animal(x, y, speed)
    {
        max_hp=100;
        current_hp=max_hp;
    }
    void fierceness();
    bool is_prey_near(vector<Deer> &prey);
    void born_predator(vector<Tiger> &predators);
};


#endif //PREY_PREDATOR_TIGER_H
