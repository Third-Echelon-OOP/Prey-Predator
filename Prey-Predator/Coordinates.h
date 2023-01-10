#pragma once
class Coordinates
{
private:
	int x;
	int y;
public:
	int getX();
	int getY();
	void setX(int newX);
	void setY(int newY);
	Coordinates();
	Coordinates(int x, int y);
	float distance(Coordinates secondPoint);
	Coordinates operator +(Coordinates const& arg);
	Coordinates operator -(Coordinates const& arg);
};

