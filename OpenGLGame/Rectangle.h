#pragma once
#include "Shape.h"
class Rectangle :
	public Shape
{
public:
	Rectangle();
	~Rectangle();
	void draw(unsigned int &VBO) override;
};

