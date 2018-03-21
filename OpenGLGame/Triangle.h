#pragma once
#include "Shape.h"
class Triangle :
	public Shape
{
public:
	Triangle();
	~Triangle();
	void draw(unsigned int &VBO) override;
};

