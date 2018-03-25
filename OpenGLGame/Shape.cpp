#include "Shape.h"



Shape::Shape()
{
	glBufferData(GL_ARRAY_BUFFER, sizeof(verts) * sizeof(GLfloat), verts, GL_STATIC_DRAW);
}

void Shape::draw(unsigned int &VBO)
{
	glDrawArrays(GL_TRIANGLES, 0, sizeof(verts));
}

Shape::~Shape()
{
}