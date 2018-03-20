#pragma once
#include "Shape.h"
#include "Position.h"
class Cube :
	public Shape
{
public:
	Cube();
	void draw() override;
	void setPosition(Position pos1, Position pos2);
	~Cube();
	const int giveInt();

private:
	Position pos1;
	Position pos2;
};

