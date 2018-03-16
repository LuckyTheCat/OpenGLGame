#pragma once
#include "GLFW\glfw3.h"
#include <vector>
class Shape
{
public:
	Shape();
	~Shape();
	virtual void draw();
protected:
	int vCount = 0;
	GLfloat *verts;
};

