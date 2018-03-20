#pragma once
#include <vector>
#include "Main.cpp"
class Position
{
public:
	Position();
	Position(std::vector<float> vecPos);
	~Position();
	float getX();
	float getY();
	float getZ();
	void setX(float f);
	void setY(float f);
	void setZ(float f);
	void setX(Position p);
	void setY(Position p);
	void setZ(Position p);
	void addX(float f);
	void addY(float f);
	void addZ(float f);
	void addX(Position p);
	void addY(Position p);
	void addZ(Position p);
	void setPos(std::vector<float> vecPos);
	void setPos(float x, float y, float z);
	std::vector<float> getPos();

	float operator[](size_t index);
	

private:	
	std::vector<float> pos;
};