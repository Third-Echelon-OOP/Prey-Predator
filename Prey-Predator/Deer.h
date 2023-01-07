//
// Created by PC1 on 23.10.2022.
//

#ifndef PREY_PREDATOR_DEER_H
#define PREY_PREDATOR_DEER_H
#include "Animal.h"
#include <vector>
#include "Grass.h"
#include "TIme_of_year.h"
#include "Tiger.h"

class Deer:public Animal {
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
    void live_process(TIme_of_year time, std::vector<Grass>&food_objects,std::vector<Deer> &deer_vector);
    int find_food(std::vector<Grass>&food_objects);
    void eat(std::vector<Grass>&food_objects);
    bool is_food_near(std::vector<Grass>&food_objects);
    bool is_satisfied();
    bool is_another_Deer_near(std::vector<Deer>&deer_vector);
    void give_birth(Coordinates pos, TIme_of_year time,std::vector<Deer> &deer_vector);
    void go_to_another_deer(std::vector<Deer>&deer_vector);
    void stay_for(int num_of_days,TIme_of_year time);
    bool is_predator_near(std::vector<Tiger>&tigers);
};


#endif //PREY_PREDATOR_DEER_H
