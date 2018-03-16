#include "Position.h"
#include "Exceptions.h"


Position::Position()
{
	pos = std::vector<float>(3);
}

Position::Position(std::vector<float> vecPos)
{

}


Position::~Position()
{
}

float Position::getX()
{
	return pos[0];
}

float Position::getY()
{
	return pos[1];
}

float Position::getZ()
{
	return pos[2];
}

void Position::setX(float f)
{
	pos[0] = f;
}

void Position::setY(float f)
{
	pos[1] = f;
}

void Position::setZ(float f)
{
	pos[2] = f;
}


void Position::setX(Position p)
{
	pos[0] = p[0];
}

void Position::setY(Position p)
{
	pos[1] = p[1];
}

void Position::setZ(Position p)
{
	pos[2] = p[2];

}

void Position::addX(float f)
{
	pos[0] += f;
}

void Position::addY(float f)
{
	pos[1] += f;
}

void Position::addZ(float f)
{
	pos[2] += f;
}


void Position::addX(Position p)
{
	pos[0] += p[0];
}

void Position::addY(Position p)
{
	pos[1] += p[1];
}

void Position::addZ(Position p)
{
	pos[2] += p[2];
}

void Position::setPos(std::vector<float> vecPos)
{
	pos = vecPos;
}

void Position::setPos(float x, float y, float z)
{
	pos[0] = x;
	pos[1] = y;
	pos[2] = z;
}

std::vector<float> Position::getPos()
{
	return pos;
}

float Position::operator[](size_t index)
{
	if (0 > index || index > 2)
		throw Exceptions::INVALID_RANGE;
	return pos[index];
}
