// Prey-Predator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Controller.h"

using namespace std;

void load() {};

int main() {

	int command;
	cout << "--------Prey - predator model--------" << endl
		<< "Pres '1' to start simulation" << endl
		<< "Pres '2' to exit program" << endl;

	while (1) {
		cout << "Enter command:" << endl;
		cin >> command;
		switch (command)
		{
			case 1: {
				int x, y;
				do
				{
					cout << "Enter length of map: ";
					cin >> y;
				
					cout << "Enter width of map: ";
					cin >> x;
				
					if ((x < 100) || (y < 100))
					{
						cout << "Too small map. Try again." << endl;
					}
				} while ((x < 100) || (y < 100));

				Controller control(x, y);
				control.start();

				while (1)
				{
					control.refresh();
					cout << "Press '0' to pause simulation" << endl << "Press '1' to continue simulation" << endl;
					cin >> command;
					switch (command)
					{
					case 0:
					{
						cout << "Press '1' to continue simulation" << endl << "Press '2' to exit simulation" << endl;
						cin >> command;
						if (command == 1)continue;
						else if (command == 2)break;
					}
					case 1:
					{
						continue;
					}
					default:
						cout << "No such command. Try one more time" << endl;
						cin.clear();
						cin.sync();
						break;
					}
				}
			}
			case 2: {
				cout << "Close app" << endl;
				exit(2);
			}
			default: {
				cout << "No such command. Try one more time" << endl;
				cin.clear();
				cin.sync();
				break;
			}
		}
	}

	return 0;
}

