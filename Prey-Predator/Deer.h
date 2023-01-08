//
// Created by PC1 on 23.10.2022.
//

#ifndef PREY_PREDATOR_DEER_H
#define PREY_PREDATOR_DEER_H

#include "Animal.h"
#include "Grass.h"
#include "TIme_of_year.h"
#include <vector>

using namespace std;

class Tiger;

class Deer:public Animal {
private:
	int max_hp;
	int current_hp;
    int time_to_birth;
public:
	Deer():Animal()
	{
		max_hp = 100;
		current_hp = max_hp;
		set_speed(2);
	}
	Deer(int x, int y, int speed = 2,int time_to_birth = 5) :Animal(x, y, speed)
	{
		max_hp = 100;
		current_hp = max_hp;
        this->time_to_birth = time_to_birth;
	}

    void find_food(vector<Grass> &food_objects);
    void eat(vector<Grass> &food_objects);
    bool is_food_near(vector<Grass> &food_objects);
    bool is_satisfied();
    bool is_another_Deer_near(vector<Deer> &deer_vector);
    void give_birth(TIme_of_year time, vector<Deer> &deer_vector);
    void go_to_another_deer(vector<Deer> &deer_vector);
    void stay_for(int num_of_days,TIme_of_year time);
    bool is_predator_near(vector<Tiger> &tigers);
};


#endif //PREY_PREDATOR_DEER_H
