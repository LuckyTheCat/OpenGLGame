#pragma once
#include "Shape.h"
class Triangle :
	public Shape
{
public:
	Triangle();
	~Triangle();
	void draw() override;
};

