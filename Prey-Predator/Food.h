#ifndef PREY_PREDATOR_FOOD_H
#define PREY_PREDATOR_FOOD_H

class Food
{
private:
    int amount;
public:
    Food();
    Food(int amount);

    bool checkFood();
    void changeFood(int change);
    // ~Food();
};


#endif //PREY_PREDATOR_FOOD_H