#include "Shape.h"



Shape::Shape()
{
}

void Shape::draw(unsigned int &VBO)
{
	glDrawArrays(GL_TRIANGLES, 0, vCount);
}

Shape::~Shape()
{
}