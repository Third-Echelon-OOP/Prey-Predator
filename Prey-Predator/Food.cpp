#include "Food.h"

Food::Food()
{
    amount = 0;
}

Food::Food(int amount) {
    this->amount = amount;
}

bool Food::checkFood() {
    if (amount == 0)
    {
        return false;
    }
    return true;
}

void Food::changeFood(int change) {
    if (amount + change < 0){
        amount = 0;
    }
    else {
        amount += change;
    }
}

// Food::~Food()
// {
// }