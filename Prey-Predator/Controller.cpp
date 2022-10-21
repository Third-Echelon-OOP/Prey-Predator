#include "Controller.h"
#include <iostream>
using namespace std;

void Controller::start() {

    Map gameMap;

    do    // Введення розмірів карти для симуляції
    {
        cout << "Enter length of map: ";
        cin >> gameMap.length;

        cout << "Enter width of field: ";
        cin >> gameMap.width;

        if ((gameMap.length < 100) && (gameMap.width < 100))
        {
            cout << "Too small map for 2 animals" << endl;
        }
    } while ((gameMap.length < 100) && (gameMap.width < 100)); // Мінімальні розміри карти можна змінити


    /*cout << "Enter time which wolf can survive without food: ";   // Введення коефіцієнтів для симуляції
    cin >> ;

    cout << "Enter time needed for new rabbit to be born: ";
    cin >> ;

    cout << "Enter number of rabbits needed for new wolf to be born: ";
    cin >> ;*/


    //vector<Rabbit> vecRabbit;   //Створення вектора зайців

    //unsigned int xR = rand() % gameMap.length + 1;
    //unsigned int yR = rand() % gameMap.width + 1;

    //Rabbit firstRabbit(xR, yR); // Конструктор зайця

    //vecRabbit.push_back(firstRabbit);

    //vector<Wolf> vecWolf; // Сворення вектора вовків

    //unsigned int xW = rand() % gameMap.length + 1;
    //unsigned int yW = rand() % gameMap.width + 1;

    //while ((xR == xW) && (yR == yW))
    //{
    //    xW = rand() % gameMap.length + 1;
    //    yW = rand() % gameMap.width + 1;
    //}

    //Wolf firstWolf(xW, yW); // Конструктор зайця

    //vecWolf.push_back(firstWolf);

    //Controller::setVecRabbit(vecRabbit);
    //Controller::setVecRabbit(vecWolf);
    //Controller::setMap(gameMap);
}

void Controller::refresh() {


}