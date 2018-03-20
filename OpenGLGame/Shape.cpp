#include "Shape.h"



Shape::Shape()
{
}

void Shape::draw()
{
	glDrawArrays(GL_TRIANGLES, 0, vCount);
}

Shape::~Shape()
{
}