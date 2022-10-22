//
// Created by PC1 on 21.10.2022.
//

#ifndef PREY_PREDATOR_ANIMAL_H
#define PREY_PREDATOR_ANIMAL_H

struct Coordinates{
    int x;
    int y;
};
class Animal {
private:
    bool alive;
    Coordinates position;
    static num_of_animals;
public:
    Animal();
    Animal(int x, int y);
    virtual ~Animal();
    void set_x(int x);
    void set_y(int y);
    void live();
    void death();
    int get_x();
    int get_y();
    bool get_alive();
    int get_num_of_animals();
    double Distance_between_objects(int x, int y);
};


#endif //PREY_PREDATOR_ANIMAL_H
