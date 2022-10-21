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
	vector<Rabbit> vecRabbit;		// ������� ���� ��� ������ ����� �� ������, ���� 
	vector<Wolf> vecWolf;
	Map gameMap;
	// ����� ����� ��������� �� ���� ����������� ���� �������� ���������
	// �����, ������� � �.�
	// ������� ������� �������


public:
	// ������ ��� ��������� ������
	void setVecRabbit(vector<Rabbit> Rabbits);
	void setVecWolf(vector<Wolf> Wolfs);
	void setMap(Map map);

	// ������ ��� ��������� ������
	vector<Rabbit> getVecRabbit();
	vector<Wolf> getVecWolf();
	Map getMap();

	void start();	//����� ���������, �������� ���������� ���������

	void refresh(); //��������� ����� ���� ������� ����

	void insertToFile(); //������� ��� ������ �� ���������� ����� � �����
	void getFromFile();
};



#endif // !CONTROLLER_H