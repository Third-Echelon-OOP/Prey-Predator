//
// Created by PC1 on 23.10.2022.
//

#ifndef PREY_PREDATOR_DEER_H
#define PREY_PREDATOR_DEER_H
#include "Animal.h"

class Deer:Animal {
private:
	int max_hp;
	int current_hp;
public:
	Deer():Animal()
	{
		max_hp = 100;
		current_hp = max_hp;
		set_speed(2);
	}
	Deer(int x, int y, int speed = 2) :Animal(x, y, speed) 
	{
		max_hp = 100;
		current_hp = max_hp;
	}
};


#endif //PREY_PREDATOR_DEER_H
