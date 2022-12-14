//
// Created by PC1 on 21.10.2022.
//

#ifndef PREY_PREDATOR_ANIMAL_H
#define PREY_PREDATOR_ANIMAL_H

#include "Coordinates.h"
#include "Interphase_movement.h"


class Animal:Move {
private:
    bool alive;
    Coordinates position;
    int speed;
    int hunger=0;
public:
    Animal();
    Animal(int x, int y, int speed);

    void set_x(int x);
    void set_y(int y);
    void live();
    int get_speed();
    void set_speed(int speed);
    void death_from_starvation();
    bool get_alive();
    double Distance_between_objects(int x, int y);
    void wandering()override;
    void move_to(Coordinates &pos)override;
    void hunger_reduction();
    int get_hunger();
    void set_hunger(int hunger);
    void go_straight_in_random_side();
    int get_x();
    int get_y();
    void kill();
};


#endif //PREY_PREDATOR_ANIMAL_H
