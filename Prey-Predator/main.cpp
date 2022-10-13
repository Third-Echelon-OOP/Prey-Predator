// Prey-Predator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
void start() {};
void load() {};

int main() {

	int command;

	cout << "--------Prey - predator model--------" << endl
		<< "Pres '1' to start symulation" << endl
		<< "Pres '2' to load existing symulation" << endl
		<< "Pres '3' to exit program" << endl;

	while (1) {
		cout << "Enter command:" << endl;
		cin >> command;
		switch (command)
		{
		case 1: {
			start();
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

