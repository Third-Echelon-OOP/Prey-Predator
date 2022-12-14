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
		<< "Pres '2' to load existing simulation" << endl
		<< "Pres '3' to exit program" << endl;

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
				
					if ((x < 1000) || (y < 1000))
					{
						cout << "Too small field to set 2 animals. Try again." << endl;
					}
				} while ((x < 1000) || (y < 1000));

				Controller control(x, y);
				control.start();

				control.refresh();
				control.refresh();
				control.refresh();
				control.refresh();
				control.refresh();
				control.refresh();
				control.refresh();
				control.refresh();
				control.refresh();
				control.refresh();
				control.refresh();
				control.refresh();
				control.refresh();
				control.refresh();
				control.refresh();

				// Добавить если популяция вымирает то завершить симуляцию
			}
			case 2: {
				load();
			}
			case 3: {
				cout << "Close app" << endl;
				exit(3);
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

