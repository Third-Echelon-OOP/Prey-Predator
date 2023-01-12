#include "Controller.h"
#include <iostream>
using namespace std;


Controller::Controller(int x, int y)
{
	Map newMap(x, y);
	setMap(newMap);
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

void Controller::setMap(Map newMap)
{
	gameMap = newMap;
}

void Controller::start() 
{
	int xTiger1 = rand() % gameMap.getSize().getX() + 1;
	int yTiger1 = rand() % gameMap.getSize().getY() + 1;

	int xDeer1 = rand() % gameMap.getSize().getX() + 1;
	int yDeer1 = rand() % gameMap.getSize().getY() + 1;

	while (xTiger1 == xDeer1 && yTiger1 == yDeer1)
	{
		int xDeer1 = rand() % gameMap.getSize().getX() + 1;
		int yDeer1 = rand() % gameMap.getSize().getY() + 1;
	}
	Tiger firstTiger(xTiger1, yTiger1, 1);
	Deer firstDeer(xDeer1, yDeer1, 1);

	int xTiger2 = rand() % gameMap.getSize().getX() + 1;
	int yTiger2 = rand() % gameMap.getSize().getY() + 1;

	int xDeer2 = rand() % gameMap.getSize().getX() + 1;
	int yDeer2 = rand() % gameMap.getSize().getY() + 1;

	while (xTiger2 == xDeer2 && yTiger2 == yDeer2)
	{
		int xDeer2 = rand() % gameMap.getSize().getX() + 1;
		int yDeer2 = rand() % gameMap.getSize().getY() + 1;
	}
	Tiger secondTiger(xTiger2, yTiger2, 1);
	Deer secondDeer(xDeer2, yDeer2, 1);

	TigersArray.push_back(firstTiger);
	DeersArray.push_back(firstDeer);
	TigersArray.push_back(secondTiger);
	DeersArray.push_back(secondDeer);

	setStatistics();

	TStatistic->getAmount().push_back(TigersArray.size());
	DStatistic->getAmount().push_back(DeersArray.size());
	currTime.next_day();

	for (int i = 0; i < 20; i++)
	{
		gameMap.generateGrass(20);
	}

}

void Controller::refresh() 
{
	for (int i = 0; i < DeersArray.size(); i++)
	{
		if (DeersArray[i].get_alive() == true)
		{
			DeersArray[i].hunger_reduction();
			if (DeersArray[i].get_hunger() <= 60)
			{
				DeersArray[i].eat(gameMap.getObjectArr());
			}
			if (DeersArray[i].get_hunger() >= 50 && DeersArray[i].is_another_Deer_near(DeersArray) && currTime.get_season() == "spring")
			{
				DeersArray[i].go_to_another_deer(DeersArray);
				DeersArray[i].give_birth(currTime, DeersArray);
			}
		}
		else
		{
			DeersArray.erase(DeersArray.begin() + i);
		}
	}

	
	for (int i = 0; i < TigersArray.size(); i++)
	{
		if (TigersArray[i].get_alive() == true)
		{
			TigersArray[i].hunger_reduction();
			while (TigersArray[i].get_hunger() <= 60) // Коли жетва далеко від тигра він рандомно зміщується поки не знайде Оленя
														// Це займає багато часу і програма висне
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
							DeersArray.erase(DeersArray.begin() + i);
							TigersArray[i].set_hunger(TigersArray[i].get_hunger() + 20);
							TigersArray[i].fierceness();
							
						}
					}
				}
				TigersArray[i].go_straight_in_random_side();
			}
		}
		else
		{
			TigersArray.erase(TigersArray.begin() + i);
		}
	}

	TStatistic->getAmount().push_back(TigersArray.size());
	DStatistic->getAmount().push_back(DeersArray.size());
	currTime.next_day();
	gameMap.generateGrass(20);
	TStatistic->printLastDayStatistic();
	DStatistic->printLastDayStatistic();

}


void Controller::setStatistics()
{
	Population_interface* creator = new TigersPopulation();
	TStatistic = creator->create();


	creator = new DeersPopulation();
	DStatistic = creator->create();
}
