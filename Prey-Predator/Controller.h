#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <vector>
using namespace std;

class Controller {

private:
	vector<Rabbit> vecRabbit;		// ������� ���� ��� ������ ����� �� ������, ���� 
	vector<Wolf> vecWolf;
	Map gameMap;
	// ����� ����� ��������� �� ���� ����������� ���� �������� ���������
	// �����, ������� � �.�
	// ������� ������� �������


public:

	void setVecRabbit(vector<Rabbit> vecRabbit); // ������ ��� ��������� ������
	void setVecWolf(vector<Wolf> vecWolf);
	void setMap(Map gameMap);

	vector<Rabbit> getVecRabbit(); // ������ ��� ��������� ������
	vector<Wolf> getVecWolf();
	Map getMap();

	void start();	//����� ���������, �������� ���������� ���������

	void refresh(); //��������� ����� ���� ������� ����

	void insertToFile(); //������� ��� ������ �� ���������� ����� � �����
	void getFromFile();
};



#endif // !CONTROLLER_H