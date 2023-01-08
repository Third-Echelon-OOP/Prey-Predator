#include "Controller.h"
#include <iostream>
using namespace std;


Controller::Controller(int x, int y)
{
	getMap().getSize().setX(x);
	getMap().getSize().setY(y);
}

vector<Deer>& Controller::getDeersArray()
{
	return DeersArray;
}

vector<Tiger>& Controller::getTigersArray()
{
	return TigersArray;
}

Map Controller::getMap()
{
	return gameMap;
}


void Controller::start() 
{
	int xTiger = rand() % gameMap.getSize().getX() + 1;
	int yTiger = rand() % gameMap.getSize().getY() + 1;

	int xDeer = rand() % gameMap.getSize().getX() + 1;
	int yDeer = rand() % gameMap.getSize().getY() + 1;

	while (xTiger == xDeer && yTiger == yDeer)
	{
		int xDeer = rand() % gameMap.getSize().getX() + 1;
		int yDeer = rand() % gameMap.getSize().getY() + 1;
	}
	Tiger firstTiger(xTiger, yTiger, 1);
	Deer firstDeer(xDeer, yDeer, 1);

	TigersArray.push_back(firstTiger);
	DeersArray.push_back(firstDeer);

}

void Controller::refresh() 
{
	for (int i = 0; i < DeersArray.size(); i++)
	{
		if (DeersArray[i].get_alive() == true)
		{
			DeersArray[i].hunger_reduction();
			if (DeersArray[i].get_hunger() <= 10)
			{
				DeersArray[i].eat();
			}
			if (DeersArray[i].get_hunger() >= 50 && DeersArray[i].is_another_Deer_near(DeersArray) && time.get_season() == "spring")
			{
				DeersArray[i].go_to_another_deer(DeersArray);
				DeersArray[i].give_birth(time, DeersArray);
			}
		}
	}

	
	for (int i = 0; i < TigersArray.size(); i++)
	{
		if (TigersArray[i].get_alive() == true)
		{
			while (TigersArray[i].get_hunger() < tigersHungerCount)
			{
				if (TigersArray[i].is_prey_near(getDeersArray()))
				{
					TigersArray[i].fierceness();
					for (int i = 0; i < getDeersArray().size(); i++)
					{
						if (TigersArray[i].Distance_between_objects(getDeersArray()[i].get_x(), getDeersArray()[i].get_y()) <= 100)
						{
							Coordinates pos(getDeersArray()[i].get_x(), getDeersArray()[i].get_y());
							TigersArray[i].move_to(pos);
							getDeersArray()[i].kill();
							TigersArray[i].set_hunger(TigersArray[i].get_hunger() + 20);
							TigersArray[i].fierceness();
							
						}
					}
				}
			}
			TigersArray[i].go_straight_in_random_side();
		}
	}
}


void Controller::saveToFile()
{

}

void Controller::getFromFile()
{

}