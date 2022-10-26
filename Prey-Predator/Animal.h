//
// Created by PC1 on 21.10.2022.
//

#ifndef PREY_PREDATOR_ANIMAL_H
#define PREY_PREDATOR_ANIMAL_H

#include "Coordinates.h"

class Animal {
private:
    bool alive;
    Coordinates position;
    int num_of_animals;
    int speed = 1;
public:
    Animal();
    Animal(int x, int y, int speed);

    void set_x(int x);
    void set_y(int y);
    void live();
    int get_speed();
    void set_speed(int speed);
    void death();
    int get_x();
    int get_y();
    bool get_alive();
    int get_num_of_animals();
    double Distance_between_objects(int x, int y);
    void wandering();
    void move_to(Coordinates &pos);
};


#endif //PREY_PREDATOR_ANIMAL_H
