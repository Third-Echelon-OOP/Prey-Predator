#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <vector>
using namespace std;

class Wolf{
public:
	int xW;
	int yW;
};
class Rabbit {
public:
	int xR;
	int yR;
};
class Map{
public:
	int length;
	int width;
};

class Controller {

private:
	vector<Rabbit> vecRabbit;		// Приватні змінні для масивів вовків та зайців, мапи 
	vector<Wolf> vecWolf;
	Map gameMap;
	// Також треба продумати від яких коефіцієнтів буде залежати симуляція
	// голод, старість і т.д
	// Скласти відповідні рівняння


public:
	// Сетери для приватних змінних
	void setVecRabbit(vector<Rabbit> Rabbits);
	void setVecWolf(vector<Wolf> Wolfs);
	void setMap(Map map);

	// Гетери для приватних змінних
	vector<Rabbit> getVecRabbit();
	vector<Wolf> getVecWolf();
	Map getMap();

	void start();	//Старт симуляції, введення початкових параметрів

	void refresh(); //Оновлення карти після кожного ходу

	void insertToFile(); //Функції для запису та зчитування даних з файлу
	void getFromFile();
};



#endif // !CONTROLLER_H