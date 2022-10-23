//
// Created by PC1 on 23.10.2022.
//

#ifndef PREY_PREDATOR_INTERPHASE_MOVEMENT_H
#define PREY_PREDATOR_INTERPHASE_MOVEMENT_H
class Move{
    virtual void move() = 0;
    virtual void move_to(int x, int y) = 0;
    virtual void wandering() = 0;
};
#endif //PREY_PREDATOR_INTERPHASE_MOVEMENT_H
