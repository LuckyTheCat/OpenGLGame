#include "Triangle.h"


float *vertices;
Triangle::Triangle()
{

	vertices = new float[9] {
		-0.5f, -0.5f, 0.0f,
		0.5f, -0.5f, 0.0f,
		0.0f,  0.5f, 0.0f
	};
}

void Triangle::draw()
{

	glDrawArrays(GL_TRIANGLES, 0, 3);
}



Triangle::~Triangle()
{
}
