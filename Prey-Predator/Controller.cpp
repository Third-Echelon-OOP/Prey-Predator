#include "Controller.h"
#include <iostream>
using namespace std;


Controller::Controller(int x, int y)
{
	Map map(x, y);
	setMap(map);
}

vector<Deer> Controller::getDeersArray()
{
	return DeersArray;
}

vector<Tiger> Controller::getTigersArray()
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

	// deer born new deer and move to free coordinates, or just move to free coordinates.
	for (int i = 0; i < DeersArray.size(); i++)
	{
		if (DeersArray[i].get_alive() == true)
		{
			int newX, newY;   // new coordinates for current deer

			//function to find free coordinates

			if (DeersArray[i].get_birth_count == deerBirthCount)   //Add field birthCount to animal; getter and setter for it 
			{
				Deer childDeer(DeersArray[i].get_x(), DeersArray[i].get_x(), 1);
				DeersArray.push_back(childDeer);

				DeersArray[i].set_birth_count(0);
				// move current deer to newX, newY
				DeersArray[i].move_to({ newX, newY });
			}
			else
			{
				DeersArray[i].set_birth_count(DeersArray[i].get_birth_count + 1);
				// move current deer to newX, newY
				DeersArray[i].move_to({ newX, newY });
			}
		}
	}

	// if tiger starves and deer near tiger eats it
	// else if deer in range of detection tiger go to it
	// else tiger go to random free coordinates

	// finally if tiger dont starving it born new tiger
	for (int i = 0; i < TigersArray.size(); i++)
	{
		if (TigersArray[i].get_alive() == true)
		{
			
		}
	}
}


void Controller::saveToFile()
{
	ofstream out("saveFile.txt");

	if (!out)
	{
		cout << "Can't create file" << endl;
		return;
	}

	int sizeTigers = TigersArray.size(), sizeDeers = DeersArray.size();

	out << gameMap << sizeDeers << sizeTigers;

	for (int i = 0; i < sizeDeers; i++)
	{
		out << DeersArray[i];
	}

	for (int i = 0; i < sizeTigers; i++)
	{
		out << TigersArray[i];
	}

	return;
}

void Controller::getFromFile()
{
	ifstream in("saveFile.txt");

	if (!in)
	{
		cout << "Can't open the file" << endl;
		return;
	}

	int sizeDeers, sizeTigers;
	Tiger tempTiger;
	Deer tempDeer;

	getDeersArray().clear();
	getTigersArray().clear();

	in >> gameMap >> sizeDeers >> sizeTigers;

	for (int i = 0; i < sizeDeers; i++)
	{
		in >> tempDeer;
		getDeersArray().push_back(tempDeer);
	}

	for (int i = 0; i < sizeTigers; i++)
	{
		in >> tempTiger;
		getTigersArray().push_back(tempTiger);
	}
	
	return;
}