#pragma once
#include "Shape.h"
#include "Position.h"
class Cube :
	public Shape
{
public:
	Cube();
	void draw(unsigned int &VBO) override;
	void setPosition(Position pos1, Position pos2);
	~Cube();
	const int giveInt();

private:
	Position pos1;
	Position pos2;
};

